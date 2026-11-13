
undefined8 FUN_00cf7880(uint *param_1,long *param_2)

{
  char cVar1;
  char *pcVar2;
  long lVar3;
  uint uVar4;
  uint uVar5;
  char *pcVar6;
  
  uVar4 = 0;
  while( true ) {
    pcVar6 = "";
    if (uVar4 < 0xb) {
      pcVar6 = (&PTR_s_cFirstLive_0494a620)[uVar4];
    }
    (**(code **)(*param_2 + 0x18))(param_2);
    pcVar2 = (char *)param_2[1];
    if (pcVar6 == pcVar2) break;
    if (*pcVar6 == *pcVar2) {
      if (*pcVar6 == '\0') break;
      lVar3 = 0x7fffe;
      while( true ) {
        if (pcVar6[1] != pcVar2[1]) break;
        if (pcVar6[1] == '\0') goto LAB_00cf796c;
        if (pcVar6[2] != pcVar2[2]) break;
        if (pcVar6[2] == '\0') goto LAB_00cf796c;
        if ((lVar3 == 0) || (cVar1 = pcVar6[3], cVar1 != pcVar2[3])) break;
        lVar3 = lVar3 + -3;
        pcVar2 = pcVar2 + 3;
        pcVar6 = pcVar6 + 3;
        if (cVar1 == '\0') goto LAB_00cf796c;
      }
    }
    uVar5 = 0xb;
    if ((int)uVar4 < 0xb) {
      uVar5 = uVar4 + 1;
    }
    uVar4 = uVar5;
    if (uVar5 == 0xb) {
      return 0;
    }
  }
LAB_00cf796c:
  *param_1 = uVar4;
  return 1;
}

