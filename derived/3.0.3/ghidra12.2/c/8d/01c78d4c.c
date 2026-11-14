
void * FUN_01c78d4c(long param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  void *pvVar7;
  long extraout_x0;
  ulong uVar8;
  ushort uVar9;
  ushort uVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 *__ptr;
  char *__dest;
  undefined8 *puVar13;
  undefined1 auStack_b0 [16];
  undefined1 *local_a0;
  undefined8 uStack_98;
  undefined *local_50;
  undefined8 uStack_48;
  
  puVar3 = PTR_DAT_04bb2720;
  puVar2 = PTR_DAT_04bb2698;
  if ((*(long *)PTR_DAT_04bb2720 == 0) ||
     (lVar11 = *(long *)(*(long *)PTR_DAT_04bb2720 + 0x330), lVar11 == 0)) {
    plVar4 = (long *)0x0;
  }
  else {
    plVar4 = *(long **)(lVar11 + 0xd0);
  }
  puVar13 = *(undefined8 **)(param_1 + 0x20);
  lVar11 = *(long *)PTR_DAT_04bb2698;
  if (lVar11 == 0) {
    plVar4 = malloc(0x7a0);
  }
  else {
    if (plVar4 == (long *)0x0) {
      lVar5 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar4 = (long *)(lVar11 + 8);
      if (lVar5 != 0) {
        plVar4 = (long *)(lVar5 + 0xa8);
      }
      plVar4 = (long *)*plVar4;
      if (plVar4 == (long *)0x0) {
        plVar4 = (long *)0x0;
        lVar11 = *(long *)puVar3;
        goto joined_r0x01c78df8;
      }
    }
    plVar4 = (long *)(**(code **)(*plVar4 + 0x30))(plVar4,0x7a0,8);
  }
  lVar11 = *(long *)puVar3;
joined_r0x01c78df8:
  if ((lVar11 == 0) || (*(long *)(lVar11 + 0x330) == 0)) {
    uVar12 = 0;
  }
  else {
    uVar12 = *(undefined8 *)(*(long *)(lVar11 + 0x330) + 0xd0);
  }
  *plVar4 = 0;
  *(undefined2 *)(plVar4 + 1) = 0;
  *(undefined8 *)((long)plVar4 + 0x104) = 0;
  *(undefined8 *)((long)plVar4 + 0x26c) = 0;
  *(undefined8 *)((long)plVar4 + 0x264) = 0;
  *(undefined8 *)((long)plVar4 + 0x25c) = 0;
  *(undefined8 *)((long)plVar4 + 0x254) = 0;
  *(undefined8 *)((long)plVar4 + 0x24c) = 0;
  *(undefined8 *)((long)plVar4 + 0x244) = 0;
  *(undefined8 *)((long)plVar4 + 0x23c) = 0;
  *(undefined8 *)((long)plVar4 + 0x234) = 0;
  *(undefined8 *)((long)plVar4 + 0x22c) = 0;
  *(undefined8 *)((long)plVar4 + 0x224) = 0;
  *(undefined8 *)((long)plVar4 + 0x21c) = 0;
  *(undefined8 *)((long)plVar4 + 0x214) = 0;
  *(undefined8 *)((long)plVar4 + 0x20c) = 0;
  *(undefined8 *)((long)plVar4 + 0x204) = 0;
  *(undefined8 *)((long)plVar4 + 0x1fc) = 0;
  *(undefined8 *)((long)plVar4 + 500) = 0;
  *(undefined8 *)((long)plVar4 + 0x1ec) = 0;
  *(undefined8 *)((long)plVar4 + 0x1e4) = 0;
  *(undefined8 *)((long)plVar4 + 0x1dc) = 0;
  *(undefined8 *)((long)plVar4 + 0x1d4) = 0;
  plVar4[0xb] = 0;
  *(undefined1 *)(plVar4 + 0xc) = 0;
  *(undefined8 *)((long)plVar4 + 0x1cc) = 0;
  *(undefined8 *)((long)plVar4 + 0x299) = 0;
  *(undefined8 *)((long)plVar4 + 0x274) = 0;
  *(undefined8 *)((long)plVar4 + 0x6c) = 0;
  *(undefined8 *)((long)plVar4 + 100) = 0;
  *(undefined8 *)((long)plVar4 + 0x74) = 0;
  *(undefined8 *)((long)plVar4 + 0x7c) = 0;
  *(undefined8 *)((long)plVar4 + 0x84) = 0;
  *(undefined8 *)((long)plVar4 + 0x8c) = 0;
  *(undefined8 *)((long)plVar4 + 0x94) = 0;
  *(undefined8 *)((long)plVar4 + 0x9c) = 0;
  *(undefined8 *)((long)plVar4 + 0xa4) = 0;
  *(undefined8 *)((long)plVar4 + 0xac) = 0;
  *(undefined8 *)((long)plVar4 + 0xb4) = 0;
  *(undefined8 *)((long)plVar4 + 0xbc) = 0;
  *(undefined8 *)((long)plVar4 + 0xc4) = 0;
  *(undefined8 *)((long)plVar4 + 0xcc) = 0;
  *(undefined8 *)((long)plVar4 + 0xd4) = 0;
  *(undefined8 *)((long)plVar4 + 0xdc) = 0;
  *(undefined8 *)((long)plVar4 + 0xe4) = 0;
  *(undefined8 *)((long)plVar4 + 0xec) = 0;
  *(undefined8 *)((long)plVar4 + 0xf4) = 0;
  *(undefined8 *)((long)plVar4 + 0xfc) = 0;
  *(undefined8 *)((long)plVar4 + 300) = 0;
  *(undefined8 *)((long)plVar4 + 0x131) = 0;
  plVar4[0x28] = 0;
  *(undefined1 *)(plVar4 + 0x29) = 0;
  *(undefined1 *)(plVar4 + 4) = 0;
  *(undefined4 *)(plVar4 + 0x2a) = 3;
  plVar4[0x2b] = 0;
  *(undefined2 *)(plVar4 + 0x2d) = 0;
  *(undefined2 *)(plVar4 + 0x2e) = 0;
  plVar4[0x38] = 0;
  *(undefined1 *)(plVar4 + 0x39) = 0;
  plVar4[0x55] = 0;
  *(undefined1 *)(plVar4 + 0x56) = 0;
  *(undefined1 *)(plVar4 + 0x31) = 0;
  *(undefined4 *)(plVar4 + 0x57) = 3;
  plVar4[0x58] = 0;
  *(undefined2 *)(plVar4 + 0x5a) = 0;
  *(undefined2 *)(plVar4 + 0x5b) = 0;
  plVar4[0x5f] = 0;
  plVar4[0x60] = 0;
  plVar4[0x61] = 0;
  plVar4[0x62] = 0;
  plVar4[99] = 0;
  plVar4[100] = 0;
  plVar4[0x65] = 0;
  *(undefined1 *)(plVar4 + 0x66) = 0;
  plVar4[0x82] = 0;
  *(undefined1 *)(plVar4 + 0x83) = 0;
  plVar4[0x5c] = 0;
  plVar4[0x5d] = 0;
  *(undefined1 *)(plVar4 + 0x5e) = 0;
  *(undefined4 *)(plVar4 + 0x84) = 3;
  plVar4[0x85] = 0;
  *(undefined2 *)(plVar4 + 0x87) = 0;
  *(undefined2 *)(plVar4 + 0x88) = 0;
  plVar4[0x8c] = 0;
  plVar4[0x8d] = 0;
  plVar4[0x8e] = 0;
  plVar4[0x8f] = 0;
  plVar4[0x90] = 0;
  plVar4[0x91] = 0;
  plVar4[0x92] = 0;
  *(undefined1 *)(plVar4 + 0x93) = 0;
  plVar4[0xaf] = 0;
  *(undefined1 *)(plVar4 + 0xb0) = 0;
  plVar4[0x89] = 0;
  plVar4[0x8a] = 0;
  *(undefined1 *)(plVar4 + 0x8b) = 0;
  *(undefined4 *)(plVar4 + 0xb1) = 3;
  plVar4[0xb2] = 0;
  *(undefined2 *)(plVar4 + 0xb4) = 0;
  *(undefined8 *)((long)plVar4 + 0x28c) = 0;
  *(undefined8 *)((long)plVar4 + 0x294) = 0;
  *(undefined8 *)((long)plVar4 + 0x27c) = 0;
  *(undefined8 *)((long)plVar4 + 0x284) = 0;
  *(undefined8 *)((long)plVar4 + 0x3d4) = 0;
  *(undefined8 *)((long)plVar4 + 0x3cc) = 0;
  *(undefined8 *)((long)plVar4 + 0x3c4) = 0;
  *(undefined8 *)((long)plVar4 + 0x3bc) = 0;
  *(undefined8 *)((long)plVar4 + 0x3b4) = 0;
  *(undefined8 *)((long)plVar4 + 0x3ac) = 0;
  *(undefined8 *)((long)plVar4 + 0x3a4) = 0;
  *(undefined8 *)((long)plVar4 + 0x39c) = 0;
  *(undefined8 *)((long)plVar4 + 0x394) = 0;
  *(undefined8 *)((long)plVar4 + 0x38c) = 0;
  *(undefined8 *)((long)plVar4 + 900) = 0;
  *(undefined8 *)((long)plVar4 + 0x37c) = 0;
  *(undefined8 *)((long)plVar4 + 0x374) = 0;
  *(undefined8 *)((long)plVar4 + 0x36c) = 0;
  *(undefined8 *)((long)plVar4 + 0x364) = 0;
  *(undefined8 *)((long)plVar4 + 0x35c) = 0;
  *(undefined8 *)((long)plVar4 + 0x354) = 0;
  *(undefined8 *)((long)plVar4 + 0x34c) = 0;
  *(undefined8 *)((long)plVar4 + 0x344) = 0;
  *(undefined8 *)((long)plVar4 + 0x33c) = 0;
  *(undefined8 *)((long)plVar4 + 0x334) = 0;
  *(undefined8 *)((long)plVar4 + 0x401) = 0;
  *(undefined8 *)((long)plVar4 + 0x3dc) = 0;
  *(undefined8 *)((long)plVar4 + 0x3f4) = 0;
  *(undefined8 *)((long)plVar4 + 0x3fc) = 0;
  *(undefined8 *)((long)plVar4 + 0x3e4) = 0;
  *(undefined8 *)((long)plVar4 + 0x3ec) = 0;
  *(undefined8 *)((long)plVar4 + 0x53c) = 0;
  *(undefined8 *)((long)plVar4 + 0x534) = 0;
  *(undefined8 *)((long)plVar4 + 0x52c) = 0;
  *(undefined8 *)((long)plVar4 + 0x524) = 0;
  *(undefined8 *)((long)plVar4 + 0x51c) = 0;
  *(undefined8 *)((long)plVar4 + 0x514) = 0;
  *(undefined8 *)((long)plVar4 + 0x50c) = 0;
  *(undefined8 *)((long)plVar4 + 0x504) = 0;
  *(undefined8 *)((long)plVar4 + 0x4fc) = 0;
  *(undefined8 *)((long)plVar4 + 0x4f4) = 0;
  *(undefined8 *)((long)plVar4 + 0x4ec) = 0;
  *(undefined8 *)((long)plVar4 + 0x4e4) = 0;
  *(undefined8 *)((long)plVar4 + 0x4dc) = 0;
  *(undefined8 *)((long)plVar4 + 0x4d4) = 0;
  *(undefined8 *)((long)plVar4 + 0x4cc) = 0;
  *(undefined8 *)((long)plVar4 + 0x4c4) = 0;
  *(undefined8 *)((long)plVar4 + 0x4bc) = 0;
  *(undefined8 *)((long)plVar4 + 0x4b4) = 0;
  *(undefined8 *)((long)plVar4 + 0x4ac) = 0;
  *(undefined8 *)((long)plVar4 + 0x4a4) = 0;
  *(undefined8 *)((long)plVar4 + 0x49c) = 0;
  *(undefined8 *)((long)plVar4 + 0x569) = 0;
  *(undefined8 *)((long)plVar4 + 0x544) = 0;
  plVar4[5] = 0;
  plVar4[6] = 0;
  plVar4[7] = 0;
  plVar4[8] = 0;
  plVar4[9] = 0;
  plVar4[10] = 0;
  *(undefined8 *)((long)plVar4 + 0x10c) = 0;
  *(undefined8 *)((long)plVar4 + 0x114) = 0;
  *(undefined8 *)((long)plVar4 + 0x11c) = 0;
  *(undefined8 *)((long)plVar4 + 0x124) = 0;
  plVar4[2] = 0;
  plVar4[3] = 0;
  plVar4[0x32] = 0;
  plVar4[0x33] = 0;
  plVar4[0x34] = 0;
  plVar4[0x35] = 0;
  plVar4[0x36] = 0;
  plVar4[0x37] = 0;
  plVar4[0x2f] = 0;
  plVar4[0x30] = 0;
  *(undefined8 *)((long)plVar4 + 0x55c) = 0;
  *(undefined8 *)((long)plVar4 + 0x564) = 0;
  *(undefined8 *)((long)plVar4 + 0x54c) = 0;
  *(undefined8 *)((long)plVar4 + 0x554) = 0;
  FUN_03463544(plVar4 + 0xb5,0);
  *(undefined1 *)(plVar4 + 0xf2) = 0;
  plVar4[0xf1] = 0;
  plVar4[0xf0] = 0;
  plVar4[0xef] = 0;
  plVar4[0xee] = 0;
  plVar4[0xed] = 0;
  plVar4[0xec] = 0;
  plVar4[0xeb] = 0;
  plVar4[0xea] = 0;
  plVar4[0xe9] = 0;
  plVar4[0xe8] = 0;
  plVar4[0xe7] = 0;
  plVar4[0xe6] = 0;
  plVar4[0xe5] = 0;
  plVar4[0xe4] = 0;
  plVar4[0xe3] = 0;
  plVar4[0xe2] = 0;
  plVar4[0xe1] = 0;
  plVar4[0xe0] = 0;
  plVar4[0xdf] = 0;
  plVar4[0xde] = 0;
  local_50 = PTR_DAT_04bb2020 + 0x10;
  *(undefined1 *)(plVar4 + 0xf3) = 0;
  uStack_48 = "NetCloudIslandPreview:Stage";
  plVar6 = (long *)FUN_038c6d48(&LAB_00500000,&local_50,uVar12,8,1,0);
  *plVar4 = (long)plVar6;
  pvVar7 = (void *)0x0;
  if (plVar6 != (long *)0x0) {
    *(undefined4 *)((long)plVar4 + 0xc) = 0;
    lVar11 = (**(code **)(*plVar6 + 0x30))(plVar6,0x19000,8);
    plVar4[2] = lVar11;
    *(undefined4 *)((long)plVar4 + 0x174) = 1;
    lVar11 = (**(code **)(*(long *)*plVar4 + 0x30))((long *)*plVar4,0x19000,8);
    plVar4[0x2f] = lVar11;
    *(undefined4 *)((long)plVar4 + 0x2dc) = 2;
    lVar11 = (**(code **)(*(long *)*plVar4 + 0x30))((long *)*plVar4,0x19000,8);
    plVar4[0x5c] = lVar11;
    *(undefined4 *)((long)plVar4 + 0x444) = 3;
    pvVar7 = (void *)(**(code **)(*(long *)*plVar4 + 0x30))((long *)*plVar4,0x19000,8);
    plVar4[0x89] = (long)pvVar7;
  }
  if (*plVar4 != 0) {
    __ptr = (undefined8 *)*puVar13;
    *puVar13 = plVar4;
    if (__ptr != (undefined8 *)0x0) {
      plVar4 = (long *)*__ptr;
      FUN_01c789bc(__ptr);
      if (*(long *)puVar2 == 0) {
        free(__ptr);
      }
      else {
        plVar6 = (long *)FUN_038cb610(*(long *)puVar2,__ptr);
        if (plVar6 != (long *)0x0) {
          (**(code **)(*plVar6 + 0x38))(plVar6,__ptr);
        }
      }
      pvVar7 = (void *)(**(code **)(*plVar4 + 0x20))(plVar4);
      plVar4 = (long *)*puVar13;
    }
    __dest = (char *)plVar4[0xc1];
    if (__dest != "Layout_CloudIslandSave_CloudIslandSaveBg") {
      iVar1 = 0x28;
      if ((int)plVar4[0xc2] < 0x29) {
        iVar1 = (int)plVar4[0xc2] + -1;
      }
      pvVar7 = memcpy(__dest,"Layout_CloudIslandSave_CloudIslandSaveBg",(long)iVar1);
      __dest[iVar1] = '\0';
    }
    *(undefined1 *)(plVar4 + 0xd3) = 1;
    *(undefined4 *)((long)plVar4 + 0x69c) = 2;
    return pvVar7;
  }
  FUN_01c789bc(plVar4);
  operator_delete(plVar4);
  uStack_98 = 0x1c792c4;
  plVar4 = *(long **)(extraout_x0 + 0x20);
  lVar11 = *plVar4;
  if (lVar11 != 0) {
    local_a0 = auStack_b0 + 0x70;
    FUN_03ebb268(lVar11 + 0x6a0);
    if (*(int *)(lVar11 + 0x6e8) != -1) {
      FUN_03ebb160(lVar11 + 0x6a0);
      *(undefined4 *)(lVar11 + 0x6e8) = 0xffffffff;
    }
    lVar11 = *plVar4;
    if ((*(byte *)(lVar11 + 0x5c0) >> 1 & 1) == 0) {
      return (void *)0x0;
    }
    if (*(int *)(lVar11 + 0x6a8) == 1) {
      return (void *)0x0;
    }
    uVar8 = FUN_00817520(lVar11 + 0x5a8);
    if ((uVar8 & 1) == 0) {
      return (void *)0x0;
    }
    lVar11 = *plVar4;
    if (*(char *)(lVar11 + 0x790) != '\0') {
      FUN_038fd0e0(lVar11 + 0x740);
    }
    *(undefined8 *)(lVar11 + 0x730) = 0;
    *(undefined8 *)(lVar11 + 0x738) = 0;
    *(undefined4 *)(lVar11 + 0x740) = 0xffffffff;
    *(undefined8 *)(lVar11 + 0x748) = 0;
    *(undefined8 *)(lVar11 + 0x720) = 0;
    *(undefined8 *)(lVar11 + 0x728) = 0;
    *(undefined8 *)(lVar11 + 0x750) = 0;
    *(undefined8 *)(lVar11 + 0x758) = 0;
    *(undefined8 *)(lVar11 + 0x760) = 0;
    *(undefined8 *)(lVar11 + 0x768) = 0;
    *(undefined8 *)(lVar11 + 0x770) = 0;
    *(undefined8 *)(lVar11 + 0x778) = 0;
    *(char **)(lVar11 + 0x780) = "agl::TextureData";
    *(undefined4 *)(lVar11 + 0x788) = 0x10000;
    *(undefined1 *)(lVar11 + 0x790) = 1;
    *(undefined8 *)(lVar11 + 0x710) = 0;
    *(undefined8 *)(lVar11 + 0x718) = 0;
    *(undefined8 *)(lVar11 + 0x700) = 0;
    *(undefined8 *)(lVar11 + 0x708) = 0;
    *(undefined8 *)(lVar11 + 0x6f0) = 0;
    *(undefined8 *)(lVar11 + 0x6f8) = 0;
    FUN_03463bdc(lVar11 + 0x5a8,auStack_b0,(undefined8 *)(lVar11 + 0x6f0));
    lVar11 = *plVar4;
    if (*(char *)(lVar11 + 0x790) == '\0') {
      *(undefined4 *)(lVar11 + 0x788) = 0x10000;
      *(undefined8 *)(lVar11 + 0x738) = 0;
      *(undefined8 *)(lVar11 + 0x730) = 0;
      *(undefined8 *)(lVar11 + 0x728) = 0;
      *(undefined8 *)(lVar11 + 0x720) = 0;
      *(undefined8 *)(lVar11 + 0x718) = 0;
      *(undefined8 *)(lVar11 + 0x710) = 0;
      *(undefined8 *)(lVar11 + 0x708) = 0;
      *(undefined8 *)(lVar11 + 0x700) = 0;
      *(undefined8 *)(lVar11 + 0x6f8) = 0;
      *(undefined8 *)(lVar11 + 0x6f0) = 0;
      *(undefined4 *)(lVar11 + 0x740) = 0xffffffff;
      *(undefined8 *)(lVar11 + 0x748) = 0;
      *(undefined8 *)(lVar11 + 0x750) = 0;
      *(undefined8 *)(lVar11 + 0x758) = 0;
      *(undefined8 *)(lVar11 + 0x760) = 0;
      *(undefined8 *)(lVar11 + 0x768) = 0;
      *(undefined8 *)(lVar11 + 0x770) = 0;
      *(undefined8 *)(lVar11 + 0x778) = 0;
      *(char **)(lVar11 + 0x780) = "agl::TextureData";
      lVar11 = *plVar4;
      uVar9 = 0;
    }
    else {
      uVar9 = *(ushort *)(lVar11 + 0x720);
    }
    if (uVar9 < 2) {
      uVar9 = 1;
    }
    if (uVar9 == 0x140) {
      if (*(char *)(lVar11 + 0x790) == '\0') {
        *(undefined4 *)(lVar11 + 0x740) = 0xffffffff;
        *(undefined8 *)(lVar11 + 0x738) = 0;
        *(undefined4 *)(lVar11 + 0x788) = 0x10000;
        *(undefined8 *)(lVar11 + 0x730) = 0;
        *(undefined8 *)(lVar11 + 0x728) = 0;
        *(undefined8 *)(lVar11 + 0x720) = 0;
        *(undefined8 *)(lVar11 + 0x718) = 0;
        *(undefined8 *)(lVar11 + 0x710) = 0;
        *(undefined8 *)(lVar11 + 0x708) = 0;
        *(undefined8 *)(lVar11 + 0x700) = 0;
        *(undefined8 *)(lVar11 + 0x6f8) = 0;
        *(undefined8 *)(lVar11 + 0x6f0) = 0;
        *(undefined8 *)(lVar11 + 0x748) = 0;
        *(undefined8 *)(lVar11 + 0x750) = 0;
        *(undefined8 *)(lVar11 + 0x758) = 0;
        *(undefined8 *)(lVar11 + 0x760) = 0;
        *(undefined8 *)(lVar11 + 0x768) = 0;
        *(undefined8 *)(lVar11 + 0x770) = 0;
        *(char **)(lVar11 + 0x780) = "agl::TextureData";
        *(undefined8 *)(lVar11 + 0x778) = 0;
        uVar10 = 0;
        uVar9 = 1;
      }
      else {
        uVar10 = *(ushort *)(lVar11 + 0x722);
        uVar9 = uVar10;
        if (*(short *)(lVar11 + 0x72a) != 3) {
          uVar9 = 1;
        }
      }
      if (uVar9 <= uVar10) {
        uVar9 = uVar10;
      }
      if (uVar9 == 0x140) {
        return (void *)0x1;
      }
      lVar11 = *plVar4;
    }
    if (*(char *)(lVar11 + 0x790) != '\0') {
      FUN_038fd0e0(lVar11 + 0x740);
      *(undefined1 *)(lVar11 + 0x790) = 0;
    }
  }
  return (void *)0x1;
}

