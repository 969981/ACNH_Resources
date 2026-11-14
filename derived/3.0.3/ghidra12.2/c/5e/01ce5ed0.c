
undefined4 FUN_01ce5ed0(long param_1,long *param_2,undefined8 *param_3)

{
  int iVar1;
  char cVar2;
  undefined4 uVar3;
  char *pcVar4;
  long lVar5;
  char *pcVar6;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  
  iVar1 = **(int **)(param_1 + 8);
  while( true ) {
    if (9 < iVar1) {
      return 0xffffffff;
    }
    (**(code **)(*param_2 + 0x18))(param_2);
    (**(code **)(*param_2 + 0x18))(param_2);
    pcVar6 = (char *)param_2[1];
    (**(code **)((&DAT_05360bc8)[(long)iVar1 * 0x16] + 0x18))(&DAT_05360bc8 + (long)iVar1 * 0x16);
    pcVar4 = (char *)(&DAT_05360bd0)[(long)iVar1 * 0x16];
    if (pcVar6 == pcVar4) break;
    cVar2 = *(char *)param_2[1];
    if (cVar2 == *pcVar4) {
      if (cVar2 == '\0') break;
      lVar5 = 0x7fffe;
      pcVar6 = (char *)param_2[1];
      while( true ) {
        if (pcVar6[1] != pcVar4[1]) break;
        if (pcVar6[1] == '\0') goto LAB_01ce5fec;
        if (pcVar6[2] != pcVar4[2]) break;
        if (pcVar6[2] == '\0') goto LAB_01ce5fec;
        if ((lVar5 == 0) || (cVar2 = pcVar6[3], cVar2 != pcVar4[3])) break;
        lVar5 = lVar5 + -3;
        pcVar4 = pcVar4 + 3;
        pcVar6 = pcVar6 + 3;
        if (cVar2 == '\0') goto LAB_01ce5fec;
      }
    }
    iVar1 = **(int **)(param_1 + 8);
  }
LAB_01ce5fec:
  uStack_60 = *param_3;
  local_58 = param_3[1];
  local_68 = **(undefined8 **)(param_1 + 0x10);
  iVar1 = **(int **)(param_1 + 8);
  **(int **)(param_1 + 8) = iVar1 + 1;
  uVar3 = (**(code **)(&DAT_05360c58)[(long)iVar1 * 0x16])
                    (&DAT_05360c58 + (long)iVar1 * 0x16,&local_68);
  return uVar3;
}

