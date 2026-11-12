
void FUN_008e935c(undefined8 *param_1)

{
  undefined *puVar1;
  ulong uVar2;
  
  *param_1 = &PTR_FUN_049219d0;
  puVar1 = PTR_DAT_04bb3380;
  param_1[0x24] = 0;
  param_1[0x1f] = puVar1 + 0x10;
  puVar1 = PTR_DAT_04bb3058;
  param_1[6] = &PTR_LAB_049267f8;
  uVar2 = (**(code **)(**(long **)(*(long *)puVar1 + 0x330) + 0x88))
                    (*(long **)(*(long *)puVar1 + 0x330),param_1[0x1e]);
  if (((uVar2 & 1) != 0) && ((long *)param_1[0x1e] != (long *)0x0)) {
    (**(code **)(*(long *)param_1[0x1e] + 8))();
  }
  param_1[0x1e] = 0;
  return;
}

