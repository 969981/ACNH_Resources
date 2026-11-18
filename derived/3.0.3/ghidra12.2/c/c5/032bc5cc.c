
void FUN_032bc5cc(long param_1)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  void *pvVar7;
  undefined8 *puVar8;
  long lVar9;
  undefined8 local_28;
  
  if (*(char *)(param_1 + 0x15e) == '\0') {
    return;
  }
  FUN_0328607c(param_1 + 0x48);
  puVar3 = PTR_DAT_04bb2698;
  if (*(long *)(param_1 + 0x38) == 0) {
LAB_032bc640:
    lVar6 = *(long *)(param_1 + 0x40);
    if (lVar6 == 0) goto LAB_032bc734;
LAB_032bc648:
    lVar6 = *(long *)(lVar6 + 0x428);
    if ((lVar6 != 0) && (plVar4 = (long *)(lVar6 + 8), *plVar4 != 0)) {
      lVar9 = *(long *)(*(long *)(param_1 + 0x10) + 0x18);
      if (*(long *)(lVar9 + 0x18) == lVar6) {
        plVar5 = *(long **)(lVar9 + 0x138);
        *(undefined8 *)(lVar9 + 0x18) = 0;
        if (plVar5 != (long *)0x0) {
          (**(code **)(*plVar5 + 0x20))(plVar5,lVar6,0);
        }
        *(long *)(lVar9 + 0x48) = lVar9 + 0x28;
        *(long *)(lVar9 + 0x50) = lVar9 + 0x28;
LAB_032bc6c4:
        *(undefined8 *)(lVar9 + 0x60) = 0;
      }
      else if (*(long *)(lVar9 + 0x60) == lVar6) goto LAB_032bc6c4;
      lVar1 = *(long *)(lVar6 + 0x10);
      lVar2 = *(long *)(lVar6 + 0x18);
      *(undefined8 *)(lVar6 + 0x18) = 0;
      *plVar4 = 0;
      *(undefined8 *)(lVar6 + 0x10) = 0;
      if (*(long **)(lVar9 + 0x58) == plVar4) {
        *(long *)(lVar9 + 0x58) = lVar2;
      }
      if (lVar2 != 0) {
        *(long *)(lVar2 + 8) = lVar1;
      }
      if (lVar1 != 0) {
        *(long *)(lVar1 + 0x10) = lVar2;
      }
    }
    FUN_03286f10(*(undefined8 *)(param_1 + 0x40));
    pvVar7 = *(void **)(param_1 + 0x40);
    *(undefined8 *)(param_1 + 0x40) = 0;
    if (pvVar7 == (void *)0x0) goto LAB_032bc734;
    FUN_03286c9c(pvVar7);
    if (*(long *)puVar3 != 0) {
      plVar4 = (long *)FUN_038cb610(*(long *)puVar3,pvVar7);
      if (plVar4 != (long *)0x0) {
        (**(code **)(*plVar4 + 0x38))(plVar4,pvVar7);
      }
      goto LAB_032bc734;
    }
    free(pvVar7);
    puVar8 = *(undefined8 **)(param_1 + 0x28);
  }
  else {
    FUN_032bb6c0();
    pvVar7 = *(void **)(param_1 + 0x38);
    *(undefined8 *)(param_1 + 0x38) = 0;
    if (pvVar7 == (void *)0x0) goto LAB_032bc640;
    FUN_032bac20(pvVar7);
    if (*(long *)puVar3 != 0) {
      plVar4 = (long *)FUN_038cb610(*(long *)puVar3,pvVar7);
      if (plVar4 != (long *)0x0) {
        (**(code **)(*plVar4 + 0x38))(plVar4,pvVar7);
      }
      goto LAB_032bc640;
    }
    free(pvVar7);
    lVar6 = *(long *)(param_1 + 0x40);
    if (lVar6 != 0) goto LAB_032bc648;
LAB_032bc734:
    puVar8 = *(undefined8 **)(param_1 + 0x28);
  }
  if (puVar8 != (undefined8 *)0x0) {
    FUN_032b3780(puVar8 + 1);
    lVar6 = puVar8[0x2a];
    if (lVar6 != 0) {
      *(undefined8 *)(lVar6 + 0x60) = 0;
      *(undefined8 *)(lVar6 + 0x68) = 0;
      FUN_032c6840(lVar6 + 8);
      plVar4 = (long *)puVar8[0x2a];
      puVar8[0x2a] = 0;
      if (plVar4 != (long *)0x0) {
        (**(code **)(*plVar4 + 8))();
      }
    }
    FUN_032d3e80(*puVar8);
    *puVar8 = 0;
    pvVar7 = *(void **)(param_1 + 0x28);
    *(undefined8 *)(param_1 + 0x28) = 0;
    if (pvVar7 != (void *)0x0) {
      if (*(long **)((long)pvVar7 + 0x1c0) != (long *)0x0) {
        (**(code **)(**(long **)((long)pvVar7 + 0x1c0) + 8))();
      }
      if (*(long **)((long)pvVar7 + 400) != (long *)0x0) {
        (**(code **)(**(long **)((long)pvVar7 + 400) + 8))();
      }
      if (*(long **)((long)pvVar7 + 0x160) != (long *)0x0) {
        (**(code **)(**(long **)((long)pvVar7 + 0x160) + 8))();
      }
      if (*(long **)((long)pvVar7 + 0x150) != (long *)0x0) {
        (**(code **)(**(long **)((long)pvVar7 + 0x150) + 8))();
      }
      *(undefined8 *)((long)pvVar7 + 0x120) = 0;
      *(undefined8 *)((long)pvVar7 + 0x128) = 0;
      *(undefined8 *)((long)pvVar7 + 0x148) = 0;
      *(undefined8 *)((long)pvVar7 + 0x110) = 0;
      *(undefined8 *)((long)pvVar7 + 0x118) = 0;
      *(undefined8 *)((long)pvVar7 + 0x100) = 0;
      *(undefined8 *)((long)pvVar7 + 0x108) = 0;
      *(undefined8 *)((long)pvVar7 + 0xf0) = 0;
      *(undefined8 *)((long)pvVar7 + 0xf8) = 0;
      *(undefined8 *)((long)pvVar7 + 0x138) = 0;
      *(undefined8 *)((long)pvVar7 + 0x140) = 0;
      FUN_032b3674((long)pvVar7 + 8);
      if (*(long *)puVar3 == 0) {
        free(pvVar7);
      }
      else {
        plVar4 = (long *)FUN_038cb610(*(long *)puVar3,pvVar7);
        if (plVar4 != (long *)0x0) {
          (**(code **)(*plVar4 + 0x38))(plVar4,pvVar7);
        }
      }
    }
  }
  if (*(long *)(param_1 + 0x30) != 0) {
    FUN_032bfce8();
    pvVar7 = *(void **)(param_1 + 0x30);
    *(undefined8 *)(param_1 + 0x30) = 0;
    if (pvVar7 != (void *)0x0) {
      FUN_032bf210(pvVar7);
      if (*(long *)puVar3 == 0) {
        free(pvVar7);
      }
      else {
        plVar4 = (long *)FUN_038cb610(*(long *)puVar3,pvVar7);
        if (plVar4 != (long *)0x0) {
          (**(code **)(*plVar4 + 0x38))(plVar4,pvVar7);
        }
      }
    }
  }
  pvVar7 = *(void **)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = 0;
  if (pvVar7 != (void *)0x0) {
    FUN_032c1b04(pvVar7);
    if (*(long *)puVar3 == 0) {
      free(pvVar7);
    }
    else {
      plVar4 = (long *)FUN_038cb610(*(long *)puVar3,pvVar7);
      if (plVar4 != (long *)0x0) {
        (**(code **)(*plVar4 + 0x38))(plVar4,pvVar7);
      }
    }
  }
  pvVar7 = *(void **)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = 0;
  if (pvVar7 != (void *)0x0) {
    FUN_032ae0c8(pvVar7);
    if (*(long *)puVar3 == 0) {
      free(pvVar7);
      lVar6 = *(long *)(param_1 + 0x10);
      goto joined_r0x032bc90c;
    }
    plVar4 = (long *)FUN_038cb610(*(long *)puVar3,pvVar7);
    if (plVar4 != (long *)0x0) {
      (**(code **)(*plVar4 + 0x38))(plVar4,pvVar7);
    }
  }
  lVar6 = *(long *)(param_1 + 0x10);
joined_r0x032bc90c:
  if (lVar6 != 0) {
    FUN_03292080();
    local_28 = *(undefined8 *)(param_1 + 0x10);
    *(undefined8 *)(param_1 + 0x10) = 0;
    FUN_03281ac0(&local_28);
  }
  *(undefined1 *)(param_1 + 0x15e) = 0;
  return;
}

