
void FUN_0136b0a0(undefined1 *param_1)

{
  int iVar1;
  int iVar2;
  undefined *puVar3;
  long lVar4;
  void *pvVar5;
  long *plVar6;
  long lVar7;
  int iVar8;
  undefined8 *puVar9;
  
  *param_1 = 0;
  puVar3 = PTR_DAT_04bb2698;
  lVar7 = *(long *)(param_1 + 200);
  iVar1 = *(int *)(param_1 + 0xc0);
  if (iVar1 != 0) {
    iVar8 = 0;
    do {
      puVar9 = (undefined8 *)(lVar7 + (long)iVar8 * 0x70 + 0x58);
      pvVar5 = (void *)*puVar9;
      if (pvVar5 != (void *)0x0) {
        FUN_03f45838(pvVar5);
        plVar6 = *(long **)((long)pvVar5 + 0x18);
        if (plVar6 != (long *)0x0) {
          (**(code **)(*plVar6 + 0x20))(plVar6);
          iVar2 = *(int *)((long)pvVar5 + 0xc) + -1;
          if (((*(int *)((long)pvVar5 + 0xc) < 1) ||
              (*(int *)((long)pvVar5 + 0xc) = iVar2, iVar2 == 0)) &&
             (*(long *)((long)pvVar5 + 0x10) != 0)) {
            FUN_03f44508();
            *(undefined8 *)((long)pvVar5 + 0x10) = 0;
          }
          (**(code **)(*plVar6 + 0x28))(plVar6);
        }
        lVar4 = *(long *)puVar3;
        if (lVar4 == 0) {
          free(pvVar5);
        }
        else {
          plVar6 = (long *)FUN_038cb610(lVar4,pvVar5);
          if (plVar6 != (long *)0x0) {
            (**(code **)(*plVar6 + 0x38))(plVar6,pvVar5);
          }
        }
        *puVar9 = 0;
      }
      iVar8 = iVar8 + 1;
    } while (iVar1 != iVar8);
    lVar7 = *(long *)(param_1 + 200);
  }
  if (lVar7 != 0) {
    lVar4 = *(long *)puVar3;
    pvVar5 = (void *)(lVar7 + -8);
    if (lVar4 == 0) {
      free(pvVar5);
    }
    else {
      plVar6 = (long *)FUN_038cb610(lVar4,pvVar5);
      if (plVar6 != (long *)0x0) {
        (**(code **)(*plVar6 + 0x38))(plVar6,pvVar5);
      }
    }
    *(undefined8 *)(param_1 + 200) = 0;
    *(undefined4 *)(param_1 + 0xc0) = 0;
  }
  return;
}

