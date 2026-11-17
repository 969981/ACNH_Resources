
void FUN_02e43a90(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long *plVar5;
  long *plVar6;
  undefined8 *puVar7;
  long lVar8;
  ulong uVar9;
  long *plVar10;
  long *plVar11;
  void *pvVar12;
  
  puVar4 = PTR_DAT_04bb2df8;
  puVar3 = PTR_DAT_04bb2698;
  plVar6 = *(long **)(param_1 + 200);
  if (plVar6 != (long *)0x0) {
    plVar5 = plVar6 + -1;
    lVar8 = *plVar5;
    if (lVar8 != 0) {
      plVar10 = plVar6 + lVar8 * 0x2d;
      uVar9 = lVar8 * 0x168 - 0x168;
      uVar1 = ((uint)(uVar9 / 0x168) & 0x3ffffff) + 1;
      if ((uVar1 & 3) != 0) {
        puVar2 = PTR_DAT_04bb2df8 + 0x10;
        lVar8 = ((ulong)uVar1 & 3) * 0x168;
        plVar11 = plVar10;
        do {
          plVar10 = plVar11 + -0x2d;
          plVar11[-0x24] = (long)puVar2;
          lVar8 = lVar8 + -0x168;
          plVar11 = plVar10;
        } while (lVar8 != 0);
      }
      if (0x437 < uVar9) {
        plVar10 = plVar10 + -0xab;
        puVar2 = puVar4 + 0x10;
        do {
          plVar11 = plVar10 + -9;
          plVar10[0x87] = (long)puVar2;
          plVar10[0x5a] = (long)puVar2;
          plVar10[0x2d] = (long)puVar2;
          *plVar10 = (long)puVar2;
          plVar10 = plVar10 + -0xb4;
        } while (plVar11 != plVar6);
      }
    }
    if (*(long *)puVar3 == 0) {
      free(plVar5);
    }
    else {
      plVar6 = (long *)FUN_038cb610(*(long *)puVar3,plVar5);
      if (plVar6 != (long *)0x0) {
        (**(code **)(*plVar6 + 0x38))(plVar6,plVar5);
      }
    }
    *(undefined8 *)(param_1 + 200) = 0;
    *(undefined4 *)(param_1 + 0xc0) = 0;
  }
  pvVar12 = *(void **)(param_1 + 0xd8);
  if (pvVar12 != (void *)0x0) {
    if (*(long *)puVar3 == 0) {
      free(pvVar12);
    }
    else {
      plVar6 = (long *)FUN_038cb610(*(long *)puVar3,pvVar12);
      if (plVar6 != (long *)0x0) {
        (**(code **)(*plVar6 + 0x38))(plVar6,pvVar12);
      }
    }
    *(undefined8 *)(param_1 + 0xd0) = 0;
    *(undefined8 *)(param_1 + 0xd8) = 0;
  }
  pvVar12 = *(void **)(param_1 + 0xe8);
  if (pvVar12 != (void *)0x0) {
    if (*(long *)puVar3 == 0) {
      free(pvVar12);
    }
    else {
      plVar6 = (long *)FUN_038cb610(*(long *)puVar3,pvVar12);
      if (plVar6 != (long *)0x0) {
        (**(code **)(*plVar6 + 0x38))(plVar6,pvVar12);
      }
    }
    *(undefined8 *)(param_1 + 0xe0) = 0;
    *(undefined8 *)(param_1 + 0xe8) = 0;
  }
  pvVar12 = *(void **)(param_1 + 0xf8);
  if (pvVar12 != (void *)0x0) {
    if (*(long *)puVar3 == 0) {
      free(pvVar12);
    }
    else {
      plVar6 = (long *)FUN_038cb610(*(long *)puVar3,pvVar12);
      if (plVar6 != (long *)0x0) {
        (**(code **)(*plVar6 + 0x38))(plVar6,pvVar12);
      }
    }
    *(undefined8 *)(param_1 + 0xf0) = 0;
    *(undefined8 *)(param_1 + 0xf8) = 0;
  }
  pvVar12 = *(void **)(param_1 + 0x108);
  if (pvVar12 != (void *)0x0) {
    if (*(long *)puVar3 == 0) {
      free(pvVar12);
    }
    else {
      plVar6 = (long *)FUN_038cb610(*(long *)puVar3,pvVar12);
      if (plVar6 != (long *)0x0) {
        (**(code **)(*plVar6 + 0x38))(plVar6,pvVar12);
      }
    }
    *(undefined8 *)(param_1 + 0x100) = 0;
    *(undefined8 *)(param_1 + 0x108) = 0;
  }
  pvVar12 = *(void **)(param_1 + 0x118);
  if (pvVar12 != (void *)0x0) {
    if (*(long *)puVar3 == 0) {
      free(pvVar12);
    }
    else {
      plVar6 = (long *)FUN_038cb610(*(long *)puVar3,pvVar12);
      if (plVar6 != (long *)0x0) {
        (**(code **)(*plVar6 + 0x38))(plVar6,pvVar12);
      }
    }
    *(undefined8 *)(param_1 + 0x110) = 0;
    *(undefined8 *)(param_1 + 0x118) = 0;
  }
  pvVar12 = *(void **)(param_1 + 0x128);
  if (pvVar12 != (void *)0x0) {
    if (*(long *)puVar3 == 0) {
      free(pvVar12);
    }
    else {
      plVar6 = (long *)FUN_038cb610(*(long *)puVar3,pvVar12);
      if (plVar6 != (long *)0x0) {
        (**(code **)(*plVar6 + 0x38))(plVar6,pvVar12);
      }
    }
    *(undefined8 *)(param_1 + 0x120) = 0;
    *(undefined8 *)(param_1 + 0x128) = 0;
  }
  puVar2 = PTR_DAT_04bc6c78;
  plVar6 = *(long **)(param_1 + 0x78);
  if (plVar6 == (long *)0x0) {
LAB_02e43d90:
    plVar6 = *(long **)(param_1 + 0x80);
  }
  else {
    *plVar6 = (long)(PTR_DAT_04bc6c78 + 0x10);
    FUN_03ebae78(plVar6 + 1);
    plVar5 = plVar6 + 0xb;
    puVar7 = (undefined8 *)*plVar5;
    if (((puVar7 != (undefined8 *)0x0) && ((long *)*puVar7 != (long *)0x0)) &&
       ((long *)*puVar7 == plVar5)) {
      *plVar5 = 0;
      *puVar7 = 0;
    }
    if (*(long *)puVar3 != 0) {
      plVar5 = (long *)FUN_038cb610(*(long *)puVar3,plVar6);
      if (plVar5 != (long *)0x0) {
        (**(code **)(*plVar5 + 0x38))(plVar5,plVar6);
      }
      goto LAB_02e43d90;
    }
    free(plVar6);
    plVar6 = *(long **)(param_1 + 0x80);
  }
  if (plVar6 != (long *)0x0) {
    *plVar6 = (long)(puVar2 + 0x10);
    FUN_03ebae78(plVar6 + 1);
    plVar5 = plVar6 + 0xb;
    puVar7 = (undefined8 *)*plVar5;
    if (((puVar7 != (undefined8 *)0x0) && ((long *)*puVar7 != (long *)0x0)) &&
       ((long *)*puVar7 == plVar5)) {
      *plVar5 = 0;
      *puVar7 = 0;
    }
    if (*(long *)puVar3 == 0) {
      free(plVar6);
    }
    else {
      plVar5 = (long *)FUN_038cb610(*(long *)puVar3,plVar6);
      if (plVar5 != (long *)0x0) {
        (**(code **)(*plVar5 + 0x38))(plVar5,plVar6);
      }
    }
  }
  plVar6 = *(long **)(param_1 + 0x88);
  if (plVar6 == (long *)0x0) {
LAB_02e43e78:
    plVar6 = *(long **)(param_1 + 0x90);
  }
  else {
    plVar6[0x35] = (long)(puVar4 + 0x10);
    *plVar6 = (long)(puVar2 + 0x10);
    FUN_03ebae78(plVar6 + 1);
    plVar5 = plVar6 + 0xb;
    puVar7 = (undefined8 *)*plVar5;
    if (((puVar7 != (undefined8 *)0x0) && ((long *)*puVar7 != (long *)0x0)) &&
       ((long *)*puVar7 == plVar5)) {
      *plVar5 = 0;
      *puVar7 = 0;
    }
    if (*(long *)puVar3 != 0) {
      plVar5 = (long *)FUN_038cb610(*(long *)puVar3,plVar6);
      if (plVar5 != (long *)0x0) {
        (**(code **)(*plVar5 + 0x38))(plVar5,plVar6);
      }
      goto LAB_02e43e78;
    }
    free(plVar6);
    plVar6 = *(long **)(param_1 + 0x90);
  }
  if (plVar6 != (long *)0x0) {
    plVar6[0x1a] = (long)(puVar4 + 0x10);
    *plVar6 = (long)(puVar2 + 0x10);
    FUN_03ebae78(plVar6 + 1);
    plVar5 = plVar6 + 0xb;
    puVar7 = (undefined8 *)*plVar5;
    if (((puVar7 != (undefined8 *)0x0) && ((long *)*puVar7 != (long *)0x0)) &&
       ((long *)*puVar7 == plVar5)) {
      *plVar5 = 0;
      *puVar7 = 0;
    }
    if (*(long *)puVar3 == 0) {
      free(plVar6);
    }
    else {
      plVar5 = (long *)FUN_038cb610(*(long *)puVar3,plVar6);
      if (plVar5 != (long *)0x0) {
        (**(code **)(*plVar5 + 0x38))(plVar5,plVar6);
      }
    }
  }
  plVar6 = *(long **)(param_1 + 0x98);
  if (plVar6 == (long *)0x0) {
LAB_02e43f68:
    plVar6 = *(long **)(param_1 + 0xa0);
  }
  else {
    plVar6[0x1a] = (long)(puVar4 + 0x10);
    *plVar6 = (long)(puVar2 + 0x10);
    FUN_03ebae78(plVar6 + 1);
    plVar5 = plVar6 + 0xb;
    puVar7 = (undefined8 *)*plVar5;
    if (((puVar7 != (undefined8 *)0x0) && ((long *)*puVar7 != (long *)0x0)) &&
       ((long *)*puVar7 == plVar5)) {
      *plVar5 = 0;
      *puVar7 = 0;
    }
    if (*(long *)puVar3 != 0) {
      plVar5 = (long *)FUN_038cb610(*(long *)puVar3,plVar6);
      if (plVar5 != (long *)0x0) {
        (**(code **)(*plVar5 + 0x38))(plVar5,plVar6);
      }
      goto LAB_02e43f68;
    }
    free(plVar6);
    plVar6 = *(long **)(param_1 + 0xa0);
  }
  if (plVar6 != (long *)0x0) {
    plVar6[0x1a] = (long)(puVar4 + 0x10);
    *plVar6 = (long)(puVar2 + 0x10);
    FUN_03ebae78(plVar6 + 1);
    plVar5 = plVar6 + 0xb;
    puVar7 = (undefined8 *)*plVar5;
    if (((puVar7 != (undefined8 *)0x0) && ((long *)*puVar7 != (long *)0x0)) &&
       ((long *)*puVar7 == plVar5)) {
      *plVar5 = 0;
      *puVar7 = 0;
    }
    if (*(long *)puVar3 == 0) {
      free(plVar6);
    }
    else {
      plVar5 = (long *)FUN_038cb610(*(long *)puVar3,plVar6);
      if (plVar5 != (long *)0x0) {
        (**(code **)(*plVar5 + 0x38))(plVar5,plVar6);
      }
    }
  }
  plVar6 = *(long **)(param_1 + 0xa8);
  if (plVar6 != (long *)0x0) {
    *plVar6 = (long)(puVar2 + 0x10);
    FUN_03ebae78(plVar6 + 1);
    plVar5 = plVar6 + 0xb;
    puVar7 = (undefined8 *)*plVar5;
    if (((puVar7 != (undefined8 *)0x0) && ((long *)*puVar7 != (long *)0x0)) &&
       ((long *)*puVar7 == plVar5)) {
      *plVar5 = 0;
      *puVar7 = 0;
    }
    if (*(long *)puVar3 == 0) {
      free(plVar6);
      plVar6 = *(long **)(param_1 + 0xb0);
      goto joined_r0x02e44054;
    }
    plVar5 = (long *)FUN_038cb610(*(long *)puVar3,plVar6);
    if (plVar5 != (long *)0x0) {
      (**(code **)(*plVar5 + 0x38))(plVar5,plVar6);
    }
  }
  plVar6 = *(long **)(param_1 + 0xb0);
joined_r0x02e44054:
  if (plVar6 != (long *)0x0) {
    *plVar6 = (long)(puVar2 + 0x10);
    FUN_03ebae78(plVar6 + 1);
    plVar5 = plVar6 + 0xb;
    puVar7 = (undefined8 *)*plVar5;
    if (((puVar7 != (undefined8 *)0x0) && ((long *)*puVar7 != (long *)0x0)) &&
       ((long *)*puVar7 == plVar5)) {
      *plVar5 = 0;
      *puVar7 = 0;
    }
    if (*(long *)puVar3 == 0) {
      free(plVar6);
    }
    else {
      plVar5 = (long *)FUN_038cb610(*(long *)puVar3,plVar6);
      if (plVar5 != (long *)0x0) {
        (**(code **)(*plVar5 + 0x38))(plVar5,plVar6);
      }
    }
  }
  plVar6 = *(long **)(param_1 + 0xb8);
  if (plVar6 != (long *)0x0) {
    *plVar6 = (long)(puVar2 + 0x10);
    FUN_03ebae78(plVar6 + 1);
    plVar5 = plVar6 + 0xb;
    puVar7 = (undefined8 *)*plVar5;
    if (((puVar7 != (undefined8 *)0x0) && ((long *)*puVar7 != (long *)0x0)) &&
       ((long *)*puVar7 == plVar5)) {
      *plVar5 = 0;
      *puVar7 = 0;
    }
    if (*(long *)puVar3 == 0) {
      free(plVar6);
    }
    else {
      plVar5 = (long *)FUN_038cb610(*(long *)puVar3,plVar6);
      if (plVar5 != (long *)0x0) {
        (**(code **)(*plVar5 + 0x38))(plVar5,plVar6);
      }
    }
  }
  *(undefined **)(param_1 + 0x180) = puVar4 + 0x10;
  return;
}

