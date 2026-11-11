
long FUN_00643220(long param_1,long param_2,long param_3,long param_4)

{
  uint uVar1;
  long lVar2;
  undefined1 auStack_270 [104];
  undefined8 local_208;
  
  if (param_4 != 0) {
    lVar2 = FUN_0044f1b0(param_2);
    if (lVar2 == param_2) {
      param_2 = param_1;
    }
    else {
      FUN_00451ea0(auStack_270);
      FUN_004522c0(auStack_270,param_2,0xffffffff);
      FUN_00452230(auStack_270,param_2);
      local_208 = FUN_00643220(param_1,*(undefined8 *)(param_2 + 8),param_3,param_4);
      FUN_00453420(auStack_270,0);
      param_2 = FUN_004535c0(auStack_270,param_4);
      uVar1 = *(uint *)(param_3 + 0x18);
      if (uVar1 == (*(uint *)(param_3 + 0x1c) & 0x3fffffff)) {
        FUN_00426990(PTR_DAT_048607b8,param_3 + 0x10,8);
        uVar1 = *(uint *)(param_3 + 0x18);
      }
      *(long *)(*(long *)(param_3 + 0x10) + (long)(int)uVar1 * 8) = param_2;
      *(uint *)(param_3 + 0x18) = uVar1 + 1;
      FUN_00451fa0(auStack_270);
    }
  }
  return param_2;
}

