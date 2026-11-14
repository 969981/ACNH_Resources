
void FUN_015731ec(undefined8 *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  void *pvVar7;
  
  *param_1 = &PTR_FUN_049ab5c0;
  puVar3 = PTR_DAT_04bb33a8;
  param_1[0xb4] = 0;
  param_1[0xaf] = puVar3 + 0x10;
  puVar1 = PTR_DAT_04bb3058;
  param_1[0x86] = &PTR_LAB_049ab728;
  uVar4 = (**(code **)(**(long **)(*(long *)puVar1 + 0x330) + 0x88))
                    (*(long **)(*(long *)puVar1 + 0x330),param_1[0xae]);
  if (((uVar4 & 1) != 0) && ((long *)param_1[0xae] != (long *)0x0)) {
    (**(code **)(*(long *)param_1[0xae] + 8))();
  }
  lVar6 = *(long *)puVar1;
  param_1[0xae] = 0;
  param_1[0x5d] = &PTR_LAB_049ab728;
  uVar4 = (**(code **)(**(long **)(lVar6 + 0x330) + 0x88))(*(long **)(lVar6 + 0x330),param_1[0x85]);
  if (((uVar4 & 1) != 0) && ((long *)param_1[0x85] != (long *)0x0)) {
    (**(code **)(*(long *)param_1[0x85] + 8))();
  }
  param_1[0x85] = 0;
  puVar2 = PTR_DAT_04bb31d0;
  param_1[0x5c] = 0;
  param_1[0x57] = puVar2 + 0x10;
  param_1[0x50] = PTR_DAT_04bb2fe8 + 0x10;
  uVar4 = (**(code **)(**(long **)(*(long *)puVar1 + 0x330) + 0x88))
                    (*(long **)(*(long *)puVar1 + 0x330),param_1[0x56]);
  if (((uVar4 & 1) != 0) && (pvVar7 = (void *)param_1[0x56], pvVar7 != (void *)0x0)) {
    if (*(long *)PTR_DAT_04bb2698 == 0) {
      free(pvVar7);
    }
    else {
      plVar5 = (long *)FUN_038cb610(*(long *)PTR_DAT_04bb2698,pvVar7);
      if (plVar5 != (long *)0x0) {
        (**(code **)(*plVar5 + 0x38))(plVar5,pvVar7);
      }
    }
  }
  param_1[0x56] = 0;
  param_1[0x4a] = puVar2 + 0x10;
  param_1[0x4f] = 0;
  param_1[0x42] = PTR_DAT_04bb3550 + 0x10;
  uVar4 = (**(code **)(**(long **)(*(long *)puVar1 + 0x330) + 0x88))
                    (*(long **)(*(long *)puVar1 + 0x330),param_1[0x49]);
  if (((uVar4 & 1) != 0) && (pvVar7 = (void *)param_1[0x49], pvVar7 != (void *)0x0)) {
    if (*(long *)PTR_DAT_04bb2698 == 0) {
      free(pvVar7);
    }
    else {
      plVar5 = (long *)FUN_038cb610(*(long *)PTR_DAT_04bb2698,pvVar7);
      if (plVar5 != (long *)0x0) {
        (**(code **)(*plVar5 + 0x38))(plVar5,pvVar7);
      }
    }
  }
  param_1[0x49] = 0;
  param_1[0x31] = PTR_DAT_04bb3578 + 0x10;
  uVar4 = (**(code **)(**(long **)(*(long *)puVar1 + 0x330) + 0x88))
                    (*(long **)(*(long *)puVar1 + 0x330),param_1[0x41]);
  if (((uVar4 & 1) != 0) && ((long *)param_1[0x41] != (long *)0x0)) {
    (**(code **)(*(long *)param_1[0x41] + 8))();
  }
  param_1[0x41] = 0;
  param_1[0x2b] = puVar3 + 0x10;
  param_1[0x30] = 0;
  return;
}

