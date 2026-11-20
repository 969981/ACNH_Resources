
void FUN_03f236b0(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  long *plVar3;
  uint uVar4;
  long lVar5;
  uint uVar6;
  long *plVar7;
  void *pvVar8;
  long lVar9;
  
  if (*(char *)(param_1 + 8) != '\0') {
    uVar4 = *(uint *)(param_1 + 0x10);
    if (0 < (int)uVar4) {
      uVar6 = 0;
      do {
        uVar1 = uVar6;
        if (uVar4 <= uVar6) {
          uVar1 = 0;
        }
        FUN_03f24d98(*(long *)(param_1 + 0x18) + (ulong)uVar1 * 0x68);
        uVar4 = *(uint *)(param_1 + 0x10);
        uVar6 = uVar6 + 1;
      } while ((int)uVar6 < (int)uVar4);
    }
    puVar2 = PTR_DAT_04bb2698;
    lVar5 = *(long *)(param_1 + 0x18);
    if (lVar5 != 0) {
      plVar7 = (long *)(lVar5 + -8);
      if (*plVar7 != 0) {
        lVar9 = *plVar7 * 0x68;
        do {
          FUN_03f24cd4(lVar5 + -0x68 + lVar9);
          lVar9 = lVar9 + -0x68;
        } while (lVar9 != 0);
      }
      if (*(long *)puVar2 == 0) {
        free(plVar7);
      }
      else {
        plVar3 = (long *)FUN_038cb610(*(long *)puVar2,plVar7);
        if (plVar3 != (long *)0x0) {
          (**(code **)(*plVar3 + 0x38))(plVar3,plVar7);
        }
      }
      *(undefined8 *)(param_1 + 0x18) = 0;
      *(undefined4 *)(param_1 + 0x10) = 0;
    }
    if (*(long *)(param_1 + 0x28) != 0) {
      pvVar8 = (void *)(*(long *)(param_1 + 0x28) + -8);
      if (*(long *)puVar2 == 0) {
        free(pvVar8);
      }
      else {
        plVar7 = (long *)FUN_038cb610(*(long *)puVar2,pvVar8);
        if (plVar7 != (long *)0x0) {
          (**(code **)(*plVar7 + 0x38))(plVar7,pvVar8);
        }
      }
      *(undefined8 *)(param_1 + 0x28) = 0;
      *(undefined4 *)(param_1 + 0x20) = 0;
    }
    if (*(long **)(param_1 + 200) != (long *)0x0) {
      (**(code **)(**(long **)(param_1 + 200) + 8))();
      *(undefined8 *)(param_1 + 200) = 0;
    }
    pvVar8 = *(void **)(param_1 + 0xd8);
    if (pvVar8 != (void *)0x0) {
      if (*(long *)puVar2 == 0) {
        free(pvVar8);
      }
      else {
        plVar7 = (long *)FUN_038cb610(*(long *)puVar2,pvVar8);
        if (plVar7 != (long *)0x0) {
          (**(code **)(*plVar7 + 0x38))(plVar7,pvVar8);
        }
      }
      *(undefined8 *)(param_1 + 0xd8) = 0;
      *(undefined4 *)(param_1 + 0xd0) = 0;
    }
    *(undefined1 *)(param_1 + 8) = 0;
  }
  return;
}

