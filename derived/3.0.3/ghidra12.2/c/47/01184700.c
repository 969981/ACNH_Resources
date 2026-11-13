
int FUN_01184700(long param_1,undefined8 param_2)

{
  long lVar1;
  ulong uVar2;
  int iVar3;
  uint uVar4;
  ulong uVar5;
  char cVar6;
  char *pcVar7;
  long *plVar8;
  char *pcVar9;
  undefined *local_40;
  long lStack_38;
  
  plVar8 = *(long **)(*(long *)(*(long *)(param_1 + 0x18) + 0x288) + 0x18);
  (**(code **)(*plVar8 + 0x18))(plVar8);
  lStack_38 = plVar8[1];
  local_40 = PTR_DAT_04bb2020 + 0x10;
  cVar6 = *DAT_050b8de0;
  if (cVar6 != '\0') {
    lVar1 = param_1 + 8;
    pcVar9 = *(char **)(param_1 + 0x10);
    pcVar7 = DAT_050b8de0;
    do {
      pcVar7 = pcVar7 + 1;
      if (*pcVar9 != cVar6) {
        iVar3 = FUN_0070fb10(*(undefined8 *)(param_1 + 0x18),lVar1,param_2,&local_40);
        (**(code **)(*(long *)(param_1 + 8) + 0x18))(lVar1);
        (**(code **)(*(long *)(param_1 + 8) + 0x18))(lVar1);
        pcVar9 = *(char **)(param_1 + 0x10);
        (**(code **)(DAT_050b8de8 + 0x18))(&DAT_050b8de8);
        if (pcVar9 != DAT_050b8df0) {
          cVar6 = **(char **)(param_1 + 0x10);
          if (cVar6 != *DAT_050b8df0) {
            return iVar3;
          }
          if (cVar6 != '\0') {
            pcVar9 = *(char **)(param_1 + 0x10) + 2;
            uVar2 = 0;
            goto LAB_01184824;
          }
        }
        uVar4 = 1;
        if (iVar3 != 0) {
          return iVar3;
        }
        goto LAB_011848a0;
      }
      cVar6 = *pcVar7;
      pcVar9 = pcVar9 + 1;
    } while (cVar6 != '\0');
  }
  return 0;
  while( true ) {
    if (pcVar9[uVar5 - 1] != DAT_050b8df0[uVar5 + 1]) {
      pcVar9 = (char *)0x0;
      goto LAB_01184890;
    }
    if (pcVar9[uVar5 - 1] == '\0') goto LAB_01184868;
    if (pcVar9[uVar5] != DAT_050b8df0[uVar5 + 2]) {
      pcVar9 = (char *)0x0;
      uVar5 = uVar5 | 1;
      goto LAB_01184890;
    }
    uVar2 = uVar5 + 2;
    if (pcVar9[uVar5] == '\0') break;
LAB_01184824:
    uVar5 = uVar2;
    if (uVar5 == 0x80000) goto LAB_01184890;
  }
  uVar5 = uVar5 + 1;
LAB_01184868:
  pcVar9 = (char *)0x1;
LAB_01184890:
  uVar4 = (uint)(uVar5 < 0x80000) & (uint)pcVar9;
  if (iVar3 == 0) {
LAB_011848a0:
    if (uVar4 != 0) {
      iVar3 = 0;
      *(undefined4 *)(*(long *)(*(long *)(param_1 + 0x18) + 0x288) + 0x20) = 0;
    }
  }
  return iVar3;
}

