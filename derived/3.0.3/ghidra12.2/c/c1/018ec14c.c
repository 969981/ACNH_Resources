
void FUN_018ec14c(undefined8 *param_1)

{
  undefined *puVar1;
  ulong uVar2;
  
  *param_1 = &PTR_FUN_049d2cb0;
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

