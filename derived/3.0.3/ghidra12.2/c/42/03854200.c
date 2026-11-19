
undefined8 FUN_03854200(long param_1,long *param_2)

{
  uint uVar1;
  int iVar2;
  char cVar3;
  long lVar4;
  char *pcVar5;
  long lVar6;
  long *plVar7;
  ulong uVar8;
  char *pcVar9;
  undefined **local_e0;
  char *local_d8;
  int local_d0;
  char local_cc [127];
  undefined1 local_4d;
  int local_48;
  
  local_d0 = 0x80;
  local_4d = 0;
  local_e0 = &PTR_LAB_048fcff0;
  local_d8 = local_cc;
  (**(code **)(*param_2 + 0x18))(param_2);
  pcVar9 = (char *)param_2[1];
  if (local_cc != pcVar9) {
    (**(code **)(*param_2 + 0x18))(param_2);
    lVar4 = 0;
    do {
      if (*(char *)(param_2[1] + lVar4) == '\0') goto LAB_038542bc;
      lVar6 = param_2[1] + lVar4;
      if (*(char *)(lVar6 + 1) == '\0') {
        lVar4 = lVar4 + 1;
        goto LAB_038542bc;
      }
      if (*(char *)(lVar6 + 2) == '\0') {
        lVar4 = lVar4 + 2;
        goto LAB_038542bc;
      }
      lVar4 = lVar4 + 3;
    } while (lVar4 != 0x80001);
    lVar4 = 0;
LAB_038542bc:
    iVar2 = (int)lVar4;
    if (local_d0 <= (int)lVar4) {
      iVar2 = local_d0 + -1;
    }
    memcpy(local_cc,pcVar9,(long)iVar2);
    local_cc[iVar2] = '\0';
  }
  local_e0 = (undefined **)(PTR_DAT_04bb2d88 + 0x10);
  (**(code **)(*param_2 + 0x18))(param_2);
  local_48 = FUN_006bd550(param_2[1],0);
  uVar8 = 0;
  do {
    lVar4 = *(long *)(param_1 + 8 + (-(uVar8 >> 0x1f) & 0xfffffff800000000 | uVar8 << 3));
    if (((lVar4 != 0) && (*(long *)(lVar4 + 0xb8) == 0)) && (*(int *)(lVar4 + 0xa0) == local_48)) {
      plVar7 = (long *)(lVar4 + 8);
      (**(code **)(*plVar7 + 0x18))(plVar7);
      (**(code **)(*plVar7 + 0x18))(plVar7);
      pcVar9 = *(char **)(lVar4 + 0x10);
      (*(code *)local_e0[3])(&local_e0);
      if (pcVar9 == local_d8) {
LAB_0385440c:
        return *(undefined8 *)(param_1 + 8 + (long)(int)uVar8 * 8);
      }
      cVar3 = **(char **)(lVar4 + 0x10);
      if (cVar3 == *local_d8) {
        if (cVar3 == '\0') goto LAB_0385440c;
        lVar6 = 0x7fffe;
        pcVar9 = local_d8;
        pcVar5 = *(char **)(lVar4 + 0x10);
        while( true ) {
          if (pcVar5[1] != pcVar9[1]) break;
          if (pcVar5[1] == '\0') goto LAB_0385440c;
          if (pcVar5[2] != pcVar9[2]) break;
          if (pcVar5[2] == '\0') goto LAB_0385440c;
          if ((lVar6 == 0) || (cVar3 = pcVar5[3], cVar3 != pcVar9[3])) break;
          lVar6 = lVar6 + -3;
          pcVar9 = pcVar9 + 3;
          pcVar5 = pcVar5 + 3;
          if (cVar3 == '\0') goto LAB_0385440c;
        }
      }
    }
    uVar1 = (int)uVar8 + 1;
    uVar8 = (ulong)uVar1;
    if (uVar1 == 0x100) {
      return 0;
    }
  } while( true );
}

