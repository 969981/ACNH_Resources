
void FUN_005de290(undefined8 param_1,uint param_2,ulong param_3,long param_4,ulong param_5,
                 ulong param_6,int param_7)

{
  short *psVar1;
  uint uVar2;
  undefined8 *puVar3;
  undefined4 uVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  ulong uVar17;
  ulong uVar18;
  uint uVar19;
  bool bVar20;
  bool bVar21;
  bool bVar22;
  long lVar23;
  long lVar24;
  undefined8 uVar25;
  ulong uVar26;
  ushort uVar27;
  uint uVar28;
  undefined8 *puVar29;
  ulong uVar30;
  long lVar31;
  char *pcVar32;
  long lVar33;
  ushort *puVar34;
  float *pfVar35;
  uint *puVar36;
  float *pfVar37;
  uint uVar38;
  byte *pbVar39;
  byte bVar40;
  long lVar41;
  long lVar42;
  long lVar43;
  byte *pbVar44;
  long lVar45;
  long lVar46;
  byte bVar47;
  ulong uVar48;
  uint uVar49;
  int iVar50;
  uint uVar51;
  int iVar52;
  float fVar53;
  int iVar54;
  float fVar55;
  float fVar56;
  undefined1 auVar60 [12];
  float fVar57;
  undefined1 auVar61 [12];
  int iVar58;
  float fVar71;
  undefined1 auVar62 [12];
  undefined1 auVar63 [12];
  float fVar69;
  undefined8 uVar59;
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  int iVar70;
  int iVar72;
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  undefined8 uVar78;
  undefined8 uVar79;
  undefined8 uVar80;
  float fVar82;
  float fVar83;
  undefined1 auVar81 [16];
  undefined1 auVar84 [16];
  float fVar85;
  float fVar86;
  float fVar87;
  float fVar88;
  float fVar89;
  float fVar90;
  float fVar91;
  float fVar92;
  long local_3f8;
  long local_3c8;
  long local_350;
  ulong uStack_348;
  long local_340;
  undefined8 local_338;
  ushort local_330;
  long local_320;
  undefined8 local_318;
  long local_310;
  uint local_308;
  long local_300;
  undefined8 local_2f8;
  long local_2f0;
  uint local_2e8;
  undefined1 local_2e0 [8];
  float fStack_2d8;
  undefined1 auStack_2d0 [12];
  long local_2c0;
  undefined8 local_2b8;
  long local_2b0;
  uint local_2a8;
  undefined8 local_b8;
  float local_b0;
  float fStack_ac;
  float fStack_a8;
  float fStack_a4;
  undefined8 local_a0 [2];
  float local_90;
  float fStack_8c;
  float fStack_88;
  float fStack_84;
  undefined8 local_80 [2];
  
  lVar43 = *(long *)(param_4 + 400);
  lVar41 = *(long *)(param_4 + 0x18);
  lVar45 = lVar43 + (long)(int)param_2 * 0xa0;
  uVar2 = *(uint *)(lVar41 + 0x48);
  puVar29 = (undefined8 *)(lVar45 + 0x88);
  local_2c0 = CONCAT44(*(undefined4 *)(lVar41 + 0xe0),*(undefined4 *)(lVar41 + 0xe0));
  FUN_0054cd10(local_2e0,*puVar29,&local_2c0);
  uVar28 = param_2;
  if (0x1d < (int)param_2) {
    uVar28 = 0x1e;
  }
  uVar51 = 0;
  if ((param_3 & 1) == 0) {
    uVar51 = 1 << (ulong)(uVar28 & 0x1f);
  }
  local_300 = 0;
  local_2f8 = 0x8000000000000000;
  local_2e8 = uVar2;
  if (uVar2 == 0) {
    local_3c8 = 0;
  }
  else {
    lVar23 = FUN_0043c4e0(DAT_04c6f050);
    lVar24 = DAT_04c6f058;
    if (lVar23 != 0) {
      lVar24 = lVar23;
    }
    uVar26 = (ulong)(int)(uVar2 * 2 + 0x7f & 0xffffff80);
    if (*(ulong *)(lVar24 + 0x10) < uVar26) {
LAB_005de388:
      local_3c8 = FUN_00439510();
    }
    else {
      local_3c8 = *(long *)(lVar24 + 0x18);
      uVar26 = local_3c8 + uVar26;
      if (*(ulong *)(lVar24 + 0x20) < uVar26) goto LAB_005de388;
      *(ulong *)(lVar24 + 0x18) = uVar26;
    }
  }
  local_2f8._4_4_ = uVar2 | 0x80000000;
  if (uVar2 != 0) {
    local_2f8._0_4_ = uVar2;
  }
  local_300 = local_3c8;
  local_2f0 = local_3c8;
  if (((param_5 & 1) == 0) || ((param_6 & 1) == 0)) {
    if ((param_3 & 1) == 0) {
      if ((int)uVar2 < 1) goto LAB_005de564;
      puVar36 = *(uint **)(lVar41 + 0xe8);
      uVar27 = 0;
      pfVar37 = *(float **)(param_4 + 0x20);
      uVar28 = 0;
      do {
        uVar38 = uVar28;
        if ((*puVar36 & uVar51) != 0) {
          iVar50 = -(uint)(local_2e0._0_4_ <= *pfVar37);
          iVar52 = -(uint)(local_2e0._4_4_ <= pfVar37[1]);
          iVar54 = -(uint)(fStack_2d8 <= pfVar37[2]);
          iVar58 = -(uint)(*pfVar37 <= auStack_2d0._0_4_);
          iVar70 = -(uint)(pfVar37[1] <= auStack_2d0._4_4_);
          iVar72 = -(uint)(pfVar37[2] <= auStack_2d0._8_4_);
          uVar49 = CONCAT13((byte)((uint)iVar58 >> 0x18) & (byte)((uint)iVar50 >> 0x18),
                            CONCAT12((byte)((uint)iVar58 >> 0x10) & (byte)((uint)iVar50 >> 0x10),
                                     CONCAT11((byte)((uint)iVar58 >> 8) & (byte)((uint)iVar50 >> 8),
                                              (byte)iVar58 & (byte)iVar50)));
          if ((uVar49 & (uint)(CONCAT17((byte)((uint)iVar70 >> 0x18) & (byte)((uint)iVar52 >> 0x18),
                                        CONCAT16((byte)((uint)iVar70 >> 0x10) &
                                                 (byte)((uint)iVar52 >> 0x10),
                                                 CONCAT15((byte)((uint)iVar70 >> 8) &
                                                          (byte)((uint)iVar52 >> 8),
                                                          CONCAT14((byte)iVar70 & (byte)iVar52,
                                                                   uVar49)))) >> 0x20) &
              CONCAT13((byte)((uint)iVar72 >> 0x18) & (byte)((uint)iVar54 >> 0x18),
                       CONCAT12((byte)((uint)iVar72 >> 0x10) & (byte)((uint)iVar54 >> 0x10),
                                CONCAT11((byte)((uint)iVar72 >> 8) & (byte)((uint)iVar54 >> 8),
                                         (byte)iVar72 & (byte)iVar54)))) != 0) {
            uVar38 = uVar28 + 1;
            *(ushort *)(local_3c8 + (long)(int)uVar28 * 2) = uVar27;
          }
        }
        uVar27 = uVar27 + 1;
        pfVar37 = pfVar37 + 4;
        puVar36 = puVar36 + 1;
        uVar28 = uVar38;
      } while ((int)(uint)uVar27 < (int)uVar2);
LAB_005de534:
      bVar20 = SBORROW4(uVar2,uVar38);
      bVar21 = (int)(uVar2 - uVar38) < 0;
      bVar22 = uVar2 == uVar38;
      if ((int)uVar2 < (int)uVar38) goto LAB_005de574;
LAB_005de53c:
      if (!bVar22 && bVar21 == bVar20) goto LAB_005de574;
    }
    else {
      if (0 < (int)uVar2) {
        uVar27 = 0;
        pfVar35 = *(float **)(param_4 + 0x20);
        uVar38 = 0;
        pfVar37 = (float *)(*(long *)(lVar41 + 0x40) + 4);
        do {
          iVar50 = -(uint)(local_2e0._0_4_ <= *pfVar35);
          iVar52 = -(uint)(local_2e0._4_4_ <= pfVar35[1]);
          iVar54 = -(uint)(fStack_2d8 <= pfVar35[2]);
          iVar58 = -(uint)(*pfVar35 <= auStack_2d0._0_4_);
          iVar70 = -(uint)(pfVar35[1] <= auStack_2d0._4_4_);
          iVar72 = -(uint)(pfVar35[2] <= auStack_2d0._8_4_);
          uVar28 = CONCAT13((byte)((uint)iVar58 >> 0x18) & (byte)((uint)iVar50 >> 0x18),
                            CONCAT12((byte)((uint)iVar58 >> 0x10) & (byte)((uint)iVar50 >> 0x10),
                                     CONCAT11((byte)((uint)iVar58 >> 8) & (byte)((uint)iVar50 >> 8),
                                              (byte)iVar58 & (byte)iVar50)));
          if (((uVar28 & (uint)(CONCAT17((byte)((uint)iVar70 >> 0x18) & (byte)((uint)iVar52 >> 0x18)
                                         ,CONCAT16((byte)((uint)iVar70 >> 0x10) &
                                                   (byte)((uint)iVar52 >> 0x10),
                                                   CONCAT15((byte)((uint)iVar70 >> 8) &
                                                            (byte)((uint)iVar52 >> 8),
                                                            CONCAT14((byte)iVar70 & (byte)iVar52,
                                                                     uVar28)))) >> 0x20) &
               CONCAT13((byte)((uint)iVar72 >> 0x18) & (byte)((uint)iVar54 >> 0x18),
                        CONCAT12((byte)((uint)iVar72 >> 0x10) & (byte)((uint)iVar54 >> 0x10),
                                 CONCAT11((byte)((uint)iVar72 >> 8) & (byte)((uint)iVar54 >> 8),
                                          (byte)iVar72 & (byte)iVar54)))) != 0) && (*pfVar37 != 0.0)
             ) {
            *(ushort *)(local_3c8 + (long)(int)uVar38 * 2) = uVar27;
            uVar38 = uVar38 + 1;
          }
          uVar27 = uVar27 + 1;
          pfVar35 = pfVar35 + 4;
          pfVar37 = pfVar37 + 4;
        } while ((int)(uint)uVar27 < (int)uVar2);
        goto LAB_005de534;
      }
LAB_005de564:
      uVar38 = 0;
      bVar20 = false;
      bVar22 = uVar2 == 0;
      bVar21 = false;
      if (-1 < (int)uVar2) goto LAB_005de53c;
LAB_005de574:
      uVar2 = uVar38;
      local_2f8._0_4_ = uVar38;
    }
  }
  else {
    local_320 = 0;
    local_318 = 0x8000000000000000;
    local_308 = uVar2;
    if (uVar2 == 0) {
      local_318._0_4_ = 0;
      local_310 = 0;
    }
    else {
      lVar23 = FUN_0043c4e0(DAT_04c6f050);
      lVar24 = DAT_04c6f058;
      if (lVar23 != 0) {
        lVar24 = lVar23;
      }
      uVar26 = (ulong)(int)(uVar2 * 2 + 0x7f & 0xffffff80);
      if (*(ulong *)(lVar24 + 0x10) < uVar26) {
LAB_005de42c:
        local_310 = FUN_00439510();
      }
      else {
        local_310 = *(long *)(lVar24 + 0x18);
        uVar26 = local_310 + uVar26;
        if (*(ulong *)(lVar24 + 0x20) < uVar26) goto LAB_005de42c;
        *(ulong *)(lVar24 + 0x18) = uVar26;
      }
      if (uVar2 != 0) {
        local_318._0_4_ = uVar2;
      }
    }
    lVar24 = local_310;
    local_318._4_4_ = uVar2 | 0x80000000;
    if ((param_3 & 1) == 0) {
      if ((int)uVar2 < 1) goto LAB_005df0dc;
      pcVar32 = *(char **)(lVar41 + 0x188);
      uVar27 = 0;
      puVar36 = *(uint **)(lVar41 + 0xe8);
      uVar28 = 0;
      uVar38 = 0;
      pfVar37 = *(float **)(param_4 + 0x20);
      do {
        if ((*puVar36 & uVar51) != 0) {
          iVar50 = -(uint)(local_2e0._0_4_ <= *pfVar37);
          iVar52 = -(uint)(local_2e0._4_4_ <= pfVar37[1]);
          iVar54 = -(uint)(fStack_2d8 <= pfVar37[2]);
          iVar58 = -(uint)(*pfVar37 <= auStack_2d0._0_4_);
          iVar70 = -(uint)(pfVar37[1] <= auStack_2d0._4_4_);
          iVar72 = -(uint)(pfVar37[2] <= auStack_2d0._8_4_);
          uVar49 = CONCAT13((byte)((uint)iVar58 >> 0x18) & (byte)((uint)iVar50 >> 0x18),
                            CONCAT12((byte)((uint)iVar58 >> 0x10) & (byte)((uint)iVar50 >> 0x10),
                                     CONCAT11((byte)((uint)iVar58 >> 8) & (byte)((uint)iVar50 >> 8),
                                              (byte)iVar58 & (byte)iVar50)));
          if ((uVar49 & (uint)(CONCAT17((byte)((uint)iVar70 >> 0x18) & (byte)((uint)iVar52 >> 0x18),
                                        CONCAT16((byte)((uint)iVar70 >> 0x10) &
                                                 (byte)((uint)iVar52 >> 0x10),
                                                 CONCAT15((byte)((uint)iVar70 >> 8) &
                                                          (byte)((uint)iVar52 >> 8),
                                                          CONCAT14((byte)iVar70 & (byte)iVar52,
                                                                   uVar49)))) >> 0x20) &
              CONCAT13((byte)((uint)iVar72 >> 0x18) & (byte)((uint)iVar54 >> 0x18),
                       CONCAT12((byte)((uint)iVar72 >> 0x10) & (byte)((uint)iVar54 >> 0x10),
                                CONCAT11((byte)((uint)iVar72 >> 8) & (byte)((uint)iVar54 >> 8),
                                         (byte)iVar72 & (byte)iVar54)))) != 0) {
            if (*pcVar32 == '\0') {
              *(ushort *)(local_3c8 + (long)(int)uVar38 * 2) = uVar27;
              uVar38 = uVar38 + 1;
            }
            else {
              *(ushort *)(local_310 + (long)(int)uVar28 * 2) = uVar27;
              uVar28 = uVar28 + 1;
            }
          }
        }
        uVar27 = uVar27 + 1;
        pfVar37 = pfVar37 + 4;
        puVar36 = puVar36 + 1;
        pcVar32 = pcVar32 + 1;
      } while ((int)(uint)uVar27 < (int)uVar2);
LAB_005df0bc:
      uVar51 = uVar28;
      uVar49 = uVar28;
      if (uVar2 == uVar28) {
LAB_005df0c8:
        uVar51 = uVar2;
        uVar49 = (uint)local_318;
      }
    }
    else {
      if (0 < (int)uVar2) {
        uVar27 = 0;
        pcVar32 = *(char **)(lVar41 + 0x188);
        uVar28 = 0;
        uVar38 = 0;
        pfVar35 = *(float **)(param_4 + 0x20);
        pfVar37 = (float *)(*(long *)(lVar41 + 0x40) + 4);
        do {
          iVar50 = -(uint)(local_2e0._0_4_ <= *pfVar35);
          iVar52 = -(uint)(local_2e0._4_4_ <= pfVar35[1]);
          iVar54 = -(uint)(fStack_2d8 <= pfVar35[2]);
          iVar58 = -(uint)(*pfVar35 <= auStack_2d0._0_4_);
          iVar70 = -(uint)(pfVar35[1] <= auStack_2d0._4_4_);
          iVar72 = -(uint)(pfVar35[2] <= auStack_2d0._8_4_);
          uVar51 = CONCAT13((byte)((uint)iVar58 >> 0x18) & (byte)((uint)iVar50 >> 0x18),
                            CONCAT12((byte)((uint)iVar58 >> 0x10) & (byte)((uint)iVar50 >> 0x10),
                                     CONCAT11((byte)((uint)iVar58 >> 8) & (byte)((uint)iVar50 >> 8),
                                              (byte)iVar58 & (byte)iVar50)));
          if (((uVar51 & (uint)(CONCAT17((byte)((uint)iVar70 >> 0x18) & (byte)((uint)iVar52 >> 0x18)
                                         ,CONCAT16((byte)((uint)iVar70 >> 0x10) &
                                                   (byte)((uint)iVar52 >> 0x10),
                                                   CONCAT15((byte)((uint)iVar70 >> 8) &
                                                            (byte)((uint)iVar52 >> 8),
                                                            CONCAT14((byte)iVar70 & (byte)iVar52,
                                                                     uVar51)))) >> 0x20) &
               CONCAT13((byte)((uint)iVar72 >> 0x18) & (byte)((uint)iVar54 >> 0x18),
                        CONCAT12((byte)((uint)iVar72 >> 0x10) & (byte)((uint)iVar54 >> 0x10),
                                 CONCAT11((byte)((uint)iVar72 >> 8) & (byte)((uint)iVar54 >> 8),
                                          (byte)iVar72 & (byte)iVar54)))) != 0) && (*pfVar37 != 0.0)
             ) {
            if (*pcVar32 == '\0') {
              *(ushort *)(local_3c8 + (long)(int)uVar38 * 2) = uVar27;
              uVar38 = uVar38 + 1;
            }
            else {
              *(ushort *)(local_310 + (long)(int)uVar28 * 2) = uVar27;
              uVar28 = uVar28 + 1;
            }
          }
          uVar27 = uVar27 + 1;
          pfVar35 = pfVar35 + 4;
          pcVar32 = pcVar32 + 1;
          pfVar37 = pfVar37 + 4;
        } while ((int)(uint)uVar27 < (int)uVar2);
        goto LAB_005df0bc;
      }
LAB_005df0dc:
      uVar38 = 0;
      uVar28 = 0;
      uVar51 = uVar28;
      uVar49 = uVar28;
      if (uVar2 == 0) goto LAB_005df0c8;
    }
    local_318._0_4_ = uVar49;
    uVar49 = uVar38;
    uVar19 = uVar38;
    if (uVar2 == uVar38) {
      uVar49 = uVar2;
      uVar19 = (uint)local_2f8;
    }
    local_2f8._0_4_ = uVar19;
    local_320 = local_310;
    if (uVar28 != 0) {
      local_350 = *(long *)(param_4 + 0x220);
      local_330 = *(ushort *)(lVar41 + 0x1a8);
      uStack_348 = *(ulong *)(param_4 + 0x228);
      local_340 = *(long *)(param_4 + 0x230);
      local_338 = *(undefined8 *)(param_4 + 0x210);
      if (param_7 == 0) {
        local_2c0 = 0;
        local_2b8 = 0x8000000000000000;
        local_2a8 = uVar28;
        lVar23 = FUN_0043c4e0(DAT_04c6f050);
        lVar43 = DAT_04c6f058;
        if (lVar23 != 0) {
          lVar43 = lVar23;
        }
        uVar26 = (ulong)(int)(uVar28 * 4 + 0x7f & 0xffffff80);
        if (*(ulong *)(lVar43 + 0x10) < uVar26) {
LAB_005df208:
          lVar23 = FUN_00439510(lVar43,uVar26);
        }
        else {
          lVar23 = *(long *)(lVar43 + 0x18);
          if (*(ulong *)(lVar43 + 0x20) < lVar23 + uVar26) goto LAB_005df208;
          *(ulong *)(lVar43 + 0x18) = lVar23 + uVar26;
        }
        local_2b8 = CONCAT44(uVar28,(undefined4)local_2b8) | 0x8000000000000000;
        local_2c0 = lVar23;
        local_2b0 = lVar23;
        lVar46 = FUN_0043c4e0(DAT_04c6f050);
        lVar43 = DAT_04c6f058;
        if (lVar46 != 0) {
          lVar43 = lVar46;
        }
        if (*(ulong *)(lVar43 + 0x10) < uVar26) {
LAB_005dfe3c:
          lVar46 = FUN_00439510(lVar43,uVar26);
        }
        else {
          lVar46 = *(long *)(lVar43 + 0x18);
          if (*(ulong *)(lVar43 + 0x20) < lVar46 + uVar26) goto LAB_005dfe3c;
          *(ulong *)(lVar43 + 0x18) = lVar46 + uVar26;
        }
        local_2b8 = CONCAT44(local_2b8._4_4_,uVar28);
        if (0 < (int)uVar28) {
          uVar30 = 0;
          do {
            uVar48 = uVar30 & 0xffff;
            uVar2 = (int)uVar30 + 1;
            uVar30 = (ulong)uVar2;
            lVar31 = uVar48 * 4;
            lVar43 = *(long *)(lVar41 + 0x40) + (ulong)*(ushort *)(lVar24 + uVar48 * 2) * 0x10;
            *(undefined4 *)(lVar23 + lVar31) = *(undefined4 *)(lVar43 + 8);
            *(undefined4 *)(lVar46 + lVar31) = *(undefined4 *)(lVar43 + 0xc);
          } while ((int)(uVar2 & 0xffff) < (int)uVar28);
        }
        FUN_005f5f20(param_1,lVar45,&local_320,&local_2c0,param_4,&local_350);
        lVar31 = FUN_0043c4e0(DAT_04c6f050);
        lVar43 = DAT_04c6f058;
        if (lVar31 != 0) {
          lVar43 = lVar31;
        }
        if (((*(ulong *)(lVar43 + 0x10) < uVar26) || (*(long *)(lVar43 + 0x18) != lVar46 + uVar26))
           || (*(long *)(lVar43 + 0x28) == lVar46)) {
          FUN_00439980(lVar43,lVar46,uVar26);
        }
        else {
          *(long *)(lVar43 + 0x18) = lVar46;
        }
        uVar28 = local_2a8;
        local_2b8 = local_2b8 & 0xffffffff00000000;
        lVar46 = FUN_0043c4e0(DAT_04c6f050);
        lVar43 = DAT_04c6f058;
        if (lVar46 != 0) {
          lVar43 = lVar46;
        }
        uVar26 = (ulong)(int)(uVar28 * 4 + 0x7f & 0xffffff80);
        if (((*(ulong *)(lVar43 + 0x10) < uVar26) || (*(long *)(lVar43 + 0x18) != lVar23 + uVar26))
           || (*(long *)(lVar43 + 0x28) == lVar23)) {
          FUN_00439980(lVar43,lVar23);
        }
        else {
          *(long *)(lVar43 + 0x18) = lVar23;
        }
      }
      else {
        lVar46 = FUN_0043c4e0(DAT_04c6f050);
        lVar23 = DAT_04c6f058;
        if (lVar46 != 0) {
          lVar23 = lVar46;
        }
        uVar26 = (ulong)(int)(uVar28 * 4 + 0x7f & 0xffffff80);
        if (*(ulong *)(lVar23 + 0x10) < uVar26) {
LAB_005df198:
          local_3f8 = FUN_00439510(lVar23,uVar26);
        }
        else {
          local_3f8 = *(long *)(lVar23 + 0x18);
          if (*(ulong *)(lVar23 + 0x20) < local_3f8 + uVar26) goto LAB_005df198;
          *(ulong *)(lVar23 + 0x18) = local_3f8 + uVar26;
        }
        lVar46 = FUN_0043c4e0(DAT_04c6f050);
        lVar23 = DAT_04c6f058;
        if (lVar46 != 0) {
          lVar23 = lVar46;
        }
        if (*(ulong *)(lVar23 + 0x10) < uVar26) {
LAB_005df404:
          lVar46 = FUN_00439510(lVar23,uVar26);
        }
        else {
          lVar46 = *(long *)(lVar23 + 0x18);
          if (*(ulong *)(lVar23 + 0x20) < lVar46 + uVar26) goto LAB_005df404;
          *(ulong *)(lVar23 + 0x18) = lVar46 + uVar26;
        }
        if (0 < (int)uVar28) {
          uVar30 = 0;
          do {
            uVar48 = uVar30 & 0xffff;
            uVar2 = (int)uVar30 + 1;
            uVar30 = (ulong)uVar2;
            lVar31 = uVar48 * 4;
            lVar23 = *(long *)(lVar41 + 0x40) + (ulong)*(ushort *)(lVar24 + uVar48 * 2) * 0x10;
            *(undefined4 *)(local_3f8 + lVar31) = *(undefined4 *)(lVar23 + 8);
            *(undefined4 *)(lVar46 + lVar31) = *(undefined4 *)(lVar23 + 0xc);
          } while ((int)(uVar2 & 0xffff) < (int)uVar28);
        }
        uVar25 = FUN_0054cc80(*puVar29,lVar45 + 0x20,&local_2c0);
        lVar23 = *(long *)(param_4 + 0x18);
        if (param_7 == 2) {
          if (0 < (int)uVar51) {
            lVar31 = 0;
            pcVar32 = (char *)(lVar43 + (long)(int)param_2 * 0xa0 + 0x9c);
            do {
              uVar30 = (ulong)*(ushort *)(lVar24 + lVar31 * 2);
              if (((*(char *)(local_340 + (uVar30 - local_330)) <= *pcVar32) &&
                  (*(char *)(uStack_348 + (uVar30 - local_330)) == '\0')) &&
                 (uVar48 = (ulong)*(ushort *)(*(long *)(lVar23 + 0x2d0) + uVar30 * 2),
                 uVar48 != 0xffff)) {
                lVar42 = *(long *)(param_4 + 0x20);
                uVar4 = *(undefined4 *)(*(long *)(lVar23 + 0x40) + uVar30 * 0x10 + 8);
                local_80[0] = CONCAT44(uVar4,uVar4);
                lVar43 = *(long *)(lVar23 + 0x290) + uVar48 * 8;
                bVar40 = *(byte *)(lVar43 + 6);
                if (bVar40 != 0) {
                  iVar50 = 0;
                  bVar47 = 0;
                  lVar33 = lVar42;
                  while( true ) {
                    puVar3 = (undefined8 *)(lVar42 + uVar30 * 0x10);
                    uVar80 = puVar3[1];
                    uVar59 = *puVar3;
                    puVar34 = (ushort *)
                              (*(long *)(lVar23 + 0x280) +
                              ((ulong)((uint)*(ushort *)(lVar43 + 2) + (uint)bVar47) & 0xffff) * 6);
                    auVar64 = *(undefined1 (*) [16])(lVar33 + (ulong)*puVar34 * 0x10);
                    auVar73 = *(undefined1 (*) [16])(lVar33 + (ulong)puVar34[1] * 0x10);
                    psVar1 = (short *)(*(long *)(lVar23 + 0x210) + (ulong)puVar34[2] * 4);
                    pbVar39 = (byte *)(psVar1 + 1);
                    if (*pbVar39 != 0) {
                      fVar85 = auVar64._0_4_ - (float)uVar59;
                      fVar90 = (float)((ulong)uVar59 >> 0x20);
                      fVar86 = auVar64._4_4_ - fVar90;
                      fVar87 = auVar64._8_4_ - (float)uVar80;
                      fVar92 = (float)((ulong)uVar80 >> 0x20);
                      fVar88 = auVar64._12_4_ - fVar92;
                      auVar9._4_4_ = fVar86;
                      auVar9._0_4_ = fVar85;
                      auVar9._8_4_ = fVar87;
                      auVar9._12_4_ = fVar88;
                      auVar10._4_4_ = fVar86;
                      auVar10._0_4_ = fVar85;
                      auVar10._8_4_ = fVar87;
                      auVar10._12_4_ = fVar88;
                      auVar64 = NEON_ext(auVar9,auVar10,4,1);
                      fVar89 = auVar73._0_4_ - (float)uVar59;
                      fVar90 = auVar73._4_4_ - fVar90;
                      fVar91 = auVar73._8_4_ - (float)uVar80;
                      fVar92 = auVar73._12_4_ - fVar92;
                      auVar15._4_4_ = fVar90;
                      auVar15._0_4_ = fVar89;
                      auVar15._8_4_ = fVar91;
                      auVar15._12_4_ = fVar92;
                      auVar16._4_4_ = fVar90;
                      auVar16._0_4_ = fVar89;
                      auVar16._8_4_ = fVar91;
                      auVar16._12_4_ = fVar92;
                      auVar73 = NEON_ext(auVar15,auVar16,4,1);
                      auVar81 = NEON_ext(auVar64,auVar64,8,1);
                      auVar84 = NEON_ext(auVar73,auVar73,8,1);
                      uVar78 = NEON_rev64(auVar81._0_8_,4);
                      bVar40 = 0;
                      uVar79 = NEON_rev64(auVar84._0_8_,4);
                      auVar67._0_4_ = fVar85 * auVar73._0_4_ - fVar89 * auVar64._0_4_;
                      auVar67._4_4_ = fVar86 * auVar73._4_4_ - fVar90 * auVar64._4_4_;
                      auVar67._8_4_ = fVar87 * (float)uVar79 - fVar91 * (float)uVar78;
                      auVar67._12_4_ =
                           fVar88 * (float)((ulong)uVar79 >> 0x20) -
                           fVar92 * (float)((ulong)uVar78 >> 0x20);
                      auVar64 = NEON_ext(auVar67,auVar67,4,1);
                      fVar57 = auVar64._0_4_;
                      fVar53 = auVar64._4_4_;
                      while( true ) {
                        pfVar37 = (float *)(*(long *)(lVar23 + 0x200) +
                                           (ulong)(ushort)(*psVar1 + (ushort)bVar40) * 8);
                        fVar56 = *pfVar37;
                        fVar55 = pfVar37[1];
                        local_90 = (float)uVar59 + fVar85 * fVar56 + fVar89 * fVar55;
                        fStack_8c = (float)((ulong)uVar59 >> 0x20) + fVar86 * fVar56 +
                                    fVar90 * fVar55;
                        fStack_88 = (float)uVar80 + fVar87 * fVar56 + fVar91 * fVar55;
                        fStack_84 = (float)((ulong)uVar80 >> 0x20) + fVar88 * fVar56 +
                                    fVar92 * fVar55;
                        FUN_0054cdc0(uVar25,&local_90,local_80,
                                     (uint)*(ushort *)(lVar43 + 4) + iVar50,local_a0,&local_b0,
                                     &local_b8);
                        fVar56 = (float)local_b8 - (float)local_80[0];
                        fVar55 = (float)((ulong)local_b8 >> 0x20) -
                                 (float)((ulong)local_80[0] >> 0x20);
                        local_b8 = CONCAT44(fVar55,fVar56);
                        if (fVar56 < 0.0) {
                          fVar69 = auVar67._0_4_ * auVar67._0_4_ + fVar57 * fVar57 + fVar53 * fVar53
                          ;
                          fVar71 = auVar67._0_4_ * auVar67._0_4_ + fVar57 * fVar57 + fVar53 * fVar53
                          ;
                          uVar59 = CONCAT44(fVar71,fVar69);
                          uVar80 = NEON_frsqrte(uVar59,4);
                          fVar82 = (float)uVar80;
                          fVar83 = (float)((ulong)uVar80 >> 0x20);
                          uVar80 = NEON_frsqrts(uVar59,CONCAT44(fVar83 * fVar83,fVar82 * fVar82),4);
                          fVar82 = fVar82 * (float)uVar80;
                          fVar83 = fVar83 * (float)((ulong)uVar80 >> 0x20);
                          iVar52 = -(uint)(fVar69 <= 0.0);
                          iVar54 = -(uint)(fVar71 <= 0.0);
                          uVar59 = NEON_frsqrts(uVar59,CONCAT44(fVar83 * fVar83,fVar82 * fVar82),4);
                          fVar82 = (float)uVar59 * fVar82;
                          fVar83 = (float)((ulong)uVar59 >> 0x20) * fVar83;
                          fVar69 = (float)CONCAT13((byte)((uint)fVar82 >> 0x18) &
                                                   ~(byte)((uint)iVar52 >> 0x18),
                                                   CONCAT12((byte)((uint)fVar82 >> 0x10) &
                                                            ~(byte)((uint)iVar52 >> 0x10),
                                                            CONCAT11((byte)((uint)fVar82 >> 8) &
                                                                     ~(byte)((uint)iVar52 >> 8),
                                                                     SUB41(fVar82,0) & ~(byte)iVar52
                                                                    )));
                          auVar62._0_4_ = fVar57 * fVar69;
                          fVar82 = (float)(CONCAT17((byte)((uint)fVar83 >> 0x18) &
                                                    ~(byte)((uint)iVar54 >> 0x18),
                                                    CONCAT16((byte)((uint)fVar83 >> 0x10) &
                                                             ~(byte)((uint)iVar54 >> 0x10),
                                                             CONCAT15((byte)((uint)fVar83 >> 8) &
                                                                      ~(byte)((uint)iVar54 >> 8),
                                                                      CONCAT14(SUB41(fVar83,0) &
                                                                               ~(byte)iVar54,fVar69)
                                                                     ))) >> 0x20);
                          auVar62._4_4_ = fVar53 * fVar82;
                          auVar62._8_4_ = auVar67._0_4_ * fVar69;
                          fVar82 = auVar67._4_4_ * fVar82;
                          auVar76._0_4_ = local_b0 * auVar62._0_4_;
                          auVar76._4_4_ = fStack_ac * auVar62._4_4_;
                          auVar76._8_4_ = fStack_a8 * auVar62._8_4_;
                          auVar76._12_4_ = fStack_a4 * fVar82;
                          auVar64 = NEON_ext(auVar76,auVar76,8,1);
                          if (auVar76._0_4_ + auVar76._4_4_ + auVar64._0_4_ < 0.0) {
                            auVar62._0_4_ = -auVar62._0_4_;
                            auVar62._4_4_ = -auVar62._4_4_;
                            auVar62._8_4_ = -auVar62._8_4_;
                          }
                          auVar64 = *(undefined1 (*) [16])(lVar42 + uVar30 * 0x10);
                          puVar3 = (undefined8 *)(lVar42 + uVar30 * 0x10);
                          puVar3[1] = CONCAT44(auVar64._12_4_ - fVar55 * fVar82,
                                               auVar64._8_4_ - fVar56 * auVar62._8_4_);
                          *puVar3 = CONCAT44(auVar64._4_4_ - fVar55 * auVar62._4_4_,
                                             auVar64._0_4_ - fVar56 * auVar62._0_4_);
                        }
                        bVar40 = bVar40 + 1;
                        iVar50 = iVar50 + 1;
                        if (*pbVar39 <= bVar40) break;
                        puVar3 = (undefined8 *)(lVar42 + uVar30 * 0x10);
                        uVar80 = puVar3[1];
                        uVar59 = *puVar3;
                      }
                      bVar40 = *(byte *)(lVar43 + 6);
                    }
                    bVar47 = bVar47 + 1;
                    if (bVar40 <= bVar47) break;
                    lVar33 = *(long *)(param_4 + 0x20);
                  }
                }
              }
              lVar31 = lVar31 + 1;
            } while (lVar31 != (int)uVar51);
            if (*(int *)(lVar23 + 0x278) != 0) {
              lVar43 = 0;
              do {
                uVar30 = (ulong)*(ushort *)(lVar24 + lVar43 * 2);
                if (((*(char *)(local_340 + (uVar30 - local_330)) <= *pcVar32) &&
                    (*(char *)(uStack_348 + (uVar30 - local_330)) == '\0')) &&
                   (uVar48 = (ulong)*(ushort *)(*(long *)(lVar23 + 0x2c0) + uVar30 * 2),
                   uVar48 != 0xffff)) {
                  lVar42 = *(long *)(param_4 + 0x20);
                  uVar4 = *(undefined4 *)(*(long *)(lVar23 + 0x40) + uVar30 * 0x10 + 8);
                  local_80[0] = CONCAT44(uVar4,uVar4);
                  lVar31 = *(long *)(lVar23 + 0x270) + uVar48 * 8;
                  bVar40 = *(byte *)(lVar31 + 6);
                  if (bVar40 != 0) {
                    iVar50 = 0;
                    bVar47 = 0;
                    lVar33 = lVar42;
                    while( true ) {
                      puVar3 = (undefined8 *)(lVar42 + uVar30 * 0x10);
                      uVar80 = puVar3[1];
                      uVar59 = *puVar3;
                      puVar34 = (ushort *)
                                (*(long *)(lVar23 + 0x260) +
                                (ulong)(ushort)(*(short *)(lVar31 + 2) + (ushort)bVar47) * 4);
                      auVar64 = *(undefined1 (*) [16])(lVar33 + (ulong)*puVar34 * 0x10);
                      psVar1 = (short *)(*(long *)(lVar23 + 0x1f0) + (ulong)puVar34[1] * 4);
                      pbVar39 = (byte *)(psVar1 + 1);
                      if (*pbVar39 != 0) {
                        fVar90 = (float)uVar59;
                        uVar48 = (ulong)uVar59 >> 0x20;
                        fVar92 = (float)uVar80;
                        uVar17 = (ulong)uVar80 >> 0x20;
                        bVar40 = 0;
                        while( true ) {
                          fVar57 = *(float *)(*(long *)(lVar23 + 0x1e0) +
                                             (ulong)(ushort)(*psVar1 + (ushort)bVar40) * 4);
                          local_90 = (float)uVar59 + (auVar64._0_4_ - fVar90) * fVar57;
                          fStack_8c = (float)((ulong)uVar59 >> 0x20) +
                                      (auVar64._4_4_ - (float)uVar48) * fVar57;
                          fStack_88 = (float)uVar80 + (auVar64._8_4_ - fVar92) * fVar57;
                          fStack_84 = (float)((ulong)uVar80 >> 0x20) +
                                      (auVar64._12_4_ - (float)uVar17) * fVar57;
                          FUN_0054cdc0(uVar25,&local_90,local_80,
                                       (uint)*(ushort *)(lVar31 + 4) + iVar50,local_a0,&local_b0,
                                       &local_b8);
                          fVar57 = (float)local_b8 - (float)local_80[0];
                          fVar53 = (float)((ulong)local_b8 >> 0x20) -
                                   (float)((ulong)local_80[0] >> 0x20);
                          local_b8 = CONCAT44(fVar53,fVar57);
                          if (fVar57 < 0.0) {
                            auVar73 = *(undefined1 (*) [16])(lVar42 + uVar30 * 0x10);
                            puVar3 = (undefined8 *)(lVar42 + uVar30 * 0x10);
                            puVar3[1] = CONCAT44(auVar73._12_4_ - fVar53 * fStack_a4,
                                                 auVar73._8_4_ - fVar57 * fStack_a8);
                            *puVar3 = CONCAT44(auVar73._4_4_ - fVar53 * fStack_ac,
                                               auVar73._0_4_ - fVar57 * local_b0);
                          }
                          bVar40 = bVar40 + 1;
                          iVar50 = iVar50 + 1;
                          if (*pbVar39 <= bVar40) break;
                          puVar3 = (undefined8 *)(lVar42 + uVar30 * 0x10);
                          uVar80 = puVar3[1];
                          uVar59 = *puVar3;
                        }
                        bVar40 = *(byte *)(lVar31 + 6);
                      }
                      bVar47 = bVar47 + 1;
                      if (bVar40 <= bVar47) break;
                      lVar33 = *(long *)(param_4 + 0x20);
                    }
                  }
                }
                lVar43 = lVar43 + 1;
              } while (lVar43 != (int)uVar51);
            }
          }
        }
        else if (0 < (int)uVar51) {
          lVar31 = 0;
          pcVar32 = (char *)(lVar43 + (long)(int)param_2 * 0xa0 + 0x9c);
          do {
            uVar30 = (ulong)*(ushort *)(lVar24 + lVar31 * 2);
            if (((*(char *)(local_340 + (uVar30 - local_330)) <= *pcVar32) &&
                (*(char *)(uStack_348 + (uVar30 - local_330)) == '\0')) &&
               (uVar48 = (ulong)*(ushort *)(*(long *)(lVar23 + 0x2b0) + uVar30 * 2),
               uVar48 != 0xffff)) {
              uVar4 = *(undefined4 *)(*(long *)(lVar23 + 0x40) + uVar30 * 0x10 + 8);
              local_80[0] = CONCAT44(uVar4,uVar4);
              lVar43 = *(long *)(lVar23 + 0x250);
              pbVar39 = (byte *)(lVar43 + uVar48 * 6 + 4);
              bVar40 = *pbVar39;
              if (bVar40 != 0) {
                lVar33 = *(long *)(param_4 + 0x20);
                bVar47 = 0;
                lVar42 = lVar33;
                while( true ) {
                  puVar3 = (undefined8 *)(lVar33 + uVar30 * 0x10);
                  uVar80 = puVar3[1];
                  uVar59 = *puVar3;
                  puVar34 = (ushort *)
                            (*(long *)(lVar23 + 0x240) +
                            ((ulong)((uint)*(ushort *)(lVar43 + uVar48 * 6 + 2) + (uint)bVar47) &
                            0xffff) * 6);
                  auVar64 = *(undefined1 (*) [16])(lVar42 + (ulong)*puVar34 * 0x10);
                  auVar73 = *(undefined1 (*) [16])(lVar42 + (ulong)puVar34[1] * 0x10);
                  psVar1 = (short *)(*(long *)(lVar23 + 0x210) + (ulong)puVar34[2] * 4);
                  pbVar44 = (byte *)(psVar1 + 1);
                  if (*pbVar44 != 0) {
                    fVar85 = auVar64._0_4_ - (float)uVar59;
                    fVar90 = (float)((ulong)uVar59 >> 0x20);
                    fVar86 = auVar64._4_4_ - fVar90;
                    fVar87 = auVar64._8_4_ - (float)uVar80;
                    fVar92 = (float)((ulong)uVar80 >> 0x20);
                    fVar88 = auVar64._12_4_ - fVar92;
                    auVar64._4_4_ = fVar86;
                    auVar64._0_4_ = fVar85;
                    auVar64._8_4_ = fVar87;
                    auVar64._12_4_ = fVar88;
                    auVar81._4_4_ = fVar86;
                    auVar81._0_4_ = fVar85;
                    auVar81._8_4_ = fVar87;
                    auVar81._12_4_ = fVar88;
                    auVar64 = NEON_ext(auVar64,auVar81,4,1);
                    fVar89 = auVar73._0_4_ - (float)uVar59;
                    fVar90 = auVar73._4_4_ - fVar90;
                    fVar91 = auVar73._8_4_ - (float)uVar80;
                    fVar92 = auVar73._12_4_ - fVar92;
                    auVar73._4_4_ = fVar90;
                    auVar73._0_4_ = fVar89;
                    auVar73._8_4_ = fVar91;
                    auVar73._12_4_ = fVar92;
                    auVar84._4_4_ = fVar90;
                    auVar84._0_4_ = fVar89;
                    auVar84._8_4_ = fVar91;
                    auVar84._12_4_ = fVar92;
                    auVar73 = NEON_ext(auVar73,auVar84,4,1);
                    auVar81 = NEON_ext(auVar64,auVar64,8,1);
                    auVar84 = NEON_ext(auVar73,auVar73,8,1);
                    uVar78 = NEON_rev64(auVar81._0_8_,4);
                    bVar40 = 0;
                    uVar79 = NEON_rev64(auVar84._0_8_,4);
                    auVar68._0_4_ = fVar85 * auVar73._0_4_ - fVar89 * auVar64._0_4_;
                    auVar68._4_4_ = fVar86 * auVar73._4_4_ - fVar90 * auVar64._4_4_;
                    auVar68._8_4_ = fVar87 * (float)uVar79 - fVar91 * (float)uVar78;
                    auVar68._12_4_ =
                         fVar88 * (float)((ulong)uVar79 >> 0x20) -
                         fVar92 * (float)((ulong)uVar78 >> 0x20);
                    auVar64 = NEON_ext(auVar68,auVar68,4,1);
                    fVar57 = auVar64._0_4_;
                    fVar53 = auVar64._4_4_;
                    while( true ) {
                      pfVar37 = (float *)(*(long *)(lVar23 + 0x200) +
                                         (ulong)(ushort)(*psVar1 + (ushort)bVar40) * 8);
                      fVar56 = *pfVar37;
                      fVar55 = pfVar37[1];
                      local_90 = (float)uVar59 + fVar85 * fVar56 + fVar89 * fVar55;
                      fStack_8c = (float)((ulong)uVar59 >> 0x20) + fVar86 * fVar56 + fVar90 * fVar55
                      ;
                      fStack_88 = (float)uVar80 + fVar87 * fVar56 + fVar91 * fVar55;
                      fStack_84 = (float)((ulong)uVar80 >> 0x20) + fVar88 * fVar56 + fVar92 * fVar55
                      ;
                      FUN_0054cdc0(uVar25,&local_90,local_80,0xffff,local_a0,&local_b0,&local_b8);
                      fVar56 = (float)local_b8 - (float)local_80[0];
                      fVar55 = (float)((ulong)local_b8 >> 0x20) -
                               (float)((ulong)local_80[0] >> 0x20);
                      local_b8 = CONCAT44(fVar55,fVar56);
                      if (fVar56 < 0.0) {
                        fVar69 = auVar68._0_4_ * auVar68._0_4_ + fVar57 * fVar57 + fVar53 * fVar53;
                        fVar71 = auVar68._0_4_ * auVar68._0_4_ + fVar57 * fVar57 + fVar53 * fVar53;
                        uVar59 = CONCAT44(fVar71,fVar69);
                        uVar80 = NEON_frsqrte(uVar59,4);
                        fVar82 = (float)uVar80;
                        fVar83 = (float)((ulong)uVar80 >> 0x20);
                        uVar80 = NEON_frsqrts(uVar59,CONCAT44(fVar83 * fVar83,fVar82 * fVar82),4);
                        fVar82 = fVar82 * (float)uVar80;
                        fVar83 = fVar83 * (float)((ulong)uVar80 >> 0x20);
                        iVar50 = -(uint)(fVar69 <= 0.0);
                        iVar52 = -(uint)(fVar71 <= 0.0);
                        uVar59 = NEON_frsqrts(uVar59,CONCAT44(fVar83 * fVar83,fVar82 * fVar82),4);
                        fVar82 = (float)uVar59 * fVar82;
                        fVar83 = (float)((ulong)uVar59 >> 0x20) * fVar83;
                        fVar69 = (float)CONCAT13((byte)((uint)fVar82 >> 0x18) &
                                                 ~(byte)((uint)iVar50 >> 0x18),
                                                 CONCAT12((byte)((uint)fVar82 >> 0x10) &
                                                          ~(byte)((uint)iVar50 >> 0x10),
                                                          CONCAT11((byte)((uint)fVar82 >> 8) &
                                                                   ~(byte)((uint)iVar50 >> 8),
                                                                   SUB41(fVar82,0) & ~(byte)iVar50))
                                                );
                        auVar63._0_4_ = fVar57 * fVar69;
                        fVar82 = (float)(CONCAT17((byte)((uint)fVar83 >> 0x18) &
                                                  ~(byte)((uint)iVar52 >> 0x18),
                                                  CONCAT16((byte)((uint)fVar83 >> 0x10) &
                                                           ~(byte)((uint)iVar52 >> 0x10),
                                                           CONCAT15((byte)((uint)fVar83 >> 8) &
                                                                    ~(byte)((uint)iVar52 >> 8),
                                                                    CONCAT14(SUB41(fVar83,0) &
                                                                             ~(byte)iVar52,fVar69)))
                                                 ) >> 0x20);
                        auVar63._4_4_ = fVar53 * fVar82;
                        auVar63._8_4_ = auVar68._0_4_ * fVar69;
                        fVar82 = auVar68._4_4_ * fVar82;
                        auVar77._0_4_ = local_b0 * auVar63._0_4_;
                        auVar77._4_4_ = fStack_ac * auVar63._4_4_;
                        auVar77._8_4_ = fStack_a8 * auVar63._8_4_;
                        auVar77._12_4_ = fStack_a4 * fVar82;
                        auVar64 = NEON_ext(auVar77,auVar77,8,1);
                        if (auVar77._0_4_ + auVar77._4_4_ + auVar64._0_4_ < 0.0) {
                          auVar63._0_4_ = -auVar63._0_4_;
                          auVar63._4_4_ = -auVar63._4_4_;
                          auVar63._8_4_ = -auVar63._8_4_;
                        }
                        auVar64 = *(undefined1 (*) [16])(lVar33 + uVar30 * 0x10);
                        puVar3 = (undefined8 *)(lVar33 + uVar30 * 0x10);
                        puVar3[1] = CONCAT44(auVar64._12_4_ - fVar55 * fVar82,
                                             auVar64._8_4_ - fVar56 * auVar63._8_4_);
                        *puVar3 = CONCAT44(auVar64._4_4_ - fVar55 * auVar63._4_4_,
                                           auVar64._0_4_ - fVar56 * auVar63._0_4_);
                      }
                      bVar40 = bVar40 + 1;
                      if (*pbVar44 <= bVar40) break;
                      puVar3 = (undefined8 *)(lVar33 + uVar30 * 0x10);
                      uVar80 = puVar3[1];
                      uVar59 = *puVar3;
                    }
                    bVar40 = *pbVar39;
                  }
                  bVar47 = bVar47 + 1;
                  if (bVar40 <= bVar47) break;
                  lVar42 = *(long *)(param_4 + 0x20);
                }
              }
            }
            lVar31 = lVar31 + 1;
          } while (lVar31 != (int)uVar51);
          if (*(int *)(lVar23 + 0x238) != 0) {
            lVar43 = 0;
            do {
              uVar30 = (ulong)*(ushort *)(lVar24 + lVar43 * 2);
              if (((*(char *)(local_340 + (uVar30 - local_330)) <= *pcVar32) &&
                  (*(char *)(uStack_348 + (uVar30 - local_330)) == '\0')) &&
                 (uVar48 = (ulong)*(ushort *)(*(long *)(lVar23 + 0x2a0) + uVar30 * 2),
                 uVar48 != 0xffff)) {
                uVar4 = *(undefined4 *)(*(long *)(lVar23 + 0x40) + uVar30 * 0x10 + 8);
                local_80[0] = CONCAT44(uVar4,uVar4);
                lVar31 = *(long *)(lVar23 + 0x230);
                pbVar39 = (byte *)(lVar31 + uVar48 * 6 + 4);
                bVar40 = *pbVar39;
                if (bVar40 != 0) {
                  lVar33 = *(long *)(param_4 + 0x20);
                  bVar47 = 0;
                  lVar42 = lVar33;
                  while( true ) {
                    puVar3 = (undefined8 *)(lVar33 + uVar30 * 0x10);
                    uVar80 = puVar3[1];
                    uVar59 = *puVar3;
                    puVar34 = (ushort *)
                              (*(long *)(lVar23 + 0x220) +
                              (ulong)(ushort)(*(short *)(lVar31 + uVar48 * 6 + 2) + (ushort)bVar47)
                              * 4);
                    auVar64 = *(undefined1 (*) [16])(lVar42 + (ulong)*puVar34 * 0x10);
                    psVar1 = (short *)(*(long *)(lVar23 + 0x1f0) + (ulong)puVar34[1] * 4);
                    pbVar44 = (byte *)(psVar1 + 1);
                    if (*pbVar44 != 0) {
                      fVar90 = (float)uVar59;
                      uVar17 = (ulong)uVar59 >> 0x20;
                      fVar92 = (float)uVar80;
                      uVar18 = (ulong)uVar80 >> 0x20;
                      bVar40 = 0;
                      while( true ) {
                        fVar57 = *(float *)(*(long *)(lVar23 + 0x1e0) +
                                           (ulong)(ushort)(*psVar1 + (ushort)bVar40) * 4);
                        local_90 = (float)uVar59 + (auVar64._0_4_ - fVar90) * fVar57;
                        fStack_8c = (float)((ulong)uVar59 >> 0x20) +
                                    (auVar64._4_4_ - (float)uVar17) * fVar57;
                        fStack_88 = (float)uVar80 + (auVar64._8_4_ - fVar92) * fVar57;
                        fStack_84 = (float)((ulong)uVar80 >> 0x20) +
                                    (auVar64._12_4_ - (float)uVar18) * fVar57;
                        FUN_0054cdc0(uVar25,&local_90,local_80,0xffff,local_a0,&local_b0,&local_b8);
                        fVar57 = (float)local_b8 - (float)local_80[0];
                        fVar53 = (float)((ulong)local_b8 >> 0x20) -
                                 (float)((ulong)local_80[0] >> 0x20);
                        local_b8 = CONCAT44(fVar53,fVar57);
                        if (fVar57 < 0.0) {
                          auVar73 = *(undefined1 (*) [16])(lVar33 + uVar30 * 0x10);
                          puVar3 = (undefined8 *)(lVar33 + uVar30 * 0x10);
                          puVar3[1] = CONCAT44(auVar73._12_4_ - fVar53 * fStack_a4,
                                               auVar73._8_4_ - fVar57 * fStack_a8);
                          *puVar3 = CONCAT44(auVar73._4_4_ - fVar53 * fStack_ac,
                                             auVar73._0_4_ - fVar57 * local_b0);
                        }
                        bVar40 = bVar40 + 1;
                        if (*pbVar44 <= bVar40) break;
                        puVar3 = (undefined8 *)(lVar33 + uVar30 * 0x10);
                        uVar80 = puVar3[1];
                        uVar59 = *puVar3;
                      }
                      bVar40 = *pbVar39;
                    }
                    bVar47 = bVar47 + 1;
                    if (bVar40 <= bVar47) break;
                    lVar42 = *(long *)(param_4 + 0x20);
                  }
                }
              }
              lVar43 = lVar43 + 1;
            } while (lVar43 != (int)uVar51);
          }
        }
        lVar23 = FUN_0043c4e0(DAT_04c6f050);
        lVar43 = DAT_04c6f058;
        if (lVar23 != 0) {
          lVar43 = lVar23;
        }
        if (((*(ulong *)(lVar43 + 0x10) < uVar26) || (*(long *)(lVar43 + 0x18) != lVar46 + uVar26))
           || (*(long *)(lVar43 + 0x28) == lVar46)) {
          FUN_00439980(lVar43,lVar46,uVar26);
        }
        else {
          *(long *)(lVar43 + 0x18) = lVar46;
        }
        lVar23 = FUN_0043c4e0(*(undefined2 *)PTR_DAT_04bd4d10);
        lVar43 = DAT_04c6f058;
        if (lVar23 != 0) {
          lVar43 = lVar23;
        }
        if (((*(ulong *)(lVar43 + 0x10) < uVar26) ||
            (*(long *)(lVar43 + 0x18) != local_3f8 + uVar26)) ||
           (*(long *)(lVar43 + 0x28) == local_3f8)) {
          FUN_00439980(lVar43,local_3f8,uVar26);
        }
        else {
          *(long *)(lVar43 + 0x18) = local_3f8;
        }
      }
    }
    uVar28 = local_308;
    local_318 = (ulong)local_318._4_4_ << 0x20;
    lVar23 = FUN_0043c4e0(*(undefined2 *)PTR_DAT_04bd4d10);
    lVar43 = DAT_04c6f058;
    if (lVar23 != 0) {
      lVar43 = lVar23;
    }
    uVar26 = (ulong)(int)(uVar28 * 2 + 0x7f & 0xffffff80);
    uVar2 = uVar49;
    if (((*(ulong *)(lVar43 + 0x10) < uVar26) || (*(long *)(lVar43 + 0x18) != uVar26 + lVar24)) ||
       (*(long *)(lVar43 + 0x28) == lVar24)) {
      FUN_00439980();
    }
    else {
      *(long *)(lVar43 + 0x18) = lVar24;
    }
  }
  if (uVar38 == 0) goto LAB_005dffd0;
  if (param_7 == 0) {
    local_2c0 = 0;
    local_2b8 = 0x8000000000000000;
    local_2a8 = uVar38;
    lVar24 = FUN_0043c4e0(DAT_04c6f050);
    lVar43 = DAT_04c6f058;
    if (lVar24 != 0) {
      lVar43 = lVar24;
    }
    uVar26 = (ulong)(int)(uVar38 * 4 + 0x7f & 0xffffff80);
    if (*(ulong *)(lVar43 + 0x10) < uVar26) {
LAB_005de650:
      lVar24 = FUN_00439510(lVar43,uVar26);
    }
    else {
      lVar24 = *(long *)(lVar43 + 0x18);
      if (*(ulong *)(lVar43 + 0x20) < lVar24 + uVar26) goto LAB_005de650;
      *(ulong *)(lVar43 + 0x18) = lVar24 + uVar26;
    }
    local_2b8 = CONCAT44(uVar38,(undefined4)local_2b8) | 0x8000000000000000;
    local_350 = 0;
    uStack_348 = 0x8000000000000000;
    local_338 = CONCAT44(local_338._4_4_,uVar38);
    local_2c0 = lVar24;
    local_2b0 = lVar24;
    lVar23 = FUN_0043c4e0(DAT_04c6f050);
    lVar43 = DAT_04c6f058;
    if (lVar23 != 0) {
      lVar43 = lVar23;
    }
    if (*(ulong *)(lVar43 + 0x10) < uVar26) {
LAB_005df298:
      lVar23 = FUN_00439510(lVar43,uVar26);
    }
    else {
      lVar23 = *(long *)(lVar43 + 0x18);
      if (*(ulong *)(lVar43 + 0x20) < lVar23 + uVar26) goto LAB_005df298;
      *(ulong *)(lVar43 + 0x18) = lVar23 + uVar26;
    }
    local_2b8 = CONCAT44(local_2b8._4_4_,uVar38);
    uStack_348 = CONCAT44(uVar38,uVar38) | 0x8000000000000000;
    if (0 < (int)uVar38) {
      uVar26 = 0;
      do {
        uVar30 = uVar26 & 0xffff;
        uVar28 = (int)uVar26 + 1;
        uVar26 = (ulong)uVar28;
        lVar46 = uVar30 * 4;
        lVar43 = *(long *)(lVar41 + 0x40) + (ulong)*(ushort *)(local_3c8 + uVar30 * 2) * 0x10;
        *(undefined4 *)(lVar24 + lVar46) = *(undefined4 *)(lVar43 + 8);
        *(undefined4 *)(lVar23 + lVar46) = *(undefined4 *)(lVar43 + 0xc);
      } while ((int)(uVar28 & 0xffff) < (int)uVar38);
    }
    local_350 = lVar23;
    local_340 = lVar23;
    FUN_005fa210(param_1,lVar45,&local_300,&local_2c0,&local_350,param_4);
    iVar50 = (int)local_338;
    uStack_348 = uStack_348 & 0xffffffff00000000;
    lVar43 = FUN_0043c4e0(DAT_04c6f050);
    lVar41 = DAT_04c6f058;
    if (lVar43 != 0) {
      lVar41 = lVar43;
    }
    uVar26 = (ulong)(int)(iVar50 * 4 + 0x7fU & 0xffffff80);
    if (((*(ulong *)(lVar41 + 0x10) < uVar26) || (*(long *)(lVar41 + 0x18) != lVar23 + uVar26)) ||
       (*(long *)(lVar41 + 0x28) == lVar23)) {
      FUN_00439980(lVar41,lVar23);
    }
    else {
      *(long *)(lVar41 + 0x18) = lVar23;
    }
    uVar28 = local_2a8;
    local_2b8 = local_2b8 & 0xffffffff00000000;
    lVar43 = FUN_0043c4e0(DAT_04c6f050);
    lVar41 = DAT_04c6f058;
    if (lVar43 != 0) {
      lVar41 = lVar43;
    }
    uVar26 = (ulong)(int)(uVar28 * 4 + 0x7f & 0xffffff80);
    if (((uVar26 <= *(ulong *)(lVar41 + 0x10)) && (*(long *)(lVar41 + 0x18) == lVar24 + uVar26)) &&
       (*(long *)(lVar41 + 0x28) != lVar24)) {
      *(long *)(lVar41 + 0x18) = lVar24;
      goto LAB_005dffd0;
    }
  }
  else {
    lVar24 = FUN_0043c4e0(DAT_04c6f050);
    lVar43 = DAT_04c6f058;
    if (lVar24 != 0) {
      lVar43 = lVar24;
    }
    uVar26 = (ulong)(int)(uVar38 * 4 + 0x7f & 0xffffff80);
    if (*(ulong *)(lVar43 + 0x10) < uVar26) {
LAB_005de5e0:
      lVar24 = FUN_00439510(lVar43,uVar26);
    }
    else {
      lVar24 = *(long *)(lVar43 + 0x18);
      if (*(ulong *)(lVar43 + 0x20) < lVar24 + uVar26) goto LAB_005de5e0;
      *(ulong *)(lVar43 + 0x18) = lVar24 + uVar26;
    }
    lVar23 = FUN_0043c4e0(DAT_04c6f050);
    lVar43 = DAT_04c6f058;
    if (lVar23 != 0) {
      lVar43 = lVar23;
    }
    if (*(ulong *)(lVar43 + 0x10) < uVar26) {
LAB_005de6a4:
      lVar23 = FUN_00439510(lVar43,uVar26);
    }
    else {
      lVar23 = *(long *)(lVar43 + 0x18);
      if (*(ulong *)(lVar43 + 0x20) < lVar23 + uVar26) goto LAB_005de6a4;
      *(ulong *)(lVar43 + 0x18) = lVar23 + uVar26;
    }
    if (0 < (int)uVar38) {
      uVar30 = 0;
      do {
        uVar48 = uVar30 & 0xffff;
        uVar28 = (int)uVar30 + 1;
        uVar30 = (ulong)uVar28;
        lVar46 = uVar48 * 4;
        lVar43 = *(long *)(lVar41 + 0x40) + (ulong)*(ushort *)(local_3c8 + uVar48 * 2) * 0x10;
        *(undefined4 *)(lVar24 + lVar46) = *(undefined4 *)(lVar43 + 8);
        *(undefined4 *)(lVar23 + lVar46) = *(undefined4 *)(lVar43 + 0xc);
      } while ((int)(uVar28 & 0xffff) < (int)uVar38);
    }
    uVar25 = FUN_0054cc80(*puVar29,lVar45 + 0x20,&local_2c0);
    lVar41 = *(long *)(param_4 + 0x18);
    if (param_7 == 2) {
      if (0 < (int)uVar2) {
        lVar43 = 0;
        do {
          uVar48 = (ulong)*(ushort *)(local_3c8 + lVar43 * 2);
          uVar30 = (ulong)*(ushort *)(*(long *)(lVar41 + 0x2d0) + uVar48 * 2);
          if (uVar30 != 0xffff) {
            lVar46 = *(long *)(param_4 + 0x20);
            uVar4 = *(undefined4 *)(*(long *)(lVar41 + 0x40) + uVar48 * 0x10 + 8);
            local_a0[0] = CONCAT44(uVar4,uVar4);
            lVar45 = *(long *)(lVar41 + 0x290) + uVar30 * 8;
            bVar40 = *(byte *)(lVar45 + 6);
            if (bVar40 != 0) {
              iVar50 = 0;
              bVar47 = 0;
              lVar31 = lVar46;
              while( true ) {
                puVar29 = (undefined8 *)(lVar46 + uVar48 * 0x10);
                uVar80 = puVar29[1];
                uVar59 = *puVar29;
                puVar34 = (ushort *)
                          (*(long *)(lVar41 + 0x280) +
                          ((ulong)((uint)*(ushort *)(lVar45 + 2) + (uint)bVar47) & 0xffff) * 6);
                auVar64 = *(undefined1 (*) [16])(lVar31 + (ulong)*puVar34 * 0x10);
                auVar73 = *(undefined1 (*) [16])(lVar31 + (ulong)puVar34[1] * 0x10);
                psVar1 = (short *)(*(long *)(lVar41 + 0x210) + (ulong)puVar34[2] * 4);
                pbVar39 = (byte *)(psVar1 + 1);
                if (*pbVar39 != 0) {
                  fVar85 = auVar64._0_4_ - (float)uVar59;
                  fVar90 = (float)((ulong)uVar59 >> 0x20);
                  fVar86 = auVar64._4_4_ - fVar90;
                  fVar87 = auVar64._8_4_ - (float)uVar80;
                  fVar92 = (float)((ulong)uVar80 >> 0x20);
                  fVar88 = auVar64._12_4_ - fVar92;
                  auVar5._4_4_ = fVar86;
                  auVar5._0_4_ = fVar85;
                  auVar5._8_4_ = fVar87;
                  auVar5._12_4_ = fVar88;
                  auVar6._4_4_ = fVar86;
                  auVar6._0_4_ = fVar85;
                  auVar6._8_4_ = fVar87;
                  auVar6._12_4_ = fVar88;
                  auVar64 = NEON_ext(auVar5,auVar6,4,1);
                  fVar89 = auVar73._0_4_ - (float)uVar59;
                  fVar90 = auVar73._4_4_ - fVar90;
                  fVar91 = auVar73._8_4_ - (float)uVar80;
                  fVar92 = auVar73._12_4_ - fVar92;
                  auVar11._4_4_ = fVar90;
                  auVar11._0_4_ = fVar89;
                  auVar11._8_4_ = fVar91;
                  auVar11._12_4_ = fVar92;
                  auVar12._4_4_ = fVar90;
                  auVar12._0_4_ = fVar89;
                  auVar12._8_4_ = fVar91;
                  auVar12._12_4_ = fVar92;
                  auVar73 = NEON_ext(auVar11,auVar12,4,1);
                  auVar81 = NEON_ext(auVar64,auVar64,8,1);
                  auVar84 = NEON_ext(auVar73,auVar73,8,1);
                  uVar78 = NEON_rev64(auVar81._0_8_,4);
                  bVar40 = 0;
                  uVar79 = NEON_rev64(auVar84._0_8_,4);
                  auVar65._0_4_ = fVar85 * auVar73._0_4_ - fVar89 * auVar64._0_4_;
                  auVar65._4_4_ = fVar86 * auVar73._4_4_ - fVar90 * auVar64._4_4_;
                  auVar65._8_4_ = fVar87 * (float)uVar79 - fVar91 * (float)uVar78;
                  auVar65._12_4_ =
                       fVar88 * (float)((ulong)uVar79 >> 0x20) -
                       fVar92 * (float)((ulong)uVar78 >> 0x20);
                  auVar64 = NEON_ext(auVar65,auVar65,4,1);
                  fVar57 = auVar64._0_4_;
                  fVar53 = auVar64._4_4_;
                  while( true ) {
                    pfVar37 = (float *)(*(long *)(lVar41 + 0x200) +
                                       (ulong)(ushort)(*psVar1 + (ushort)bVar40) * 8);
                    fVar56 = *pfVar37;
                    fVar55 = pfVar37[1];
                    local_350 = CONCAT44((float)((ulong)uVar59 >> 0x20) + fVar86 * fVar56 +
                                         fVar90 * fVar55,
                                         (float)uVar59 + fVar85 * fVar56 + fVar89 * fVar55);
                    uStack_348 = CONCAT44((float)((ulong)uVar80 >> 0x20) + fVar88 * fVar56 +
                                          fVar92 * fVar55,
                                          (float)uVar80 + fVar87 * fVar56 + fVar91 * fVar55);
                    FUN_0054cdc0(uVar25,&local_350,local_a0,(uint)*(ushort *)(lVar45 + 4) + iVar50,
                                 &local_320,&local_90,&local_b0);
                    local_b0 = local_b0 - (float)local_a0[0];
                    fStack_ac = fStack_ac - (float)((ulong)local_a0[0] >> 0x20);
                    if (local_b0 < 0.0) {
                      fVar56 = auVar65._0_4_ * auVar65._0_4_ + fVar57 * fVar57 + fVar53 * fVar53;
                      fVar69 = auVar65._0_4_ * auVar65._0_4_ + fVar57 * fVar57 + fVar53 * fVar53;
                      uVar59 = CONCAT44(fVar69,fVar56);
                      uVar80 = NEON_frsqrte(uVar59,4);
                      fVar55 = (float)uVar80;
                      fVar82 = (float)((ulong)uVar80 >> 0x20);
                      uVar80 = NEON_frsqrts(uVar59,CONCAT44(fVar82 * fVar82,fVar55 * fVar55),4);
                      fVar55 = fVar55 * (float)uVar80;
                      fVar82 = fVar82 * (float)((ulong)uVar80 >> 0x20);
                      iVar52 = -(uint)(fVar56 <= 0.0);
                      iVar54 = -(uint)(fVar69 <= 0.0);
                      uVar59 = NEON_frsqrts(uVar59,CONCAT44(fVar82 * fVar82,fVar55 * fVar55),4);
                      fVar55 = (float)uVar59 * fVar55;
                      fVar82 = (float)((ulong)uVar59 >> 0x20) * fVar82;
                      fVar56 = (float)CONCAT13((byte)((uint)fVar55 >> 0x18) &
                                               ~(byte)((uint)iVar52 >> 0x18),
                                               CONCAT12((byte)((uint)fVar55 >> 0x10) &
                                                        ~(byte)((uint)iVar52 >> 0x10),
                                                        CONCAT11((byte)((uint)fVar55 >> 8) &
                                                                 ~(byte)((uint)iVar52 >> 8),
                                                                 SUB41(fVar55,0) & ~(byte)iVar52)));
                      auVar60._0_4_ = fVar57 * fVar56;
                      fVar55 = (float)(CONCAT17((byte)((uint)fVar82 >> 0x18) &
                                                ~(byte)((uint)iVar54 >> 0x18),
                                                CONCAT16((byte)((uint)fVar82 >> 0x10) &
                                                         ~(byte)((uint)iVar54 >> 0x10),
                                                         CONCAT15((byte)((uint)fVar82 >> 8) &
                                                                  ~(byte)((uint)iVar54 >> 8),
                                                                  CONCAT14(SUB41(fVar82,0) &
                                                                           ~(byte)iVar54,fVar56))))
                                      >> 0x20);
                      auVar60._4_4_ = fVar53 * fVar55;
                      auVar60._8_4_ = auVar65._0_4_ * fVar56;
                      fVar55 = auVar65._4_4_ * fVar55;
                      auVar74._0_4_ = local_90 * auVar60._0_4_;
                      auVar74._4_4_ = fStack_8c * auVar60._4_4_;
                      auVar74._8_4_ = fStack_88 * auVar60._8_4_;
                      auVar74._12_4_ = fStack_84 * fVar55;
                      auVar64 = NEON_ext(auVar74,auVar74,8,1);
                      if (auVar74._0_4_ + auVar74._4_4_ + auVar64._0_4_ < 0.0) {
                        auVar60._0_4_ = -auVar60._0_4_;
                        auVar60._4_4_ = -auVar60._4_4_;
                        auVar60._8_4_ = -auVar60._8_4_;
                      }
                      auVar64 = *(undefined1 (*) [16])(lVar46 + uVar48 * 0x10);
                      puVar29 = (undefined8 *)(lVar46 + uVar48 * 0x10);
                      puVar29[1] = CONCAT44(auVar64._12_4_ - fStack_ac * fVar55,
                                            auVar64._8_4_ - local_b0 * auVar60._8_4_);
                      *puVar29 = CONCAT44(auVar64._4_4_ - fStack_ac * auVar60._4_4_,
                                          auVar64._0_4_ - local_b0 * auVar60._0_4_);
                    }
                    bVar40 = bVar40 + 1;
                    iVar50 = iVar50 + 1;
                    if (*pbVar39 <= bVar40) break;
                    puVar29 = (undefined8 *)(lVar46 + uVar48 * 0x10);
                    uVar80 = puVar29[1];
                    uVar59 = *puVar29;
                  }
                  bVar40 = *(byte *)(lVar45 + 6);
                }
                bVar47 = bVar47 + 1;
                if (bVar40 <= bVar47) break;
                lVar31 = *(long *)(param_4 + 0x20);
              }
            }
          }
          lVar43 = lVar43 + 1;
        } while (lVar43 != (int)uVar2);
        if (*(int *)(lVar41 + 0x278) != 0) {
          lVar43 = 0;
          do {
            uVar48 = (ulong)*(ushort *)(local_3c8 + lVar43 * 2);
            uVar30 = (ulong)*(ushort *)(*(long *)(lVar41 + 0x2c0) + uVar48 * 2);
            if (uVar30 != 0xffff) {
              lVar46 = *(long *)(param_4 + 0x20);
              uVar4 = *(undefined4 *)(*(long *)(lVar41 + 0x40) + uVar48 * 0x10 + 8);
              local_a0[0] = CONCAT44(uVar4,uVar4);
              lVar45 = *(long *)(lVar41 + 0x270) + uVar30 * 8;
              bVar40 = *(byte *)(lVar45 + 6);
              if (bVar40 != 0) {
                iVar50 = 0;
                bVar47 = 0;
                lVar31 = lVar46;
                while( true ) {
                  puVar29 = (undefined8 *)(lVar46 + uVar48 * 0x10);
                  uVar80 = puVar29[1];
                  uVar59 = *puVar29;
                  puVar34 = (ushort *)
                            (*(long *)(lVar41 + 0x260) +
                            (ulong)(ushort)(*(short *)(lVar45 + 2) + (ushort)bVar47) * 4);
                  auVar64 = *(undefined1 (*) [16])(lVar31 + (ulong)*puVar34 * 0x10);
                  psVar1 = (short *)(*(long *)(lVar41 + 0x1f0) + (ulong)puVar34[1] * 4);
                  pbVar39 = (byte *)(psVar1 + 1);
                  if (*pbVar39 != 0) {
                    fVar90 = (float)uVar59;
                    uVar30 = (ulong)uVar59 >> 0x20;
                    fVar92 = (float)uVar80;
                    uVar17 = (ulong)uVar80 >> 0x20;
                    bVar40 = 0;
                    while( true ) {
                      fVar57 = *(float *)(*(long *)(lVar41 + 0x1e0) +
                                         (ulong)(ushort)(*psVar1 + (ushort)bVar40) * 4);
                      local_350 = CONCAT44((float)((ulong)uVar59 >> 0x20) +
                                           (auVar64._4_4_ - (float)uVar30) * fVar57,
                                           (float)uVar59 + (auVar64._0_4_ - fVar90) * fVar57);
                      uStack_348 = CONCAT44((float)((ulong)uVar80 >> 0x20) +
                                            (auVar64._12_4_ - (float)uVar17) * fVar57,
                                            (float)uVar80 + (auVar64._8_4_ - fVar92) * fVar57);
                      FUN_0054cdc0(uVar25,&local_350,local_a0,(uint)*(ushort *)(lVar45 + 4) + iVar50
                                   ,&local_320,&local_90,&local_b0);
                      local_b0 = local_b0 - (float)local_a0[0];
                      fStack_ac = fStack_ac - (float)((ulong)local_a0[0] >> 0x20);
                      if (local_b0 < 0.0) {
                        auVar73 = *(undefined1 (*) [16])(lVar46 + uVar48 * 0x10);
                        puVar29 = (undefined8 *)(lVar46 + uVar48 * 0x10);
                        puVar29[1] = CONCAT44(auVar73._12_4_ - fStack_ac * fStack_84,
                                              auVar73._8_4_ - local_b0 * fStack_88);
                        *puVar29 = CONCAT44(auVar73._4_4_ - fStack_ac * fStack_8c,
                                            auVar73._0_4_ - local_b0 * local_90);
                      }
                      bVar40 = bVar40 + 1;
                      iVar50 = iVar50 + 1;
                      if (*pbVar39 <= bVar40) break;
                      puVar29 = (undefined8 *)(lVar46 + uVar48 * 0x10);
                      uVar80 = puVar29[1];
                      uVar59 = *puVar29;
                    }
                    bVar40 = *(byte *)(lVar45 + 6);
                  }
                  bVar47 = bVar47 + 1;
                  if (bVar40 <= bVar47) break;
                  lVar31 = *(long *)(param_4 + 0x20);
                }
              }
            }
            lVar43 = lVar43 + 1;
          } while (lVar43 != (int)uVar2);
        }
      }
    }
    else if (0 < (int)uVar2) {
      lVar43 = 0;
      do {
        uVar48 = (ulong)*(ushort *)(local_3c8 + lVar43 * 2);
        uVar30 = (ulong)*(ushort *)(*(long *)(lVar41 + 0x2b0) + uVar48 * 2);
        if (uVar30 != 0xffff) {
          uVar4 = *(undefined4 *)(*(long *)(lVar41 + 0x40) + uVar48 * 0x10 + 8);
          local_a0[0] = CONCAT44(uVar4,uVar4);
          lVar45 = *(long *)(lVar41 + 0x250);
          pbVar39 = (byte *)(lVar45 + uVar30 * 6 + 4);
          bVar40 = *pbVar39;
          if (bVar40 != 0) {
            lVar31 = *(long *)(param_4 + 0x20);
            bVar47 = 0;
            lVar46 = lVar31;
            while( true ) {
              puVar29 = (undefined8 *)(lVar31 + uVar48 * 0x10);
              uVar80 = puVar29[1];
              uVar59 = *puVar29;
              puVar34 = (ushort *)
                        (*(long *)(lVar41 + 0x240) +
                        ((ulong)((uint)*(ushort *)(lVar45 + uVar30 * 6 + 2) + (uint)bVar47) & 0xffff
                        ) * 6);
              auVar64 = *(undefined1 (*) [16])(lVar46 + (ulong)*puVar34 * 0x10);
              auVar73 = *(undefined1 (*) [16])(lVar46 + (ulong)puVar34[1] * 0x10);
              psVar1 = (short *)(*(long *)(lVar41 + 0x210) + (ulong)puVar34[2] * 4);
              pbVar44 = (byte *)(psVar1 + 1);
              if (*pbVar44 != 0) {
                fVar85 = auVar64._0_4_ - (float)uVar59;
                fVar90 = (float)((ulong)uVar59 >> 0x20);
                fVar86 = auVar64._4_4_ - fVar90;
                fVar87 = auVar64._8_4_ - (float)uVar80;
                fVar92 = (float)((ulong)uVar80 >> 0x20);
                fVar88 = auVar64._12_4_ - fVar92;
                auVar7._4_4_ = fVar86;
                auVar7._0_4_ = fVar85;
                auVar7._8_4_ = fVar87;
                auVar7._12_4_ = fVar88;
                auVar8._4_4_ = fVar86;
                auVar8._0_4_ = fVar85;
                auVar8._8_4_ = fVar87;
                auVar8._12_4_ = fVar88;
                auVar64 = NEON_ext(auVar7,auVar8,4,1);
                fVar89 = auVar73._0_4_ - (float)uVar59;
                fVar90 = auVar73._4_4_ - fVar90;
                fVar91 = auVar73._8_4_ - (float)uVar80;
                fVar92 = auVar73._12_4_ - fVar92;
                auVar13._4_4_ = fVar90;
                auVar13._0_4_ = fVar89;
                auVar13._8_4_ = fVar91;
                auVar13._12_4_ = fVar92;
                auVar14._4_4_ = fVar90;
                auVar14._0_4_ = fVar89;
                auVar14._8_4_ = fVar91;
                auVar14._12_4_ = fVar92;
                auVar73 = NEON_ext(auVar13,auVar14,4,1);
                auVar81 = NEON_ext(auVar64,auVar64,8,1);
                auVar84 = NEON_ext(auVar73,auVar73,8,1);
                uVar78 = NEON_rev64(auVar81._0_8_,4);
                bVar40 = 0;
                uVar79 = NEON_rev64(auVar84._0_8_,4);
                auVar66._0_4_ = fVar85 * auVar73._0_4_ - fVar89 * auVar64._0_4_;
                auVar66._4_4_ = fVar86 * auVar73._4_4_ - fVar90 * auVar64._4_4_;
                auVar66._8_4_ = fVar87 * (float)uVar79 - fVar91 * (float)uVar78;
                auVar66._12_4_ =
                     fVar88 * (float)((ulong)uVar79 >> 0x20) -
                     fVar92 * (float)((ulong)uVar78 >> 0x20);
                auVar64 = NEON_ext(auVar66,auVar66,4,1);
                fVar57 = auVar64._0_4_;
                fVar53 = auVar64._4_4_;
                while( true ) {
                  pfVar37 = (float *)(*(long *)(lVar41 + 0x200) +
                                     (ulong)(ushort)(*psVar1 + (ushort)bVar40) * 8);
                  fVar56 = *pfVar37;
                  fVar55 = pfVar37[1];
                  local_350 = CONCAT44((float)((ulong)uVar59 >> 0x20) + fVar86 * fVar56 +
                                       fVar90 * fVar55,
                                       (float)uVar59 + fVar85 * fVar56 + fVar89 * fVar55);
                  uStack_348 = CONCAT44((float)((ulong)uVar80 >> 0x20) + fVar88 * fVar56 +
                                        fVar92 * fVar55,
                                        (float)uVar80 + fVar87 * fVar56 + fVar91 * fVar55);
                  FUN_0054cdc0(uVar25,&local_350,local_a0,0xffff,&local_320,&local_90,&local_b0);
                  local_b0 = local_b0 - (float)local_a0[0];
                  fStack_ac = fStack_ac - (float)((ulong)local_a0[0] >> 0x20);
                  if (local_b0 < 0.0) {
                    fVar56 = auVar66._0_4_ * auVar66._0_4_ + fVar57 * fVar57 + fVar53 * fVar53;
                    fVar69 = auVar66._0_4_ * auVar66._0_4_ + fVar57 * fVar57 + fVar53 * fVar53;
                    uVar59 = CONCAT44(fVar69,fVar56);
                    uVar80 = NEON_frsqrte(uVar59,4);
                    fVar55 = (float)uVar80;
                    fVar82 = (float)((ulong)uVar80 >> 0x20);
                    uVar80 = NEON_frsqrts(uVar59,CONCAT44(fVar82 * fVar82,fVar55 * fVar55),4);
                    fVar55 = fVar55 * (float)uVar80;
                    fVar82 = fVar82 * (float)((ulong)uVar80 >> 0x20);
                    iVar50 = -(uint)(fVar56 <= 0.0);
                    iVar52 = -(uint)(fVar69 <= 0.0);
                    uVar59 = NEON_frsqrts(uVar59,CONCAT44(fVar82 * fVar82,fVar55 * fVar55),4);
                    fVar55 = (float)uVar59 * fVar55;
                    fVar82 = (float)((ulong)uVar59 >> 0x20) * fVar82;
                    fVar56 = (float)CONCAT13((byte)((uint)fVar55 >> 0x18) &
                                             ~(byte)((uint)iVar50 >> 0x18),
                                             CONCAT12((byte)((uint)fVar55 >> 0x10) &
                                                      ~(byte)((uint)iVar50 >> 0x10),
                                                      CONCAT11((byte)((uint)fVar55 >> 8) &
                                                               ~(byte)((uint)iVar50 >> 8),
                                                               SUB41(fVar55,0) & ~(byte)iVar50)));
                    auVar61._0_4_ = fVar57 * fVar56;
                    fVar55 = (float)(CONCAT17((byte)((uint)fVar82 >> 0x18) &
                                              ~(byte)((uint)iVar52 >> 0x18),
                                              CONCAT16((byte)((uint)fVar82 >> 0x10) &
                                                       ~(byte)((uint)iVar52 >> 0x10),
                                                       CONCAT15((byte)((uint)fVar82 >> 8) &
                                                                ~(byte)((uint)iVar52 >> 8),
                                                                CONCAT14(SUB41(fVar82,0) &
                                                                         ~(byte)iVar52,fVar56)))) >>
                                    0x20);
                    auVar61._4_4_ = fVar53 * fVar55;
                    auVar61._8_4_ = auVar66._0_4_ * fVar56;
                    fVar55 = auVar66._4_4_ * fVar55;
                    auVar75._0_4_ = local_90 * auVar61._0_4_;
                    auVar75._4_4_ = fStack_8c * auVar61._4_4_;
                    auVar75._8_4_ = fStack_88 * auVar61._8_4_;
                    auVar75._12_4_ = fStack_84 * fVar55;
                    auVar64 = NEON_ext(auVar75,auVar75,8,1);
                    if (auVar75._0_4_ + auVar75._4_4_ + auVar64._0_4_ < 0.0) {
                      auVar61._0_4_ = -auVar61._0_4_;
                      auVar61._4_4_ = -auVar61._4_4_;
                      auVar61._8_4_ = -auVar61._8_4_;
                    }
                    auVar64 = *(undefined1 (*) [16])(lVar31 + uVar48 * 0x10);
                    puVar29 = (undefined8 *)(lVar31 + uVar48 * 0x10);
                    puVar29[1] = CONCAT44(auVar64._12_4_ - fStack_ac * fVar55,
                                          auVar64._8_4_ - local_b0 * auVar61._8_4_);
                    *puVar29 = CONCAT44(auVar64._4_4_ - fStack_ac * auVar61._4_4_,
                                        auVar64._0_4_ - local_b0 * auVar61._0_4_);
                  }
                  bVar40 = bVar40 + 1;
                  if (*pbVar44 <= bVar40) break;
                  puVar29 = (undefined8 *)(lVar31 + uVar48 * 0x10);
                  uVar80 = puVar29[1];
                  uVar59 = *puVar29;
                }
                bVar40 = *pbVar39;
              }
              bVar47 = bVar47 + 1;
              if (bVar40 <= bVar47) break;
              lVar46 = *(long *)(param_4 + 0x20);
            }
          }
        }
        lVar43 = lVar43 + 1;
      } while (lVar43 != (int)uVar2);
      if (*(int *)(lVar41 + 0x238) != 0) {
        lVar43 = 0;
        do {
          uVar48 = (ulong)*(ushort *)(local_3c8 + lVar43 * 2);
          uVar30 = (ulong)*(ushort *)(*(long *)(lVar41 + 0x2a0) + uVar48 * 2);
          if (uVar30 != 0xffff) {
            uVar4 = *(undefined4 *)(*(long *)(lVar41 + 0x40) + uVar48 * 0x10 + 8);
            local_a0[0] = CONCAT44(uVar4,uVar4);
            lVar45 = *(long *)(lVar41 + 0x230);
            pbVar39 = (byte *)(lVar45 + uVar30 * 6 + 4);
            bVar40 = *pbVar39;
            if (bVar40 != 0) {
              lVar31 = *(long *)(param_4 + 0x20);
              bVar47 = 0;
              lVar46 = lVar31;
              while( true ) {
                puVar29 = (undefined8 *)(lVar31 + uVar48 * 0x10);
                uVar80 = puVar29[1];
                uVar59 = *puVar29;
                puVar34 = (ushort *)
                          (*(long *)(lVar41 + 0x220) +
                          (ulong)(ushort)(*(short *)(lVar45 + uVar30 * 6 + 2) + (ushort)bVar47) * 4)
                ;
                auVar64 = *(undefined1 (*) [16])(lVar46 + (ulong)*puVar34 * 0x10);
                psVar1 = (short *)(*(long *)(lVar41 + 0x1f0) + (ulong)puVar34[1] * 4);
                pbVar44 = (byte *)(psVar1 + 1);
                if (*pbVar44 != 0) {
                  fVar90 = (float)uVar59;
                  uVar17 = (ulong)uVar59 >> 0x20;
                  fVar92 = (float)uVar80;
                  uVar18 = (ulong)uVar80 >> 0x20;
                  bVar40 = 0;
                  while( true ) {
                    fVar57 = *(float *)(*(long *)(lVar41 + 0x1e0) +
                                       (ulong)(ushort)(*psVar1 + (ushort)bVar40) * 4);
                    local_350 = CONCAT44((float)((ulong)uVar59 >> 0x20) +
                                         (auVar64._4_4_ - (float)uVar17) * fVar57,
                                         (float)uVar59 + (auVar64._0_4_ - fVar90) * fVar57);
                    uStack_348 = CONCAT44((float)((ulong)uVar80 >> 0x20) +
                                          (auVar64._12_4_ - (float)uVar18) * fVar57,
                                          (float)uVar80 + (auVar64._8_4_ - fVar92) * fVar57);
                    FUN_0054cdc0(uVar25,&local_350,local_a0,0xffff,&local_320,&local_90,&local_b0);
                    local_b0 = local_b0 - (float)local_a0[0];
                    fStack_ac = fStack_ac - (float)((ulong)local_a0[0] >> 0x20);
                    if (local_b0 < 0.0) {
                      auVar73 = *(undefined1 (*) [16])(lVar31 + uVar48 * 0x10);
                      puVar29 = (undefined8 *)(lVar31 + uVar48 * 0x10);
                      puVar29[1] = CONCAT44(auVar73._12_4_ - fStack_ac * fStack_84,
                                            auVar73._8_4_ - local_b0 * fStack_88);
                      *puVar29 = CONCAT44(auVar73._4_4_ - fStack_ac * fStack_8c,
                                          auVar73._0_4_ - local_b0 * local_90);
                    }
                    bVar40 = bVar40 + 1;
                    if (*pbVar44 <= bVar40) break;
                    puVar29 = (undefined8 *)(lVar31 + uVar48 * 0x10);
                    uVar80 = puVar29[1];
                    uVar59 = *puVar29;
                  }
                  bVar40 = *pbVar39;
                }
                bVar47 = bVar47 + 1;
                if (bVar40 <= bVar47) break;
                lVar46 = *(long *)(param_4 + 0x20);
              }
            }
          }
          lVar43 = lVar43 + 1;
        } while (lVar43 != (int)uVar2);
      }
    }
    lVar43 = FUN_0043c4e0(DAT_04c6f050);
    lVar41 = DAT_04c6f058;
    if (lVar43 != 0) {
      lVar41 = lVar43;
    }
    if (((*(ulong *)(lVar41 + 0x10) < uVar26) || (*(long *)(lVar41 + 0x18) != lVar23 + uVar26)) ||
       (*(long *)(lVar41 + 0x28) == lVar23)) {
      FUN_00439980(lVar41,lVar23,uVar26);
    }
    else {
      *(long *)(lVar41 + 0x18) = lVar23;
    }
    lVar43 = FUN_0043c4e0(DAT_04c6f050);
    lVar41 = DAT_04c6f058;
    if (lVar43 != 0) {
      lVar41 = lVar43;
    }
    if (((uVar26 <= *(ulong *)(lVar41 + 0x10)) && (*(long *)(lVar41 + 0x18) == lVar24 + uVar26)) &&
       (*(long *)(lVar41 + 0x28) != lVar24)) {
      *(long *)(lVar41 + 0x18) = lVar24;
      goto LAB_005dffd0;
    }
  }
  FUN_00439980(lVar41,lVar24,uVar26);
LAB_005dffd0:
  uVar28 = local_2e8;
  local_2f8 = (ulong)local_2f8._4_4_ << 0x20;
  lVar43 = FUN_0043c4e0(*(undefined2 *)PTR_DAT_04bd4d10);
  lVar41 = DAT_04c6f058;
  if (lVar43 != 0) {
    lVar41 = lVar43;
  }
  uVar26 = (ulong)(int)(uVar28 * 2 + 0x7f & 0xffffff80);
  if (((*(ulong *)(lVar41 + 0x10) < uVar26) || (*(long *)(lVar41 + 0x18) != uVar26 + local_3c8)) ||
     (*(long *)(lVar41 + 0x28) == local_3c8)) {
    FUN_00439980();
  }
  else {
    *(long *)(lVar41 + 0x18) = local_3c8;
  }
  return;
}

