
void FUN_0378dab0(long param_1)

{
  long *plVar1;
  undefined *puVar2;
  long *plVar3;
  long lVar4;
  long *plVar5;
  void *pvVar6;
  undefined **local_50;
  long *plStack_48;
  undefined1 *local_40;
  undefined8 uStack_38;
  
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(byte *)(param_1 + 8) = *(byte *)(param_1 + 8) & 0xfd;
  FUN_03f45838(param_1 + 0x18);
  if (*(long *)(param_1 + 0x10) != 0) {
    *(byte *)(param_1 + 8) = *(byte *)(param_1 + 8) & 0xfe;
    FUN_0383b748();
    FUN_03839fd0(*(undefined8 *)PTR_DAT_04bcb3d8,*(undefined8 *)(param_1 + 0x10),0);
    *(undefined8 *)(param_1 + 0x10) = 0;
  }
  puVar2 = PTR_DAT_04bb2698;
  pvVar6 = *(void **)(param_1 + 0x210);
  if (pvVar6 != (void *)0x0) {
    plVar3 = *(long **)(param_1 + 0x1f8);
    if (*(long **)(param_1 + 0x1f8) == (long *)(param_1 + 0x1f0)) {
LAB_0378db94:
      if (*(long *)puVar2 == 0) {
        free(pvVar6);
      }
      else {
        plVar3 = (long *)FUN_038cb610(*(long *)puVar2,pvVar6);
        if (plVar3 != (long *)0x0) {
          (**(code **)(*plVar3 + 0x38))(plVar3,pvVar6);
        }
      }
    }
    else {
      do {
        plVar1 = (long *)plVar3[1];
        plVar5 = plVar1;
        if (*plVar3 != 0) {
          *(long **)(*plVar3 + 8) = plVar1;
          plVar5 = (long *)plVar3[1];
        }
        if (plVar5 != (long *)0x0) {
          *plVar5 = *plVar3;
        }
        *plVar3 = 0;
        plVar3[1] = 0;
        *(int *)(param_1 + 0x200) = *(int *)(param_1 + 0x200) + -1;
        plVar3[-0x13] = *(long *)(param_1 + 0x208);
        *(long **)(param_1 + 0x208) = plVar3 + -0x13;
        plVar3 = plVar1;
      } while (plVar1 != (long *)(param_1 + 0x1f0));
      pvVar6 = *(void **)(param_1 + 0x210);
      if (pvVar6 != (void *)0x0) goto LAB_0378db94;
    }
    *(undefined4 *)(param_1 + 0x218) = 0;
    *(undefined8 *)(param_1 + 0x208) = 0;
    *(undefined8 *)(param_1 + 0x210) = 0;
  }
  pvVar6 = *(void **)(param_1 + 0xb8);
  if (pvVar6 != (void *)0x0) {
    if (*(long *)puVar2 == 0) {
      free(pvVar6);
    }
    else {
      plVar3 = (long *)FUN_038cb610(*(long *)puVar2,pvVar6);
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 0x38))(plVar3,pvVar6);
      }
    }
    *(undefined4 *)(param_1 + 200) = 0;
    *(undefined8 *)(param_1 + 0xb8) = 0;
    *(undefined8 *)(param_1 + 0xc0) = 0;
  }
  pvVar6 = *(void **)(param_1 + 0xa0);
  if (pvVar6 != (void *)0x0) {
    if (*(long *)puVar2 == 0) {
      free(pvVar6);
    }
    else {
      plVar3 = (long *)FUN_038cb610(*(long *)puVar2,pvVar6);
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 0x38))(plVar3,pvVar6);
      }
    }
    *(undefined4 *)(param_1 + 0xb0) = 0;
    *(undefined8 *)(param_1 + 0xa0) = 0;
    *(undefined8 *)(param_1 + 0xa8) = 0;
  }
  pvVar6 = *(void **)(param_1 + 0x88);
  if (pvVar6 != (void *)0x0) {
    if (*(long *)puVar2 == 0) {
      free(pvVar6);
    }
    else {
      plVar3 = (long *)FUN_038cb610(*(long *)puVar2,pvVar6);
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 0x38))(plVar3,pvVar6);
      }
    }
    *(undefined4 *)(param_1 + 0x98) = 0;
    *(undefined8 *)(param_1 + 0x88) = 0;
    *(undefined8 *)(param_1 + 0x90) = 0;
  }
  pvVar6 = *(void **)(param_1 + 0x78);
  if (pvVar6 == (void *)0x0) goto LAB_0378dd2c;
  plStack_48 = (long *)(param_1 + 0x68);
  local_40 = &LAB_0378eea8;
  uStack_38 = 0;
  local_50 = &PTR_LAB_04b46ec8;
  if (*plStack_48 == 0) {
    *(undefined4 *)(param_1 + 0x80) = 0;
    *(undefined8 *)(param_1 + 0x68) = 0;
    lVar4 = *(long *)puVar2;
    if (lVar4 != 0) goto LAB_0378dce8;
LAB_0378dd1c:
    free(pvVar6);
  }
  else {
    FUN_0378eec0(*plStack_48,&local_50);
    pvVar6 = *(void **)(param_1 + 0x78);
    *(undefined4 *)(param_1 + 0x80) = 0;
    *(undefined8 *)(param_1 + 0x68) = 0;
    if (pvVar6 != (void *)0x0) {
      lVar4 = *(long *)puVar2;
      if (lVar4 == 0) goto LAB_0378dd1c;
LAB_0378dce8:
      plVar3 = (long *)FUN_038cb610(lVar4,pvVar6);
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 0x38))(plVar3,pvVar6);
      }
    }
  }
  *(undefined4 *)(param_1 + 0x84) = 0;
  *(undefined8 *)(param_1 + 0x70) = 0;
  *(undefined8 *)(param_1 + 0x78) = 0;
LAB_0378dd2c:
  pvVar6 = *(void **)(param_1 + 0x50);
  if (pvVar6 != (void *)0x0) {
    if (*(long *)puVar2 == 0) {
      free(pvVar6);
    }
    else {
      plVar3 = (long *)FUN_038cb610(*(long *)puVar2,pvVar6);
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 0x38))(plVar3,pvVar6);
      }
    }
    *(undefined4 *)(param_1 + 0x60) = 0;
    *(undefined8 *)(param_1 + 0x50) = 0;
    *(undefined8 *)(param_1 + 0x58) = 0;
  }
  if (*(long *)(param_1 + 0x48) != 0) {
    pvVar6 = (void *)(*(long *)(param_1 + 0x48) + -8);
    if (*(long *)puVar2 == 0) {
      free(pvVar6);
    }
    else {
      plVar3 = (long *)FUN_038cb610(*(long *)puVar2,pvVar6);
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 0x38))(plVar3,pvVar6);
      }
    }
    *(undefined8 *)(param_1 + 0x48) = 0;
    *(undefined4 *)(param_1 + 0x40) = 0;
  }
  return;
}

