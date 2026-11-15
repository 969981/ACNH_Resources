
void FUN_0229aeb8(long param_1,undefined8 param_2,long *param_3)

{
  undefined *puVar1;
  int iVar2;
  undefined8 *puVar3;
  int iVar4;
  undefined4 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  bool bVar8;
  bool bVar9;
  long lVar10;
  long *plVar11;
  char *__src;
  int iVar12;
  long lVar13;
  char *pcVar14;
  
  pcVar14 = *(char **)(param_1 + 0x370);
  if (*(int *)(PTR_DAT_04bc3a80 + 0x38) == 0x3ee08254) {
    if (pcVar14 !=
        "IdrObjWherearenOfficeAmiibo/ObjectWherearenAmiiboDevice/OffKeep/Obj_HotelAmiiboDevice/Root"
       ) {
      iVar4 = *(int *)(param_1 + 0x378);
      __src = 
      "IdrObjWherearenOfficeAmiibo/ObjectWherearenAmiiboDevice/OffKeep/Obj_HotelAmiiboDevice/Root";
      bVar8 = SBORROW4(iVar4,0x5a);
      iVar2 = iVar4 + -0x5a;
      bVar9 = iVar4 == 0x5a;
      iVar12 = 0x5a;
      goto LAB_0229af50;
    }
  }
  else if (pcVar14 !=
           "IdrObjWherearenOfficeAmiibo/ObjectWherearenAmiiboDevice/OffKeep/Obj_WherearenAmiiboDevice/Root"
          ) {
    iVar4 = *(int *)(param_1 + 0x378);
    __src = 
    "IdrObjWherearenOfficeAmiibo/ObjectWherearenAmiiboDevice/OffKeep/Obj_WherearenAmiiboDevice/Root"
    ;
    bVar8 = SBORROW4(iVar4,0x5e);
    iVar2 = iVar4 + -0x5e;
    bVar9 = iVar4 == 0x5e;
    iVar12 = 0x5e;
LAB_0229af50:
    if (bVar9 || iVar2 < 0 != bVar8) {
      iVar12 = iVar4 + -1;
    }
    memcpy(pcVar14,__src,(long)iVar12);
    pcVar14[iVar12] = '\0';
  }
  FUN_022978d0(param_1,param_2,param_3);
  puVar1 = PTR_DAT_04bb2698;
  lVar13 = *(long *)PTR_DAT_04bb2698;
  if (lVar13 == 0) {
    plVar11 = malloc(0x290);
  }
  else {
    plVar11 = param_3;
    if (param_3 == (long *)0x0) {
      lVar10 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar11 = (long *)(lVar13 + 8);
      if (lVar10 != 0) {
        plVar11 = (long *)(lVar10 + 0xa8);
      }
      plVar11 = (long *)*plVar11;
      if (plVar11 == (long *)0x0) {
        plVar11 = (long *)0x0;
        goto LAB_0229afe0;
      }
    }
    plVar11 = (long *)(**(code **)(*plVar11 + 0x30))(plVar11,0x290,8);
  }
LAB_0229afe0:
  FUN_00705c50(plVar11);
  puVar6 = PTR_DAT_04bb2e68;
  plVar11[0x4f] = 0;
  plVar11[0x50] = 0;
  *(undefined4 *)(plVar11 + 0x51) = 0;
  *plVar11 = (long)(puVar6 + 0x10);
  *(uint *)(plVar11 + 0x4c) = *(uint *)(plVar11 + 0x4c) & 0xfffffff0 | 4;
  FUN_006f9fc0(param_1,plVar11,0xffffffff);
  lVar13 = *(long *)puVar1;
  if (lVar13 == 0) {
    plVar11 = malloc(0x2f0);
  }
  else {
    plVar11 = param_3;
    if (param_3 == (long *)0x0) {
      lVar10 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar11 = (long *)(lVar13 + 8);
      if (lVar10 != 0) {
        plVar11 = (long *)(lVar10 + 0xa8);
      }
      plVar11 = (long *)*plVar11;
      if (plVar11 == (long *)0x0) {
        plVar11 = (long *)0x0;
        goto LAB_0229b084;
      }
    }
    plVar11 = (long *)(**(code **)(*plVar11 + 0x30))(plVar11,0x2f0,8);
  }
LAB_0229b084:
  FUN_00705c50(plVar11);
  plVar11[0x50] = 0;
  puVar6 = PTR_DAT_04bb3228;
  pcVar14 = (char *)plVar11[0xc];
  plVar11[0x51] = 0;
  plVar11[0x52] = 0;
  plVar11[0x53] = 0;
  plVar11[0x54] = 0;
  *(undefined4 *)(plVar11 + 0x4f) = 5;
  *(undefined1 *)(plVar11 + 0x55) = 0xff;
  plVar11[0x56] = 0;
  plVar11[0x57] = 0;
  *(undefined1 *)(plVar11 + 0x58) = 0xff;
  *(undefined4 *)(plVar11 + 0x59) = 0;
  plVar11[0x5a] = 0;
  *plVar11 = (long)(puVar6 + 0x10);
  *(undefined4 *)(plVar11 + 0x5b) = 0;
  plVar11[0x5c] = 0;
  *(undefined1 *)(plVar11 + 0x5d) = 0;
  *(uint *)(plVar11 + 0x4c) = *(uint *)(plVar11 + 0x4c) & 0xfffffff0;
  if (pcVar14 != "EventFlowReceptor") {
    iVar2 = 0x11;
    if ((int)plVar11[0xd] < 0x12) {
      iVar2 = (int)plVar11[0xd] + -1;
    }
    memcpy(pcVar14,"EventFlowReceptor",(long)iVar2);
    pcVar14[iVar2] = '\0';
  }
  FUN_006f9fc0(param_1,plVar11,0xffffffff);
  lVar13 = *(long *)puVar1;
  if (lVar13 == 0) {
    plVar11 = malloc(0x2d8);
  }
  else {
    plVar11 = param_3;
    if (param_3 == (long *)0x0) {
      lVar10 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar11 = (long *)(lVar13 + 8);
      if (lVar10 != 0) {
        plVar11 = (long *)(lVar10 + 0xa8);
      }
      plVar11 = (long *)*plVar11;
      if (plVar11 == (long *)0x0) {
        plVar11 = (long *)0x0;
        goto LAB_0229b1a0;
      }
    }
    plVar11 = (long *)(**(code **)(*plVar11 + 0x30))(plVar11,0x2d8,8);
  }
LAB_0229b1a0:
  FUN_00705c50(plVar11);
  puVar6 = PTR_DAT_04bb39e0;
  *(undefined1 *)(plVar11 + 0x55) = 0;
  puVar7 = PTR_DAT_04bdf1d8;
  pcVar14 = (char *)plVar11[0xc];
  plVar11[0x56] = 0;
  plVar11[0x58] = 0;
  plVar11[0x59] = 0;
  plVar11[0x5a] = 0;
  *plVar11 = (long)(puVar6 + 0x10);
  plVar11[0x57] = (long)(puVar7 + 0x10);
  if (pcVar14 != "XLink") {
    iVar2 = 5;
    if ((int)plVar11[0xd] < 6) {
      iVar2 = (int)plVar11[0xd] + -1;
    }
    memcpy(pcVar14,"XLink",(long)iVar2);
    pcVar14[iVar2] = '\0';
  }
  FUN_006f9fc0(param_1,plVar11,0xffffffff);
  lVar13 = *(long *)puVar1;
  if (lVar13 == 0) {
    plVar11 = malloc(0x1c0);
  }
  else {
    if (param_3 == (long *)0x0) {
      lVar10 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      puVar3 = (undefined8 *)(lVar13 + 8);
      if (lVar10 != 0) {
        puVar3 = (undefined8 *)(lVar10 + 0xa8);
      }
      param_3 = (long *)*puVar3;
      if (param_3 == (long *)0x0) {
        plVar11 = (long *)0x0;
        goto LAB_0229b2a8;
      }
    }
    plVar11 = (long *)(**(code **)(*param_3 + 0x30))(param_3,0x1c0,8);
  }
LAB_0229b2a8:
  uVar5 = *(undefined4 *)(param_1 + 0x230);
  *(undefined1 *)((long)plVar11 + 0xc) = 0xff;
  *(undefined4 *)(plVar11 + 1) = uVar5;
  *plVar11 = (long)(PTR_DAT_04bc0c38 + 0x10);
  puVar6 = PTR_DAT_04bc0c58;
  puVar1 = PTR_DAT_04bb3950;
  plVar11[2] = 0;
  plVar11[3] = 0;
  plVar11[4] = 0;
  plVar11[5] = (long)(puVar6 + 0x10);
  plVar11[9] = (long)(puVar1 + 0x10);
  puVar1 = PTR_DAT_04bb2d80 + 0x10;
  plVar11[0xd] = (long)puVar1;
  puVar6 = PTR_DAT_04bbb898;
  plVar11[0x15] = (long)puVar1;
  plVar11[0x19] = (long)puVar1;
  plVar11[0x11] = (long)(puVar6 + 0x10);
  puVar1 = PTR_DAT_04bc0c68;
  plVar11[0x1d] = (long)(PTR_DAT_04bc0c60 + 0x10);
  plVar11[0x21] = (long)(puVar1 + 0x10);
  plVar11[0x25] = (long)(PTR_DAT_04bc0c70 + 0x10);
  puVar6 = PTR_DAT_04bc0c80;
  puVar1 = PTR_DAT_04bc0c78;
  *(undefined1 *)(plVar11 + 0x31) = 0;
  plVar11[0x34] = 0;
  plVar11[0x29] = (long)(puVar1 + 0x10);
  plVar11[0x2d] = (long)(puVar6 + 0x10);
  plVar11[0x32] = 0;
  plVar11[0x33] = (long)(puVar7 + 0x10);
  *(undefined4 *)((long)plVar11 + 0x1b7) = 0;
  plVar11[0x35] = 0;
  plVar11[0x36] = 0;
  *(long **)(param_1 + 0x5c0) = plVar11;
  *(long **)(*(long *)(param_1 + 0x98) + 0x290) = plVar11;
  return;
}

