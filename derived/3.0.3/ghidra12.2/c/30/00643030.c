
undefined8 FUN_00643030(undefined8 param_1,long param_2,long param_3)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_270 [112];
  ulong local_200;
  undefined8 *local_160;
  
  if (param_3 != 0) {
    uVar2 = FUN_0044f1b0(param_1);
    FUN_00451ea0(auStack_270);
    FUN_004522c0(auStack_270,uVar2,0xffffffff);
    uVar3 = FUN_004272d0(uVar2);
    FUN_00452230(auStack_270,uVar3);
    FUN_00643160(auStack_270,uVar2,param_3);
    local_200 = local_200 | 0x80000;
    local_160 = &DAT_04c6fb60;
    FUN_00453c40(auStack_270);
    FUN_00453420(auStack_270,0);
    uVar2 = FUN_004535c0(auStack_270,param_3);
    uVar1 = *(uint *)(param_2 + 0x18);
    if (uVar1 == (*(uint *)(param_2 + 0x1c) & 0x3fffffff)) {
      FUN_00426990(PTR_DAT_048607b8,param_2 + 0x10,8);
      uVar1 = *(uint *)(param_2 + 0x18);
    }
    *(undefined8 *)(*(long *)(param_2 + 0x10) + (long)(int)uVar1 * 8) = uVar2;
    *(uint *)(param_2 + 0x18) = uVar1 + 1;
    param_1 = FUN_00643220(uVar2,param_1,param_2,param_3);
    FUN_00451fa0(auStack_270);
  }
  return param_1;
}

