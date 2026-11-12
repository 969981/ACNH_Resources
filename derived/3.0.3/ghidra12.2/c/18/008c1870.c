
undefined8 FUN_008c1870(long param_1,long *param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  char cVar4;
  uint uVar5;
  char *pcVar6;
  int iVar7;
  long lVar8;
  uint uVar9;
  char *pcVar10;
  
  uVar5 = 0;
  do {
    pcVar10 = "";
    if (uVar5 < 99) {
      pcVar10 = (&PTR_s_cNormal_04922de8)[uVar5];
    }
    (**(code **)(*param_2 + 0x18))(param_2);
    pcVar6 = (char *)param_2[1];
    if (pcVar10 == pcVar6) goto LAB_008c1974;
    if (*pcVar10 == *pcVar6) {
      if (*pcVar10 == '\0') goto LAB_008c1974;
      lVar8 = 0x7fffe;
      while( true ) {
        if (pcVar10[1] != pcVar6[1]) break;
        if (pcVar10[1] == '\0') goto LAB_008c1974;
        if (pcVar10[2] != pcVar6[2]) break;
        if (pcVar10[2] == '\0') goto LAB_008c1974;
        if ((lVar8 == 0) || (cVar4 = pcVar10[3], cVar4 != pcVar6[3])) break;
        lVar8 = lVar8 + -3;
        pcVar6 = pcVar6 + 3;
        pcVar10 = pcVar10 + 3;
        if (cVar4 == '\0') goto LAB_008c1974;
      }
    }
    uVar9 = 99;
    if ((int)uVar5 < 99) {
      uVar9 = uVar5 + 1;
    }
    uVar5 = uVar9;
  } while (uVar9 != 99);
  uVar5 = 0x62;
LAB_008c1974:
  if (uVar5 == 0x62) {
    (**(code **)(*param_2 + 0x18))(param_2);
    uVar5 = FUN_006bd550(param_2[1],0);
    iVar2 = *(int *)(param_1 + 0x305b0);
    if (iVar2 != 0) {
      uVar9 = 0;
      iVar7 = iVar2 + -1;
      if (iVar7 == 0 || iVar2 < 1) {
        lVar8 = *(long *)(param_1 + 0x305b8);
      }
      else {
        lVar8 = *(long *)(param_1 + 0x305b8);
        do {
          iVar2 = iVar7 + uVar9;
          if (iVar2 < 0 != SCARRY4(iVar7,uVar9)) {
            iVar2 = iVar2 + 1;
          }
          uVar1 = iVar2 >> 1;
          uVar3 = *(uint *)(*(long *)(lVar8 + (long)(int)uVar1 * 8) + 0x18);
          if (uVar3 == uVar5) goto joined_r0x008c1a40;
          if (uVar3 < uVar5) {
            uVar9 = uVar1 + 1;
          }
          else {
            iVar7 = uVar1 - 1;
          }
        } while ((int)uVar9 < iVar7);
      }
      uVar1 = uVar9;
      if (*(uint *)(*(long *)(lVar8 + (long)(int)uVar9 * 8) + 0x18) == uVar5) {
joined_r0x008c1a40:
        if (-1 < (int)uVar1) {
          return **(undefined8 **)(lVar8 + (ulong)uVar1 * 8);
        }
      }
    }
  }
  else if (uVar5 < *(uint *)(param_1 + 0x548)) {
    return *(undefined8 *)(*(long *)(param_1 + 0x550) + (long)(int)uVar5 * 8);
  }
  return 0;
}

