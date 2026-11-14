
/* WARNING: Type propagation algorithm not settling */

void FUN_01d6e9b0(long param_1,uint param_2,long *param_3)

{
  undefined1 auVar1 [16];
  bool bVar2;
  undefined *puVar3;
  long *plVar4;
  long lVar5;
  size_t __size;
  ulong uVar6;
  int *piVar7;
  void *pvVar8;
  undefined8 *puVar9;
  long lVar10;
  undefined8 *puVar11;
  
  puVar3 = PTR_DAT_04bb2698;
  pvVar8 = *(void **)(param_1 + 0x28);
  if (pvVar8 != (void *)0x0) {
    if (*(long *)PTR_DAT_04bb2698 == 0) {
      free(pvVar8);
    }
    else {
      plVar4 = (long *)FUN_038cb610(*(long *)PTR_DAT_04bb2698,pvVar8);
      if (plVar4 != (long *)0x0) {
        (**(code **)(*plVar4 + 0x38))(plVar4,pvVar8);
      }
    }
    puVar9 = *(undefined8 **)(param_1 + 0x38);
    *(undefined8 *)(param_1 + 0x20) = 0;
    *(undefined8 *)(param_1 + 0x28) = 0;
    if (puVar9 != (undefined8 *)0x0) {
      pvVar8 = (void *)puVar9[1];
      if (pvVar8 == (void *)0x0) {
LAB_01d6ea6c:
        if (*(long *)puVar3 == 0) {
          free(puVar9);
        }
        else {
          plVar4 = (long *)FUN_038cb610(*(long *)puVar3,puVar9);
          if (plVar4 != (long *)0x0) {
            (**(code **)(*plVar4 + 0x38))(plVar4,puVar9);
          }
        }
      }
      else {
        if (*(long *)puVar3 == 0) {
          free(pvVar8);
        }
        else {
          plVar4 = (long *)FUN_038cb610(*(long *)puVar3,pvVar8);
          if (plVar4 != (long *)0x0) {
            (**(code **)(*plVar4 + 0x38))(plVar4,pvVar8);
          }
        }
        *puVar9 = 0;
        puVar9[1] = 0;
        puVar9 = *(undefined8 **)(param_1 + 0x38);
        if (puVar9 != (undefined8 *)0x0) goto LAB_01d6ea6c;
      }
      *(undefined8 *)(param_1 + 0x38) = 0;
    }
    pvVar8 = *(void **)(param_1 + 0x40);
    if (pvVar8 != (void *)0x0) {
      if (*(long *)puVar3 == 0) {
        free(pvVar8);
      }
      else {
        plVar4 = (long *)FUN_038cb610(*(long *)puVar3,pvVar8);
        if (plVar4 != (long *)0x0) {
          (**(code **)(*plVar4 + 0x38))(plVar4,pvVar8);
        }
      }
    }
    *(undefined8 *)(param_1 + 0x40) = 0;
  }
  lVar10 = *(long *)puVar3;
  __size = (long)(int)param_2 * 0x1878;
  auVar1._8_8_ = 0;
  auVar1._0_8_ = (long)(int)param_2;
  if (SUB168(auVar1 * ZEXT816(0x1878),8) != 0) {
    __size = 0xffffffffffffffff;
  }
  if (lVar10 == 0) {
    puVar9 = malloc(__size);
joined_r0x01d6ec24:
    if (param_2 != 0) goto LAB_01d6eb4c;
LAB_01d6ec28:
    bVar2 = false;
    *(undefined8 **)(param_1 + 0x40) = puVar9;
    lVar10 = *(long *)(param_1 + 0x38);
  }
  else {
    plVar4 = param_3;
    if (param_3 == (long *)0x0) {
      lVar5 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
      plVar4 = (long *)(lVar10 + 8);
      if (lVar5 != 0) {
        plVar4 = (long *)(lVar5 + 0xa8);
      }
      plVar4 = (long *)*plVar4;
      if (plVar4 == (long *)0x0) {
        puVar9 = (undefined8 *)0x0;
        goto joined_r0x01d6ec24;
      }
    }
    puVar9 = (undefined8 *)(**(code **)(*plVar4 + 0x30))(plVar4,__size,8);
    if (param_2 == 0) goto LAB_01d6ec28;
LAB_01d6eb4c:
    puVar11 = puVar9;
    do {
      *puVar11 = 0;
      *(undefined1 *)(puVar11 + 0xd8) = 0;
      *(undefined1 *)(puVar11 + 0xd9) = 0;
      memset(puVar11 + 0xda,0,0x491);
      memset(puVar11 + 0x16d,0,0xd09);
      puVar11 = puVar11 + 0x30f;
    } while (puVar11 != puVar9 + (long)(int)param_2 * 0x30f);
    *(undefined8 **)(param_1 + 0x40) = puVar9;
    if ((int)param_2 < 1) {
      bVar2 = false;
      lVar10 = *(long *)(param_1 + 0x38);
    }
    else {
      lVar10 = *(long *)puVar3;
      if (lVar10 == 0) {
        pvVar8 = malloc((long)(int)(param_2 << 3));
joined_r0x01d6ede4:
        if (pvVar8 != (void *)0x0) {
          bVar2 = true;
          *(void **)(param_1 + 0x28) = pvVar8;
          *(undefined4 *)(param_1 + 0x20) = 0;
          *(uint *)(param_1 + 0x24) = param_2;
          lVar10 = *(long *)(param_1 + 0x38);
          goto joined_r0x01d6edc4;
        }
      }
      else {
        plVar4 = param_3;
        if (param_3 != (long *)0x0) {
LAB_01d6ebe8:
          pvVar8 = (void *)(**(code **)(*plVar4 + 0x30))(plVar4,(long)(int)(param_2 << 3),8);
          goto joined_r0x01d6ede4;
        }
        lVar5 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
        plVar4 = (long *)(lVar10 + 8);
        if (lVar5 != 0) {
          plVar4 = (long *)(lVar5 + 0xa8);
        }
        plVar4 = (long *)*plVar4;
        if (plVar4 != (long *)0x0) goto LAB_01d6ebe8;
      }
      bVar2 = true;
      lVar10 = *(long *)(param_1 + 0x38);
    }
  }
joined_r0x01d6edc4:
  if (lVar10 != 0) {
    (**(code **)(*(long *)(param_1 + 0x30) + 0x10))();
  }
  lVar10 = *(long *)puVar3;
  if (lVar10 == 0) {
    puVar9 = malloc(0x10);
  }
  else {
    plVar4 = param_3;
    if (param_3 == (long *)0x0) {
      lVar5 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
      plVar4 = (long *)(lVar10 + 8);
      if (lVar5 != 0) {
        plVar4 = (long *)(lVar5 + 0xa8);
      }
      plVar4 = (long *)*plVar4;
      if (plVar4 == (long *)0x0) {
        puVar9 = (undefined8 *)0x0;
        goto LAB_01d6eca8;
      }
    }
    puVar9 = (undefined8 *)(**(code **)(*plVar4 + 0x30))(plVar4,0x10,8);
  }
LAB_01d6eca8:
  *puVar9 = 0;
  puVar9[1] = 0;
  *(undefined8 **)(param_1 + 0x38) = puVar9;
  if (!bVar2) {
    return;
  }
  lVar10 = *(long *)puVar3;
  if (lVar10 == 0) {
    pvVar8 = malloc((long)(int)(param_2 << 3));
  }
  else {
    if (param_3 == (long *)0x0) {
      lVar5 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
      puVar11 = (undefined8 *)(lVar10 + 8);
      if (lVar5 != 0) {
        puVar11 = (undefined8 *)(lVar5 + 0xa8);
      }
      param_3 = (long *)*puVar11;
      if (param_3 == (long *)0x0) goto LAB_01d6ed18;
    }
    pvVar8 = (void *)(**(code **)(*param_3 + 0x30))(param_3,(long)(int)(param_2 << 3),8);
  }
  if (pvVar8 != (void *)0x0) {
    puVar9[1] = pvVar8;
    *(undefined4 *)puVar9 = 0;
    *(uint *)((long)puVar9 + 4) = param_2;
  }
LAB_01d6ed18:
  lVar10 = 0;
  uVar6 = (ulong)param_2;
  do {
    lVar5 = *(long *)(param_1 + 0x40);
    if (*(int *)(param_1 + 0x20) < *(int *)(param_1 + 0x24)) {
      *(long *)(*(long *)(param_1 + 0x28) + (long)*(int *)(param_1 + 0x20) * 8) = lVar5 + lVar10;
      *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + 1;
      lVar5 = *(long *)(param_1 + 0x40);
    }
    piVar7 = *(int **)(param_1 + 0x38);
    if ((piVar7 != (int *)0x0) && (*piVar7 < piVar7[1])) {
      *(long *)(*(long *)(piVar7 + 2) + (long)*piVar7 * 8) = lVar5 + lVar10;
      *piVar7 = *piVar7 + 1;
    }
    uVar6 = uVar6 - 1;
    lVar10 = lVar10 + 0x1878;
  } while (uVar6 != 0);
  return;
}

