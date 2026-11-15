
void FUN_0228eac8(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  long *plVar6;
  long lVar7;
  void *pvVar8;
  
  *param_1 = (long)(PTR_DAT_04bc2e70 + 0x10);
  puVar3 = PTR_DAT_04bb3058;
  puVar2 = PTR_DAT_04bb2fe8;
  lVar7 = *(long *)PTR_DAT_04bb3058;
  puVar1 = PTR_DAT_04bb2fe8 + 0x10;
  param_1[0x61] = (long)puVar1;
  uVar5 = (**(code **)(**(long **)(lVar7 + 0x330) + 0x88))(*(long **)(lVar7 + 0x330),param_1[0x67]);
  if (((uVar5 & 1) != 0) && (pvVar8 = (void *)param_1[0x67], pvVar8 != (void *)0x0)) {
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
  param_1[0x67] = 0;
  puVar4 = PTR_DAT_04bb31d0;
  param_1[0x60] = 0;
  param_1[0x54] = (long)puVar1;
  param_1[0x5b] = (long)(puVar4 + 0x10);
  uVar5 = (**(code **)(**(long **)(*(long *)puVar3 + 0x330) + 0x88))
                    (*(long **)(*(long *)puVar3 + 0x330),param_1[0x5a]);
  if (((uVar5 & 1) != 0) && (pvVar8 = (void *)param_1[0x5a], pvVar8 != (void *)0x0)) {
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
  lVar7 = *(long *)puVar3;
  param_1[0x5a] = 0;
  param_1[0x4d] = (long)(puVar2 + 0x10);
  uVar5 = (**(code **)(**(long **)(lVar7 + 0x330) + 0x88))(*(long **)(lVar7 + 0x330),param_1[0x53]);
  if (((uVar5 & 1) != 0) && (pvVar8 = (void *)param_1[0x53], pvVar8 != (void *)0x0)) {
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
  param_1[0x53] = 0;
  param_1[0x47] = (long)(puVar4 + 0x10);
  lVar7 = *(long *)puVar3;
  param_1[0x4c] = 0;
  param_1[0x40] = (long)(puVar2 + 0x10);
  uVar5 = (**(code **)(**(long **)(lVar7 + 0x330) + 0x88))(*(long **)(lVar7 + 0x330),param_1[0x46]);
  if (((uVar5 & 1) != 0) && (pvVar8 = (void *)param_1[0x46], pvVar8 != (void *)0x0)) {
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
  lVar7 = *(long *)puVar3;
  param_1[0x46] = 0;
  param_1[0x39] = (long)(puVar2 + 0x10);
  uVar5 = (**(code **)(**(long **)(lVar7 + 0x330) + 0x88))(*(long **)(lVar7 + 0x330),param_1[0x3f]);
  if (((uVar5 & 1) != 0) && (pvVar8 = (void *)param_1[0x3f], pvVar8 != (void *)0x0)) {
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
  param_1[0x3f] = 0;
  param_1[0x33] = (long)(puVar4 + 0x10);
  lVar7 = *(long *)puVar3;
  param_1[0x38] = 0;
  param_1[0x2c] = (long)(puVar2 + 0x10);
  uVar5 = (**(code **)(**(long **)(lVar7 + 0x330) + 0x88))(*(long **)(lVar7 + 0x330),param_1[0x32]);
  if (((uVar5 & 1) != 0) && (pvVar8 = (void *)param_1[0x32], pvVar8 != (void *)0x0)) {
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
  lVar7 = *(long *)puVar3;
  param_1[0x32] = 0;
  param_1[0x25] = (long)(puVar2 + 0x10);
  uVar5 = (**(code **)(**(long **)(lVar7 + 0x330) + 0x88))(*(long **)(lVar7 + 0x330),param_1[0x2b]);
  if (((uVar5 & 1) != 0) && (pvVar8 = (void *)param_1[0x2b], pvVar8 != (void *)0x0)) {
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
  param_1[0x2b] = 0;
  param_1[0x1f] = (long)(puVar4 + 0x10);
  lVar7 = *(long *)puVar3;
  param_1[0x24] = 0;
  param_1[0x18] = (long)(puVar2 + 0x10);
  uVar5 = (**(code **)(**(long **)(lVar7 + 0x330) + 0x88))(*(long **)(lVar7 + 0x330),param_1[0x1e]);
  if (((uVar5 & 1) != 0) && (pvVar8 = (void *)param_1[0x1e], pvVar8 != (void *)0x0)) {
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
  param_1[0x1e] = 0;
  return;
}

