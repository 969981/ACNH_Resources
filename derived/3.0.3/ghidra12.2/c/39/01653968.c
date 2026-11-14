
void FUN_01653968(undefined8 *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  void *__ptr;
  
  *param_1 = &PTR_FUN_049b9110;
  puVar4 = PTR_DAT_04bb3058;
  param_1[0xe4] = PTR_DAT_04bb3578 + 0x10;
  plVar5 = *(long **)(*(long *)puVar4 + 0x330);
  uVar6 = (**(code **)(*plVar5 + 0x88))(plVar5,param_1[0xf4]);
  if (((uVar6 & 1) != 0) && ((long *)param_1[0xf4] != (long *)0x0)) {
    (**(code **)(*(long *)param_1[0xf4] + 8))();
  }
  puVar1 = PTR_DAT_04bb31d0;
  param_1[0xf4] = 0;
  param_1[0xe3] = 0;
  puVar1 = puVar1 + 0x10;
  param_1[0xdd] = 0;
  param_1[0xd7] = 0;
  param_1[0xd1] = 0;
  param_1[0xcb] = 0;
  param_1[0xc5] = 0;
  param_1[0xbf] = 0;
  param_1[0xb9] = 0;
  param_1[0xde] = puVar1;
  param_1[0xd8] = puVar1;
  param_1[0xd2] = puVar1;
  param_1[0xcc] = puVar1;
  param_1[0xc6] = puVar1;
  param_1[0xc0] = puVar1;
  param_1[0xba] = puVar1;
  param_1[0xb4] = puVar1;
  puVar2 = PTR_DAT_04bbd520 + 0x10;
  param_1[0xae] = puVar1;
  param_1[0xb3] = 0;
  puVar3 = PTR_DAT_04bb2fe8 + 0x10;
  lVar7 = *(long *)puVar4;
  param_1[0xa8] = puVar1;
  param_1[0xad] = 0;
  param_1[0xa1] = puVar2;
  param_1[0xa7] = 0;
  param_1[0x9a] = puVar3;
  plVar5 = *(long **)(lVar7 + 0x330);
  uVar6 = (**(code **)(*plVar5 + 0x88))(plVar5,param_1[0xa0]);
  if (((uVar6 & 1) != 0) && (__ptr = (void *)param_1[0xa0], __ptr != (void *)0x0)) {
    if (*(long *)PTR_DAT_04bb2698 == 0) {
      free(__ptr);
    }
    else {
      plVar5 = (long *)FUN_038cb610(*(long *)PTR_DAT_04bb2698,__ptr);
      if (plVar5 != (long *)0x0) {
        (**(code **)(*plVar5 + 0x38))(plVar5,__ptr);
      }
    }
  }
  param_1[0xa0] = 0;
  param_1[0x94] = puVar1;
  param_1[0x99] = 0;
  param_1[0x8e] = puVar1;
  param_1[0x93] = 0;
  param_1[0x88] = puVar1;
  param_1[0x8d] = 0;
  param_1[0x82] = puVar1;
  param_1[0x87] = 0;
  param_1[0x7b] = puVar2;
  param_1[0x81] = 0;
  param_1[0x74] = puVar2;
  param_1[0x7a] = 0;
  param_1[0x6e] = puVar1;
  param_1[0x73] = 0;
  param_1[0x67] = puVar2;
  param_1[0x6d] = 0;
  param_1[0x61] = puVar1;
  param_1[0x66] = 0;
  param_1[0x5b] = puVar1;
  param_1[0x60] = 0;
  param_1[0x55] = puVar1;
  param_1[0x5a] = 0;
  param_1[0x4f] = puVar1;
  param_1[0x54] = 0;
  param_1[0x49] = &PTR_LAB_049b9278;
  param_1[0x4e] = 0;
  param_1[0x43] = puVar1;
  param_1[0x48] = 0;
  param_1[0x42] = 0;
  param_1[0x2b] = puVar1;
  param_1[0x3c] = 0;
  param_1[0x3d] = puVar1;
  param_1[0x36] = 0;
  param_1[0x37] = puVar1;
  param_1[0x30] = 0;
  param_1[0x31] = puVar1;
  return;
}

