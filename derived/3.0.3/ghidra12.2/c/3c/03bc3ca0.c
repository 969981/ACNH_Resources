
void FUN_03bc3ca0(undefined8 *param_1)

{
  uint *puVar1;
  undefined *puVar2;
  long lVar3;
  long *plVar4;
  ulong uVar5;
  void *pvVar6;
  ulong uVar7;
  long lVar8;
  
  pvVar6 = (void *)param_1[2];
  *param_1 = &PTR_FUN_04b7abf0;
  puVar2 = PTR_DAT_04bb2698;
  if (pvVar6 != (void *)0x0) {
    puVar1 = (uint *)(param_1 + 1);
    uVar5 = (ulong)*puVar1;
    if (0 < (int)*puVar1) {
      uVar7 = 0;
      do {
        lVar8 = *(long *)(param_1[2] + uVar7 * 8);
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
        if ((uVar7 < uVar5) && (plVar4 = *(long **)(param_1[2] + uVar7 * 8), plVar4 != (long *)0x0))
        {
          (**(code **)(*plVar4 + 8))();
          uVar5 = (ulong)*puVar1;
        }
        uVar7 = uVar7 + 1;
      } while ((long)uVar7 < (long)(int)uVar5);
      pvVar6 = (void *)param_1[2];
      if (pvVar6 == (void *)0x0) goto LAB_03bc3dc0;
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
    param_1[2] = 0;
  }
LAB_03bc3dc0:
  FUN_038e1a84(param_1 + 4);
  return;
}

