
long FUN_0066f270(long param_1,long param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  FUN_00672680();
  if (param_2 == param_1) {
    *(undefined8 *)(param_1 + 0x60) = *(undefined8 *)(param_2 + 0x60);
    uVar3 = *(undefined8 *)(param_2 + 0x78);
    uVar2 = *(undefined8 *)(param_2 + 0x68);
    uVar4 = *(undefined8 *)(param_2 + 0x70);
    *(undefined4 *)(param_1 + 0x80) = *(undefined4 *)(param_2 + 0x80);
    *(undefined8 *)(param_1 + 0x70) = uVar4;
    *(undefined8 *)(param_1 + 0x78) = uVar3;
    *(undefined8 *)(param_1 + 0x68) = uVar2;
  }
  else {
    uVar4 = *(undefined8 *)(param_2 + 0x40);
    iVar1 = *(int *)(param_2 + 0x48);
    uVar2 = *(undefined8 *)(param_1 + 0x40);
    if ((int)(*(uint *)(param_1 + 0x4c) & 0x3fffffff) < iVar1) {
      uVar2 = FUN_004267f0(PTR_DAT_048607b8,iVar1,1,uVar2,*(undefined4 *)(param_1 + 0x48));
      *(undefined8 *)(param_1 + 0x40) = uVar2;
    }
    FUN_0043aa30(uVar2,uVar4,(long)iVar1);
    *(int *)(param_1 + 0x48) = iVar1;
    iVar1 = *(int *)(param_2 + 0x58);
    uVar4 = *(undefined8 *)(param_2 + 0x50);
    uVar2 = *(undefined8 *)(param_1 + 0x50);
    if ((int)(*(uint *)(param_1 + 0x5c) & 0x3fffffff) < iVar1) {
      uVar2 = FUN_004267f0(PTR_DAT_048607b8,iVar1,2,uVar2,*(undefined4 *)(param_1 + 0x58));
      *(undefined8 *)(param_1 + 0x50) = uVar2;
    }
    FUN_0043aa30(uVar2,uVar4,(long)iVar1 << 1);
    *(int *)(param_1 + 0x58) = iVar1;
    *(undefined8 *)(param_1 + 0x60) = *(undefined8 *)(param_2 + 0x60);
    uVar2 = *(undefined8 *)(param_2 + 0x68);
    uVar4 = *(undefined8 *)(param_2 + 0x70);
    uVar3 = *(undefined8 *)(param_2 + 0x78);
    *(undefined4 *)(param_1 + 0x80) = *(undefined4 *)(param_2 + 0x80);
    *(undefined8 *)(param_1 + 0x78) = uVar3;
    *(undefined8 *)(param_1 + 0x70) = uVar4;
    *(undefined8 *)(param_1 + 0x68) = uVar2;
    iVar1 = *(int *)(param_2 + 0x90);
    uVar4 = *(undefined8 *)(param_2 + 0x88);
    uVar2 = *(undefined8 *)(param_1 + 0x88);
    if ((int)(*(uint *)(param_1 + 0x94) & 0x3fffffff) < iVar1) {
      uVar2 = FUN_004267f0(PTR_DAT_048607b8,iVar1,4,uVar2,*(undefined4 *)(param_1 + 0x90));
      *(undefined8 *)(param_1 + 0x88) = uVar2;
    }
    FUN_0043aa30(uVar2,uVar4,(long)iVar1 << 2);
    *(int *)(param_1 + 0x90) = iVar1;
  }
  uVar2 = *(undefined8 *)(param_2 + 0xa0);
  *(undefined8 *)(param_1 + 0x98) = *(undefined8 *)(param_2 + 0x98);
  *(undefined8 *)(param_1 + 0xa0) = uVar2;
  uVar3 = *(undefined8 *)(param_2 + 0xb8);
  uVar2 = *(undefined8 *)(param_2 + 0xa8);
  uVar4 = *(undefined8 *)(param_2 + 0xb0);
  *(undefined4 *)(param_1 + 0xc0) = *(undefined4 *)(param_2 + 0xc0);
  *(undefined8 *)(param_1 + 0xb0) = uVar4;
  *(undefined8 *)(param_1 + 0xb8) = uVar3;
  *(undefined8 *)(param_1 + 0xa8) = uVar2;
  return param_1;
}

