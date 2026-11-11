
undefined8 FUN_004622e0(long *param_1,undefined8 *param_2,undefined8 *param_3)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  uVar1 = FUN_00463f40();
  if (*(uint *)(param_1 + 1) == uVar1) {
    if ((*(uint *)((long)param_1 + 0xc) & 0x3fffffff) == uVar1) {
      FUN_00426990(PTR_DAT_048607b8,param_1,0x18);
      uVar1 = *(uint *)(param_1 + 1);
    }
    puVar2 = (undefined8 *)(*param_1 + (long)(int)uVar1 * 0x18);
    uVar3 = param_2[1];
    *puVar2 = *param_2;
    puVar2[1] = uVar3;
    puVar2[2] = *param_3;
    *(uint *)(param_1 + 1) = uVar1 + 1;
    uVar3 = 1;
  }
  else {
    uVar3 = 0;
    *(undefined8 *)(*param_1 + (long)(int)uVar1 * 0x18 + 0x10) = *param_3;
  }
  return uVar3;
}

