
undefined8 FUN_01e733c0(uint *param_1,long *param_2)

{
  char cVar1;
  undefined *puVar2;
  char *pcVar3;
  long lVar4;
  uint uVar5;
  uint uVar6;
  char *pcVar7;
  
  puVar2 = PTR_s_cDefault_04bc1610;
  uVar5 = 0;
  while( true ) {
    pcVar7 = "";
    if (uVar5 < 0x36) {
      pcVar7 = *(char **)(puVar2 + (ulong)uVar5 * 8 + 0x370);
    }
    (**(code **)(*param_2 + 0x18))(param_2);
    pcVar3 = (char *)param_2[1];
    if (pcVar7 == pcVar3) break;
    if (*pcVar7 == *pcVar3) {
      if (*pcVar7 == '\0') break;
      lVar4 = 0x7fffe;
      while( true ) {
        if (pcVar7[1] != pcVar3[1]) break;
        if (pcVar7[1] == '\0') goto LAB_01e734ac;
        if (pcVar7[2] != pcVar3[2]) break;
        if (pcVar7[2] == '\0') goto LAB_01e734ac;
        if ((lVar4 == 0) || (cVar1 = pcVar7[3], cVar1 != pcVar3[3])) break;
        lVar4 = lVar4 + -3;
        pcVar3 = pcVar3 + 3;
        pcVar7 = pcVar7 + 3;
        if (cVar1 == '\0') goto LAB_01e734ac;
      }
    }
    uVar6 = 0x36;
    if ((int)uVar5 < 0x36) {
      uVar6 = uVar5 + 1;
    }
    uVar5 = uVar6;
    if (uVar6 == 0x36) {
      return 0;
    }
  }
LAB_01e734ac:
  *param_1 = uVar5;
  return 1;
}

