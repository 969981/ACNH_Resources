
uint FUN_0147fa40(long param_1,int param_2)

{
  undefined4 uVar1;
  bool bVar2;
  uint uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 local_14;
  
  if (param_2 == 3) {
    bVar2 = false;
    if (*(long *)(param_1 + 0x70) != 0) {
      bVar2 = *(int *)(*(long *)(param_1 + 0x70) + 0x280) == 8;
    }
    uVar3 = 0;
    if ((bVar2) || (*(int *)(param_1 + 0x900) - 3U < 2)) goto LAB_0147fc6c;
    if (*(int *)(param_1 + 0x2d0) != 1) {
      local_14 = 1;
      puVar5 = (undefined4 *)PTR_DAT_04bb2cf0;
LAB_0147fc4c:
      uVar3 = FUN_01475430(param_1,PTR_DAT_04bb2150,puVar5,&local_14,PTR_DAT_04bb32e0,0,0);
      goto LAB_0147fc6c;
    }
    FUN_014786e0(param_1);
    puVar5 = (undefined4 *)PTR_DAT_04bb3238;
    *(undefined8 *)(param_1 + 0x2d8) = 0;
    *(undefined8 *)(param_1 + 0x2e0) = 0;
    *(undefined4 *)(param_1 + 0x2d4) = *puVar5;
    local_14 = 1;
    puVar4 = (undefined4 *)PTR_DAT_04bb2cf0;
  }
  else {
    if (param_2 == 2) {
      bVar2 = false;
      if (*(long *)(param_1 + 0x70) != 0) {
        bVar2 = *(int *)(*(long *)(param_1 + 0x70) + 0x280) == 8;
      }
      uVar3 = 0;
      if ((bVar2) || (*(int *)(param_1 + 0x900) - 3U < 2)) goto LAB_0147fc6c;
      if (*(int *)(param_1 + 0x2d0) != 1) {
        local_14 = 3;
LAB_0147fc38:
        puVar5 = &DAT_051dcf4c;
        goto LAB_0147fc4c;
      }
      FUN_014786e0(param_1);
      puVar5 = (undefined4 *)PTR_DAT_04bb3238;
      *(undefined8 *)(param_1 + 0x2d8) = 0;
      *(undefined8 *)(param_1 + 0x2e0) = 0;
      *(undefined4 *)(param_1 + 0x2d4) = *puVar5;
      local_14 = 3;
    }
    else {
      if (param_2 != 1) {
        uVar3 = 0;
        goto LAB_0147fc6c;
      }
      bVar2 = false;
      if (*(long *)(param_1 + 0x70) != 0) {
        bVar2 = *(int *)(*(long *)(param_1 + 0x70) + 0x280) == 8;
      }
      uVar3 = 0;
      if ((bVar2) || (*(int *)(param_1 + 0x900) - 3U < 2)) goto LAB_0147fc6c;
      if (*(int *)(param_1 + 0x2d0) != 1) {
        local_14 = 1;
        goto LAB_0147fc38;
      }
      FUN_014786e0(param_1);
      puVar5 = (undefined4 *)PTR_DAT_04bb3238;
      *(undefined8 *)(param_1 + 0x2d8) = 0;
      *(undefined8 *)(param_1 + 0x2e0) = 0;
      *(undefined4 *)(param_1 + 0x2d4) = *puVar5;
      local_14 = 1;
    }
    puVar4 = &DAT_051dcf4c;
  }
  uVar3 = FUN_01475430(param_1,PTR_DAT_04bb2150,puVar4,&local_14,PTR_DAT_04bb32e0,0,0);
  FUN_014786e0(param_1);
  uVar1 = *puVar5;
  *(undefined8 *)(param_1 + 0x2d8) = 0;
  *(undefined8 *)(param_1 + 0x2e0) = 0;
  *(undefined4 *)(param_1 + 0x2d4) = uVar1;
  FUN_014788dc(param_1);
  FUN_01478ae0(param_1,0);
LAB_0147fc6c:
  return uVar3 & 1;
}

