
void FUN_03bc3de0(long param_1)

{
  uint *puVar1;
  undefined *puVar2;
  long lVar3;
  long *plVar4;
  ulong uVar5;
  void *pvVar6;
  ulong uVar7;
  long lVar8;
  
  puVar2 = PTR_DAT_04bb2698;
  pvVar6 = *(void **)(param_1 + 0x10);
  if (pvVar6 != (void *)0x0) {
    puVar1 = (uint *)(param_1 + 8);
    uVar5 = (ulong)*puVar1;
    if (0 < (int)*puVar1) {
      uVar7 = 0;
      do {
        lVar8 = *(long *)(*(long *)(param_1 + 0x10) + uVar7 * 8);
        pvVar6 = *(void **)(lVar8 + 0x28);
        if (pvVar6 != (void *)0x0) {
          lVar3 = *(long *)puVar2;
          if (lVar3 == 0) {
            free(pvVar6);
          }
          else {
            plVar4 = (long *)FUN_038cb610(lVar3,pvVar6);
            if (plVar4 != (long *)0x0) {
              (**(code **)(*plVar4 + 0x38))(plVar4,pvVar6);
            }
          }
          *(undefined8 *)(lVar8 + 0x28) = 0;
          *(undefined4 *)(lVar8 + 0x20) = 0;
          uVar5 = (ulong)*puVar1;
        }
        if ((uVar7 < uVar5) &&
           (plVar4 = *(long **)(*(long *)(param_1 + 0x10) + uVar7 * 8), plVar4 != (long *)0x0)) {
          (**(code **)(*plVar4 + 8))();
          uVar5 = (ulong)*puVar1;
        }
        uVar7 = uVar7 + 1;
      } while ((long)uVar7 < (long)(int)uVar5);
      pvVar6 = *(void **)(param_1 + 0x10);
      if (pvVar6 == (void *)0x0) {
        return;
      }
    }
    lVar8 = *(long *)puVar2;
    if (lVar8 == 0) {
      free(pvVar6);
    }
    else {
      plVar4 = (long *)FUN_038cb610(lVar8,pvVar6);
      if (plVar4 != (long *)0x0) {
        (**(code **)(*plVar4 + 0x38))(plVar4,pvVar6);
      }
    }
    puVar1[0] = 0;
    puVar1[1] = 0;
    *(undefined8 *)(param_1 + 0x10) = 0;
  }
  return;
}

