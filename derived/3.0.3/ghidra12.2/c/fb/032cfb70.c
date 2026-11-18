
/* WARNING: Removing unreachable block (ram,0x032cfc1c) */
/* WARNING: Removing unreachable block (ram,0x032cfeb8) */

void FUN_032cfb70(long param_1)

{
  undefined8 uVar1;
  char cVar2;
  undefined *puVar3;
  bool bVar4;
  long *plVar5;
  void *pvVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  
  plVar5 = *(long **)(param_1 + 0x60);
  uVar1 = *(undefined8 *)(param_1 + 0x68);
  *(undefined8 *)(param_1 + 0x60) = 0;
  if (plVar5 != (long *)0x0) {
    (**(code **)(*plVar5 + 0x10))();
  }
  pvVar6 = *(void **)(param_1 + 0x580);
  *(undefined8 *)(param_1 + 0x580) = 0;
  if (pvVar6 == (void *)0x0) {
LAB_032cfbdc:
    cVar2 = *(char *)(param_1 + 0x588);
  }
  else {
    if (DAT_05ae7600 != 0) {
      plVar5 = (long *)FUN_038cb610(DAT_05ae7600,pvVar6);
      if (plVar5 != (long *)0x0) {
        (**(code **)(*plVar5 + 0x38))(plVar5,pvVar6);
      }
      goto LAB_032cfbdc;
    }
    free(pvVar6);
    cVar2 = *(char *)(param_1 + 0x588);
  }
  if (cVar2 != '\0') {
    *(undefined1 *)(param_1 + 0x588) = 0;
    FUN_00367180(*(undefined8 *)(param_1 + 0x58),*(undefined8 *)(param_1 + 0x210),0);
    FUN_003667a8(*(undefined8 *)(param_1 + 0x58),*(undefined8 *)(param_1 + 0x68));
    lVar7 = *(long *)(param_1 + 0x58);
    if (lVar7 != 0) {
      plVar5 = *(long **)(param_1 + 0x30);
      *(undefined8 *)(param_1 + 0x58) = 0;
      FUN_00366728(lVar7);
      (**(code **)(*plVar5 + 0x38))(plVar5,lVar7);
    }
  }
  puVar3 = PTR_FUN_04bc94f8;
  FUN_00352110(param_1 + 0x268,*(undefined8 *)(param_1 + 0x68),PTR_FUN_04bc94f8,param_1 + 0x20);
  FUN_00352110(param_1 + 0x218,*(undefined8 *)(param_1 + 0x68),puVar3,param_1 + 0x20);
  FUN_0034915c(param_1 + 0x2b8,*(undefined8 *)(param_1 + 0x68));
  lVar7 = *(long *)(param_1 + 0x3d8);
  *(undefined8 *)(param_1 + 0x3d8) = 0;
  if (lVar7 != 0) {
    plVar5 = (long *)FUN_038cb610(DAT_05ae7600,lVar7);
    (**(code **)(*plVar5 + 0x38))(plVar5,lVar7);
  }
  if (DAT_0572ebe0 != 0) {
    if (DAT_0572ecc8 != (long *)0x0) {
      (**(code **)(*DAT_0572ecc8 + 0x38))();
    }
    DAT_0572ebe0 = 0;
  }
  if (DAT_0572ecb8 != 0) {
    if (DAT_0572ecc0 != (long *)0x0) {
      (**(code **)(*DAT_0572ecc0 + 0x38))();
    }
    DAT_0572ecb8 = 0;
  }
  FUN_032c9ee0(DAT_05688e58);
  plVar5 = DAT_05688e58;
  if (DAT_05688e58 != (long *)0x0) {
    lVar7 = 0x640;
    do {
      if (*(long **)((long)plVar5 + lVar7) != (long *)0x0) {
        (**(code **)(**(long **)((long)plVar5 + lVar7) + 8))();
      }
      lVar7 = lVar7 + -8;
    } while (lVar7 != 800);
    do {
      if (*(long **)((long)plVar5 + lVar7) != (long *)0x0) {
        (**(code **)(**(long **)((long)plVar5 + lVar7) + 8))();
      }
      lVar7 = lVar7 + -8;
    } while (lVar7 != 0);
    if ((long *)*plVar5 != (long *)0x0) {
      (**(code **)(*(long *)*plVar5 + 8))();
    }
    if (DAT_0572ecd0 != (long *)0x0) {
      (**(code **)(*DAT_0572ecd0 + 0x38))(DAT_0572ecd0,plVar5);
    }
    DAT_05688e58 = (long *)0x0;
  }
  puVar3 = PTR_DAT_04bc6340;
  lVar7 = 0;
  lVar9 = *(long *)PTR_DAT_04bc6340;
  do {
    if (*(long **)(lVar9 + lVar7) != (long *)0x0) {
      (**(code **)(**(long **)(lVar9 + lVar7) + 0x10))();
      plVar5 = *(long **)(lVar9 + lVar7);
      *(undefined8 *)(lVar9 + lVar7) = 0;
      if (plVar5 != (long *)0x0) {
        (**(code **)(*plVar5 + 8))();
      }
    }
    lVar7 = lVar7 + 8;
  } while (lVar7 != 800);
  plVar8 = *(long **)(lVar9 + 0x330);
  *(undefined8 *)(lVar9 + 0x328) = 0;
  *(undefined4 *)(lVar9 + 800) = 0;
  plVar5 = *(long **)(lVar9 + 0x338);
  *(undefined8 *)(lVar9 + 0x330) = 0;
  *(undefined8 *)(lVar9 + 0x338) = 0;
  if (plVar8 != (long *)0x0) {
    (**(code **)(*plVar8 + 0x20))(plVar8);
  }
  if ((plVar5 != (long *)0x0) && (plVar5 != plVar8)) {
    (**(code **)(*plVar5 + 0x20))(plVar5);
  }
  lVar7 = *(long *)puVar3;
  if (lVar7 != 0) {
    lVar9 = 0x318;
    do {
      if (*(long **)(lVar7 + lVar9) != (long *)0x0) {
        (**(code **)(**(long **)(lVar7 + lVar9) + 8))();
      }
      bVar4 = lVar9 != 0;
      lVar9 = lVar9 + -8;
    } while (bVar4);
    if (DAT_0572ecb0 != (long *)0x0) {
      (**(code **)(*DAT_0572ecb0 + 0x38))(DAT_0572ecb0,lVar7);
    }
    *(undefined8 *)puVar3 = 0;
  }
  if (*(long *)(param_1 + 0x568) != 0) {
    (**(code **)(**(long **)(param_1 + 0x80) + 0x18))
              (*(long **)(param_1 + 0x80),*(long *)(param_1 + 0x568),*(undefined8 *)(param_1 + 0x30)
              );
    *(undefined8 *)(param_1 + 0x568) = 0;
  }
  if (*(long *)(param_1 + 0x578) != 0) {
    FUN_00361e08(*(long *)(param_1 + 0x578),*(undefined8 *)(param_1 + 0x68));
    plVar5 = *(long **)(param_1 + 0x578);
    *(undefined8 *)(param_1 + 0x578) = 0;
    if (plVar5 != (long *)0x0) {
      (**(code **)(*plVar5 + 8))();
    }
  }
  plVar5 = *(long **)(param_1 + 0x570);
  *(undefined8 *)(param_1 + 0x570) = 0;
  if (plVar5 != (long *)0x0) {
    (**(code **)(*plVar5 + 0x18))();
  }
  if (*(char *)(param_1 + 0x4b8) != '\0') {
    FUN_0034fa68(param_1 + 0x4c0,uVar1);
    *(undefined1 *)(param_1 + 0x4b8) = 0;
  }
  lVar7 = *(long *)(param_1 + 0x508);
  if (lVar7 != 0) {
    FUN_0034915c(lVar7,uVar1);
    lVar9 = *(long *)(lVar7 + 0x130);
    *(undefined8 *)(lVar7 + 0x130) = 0;
    if (lVar9 != 0) {
      plVar5 = (long *)FUN_038cb610(DAT_05ae7600,lVar9);
      (**(code **)(*plVar5 + 0x38))(plVar5,lVar9);
    }
    pvVar6 = *(void **)(param_1 + 0x508);
    *(undefined8 *)(param_1 + 0x508) = 0;
    if (pvVar6 != (void *)0x0) {
      lVar7 = *(long *)((long)pvVar6 + 0x130);
      if (lVar7 != 0) {
        plVar5 = (long *)FUN_038cb610(DAT_05ae7600,lVar7);
        (**(code **)(*plVar5 + 0x38))(plVar5,lVar7);
      }
      FUN_003490c0(pvVar6);
      if (DAT_05ae7600 == 0) {
        free(pvVar6);
        lVar7 = *(long *)(param_1 + 0x510);
        goto joined_r0x032cffc4;
      }
      plVar5 = (long *)FUN_038cb610(DAT_05ae7600,pvVar6);
      if (plVar5 != (long *)0x0) {
        (**(code **)(*plVar5 + 0x38))(plVar5,pvVar6);
      }
    }
  }
  lVar7 = *(long *)(param_1 + 0x510);
joined_r0x032cffc4:
  if (lVar7 != 0) {
    FUN_0034915c(lVar7,uVar1);
    lVar9 = *(long *)(lVar7 + 0x130);
    *(undefined8 *)(lVar7 + 0x130) = 0;
    if (lVar9 != 0) {
      plVar5 = (long *)FUN_038cb610(DAT_05ae7600,lVar9);
      (**(code **)(*plVar5 + 0x38))(plVar5,lVar9);
    }
    pvVar6 = *(void **)(param_1 + 0x510);
    *(undefined8 *)(param_1 + 0x510) = 0;
    if (pvVar6 != (void *)0x0) {
      lVar7 = *(long *)((long)pvVar6 + 0x130);
      if (lVar7 != 0) {
        plVar5 = (long *)FUN_038cb610(DAT_05ae7600,lVar7);
        (**(code **)(*plVar5 + 0x38))(plVar5,lVar7);
      }
      FUN_003490c0(pvVar6);
      if (DAT_05ae7600 == 0) {
        free(pvVar6);
        return;
      }
      plVar5 = (long *)FUN_038cb610(DAT_05ae7600,pvVar6);
      if (plVar5 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x032d0068. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar5 + 0x38))(plVar5,pvVar6);
        return;
      }
    }
  }
  return;
}

