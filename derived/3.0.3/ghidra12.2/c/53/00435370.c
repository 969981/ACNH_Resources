
long FUN_00435370(long param_1,long param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  if (param_2 == param_1) {
    FUN_0043d6a0(param_1 + 0x38,param_2 + 0x38);
  }
  else {
    uVar3 = *(undefined8 *)(param_2 + 0x18);
    iVar1 = *(int *)(param_2 + 0x20);
    uVar2 = *(undefined8 *)(param_1 + 0x18);
    if ((int)(*(uint *)(param_1 + 0x24) & 0x3fffffff) < iVar1) {
      uVar2 = FUN_004267f0(PTR_DAT_048607b8,iVar1,4,uVar2,*(undefined4 *)(param_1 + 0x20));
      *(undefined8 *)(param_1 + 0x18) = uVar2;
    }
    FUN_0043aa30(uVar2,uVar3,(long)iVar1 << 2);
    *(int *)(param_1 + 0x20) = iVar1;
    iVar1 = *(int *)(param_2 + 0x30);
    uVar3 = *(undefined8 *)(param_2 + 0x28);
    uVar2 = *(undefined8 *)(param_1 + 0x28);
    if ((int)(*(uint *)(param_1 + 0x34) & 0x3fffffff) < iVar1) {
      uVar2 = FUN_004267f0(PTR_DAT_048607b8,iVar1,8,uVar2,*(undefined4 *)(param_1 + 0x30));
      *(undefined8 *)(param_1 + 0x28) = uVar2;
    }
    FUN_0043aa30(uVar2,uVar3,(long)iVar1 << 3);
    *(int *)(param_1 + 0x30) = iVar1;
    FUN_0043d6a0(param_1 + 0x38,param_2 + 0x38);
    uVar3 = *(undefined8 *)(param_2 + 0x48);
    iVar1 = *(int *)(param_2 + 0x50);
    uVar2 = *(undefined8 *)(param_1 + 0x48);
    if ((int)(*(uint *)(param_1 + 0x54) & 0x3fffffff) < iVar1) {
      uVar2 = FUN_004267f0(PTR_DAT_048607b8,iVar1,4,uVar2,*(undefined4 *)(param_1 + 0x50));
      *(undefined8 *)(param_1 + 0x48) = uVar2;
    }
    FUN_0043aa30(uVar2,uVar3,(long)iVar1 << 2);
    *(int *)(param_1 + 0x50) = iVar1;
  }
  FUN_0043d6a0(param_1 + 0x58,param_2 + 0x58);
  return param_1;
}

