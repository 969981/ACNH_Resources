
long FUN_006716c0(long param_1,long param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  if (param_2 != param_1) {
    uVar3 = *(undefined8 *)(param_2 + 0x18);
    iVar1 = *(int *)(param_2 + 0x20);
    uVar2 = *(undefined8 *)(param_1 + 0x18);
    if ((int)(*(uint *)(param_1 + 0x24) & 0x3fffffff) < iVar1) {
      uVar2 = FUN_004267f0(PTR_DAT_048607b8,iVar1,1,uVar2,*(undefined4 *)(param_1 + 0x20));
      *(undefined8 *)(param_1 + 0x18) = uVar2;
    }
    FUN_0043aa30(uVar2,uVar3,(long)iVar1);
    *(int *)(param_1 + 0x20) = iVar1;
    iVar1 = *(int *)(param_2 + 0x30);
    uVar3 = *(undefined8 *)(param_2 + 0x28);
    uVar2 = *(undefined8 *)(param_1 + 0x28);
    if ((int)(*(uint *)(param_1 + 0x34) & 0x3fffffff) < iVar1) {
      uVar2 = FUN_004267f0(PTR_DAT_048607b8,iVar1,1,uVar2,*(undefined4 *)(param_1 + 0x30));
      *(undefined8 *)(param_1 + 0x28) = uVar2;
    }
    FUN_0043aa30(uVar2,uVar3,(long)iVar1);
    *(int *)(param_1 + 0x30) = iVar1;
    iVar1 = *(int *)(param_2 + 0x40);
    uVar3 = *(undefined8 *)(param_2 + 0x38);
    uVar2 = *(undefined8 *)(param_1 + 0x38);
    if ((int)(*(uint *)(param_1 + 0x44) & 0x3fffffff) < iVar1) {
      uVar2 = FUN_004267f0(PTR_DAT_048607b8,iVar1,1,uVar2,*(undefined4 *)(param_1 + 0x40));
      *(undefined8 *)(param_1 + 0x38) = uVar2;
    }
    FUN_0043aa30(uVar2,uVar3,(long)iVar1);
    *(int *)(param_1 + 0x40) = iVar1;
    iVar1 = *(int *)(param_2 + 0x50);
    uVar3 = *(undefined8 *)(param_2 + 0x48);
    uVar2 = *(undefined8 *)(param_1 + 0x48);
    if ((int)(*(uint *)(param_1 + 0x54) & 0x3fffffff) < iVar1) {
      uVar2 = FUN_004267f0(PTR_DAT_048607b8,iVar1,1,uVar2,*(undefined4 *)(param_1 + 0x50));
      *(undefined8 *)(param_1 + 0x48) = uVar2;
    }
    FUN_0043aa30(uVar2,uVar3,(long)iVar1);
    *(int *)(param_1 + 0x50) = iVar1;
    iVar1 = *(int *)(param_2 + 0x60);
    uVar3 = *(undefined8 *)(param_2 + 0x58);
    uVar2 = *(undefined8 *)(param_1 + 0x58);
    if ((int)(*(uint *)(param_1 + 100) & 0x3fffffff) < iVar1) {
      uVar2 = FUN_004267f0(PTR_DAT_048607b8,iVar1,1,uVar2,*(undefined4 *)(param_1 + 0x60));
      *(undefined8 *)(param_1 + 0x58) = uVar2;
    }
    FUN_0043aa30(uVar2,uVar3,(long)iVar1);
    *(int *)(param_1 + 0x60) = iVar1;
    iVar1 = *(int *)(param_2 + 0x70);
    uVar3 = *(undefined8 *)(param_2 + 0x68);
    uVar2 = *(undefined8 *)(param_1 + 0x68);
    if ((int)(*(uint *)(param_1 + 0x74) & 0x3fffffff) < iVar1) {
      uVar2 = FUN_004267f0(PTR_DAT_048607b8,iVar1,4,uVar2,*(undefined4 *)(param_1 + 0x70));
      *(undefined8 *)(param_1 + 0x68) = uVar2;
    }
    FUN_0043aa30(uVar2,uVar3,(long)iVar1 << 2);
    *(int *)(param_1 + 0x70) = iVar1;
    iVar1 = *(int *)(param_2 + 0x80);
    uVar3 = *(undefined8 *)(param_2 + 0x78);
    uVar2 = *(undefined8 *)(param_1 + 0x78);
    if ((int)(*(uint *)(param_1 + 0x84) & 0x3fffffff) < iVar1) {
      uVar2 = FUN_004267f0(PTR_DAT_048607b8,iVar1,4,uVar2,*(undefined4 *)(param_1 + 0x80));
      *(undefined8 *)(param_1 + 0x78) = uVar2;
    }
    FUN_0043aa30(uVar2,uVar3,(long)iVar1 << 2);
    *(int *)(param_1 + 0x80) = iVar1;
    iVar1 = *(int *)(param_2 + 0x90);
    uVar3 = *(undefined8 *)(param_2 + 0x88);
    uVar2 = *(undefined8 *)(param_1 + 0x88);
    if ((int)(*(uint *)(param_1 + 0x94) & 0x3fffffff) < iVar1) {
      uVar2 = FUN_004267f0(PTR_DAT_048607b8,iVar1,4,uVar2,*(undefined4 *)(param_1 + 0x90));
      *(undefined8 *)(param_1 + 0x88) = uVar2;
    }
    FUN_0043aa30(uVar2,uVar3,(long)iVar1 << 2);
    *(int *)(param_1 + 0x90) = iVar1;
    iVar1 = *(int *)(param_2 + 0xa0);
    uVar3 = *(undefined8 *)(param_2 + 0x98);
    uVar2 = *(undefined8 *)(param_1 + 0x98);
    if ((int)(*(uint *)(param_1 + 0xa4) & 0x3fffffff) < iVar1) {
      uVar2 = FUN_004267f0(PTR_DAT_048607b8,iVar1,4,uVar2,*(undefined4 *)(param_1 + 0xa0));
      *(undefined8 *)(param_1 + 0x98) = uVar2;
    }
    FUN_0043aa30(uVar2,uVar3,(long)iVar1 << 2);
    *(int *)(param_1 + 0xa0) = iVar1;
    iVar1 = *(int *)(param_2 + 0xb0);
    uVar3 = *(undefined8 *)(param_2 + 0xa8);
    uVar2 = *(undefined8 *)(param_1 + 0xa8);
    if ((int)(*(uint *)(param_1 + 0xb4) & 0x3fffffff) < iVar1) {
      uVar2 = FUN_004267f0(PTR_DAT_048607b8,iVar1,4,uVar2,*(undefined4 *)(param_1 + 0xb0));
      *(undefined8 *)(param_1 + 0xa8) = uVar2;
    }
    FUN_0043aa30(uVar2,uVar3,(long)iVar1 << 2);
    *(int *)(param_1 + 0xb0) = iVar1;
    iVar1 = *(int *)(param_2 + 0xc0);
    uVar3 = *(undefined8 *)(param_2 + 0xb8);
    uVar2 = *(undefined8 *)(param_1 + 0xb8);
    if ((int)(*(uint *)(param_1 + 0xc4) & 0x3fffffff) < iVar1) {
      uVar2 = FUN_004267f0(PTR_DAT_048607b8,iVar1,4,uVar2,*(undefined4 *)(param_1 + 0xc0));
      *(undefined8 *)(param_1 + 0xb8) = uVar2;
    }
    FUN_0043aa30(uVar2,uVar3,(long)iVar1 << 2);
    *(int *)(param_1 + 0xc0) = iVar1;
  }
  uVar2 = *(undefined8 *)(param_2 + 200);
  *(undefined4 *)(param_1 + 0xd0) = *(undefined4 *)(param_2 + 0xd0);
  *(undefined8 *)(param_1 + 200) = uVar2;
  return param_1;
}

