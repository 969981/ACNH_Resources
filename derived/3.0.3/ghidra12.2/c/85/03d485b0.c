
void FUN_03d485b0(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  long lVar3;
  long *plVar4;
  uint uVar5;
  void *pvVar6;
  uint uVar7;
  
  puVar2 = PTR_DAT_04bb2698;
  uVar5 = *(uint *)(param_1 + 0x18);
  if (0 < (int)uVar5) {
    uVar7 = 0;
    do {
      uVar1 = uVar7;
      if (uVar5 <= uVar7) {
        uVar1 = 0;
      }
      pvVar6 = *(void **)(*(long *)(param_1 + 0x20) + (ulong)uVar1 * 8);
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
        uVar5 = *(uint *)(param_1 + 0x18);
      }
      uVar7 = uVar7 + 1;
    } while ((int)uVar7 < (int)uVar5);
  }
  pvVar6 = *(void **)(param_1 + 0x20);
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
    *(undefined8 *)(param_1 + 0x20) = 0;
    *(undefined4 *)(param_1 + 0x18) = 0;
  }
  return;
}

