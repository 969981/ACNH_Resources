
void FUN_03d5cd90(undefined8 *param_1)

{
  uint uVar1;
  undefined *puVar2;
  long *plVar3;
  long lVar4;
  int iVar5;
  uint uVar6;
  void *pvVar7;
  void *__ptr;
  
  *param_1 = &PTR_LAB_04b8fa98;
  if ((long *)param_1[0x43] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x43] + 8))();
  }
  puVar2 = PTR_DAT_04bb2698;
  pvVar7 = (void *)param_1[0x45];
  if (pvVar7 != (void *)0x0) {
    iVar5 = *(int *)((long)param_1 + 0x1fc);
    if (0 < iVar5) {
      uVar6 = 0;
      do {
        uVar1 = uVar6;
        if (*(uint *)(param_1 + 0x44) <= uVar6) {
          uVar1 = 0;
        }
        plVar3 = *(long **)(param_1[0x45] + (ulong)uVar1 * 8);
        if (plVar3 != (long *)0x0) {
          (**(code **)(*plVar3 + 8))();
          iVar5 = *(int *)((long)param_1 + 0x1fc);
        }
        uVar6 = uVar6 + 1;
      } while ((int)uVar6 < iVar5);
      pvVar7 = (void *)param_1[0x45];
      if (pvVar7 == (void *)0x0) goto LAB_03d5ce68;
    }
    if (*(long *)puVar2 == 0) {
      free(pvVar7);
    }
    else {
      plVar3 = (long *)FUN_038cb610(*(long *)puVar2,pvVar7);
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 0x38))(plVar3,pvVar7);
      }
    }
    param_1[0x45] = 0;
    *(undefined4 *)(param_1 + 0x44) = 0;
  }
LAB_03d5ce68:
  pvVar7 = (void *)param_1[0x47];
  if (pvVar7 != (void *)0x0) {
    iVar5 = *(int *)(param_1 + 0x40);
    if (0 < iVar5) {
      uVar6 = 0;
      do {
        uVar1 = uVar6;
        if (*(uint *)(param_1 + 0x46) <= uVar6) {
          uVar1 = 0;
        }
        pvVar7 = *(void **)(param_1[0x47] + (ulong)uVar1 * 8);
        if (pvVar7 != (void *)0x0) {
          __ptr = *(void **)((long)pvVar7 + 0xc0);
          if (__ptr == (void *)0x0) {
LAB_03d5cee8:
            lVar4 = *(long *)puVar2;
            if (lVar4 != 0) goto LAB_03d5cef0;
LAB_03d5ce84:
            free(pvVar7);
          }
          else {
            FUN_03d4af00(__ptr);
            if (*(long *)puVar2 != 0) {
              plVar3 = (long *)FUN_038cb610(*(long *)puVar2,__ptr);
              if (plVar3 != (long *)0x0) {
                (**(code **)(*plVar3 + 0x38))(plVar3,__ptr);
              }
              goto LAB_03d5cee8;
            }
            free(__ptr);
            lVar4 = *(long *)puVar2;
            if (lVar4 == 0) goto LAB_03d5ce84;
LAB_03d5cef0:
            plVar3 = (long *)FUN_038cb610(lVar4,pvVar7);
            if (plVar3 != (long *)0x0) {
              (**(code **)(*plVar3 + 0x38))(plVar3,pvVar7);
            }
          }
          iVar5 = *(int *)(param_1 + 0x40);
        }
        uVar6 = uVar6 + 1;
      } while ((int)uVar6 < iVar5);
      pvVar7 = (void *)param_1[0x47];
      if (pvVar7 == (void *)0x0) goto LAB_03d5cf64;
    }
    if (*(long *)puVar2 == 0) {
      free(pvVar7);
    }
    else {
      plVar3 = (long *)FUN_038cb610(*(long *)puVar2,pvVar7);
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 0x38))(plVar3,pvVar7);
      }
    }
    param_1[0x47] = 0;
    *(undefined4 *)(param_1 + 0x46) = 0;
  }
LAB_03d5cf64:
  pvVar7 = (void *)param_1[0x48];
  if (pvVar7 != (void *)0x0) {
    if (*(long *)puVar2 == 0) {
      free(pvVar7);
      pvVar7 = (void *)param_1[0x49];
      goto joined_r0x03d5cf94;
    }
    plVar3 = (long *)FUN_038cb610(*(long *)puVar2,pvVar7);
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 0x38))(plVar3,pvVar7);
    }
  }
  pvVar7 = (void *)param_1[0x49];
joined_r0x03d5cf94:
  if (pvVar7 != (void *)0x0) {
    if (*(long *)puVar2 == 0) {
      free(pvVar7);
    }
    else {
      plVar3 = (long *)FUN_038cb610(*(long *)puVar2,pvVar7);
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 0x38))(plVar3,pvVar7);
      }
    }
  }
  if ((long *)param_1[0x4b] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x4b] + 0x18))();
  }
  *param_1 = &PTR_FUN_04b90648;
  if ((long *)param_1[0x36] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x36] + 0x18))();
  }
  if ((long *)param_1[0x37] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x37] + 0x18))();
  }
  pvVar7 = (void *)param_1[0x3b];
  if (pvVar7 != (void *)0x0) {
    if (*(long *)puVar2 == 0) {
      free(pvVar7);
    }
    else {
      plVar3 = (long *)FUN_038cb610(*(long *)puVar2,pvVar7);
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 0x38))(plVar3,pvVar7);
      }
    }
  }
  FUN_03c5ce30(param_1);
  return;
}

