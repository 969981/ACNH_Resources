
void FUN_01921634(undefined8 *param_1)

{
  undefined *puVar1;
  ulong uVar2;
  
  *param_1 = &PTR_FUN_049db838;
  puVar1 = PTR_DAT_04bb3058;
  param_1[0xa5] = PTR_DAT_04bb3578 + 0x10;
  uVar2 = (**(code **)(**(long **)(*(long *)puVar1 + 0x330) + 0x88))
                    (*(long **)(*(long *)puVar1 + 0x330),param_1[0xb5]);
  if (((uVar2 & 1) != 0) && ((long *)param_1[0xb5] != (long *)0x0)) {
    (**(code **)(*(long *)param_1[0xb5] + 8))();
  }
  param_1[0xb5] = 0;
  FUN_01908790(param_1);
  return;
}

