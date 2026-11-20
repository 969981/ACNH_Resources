
void FUN_03f11920(long param_1)

{
  long lVar1;
  undefined *puVar2;
  long *plVar3;
  undefined8 *__dest;
  int iVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  void *pvVar8;
  int *piVar9;
  long lVar10;
  undefined **local_70;
  long *plStack_68;
  undefined1 *local_60;
  undefined8 uStack_58;
  
  if (*(long *)(param_1 + 0x80) != 0) {
    *(undefined4 *)(param_1 + 0x78) = 0;
    *(undefined8 *)(param_1 + 0x80) = 0;
  }
  puVar2 = PTR_DAT_04bb2698;
  lVar5 = *(long *)(param_1 + 0x88);
  if (lVar5 != 0) {
    plVar7 = (long *)(lVar5 + -8);
    if (*plVar7 != 0) {
      lVar10 = *plVar7 * 0x58;
      do {
        pvVar8 = *(void **)(lVar5 + -0x10 + lVar10);
        if (pvVar8 != (void *)0x0) {
          if (*(long *)puVar2 == 0) {
            free(pvVar8);
          }
          else {
            plVar3 = (long *)FUN_038cb610(*(long *)puVar2,pvVar8);
            if (plVar3 != (long *)0x0) {
              (**(code **)(*plVar3 + 0x38))(plVar3,pvVar8);
            }
          }
          *(undefined8 *)(lVar5 + -0x10 + lVar10) = 0;
        }
        lVar10 = lVar10 + -0x58;
      } while (lVar10 != 0);
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
    *(undefined8 *)(param_1 + 0x88) = 0;
  }
  pvVar8 = *(void **)(param_1 + 0x148);
  if (pvVar8 != (void *)0x0) {
    plStack_68 = (long *)(param_1 + 0x138);
    local_60 = &LAB_03f1683c;
    uStack_58 = 0;
    local_70 = &PTR_LAB_04ba7ed8;
    if (*plStack_68 == 0) {
      *(undefined4 *)(param_1 + 0x150) = 0;
      *(undefined8 *)(param_1 + 0x138) = 0;
      lVar5 = *(long *)puVar2;
      if (lVar5 != 0) goto LAB_03f11a48;
LAB_03f11a7c:
      free(pvVar8);
    }
    else {
      FUN_03f16850(*plStack_68,&local_70);
      pvVar8 = *(void **)(param_1 + 0x148);
      *(undefined4 *)(param_1 + 0x150) = 0;
      *(undefined8 *)(param_1 + 0x138) = 0;
      if (pvVar8 != (void *)0x0) {
        lVar5 = *(long *)puVar2;
        if (lVar5 == 0) goto LAB_03f11a7c;
LAB_03f11a48:
        plVar7 = (long *)FUN_038cb610(lVar5,pvVar8);
        if (plVar7 != (long *)0x0) {
          (**(code **)(*plVar7 + 0x38))(plVar7,pvVar8);
        }
      }
    }
    *(undefined4 *)(param_1 + 0x154) = 0;
    *(undefined8 *)(param_1 + 0x140) = 0;
    *(undefined8 *)(param_1 + 0x148) = 0;
  }
  piVar9 = (int *)(param_1 + 0x38);
  iVar4 = *piVar9;
  while (iVar4 != 0) {
    if (0 < iVar4) {
      __dest = *(undefined8 **)(param_1 + 0x40);
      plVar7 = (long *)*__dest;
      memmove(__dest,__dest + 1,(long)(iVar4 * 8 + -8));
      iVar4 = *(int *)(param_1 + 0x38) + -1;
      *(int *)(param_1 + 0x38) = iVar4;
      if (plVar7 != (long *)0x0) {
        (**(code **)(*plVar7 + 8))(plVar7);
        iVar4 = *piVar9;
      }
    }
  }
  pvVar8 = *(void **)(param_1 + 0x40);
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
    piVar9[0] = 0;
    piVar9[1] = 0;
    *(undefined8 *)(param_1 + 0x40) = 0;
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
    *(undefined8 *)(param_1 + 0x58) = 0;
    *(undefined8 *)(param_1 + 0x60) = 0;
  }
  pvVar8 = *(void **)(param_1 + 0x50);
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
    *(undefined8 *)(param_1 + 0x48) = 0;
    *(undefined8 *)(param_1 + 0x50) = 0;
  }
  pvVar8 = *(void **)(param_1 + 0xe8);
  *(undefined4 *)(param_1 + 0xe4) = 0;
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
    *(undefined8 *)(param_1 + 0xe8) = 0;
  }
  pvVar8 = *(void **)(param_1 + 0xf0);
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
    *(undefined8 *)(param_1 + 0xf0) = 0;
  }
  pvVar8 = *(void **)(param_1 + 0xf8);
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
    *(undefined8 *)(param_1 + 0xf8) = 0;
  }
  pvVar8 = *(void **)(param_1 + 0x100);
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
    *(undefined8 *)(param_1 + 0x100) = 0;
  }
  if (*(long *)(param_1 + 0x110) != 0) {
    pvVar8 = (void *)(*(long *)(param_1 + 0x110) + -8);
    if (*(long *)puVar2 == 0) {
      free(pvVar8);
    }
    else {
      plVar7 = (long *)FUN_038cb610(*(long *)puVar2,pvVar8);
      if (plVar7 != (long *)0x0) {
        (**(code **)(*plVar7 + 0x38))(plVar7,pvVar8);
      }
    }
    *(undefined8 *)(param_1 + 0x110) = 0;
    *(undefined4 *)(param_1 + 0x108) = 0;
  }
  pvVar8 = *(void **)(param_1 + 0x118);
  if (pvVar8 != (void *)0x0) {
    iVar4 = *(int *)(param_1 + 0x124);
    if (iVar4 < 1) {
      *(undefined4 *)(param_1 + 0x120) = 0;
      lVar5 = *(long *)puVar2;
      if (lVar5 != 0) goto LAB_03f11d40;
LAB_03f11d6c:
      free(pvVar8);
    }
    else {
      lVar10 = 0;
      lVar5 = 0;
      do {
        if (*(int *)(*(long *)(param_1 + 0x118) + lVar10) != 0) {
          *(undefined4 *)(*(long *)(param_1 + 0x118) + lVar10) = 0;
          iVar4 = *(int *)(param_1 + 0x124);
        }
        lVar5 = lVar5 + 1;
        lVar10 = lVar10 + 8;
      } while (lVar5 < iVar4);
      pvVar8 = *(void **)(param_1 + 0x118);
      *(undefined4 *)(param_1 + 0x120) = 0;
      if (pvVar8 != (void *)0x0) {
        lVar5 = *(long *)puVar2;
        if (lVar5 == 0) goto LAB_03f11d6c;
LAB_03f11d40:
        plVar7 = (long *)FUN_038cb610(lVar5,pvVar8);
        if (plVar7 != (long *)0x0) {
          (**(code **)(*plVar7 + 0x38))(plVar7,pvVar8);
        }
      }
    }
    *(undefined8 *)(param_1 + 0x118) = 0;
    *(undefined8 *)(param_1 + 0x120) = 0;
  }
  lVar5 = *(long *)(param_1 + 0x130);
  if (lVar5 != 0) {
    plVar7 = (long *)(lVar5 + -8);
    if (*plVar7 != 0) {
      lVar10 = *plVar7 * 0x30;
      do {
        lVar1 = lVar5 + lVar10;
        pvVar8 = *(void **)(lVar1 + -0x18);
        if (pvVar8 != (void *)0x0) {
          *(undefined8 *)(lVar1 + -0xc) = 0;
          if (*(long *)puVar2 == 0) {
            free(pvVar8);
          }
          else {
            plVar3 = (long *)FUN_038cb610(*(long *)puVar2,pvVar8);
            if (plVar3 != (long *)0x0) {
              (**(code **)(*plVar3 + 0x38))(plVar3,pvVar8);
            }
          }
          *(undefined4 *)(lVar1 + -8) = 0;
          *(undefined8 *)(lVar1 + -0x18) = 0;
          *(undefined8 *)(lVar1 + -0x10) = 0;
        }
        lVar10 = lVar10 + -0x30;
      } while (lVar10 != 0);
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
    *(undefined8 *)(param_1 + 0x130) = 0;
    *(undefined4 *)(param_1 + 0x128) = 0;
  }
  pvVar8 = *(void **)(param_1 + 0x178);
  if (pvVar8 == (void *)0x0) {
    return;
  }
  plVar7 = *(long **)(param_1 + 0x160);
  if (*(long **)(param_1 + 0x160) != (long *)(param_1 + 0x158)) {
    do {
      plVar3 = (long *)plVar7[1];
      plVar6 = plVar3;
      if (*plVar7 != 0) {
        *(long **)(*plVar7 + 8) = plVar3;
        plVar6 = (long *)plVar7[1];
      }
      if (plVar6 != (long *)0x0) {
        *plVar6 = *plVar7;
      }
      *plVar7 = 0;
      plVar7[1] = 0;
      plVar7 = plVar7 + -0x32;
      *(int *)(param_1 + 0x168) = *(int *)(param_1 + 0x168) + -1;
      (**(code **)*plVar7)(plVar7);
      *plVar7 = *(long *)(param_1 + 0x170);
      *(long **)(param_1 + 0x170) = plVar7;
      plVar7 = plVar3;
    } while (plVar3 != (long *)(param_1 + 0x158));
    pvVar8 = *(void **)(param_1 + 0x178);
    if (pvVar8 == (void *)0x0) goto LAB_03f11ee8;
  }
  if (*(long *)puVar2 == 0) {
    free(pvVar8);
  }
  else {
    plVar7 = (long *)FUN_038cb610(*(long *)puVar2,pvVar8);
    if (plVar7 != (long *)0x0) {
      (**(code **)(*plVar7 + 0x38))(plVar7,pvVar8);
    }
  }
LAB_03f11ee8:
  *(undefined4 *)(param_1 + 0x180) = 0;
  *(undefined8 *)(param_1 + 0x170) = 0;
  *(undefined8 *)(param_1 + 0x178) = 0;
  return;
}

