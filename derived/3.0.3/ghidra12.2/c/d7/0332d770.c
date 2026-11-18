
void FUN_0332d770(long param_1)

{
  long lVar1;
  undefined *puVar2;
  bool bVar3;
  long *plVar4;
  undefined8 *puVar5;
  void *pvVar6;
  long lVar7;
  
  *(undefined8 *)(param_1 + 0x1b40) = 0;
  puVar2 = PTR_DAT_04bb2698;
  puVar5 = *(undefined8 **)(param_1 + 0x1b20);
  if (puVar5 == (undefined8 *)0x0) {
LAB_0332d808:
    puVar5 = *(undefined8 **)(param_1 + 0x1b18);
  }
  else {
    FUN_032c6840(puVar5);
    plVar4 = (long *)*puVar5;
    puVar5[4] = 0;
    puVar5[5] = 0;
    puVar5[3] = 0;
    if (plVar4 != (long *)0x0) {
      lVar7 = puVar5[1];
      lVar1 = puVar5[2];
      puVar5[2] = 0;
      *puVar5 = 0;
      puVar5[1] = 0;
      if ((undefined8 *)*plVar4 == puVar5) {
        *plVar4 = lVar1;
      }
      if (lVar1 != 0) {
        *(long *)(lVar1 + 8) = lVar7;
      }
      if (lVar7 != 0) {
        *(long *)(lVar7 + 0x10) = lVar1;
      }
    }
    puVar5[1] = 0;
    puVar5[2] = 0;
    *puVar5 = 0;
    if (*(long *)puVar2 != 0) {
      plVar4 = (long *)FUN_038cb610(*(long *)puVar2,puVar5);
      if (plVar4 != (long *)0x0) {
        (**(code **)(*plVar4 + 0x38))(plVar4,puVar5);
      }
      goto LAB_0332d808;
    }
    free(puVar5);
    puVar5 = *(undefined8 **)(param_1 + 0x1b18);
  }
  if (puVar5 != (undefined8 *)0x0) {
    FUN_032c6840(puVar5);
    plVar4 = (long *)*puVar5;
    puVar5[4] = 0;
    puVar5[5] = 0;
    puVar5[3] = 0;
    if (plVar4 != (long *)0x0) {
      lVar7 = puVar5[1];
      lVar1 = puVar5[2];
      puVar5[2] = 0;
      *puVar5 = 0;
      puVar5[1] = 0;
      if ((undefined8 *)*plVar4 == puVar5) {
        *plVar4 = lVar1;
      }
      if (lVar1 != 0) {
        *(long *)(lVar1 + 8) = lVar7;
      }
      if (lVar7 != 0) {
        *(long *)(lVar7 + 0x10) = lVar1;
      }
    }
    puVar5[1] = 0;
    puVar5[2] = 0;
    *puVar5 = 0;
    if (*(long *)puVar2 == 0) {
      free(puVar5);
    }
    else {
      plVar4 = (long *)FUN_038cb610(*(long *)puVar2,puVar5);
      if (plVar4 != (long *)0x0) {
        (**(code **)(*plVar4 + 0x38))(plVar4,puVar5);
      }
    }
  }
  puVar5 = *(undefined8 **)(param_1 + 0x1b10);
  if (puVar5 == (undefined8 *)0x0) {
LAB_0332d918:
    puVar5 = *(undefined8 **)(param_1 + 0x1b08);
  }
  else {
    FUN_032c6840(puVar5);
    plVar4 = (long *)*puVar5;
    puVar5[4] = 0;
    puVar5[5] = 0;
    puVar5[3] = 0;
    if (plVar4 != (long *)0x0) {
      lVar7 = puVar5[1];
      lVar1 = puVar5[2];
      puVar5[2] = 0;
      *puVar5 = 0;
      puVar5[1] = 0;
      if ((undefined8 *)*plVar4 == puVar5) {
        *plVar4 = lVar1;
      }
      if (lVar1 != 0) {
        *(long *)(lVar1 + 8) = lVar7;
      }
      if (lVar7 != 0) {
        *(long *)(lVar7 + 0x10) = lVar1;
      }
    }
    puVar5[1] = 0;
    puVar5[2] = 0;
    *puVar5 = 0;
    if (*(long *)puVar2 != 0) {
      plVar4 = (long *)FUN_038cb610(*(long *)puVar2,puVar5);
      if (plVar4 != (long *)0x0) {
        (**(code **)(*plVar4 + 0x38))(plVar4,puVar5);
      }
      goto LAB_0332d918;
    }
    free(puVar5);
    puVar5 = *(undefined8 **)(param_1 + 0x1b08);
  }
  if (puVar5 != (undefined8 *)0x0) {
    FUN_032c6840(puVar5);
    plVar4 = (long *)*puVar5;
    puVar5[4] = 0;
    puVar5[5] = 0;
    puVar5[3] = 0;
    if (plVar4 != (long *)0x0) {
      lVar7 = puVar5[1];
      lVar1 = puVar5[2];
      puVar5[2] = 0;
      *puVar5 = 0;
      puVar5[1] = 0;
      if ((undefined8 *)*plVar4 == puVar5) {
        *plVar4 = lVar1;
      }
      if (lVar1 != 0) {
        *(long *)(lVar1 + 8) = lVar7;
      }
      if (lVar7 != 0) {
        *(long *)(lVar7 + 0x10) = lVar1;
      }
    }
    puVar5[1] = 0;
    puVar5[2] = 0;
    *puVar5 = 0;
    if (*(long *)puVar2 == 0) {
      free(puVar5);
    }
    else {
      plVar4 = (long *)FUN_038cb610(*(long *)puVar2,puVar5);
      if (plVar4 != (long *)0x0) {
        (**(code **)(*plVar4 + 0x38))(plVar4,puVar5);
      }
    }
  }
  puVar5 = *(undefined8 **)(param_1 + 0x1b00);
  if (puVar5 != (undefined8 *)0x0) {
    FUN_032c6840(puVar5);
    plVar4 = (long *)*puVar5;
    puVar5[4] = 0;
    puVar5[5] = 0;
    puVar5[3] = 0;
    if (plVar4 != (long *)0x0) {
      lVar7 = puVar5[1];
      lVar1 = puVar5[2];
      puVar5[2] = 0;
      *puVar5 = 0;
      puVar5[1] = 0;
      if ((undefined8 *)*plVar4 == puVar5) {
        *plVar4 = lVar1;
      }
      if (lVar1 != 0) {
        *(long *)(lVar1 + 8) = lVar7;
      }
      if (lVar7 != 0) {
        *(long *)(lVar7 + 0x10) = lVar1;
      }
    }
    puVar5[1] = 0;
    puVar5[2] = 0;
    *puVar5 = 0;
    if (*(long *)puVar2 == 0) {
      free(puVar5);
    }
    else {
      plVar4 = (long *)FUN_038cb610(*(long *)puVar2,puVar5);
      if (plVar4 != (long *)0x0) {
        (**(code **)(*plVar4 + 0x38))(plVar4,puVar5);
      }
    }
  }
  FUN_0330833c(param_1 + 0x1ad8);
  pvVar6 = *(void **)(param_1 + 0x1ad0);
  if (pvVar6 == (void *)0x0) {
LAB_0332da74:
    pvVar6 = *(void **)(param_1 + 0x1ac8);
  }
  else {
    FUN_03286c9c(pvVar6);
    if (*(long *)puVar2 != 0) {
      plVar4 = (long *)FUN_038cb610(*(long *)puVar2,pvVar6);
      if (plVar4 != (long *)0x0) {
        (**(code **)(*plVar4 + 0x38))(plVar4,pvVar6);
      }
      goto LAB_0332da74;
    }
    free(pvVar6);
    pvVar6 = *(void **)(param_1 + 0x1ac8);
  }
  if (pvVar6 != (void *)0x0) {
    FUN_03286c9c(pvVar6);
    if (*(long *)puVar2 == 0) {
      free(pvVar6);
    }
    else {
      plVar4 = (long *)FUN_038cb610(*(long *)puVar2,pvVar6);
      if (plVar4 != (long *)0x0) {
        (**(code **)(*plVar4 + 0x38))(plVar4,pvVar6);
      }
    }
  }
  pvVar6 = *(void **)(param_1 + 0x1ac0);
  if (pvVar6 != (void *)0x0) {
    FUN_03286c9c(pvVar6);
    if (*(long *)puVar2 == 0) {
      free(pvVar6);
      pvVar6 = *(void **)(param_1 + 0x1ab8);
      goto joined_r0x0332db00;
    }
    plVar4 = (long *)FUN_038cb610(*(long *)puVar2,pvVar6);
    if (plVar4 != (long *)0x0) {
      (**(code **)(*plVar4 + 0x38))(plVar4,pvVar6);
    }
  }
  pvVar6 = *(void **)(param_1 + 0x1ab8);
joined_r0x0332db00:
  if (pvVar6 != (void *)0x0) {
    FUN_03286c9c(pvVar6);
    if (*(long *)puVar2 == 0) {
      free(pvVar6);
    }
    else {
      plVar4 = (long *)FUN_038cb610(*(long *)puVar2,pvVar6);
      if (plVar4 != (long *)0x0) {
        (**(code **)(*plVar4 + 0x38))(plVar4,pvVar6);
      }
    }
  }
  pvVar6 = *(void **)(param_1 + 0x1ab0);
  if (pvVar6 != (void *)0x0) {
    FUN_03286c9c(pvVar6);
    if (*(long *)puVar2 == 0) {
      free(pvVar6);
    }
    else {
      plVar4 = (long *)FUN_038cb610(*(long *)puVar2,pvVar6);
      if (plVar4 != (long *)0x0) {
        (**(code **)(*plVar4 + 0x38))(plVar4,pvVar6);
      }
    }
  }
  lVar7 = 0;
  do {
    pvVar6 = *(void **)(param_1 + lVar7 + 0x1aa8);
    if (pvVar6 != (void *)0x0) {
      if (*(long **)((long)pvVar6 + 0x5a0) != (long *)0x0) {
        (**(code **)(**(long **)((long)pvVar6 + 0x5a0) + 8))();
      }
      FUN_03286c9c(pvVar6);
      if (*(long *)puVar2 == 0) {
        free(pvVar6);
      }
      else {
        plVar4 = (long *)FUN_038cb610(*(long *)puVar2,pvVar6);
        if (plVar4 != (long *)0x0) {
          (**(code **)(*plVar4 + 0x38))(plVar4,pvVar6);
        }
      }
    }
    bVar3 = lVar7 != -0x158;
    lVar7 = lVar7 + -8;
  } while (bVar3);
  memset((void *)(param_1 + 0x17f0),0,0x160);
  FUN_0331a35c(param_1);
  return;
}

