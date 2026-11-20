
void FUN_03efee90(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  long lVar3;
  uint uVar4;
  uint uVar5;
  long lVar6;
  long *plVar7;
  void *pvVar8;
  uint uVar9;
  undefined8 *puVar10;
  
  puVar2 = PTR_DAT_04bb2698;
  uVar1 = *(uint *)(param_1 + 0x10);
  if (0 < (int)uVar1) {
    uVar9 = 0;
    do {
      uVar4 = *(uint *)(param_1 + 0x10);
      lVar3 = *(long *)(param_1 + 0x18);
      uVar5 = uVar9;
      if (uVar4 <= uVar9) {
        uVar5 = 0;
      }
      lVar6 = *(long *)(lVar3 + (ulong)uVar5 * 0x48 + 0x28);
      if (lVar6 != 0) {
        if (*(long *)(lVar6 + 8) != 0) {
          FUN_005145c0(*(undefined8 *)(lVar3 + (ulong)uVar5 * 0x48));
          uVar4 = *(uint *)(param_1 + 0x10);
          lVar3 = *(long *)(param_1 + 0x18);
        }
        uVar5 = uVar9;
        if (uVar4 <= uVar9) {
          uVar5 = 0;
        }
        plVar7 = *(long **)(lVar3 + (ulong)uVar5 * 0x48 + 0x28);
        if (plVar7[1] != 0) {
          FUN_004435c0();
          plVar7[1] = 0;
        }
        (**(code **)(*plVar7 + 8))(plVar7);
        uVar5 = uVar9;
        if (*(uint *)(param_1 + 0x10) <= uVar9) {
          uVar5 = 0;
        }
        *(undefined8 *)(*(long *)(param_1 + 0x18) + (ulong)uVar5 * 0x48 + 0x28) = 0;
      }
      uVar9 = uVar9 + 1;
    } while (uVar1 != uVar9);
    uVar9 = 0;
    do {
      uVar5 = *(uint *)(param_1 + 0x10);
      lVar3 = *(long *)(param_1 + 0x18);
      if (*(long *)(param_1 + 0x28) != 0) {
        uVar4 = uVar9;
        if (uVar5 <= uVar9) {
          uVar4 = 0;
        }
        FUN_005131d0(*(long *)(param_1 + 0x28),*(undefined8 *)(lVar3 + (ulong)uVar4 * 0x48));
        uVar5 = *(uint *)(param_1 + 0x10);
        lVar3 = *(long *)(param_1 + 0x18);
      }
      uVar4 = uVar9;
      if (uVar5 <= uVar9) {
        uVar4 = 0;
      }
      if (*(long *)(lVar3 + (ulong)uVar4 * 0x48) != 0) {
        FUN_004435c0();
        lVar3 = *(long *)(param_1 + 0x18);
        uVar5 = uVar9;
        if (*(uint *)(param_1 + 0x10) <= uVar9) {
          uVar5 = 0;
        }
        puVar10 = (undefined8 *)(lVar3 + (ulong)uVar5 * 0x48 + 0x10);
        pvVar8 = (void *)*puVar10;
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
          *puVar10 = 0;
          *(undefined4 *)(lVar3 + (ulong)uVar5 * 0x48 + 8) = 0;
        }
      }
      uVar9 = uVar9 + 1;
    } while (uVar1 != uVar9);
  }
  pvVar8 = *(void **)(param_1 + 0x18);
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
    *(undefined8 *)(param_1 + 0x18) = 0;
    *(undefined4 *)(param_1 + 0x10) = 0;
  }
  if (*(long *)(param_1 + 0x28) != 0) {
    FUN_004435c0();
    *(undefined8 *)(param_1 + 0x28) = 0;
  }
  if (*(long *)(param_1 + 0x30) != 0) {
    FUN_004435c0();
    *(undefined8 *)(param_1 + 0x30) = 0;
  }
  if (*(long *)(param_1 + 0x38) != 0) {
    FUN_004435c0();
    *(undefined8 *)(param_1 + 0x38) = 0;
  }
  if (*(long *)(param_1 + 0xe8) != 0) {
    FUN_004435c0();
    *(undefined8 *)(param_1 + 0xe8) = 0;
  }
  if (*(long *)(param_1 + 0xf0) != 0) {
    FUN_004435c0();
    *(undefined8 *)(param_1 + 0xf0) = 0;
  }
  if (*(long **)(param_1 + 0x50) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x50) + 8))();
    *(undefined8 *)(param_1 + 0x50) = 0;
  }
  pvVar8 = *(void **)(param_1 + 0x60);
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
    *(undefined8 *)(param_1 + 0x60) = 0;
    *(undefined4 *)(param_1 + 0x58) = 0;
  }
  return;
}

