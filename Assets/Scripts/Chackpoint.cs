﻿using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Chackpoint : MonoBehaviour {

    public LvlMenager lvlMenager;

    void Start()
    {
        lvlMenager = FindObjectOfType<LvlMenager>();
    }

    void Update () {
		
	}
    void OnTriggerEnter2D(Collider2D other)
    {
        if (other.name == "Player")
        {
            lvlMenager.currentCheckpoint = gameObject;
        }
    }
}