
void FUN_03c39724(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  long lVar5;
  
  *param_1 = (long)(PTR_DAT_04bd2e38 + 0x10);
  puVar3 = PTR_DAT_04bb58c8;
  puVar2 = PTR_DAT_04bb3058;
  lVar5 = *(long *)PTR_DAT_04bb3058;
  puVar1 = PTR_DAT_04bb58c8 + 0x10;
  param_1[0x8c] = (long)puVar1;
  uVar4 = (**(code **)(**(long **)(lVar5 + 0x330) + 0x88))(*(long **)(lVar5 + 0x330),param_1[0xa4]);
  if (((uVar4 & 1) != 0) && ((long *)param_1[0xa4] != (long *)0x0)) {
    (**(code **)(*(long *)param_1[0xa4] + 8))();
  }
  lVar5 = *(long *)puVar2;
  param_1[0xa4] = 0;
  param_1[0x73] = (long)puVar1;
  uVar4 = (**(code **)(**(long **)(lVar5 + 0x330) + 0x88))(*(long **)(lVar5 + 0x330),param_1[0x8b]);
  if (((uVar4 & 1) != 0) && ((long *)param_1[0x8b] != (long *)0x0)) {
    (**(code **)(*(long *)param_1[0x8b] + 8))();
  }
  lVar5 = *(long *)puVar2;
  param_1[0x8b] = 0;
  param_1[0x5a] = (long)(puVar3 + 0x10);
  uVar4 = (**(code **)(**(long **)(lVar5 + 0x330) + 0x88))(*(long **)(lVar5 + 0x330),param_1[0x72]);
  if (((uVar4 & 1) != 0) && ((long *)param_1[0x72] != (long *)0x0)) {
    (**(code **)(*(long *)param_1[0x72] + 8))();
  }
  lVar5 = *(long *)puVar2;
  param_1[0x72] = 0;
  param_1[0x41] = (long)(puVar3 + 0x10);
  uVar4 = (**(code **)(**(long **)(lVar5 + 0x330) + 0x88))(*(long **)(lVar5 + 0x330),param_1[0x59]);
  if (((uVar4 & 1) != 0) && ((long *)param_1[0x59] != (long *)0x0)) {
    (**(code **)(*(long *)param_1[0x59] + 8))();
  }
  param_1[0x59] = 0;
  puVar1 = PTR_DAT_04bb31d0;
  param_1[0x40] = 0;
  param_1[0x11] = (long)&PTR_LAB_04b7ed60;
  puVar1 = puVar1 + 0x10;
  puVar2 = PTR_DAT_04bb33a8 + 0x10;
  param_1[0x3a] = 0;
  param_1[0x3b] = (long)puVar1;
  param_1[0x2e] = 0;
  param_1[0x2f] = (long)puVar1;
  param_1[0x17] = (long)puVar1;
  param_1[0x28] = 0;
  param_1[0x29] = (long)puVar1;
  param_1[0x34] = 0;
  param_1[0x35] = (long)puVar2;
  param_1[0x22] = 0;
  param_1[0x23] = (long)puVar1;
  param_1[0x1c] = 0;
  param_1[0x1d] = (long)puVar1;
  return;
}

