
void FUN_0166ad60(long param_1)

{
  int *piVar1;
  int iVar2;
  undefined *puVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  void *pvVar7;
  ulong uVar8;
  int iVar9;
  int *piVar10;
  
  puVar3 = PTR_DAT_04bb2698;
  if (*(int *)(param_1 + 0x408) != 0) {
    uVar8 = 0;
    do {
      lVar6 = param_1 + uVar8 * 0x1e0;
      if ((*(byte *)(lVar6 + 0x138) >> 1 & 1) != 0) {
        pvVar7 = *(void **)(lVar6 + 0x130);
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
          *(undefined8 *)(lVar6 + 0x130) = 0;
          *(undefined4 *)(lVar6 + 0x128) = 0;
        }
        *(undefined1 *)(lVar6 + 0x138) = 0;
      }
      piVar1 = (int *)(param_1 + uVar8 * 0x10);
      iVar2 = *piVar1;
      if (iVar2 != 0) {
        iVar9 = 0;
        do {
          plVar5 = *(long **)(*(long *)(piVar1 + 2) + (long)iVar9 * 8);
          if (plVar5 != (long *)0x0) {
            (**(code **)(*plVar5 + 0x18))();
          }
          iVar9 = iVar9 + 1;
        } while (iVar2 != iVar9);
      }
      piVar10 = piVar1 + 2;
      pvVar7 = *(void **)piVar10;
      if (pvVar7 != (void *)0x0) {
        lVar6 = *(long *)puVar3;
        if (lVar6 == 0) {
          free(pvVar7);
        }
        else {
          plVar5 = (long *)FUN_038cb610(lVar6,pvVar7);
          if (plVar5 != (long *)0x0) {
            (**(code **)(*plVar5 + 0x38))(plVar5,pvVar7);
          }
        }
        piVar10[0] = 0;
        piVar10[1] = 0;
        *piVar1 = 0;
      }
      uVar8 = uVar8 + 1;
    } while (uVar8 < *(uint *)(param_1 + 0x408));
  }
  *(undefined4 *)(param_1 + 0x40c) = 0;
  if (*(char *)(param_1 + 0x400) != '\0') {
    if (*(long **)(param_1 + 0x3f8) != (long *)0x0) {
      (**(code **)(**(long **)(param_1 + 0x3f8) + 8))();
      *(undefined8 *)(param_1 + 0x3f8) = 0;
    }
    if (*(long *)(param_1 + 1000) != 0) {
      if (*(long **)(param_1 + 0x3f0) != (long *)0x0) {
        (**(code **)(**(long **)(param_1 + 0x3f0) + 8))();
      }
      *(undefined4 *)(param_1 + 0x3e0) = 0;
      *(undefined8 *)(param_1 + 1000) = 0;
      *(undefined8 *)(param_1 + 0x3f0) = 0;
    }
  }
  *(undefined1 *)(param_1 + 0x400) = 0;
  return;
}

