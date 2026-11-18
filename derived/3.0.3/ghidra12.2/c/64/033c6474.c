
void FUN_033c6474(undefined8 *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  long *plVar6;
  long lVar7;
  void *pvVar8;
  
  *param_1 = &PTR_FUN_04b261b0;
  puVar3 = PTR_DAT_04bb3058;
  puVar2 = PTR_DAT_04bb2fe8;
  param_1[0x89] = PTR_DAT_04bb2fe8 + 0x10;
  uVar5 = (**(code **)(**(long **)(*(long *)puVar3 + 0x330) + 0x88))
                    (*(long **)(*(long *)puVar3 + 0x330),param_1[0x8f]);
  if (((uVar5 & 1) != 0) && (pvVar8 = (void *)param_1[0x8f], pvVar8 != (void *)0x0)) {
    if (*(long *)PTR_DAT_04bb2698 == 0) {
      free(pvVar8);
    }
    else {
      plVar6 = (long *)FUN_038cb610(*(long *)PTR_DAT_04bb2698,pvVar8);
      if (plVar6 != (long *)0x0) {
        (**(code **)(*plVar6 + 0x38))(plVar6,pvVar8);
      }
    }
  }
  param_1[0x8f] = 0;
  puVar4 = PTR_DAT_04bb3578;
  lVar7 = *(long *)puVar3;
  puVar1 = PTR_DAT_04bb3578 + 0x10;
  param_1[0x78] = puVar1;
  uVar5 = (**(code **)(**(long **)(lVar7 + 0x330) + 0x88))(*(long **)(lVar7 + 0x330),param_1[0x88]);
  if (((uVar5 & 1) != 0) && ((long *)param_1[0x88] != (long *)0x0)) {
    (**(code **)(*(long *)param_1[0x88] + 8))();
  }
  lVar7 = *(long *)puVar3;
  param_1[0x88] = 0;
  param_1[0x67] = puVar1;
  uVar5 = (**(code **)(**(long **)(lVar7 + 0x330) + 0x88))(*(long **)(lVar7 + 0x330),param_1[0x77]);
  if (((uVar5 & 1) != 0) && ((long *)param_1[0x77] != (long *)0x0)) {
    (**(code **)(*(long *)param_1[0x77] + 8))();
  }
  param_1[0x77] = 0;
  puVar1 = PTR_DAT_04bb31d0;
  param_1[0x66] = 0;
  puVar1 = puVar1 + 0x10;
  param_1[0x60] = 0;
  param_1[0x5a] = 0;
  param_1[0x54] = 0;
  param_1[0x4e] = 0;
  param_1[0x61] = puVar1;
  param_1[0x5b] = puVar1;
  param_1[0x55] = puVar1;
  param_1[0x4f] = puVar1;
  param_1[0x49] = puVar1;
  param_1[0x42] = puVar2 + 0x10;
  uVar5 = (**(code **)(**(long **)(*(long *)puVar3 + 0x330) + 0x88))
                    (*(long **)(*(long *)puVar3 + 0x330),param_1[0x48]);
  if (((uVar5 & 1) != 0) && (pvVar8 = (void *)param_1[0x48], pvVar8 != (void *)0x0)) {
    if (*(long *)PTR_DAT_04bb2698 == 0) {
      free(pvVar8);
    }
    else {
      plVar6 = (long *)FUN_038cb610(*(long *)PTR_DAT_04bb2698,pvVar8);
      if (plVar6 != (long *)0x0) {
        (**(code **)(*plVar6 + 0x38))(plVar6,pvVar8);
      }
    }
  }
  param_1[0x48] = 0;
  puVar2 = PTR_DAT_04bbd958;
  param_1[0x41] = 0;
  param_1[0x3c] = puVar2 + 0x10;
  param_1[0x2b] = puVar4 + 0x10;
  uVar5 = (**(code **)(**(long **)(*(long *)puVar3 + 0x330) + 0x88))
                    (*(long **)(*(long *)puVar3 + 0x330),param_1[0x3b]);
  if (((uVar5 & 1) != 0) && ((long *)param_1[0x3b] != (long *)0x0)) {
    (**(code **)(*(long *)param_1[0x3b] + 8))();
  }
  param_1[0x3b] = 0;
  return;
}

