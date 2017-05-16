using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class LvlMenager : MonoBehaviour {

    public GameObject currentCheckpoint;

    private PlayerMovement player;

	void Start () {
        player = FindObjectOfType<PlayerMovement>();
	}
	
	void Update () {
		
	}
    public void RespawnPlayer()
    {
        player.transform.position = currentCheckpoint.transform.position;
    }
}
