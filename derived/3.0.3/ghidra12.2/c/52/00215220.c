
void FUN_00215220(long *param_1)

{
  long *plVar1;
  undefined *puVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long *plVar6;
  int iVar7;
  int iVar8;
  undefined **local_b0;
  undefined4 local_a8;
  undefined1 local_a4;
  undefined8 local_a0;
  undefined4 local_98;
  undefined8 ****local_90;
  undefined8 ****ppppuStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined1 auStack_58 [24];
  undefined8 local_40;
  undefined4 local_38;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined4 local_14;
  
  *param_1 = (long)(PTR_DAT_04bcce20 + 0x10);
  if (param_1[0x18] != 0) {
    local_a8 = 1;
    local_a4 = 0;
    local_a0 = 0;
    local_98 = 0;
    local_80 = 0;
    uStack_78 = 0;
    local_60 = 0;
    local_70 = 0;
    uStack_68 = 0;
    local_b0 = &PTR_FUN_04839418;
    local_90 = &local_90;
    local_14 = 0x80010001;
    ppppuStack_88 = local_90;
    FUN_0018aa70(auStack_58,&local_14);
    local_40 = 0;
    local_38 = 0;
    local_30 = 0;
    uStack_28 = 0;
    FUN_00207ce8(param_1,&local_b0);
    FUN_00198c50(&local_b0,0xffffffff);
    FUN_001976b0(&local_b0);
  }
  plVar6 = (long *)param_1[0x54];
  param_1[0x54] = 0;
  if (plVar6 != (long *)0x0) {
    (**(code **)(*plVar6 + 8))();
  }
  plVar6 = (long *)param_1[0x3f];
  if (plVar6 != (long *)0x0) {
    if ((int)plVar6[8] != 5) {
      FUN_00194970();
      plVar6 = (long *)param_1[0x3f];
    }
    plVar1 = plVar6 + 1;
    iVar8 = (int)*plVar1;
    iVar7 = (int)*plVar1 + -1;
    if (iVar8 != (int)*plVar1) {
      ClearExclusiveLocal();
LAB_002153c4:
      do {
        lVar5 = *plVar1;
        iVar7 = iVar8 + -1;
        if ((int)lVar5 == iVar8) {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar4) {
            *(int *)plVar1 = iVar7;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') goto LAB_00215348;
        }
        else {
          ClearExclusiveLocal();
        }
        iVar8 = (int)lVar5;
      } while( true );
    }
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *(int *)plVar1 = iVar7;
      cVar3 = ExclusiveMonitorsStatus();
    }
    if (cVar3 != '\0') goto LAB_002153c4;
LAB_00215348:
    if ((iVar7 == 0) && (*(char *)((long)plVar6 + 0xc) == '\0')) {
      *(undefined1 *)((long)plVar6 + 0xc) = 1;
      (**(code **)(*plVar6 + 8))();
    }
    param_1[0x3f] = 0;
  }
  plVar6 = (long *)param_1[0x40];
  if (plVar6 == (long *)0x0) {
LAB_0021541c:
    if ((long *)param_1[0x41] != (long *)0x0) {
      (**(code **)(*(long *)param_1[0x41] + 8))();
    }
    if ((long *)param_1[0x54] != (long *)0x0) {
      (**(code **)(*(long *)param_1[0x54] + 8))();
    }
    puVar2 = PTR_DAT_04bc0ec8 + 0x10;
    param_1[0x4e] = (long)puVar2;
    FUN_0018b1a0(param_1 + 0x4e);
    param_1[0x48] = (long)puVar2;
    FUN_0018b1a0(param_1 + 0x48);
    FUN_00207840(param_1);
    return;
  }
  if ((int)plVar6[8] != 5) {
    FUN_00194970();
    plVar6 = (long *)param_1[0x40];
  }
  plVar1 = plVar6 + 1;
  iVar8 = (int)*plVar1;
  iVar7 = (int)*plVar1 + -1;
  if (iVar8 == (int)*plVar1) {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *(int *)plVar1 = iVar7;
      cVar3 = ExclusiveMonitorsStatus();
    }
    if (cVar3 == '\0') {
LAB_002153f8:
      if ((iVar7 == 0) && (*(char *)((long)plVar6 + 0xc) == '\0')) {
        *(undefined1 *)((long)plVar6 + 0xc) = 1;
        (**(code **)(*plVar6 + 8))();
      }
      param_1[0x40] = 0;
      goto LAB_0021541c;
    }
  }
  else {
    ClearExclusiveLocal();
  }
  do {
    lVar5 = *plVar1;
    iVar7 = iVar8 + -1;
    if ((int)lVar5 == iVar8) {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = iVar7;
        cVar3 = ExclusiveMonitorsStatus();
      }
      if (cVar3 == '\0') goto LAB_002153f8;
    }
    else {
      ClearExclusiveLocal();
    }
    iVar8 = (int)lVar5;
  } while( true );
}

