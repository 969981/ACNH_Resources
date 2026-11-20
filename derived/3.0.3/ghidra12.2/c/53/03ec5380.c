
void FUN_03ec5380(undefined8 *param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  undefined *puVar3;
  long lVar4;
  long *plVar5;
  uint uVar6;
  void *pvVar7;
  uint uVar8;
  
  *param_1 = &PTR_FUN_04ba5270;
  puVar3 = PTR_DAT_04bb2698;
  uVar6 = *(uint *)(param_1 + 1);
  if (0 < (int)uVar6) {
    uVar8 = 0;
    do {
      uVar2 = uVar8;
      if (uVar6 <= uVar8) {
        uVar2 = 0;
      }
      puVar1 = (undefined4 *)(param_1[2] + (ulong)uVar2 * 0x10);
      pvVar7 = *(void **)(puVar1 + 2);
      if (pvVar7 != (void *)0x0) {
        lVar4 = *(long *)puVar3;
        if (lVar4 == 0) {
          free(pvVar7);
        }
        else {
          plVar5 = (long *)FUN_038cb610(lVar4,pvVar7);
          if (plVar5 != (long *)0x0) {
            (**(code **)(*plVar5 + 0x38))(plVar5,pvVar7);
          }
        }
        *(undefined8 *)(puVar1 + 2) = 0;
        *puVar1 = 0;
        uVar6 = *(uint *)(param_1 + 1);
      }
      uVar8 = uVar8 + 1;
    } while ((int)uVar8 < (int)uVar6);
  }
  pvVar7 = (void *)param_1[2];
  if (pvVar7 != (void *)0x0) {
    lVar4 = *(long *)puVar3;
    if (lVar4 == 0) {
      free(pvVar7);
    }
    else {
      plVar5 = (long *)FUN_038cb610(lVar4,pvVar7);
      if (plVar5 != (long *)0x0) {
        (**(code **)(*plVar5 + 0x38))(plVar5,pvVar7);
      }
    }
    param_1[2] = 0;
    *(undefined4 *)(param_1 + 1) = 0;
  }
  return;
}

