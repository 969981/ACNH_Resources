
void FUN_0296bb90(undefined8 *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  
  *param_1 = &PTR_FUN_04a96780;
  puVar1 = PTR_DAT_04bb3058;
  param_1[0x24] = PTR_DAT_04bb3578 + 0x10;
  uVar4 = (**(code **)(**(long **)(*(long *)puVar1 + 0x330) + 0x88))
                    (*(long **)(*(long *)puVar1 + 0x330),param_1[0x34]);
  if (((uVar4 & 1) != 0) && ((long *)param_1[0x34] != (long *)0x0)) {
    (**(code **)(*(long *)param_1[0x34] + 8))();
  }
  puVar3 = PTR_DAT_04bb6048;
  param_1[0x34] = 0;
  puVar2 = PTR_DAT_04bb3380;
  param_1[0x23] = 0;
  puVar1 = PTR_DAT_04bb31d0;
  param_1[0x1d] = 0;
  param_1[0x1e] = puVar3 + 0x10;
  param_1[0x17] = 0;
  param_1[0x18] = puVar2 + 0x10;
  param_1[0x11] = 0;
  param_1[0x12] = puVar2 + 0x10;
  param_1[6] = puVar1 + 0x10;
  param_1[0xb] = 0;
  param_1[0xc] = puVar1 + 0x10;
  return;
}

