
undefined8 * FUN_00531340(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  if (param_2 == param_1) {
    *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 2);
    *(undefined4 *)(param_1 + 5) = *(undefined4 *)(param_2 + 5);
  }
  else {
    iVar1 = *(int *)(param_2 + 1);
    uVar3 = *param_2;
    uVar2 = *param_1;
    if ((int)(*(uint *)((long)param_1 + 0xc) & 0x3fffffff) < iVar1) {
      uVar2 = FUN_004267f0(PTR_DAT_048607b8,iVar1,4,uVar2,*(undefined4 *)(param_1 + 1));
      *param_1 = uVar2;
    }
    FUN_0043aa30(uVar2,uVar3,(long)iVar1 << 2);
    *(int *)(param_1 + 1) = iVar1;
    *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 2);
    iVar1 = *(int *)(param_2 + 4);
    uVar3 = param_2[3];
    uVar2 = param_1[3];
    if ((int)(*(uint *)((long)param_1 + 0x24) & 0x3fffffff) < iVar1) {
      uVar2 = FUN_004267f0(PTR_DAT_048607b8,iVar1,4,uVar2,*(undefined4 *)(param_1 + 4));
      param_1[3] = uVar2;
    }
    FUN_0043aa30(uVar2,uVar3,(long)iVar1 << 2);
    *(int *)(param_1 + 4) = iVar1;
    *(undefined4 *)(param_1 + 5) = *(undefined4 *)(param_2 + 5);
    iVar1 = *(int *)(param_2 + 7);
    uVar3 = param_2[6];
    uVar2 = param_1[6];
    if ((int)(*(uint *)((long)param_1 + 0x3c) & 0x3fffffff) < iVar1) {
      uVar2 = FUN_004267f0(PTR_DAT_048607b8,iVar1,4,uVar2,*(undefined4 *)(param_1 + 7));
      param_1[6] = uVar2;
    }
    FUN_0043aa30(uVar2,uVar3,(long)iVar1 << 2);
    *(int *)(param_1 + 7) = iVar1;
  }
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 8);
  return param_1;
}

