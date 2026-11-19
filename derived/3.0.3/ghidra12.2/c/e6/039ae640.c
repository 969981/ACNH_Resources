
void FUN_039ae640(undefined8 *param_1)

{
  int iVar1;
  uint uVar2;
  undefined *puVar3;
  long *plVar4;
  long lVar5;
  void *pvVar6;
  void *pvVar7;
  int iVar8;
  uint uVar9;
  undefined4 *puVar10;
  undefined8 *puVar11;
  
  *param_1 = &PTR_FUN_04b6a460;
  puVar3 = PTR_DAT_04bb2698;
  if (0 < *(int *)(param_1 + 7)) {
    lVar5 = param_1[8];
    pvVar6 = *(void **)(lVar5 + 0x68);
    if (pvVar6 != (void *)0x0) {
      if (*(long *)PTR_DAT_04bb2698 == 0) {
        free(pvVar6);
        lVar5 = param_1[8];
      }
      else {
        plVar4 = (long *)FUN_038cb610(*(long *)PTR_DAT_04bb2698,pvVar6);
        if (plVar4 != (long *)0x0) {
          (**(code **)(*plVar4 + 0x38))(plVar4,pvVar6);
        }
        lVar5 = param_1[8];
      }
      if (lVar5 == 0) goto LAB_039ae708;
    }
    pvVar6 = (void *)(lVar5 + -8);
    if (*(long *)puVar3 == 0) {
      free(pvVar6);
    }
    else {
      plVar4 = (long *)FUN_038cb610(*(long *)puVar3,pvVar6);
      if (plVar4 != (long *)0x0) {
        (**(code **)(*plVar4 + 0x38))(plVar4,pvVar6);
      }
    }
    param_1[8] = 0;
    *(undefined4 *)(param_1 + 7) = 0;
  }
LAB_039ae708:
  if (0 < *(int *)(param_1 + 9)) {
    pvVar6 = (void *)param_1[10];
    pvVar7 = *(void **)((long)pvVar6 + 8);
    if (pvVar7 == (void *)0x0) {
LAB_039ae768:
      if (*(long *)puVar3 == 0) {
        free(pvVar6);
      }
      else {
        plVar4 = (long *)FUN_038cb610(*(long *)puVar3,pvVar6);
        if (plVar4 != (long *)0x0) {
          (**(code **)(*plVar4 + 0x38))(plVar4,pvVar6);
        }
      }
      param_1[10] = 0;
      *(undefined4 *)(param_1 + 9) = 0;
      pvVar6 = (void *)param_1[0xf];
    }
    else {
      if (*(long *)puVar3 == 0) {
        free(pvVar7);
        pvVar6 = (void *)param_1[10];
      }
      else {
        plVar4 = (long *)FUN_038cb610(*(long *)puVar3,pvVar7);
        if (plVar4 != (long *)0x0) {
          (**(code **)(*plVar4 + 0x38))(plVar4,pvVar7);
        }
        pvVar6 = (void *)param_1[10];
      }
      if (pvVar6 != (void *)0x0) goto LAB_039ae768;
      pvVar6 = (void *)param_1[0xf];
    }
    if (pvVar6 != (void *)0x0) {
      if (*(long *)puVar3 == 0) {
        free(pvVar6);
      }
      else {
        plVar4 = (long *)FUN_038cb610(*(long *)puVar3,pvVar6);
        if (plVar4 != (long *)0x0) {
          (**(code **)(*plVar4 + 0x38))(plVar4,pvVar6);
        }
      }
      param_1[0xf] = 0;
      *(undefined4 *)(param_1 + 0xe) = 0;
    }
  }
  if (0 < *(int *)(param_1 + 0xb)) {
    lVar5 = param_1[0xc];
    pvVar6 = *(void **)(lVar5 + 0x58);
    if (pvVar6 != (void *)0x0) {
      if (*(long *)puVar3 == 0) {
        free(pvVar6);
        lVar5 = param_1[0xc];
      }
      else {
        plVar4 = (long *)FUN_038cb610(*(long *)puVar3,pvVar6);
        if (plVar4 != (long *)0x0) {
          (**(code **)(*plVar4 + 0x38))(plVar4,pvVar6);
        }
        lVar5 = param_1[0xc];
      }
      if (lVar5 == 0) goto LAB_039ae874;
    }
    pvVar6 = (void *)(lVar5 + -8);
    if (*(long *)puVar3 == 0) {
      free(pvVar6);
    }
    else {
      plVar4 = (long *)FUN_038cb610(*(long *)puVar3,pvVar6);
      if (plVar4 != (long *)0x0) {
        (**(code **)(*plVar4 + 0x38))(plVar4,pvVar6);
      }
    }
    param_1[0xc] = 0;
    *(undefined4 *)(param_1 + 0xb) = 0;
  }
LAB_039ae874:
  pvVar6 = (void *)param_1[0x1a];
  if (pvVar6 != (void *)0x0) {
    if (*(long *)puVar3 == 0) {
      free(pvVar6);
    }
    else {
      plVar4 = (long *)FUN_038cb610(*(long *)puVar3,pvVar6);
      if (plVar4 != (long *)0x0) {
        (**(code **)(*plVar4 + 0x38))(plVar4,pvVar6);
      }
    }
    param_1[0x19] = 0;
    param_1[0x1a] = 0;
  }
  pvVar6 = (void *)param_1[2];
  iVar1 = *(int *)(param_1 + 1);
  if (iVar1 != 0) {
    iVar8 = 0;
    do {
      puVar10 = (undefined4 *)((long)pvVar6 + (long)iVar8 * 0x18);
      pvVar7 = *(void **)(puVar10 + 2);
      if (pvVar7 != (void *)0x0) {
        if (*(long *)puVar3 == 0) {
          free(pvVar7);
        }
        else {
          plVar4 = (long *)FUN_038cb610(*(long *)puVar3,pvVar7);
          if (plVar4 != (long *)0x0) {
            (**(code **)(*plVar4 + 0x38))(plVar4,pvVar7);
          }
        }
        *(undefined8 *)(puVar10 + 2) = 0;
        *puVar10 = 0;
      }
      iVar8 = iVar8 + 1;
    } while (iVar1 != iVar8);
    pvVar6 = (void *)param_1[2];
  }
  if (pvVar6 != (void *)0x0) {
    if (*(long *)puVar3 == 0) {
      free(pvVar6);
    }
    else {
      plVar4 = (long *)FUN_038cb610(*(long *)puVar3,pvVar6);
      if (plVar4 != (long *)0x0) {
        (**(code **)(*plVar4 + 0x38))(plVar4,pvVar6);
      }
    }
    param_1[2] = 0;
    *(undefined4 *)(param_1 + 1) = 0;
  }
  pvVar6 = (void *)param_1[0x11];
  iVar1 = *(int *)(param_1 + 0x10);
  if (iVar1 != 0) {
    iVar8 = 0;
    do {
      if ((*(byte *)((long)pvVar6 + (long)iVar8 * 0x28 + 0x20) & 1) == 0) {
        puVar11 = (undefined8 *)((long)pvVar6 + (long)iVar8 * 0x28 + 0x10);
        pvVar7 = (void *)*puVar11;
        if (pvVar7 != (void *)0x0) {
          if (*(long *)puVar3 == 0) {
            free(pvVar7);
          }
          else {
            plVar4 = (long *)FUN_038cb610(*(long *)puVar3,pvVar7);
            if (plVar4 != (long *)0x0) {
              (**(code **)(*plVar4 + 0x38))(plVar4,pvVar7);
            }
          }
          *puVar11 = 0;
          *(undefined4 *)((long)pvVar6 + (long)iVar8 * 0x28 + 8) = 0;
        }
      }
      iVar8 = iVar8 + 1;
    } while (iVar1 != iVar8);
    pvVar6 = (void *)param_1[0x11];
  }
  if (pvVar6 != (void *)0x0) {
    if (*(long *)puVar3 == 0) {
      free(pvVar6);
    }
    else {
      plVar4 = (long *)FUN_038cb610(*(long *)puVar3,pvVar6);
      if (plVar4 != (long *)0x0) {
        (**(code **)(*plVar4 + 0x38))(plVar4,pvVar6);
      }
    }
    param_1[0x11] = 0;
    *(undefined4 *)(param_1 + 0x10) = 0;
  }
  pvVar6 = (void *)param_1[0x13];
  iVar1 = *(int *)(param_1 + 0x12);
  if (iVar1 != 0) {
    iVar8 = 0;
    do {
      puVar11 = (undefined8 *)((long)pvVar6 + (long)iVar8 * 0x18 + 0x10);
      pvVar7 = (void *)*puVar11;
      if (pvVar7 != (void *)0x0) {
        if (*(long *)puVar3 == 0) {
          free(pvVar7);
        }
        else {
          plVar4 = (long *)FUN_038cb610(*(long *)puVar3,pvVar7);
          if (plVar4 != (long *)0x0) {
            (**(code **)(*plVar4 + 0x38))(plVar4,pvVar7);
          }
        }
        *puVar11 = 0;
        *(undefined4 *)((long)pvVar6 + (long)iVar8 * 0x18 + 8) = 0;
      }
      iVar8 = iVar8 + 1;
    } while (iVar1 != iVar8);
    pvVar6 = (void *)param_1[0x13];
  }
  if (pvVar6 != (void *)0x0) {
    if (*(long *)puVar3 == 0) {
      free(pvVar6);
    }
    else {
      plVar4 = (long *)FUN_038cb610(*(long *)puVar3,pvVar6);
      if (plVar4 != (long *)0x0) {
        (**(code **)(*plVar4 + 0x38))(plVar4,pvVar6);
      }
    }
    param_1[0x13] = 0;
    *(undefined4 *)(param_1 + 0x12) = 0;
  }
  pvVar6 = (void *)param_1[0x17];
  uVar2 = *(uint *)(param_1 + 0x16);
  if (uVar2 != 0) {
    uVar9 = 0;
    do {
      puVar11 = (undefined8 *)((long)pvVar6 + ((long)((ulong)uVar9 << 0x20) >> 0x1b) + 0x10);
      pvVar7 = (void *)*puVar11;
      if (pvVar7 != (void *)0x0) {
        if (*(long *)puVar3 == 0) {
          free(pvVar7);
        }
        else {
          plVar4 = (long *)FUN_038cb610(*(long *)puVar3,pvVar7);
          if (plVar4 != (long *)0x0) {
            (**(code **)(*plVar4 + 0x38))(plVar4,pvVar7);
          }
        }
        *puVar11 = 0;
        *(undefined4 *)((long)pvVar6 + (long)(int)uVar9 * 0x20 + 8) = 0;
      }
      uVar9 = uVar9 + 1;
    } while (uVar2 != uVar9);
    pvVar6 = (void *)param_1[0x17];
  }
  if (pvVar6 != (void *)0x0) {
    if (*(long *)puVar3 == 0) {
      free(pvVar6);
    }
    else {
      plVar4 = (long *)FUN_038cb610(*(long *)puVar3,pvVar6);
      if (plVar4 != (long *)0x0) {
        (**(code **)(*plVar4 + 0x38))(plVar4,pvVar6);
      }
    }
    param_1[0x17] = 0;
    *(undefined4 *)(param_1 + 0x16) = 0;
  }
  return;
}

