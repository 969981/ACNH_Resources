
void FUN_026fdf90(long param_1)

{
  undefined *puVar1;
  long *plVar2;
  uint uVar3;
  int iVar4;
  ulong uVar5;
  size_t sVar6;
  void *pvVar7;
  long lVar8;
  void *__ptr;
  
  lVar8 = *(long *)(param_1 + 0x10);
  if (lVar8 == 0) {
    return;
  }
  if (*(long **)(lVar8 + 0x130) != (long *)0x0) {
    lVar8 = (**(code **)(**(long **)(lVar8 + 0x130) + 0x48))();
    uVar3 = *(uint *)(param_1 + 0x128);
    if (0 < (int)uVar3) {
      plVar2 = *(long **)(param_1 + 0x130);
      sVar6 = (long)(int)uVar3 * 8;
      uVar5 = 0;
      do {
        sVar6 = sVar6 - 8;
        if (*plVar2 == lVar8) {
          iVar4 = (int)uVar5;
          if ((-1 < iVar4) && (iVar4 < (int)uVar3)) {
            if (iVar4 + 1 < (int)uVar3) {
              memmove(plVar2,plVar2 + 1,sVar6);
              uVar3 = *(uint *)(param_1 + 0x128);
            }
            *(uint *)(param_1 + 0x128) = uVar3 - 1;
          }
          break;
        }
        uVar5 = uVar5 + 1;
        plVar2 = plVar2 + 1;
      } while (uVar3 != uVar5);
    }
    lVar8 = *(long *)(param_1 + 0x10);
    if (*(long **)(lVar8 + 0x130) != (long *)0x0) {
      (**(code **)(**(long **)(lVar8 + 0x130) + 8))();
      lVar8 = *(long *)(param_1 + 0x10);
    }
    *(undefined8 *)(lVar8 + 0x130) = 0;
    lVar8 = *(long *)(param_1 + 0x10);
    if (lVar8 == 0) {
      return;
    }
  }
  pvVar7 = *(void **)(lVar8 + 0x138);
  if (pvVar7 == (void *)0x0) goto LAB_026fe1b8;
  uVar3 = *(uint *)(param_1 + 0x128);
  if ((int)uVar3 < 1) {
LAB_026fe0ec:
    *(undefined8 *)((long)pvVar7 + 8) = 0;
    *(undefined8 *)((long)pvVar7 + 0x10) = 0;
    if (*(long **)((long)pvVar7 + 0x18) != (long *)0x0) {
      (**(code **)(**(long **)((long)pvVar7 + 0x18) + 8))();
      *(undefined8 *)((long)pvVar7 + 0x18) = 0;
    }
    puVar1 = PTR_DAT_04bb2698;
    __ptr = *(void **)((long)pvVar7 + 0x20);
    if (__ptr != (void *)0x0) {
      if (*(long *)PTR_DAT_04bb2698 == 0) {
        free(__ptr);
      }
      else {
        plVar2 = (long *)FUN_038cb610(*(long *)PTR_DAT_04bb2698,__ptr);
        if (plVar2 != (long *)0x0) {
          (**(code **)(*plVar2 + 0x38))(plVar2,__ptr);
        }
      }
      *(undefined8 *)((long)pvVar7 + 0x20) = 0;
    }
    if (*(long **)((long)pvVar7 + 0x28) != (long *)0x0) {
      (**(code **)(**(long **)((long)pvVar7 + 0x28) + 0x18))();
      *(undefined8 *)((long)pvVar7 + 0x28) = 0;
    }
    if (*(long **)((long)pvVar7 + 0x30) != (long *)0x0) {
      (**(code **)(**(long **)((long)pvVar7 + 0x30) + 0x18))();
    }
    if (*(long *)puVar1 == 0) {
      free(pvVar7);
    }
    else {
      plVar2 = (long *)FUN_038cb610(*(long *)puVar1,pvVar7);
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 0x38))(plVar2,pvVar7);
      }
    }
    lVar8 = *(long *)(param_1 + 0x10);
  }
  else {
    uVar5 = 0;
    plVar2 = *(long **)(param_1 + 0x130);
    sVar6 = (long)(int)uVar3 * 8;
    do {
      sVar6 = sVar6 - 8;
      if (*plVar2 == *(long *)((long)pvVar7 + 0x30)) {
        iVar4 = (int)uVar5;
        if ((-1 < iVar4) && (iVar4 < (int)uVar3)) {
          if (iVar4 + 1 < (int)uVar3) {
            memmove(plVar2,plVar2 + 1,sVar6);
            uVar3 = *(uint *)(param_1 + 0x128);
            lVar8 = *(long *)(param_1 + 0x10);
          }
          *(uint *)(param_1 + 0x128) = uVar3 - 1;
          pvVar7 = *(void **)(lVar8 + 0x138);
        }
        break;
      }
      uVar5 = uVar5 + 1;
      plVar2 = plVar2 + 1;
    } while (uVar3 != uVar5);
    if (pvVar7 != (void *)0x0) goto LAB_026fe0ec;
  }
  *(undefined8 *)(lVar8 + 0x138) = 0;
  lVar8 = *(long *)(param_1 + 0x10);
  if (lVar8 == 0) {
    return;
  }
LAB_026fe1b8:
  pvVar7 = *(void **)(lVar8 + 0x140);
  if (pvVar7 != (void *)0x0) {
    FUN_0272d3bc(pvVar7);
    if (DAT_05ae7600 == 0) {
      free(pvVar7);
    }
    else {
      plVar2 = (long *)FUN_038cb610(DAT_05ae7600,pvVar7);
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 0x38))(plVar2,pvVar7);
      }
    }
    *(undefined8 *)(lVar8 + 0x140) = 0;
  }
  pvVar7 = *(void **)(lVar8 + 0x148);
  if (pvVar7 != (void *)0x0) {
    FUN_0272d3bc(pvVar7);
    if (DAT_05ae7600 == 0) {
      free(pvVar7);
    }
    else {
      plVar2 = (long *)FUN_038cb610(DAT_05ae7600,pvVar7);
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 0x38))(plVar2,pvVar7);
      }
    }
    *(undefined8 *)(lVar8 + 0x148) = 0;
  }
  pvVar7 = *(void **)(lVar8 + 0x150);
  if (pvVar7 != (void *)0x0) {
    FUN_0272d3bc(pvVar7);
    if (DAT_05ae7600 == 0) {
      free(pvVar7);
    }
    else {
      plVar2 = (long *)FUN_038cb610(DAT_05ae7600,pvVar7);
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 0x38))(plVar2,pvVar7);
      }
    }
    *(undefined8 *)(lVar8 + 0x150) = 0;
  }
  pvVar7 = *(void **)(lVar8 + 0x158);
  if (pvVar7 != (void *)0x0) {
    FUN_0272d3bc(pvVar7);
    if (DAT_05ae7600 == 0) {
      free(pvVar7);
    }
    else {
      plVar2 = (long *)FUN_038cb610(DAT_05ae7600,pvVar7);
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 0x38))(plVar2,pvVar7);
      }
    }
    *(undefined8 *)(lVar8 + 0x158) = 0;
  }
  pvVar7 = *(void **)(lVar8 + 0x160);
  if (pvVar7 != (void *)0x0) {
    FUN_0272d3bc(pvVar7);
    if (DAT_05ae7600 == 0) {
      free(pvVar7);
    }
    else {
      plVar2 = (long *)FUN_038cb610(DAT_05ae7600,pvVar7);
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 0x38))(plVar2,pvVar7);
      }
    }
    *(undefined8 *)(lVar8 + 0x160) = 0;
  }
  pvVar7 = *(void **)(lVar8 + 0x168);
  if (pvVar7 != (void *)0x0) {
    FUN_0272d3bc(pvVar7);
    if (DAT_05ae7600 == 0) {
      free(pvVar7);
    }
    else {
      plVar2 = (long *)FUN_038cb610(DAT_05ae7600,pvVar7);
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 0x38))(plVar2,pvVar7);
      }
    }
    *(undefined8 *)(lVar8 + 0x168) = 0;
  }
  pvVar7 = *(void **)(lVar8 + 0x170);
  if (pvVar7 != (void *)0x0) {
    FUN_0272d3bc(pvVar7);
    if (DAT_05ae7600 == 0) {
      free(pvVar7);
    }
    else {
      plVar2 = (long *)FUN_038cb610(DAT_05ae7600,pvVar7);
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 0x38))(plVar2,pvVar7);
      }
    }
    *(undefined8 *)(lVar8 + 0x170) = 0;
  }
  pvVar7 = *(void **)(lVar8 + 0x178);
  if (pvVar7 != (void *)0x0) {
    FUN_0272d3bc(pvVar7);
    if (DAT_05ae7600 == 0) {
      free(pvVar7);
    }
    else {
      plVar2 = (long *)FUN_038cb610(DAT_05ae7600,pvVar7);
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 0x38))(plVar2,pvVar7);
      }
    }
    *(undefined8 *)(lVar8 + 0x178) = 0;
  }
  return;
}

