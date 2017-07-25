using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;

public class BackButton_Click : MonoBehaviour
{

	public Button mButton;

	// Use this for initialization
	void Start ()
	{
		// 获取 Back 按钮
		Button backBtn = mButton.GetComponent<Button> ();
		// 给 Back 按钮绑定点击事件监听器
		backBtn.onClick.AddListener (onBackBtnClick);
	}

	void onBackBtnClick ()
	{
		// 加载 Menu
		SceneManager.LoadScene ("Menu");
	}
}
