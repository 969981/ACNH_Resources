
void FUN_0193b644(undefined8 *param_1)

{
  undefined *puVar1;
  ulong uVar2;
  
  param_1[0x77] = 0;
  *param_1 = &PTR_FUN_049df7a0;
  param_1[0x72] = &PTR_LAB_049df928;
  puVar1 = PTR_DAT_04bb3058;
  param_1[0x61] = PTR_DAT_04bb3578 + 0x10;
  uVar2 = (**(code **)(**(long **)(*(long *)puVar1 + 0x330) + 0x88))
                    (*(long **)(*(long *)puVar1 + 0x330),param_1[0x71]);
  if (((uVar2 & 1) != 0) && ((long *)param_1[0x71] != (long *)0x0)) {
    (**(code **)(*(long *)param_1[0x71] + 8))();
  }
  param_1[0x71] = 0;
  FUN_019094b0(param_1);
  return;
}

