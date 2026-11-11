
void FUN_004ac0f0(undefined8 *param_1)

{
  uint uVar1;
  undefined8 *puVar2;
  
  FUN_004866c0();
  *param_1 = &PTR_LAB_04867b98;
  puVar2 = param_1 + 3;
  *puVar2 = 0;
  param_1[4] = 0x8000000000000000;
  FUN_0043dcf0(param_1 + 5);
  param_1[7] = puVar2;
  param_1[5] = &PTR_FUN_04867a38;
  FUN_0043dcf0(param_1 + 8);
  param_1[10] = puVar2;
  param_1[8] = &PTR_FUN_04867ac0;
  FUN_0043dcf0(param_1 + 0xb);
  param_1[0xd] = puVar2;
  param_1[0xb] = &PTR_FUN_04867b40;
  uVar1 = *(uint *)(param_1 + 2);
  if (uVar1 == (*(uint *)((long)param_1 + 0x14) & 0x3fffffff)) {
    FUN_00426990(PTR_DAT_048607b8,param_1 + 1,8);
    uVar1 = *(uint *)(param_1 + 2);
  }
  *(undefined8 *)(param_1[1] + (long)(int)uVar1 * 8) = 0;
  *(uint *)(param_1 + 2) = uVar1 + 1;
  return;
}

