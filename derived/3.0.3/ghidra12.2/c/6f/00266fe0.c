
undefined8 FUN_00266fe0(long param_1)

{
  ulong uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined1 auStack_30 [16];
  
  if (*(uint *)(param_1 + 0x158) < 4) {
    uVar2 = *(undefined4 *)(&DAT_041021b0 + (long)(int)*(uint *)(param_1 + 0x158) * 4);
  }
  else {
    uVar2 = 5;
  }
  *(undefined4 *)(DAT_04c603c8 + 0xa4) = uVar2;
  FUN_0026ad54();
  if ((*(char *)(param_1 + 0x198) != '\0') &&
     (uVar1 = FUN_002212e4(*(undefined8 *)(DAT_04c603c8 + 8)), (uVar1 & 1) != 0)) {
    uVar3 = *(undefined8 *)(DAT_04c603c8 + 8);
    FUN_002296c4(auStack_30,param_1 + 0x19c);
    FUN_002665d0(uVar3,auStack_30);
    (**(code **)(**(long **)(DAT_04c603c8 + 8) + 0x10))(*(long **)(DAT_04c603c8 + 8),1);
  }
  FUN_002671e0(param_1);
  return 1;
}

