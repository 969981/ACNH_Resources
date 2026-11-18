
void FUN_0340f290(undefined8 *param_1)

{
  ulong uVar1;
  int iVar2;
  undefined *puVar3;
  long *plVar4;
  void *pvVar5;
  undefined8 *puVar6;
  void *__ptr;
  ulong uVar7;
  
  puVar3 = PTR_DAT_04bb2698;
  puVar6 = (undefined8 *)*param_1;
  if (puVar6 != (undefined8 *)0x0) {
    pvVar5 = (void *)*puVar6;
    if (pvVar5 != (void *)0x0) {
      if (*(long *)PTR_DAT_04bb2698 == 0) {
        free(pvVar5);
      }
      else {
        plVar4 = (long *)FUN_038cb610(*(long *)PTR_DAT_04bb2698,pvVar5);
        if (plVar4 != (long *)0x0) {
          (**(code **)(*plVar4 + 0x38))(plVar4,pvVar5);
        }
      }
      *(undefined4 *)(puVar6 + 2) = 0;
      *puVar6 = 0;
      puVar6[1] = 0;
    }
    if ((long *)puVar6[3] != (long *)0x0) {
      (**(code **)(*(long *)puVar6[3] + 8))();
      puVar6[3] = 0;
    }
    pvVar5 = (void *)*param_1;
    if (pvVar5 != (void *)0x0) {
      if (*(long *)puVar3 == 0) {
        free(pvVar5);
      }
      else {
        plVar4 = (long *)FUN_038cb610(*(long *)puVar3,pvVar5);
        if (plVar4 != (long *)0x0) {
          (**(code **)(*plVar4 + 0x38))(plVar4,pvVar5);
        }
      }
    }
    *param_1 = 0;
  }
  pvVar5 = (void *)param_1[2];
  iVar2 = *(int *)(param_1 + 1);
  if (iVar2 != 0) {
    uVar7 = 0;
    do {
      __ptr = *(void **)((long)pvVar5 + (-(uVar7 >> 0x1f) & 0xfffffff000000000 | uVar7 << 4));
      if (__ptr != (void *)0x0) {
        if (*(long *)((long)__ptr + 8) != 0 && *(long **)((long)__ptr + 0x10) != (long *)0x0) {
          (**(code **)(**(long **)((long)__ptr + 0x10) + 8))();
        }
        FUN_038fd0e0((long)__ptr + 0x50);
        if (*(long *)puVar3 == 0) {
          free(__ptr);
        }
        else {
          plVar4 = (long *)FUN_038cb610(*(long *)puVar3,__ptr);
          if (plVar4 != (long *)0x0) {
            (**(code **)(*plVar4 + 0x38))(plVar4,__ptr);
          }
        }
      }
      uVar1 = uVar7 + 1;
      uVar7 = uVar1 & 0xffffffff;
    } while (iVar2 != (int)uVar1);
    pvVar5 = (void *)param_1[2];
  }
  if (pvVar5 != (void *)0x0) {
    if (*(long *)puVar3 == 0) {
      free(pvVar5);
    }
    else {
      plVar4 = (long *)FUN_038cb610(*(long *)puVar3,pvVar5);
      if (plVar4 != (long *)0x0) {
        (**(code **)(*plVar4 + 0x38))(plVar4,pvVar5);
      }
    }
    param_1[2] = 0;
    *(undefined4 *)(param_1 + 1) = 0;
  }
  return;
}

