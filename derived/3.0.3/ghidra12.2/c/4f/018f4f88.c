
void FUN_018f4f88(undefined8 *param_1)

{
  undefined *puVar1;
  ulong uVar2;
  
  puVar1 = PTR_DAT_04bb31d0;
  *param_1 = &PTR_FUN_049d4570;
  param_1[0x3c] = 0;
  puVar1 = puVar1 + 0x10;
  param_1[0x36] = 0;
  param_1[0x37] = puVar1;
  param_1[0x13] = puVar1;
  param_1[0x30] = 0;
  param_1[0x31] = puVar1;
  param_1[0x2a] = 0;
  param_1[0x2b] = puVar1;
  param_1[0x24] = 0;
  param_1[0x25] = puVar1;
  param_1[0x1e] = 0;
  param_1[0x1f] = puVar1;
  param_1[0x18] = 0;
  param_1[0x19] = puVar1;
  puVar1 = PTR_DAT_04bb3058;
  param_1[6] = PTR_DAT_04bb5950 + 0x10;
  uVar2 = (**(code **)(**(long **)(*(long *)puVar1 + 0x330) + 0x88))
                    (*(long **)(*(long *)puVar1 + 0x330),param_1[0x12]);
  if (((uVar2 & 1) != 0) && ((long *)param_1[0x12] != (long *)0x0)) {
    (**(code **)(*(long *)param_1[0x12] + 8))();
  }
  param_1[0x12] = 0;
  return;
}

