
void FUN_018f5758(undefined8 *param_1)

{
  undefined *puVar1;
  ulong uVar2;
  
  *param_1 = &PTR_FUN_049d46d0;
  puVar1 = PTR_DAT_04bb31d0;
  param_1[0x24] = 0;
  puVar1 = puVar1 + 0x10;
  param_1[0x1e] = 0;
  param_1[0x1f] = puVar1;
  param_1[0x13] = puVar1;
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

