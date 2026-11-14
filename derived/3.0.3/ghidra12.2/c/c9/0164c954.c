
void FUN_0164c954(undefined8 *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  long *plVar6;
  long lVar7;
  
  param_1[0x7d] = 0;
  *param_1 = &PTR_FUN_049b7968;
  param_1[0x78] = &PTR_LAB_049b7d80;
  puVar1 = PTR_DAT_04bb33a8;
  param_1[0x77] = 0;
  param_1[0x71] = 0;
  param_1[0x72] = puVar1 + 0x10;
  param_1[0x6c] = &PTR_LAB_049b7ad0;
  puVar4 = PTR_DAT_04bb3578;
  puVar2 = PTR_DAT_04bb3058;
  lVar7 = *(long *)PTR_DAT_04bb3058;
  puVar1 = PTR_DAT_04bb3578 + 0x10;
  param_1[0x5a] = puVar1;
  uVar5 = (**(code **)(**(long **)(lVar7 + 0x330) + 0x88))(*(long **)(lVar7 + 0x330),param_1[0x6a]);
  if (((uVar5 & 1) != 0) && ((long *)param_1[0x6a] != (long *)0x0)) {
    (**(code **)(*(long *)param_1[0x6a] + 8))();
  }
  param_1[0x6a] = 0;
  puVar3 = PTR_DAT_04bb3380;
  param_1[0x59] = 0;
  param_1[0x42] = puVar1;
  param_1[0x54] = puVar3 + 0x10;
  plVar6 = *(long **)(*(long *)puVar2 + 0x330);
  uVar5 = (**(code **)(*plVar6 + 0x88))(plVar6,param_1[0x52]);
  if (((uVar5 & 1) != 0) && ((long *)param_1[0x52] != (long *)0x0)) {
    (**(code **)(*(long *)param_1[0x52] + 8))();
  }
  param_1[0x52] = 0;
  puVar1 = PTR_DAT_04bbd958;
  param_1[0x41] = 0;
  param_1[0x3c] = puVar1 + 0x10;
  param_1[0x2b] = puVar4 + 0x10;
  plVar6 = *(long **)(*(long *)puVar2 + 0x330);
  uVar5 = (**(code **)(*plVar6 + 0x88))(plVar6,param_1[0x3b]);
  if (((uVar5 & 1) != 0) && ((long *)param_1[0x3b] != (long *)0x0)) {
    (**(code **)(*(long *)param_1[0x3b] + 8))();
  }
  param_1[0x3b] = 0;
  return;
}

