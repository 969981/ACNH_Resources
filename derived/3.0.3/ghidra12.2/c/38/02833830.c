
void FUN_02833830(void)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  char *pcVar4;
  long *plVar5;
  
  if ((DAT_05ae7790 != 0) &&
     (plVar2 = (long *)nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68)),
     plVar2 != (long *)0x0)) {
    plVar5 = plVar2 + 4;
    (**(code **)(*plVar5 + 0x18))(plVar5);
    (**(code **)(*plVar5 + 0x18))(plVar5);
    pcVar4 = (char *)plVar2[5];
    if (pcVar4 != "SceneLoad") {
      if (*pcVar4 != 'S') {
LAB_028338e0:
        (**(code **)(*plVar2 + 0x60))(plVar2);
        (**(code **)(*plVar2 + 0x58))(plVar2,0x1f);
        do {
          nn::os::ConvertToTimeSpan(0);
          nn::os::SleepThread();
        } while( true );
      }
      lVar3 = 0;
      do {
        if ((lVar3 == 0x80000) || (lVar1 = lVar3 + 1, pcVar4[lVar1] != "SceneLoad"[lVar3 + 1]))
        goto LAB_028338e0;
        lVar3 = lVar3 + 1;
      } while (pcVar4[lVar1] != '\0');
    }
  }
  return;
}

