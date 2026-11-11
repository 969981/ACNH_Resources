
undefined4 * FUN_00536a90(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  *param_1 = *param_2;
  if (param_2 != param_1) {
    uVar3 = *(undefined8 *)(param_2 + 2);
    iVar1 = param_2[4];
    uVar2 = *(undefined8 *)(param_1 + 2);
    if ((int)(param_1[5] & 0x3fffffff) < iVar1) {
      uVar2 = FUN_004267f0(PTR_DAT_048607b8,iVar1,4,uVar2,param_1[4]);
      *(undefined8 *)(param_1 + 2) = uVar2;
    }
    FUN_0043aa30(uVar2,uVar3,(long)iVar1 << 2);
    param_1[4] = iVar1;
    iVar1 = param_2[8];
    uVar3 = *(undefined8 *)(param_2 + 6);
    uVar2 = *(undefined8 *)(param_1 + 6);
    if ((int)(param_1[9] & 0x3fffffff) < iVar1) {
      uVar2 = FUN_004267f0(PTR_DAT_048607b8,iVar1,4,uVar2,param_1[8]);
      *(undefined8 *)(param_1 + 6) = uVar2;
    }
    FUN_0043aa30(uVar2,uVar3,(long)iVar1 << 2);
    param_1[8] = iVar1;
    uVar3 = *(undefined8 *)(param_2 + 10);
    iVar1 = param_2[0xc];
    uVar2 = *(undefined8 *)(param_1 + 10);
    if ((int)(param_1[0xd] & 0x3fffffff) < iVar1) {
      uVar2 = FUN_004267f0(PTR_DAT_048607b8,iVar1,4,uVar2,param_1[0xc]);
      *(undefined8 *)(param_1 + 10) = uVar2;
    }
    FUN_0043aa30(uVar2,uVar3,(long)iVar1 << 2);
    param_1[0xc] = iVar1;
  }
  return param_1;
}

