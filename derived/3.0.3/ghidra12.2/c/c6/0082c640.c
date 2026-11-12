
void FUN_0082c640(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long *plVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  void *pvVar7;
  
  puVar1 = PTR_DAT_04bb2698;
  if (*(long *)(param_1 + 8) != 0) {
    if (*(long *)(param_1 + 0x20) != 0) {
      FUN_03f44fe0();
      pvVar7 = *(void **)(param_1 + 0x20);
      if (pvVar7 != (void *)0x0) {
        FUN_03f44fe0(pvVar7);
        FUN_038e1c80((long)pvVar7 + 200);
        FUN_038e1c80((long)pvVar7 + 0x98);
        FUN_038e1a84((long)pvVar7 + 0x58);
        FUN_038e1a84((long)pvVar7 + 0x18);
        lVar2 = *(long *)puVar1;
        if (lVar2 == 0) {
          free(pvVar7);
        }
        else {
          plVar3 = (long *)FUN_038cb610(lVar2,pvVar7);
          if (plVar3 != (long *)0x0) {
            (**(code **)(*plVar3 + 0x38))(plVar3,pvVar7);
          }
        }
      }
      *(undefined8 *)(param_1 + 0x20) = 0;
    }
    uVar4 = *(uint *)(param_1 + 0x10);
    if (0 < (int)uVar4) {
      uVar6 = 0;
      do {
        uVar5 = uVar6;
        if (uVar4 <= uVar6) {
          uVar5 = 0;
        }
        FUN_03f43a70(*(undefined8 *)(*(long *)(param_1 + 0x18) + (ulong)uVar5 * 8));
        uVar4 = uVar6;
        if (*(uint *)(param_1 + 0x10) <= uVar6) {
          uVar4 = 0;
        }
        plVar3 = *(long **)(*(long *)(param_1 + 0x18) + (ulong)uVar4 * 8);
        (**(code **)(*plVar3 + 0x50))(plVar3,0);
        uVar5 = *(uint *)(param_1 + 0x10);
        lVar2 = *(long *)(param_1 + 0x18);
        uVar4 = uVar6;
        if (uVar5 <= uVar6) {
          uVar4 = 0;
        }
        plVar3 = *(long **)(lVar2 + (ulong)uVar4 * 8);
        if (plVar3 != (long *)0x0) {
          (**(code **)(*plVar3 + 8))();
          uVar5 = *(uint *)(param_1 + 0x10);
          lVar2 = *(long *)(param_1 + 0x18);
        }
        uVar4 = uVar6;
        if (uVar5 <= uVar6) {
          uVar4 = 0;
        }
        uVar6 = uVar6 + 1;
        *(undefined8 *)(lVar2 + (ulong)uVar4 * 8) = 0;
        uVar4 = *(uint *)(param_1 + 0x10);
      } while ((int)uVar6 < (int)uVar4);
    }
    pvVar7 = *(void **)(param_1 + 0x18);
    if (pvVar7 != (void *)0x0) {
      lVar2 = *(long *)puVar1;
      if (lVar2 == 0) {
        free(pvVar7);
      }
      else {
        plVar3 = (long *)FUN_038cb610(lVar2,pvVar7);
        if (plVar3 != (long *)0x0) {
          (**(code **)(*plVar3 + 0x38))(plVar3,pvVar7);
        }
      }
      *(undefined8 *)(param_1 + 0x18) = 0;
      *(undefined4 *)(param_1 + 0x10) = 0;
    }
    if (*(long **)(param_1 + 8) != (long *)0x0) {
      (**(code **)(**(long **)(param_1 + 8) + 0x18))();
    }
    *(undefined8 *)(param_1 + 8) = 0;
  }
  return;
}

