
void FUN_001a7df0(long *param_1,undefined8 param_2,long param_3,undefined4 param_4,long param_5,
                 long param_6,long param_7,long param_8,undefined4 param_9,byte param_10)

{
  long *plVar1;
  undefined *puVar2;
  undefined *puVar3;
  int *piVar4;
  int iVar5;
  char cVar6;
  bool bVar7;
  int iVar8;
  long *plVar9;
  long *plVar10;
  long lVar11;
  long lVar12;
  undefined *local_88;
  undefined *puStack_80;
  undefined8 local_78;
  undefined8 *puStack_70;
  undefined4 local_64;
  
  FUN_0019a2a8(param_1,param_2,&local_88);
  *param_1 = (long)(PTR_DAT_04bcc350 + 0x10);
  FUN_001a14b8(param_1 + 0x14,param_3 + 0x10,"JobConnectEndPoint");
  param_1[0x18] = 0;
  FUN_0018aa4c();
  param_1[0x1c] = param_3;
  param_1[0x1d] = 0;
  plVar1 = param_1 + 0x1f;
  *(undefined4 *)(param_1 + 0x1e) = param_9;
  param_1[0x21] = 0;
  *(undefined4 *)(param_1 + 0x22) = 0;
  puVar2 = PTR_DAT_04bcbc48 + 0x10;
  param_1[0x1f] = (long)plVar1;
  param_1[0x20] = (long)plVar1;
  param_1[0x23] = (long)puVar2;
  *(undefined4 *)(param_1 + 0x24) = 1;
  *(undefined1 *)((long)param_1 + 0x124) = 0;
  puVar3 = PTR_DAT_04bcc068 + 0x10;
  param_1[0x25] = 0;
  *(undefined4 *)(param_1 + 0x26) = 0;
  param_1[0x2d] = 0;
  local_88._0_4_ = 0x80010001;
  param_1[0x23] = (long)puVar3;
  param_1[0x27] = (long)(param_1 + 0x27);
  param_1[0x28] = (long)(param_1 + 0x27);
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  FUN_0018aa70(param_1 + 0x2e,&local_88);
  param_1[0x31] = 0;
  *(undefined4 *)(param_1 + 0x32) = 0;
  param_1[0x35] = (long)puVar2;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  *(undefined4 *)(param_1 + 0x36) = 1;
  *(undefined1 *)((long)param_1 + 0x1b4) = 0;
  param_1[0x35] = (long)puVar3;
  param_1[0x37] = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  param_1[0x3f] = 0;
  local_88 = (undefined *)CONCAT44(local_88._4_4_,0x80010001);
  param_1[0x39] = (long)(param_1 + 0x39);
  param_1[0x3a] = (long)(param_1 + 0x39);
  param_1[0x3b] = 0;
  param_1[0x3c] = 0;
  param_1[0x3d] = 0;
  param_1[0x3e] = 0;
  FUN_0018aa70(param_1 + 0x40,&local_88);
  param_1[0x48] = param_5;
  plVar10 = param_1 + 0x4c;
  param_1[0x43] = 0;
  *(undefined4 *)(param_1 + 0x44) = 0;
  param_1[0x45] = 0;
  param_1[0x46] = 0;
  *(undefined4 *)(param_1 + 0x47) = param_4;
  param_1[0x49] = param_6;
  param_1[0x4a] = param_8;
  param_1[0x4b] = 0;
  param_1[0x4c] = (long)plVar10;
  param_1[0x4d] = (long)plVar10;
  param_1[0x4e] = 0;
  for (lVar12 = *(long *)(param_7 + 8); lVar12 != param_7; lVar12 = *(long *)(lVar12 + 8)) {
    plVar9 = (long *)FUN_00187df4(0x80);
    *plVar9 = 0;
    FUN_001b8358(plVar9 + 2,lVar12 + 0x10);
    plVar9[1] = (long)plVar10;
    lVar11 = param_1[0x4c];
    *plVar9 = lVar11;
    *(long **)(lVar11 + 8) = plVar9;
    param_1[0x4c] = (long)plVar9;
    param_1[0x4e] = param_1[0x4e] + 1;
  }
  *(undefined1 *)(param_1 + 0x4f) = 0;
  FUN_001e1500(param_1 + 0x50);
  *(undefined2 *)(param_1 + 0x62) = 0;
  param_1[99] = (long)plVar10;
  *(undefined1 *)((long)param_1 + 0x321) = 0;
  param_1[0x65] = 0;
  param_1[0x66] = 0;
  param_1[0x67] = 0;
  param_1[0x68] = 0;
  param_1[0x69] = 0;
  param_1[0x13] = 0x4000;
  *(byte *)(param_1 + 100) = param_10 & 1;
  if (param_1[0x48] != 0) {
    piVar4 = (int *)(param_1[0x48] + 8);
    iVar8 = *piVar4;
    if (iVar8 != *piVar4) {
      ClearExclusiveLocal();
LAB_001a8090:
      do {
        iVar5 = *piVar4;
        if (iVar5 == iVar8) {
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(piVar4,0x10);
          if (bVar7) {
            *piVar4 = iVar8 + 1;
            cVar6 = ExclusiveMonitorsStatus();
          }
          if (cVar6 == '\0') goto LAB_001a8044;
        }
        else {
          ClearExclusiveLocal();
        }
        iVar8 = iVar5;
      } while( true );
    }
    cVar6 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(piVar4,0x10);
    if (bVar7) {
      *piVar4 = *piVar4 + 1;
      cVar6 = ExclusiveMonitorsStatus();
    }
    if (cVar6 != '\0') goto LAB_001a8090;
  }
LAB_001a8044:
  if (param_1[0x49] == 0) {
LAB_001a80c4:
    local_64 = 0x10001;
    FUN_0018aa70(&local_88,&local_64);
    FUN_0018ab44(param_1 + 0x19,&local_88);
    puVar2 = PTR_DAT_04bcc0c0;
    lVar12 = param_1[0x1c];
    if (*(char *)(lVar12 + 0x128) != '\0') {
      plVar10 = (long *)FUN_00187df4(0x30);
      puVar3 = PTR_FUN_04bcc358;
      plVar10[4] = 0;
      plVar10[5] = (long)&DAT_0407ebb1;
      *plVar10 = 0;
      plVar10[1] = (long)plVar1;
      plVar10[2] = (long)(puVar2 + 0x10);
      plVar10[3] = (long)puVar3;
      lVar12 = param_1[0x1f];
      *plVar10 = lVar12;
      *(long **)(lVar12 + 8) = plVar10;
      param_1[0x1f] = (long)plVar10;
      param_1[0x21] = param_1[0x21] + 1;
      lVar12 = param_1[0x1c];
    }
    if ((*(char *)(lVar12 + 0x129) != '\0') &&
       ((iVar8 = FUN_001e1884(lVar12 + 0x58), iVar8 != 0 ||
        (*(char *)(param_1[0x1c] + 0x128) == '\0')))) {
      plVar10 = (long *)FUN_00187df4(0x30);
      puVar3 = PTR_FUN_04bcc360;
      plVar10[4] = 0;
      plVar10[5] = (long)&DAT_0407ebb1;
      *plVar10 = 0;
      plVar10[1] = (long)plVar1;
      plVar10[2] = (long)(puVar2 + 0x10);
      plVar10[3] = (long)puVar3;
      lVar12 = param_1[0x1f];
      *plVar10 = lVar12;
      *(long **)(lVar12 + 8) = plVar10;
      param_1[0x1f] = (long)plVar10;
      param_1[0x21] = param_1[0x21] + 1;
    }
    if (param_1[0x4e] == 0) {
      puStack_80 = PTR_FUN_04bcc370;
    }
    else {
      puStack_80 = PTR_LAB_04bcc368;
    }
    local_88 = puVar2 + 0x10;
    local_78 = 0;
    puStack_70 = &DAT_0407ebb1;
    FUN_0019a704(param_1,&local_88);
    return;
  }
  piVar4 = (int *)(param_1[0x49] + 8);
  iVar8 = *piVar4;
  if (iVar8 == *piVar4) {
    cVar6 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(piVar4,0x10);
    if (bVar7) {
      *piVar4 = *piVar4 + 1;
      cVar6 = ExclusiveMonitorsStatus();
    }
    if (cVar6 == '\0') goto LAB_001a80c4;
  }
  else {
    ClearExclusiveLocal();
  }
  do {
    iVar5 = *piVar4;
    if (iVar5 == iVar8) {
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(piVar4,0x10);
      if (bVar7) {
        *piVar4 = iVar8 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
      if (cVar6 == '\0') goto LAB_001a80c4;
    }
    else {
      ClearExclusiveLocal();
    }
    iVar8 = iVar5;
  } while( true );
}

