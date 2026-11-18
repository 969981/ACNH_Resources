
void FUN_032d1384(long *param_1)

{
  long lVar1;
  undefined *puVar2;
  long *plVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  void *pvVar7;
  undefined1 uStack_41;
  undefined **local_40;
  undefined1 *puStack_38;
  undefined1 auStack_18 [8];
  
  puVar2 = PTR_DAT_04bc6338;
  lVar4 = *(long *)PTR_DAT_04bc6338;
  uVar5 = *(undefined8 *)(lVar4 + 0x68);
  if (param_1[0x1f] != 0) {
    FUN_032d15b0(param_1,param_1);
    lVar4 = *(long *)puVar2;
  }
  if (*param_1 != 0) {
    lVar6 = param_1[1];
    lVar1 = param_1[2];
    param_1[2] = 0;
    *param_1 = 0;
    param_1[1] = 0;
    if (*(long **)(lVar4 + 0x560) == param_1) {
      *(long *)(lVar4 + 0x560) = lVar1;
    }
    if (lVar1 != 0) {
      *(long *)(lVar1 + 8) = lVar6;
    }
    if (lVar6 != 0) {
      *(long *)(lVar6 + 0x10) = lVar1;
    }
  }
  puStack_38 = &uStack_41;
  local_40 = &PTR_LAB_04b1b2a0;
  FUN_032d2ed0(auStack_18,*(undefined8 *)(param_1[0x1e] + 0x18),&local_40,1,1);
  FUN_00367be0(param_1[0x1e],uVar5);
  plVar3 = (long *)param_1[0x1e];
  param_1[0x1e] = 0;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 0x10))();
  }
  pvVar7 = (void *)param_1[0x1ed];
  if (pvVar7 != (void *)0x0) {
    if (*(char *)((long)pvVar7 + 0xd8) == '\0') {
      param_1[0x1ed] = 0;
    }
    else {
      FUN_0034fa68((long)pvVar7 + 0xe0,uVar5);
      *(undefined1 *)((long)pvVar7 + 0xd8) = 0;
      pvVar7 = (void *)param_1[0x1ed];
      param_1[0x1ed] = 0;
      if (pvVar7 == (void *)0x0) goto LAB_032d14b8;
    }
    FUN_0034f98c((long)pvVar7 + 0xe0);
    FUN_0034f6d0(pvVar7);
    if (DAT_05ae7600 == 0) {
      free(pvVar7);
      lVar4 = param_1[0x1ee];
      goto joined_r0x032d14bc;
    }
    plVar3 = (long *)FUN_038cb610(DAT_05ae7600,pvVar7);
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 0x38))(plVar3,pvVar7);
    }
  }
LAB_032d14b8:
  lVar4 = param_1[0x1ee];
joined_r0x032d14bc:
  if (lVar4 != 0) {
    FUN_0034915c(lVar4,uVar5);
    lVar6 = *(long *)(lVar4 + 0x130);
    *(undefined8 *)(lVar4 + 0x130) = 0;
    if (lVar6 != 0) {
      plVar3 = (long *)FUN_038cb610(*(undefined8 *)PTR_DAT_04bb2698,lVar6);
      (**(code **)(*plVar3 + 0x38))(plVar3,lVar6);
    }
    pvVar7 = (void *)param_1[0x1ee];
    param_1[0x1ee] = 0;
    if (pvVar7 != (void *)0x0) {
      lVar4 = *(long *)((long)pvVar7 + 0x130);
      if (lVar4 != 0) {
        plVar3 = (long *)FUN_038cb610(*(undefined8 *)PTR_DAT_04bb2698,lVar4);
        (**(code **)(*plVar3 + 0x38))(plVar3,lVar4);
      }
      FUN_003490c0(pvVar7);
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
  FUN_032d1710(param_1);
  return;
}

