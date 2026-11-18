
void FUN_0334fea8(long param_1)

{
  char *pcVar1;
  char cVar2;
  long *plVar3;
  long lVar4;
  char *pcVar5;
  uint uVar6;
  void *pvVar7;
  long *plVar8;
  
  pvVar7 = *(void **)(param_1 + 0x1350);
  *(undefined8 *)(param_1 + 0x1350) = 0;
  if (pvVar7 != (void *)0x0) {
    FUN_032c1b04(pvVar7);
    if (DAT_05ae7600 == 0) {
      free(pvVar7);
    }
    else {
      plVar3 = (long *)FUN_038cb610(DAT_05ae7600,pvVar7);
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 0x38))(plVar3,pvVar7);
      }
    }
  }
  FUN_032c6840(param_1 + 0x370);
  pcVar5 = *(char **)(param_1 + 5000);
  if (*pcVar5 != '\0') {
    FUN_032c6840(*(undefined8 *)(param_1 + 0x3d0));
    pcVar5 = *(char **)(param_1 + 5000);
  }
  uVar6 = *(uint *)(param_1 + 0x1380);
  pcVar1 = pcVar5;
  if (1 < uVar6) {
    pcVar1 = pcVar5 + 1;
  }
  if (*pcVar1 != '\0') {
    FUN_032c6840(*(long *)(param_1 + 0x3d0) + (ulong)(1 < *(uint *)(param_1 + 0x3c8)) * 0x58);
    uVar6 = *(uint *)(param_1 + 0x1380);
    pcVar5 = *(char **)(param_1 + 5000);
  }
  if (pcVar5[(ulong)(2 < uVar6) * 2] != '\0') {
    lVar4 = 0xb0;
    if (*(uint *)(param_1 + 0x3c8) < 3) {
      lVar4 = 0;
    }
    FUN_032c6840(*(long *)(param_1 + 0x3d0) + lVar4);
    uVar6 = *(uint *)(param_1 + 0x1380);
    pcVar5 = *(char **)(param_1 + 5000);
  }
  lVar4 = 3;
  if (uVar6 < 4) {
    lVar4 = 0;
  }
  if (pcVar5[lVar4] != '\0') {
    lVar4 = 0x108;
    if (*(uint *)(param_1 + 0x3c8) < 4) {
      lVar4 = 0;
    }
    FUN_032c6840(*(long *)(param_1 + 0x3d0) + lVar4);
  }
  if ((*(uint *)(param_1 + 0x1390) < 0x2a) &&
     ((1L << ((ulong)*(uint *)(param_1 + 0x1390) & 0x3f) & 0x20c00000000U) != 0)) {
    FUN_032c6840(param_1 + 0x3d8);
  }
  if (*(char *)(param_1 + 0x2699) != '\0') {
    lVar4 = FUN_0037e530(*(undefined8 *)(param_1 + 0x25d8));
    if (*(long *)(param_1 + 0x2770) != 0) {
      *(long *)(*(long *)(lVar4 + 0x18) + 8) = *(long *)(param_1 + 0x2770);
    }
    *(char *)(param_1 + 0x2699) = '\0';
  }
  pvVar7 = *(void **)(param_1 + 0x25d0);
  if (pvVar7 == (void *)0x0) {
LAB_03350098:
    cVar2 = *(char *)(param_1 + 0x2769);
  }
  else {
    if (*(int *)((long)pvVar7 + 0x1a0) != 0) {
      **(undefined1 **)((long)pvVar7 + 0x60) = 0;
      *(undefined1 *)((long)pvVar7 + 0xf0) = 0;
      if (((*(int *)((long)pvVar7 + 0x100) != 1) && ((*(byte *)((long)pvVar7 + 0x18) >> 1 & 1) != 0)
          ) && (*(int *)((long)pvVar7 + 0x140) == -1)) {
        *(undefined4 *)((long)pvVar7 + 0x140) = 1;
      }
      *(undefined4 *)((long)pvVar7 + 0x1a0) = 0;
      pvVar7 = *(void **)(param_1 + 0x25d0);
      if (pvVar7 == (void *)0x0) goto LAB_03350098;
    }
    FUN_03463874(pvVar7);
    if (DAT_05ae7600 != 0) {
      plVar3 = (long *)FUN_038cb610(DAT_05ae7600,pvVar7);
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 0x38))(plVar3,pvVar7);
      }
      goto LAB_03350098;
    }
    free(pvVar7);
    cVar2 = *(char *)(param_1 + 0x2769);
  }
  if (cVar2 != '\0') {
    lVar4 = FUN_0037e530(*(undefined8 *)(param_1 + 0x26a8));
    if (*(long *)(param_1 + 0x2770) != 0) {
      *(long *)(*(long *)(lVar4 + 0x18) + 8) = *(long *)(param_1 + 0x2770);
    }
    *(undefined1 *)(param_1 + 0x2769) = 0;
  }
  pvVar7 = *(void **)(param_1 + 0x26a0);
  if (pvVar7 != (void *)0x0) {
    if (*(int *)((long)pvVar7 + 0x1a0) != 0) {
      **(undefined1 **)((long)pvVar7 + 0x60) = 0;
      *(undefined1 *)((long)pvVar7 + 0xf0) = 0;
      if (((*(int *)((long)pvVar7 + 0x100) != 1) && ((*(byte *)((long)pvVar7 + 0x18) >> 1 & 1) != 0)
          ) && (*(int *)((long)pvVar7 + 0x140) == -1)) {
        *(undefined4 *)((long)pvVar7 + 0x140) = 1;
      }
      *(undefined4 *)((long)pvVar7 + 0x1a0) = 0;
      pvVar7 = *(void **)(param_1 + 0x26a0);
      if (pvVar7 == (void *)0x0) goto LAB_03350138;
    }
    FUN_03463874(pvVar7);
    if (DAT_05ae7600 == 0) {
      free(pvVar7);
      lVar4 = *(long *)(param_1 + 0x300);
      goto joined_r0x0335013c;
    }
    plVar3 = (long *)FUN_038cb610(DAT_05ae7600,pvVar7);
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 0x38))(plVar3,pvVar7);
    }
  }
LAB_03350138:
  lVar4 = *(long *)(param_1 + 0x300);
joined_r0x0335013c:
  if ((lVar4 != 0) && (*(long *)(param_1 + 0x368) != 0)) {
    FUN_032d15b0(lVar4,*(undefined8 *)(*(long *)(param_1 + 0x368) + 0x10));
    FUN_03359de4(*(undefined8 *)(param_1 + 0x368));
    pvVar7 = *(void **)(param_1 + 0x368);
    *(undefined8 *)(param_1 + 0x368) = 0;
    if (pvVar7 != (void *)0x0) {
      FUN_03359a7c(pvVar7);
      if (DAT_05ae7600 == 0) {
        free(pvVar7);
      }
      else {
        plVar3 = (long *)FUN_038cb610(DAT_05ae7600,pvVar7);
        if (plVar3 != (long *)0x0) {
          (**(code **)(*plVar3 + 0x38))(plVar3,pvVar7);
        }
      }
    }
  }
  if (*(long *)(param_1 + 0x300) != 0) {
    FUN_032d1384();
    pvVar7 = *(void **)(param_1 + 0x300);
    *(undefined8 *)(param_1 + 0x300) = 0;
    if (pvVar7 != (void *)0x0) {
      FUN_032d0688(pvVar7);
      if (DAT_05ae7600 == 0) {
        free(pvVar7);
      }
      else {
        plVar3 = (long *)FUN_038cb610(DAT_05ae7600,pvVar7);
        if (plVar3 != (long *)0x0) {
          (**(code **)(*plVar3 + 0x38))(plVar3,pvVar7);
        }
      }
    }
  }
  plVar8 = *(long **)(param_1 + 0x2f0);
  *(undefined8 *)(param_1 + 0x2f0) = 0;
  plVar3 = *(long **)(param_1 + 0x2f8);
  *(undefined8 *)(param_1 + 0x2f8) = 0;
  if (plVar8 != (long *)0x0) {
    (**(code **)(*plVar8 + 0x20))(plVar8);
  }
  if ((plVar3 != (long *)0x0) && (plVar3 != plVar8)) {
    (**(code **)(*plVar3 + 0x20))(plVar3);
  }
  plVar8 = *(long **)(param_1 + 0x2e0);
  *(undefined8 *)(param_1 + 0x2e0) = 0;
  plVar3 = *(long **)(param_1 + 0x2e8);
  *(undefined8 *)(param_1 + 0x2e8) = 0;
  if (plVar8 != (long *)0x0) {
    (**(code **)(*plVar8 + 0x20))(plVar8);
  }
  if ((plVar3 == (long *)0x0) || (plVar3 == plVar8)) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0335029c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar3 + 0x20))(plVar3);
  return;
}

