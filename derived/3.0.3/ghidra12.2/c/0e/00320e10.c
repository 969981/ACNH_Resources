
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_00320e10(undefined8 *param_1,int param_2,undefined4 param_3,int param_4,undefined4 param_5,
            undefined4 param_6,long param_7,undefined8 param_8,undefined8 param_9,
            undefined8 param_10)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  undefined1 auVar16 [16];
  undefined8 local_70;
  undefined8 *puStack_68;
  
  param_1[0x50] = param_7;
  param_1[0x51] = param_7;
  *(undefined4 *)(param_1 + 0x52) = 0;
  lVar14 = *(long *)(*(long *)(param_7 + 0x120) + (long)param_4 * 8);
  if ((lVar14 == 0) || (*(char *)(lVar14 + 9) == '\0')) {
    FUN_0032c410("The Resource is not found in the VfxSystem. ResourceId : %d.\n",param_4);
    return 0;
  }
  param_1[2] = *(undefined8 *)(lVar14 + 0x10);
  if (param_2 < *(int *)(lVar14 + 0x44)) {
    lVar13 = *(long *)(*(long *)(lVar14 + 0x58) + (long)param_2 * 8);
    if (lVar13 == 0) {
      lVar15 = *(long *)(lVar14 + 0x50);
      lVar13 = lVar15 + (long)param_2 * 0x38;
      param_1[0x49] = lVar13;
      if (lVar15 == 0) goto LAB_00320ea8;
    }
    else {
      param_1[0x49] = lVar13;
    }
    lVar13 = *(long *)(lVar13 + 0x18);
    while( true ) {
      if (lVar13 == 0) {
        *(undefined4 *)(param_1 + 3) = 0x1010000;
        *(undefined2 *)((long)param_1 + 0x274) = 0x100;
        param_1[0x3e] = param_8;
        *(undefined2 *)((long)param_1 + 0x1f) = 0x8000;
        uVar11 = _UNK_041029f8;
        uVar10 = _DAT_041029f0;
        param_1[0x4b] = param_10;
        *(int *)(param_1 + 6) = param_2;
        *(undefined4 *)((long)param_1 + 0x34) = param_3;
        *(int *)(param_1 + 7) = param_4;
        *(undefined4 *)((long)param_1 + 0x24) = param_5;
        param_1[0x2e] = 0;
        *(undefined4 *)(param_1 + 0x2f) = 0;
        *(undefined1 *)((long)param_1 + 0x1d) = 0;
        *(undefined4 *)(param_1 + 0x48) = 0;
        *(undefined4 *)(param_1 + 0x30) = 0;
        *(undefined4 *)(param_1 + 0x3b) = 0;
        *(undefined4 *)(param_1 + 8) = 0;
        *(undefined4 *)(param_1 + 0x44) = 0x3f800000;
        *(undefined4 *)(param_1 + 0x37) = 0;
        param_1[0x38] = 0;
        *(undefined1 **)((long)param_1 + 0x5c) = &DAT_3f8000003f800000;
        *(undefined4 *)((long)param_1 + 100) = 0x3f800000;
        *(undefined8 *)((long)param_1 + 0x44) = 0;
        *(undefined1 *)((long)param_1 + 0x1e) = 0;
        *(undefined4 *)((long)param_1 + 0x26c) = 0;
        *(undefined8 *)((long)param_1 + 0x54) = 0x3f800000;
        param_1[0x4a] = param_9;
        *(undefined4 *)((long)param_1 + 0x4c) = param_6;
        *(undefined4 *)(param_1 + 10) = 0xffffffff;
        param_1[0x4c] = 0;
        *(undefined1 *)((long)param_1 + 0x276) = 0;
        param_1[0x2b] = uVar11;
        param_1[0x2a] = uVar10;
        param_1[0x2c] = 0;
        param_1[0x2d] = 0;
        param_1[0x3c] = 0;
        param_1[0x3d] = 0;
        param_1[0x39] = 0;
        param_1[0x3a] = 0;
        param_1[0x31] = 0;
        param_1[0x32] = 0;
        param_1[0x33] = 0;
        param_1[0x34] = 0;
        param_1[0x35] = 0;
        param_1[0x36] = 0;
        param_1[0x1f] = uVar11;
        param_1[0x1e] = uVar10;
        param_1[0x21] = uVar11;
        param_1[0x20] = uVar10;
        param_1[0x25] = 0;
        param_1[0x24] = 0;
        param_1[0x47] = 0;
        param_1[0x46] = 0;
        uVar9 = _UNK_04102888;
        uVar8 = _DAT_04102880;
        uVar7 = _UNK_041023d8;
        uVar6 = _DAT_041023d0;
        uVar5 = _UNK_04102208;
        uVar4 = _DAT_04102200;
        param_1[1] = 0;
        *param_1 = 0;
        param_1[0xf] = uVar5;
        param_1[0xe] = uVar4;
        param_1[0x11] = uVar9;
        param_1[0x10] = uVar8;
        param_1[0x13] = uVar7;
        param_1[0x12] = uVar6;
        param_1[0x15] = 0;
        param_1[0x14] = 0;
        param_1[0x17] = uVar5;
        param_1[0x16] = uVar4;
        param_1[0x19] = uVar9;
        param_1[0x18] = uVar8;
        param_1[0x1b] = uVar7;
        param_1[0x1a] = uVar6;
        param_1[0x1d] = 0;
        param_1[0x1c] = 0;
        FUN_003210c0(param_1);
        auVar16 = NEON_fmov(0x3f800000,4);
        param_1[0x3f] = &DAT_3f8000003f800000;
        *(undefined4 *)(param_1 + 0x44) = 0x3f800000;
        param_1[0x23] = auVar16._8_8_;
        param_1[0x22] = auVar16._0_8_;
        param_1[0x27] = uVar11;
        param_1[0x26] = uVar10;
        param_1[0x29] = uVar11;
        param_1[0x28] = uVar10;
        param_1[0x41] = 0;
        param_1[0x40] = 0;
        if ((code *)param_1[0x4a] != (code *)0x0) {
          local_70 = param_1[5];
          puStack_68 = param_1;
          (*(code *)param_1[0x4a])(&local_70);
        }
        piVar1 = (int *)(lVar14 + 0x528);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar3) {
            *piVar1 = *piVar1 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        return 1;
      }
      uVar12 = FUN_00323b44(lVar13,lVar14);
      if ((uVar12 & 1) == 0) break;
      if (0 < *(int *)(lVar13 + 0x88)) {
        lVar15 = 0;
        do {
          uVar12 = FUN_00323b44(*(undefined8 *)(lVar13 + 0x90 + lVar15 * 8),lVar14);
          if ((uVar12 & 1) == 0) goto LAB_00321088;
          lVar15 = lVar15 + 1;
        } while (lVar15 < *(int *)(lVar13 + 0x88));
      }
      lVar13 = *(long *)(lVar13 + 0x110);
    }
LAB_00321088:
    FUN_0032c410("EmitterResource setup failed.\n");
  }
  else {
    param_1[0x49] = 0;
LAB_00320ea8:
    FUN_0032c410("The EmitterSet is not found in this resource. EmitterSet Id : %d. ResourceId : %d\n"
                 ,param_2,param_4);
  }
  return 0;
}

