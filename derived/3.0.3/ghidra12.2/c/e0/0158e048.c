
void FUN_0158e048(undefined8 *param_1)

{
  undefined *puVar1;
  ulong uVar2;
  
  *param_1 = &PTR_FUN_049acce0;
  if (param_1[0x42] != 0) {
    FUN_015efc70(*(undefined8 *)(*(long *)PTR_DAT_04bb2200 + 0x88));
    param_1[0x42] = 0;
  }
  puVar1 = PTR_DAT_04bb3058;
  param_1[0x31] = PTR_DAT_04bb3578 + 0x10;
  uVar2 = (**(code **)(**(long **)(*(long *)puVar1 + 0x330) + 0x88))
                    (*(long **)(*(long *)puVar1 + 0x330),param_1[0x41]);
  if (((uVar2 & 1) != 0) && ((long *)param_1[0x41] != (long *)0x0)) {
    (**(code **)(*(long *)param_1[0x41] + 8))();
  }
  param_1[0x41] = 0;
  puVar1 = PTR_DAT_04bb33a8;
  param_1[0x30] = 0;
  param_1[0x2b] = puVar1 + 0x10;
  return;
}

