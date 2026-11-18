
void FUN_0331d608(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  void *pvVar5;
  undefined8 *puVar6;
  
  puVar1 = PTR_DAT_04bb2698;
  if (*(long *)(param_1 + 0x358) == 0) {
LAB_0331d6d4:
    pvVar5 = *(void **)(param_1 + 0x300);
  }
  else {
    FUN_03286f10();
    pvVar5 = *(void **)(param_1 + 0x358);
    *(undefined8 *)(param_1 + 0x358) = 0;
    if (pvVar5 == (void *)0x0) goto LAB_0331d6d4;
    if (*(long **)((long)pvVar5 + 0x5f8) != (long *)0x0) {
      (**(code **)(**(long **)((long)pvVar5 + 0x5f8) + 8))();
    }
    puVar6 = (undefined8 *)((long)pvVar5 + 0x590);
    FUN_032c6840(puVar6);
    plVar4 = *(long **)((long)pvVar5 + 0x590);
    *(undefined8 *)((long)pvVar5 + 0x5b8) = 0;
    *(undefined8 *)((long)pvVar5 + 0x5b0) = 0;
    *(undefined8 *)((long)pvVar5 + 0x5a8) = 0;
    if (plVar4 != (long *)0x0) {
      lVar2 = *(long *)((long)pvVar5 + 0x5a0);
      lVar3 = *(long *)((long)pvVar5 + 0x598);
      *(undefined8 *)((long)pvVar5 + 0x5a0) = 0;
      *puVar6 = 0;
      *(undefined8 *)((long)pvVar5 + 0x598) = 0;
      if ((undefined8 *)*plVar4 == puVar6) {
        *plVar4 = lVar2;
      }
      if (lVar2 != 0) {
        *(long *)(lVar2 + 8) = lVar3;
      }
      if (lVar3 != 0) {
        *(long *)(lVar3 + 0x10) = lVar2;
      }
    }
    *(undefined8 *)((long)pvVar5 + 0x598) = 0;
    *(undefined8 *)((long)pvVar5 + 0x5a0) = 0;
    *puVar6 = 0;
    FUN_03286c9c(pvVar5);
    if (*(long *)puVar1 != 0) {
      plVar4 = (long *)FUN_038cb610(*(long *)puVar1,pvVar5);
      if (plVar4 != (long *)0x0) {
        (**(code **)(*plVar4 + 0x38))(plVar4,pvVar5);
      }
      goto LAB_0331d6d4;
    }
    free(pvVar5);
    pvVar5 = *(void **)(param_1 + 0x300);
  }
  if (pvVar5 != (void *)0x0) {
    *(undefined8 *)(param_1 + 0x300) = 0;
    FUN_03286c9c(pvVar5);
    if (*(long *)puVar1 == 0) {
      free(pvVar5);
    }
    else {
      plVar4 = (long *)FUN_038cb610(*(long *)puVar1,pvVar5);
      if (plVar4 != (long *)0x0) {
        (**(code **)(*plVar4 + 0x38))(plVar4,pvVar5);
      }
    }
  }
  pvVar5 = *(void **)(param_1 + 0x360);
  if (pvVar5 == (void *)0x0) {
LAB_0331d7e0:
    pvVar5 = *(void **)(param_1 + 0x350);
  }
  else {
    *(undefined8 *)(param_1 + 0x360) = 0;
    FUN_03286c9c(pvVar5);
    if (*(long *)puVar1 == 0) {
      free(pvVar5);
    }
    else {
      plVar4 = (long *)FUN_038cb610(*(long *)puVar1,pvVar5);
      if (plVar4 != (long *)0x0) {
        (**(code **)(*plVar4 + 0x38))(plVar4,pvVar5);
      }
    }
    FUN_032c6840(*(undefined8 *)(param_1 + 0x378));
    puVar6 = *(undefined8 **)(param_1 + 0x378);
    *(undefined8 *)(param_1 + 0x378) = 0;
    if (puVar6 == (undefined8 *)0x0) goto LAB_0331d7e0;
    FUN_032c6840(puVar6);
    plVar4 = (long *)*puVar6;
    puVar6[4] = 0;
    puVar6[5] = 0;
    puVar6[3] = 0;
    if (plVar4 != (long *)0x0) {
      lVar2 = puVar6[1];
      lVar3 = puVar6[2];
      puVar6[2] = 0;
      *puVar6 = 0;
      puVar6[1] = 0;
      if ((undefined8 *)*plVar4 == puVar6) {
        *plVar4 = lVar3;
      }
      if (lVar3 != 0) {
        *(long *)(lVar3 + 8) = lVar2;
      }
      if (lVar2 != 0) {
        *(long *)(lVar2 + 0x10) = lVar3;
      }
    }
    puVar6[1] = 0;
    puVar6[2] = 0;
    *puVar6 = 0;
    if (*(long *)puVar1 != 0) {
      plVar4 = (long *)FUN_038cb610(*(long *)puVar1,puVar6);
      if (plVar4 != (long *)0x0) {
        (**(code **)(*plVar4 + 0x38))(plVar4,puVar6);
      }
      goto LAB_0331d7e0;
    }
    free(puVar6);
    pvVar5 = *(void **)(param_1 + 0x350);
  }
  if (pvVar5 != (void *)0x0) {
    *(undefined8 *)(param_1 + 0x350) = 0;
    FUN_03286c9c(pvVar5);
    if (*(long *)puVar1 == 0) {
      free(pvVar5);
    }
    else {
      plVar4 = (long *)FUN_038cb610(*(long *)puVar1,pvVar5);
      if (plVar4 != (long *)0x0) {
        (**(code **)(*plVar4 + 0x38))(plVar4,pvVar5);
      }
    }
    FUN_032c6840(*(undefined8 *)(param_1 + 0x370));
    puVar6 = *(undefined8 **)(param_1 + 0x370);
    *(undefined8 *)(param_1 + 0x370) = 0;
    if (puVar6 != (undefined8 *)0x0) {
      FUN_032c6840(puVar6);
      plVar4 = (long *)*puVar6;
      puVar6[4] = 0;
      puVar6[5] = 0;
      puVar6[3] = 0;
      if (plVar4 != (long *)0x0) {
        lVar2 = puVar6[1];
        lVar3 = puVar6[2];
        puVar6[2] = 0;
        *puVar6 = 0;
        puVar6[1] = 0;
        if ((undefined8 *)*plVar4 == puVar6) {
          *plVar4 = lVar3;
        }
        if (lVar3 != 0) {
          *(long *)(lVar3 + 8) = lVar2;
        }
        if (lVar2 != 0) {
          *(long *)(lVar2 + 0x10) = lVar3;
        }
      }
      puVar6[1] = 0;
      puVar6[2] = 0;
      *puVar6 = 0;
      if (*(long *)puVar1 == 0) {
        free(puVar6);
      }
      else {
        plVar4 = (long *)FUN_038cb610(*(long *)puVar1,puVar6);
        if (plVar4 != (long *)0x0) {
          (**(code **)(*plVar4 + 0x38))(plVar4,puVar6);
        }
      }
    }
  }
  pvVar5 = *(void **)(param_1 + 0x348);
  if (pvVar5 == (void *)0x0) {
LAB_0331d9a4:
    pvVar5 = *(void **)(param_1 + 0x340);
  }
  else {
    *(undefined8 *)(param_1 + 0x348) = 0;
    FUN_03286c9c(pvVar5);
    if (*(long *)puVar1 == 0) {
      free(pvVar5);
    }
    else {
      plVar4 = (long *)FUN_038cb610(*(long *)puVar1,pvVar5);
      if (plVar4 != (long *)0x0) {
        (**(code **)(*plVar4 + 0x38))(plVar4,pvVar5);
      }
    }
    FUN_032c6840(*(undefined8 *)(param_1 + 0x388));
    puVar6 = *(undefined8 **)(param_1 + 0x388);
    *(undefined8 *)(param_1 + 0x388) = 0;
    if (puVar6 == (undefined8 *)0x0) goto LAB_0331d9a4;
    FUN_032c6840(puVar6);
    plVar4 = (long *)*puVar6;
    puVar6[4] = 0;
    puVar6[5] = 0;
    puVar6[3] = 0;
    if (plVar4 != (long *)0x0) {
      lVar2 = puVar6[1];
      lVar3 = puVar6[2];
      puVar6[2] = 0;
      *puVar6 = 0;
      puVar6[1] = 0;
      if ((undefined8 *)*plVar4 == puVar6) {
        *plVar4 = lVar3;
      }
      if (lVar3 != 0) {
        *(long *)(lVar3 + 8) = lVar2;
      }
      if (lVar2 != 0) {
        *(long *)(lVar2 + 0x10) = lVar3;
      }
    }
    puVar6[1] = 0;
    puVar6[2] = 0;
    *puVar6 = 0;
    if (*(long *)puVar1 != 0) {
      plVar4 = (long *)FUN_038cb610(*(long *)puVar1,puVar6);
      if (plVar4 != (long *)0x0) {
        (**(code **)(*plVar4 + 0x38))(plVar4,puVar6);
      }
      goto LAB_0331d9a4;
    }
    free(puVar6);
    pvVar5 = *(void **)(param_1 + 0x340);
  }
  if (pvVar5 != (void *)0x0) {
    *(undefined8 *)(param_1 + 0x340) = 0;
    FUN_03286c9c(pvVar5);
    if (*(long *)puVar1 == 0) {
      free(pvVar5);
    }
    else {
      plVar4 = (long *)FUN_038cb610(*(long *)puVar1,pvVar5);
      if (plVar4 != (long *)0x0) {
        (**(code **)(*plVar4 + 0x38))(plVar4,pvVar5);
      }
    }
    FUN_032c6840(*(undefined8 *)(param_1 + 0x368));
    puVar6 = *(undefined8 **)(param_1 + 0x368);
    *(undefined8 *)(param_1 + 0x368) = 0;
    if (puVar6 != (undefined8 *)0x0) {
      FUN_032c6840(puVar6);
      plVar4 = (long *)*puVar6;
      puVar6[4] = 0;
      puVar6[5] = 0;
      puVar6[3] = 0;
      if (plVar4 != (long *)0x0) {
        lVar2 = puVar6[1];
        lVar3 = puVar6[2];
        puVar6[2] = 0;
        *puVar6 = 0;
        puVar6[1] = 0;
        if ((undefined8 *)*plVar4 == puVar6) {
          *plVar4 = lVar3;
        }
        if (lVar3 != 0) {
          *(long *)(lVar3 + 8) = lVar2;
        }
        if (lVar2 != 0) {
          *(long *)(lVar2 + 0x10) = lVar3;
        }
      }
      puVar6[1] = 0;
      puVar6[2] = 0;
      *puVar6 = 0;
      if (*(long *)puVar1 == 0) {
        free(puVar6);
      }
      else {
        plVar4 = (long *)FUN_038cb610(*(long *)puVar1,puVar6);
        if (plVar4 != (long *)0x0) {
          (**(code **)(*plVar4 + 0x38))(plVar4,puVar6);
        }
      }
    }
  }
  pvVar5 = *(void **)(param_1 + 0x338);
  *(undefined8 *)(param_1 + 0x328) = 0;
  if (pvVar5 == (void *)0x0) {
    return;
  }
  if (*(long *)(param_1 + 0x330) == 0) {
    *(undefined8 *)(param_1 + 0x338) = 0;
  }
  else {
    FUN_032d3e80();
    pvVar5 = *(void **)(param_1 + 0x338);
    *(undefined8 *)(param_1 + 0x330) = 0;
    *(undefined8 *)(param_1 + 0x338) = 0;
    if (pvVar5 == (void *)0x0) goto LAB_0331daf4;
  }
  FUN_03286c9c(pvVar5);
  if (*(long *)puVar1 == 0) {
    free(pvVar5);
  }
  else {
    plVar4 = (long *)FUN_038cb610(*(long *)puVar1,pvVar5);
    if (plVar4 != (long *)0x0) {
      (**(code **)(*plVar4 + 0x38))(plVar4,pvVar5);
    }
  }
LAB_0331daf4:
  FUN_032c6840(*(undefined8 *)(param_1 + 0x380));
  puVar6 = *(undefined8 **)(param_1 + 0x380);
  *(undefined8 *)(param_1 + 0x380) = 0;
  if (puVar6 != (undefined8 *)0x0) {
    FUN_032c6840(puVar6);
    plVar4 = (long *)*puVar6;
    puVar6[4] = 0;
    puVar6[5] = 0;
    puVar6[3] = 0;
    if (plVar4 != (long *)0x0) {
      lVar2 = puVar6[1];
      lVar3 = puVar6[2];
      puVar6[2] = 0;
      *puVar6 = 0;
      puVar6[1] = 0;
      if ((undefined8 *)*plVar4 == puVar6) {
        *plVar4 = lVar3;
      }
      if (lVar3 != 0) {
        *(long *)(lVar3 + 8) = lVar2;
      }
      if (lVar2 != 0) {
        *(long *)(lVar2 + 0x10) = lVar3;
      }
    }
    puVar6[1] = 0;
    puVar6[2] = 0;
    *puVar6 = 0;
    if (*(long *)puVar1 == 0) {
      free(puVar6);
      return;
    }
    plVar4 = (long *)FUN_038cb610(*(long *)puVar1,puVar6);
    if (plVar4 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0331db80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar4 + 0x38))(plVar4,puVar6);
      return;
    }
  }
  return;
}

