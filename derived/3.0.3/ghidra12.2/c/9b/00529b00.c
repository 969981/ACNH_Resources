
long FUN_00529b00(long param_1,long param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  FUN_0043c080(param_1 + 0x18,param_2 + 0x18);
  if (param_2 != param_1) {
    uVar3 = *(undefined8 *)(param_2 + 0x20);
    iVar1 = *(int *)(param_2 + 0x28);
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    if ((int)(*(uint *)(param_1 + 0x2c) & 0x3fffffff) < iVar1) {
      uVar2 = FUN_004267f0(PTR_DAT_048607b8,iVar1,8,uVar2,*(undefined4 *)(param_1 + 0x28));
      *(undefined8 *)(param_1 + 0x20) = uVar2;
    }
    FUN_0043aa30(uVar2,uVar3,(long)iVar1 << 3);
    *(int *)(param_1 + 0x28) = iVar1;
    iVar1 = *(int *)(param_2 + 0x38);
    uVar3 = *(undefined8 *)(param_2 + 0x30);
    uVar2 = *(undefined8 *)(param_1 + 0x30);
    if ((int)(*(uint *)(param_1 + 0x3c) & 0x3fffffff) < iVar1) {
      uVar2 = FUN_004267f0(PTR_DAT_048607b8,iVar1,8,uVar2,*(undefined4 *)(param_1 + 0x38));
      *(undefined8 *)(param_1 + 0x30) = uVar2;
    }
    FUN_0043aa30(uVar2,uVar3,(long)iVar1 << 3);
    *(int *)(param_1 + 0x38) = iVar1;
    iVar1 = *(int *)(param_2 + 0x48);
    uVar3 = *(undefined8 *)(param_2 + 0x40);
    uVar2 = *(undefined8 *)(param_1 + 0x40);
    if ((int)(*(uint *)(param_1 + 0x4c) & 0x3fffffff) < iVar1) {
      uVar2 = FUN_004267f0(PTR_DAT_048607b8,iVar1,8,uVar2,*(undefined4 *)(param_1 + 0x48));
      *(undefined8 *)(param_1 + 0x40) = uVar2;
    }
    FUN_0043aa30(uVar2,uVar3,(long)iVar1 << 3);
    *(int *)(param_1 + 0x48) = iVar1;
    iVar1 = *(int *)(param_2 + 0x58);
    uVar3 = *(undefined8 *)(param_2 + 0x50);
    uVar2 = *(undefined8 *)(param_1 + 0x50);
    if ((int)(*(uint *)(param_1 + 0x5c) & 0x3fffffff) < iVar1) {
      uVar2 = FUN_004267f0(PTR_DAT_048607b8,iVar1,8,uVar2,*(undefined4 *)(param_1 + 0x58));
      *(undefined8 *)(param_1 + 0x50) = uVar2;
    }
    FUN_0043aa30(uVar2,uVar3,(long)iVar1 << 3);
    *(int *)(param_1 + 0x58) = iVar1;
    iVar1 = *(int *)(param_2 + 0x68);
    uVar3 = *(undefined8 *)(param_2 + 0x60);
    uVar2 = *(undefined8 *)(param_1 + 0x60);
    if ((int)(*(uint *)(param_1 + 0x6c) & 0x3fffffff) < iVar1) {
      uVar2 = FUN_004267f0(PTR_DAT_048607b8,iVar1,8,uVar2,*(undefined4 *)(param_1 + 0x68));
      *(undefined8 *)(param_1 + 0x60) = uVar2;
    }
    FUN_0043aa30(uVar2,uVar3,(long)iVar1 << 3);
    *(int *)(param_1 + 0x68) = iVar1;
    iVar1 = *(int *)(param_2 + 0x78);
    uVar3 = *(undefined8 *)(param_2 + 0x70);
    uVar2 = *(undefined8 *)(param_1 + 0x70);
    if ((int)(*(uint *)(param_1 + 0x7c) & 0x3fffffff) < iVar1) {
      uVar2 = FUN_004267f0(PTR_DAT_048607b8,iVar1,8,uVar2,*(undefined4 *)(param_1 + 0x78));
      *(undefined8 *)(param_1 + 0x70) = uVar2;
    }
    FUN_0043aa30(uVar2,uVar3,(long)iVar1 << 3);
    *(int *)(param_1 + 0x78) = iVar1;
    iVar1 = *(int *)(param_2 + 0x88);
    uVar3 = *(undefined8 *)(param_2 + 0x80);
    uVar2 = *(undefined8 *)(param_1 + 0x80);
    if ((int)(*(uint *)(param_1 + 0x8c) & 0x3fffffff) < iVar1) {
      uVar2 = FUN_004267f0(PTR_DAT_048607b8,iVar1,8,uVar2,*(undefined4 *)(param_1 + 0x88));
      *(undefined8 *)(param_1 + 0x80) = uVar2;
    }
    FUN_0043aa30(uVar2,uVar3,(long)iVar1 << 3);
    *(int *)(param_1 + 0x88) = iVar1;
  }
  *(undefined8 *)(param_1 + 0x90) = *(undefined8 *)(param_2 + 0x90);
  return param_1;
}

