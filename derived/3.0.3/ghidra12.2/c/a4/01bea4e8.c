
void FUN_01bea4e8(long param_1,undefined8 param_2,long *param_3)

{
  long *plVar1;
  int iVar2;
  long *plVar3;
  ulong uVar4;
  long lVar5;
  undefined4 uVar6;
  long lVar7;
  void *pvVar8;
  void *pvVar9;
  
  *(undefined8 *)(param_1 + 0xc) = 0;
  *(undefined1 *)(param_1 + 9) = 1;
  *(undefined4 *)(param_1 + 0x14) = 0;
  if (*(long *)(param_1 + 0xf8) != 0) {
    *(undefined8 *)(param_1 + 0x20) = 0;
    *(undefined4 *)(param_1 + 0x28) = 0;
    (**(code **)(*(long *)(param_1 + 0x18) + 0x38))((long *)(param_1 + 0x18));
    pvVar8 = *(void **)(param_1 + 0xf8);
    if (pvVar8 != (void *)0x0) {
      if (DAT_05ae7600 == 0) {
        free(pvVar8);
      }
      else {
        plVar3 = (long *)FUN_038cb610(DAT_05ae7600,pvVar8);
        if (plVar3 != (long *)0x0) {
          (**(code **)(*plVar3 + 0x38))(plVar3,pvVar8);
        }
      }
    }
    *(undefined8 *)(param_1 + 0xf8) = 0;
  }
  if (*(long *)(param_1 + 0x1e0) != 0) {
    *(undefined8 *)(param_1 + 0x108) = 0;
    *(undefined4 *)(param_1 + 0x110) = 0;
    (**(code **)(*(long *)(param_1 + 0x100) + 0x38))(param_1 + 0x100);
    pvVar8 = *(void **)(param_1 + 0x1e0);
    if (pvVar8 != (void *)0x0) {
      if (DAT_05ae7600 == 0) {
        free(pvVar8);
      }
      else {
        plVar3 = (long *)FUN_038cb610(DAT_05ae7600,pvVar8);
        if (plVar3 != (long *)0x0) {
          (**(code **)(*plVar3 + 0x38))(plVar3,pvVar8);
        }
      }
    }
    *(undefined8 *)(param_1 + 0x1e0) = 0;
  }
  if (*(long *)(param_1 + 0x2c8) != 0) {
    *(undefined8 *)(param_1 + 0x1f0) = 0;
    *(undefined4 *)(param_1 + 0x1f8) = 0;
    (**(code **)(*(long *)(param_1 + 0x1e8) + 0x38))(param_1 + 0x1e8);
    pvVar8 = *(void **)(param_1 + 0x2c8);
    if (pvVar8 != (void *)0x0) {
      if (DAT_05ae7600 == 0) {
        free(pvVar8);
      }
      else {
        plVar3 = (long *)FUN_038cb610(DAT_05ae7600,pvVar8);
        if (plVar3 != (long *)0x0) {
          (**(code **)(*plVar3 + 0x38))(plVar3,pvVar8);
        }
      }
    }
    *(undefined8 *)(param_1 + 0x2c8) = 0;
  }
  *(undefined8 *)(param_1 + 0x2d8) = 0;
  **(undefined1 **)(param_1 + 0x2e8) = 0;
  **(undefined1 **)(param_1 + 0x340) = 0;
  *(undefined2 *)(param_1 + 0x3a8) = 0;
  uVar4 = (**(code **)(*param_3 + 0x50))(param_3);
  lVar7 = DAT_05ae7600;
  plVar3 = *(long **)PTR_DAT_04bc08b8;
  if ((uVar4 & 1) == 0) {
    plVar1 = (long *)(param_1 + 0x18);
    if (DAT_05ae7600 == 0) {
      pvVar8 = malloc(0x1000);
joined_r0x01bea8c8:
      if (pvVar8 != (void *)0x0) {
        *(void **)(param_1 + 0xf8) = pvVar8;
        *(void **)(param_1 + 0x20) = pvVar8;
        *(undefined4 *)(param_1 + 0x28) = 0x800;
        (**(code **)(*(long *)(param_1 + 0x18) + 0x38))(plVar1);
      }
    }
    else {
      if (plVar3 != (long *)0x0) {
LAB_01bea7b0:
        pvVar8 = (void *)(**(code **)(*plVar3 + 0x30))(plVar3,0x1000,8);
        goto joined_r0x01bea8c8;
      }
      lVar5 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
      plVar3 = (long *)(lVar7 + 8);
      if (lVar5 != 0) {
        plVar3 = (long *)(lVar5 + 0xa8);
      }
      plVar3 = (long *)*plVar3;
      if (plVar3 != (long *)0x0) goto LAB_01bea7b0;
    }
    if (*(long *)(param_1 + 0x20) != 0) {
      (**(code **)(*plVar1 + 0x28))(plVar1,param_3);
      (**(code **)(*plVar1 + 0x30))(plVar1,param_3);
      uVar6 = 2;
      goto LAB_01bea828;
    }
  }
  else {
    plVar1 = (long *)(param_1 + 0x100);
    if (DAT_05ae7600 == 0) {
      pvVar8 = malloc(0x1000);
joined_r0x01bea8b8:
      if (pvVar8 != (void *)0x0) {
        *(void **)(param_1 + 0x1e0) = pvVar8;
        *(void **)(param_1 + 0x108) = pvVar8;
        *(undefined4 *)(param_1 + 0x110) = 0x800;
        (**(code **)(*(long *)(param_1 + 0x100) + 0x38))(plVar1);
      }
    }
    else {
      if (plVar3 != (long *)0x0) {
LAB_01bea708:
        pvVar8 = (void *)(**(code **)(*plVar3 + 0x30))(plVar3,0x1000,8);
        goto joined_r0x01bea8b8;
      }
      lVar5 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
      plVar3 = (long *)(lVar7 + 8);
      if (lVar5 != 0) {
        plVar3 = (long *)(lVar5 + 0xa8);
      }
      plVar3 = (long *)*plVar3;
      if (plVar3 != (long *)0x0) goto LAB_01bea708;
    }
    if (*(long *)(param_1 + 0x108) != 0) {
      (**(code **)(*plVar1 + 0x28))(plVar1,param_3);
      (**(code **)(*plVar1 + 0x30))(plVar1,param_3);
      uVar6 = 4;
      goto LAB_01bea828;
    }
  }
  uVar6 = 0xc;
  *(undefined1 *)(param_1 + 9) = 0;
LAB_01bea828:
  *(undefined4 *)(param_1 + 0xc) = uVar6;
  *(undefined8 *)(param_1 + 0x2d8) = param_2;
  plVar3 = (long *)(**(code **)(*param_3 + 0x60))(param_3);
  pvVar8 = *(void **)(param_1 + 0x2e8);
  (**(code **)(*plVar3 + 0x18))();
  pvVar9 = (void *)plVar3[1];
  if (pvVar8 != pvVar9) {
    (**(code **)(*plVar3 + 0x18))(plVar3);
    lVar7 = 0;
    do {
      if (*(char *)(plVar3[1] + lVar7) == '\0') goto LAB_01bea8dc;
      lVar5 = plVar3[1] + lVar7;
      if (*(char *)(lVar5 + 1) == '\0') {
        lVar7 = lVar7 + 1;
        goto LAB_01bea8dc;
      }
      if (*(char *)(lVar5 + 2) == '\0') {
        lVar7 = lVar7 + 2;
        goto LAB_01bea8dc;
      }
      lVar7 = lVar7 + 3;
    } while (lVar7 != 0x80001);
    lVar7 = 0;
LAB_01bea8dc:
    iVar2 = (int)lVar7;
    if (*(int *)(param_1 + 0x2f0) <= (int)lVar7) {
      iVar2 = *(int *)(param_1 + 0x2f0) + -1;
    }
    memcpy(pvVar8,pvVar9,(long)iVar2);
    *(undefined1 *)((long)pvVar8 + (long)iVar2) = 0;
  }
  plVar3 = (long *)(**(code **)(*param_3 + 0x68))(param_3);
  pvVar8 = *(void **)(param_1 + 0x340);
  (**(code **)(*plVar3 + 0x18))();
  pvVar9 = (void *)plVar3[1];
  if (pvVar8 != pvVar9) {
    (**(code **)(*plVar3 + 0x18))(plVar3);
    lVar7 = 0;
    do {
      if (*(char *)(plVar3[1] + lVar7) == '\0') goto LAB_01bea98c;
      lVar5 = plVar3[1] + lVar7;
      if (*(char *)(lVar5 + 1) == '\0') {
        lVar7 = lVar7 + 1;
        goto LAB_01bea98c;
      }
      if (*(char *)(lVar5 + 2) == '\0') {
        lVar7 = lVar7 + 2;
        goto LAB_01bea98c;
      }
      lVar7 = lVar7 + 3;
    } while (lVar7 != 0x80001);
    lVar7 = 0;
LAB_01bea98c:
    iVar2 = (int)lVar7;
    if (*(int *)(param_1 + 0x348) <= (int)lVar7) {
      iVar2 = *(int *)(param_1 + 0x348) + -1;
    }
    memcpy(pvVar8,pvVar9,(long)iVar2);
    *(undefined1 *)((long)pvVar8 + (long)iVar2) = 0;
  }
  return;
}

