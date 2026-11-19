
void FUN_03c23400(undefined8 *param_1)

{
  uint uVar1;
  undefined *puVar2;
  long *plVar3;
  uint uVar4;
  void *pvVar5;
  uint uVar6;
  long lVar7;
  ulong uVar8;
  undefined8 *puVar9;
  
  *param_1 = &PTR_FUN_04b7e3d8;
  puVar2 = PTR_DAT_04bb2698;
  uVar4 = *(uint *)(param_1 + 1);
  if (0 < (int)uVar4) {
    uVar6 = 0;
    do {
      lVar7 = param_1[2];
      uVar1 = uVar6;
      if (uVar4 <= uVar6) {
        uVar1 = 0;
      }
      uVar8 = (ulong)uVar1;
      *(undefined8 *)(lVar7 + uVar8 * 0x28) = 0;
      puVar9 = (undefined8 *)(lVar7 + uVar8 * 0x28 + 0x10);
      pvVar5 = (void *)*puVar9;
      if (pvVar5 != (void *)0x0) {
        if (*(long *)puVar2 == 0) {
          free(pvVar5);
        }
        else {
          plVar3 = (long *)FUN_038cb610(*(long *)puVar2,pvVar5);
          if (plVar3 != (long *)0x0) {
            (**(code **)(*plVar3 + 0x38))(plVar3,pvVar5);
          }
        }
        *puVar9 = 0;
        *(undefined4 *)(lVar7 + uVar8 * 0x28 + 8) = 0;
      }
      puVar9 = (undefined8 *)(lVar7 + uVar8 * 0x28 + 0x20);
      pvVar5 = (void *)*puVar9;
      if (pvVar5 != (void *)0x0) {
        if (*(long *)puVar2 == 0) {
          free(pvVar5);
        }
        else {
          plVar3 = (long *)FUN_038cb610(*(long *)puVar2,pvVar5);
          if (plVar3 != (long *)0x0) {
            (**(code **)(*plVar3 + 0x38))(plVar3,pvVar5);
          }
        }
        *puVar9 = 0;
        *(undefined4 *)(lVar7 + uVar8 * 0x28 + 0x18) = 0;
      }
      uVar4 = *(uint *)(param_1 + 1);
      uVar6 = uVar6 + 1;
    } while ((int)uVar6 < (int)uVar4);
  }
  pvVar5 = (void *)param_1[2];
  if (pvVar5 != (void *)0x0) {
    if (*(long *)puVar2 == 0) {
      free(pvVar5);
    }
    else {
      plVar3 = (long *)FUN_038cb610(*(long *)puVar2,pvVar5);
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 0x38))(plVar3,pvVar5);
      }
    }
    param_1[2] = 0;
    *(undefined4 *)(param_1 + 1) = 0;
  }
  return;
}

