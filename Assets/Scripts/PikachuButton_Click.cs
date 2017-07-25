using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;

public class PikachuButton_Click : MonoBehaviour
{

	public Button mButton;

	// Use this for initialization
	void Start ()
	{
		// 获取 Pikachu 按钮
		Button pikachuBtn = mButton.GetComponent<Button> ();
		// 给 Pikachu 按钮绑定点击事件监听器
		pikachuBtn.onClick.AddListener (onPikachuBtnClick);
	}

	void onPikachuBtnClick ()
	{
		// 加载 Scene1
		SceneManager.LoadScene ("Scene1");
	}
}
