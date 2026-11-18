
void FUN_032d1820(long *param_1,int param_2)

{
  long lVar1;
  undefined **ppuVar2;
  long *plVar3;
  undefined8 *puVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  undefined *local_50;
  undefined *puStack_48;
  long *local_30;
  undefined8 local_8;
  
  lVar6 = DAT_05688e68;
  if ((int)param_1[0x20] == param_2) {
    return;
  }
  ppuVar2 = &local_50;
  if (*param_1 == 0) {
    *(int *)(param_1 + 0x20) = param_2;
    plVar5 = *(long **)(lVar6 + 0x560);
  }
  else {
    lVar7 = param_1[1];
    lVar1 = param_1[2];
    param_1[2] = 0;
    *param_1 = 0;
    param_1[1] = 0;
    if (*(long **)(lVar6 + 0x560) == param_1) {
      *(long *)(lVar6 + 0x560) = lVar1;
    }
    if (lVar1 != 0) {
      *(long *)(lVar1 + 8) = lVar7;
    }
    if (lVar7 != 0) {
      *(long *)(lVar7 + 0x10) = lVar1;
    }
    *(int *)(param_1 + 0x20) = param_2;
    if (*param_1 != 0) goto LAB_032d1924;
    plVar5 = *(long **)(lVar6 + 0x560);
  }
  if (plVar5 == (long *)0x0) {
    *(undefined8 *)(lVar6 + 0x560) = param_1;
    *param_1 = lVar6 + 0x560;
  }
  else {
    plVar3 = plVar5;
    do {
      if ((int)plVar3[0x20] < param_2) {
        lVar6 = plVar3[1];
        plVar3[1] = (long)param_1;
        param_1[2] = (long)plVar3;
        if (lVar6 != 0) {
          param_1[1] = lVar6;
          *(long **)(lVar6 + 0x10) = param_1;
        }
        plVar3 = (long *)*plVar3;
        *param_1 = (long)plVar3;
        lVar6 = *plVar3;
        if (*plVar3 != 0) {
          do {
            lVar7 = lVar6;
            lVar6 = *(long *)(lVar7 + 8);
          } while (lVar6 != 0);
          *plVar3 = lVar7;
        }
        goto LAB_032d1924;
      }
      plVar3 = (long *)plVar3[2];
    } while (plVar3 != (long *)0x0);
    do {
      plVar3 = plVar5;
      plVar5 = (long *)plVar3[2];
    } while ((long *)plVar3[2] != (long *)0x0);
    plVar3[2] = (long)param_1;
    param_1[1] = (long)plVar3;
    *param_1 = *plVar3;
  }
LAB_032d1924:
  if (*PTR_DAT_04c4b988 == '\0') {
    local_8 = *(undefined8 *)(param_1[0x1e] + 0x18);
  }
  else {
    local_50 = PTR_DAT_04bc8e68 + 0x10;
    puStack_48 = PTR_DAT_04c4b988;
    local_8 = FUN_032cb8e0(&local_8,&local_50,param_1[0x1e]);
  }
  local_50 = &DAT_04b1b658;
  puStack_48 = (undefined *)&local_50;
  local_30 = (long *)&local_50;
  FUN_032d25d0(&local_50,&local_8);
  if ((undefined **)local_30 == &local_50) {
    puVar4 = (undefined8 *)(local_50 + 0x20);
  }
  else {
    if (local_30 == (long *)0x0) {
      return;
    }
    puVar4 = (undefined8 *)(*local_30 + 0x28);
    ppuVar2 = (undefined **)local_30;
  }
  (*(code *)*puVar4)(ppuVar2);
  return;
}

