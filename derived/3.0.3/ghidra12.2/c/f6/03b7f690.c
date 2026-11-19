
void FUN_03b7f690(long param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  bool bVar4;
  long lVar5;
  long *plVar6;
  int iVar7;
  long lVar8;
  void *__ptr;
  void *__ptr_00;
  long lVar9;
  long lVar10;
  
  puVar3 = PTR_DAT_04bc3ee8;
  puVar2 = PTR_DAT_04bb2698;
  if (*(long *)(param_1 + 0x58) != param_1 + 0x50) {
    lVar8 = (long)*(int *)(param_1 + 100);
    lVar10 = *(long *)(param_1 + 0x58) - lVar8;
    lVar9 = lVar10 + lVar8;
    do {
      iVar7 = *(int *)(lVar10 + 0x6c);
      lVar9 = *(long *)(lVar9 + 8);
      if (0 < iVar7) {
        *(int *)(lVar10 + 0x6c) = iVar7 + -1;
        iVar7 = iVar7 + -1;
      }
      if (iVar7 == 0) {
        plVar6 = (long *)(lVar10 + *(int *)(param_1 + 100));
        if (*plVar6 != 0) {
          *(long *)(*plVar6 + 8) = plVar6[1];
        }
        if ((long *)plVar6[1] != (long *)0x0) {
          *(long *)plVar6[1] = *plVar6;
        }
        *plVar6 = 0;
        plVar6[1] = 0;
        *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + -1;
        __ptr = *(void **)(lVar10 + 0x58);
        if (__ptr == (void *)0x0) {
LAB_03b7f788:
          __ptr_00 = *(void **)(lVar10 + 0x60);
        }
        else {
          lVar5 = *(long *)puVar2;
          if (lVar5 != 0) {
            plVar6 = (long *)FUN_038cb610(lVar5,__ptr);
            if (plVar6 != (long *)0x0) {
              (**(code **)(*plVar6 + 0x38))(plVar6,__ptr);
            }
            goto LAB_03b7f788;
          }
          free(__ptr);
          __ptr_00 = *(void **)(lVar10 + 0x60);
        }
        if (__ptr_00 != (void *)0x0) {
          lVar5 = *(long *)puVar2;
          if (lVar5 == 0) {
            free(__ptr_00);
          }
          else {
            plVar6 = (long *)FUN_038cb610(lVar5,__ptr_00);
            if (plVar6 != (long *)0x0) {
              (**(code **)(*plVar6 + 0x38))(plVar6,__ptr_00);
            }
          }
        }
        *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) - *(int *)(lVar10 + 0x68);
        if (__ptr != (void *)0x0) {
          FUN_03bcafb0(*(undefined8 *)(*(long *)puVar3 + 0x78),lVar10 + 0x70);
        }
        plVar6 = (long *)(lVar10 + *(int *)(param_1 + 0x34));
        lVar10 = *(long *)(param_1 + 0x20);
        *(long **)(param_1 + 0x20) = plVar6;
        *plVar6 = lVar10;
        plVar6[1] = param_1 + 0x20;
        if (lVar10 != 0) {
          *(long **)(lVar10 + 8) = plVar6;
        }
        *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + 1;
      }
      lVar10 = lVar9 - lVar8;
    } while (lVar10 != (param_1 + 0x50) - lVar8);
  }
  lVar9 = *(long *)(param_1 + 0x120);
  if ((((lVar9 == 0) || (iVar7 = *(int *)(param_1 + 0x128), iVar7 != *(int *)(lVar9 + 0x10))) ||
      (*(int *)(lVar9 + 0xc) == 0)) || (*(int *)(lVar9 + 0xc) == 7)) {
    if (*(char *)(param_1 + 0x130) != '\0') {
      *(undefined1 *)(param_1 + 0x130) = 0;
    }
  }
  else {
    iVar1 = *(int *)(param_1 + 0x198);
    *(int *)(param_1 + 0x198) = iVar1 + -1;
    if (iVar1 < 1) {
      bVar4 = iVar7 != *(int *)(lVar9 + 0x10);
      if (bVar4) {
        lVar9 = 0;
      }
      if ((*(long *)(*(long *)(*(long *)(lVar9 + 0x120) + 8) + 0x38) != 0 || DAT_05aebc00 != '\0')
         && (!bVar4)) {
        FUN_03b46270();
      }
      *(undefined4 *)(param_1 + 0x198) = 0x14;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x03b7f874. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x90) + 0x30))();
  return;
}

