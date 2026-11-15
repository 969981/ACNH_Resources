
void FUN_01ef34e4(long *param_1,long *param_2)

{
  int iVar1;
  bool bVar2;
  char *pcVar3;
  long lVar4;
  undefined8 local_18;
  
  if ((int)param_1[0xef6] == 0x33) {
    (**(code **)(*param_2 + 0x18))(param_2);
    pcVar3 = (char *)param_2[1];
    if (pcVar3 == s_Lower_04a621e0) {
      bVar2 = false;
    }
    else if ((((*pcVar3 != 'L') || (pcVar3[1] != 'o')) || (pcVar3[2] != 'w')) ||
            (((pcVar3[3] != 'e' || (pcVar3[4] != 'r')) || (bVar2 = false, pcVar3[5] != '\0')))) {
      (**(code **)(*param_2 + 0x18))(param_2);
      pcVar3 = (char *)param_2[1];
      if (pcVar3 != s_Upper_04a621e8) {
        if (*pcVar3 != 'U') {
          return;
        }
        if (pcVar3[1] != 'p') {
          return;
        }
        if (pcVar3[2] != 'p') {
          return;
        }
        if (pcVar3[3] != 'e') {
          return;
        }
        if (pcVar3[4] != 'r') {
          return;
        }
        if (pcVar3[5] != '\0') {
          return;
        }
      }
      bVar2 = true;
    }
    if (bVar2) {
                    /* WARNING: Could not recover jumptable at 0x01ef36d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x38))(param_1,0x34,param_1 + 0xf00,0);
      return;
    }
    if (*(int *)((long)param_1 + 0xae74) != 4) {
      lVar4 = param_1[2];
      local_18 = 0;
      *(undefined4 *)((long)param_1 + 0xae74) = 4;
      FUN_01e5a930(0x40000000,lVar4,0xd,PTR_DAT_04bb2150,(long)&local_18 + 4,&local_18,
                   PTR_DAT_04bc1600,6);
      pcVar3 = *(char **)(lVar4 + 0x3b8);
      if (pcVar3 != "NpcKKFesRhythmLowerFirst") {
        iVar1 = 0x18;
        if (*(int *)(lVar4 + 0x3c0) < 0x19) {
          iVar1 = *(int *)(lVar4 + 0x3c0) + -1;
        }
        memcpy(pcVar3,"NpcKKFesRhythmLowerFirst",(long)iVar1);
        pcVar3[iVar1] = '\0';
      }
      *(undefined4 *)(lVar4 + 0x3a0) = 0;
      *(undefined1 *)(lVar4 + 0x410) = 0;
    }
  }
  return;
}

