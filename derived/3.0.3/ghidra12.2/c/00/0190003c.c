
void FUN_0190003c(undefined8 *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  long lVar5;
  
  *param_1 = &PTR_FUN_049d63b0;
  puVar1 = PTR_DAT_04bb31d0;
  param_1[0x5a] = 0;
  param_1[0x54] = 0;
  param_1[0x4e] = 0;
  puVar1 = puVar1 + 0x10;
  param_1[0x55] = puVar1;
  param_1[0x4f] = puVar1;
  param_1[0x49] = puVar1;
  puVar2 = PTR_DAT_04bb3380;
  param_1[0x48] = 0;
  param_1[0x42] = 0;
  puVar2 = puVar2 + 0x10;
  param_1[0x36] = 0;
  param_1[0x37] = puVar1;
  param_1[0x30] = 0;
  param_1[0x31] = puVar1;
  param_1[0x43] = puVar2;
  param_1[0x3c] = 0;
  param_1[0x3d] = puVar2;
  param_1[0x2a] = 0;
  param_1[0x2b] = puVar1;
  puVar3 = PTR_DAT_04bb5950 + 0x10;
  param_1[0x24] = 0;
  param_1[0x25] = puVar1;
  param_1[0x13] = puVar2;
  lVar5 = *(long *)PTR_DAT_04bb3058;
  param_1[6] = puVar3;
  param_1[0x1e] = 0;
  param_1[0x1f] = puVar1;
  param_1[0x18] = 0;
  param_1[0x19] = puVar1;
  uVar4 = (**(code **)(**(long **)(lVar5 + 0x330) + 0x88))(*(long **)(lVar5 + 0x330),param_1[0x12]);
  if (((uVar4 & 1) != 0) && ((long *)param_1[0x12] != (long *)0x0)) {
    (**(code **)(*(long *)param_1[0x12] + 8))();
  }
  param_1[0x12] = 0;
  return;
}

