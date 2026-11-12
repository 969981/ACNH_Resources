
void FUN_006e7ff0(uint *param_1)

{
  uint uVar1;
  uint uVar2;
  undefined *puVar3;
  long *plVar4;
  long lVar5;
  void *pvVar6;
  uint uVar7;
  
  puVar3 = PTR_DAT_04bb2698;
  pvVar6 = *(void **)(param_1 + 6);
  if (pvVar6 != (void *)0x0) {
    if (*(long *)PTR_DAT_04bb2698 == 0) {
      free(pvVar6);
    }
    else {
      plVar4 = (long *)FUN_038cb610(*(long *)PTR_DAT_04bb2698,pvVar6);
      if (plVar4 != (long *)0x0) {
        (**(code **)(*plVar4 + 0x38))(plVar4,pvVar6);
      }
    }
    param_1[6] = 0;
    param_1[7] = 0;
    param_1[4] = 0;
  }
  pvVar6 = *(void **)(param_1 + 2);
  if (pvVar6 != (void *)0x0) {
    uVar2 = *param_1;
    if (0 < (int)uVar2) {
      uVar7 = 0;
      do {
        uVar1 = uVar7;
        if (*param_1 <= uVar7) {
          uVar1 = 0;
        }
        pvVar6 = *(void **)(*(long *)(param_1 + 2) + (ulong)uVar1 * 8);
        if (pvVar6 != (void *)0x0) {
          lVar5 = *(long *)puVar3;
          if (lVar5 == 0) {
            free(pvVar6);
          }
          else {
            plVar4 = (long *)FUN_038cb610(lVar5,pvVar6);
            if (plVar4 != (long *)0x0) {
              (**(code **)(*plVar4 + 0x38))(plVar4,pvVar6);
            }
          }
        }
        uVar7 = uVar7 + 1;
      } while (uVar2 != uVar7);
      pvVar6 = *(void **)(param_1 + 2);
      if (pvVar6 == (void *)0x0) {
        return;
      }
    }
    lVar5 = *(long *)puVar3;
    if (lVar5 == 0) {
      free(pvVar6);
    }
    else {
      plVar4 = (long *)FUN_038cb610(lVar5,pvVar6);
      if (plVar4 != (long *)0x0) {
        (**(code **)(*plVar4 + 0x38))(plVar4,pvVar6);
      }
    }
    param_1[2] = 0;
    param_1[3] = 0;
    *param_1 = 0;
  }
  return;
}

