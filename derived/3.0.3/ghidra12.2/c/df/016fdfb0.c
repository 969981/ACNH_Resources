
void FUN_016fdfb0(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  void *pvVar7;
  
  *param_1 = (long)(PTR_DAT_04bbe080 + 0x10);
  puVar3 = PTR_DAT_04bb3058;
  puVar2 = PTR_DAT_04bb2fe8;
  lVar6 = *(long *)PTR_DAT_04bb3058;
  puVar1 = PTR_DAT_04bb2fe8 + 0x10;
  param_1[0x8a3] = (long)puVar1;
  uVar4 = (**(code **)(**(long **)(lVar6 + 0x330) + 0x88))(*(long **)(lVar6 + 0x330),param_1[0x8a9])
  ;
  if (((uVar4 & 1) != 0) && (pvVar7 = (void *)param_1[0x8a9], pvVar7 != (void *)0x0)) {
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
  lVar6 = *(long *)puVar3;
  param_1[0x8a9] = 0;
  param_1[0x89c] = (long)puVar1;
  uVar4 = (**(code **)(**(long **)(lVar6 + 0x330) + 0x88))(*(long **)(lVar6 + 0x330),param_1[0x8a2])
  ;
  if (((uVar4 & 1) != 0) && (pvVar7 = (void *)param_1[0x8a2], pvVar7 != (void *)0x0)) {
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
  lVar6 = *(long *)puVar3;
  param_1[0x8a2] = 0;
  param_1[0x895] = (long)(puVar2 + 0x10);
  uVar4 = (**(code **)(**(long **)(lVar6 + 0x330) + 0x88))(*(long **)(lVar6 + 0x330),param_1[0x89b])
  ;
  if (((uVar4 & 1) != 0) && (pvVar7 = (void *)param_1[0x89b], pvVar7 != (void *)0x0)) {
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
  lVar6 = *(long *)puVar3;
  param_1[0x89b] = 0;
  param_1[0x88e] = (long)(puVar2 + 0x10);
  uVar4 = (**(code **)(**(long **)(lVar6 + 0x330) + 0x88))(*(long **)(lVar6 + 0x330),param_1[0x894])
  ;
  if (((uVar4 & 1) != 0) && (pvVar7 = (void *)param_1[0x894], pvVar7 != (void *)0x0)) {
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
  lVar6 = *(long *)puVar3;
  param_1[0x894] = 0;
  param_1[0x887] = (long)(puVar2 + 0x10);
  uVar4 = (**(code **)(**(long **)(lVar6 + 0x330) + 0x88))(*(long **)(lVar6 + 0x330),param_1[0x88d])
  ;
  if (((uVar4 & 1) != 0) && (pvVar7 = (void *)param_1[0x88d], pvVar7 != (void *)0x0)) {
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
  param_1[0x88d] = 0;
  puVar1 = PTR_DAT_04bb31d0;
  param_1[0x886] = 0;
  param_1[0x87a] = (long)(puVar2 + 0x10);
  param_1[0x881] = (long)(puVar1 + 0x10);
  uVar4 = (**(code **)(**(long **)(*(long *)puVar3 + 0x330) + 0x88))
                    (*(long **)(*(long *)puVar3 + 0x330),param_1[0x880]);
  if (((uVar4 & 1) != 0) && (pvVar7 = (void *)param_1[0x880], pvVar7 != (void *)0x0)) {
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
  param_1[0x880] = 0;
  param_1[0x873] = (long)(puVar2 + 0x10);
  uVar4 = (**(code **)(**(long **)(*(long *)puVar3 + 0x330) + 0x88))
                    (*(long **)(*(long *)puVar3 + 0x330),param_1[0x879]);
  if (((uVar4 & 1) != 0) && (pvVar7 = (void *)param_1[0x879], pvVar7 != (void *)0x0)) {
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
  param_1[0x86d] = (long)&PTR_LAB_049be138;
  param_1[0x879] = 0;
  param_1[0x867] = (long)(puVar1 + 0x10);
  param_1[0x861] = (long)&PTR_LAB_049be2d8;
  param_1[0x872] = 0;
  param_1[0x86c] = 0;
  param_1[0x866] = 0;
  param_1[0x310] = (long)&PTR_LAB_049be548;
  if (0 < (int)param_1[0x317]) {
    lVar6 = 0;
    do {
      plVar5 = *(long **)(param_1[0x318] + lVar6 * 8);
      (**(code **)*plVar5)(plVar5);
      lVar6 = lVar6 + 1;
      *plVar5 = param_1[0x319];
      param_1[0x319] = (long)plVar5;
    } while (lVar6 < (int)param_1[0x317]);
  }
  *(undefined4 *)(param_1 + 0x317) = 0;
  param_1[0x3b] = (long)&PTR_LAB_049be6c8;
  if (0 < (int)param_1[0x42]) {
    lVar6 = 0;
    do {
      plVar5 = *(long **)(param_1[0x43] + lVar6 * 8);
      (**(code **)*plVar5)(plVar5);
      lVar6 = lVar6 + 1;
      *plVar5 = param_1[0x44];
      param_1[0x44] = (long)plVar5;
    } while (lVar6 < (int)param_1[0x42]);
  }
  *(undefined4 *)(param_1 + 0x42) = 0;
  param_1[6] = (long)&PTR_LAB_049be848;
  if (0 < (int)param_1[0xd]) {
    lVar6 = 0;
    do {
      plVar5 = *(long **)(param_1[0xe] + lVar6 * 8);
      (**(code **)*plVar5)(plVar5);
      lVar6 = lVar6 + 1;
      *plVar5 = param_1[0xf];
      param_1[0xf] = (long)plVar5;
    } while (lVar6 < (int)param_1[0xd]);
  }
  *(undefined4 *)(param_1 + 0xd) = 0;
  return;
}

