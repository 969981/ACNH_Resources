
void FUN_01b27570(undefined4 *param_1,char *param_2,undefined4 *param_3,short *param_4,long param_5,
                 byte *param_6,ushort *param_7,uint param_8)

{
  undefined *puVar1;
  undefined1 *puVar2;
  uint uVar3;
  byte bVar4;
  long *plVar5;
  undefined *puVar6;
  bool bVar7;
  int iVar8;
  uint uVar9;
  undefined4 uVar10;
  uint uVar11;
  undefined8 uVar12;
  long lVar13;
  ulong uVar14;
  char cVar15;
  uint *puVar16;
  ushort uVar17;
  ushort uVar18;
  uint *puVar19;
  ushort uVar20;
  ushort uVar21;
  ushort uVar22;
  uint uVar23;
  int *piVar24;
  long lVar25;
  uint uVar26;
  uint uVar27;
  undefined8 uVar28;
  uint uVar29;
  uint uVar30;
  uint uVar31;
  undefined *local_1fa0;
  undefined8 local_1f98;
  uint *local_1f90;
  undefined8 local_1f88;
  undefined8 uStack_1f80;
  undefined4 local_1f78;
  undefined *local_1f70;
  undefined1 *puStack_1f68;
  undefined4 local_1f60;
  undefined1 local_1f5c [63];
  undefined1 local_1f1d;
  undefined *local_1f18;
  undefined1 *puStack_1f10;
  undefined4 local_1f08;
  undefined1 local_1f04 [63];
  undefined1 local_1ec5;
  undefined1 auStack_1ec0 [2];
  undefined1 auStack_1ebe [478];
  undefined1 auStack_1ce0 [8];
  undefined1 auStack_1cd8 [288];
  undefined1 auStack_1bb8 [256];
  undefined1 auStack_1ab8 [1504];
  undefined1 auStack_14d8 [1528];
  undefined1 auStack_ee0 [1528];
  undefined1 auStack_8e8 [1528];
  uint local_2f0;
  undefined4 local_2e8;
  undefined8 local_2e0;
  undefined8 *local_2d8;
  undefined **local_2d0;
  undefined8 local_2c8;
  long local_2c0;
  undefined8 local_2b8;
  undefined8 local_2b0;
  undefined **local_2a8;
  undefined8 local_2a0;
  undefined8 local_298;
  undefined8 local_290;
  undefined *local_288;
  undefined *local_280;
  undefined8 local_278;
  long local_270;
  undefined8 local_268;
  undefined **local_260;
  ulong local_258;
  undefined *local_250;
  undefined8 *local_248;
  undefined *local_240;
  undefined8 local_238;
  undefined *local_230;
  undefined8 local_228;
  long local_220;
  long *local_218;
  undefined8 local_210;
  undefined8 local_208;
  undefined *local_200;
  undefined8 local_1e0;
  undefined8 local_1d8;
  undefined *local_1d0;
  undefined8 local_1b0;
  undefined8 local_1a8;
  undefined *local_1a0;
  undefined8 local_180;
  undefined8 local_178;
  undefined *local_170;
  undefined8 local_150;
  undefined8 local_148;
  undefined *local_140;
  undefined8 local_120;
  undefined8 local_118;
  undefined *local_110;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined *local_e0;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined *local_b0;
  undefined4 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined4 local_78;
  undefined2 local_74;
  uint local_70;
  
  *param_1 = 0;
  *param_2 = '\0';
  *param_3 = 0;
  puVar1 = PTR_DAT_04bb37e0;
  *param_4 = *(short *)PTR_DAT_04bb37e0;
  *(undefined *)(param_4 + 1) = puVar1[2];
  *(undefined *)((long)param_4 + 3) = puVar1[3];
  *(undefined4 *)(param_4 + 2) = *(undefined4 *)(puVar1 + 4);
  if (*(char *)(param_5 + 0x5c) != '\0') {
    return;
  }
  if (*(char *)(param_5 + 0xb8) != '\x01') {
    return;
  }
  uVar12 = FUN_0272eca4(param_5 + 0xbc,0);
  local_278 = *(undefined **)param_7;
  lVar13 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_278);
  local_1fa0 = (undefined *)(lVar13 + -0x93a80);
  local_278 = (undefined *)nn::time::ToCalendarTimeInUtc((PosixTime *)&local_1fa0);
  local_2c8 = *(undefined **)param_7;
  local_1fa0 = (undefined *)nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_2c8);
  iVar8 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_1fa0);
  uVar11 = (uint)uVar12;
  uVar3 = uVar11 << 0x10 | (int)uVar11 >> 0x18 | ((int)(uVar11 << 8) >> 0x18) << 8;
  if (uVar3 < ((int)local_278._2_1_ << 8 | (uint)(ushort)local_278 << 0x10 | (int)local_278._3_1_))
  {
    return;
  }
  if ((uint)(iVar8 >> 0x18 | iVar8 << 0x10 | ((iVar8 << 8) >> 0x18) << 8) < uVar3) {
    return;
  }
  puStack_1f68 = local_1f5c;
  local_1f1d = 0;
  local_1f70 = PTR_DAT_04bb2bc0 + 0x10;
  local_1f60 = 0x40;
  local_1f08 = 0x40;
  puStack_1f10 = local_1f04;
  local_1ec5 = 0;
  local_1f90 = (uint *)CONCAT44(local_1f90._4_4_,0xf0);
  local_1fa0 = &DAT_04a379f8;
  local_1f98 = auStack_1ec0;
  local_1f18 = local_1f70;
  memset(auStack_1ec0,0,0x1e0);
  puVar2 = auStack_1ce0;
  if (auStack_1ce0 <= auStack_1ebe) {
    puVar2 = auStack_1ebe;
  }
  memset(auStack_1ec0,0,(size_t)(puVar2 + (-0xe0 - (long)&local_1fa0)));
  local_2c0 = param_5 + 0x12e;
  local_2c8 = (undefined *)CONCAT44(local_2c8._4_4_,0xf0);
  memset(auStack_1ec0,0,((ulong)(puVar2 + ~(ulong)auStack_1ec0) & 0xfffffffffffffffe) + 2);
  local_1f90._0_5_ = (uint5)(uint)local_1f90;
  local_1f88 = 0xffffffff;
  uStack_1f80 = 0xffffffff00000000;
  local_1f78 = 0xffffffff;
  local_1f5c[0] = 0;
  local_1f04[0] = 0;
  local_258 = 0;
  local_260 = (undefined **)0x0;
  local_268 = 0;
  local_250 = (undefined *)CONCAT71(local_250._1_7_,1);
  local_250 = (undefined *)((ulong)local_250 & 0xffffffff);
  local_278 = PTR_DAT_04bc0cd8 + 0x10;
  local_270 = 0;
  FUN_02906b00(&local_278,&local_1fa0,&local_2c8);
  local_228 = 0;
  local_220 = 0;
  local_218 = (long *)0x0;
  local_250 = PTR_DAT_04bc0ba0 + 0x10;
  local_230 = PTR_DAT_04bdf1d8 + 0x10;
  local_278 = (undefined *)((ulong)local_278 & 0xffffffffffffff00);
  local_268 = local_268 & 0xffffffffffffff00;
  local_258 = local_258 & 0xffffffff00000000;
  local_270 = 0;
  local_238 = 0;
  local_2e8 = 1;
  local_240 = PTR_FUN_04bc0b98;
  lVar13 = *(long *)(*(long *)PTR_DAT_04bb28f8 + 0x8820);
  local_260 = &local_1fa0;
  local_248 = &local_278;
  plVar5 = (long *)PTR_DAT_04bb29d0;
  if (lVar13 == 0) goto LAB_01b278f4;
  local_2c8 = PTR_DAT_04bb5070 + 0x10;
  local_288 = PTR_DAT_04bb2020 + 0x10;
  local_2b8 = 0;
  local_2c0 = CONCAT53(local_2c0._3_5_,0x10001);
  local_2a8 = &local_250;
  local_2b0 = *(undefined8 *)(*(long *)PTR_DAT_04bb28f8 + 0x8808);
  local_2a0 = 0;
  local_298 = 0;
  local_290 = 0;
  local_280 = PTR_DAT_04bb2120;
  local_2e0 = 0;
  local_2d8 = &local_2c8;
  local_2d0 = &local_230;
  FUN_03f45184(lVar13,&local_2e0);
  plVar5 = (long *)PTR_DAT_04bb29d0;
  while( true ) {
    if ((int)local_228 == 2) break;
LAB_01b278f4:
    nn::os::ConvertToTimeSpan(*plVar5 / 1000);
    nn::os::SleepThread();
  }
  if (2 < (int)local_258) {
    *param_3 = 0xfffffffd;
    FUN_03f45838(&local_230);
    FUN_03f45838(&local_230);
    plVar5 = local_218;
    if (local_218 == (long *)0x0) {
      return;
    }
    (**(code **)(*local_218 + 0x20))(local_218);
    iVar8 = local_228._4_4_ + -1;
    if (0 < local_228._4_4_) {
      local_228 = CONCAT44(iVar8,(int)local_228);
      if (iVar8 != 0) goto LAB_01b27cc8;
    }
    if (local_220 != 0) {
      FUN_03f44508();
      local_220 = 0;
    }
LAB_01b27cc8:
    (**(code **)(*plVar5 + 0x28))(plVar5);
    return;
  }
  FUN_03f45838(&local_230);
  FUN_03f45838(&local_230);
  plVar5 = local_218;
  if (local_218 != (long *)0x0) {
    (**(code **)(*local_218 + 0x20))(local_218);
    iVar8 = local_228._4_4_ + -1;
    if (local_228._4_4_ < 1) {
LAB_01b27960:
      if (local_220 != 0) {
        FUN_03f44508();
        local_220 = 0;
      }
    }
    else {
      local_228 = CONCAT44(iVar8,(int)local_228);
      if (iVar8 == 0) goto LAB_01b27960;
    }
    (**(code **)(*plVar5 + 0x28))(plVar5);
  }
  *param_4 = *(short *)(param_5 + 0xc0);
  *(undefined1 *)(param_4 + 1) = *(undefined1 *)(param_5 + 0xc2);
  *(undefined1 *)((long)param_4 + 3) = *(undefined1 *)(param_5 + 0xc3);
  *(undefined4 *)(param_4 + 2) = *(undefined4 *)(param_5 + 0xc4);
  puVar1 = PTR_DAT_04bb43c0;
  lVar25 = *(long *)PTR_DAT_04bb43c0;
  uVar9 = FUN_0277d6c4(param_4);
  lVar13 = *(long *)puVar1;
  if (lVar13 != 0) {
    lVar25 = *(long *)(lVar25 + 0x57e58);
    uVar9 = (uVar9 & 0xffff) - (uint)*(ushort *)(lVar25 + 0x1f8);
    if ((uVar9 < *(uint *)(lVar25 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar25 + 0x1e0) + (long)(int)uVar9 * 8) != 0)) {
      local_1f90 = (uint *)0x0;
      local_1f98 = *(undefined1 **)param_4;
      local_1fa0 = PTR_DAT_04bc0510 + 0x10;
      uVar9 = FUN_0277d6c4(&local_1f98);
      if (*(long *)puVar1 != 0) {
        lVar13 = *(long *)(lVar13 + 0x57e58);
        uVar9 = (uVar9 & 0xffff) - (uint)*(ushort *)(lVar13 + 0x1f8);
        if ((uVar9 < *(uint *)(lVar13 + 0x1d8)) &&
           (*(long *)(*(long *)(lVar13 + 0x1e0) + (long)(int)uVar9 * 8) != 0)) {
          lVar13 = *(long *)PTR_DAT_04bc0428;
          uVar9 = FUN_0277d6c4(param_4);
          uVar9 = (uVar9 & 0xffff) - (uint)*(ushort *)(lVar13 + 0x1f8);
          if (uVar9 < *(uint *)(lVar13 + 0x1d8)) {
            puVar16 = *(uint **)(*(long *)(lVar13 + 0x1e0) + (long)(int)uVar9 * 8);
            if (puVar16 != (uint *)0x0) {
              local_1f90 = puVar16;
            }
          }
        }
      }
      uVar14 = FUN_01b032d0(&local_1fa0);
      uVar9 = local_1f98._3_1_ & 3;
      if ((uVar14 & 1) == 0) {
        uVar9 = 0;
      }
      local_278 = (undefined *)CONCAT44(local_278._4_4_,uVar9);
      uVar14 = FUN_01b032d0(&local_1fa0);
      bVar4 = local_1f98._3_1_ >> 2 & 0xf;
      if ((uVar14 & 1) == 0) {
        bVar4 = 1;
      }
      if (((uint)local_278 == 3) && (bVar4 != 0xf)) {
        iVar8 = FUN_01b03610();
        local_2c8 = (undefined *)CONCAT44(local_2c8._4_4_,iVar8);
        if (iVar8 != 0) goto LAB_01b27b08;
      }
      uVar14 = FUN_01af2868(&local_1fa0);
      if ((uVar14 & 1) != 0) {
        FUN_01b079ec(&local_278,&local_1fa0);
        *(uint *)param_4 = (uint)local_278;
        *(undefined4 *)(param_4 + 2) = local_278._4_4_;
      }
    }
  }
LAB_01b27b08:
  if (*param_4 != -2) {
    local_1f90 = (uint *)0x0;
    lVar13 = *(long *)puVar1;
    local_1fa0 = PTR_DAT_04bc0510 + 0x10;
    local_1f98 = (undefined1 *)CONCAT44(*(undefined4 *)(param_4 + 2),CONCAT22(param_4[1],*param_4));
    uVar9 = FUN_0277d6c4(&local_1f98);
    if (*(long *)puVar1 == 0) {
LAB_01b27cec:
      uVar9 = 0xbc;
      local_278 = (undefined *)CONCAT44(local_278._4_4_,0x52);
      bVar7 = false;
    }
    else {
      lVar13 = *(long *)(lVar13 + 0x57e58);
      uVar9 = (uVar9 & 0xffff) - (uint)*(ushort *)(lVar13 + 0x1f8);
      if ((*(uint *)(lVar13 + 0x1d8) <= uVar9) ||
         (*(long *)(*(long *)(lVar13 + 0x1e0) + (long)(int)uVar9 * 8) == 0)) {
LAB_01b27cdc:
        goto LAB_01b27cec;
      }
      lVar13 = *(long *)PTR_DAT_04bc0428;
      uVar9 = FUN_0277d6c4(param_4);
      uVar9 = (uVar9 & 0xffff) - (uint)*(ushort *)(lVar13 + 0x1f8);
      if ((*(uint *)(lVar13 + 0x1d8) <= uVar9) ||
         (puVar16 = *(uint **)(*(long *)(lVar13 + 0x1e0) + (long)(int)uVar9 * 8),
         puVar16 == (uint *)0x0)) goto LAB_01b27cdc;
      uVar17 = 0;
      uVar9 = *puVar16;
      if ((uVar9 != 0) && (puVar16 != (uint *)(ulong)uVar9)) {
        puVar19 = (uint *)((long)puVar16 - (long)(ulong)uVar9);
        uVar17 = 0;
        if (*puVar19 != 0) {
          uVar9 = puVar19[1];
          if ((uVar9 != 0) && ((ulong)(ushort)puVar19[2] != 0)) {
            lVar13 = 0xc;
            if (*(char *)((long)puVar19 + 10) != '\0') {
              lVar13 = 0x1c;
            }
            lVar13 = (long)puVar19 + lVar13 + (ulong)(ushort)puVar19[2] * 8;
            if (lVar13 != 0) {
              uVar26 = 0;
              if ((ulong)uVar9 != 0) {
                uVar26 = (uint)((ulong)((long)puVar16 - lVar13) / (ulong)uVar9);
              }
              if (*puVar19 <= uVar26) {
                uVar26 = 0xffffffff;
              }
              if ((uVar26 < *(uint *)PTR_DAT_04bc00c8) &&
                 (uVar17 = *(ushort *)(*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar26 * 2),
                 uVar17 < 0xbd)) goto LAB_01b286e8;
            }
          }
          uVar17 = 0;
        }
      }
LAB_01b286e8:
      uVar20 = 0;
      uVar9 = *puVar16;
      if ((uVar9 != 0) && (puVar16 != (uint *)(ulong)uVar9)) {
        puVar19 = (uint *)((long)puVar16 - (long)(ulong)uVar9);
        if ((*puVar19 == 0) ||
           ((uVar9 = puVar19[1], uVar9 == 0 || ((ulong)(ushort)puVar19[2] == 0)))) {
LAB_01b28784:
          uVar20 = 0;
        }
        else {
          lVar13 = 0xc;
          if (*(char *)((long)puVar19 + 10) != '\0') {
            lVar13 = 0x1c;
          }
          lVar13 = (long)puVar19 + lVar13 + (ulong)(ushort)puVar19[2] * 8;
          uVar20 = 0;
          if (lVar13 != 0) {
            uVar26 = 0;
            if ((ulong)uVar9 != 0) {
              uVar26 = (uint)((ulong)((long)puVar16 - lVar13) / (ulong)uVar9);
            }
            if (*puVar19 <= uVar26) {
              uVar26 = 0xffffffff;
            }
            if ((*(uint *)PTR_DAT_04bc00c8 <= uVar26) ||
               (uVar20 = *(ushort *)(*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar26 * 2),
               0xbc < uVar20)) goto LAB_01b28784;
          }
        }
      }
      uVar18 = 0;
      uVar9 = *puVar16;
      if ((uVar9 != 0) && (puVar16 != (uint *)(ulong)uVar9)) {
        puVar19 = (uint *)((long)puVar16 - (long)(ulong)uVar9);
        uVar18 = 0;
        if (*puVar19 != 0) {
          uVar9 = puVar19[1];
          if ((uVar9 != 0) && ((ulong)(ushort)puVar19[2] != 0)) {
            lVar13 = 0xc;
            if (*(char *)((long)puVar19 + 10) != '\0') {
              lVar13 = 0x1c;
            }
            lVar13 = (long)puVar19 + lVar13 + (ulong)(ushort)puVar19[2] * 8;
            if (lVar13 != 0) {
              uVar26 = 0;
              if ((ulong)uVar9 != 0) {
                uVar26 = (uint)((ulong)((long)puVar16 - lVar13) / (ulong)uVar9);
              }
              if (*puVar19 <= uVar26) {
                uVar26 = 0xffffffff;
              }
              if ((uVar26 < *(uint *)PTR_DAT_04bc00c8) &&
                 (uVar18 = *(ushort *)(*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar26 * 2),
                 uVar18 < 0xbd)) goto LAB_01b28838;
            }
          }
          uVar18 = 0;
        }
      }
LAB_01b28838:
      uVar21 = 0;
      uVar9 = *puVar16;
      if ((uVar9 != 0) && (puVar16 != (uint *)(ulong)uVar9)) {
        puVar19 = (uint *)((long)puVar16 - (long)(ulong)uVar9);
        if ((*puVar19 == 0) ||
           ((uVar9 = puVar19[1], uVar9 == 0 || ((ulong)(ushort)puVar19[2] == 0)))) {
LAB_01b288d8:
          uVar21 = 0;
        }
        else {
          lVar13 = 0xc;
          if (*(char *)((long)puVar19 + 10) != '\0') {
            lVar13 = 0x1c;
          }
          lVar13 = (long)puVar19 + lVar13 + (ulong)(ushort)puVar19[2] * 8;
          uVar21 = 0;
          if (lVar13 != 0) {
            uVar26 = 0;
            if ((ulong)uVar9 != 0) {
              uVar26 = (uint)((ulong)((long)puVar16 - lVar13) / (ulong)uVar9);
            }
            if (*puVar19 <= uVar26) {
              uVar26 = 0xffffffff;
            }
            if ((*(uint *)PTR_DAT_04bc00c8 <= uVar26) ||
               (uVar21 = *(ushort *)(*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar26 * 2),
               0xbc < uVar21)) goto LAB_01b288d8;
          }
        }
      }
      uVar22 = 0;
      uVar9 = *puVar16;
      if ((uVar9 != 0) && (puVar16 != (uint *)(ulong)uVar9)) {
        puVar19 = (uint *)((long)puVar16 - (long)(ulong)uVar9);
        if (*puVar19 != 0) {
          uVar9 = puVar19[1];
          uVar22 = 0;
          if (uVar9 == 0) goto LAB_01b28980;
          if ((ulong)(ushort)puVar19[2] != 0) {
            lVar13 = 0xc;
            if (*(char *)((long)puVar19 + 10) != '\0') {
              lVar13 = 0x1c;
            }
            lVar13 = (long)puVar19 + lVar13 + (ulong)(ushort)puVar19[2] * 8;
            if (lVar13 != 0) {
              uVar26 = 0;
              if ((ulong)uVar9 != 0) {
                uVar26 = (uint)((ulong)((long)puVar16 - lVar13) / (ulong)uVar9);
              }
              if (*puVar19 <= uVar26) {
                uVar26 = 0xffffffff;
              }
              if ((uVar26 < *(uint *)PTR_DAT_04bc00c8) &&
                 (uVar22 = *(ushort *)(*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar26 * 2),
                 uVar22 < 0xbd)) goto LAB_01b28980;
            }
          }
        }
        uVar22 = 0;
      }
LAB_01b28980:
      uVar9 = 0;
      local_278 = (undefined *)CONCAT44(local_278._4_4_,0x52);
      uVar26 = *puVar16;
      bVar7 = uVar22 == 0x5a ||
              (uVar21 == 0x8b || (uVar18 == 0x93 || (uVar20 == 0x90 || uVar17 == 99)));
      local_1f90 = puVar16;
      if ((uVar26 != 0) && (puVar16 != (uint *)(ulong)uVar26)) {
        puVar19 = (uint *)((long)puVar16 - (long)(ulong)uVar26);
        uVar9 = 0;
        if (*puVar19 != 0) {
          uVar9 = puVar19[1];
          if ((uVar9 != 0) && ((ulong)(ushort)puVar19[2] != 0)) {
            lVar13 = 0xc;
            if (*(char *)((long)puVar19 + 10) != '\0') {
              lVar13 = 0x1c;
            }
            lVar13 = (long)puVar19 + lVar13 + (ulong)(ushort)puVar19[2] * 8;
            if (lVar13 != 0) {
              uVar26 = 0;
              if ((ulong)uVar9 != 0) {
                uVar26 = (uint)((ulong)((long)puVar16 - lVar13) / (ulong)uVar9);
              }
              if (*puVar19 <= uVar26) {
                uVar26 = 0xffffffff;
              }
              if ((uVar26 < *(uint *)PTR_DAT_04bc00c8) &&
                 (uVar9 = (uint)*(ushort *)(*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar26 * 2)
                 , uVar9 < 0xbd)) goto LAB_01b27d5c;
            }
          }
          uVar9 = 0;
        }
      }
    }
LAB_01b27d5c:
    local_2c8 = (undefined *)CONCAT44(local_2c8._4_4_,uVar9);
    if ((bVar7) || (uVar9 == (uint)local_278)) {
      *param_3 = 0xfffffffd;
      return;
    }
    *param_2 = *param_2 + '\x01';
  }
  uVar26 = (param_8 ^ param_8 >> 0x1e) * 0x6c078965 + 1;
  uVar29 = (uVar26 ^ uVar26 >> 0x1e) * 0x6c078965 + 2;
  uVar30 = (uVar29 ^ uVar29 >> 0x1e) * 0x6c078965 + 3;
  uVar9 = (uVar30 ^ uVar30 >> 0x1e) * 0x6c078965 + 4;
  FUN_01bdb708(&local_1fa0,**(undefined4 **)PTR_DAT_04bb3448);
  FUN_01bdba68(&local_1fa0,param_5);
  local_248._0_4_ = (uint)(uint3)local_248;
  local_268 = CONCAT35(local_268._5_3_,0x20);
  local_270 = (long)&local_268 + 4;
  local_278 = PTR_DAT_04bb2028 + 0x10;
  FUN_038d1270(&local_278,"-----");
  if ((ulong)*param_6 < 0x23) {
    FUN_038d1270(&local_278,"%s%02d",*(undefined8 *)(PTR_DAT_04bb9e38 + (ulong)*param_6 * 8 + 0xb0),
                 param_6[1]);
  }
  uVar28 = *(undefined8 *)PTR_DAT_04bb4138;
  (**(code **)(local_278 + 0x18))(&local_278);
  uVar10 = FUN_006bd550(local_270,0);
  local_2c8 = (undefined *)CONCAT44(local_2c8._4_4_,uVar10);
  puVar16 = (uint *)FUN_0079e770(uVar28,&local_2c8);
  puVar6 = PTR_DAT_04bb40b8;
  puVar1 = PTR_DAT_04bb40b0;
  if (puVar16 != (uint *)0x0) {
    uVar27 = *puVar16;
    if (uVar27 != 0) {
      cVar15 = *PTR_DAT_04bb40b0;
      do {
        if (cVar15 != '\0') {
          uVar31 = *(uint *)(puVar6 + 100);
          if ((int)uVar31 < 0) {
            if (uVar31 == 0xffffffff) goto LAB_01b27f2c;
          }
          else if ((byte *)((ulong)uVar31 + (long)puVar16) != (byte *)0x0) {
            uVar27 = (uint)*(byte *)((ulong)uVar31 + (long)puVar16) << 8;
            goto LAB_01b27fc4;
          }
          goto LAB_01b27fc0;
        }
        cVar15 = '\x01';
        *(undefined8 *)puVar6 = 0xffffffffffffffff;
        *(undefined8 *)(puVar6 + 8) = 0xffffffffffffffff;
        *puVar1 = 1;
        *(undefined4 *)(puVar6 + 0xa0) = 0xffffffff;
        *(undefined8 *)(puVar6 + 0x10) = 0xffffffffffffffff;
        *(undefined8 *)(puVar6 + 0x18) = 0xffffffffffffffff;
        *(undefined8 *)(puVar6 + 0x20) = 0xffffffffffffffff;
        *(undefined8 *)(puVar6 + 0x28) = 0xffffffffffffffff;
        *(undefined8 *)(puVar6 + 0x30) = 0xffffffffffffffff;
        *(undefined8 *)(puVar6 + 0x38) = 0xffffffffffffffff;
        *(undefined8 *)(puVar6 + 0x40) = 0xffffffffffffffff;
        *(undefined8 *)(puVar6 + 0x48) = 0xffffffffffffffff;
        *(undefined8 *)(puVar6 + 0x50) = 0xffffffffffffffff;
        *(undefined8 *)(puVar6 + 0x58) = 0xffffffffffffffff;
        *(undefined8 *)(puVar6 + 0x60) = 0xffffffffffffffff;
        *(undefined8 *)(puVar6 + 0x68) = 0xffffffffffffffff;
        *(undefined8 *)(puVar6 + 0x70) = 0xffffffffffffffff;
        *(undefined8 *)(puVar6 + 0x78) = 0xffffffffffffffff;
        *(undefined8 *)(puVar6 + 0x80) = 0xffffffffffffffff;
        *(undefined8 *)(puVar6 + 0x88) = 0xffffffffffffffff;
        *(undefined8 *)(puVar6 + 0x90) = 0xffffffffffffffff;
        *(undefined8 *)(puVar6 + 0x98) = 0xffffffffffffffff;
        uVar27 = *puVar16;
LAB_01b27f2c:
        puVar19 = (uint *)(ulong)uVar27;
        uVar27 = 0;
        if ((puVar19 == (uint *)0x0) || (puVar16 == puVar19)) {
LAB_01b27fc4:
          uVar31 = *puVar16;
          if (uVar31 == 0) goto LAB_01b28068;
          uVar23 = *(uint *)(puVar6 + 0x60);
          goto LAB_01b27fe4;
        }
        lVar13 = 0xc;
        if (*(char *)((long)puVar16 + (10 - (long)puVar19)) != '\0') {
          lVar13 = 0x1c;
        }
        lVar13 = (long)puVar16 + (lVar13 - (long)puVar19);
        if (lVar13 == 0) {
LAB_01b27fc0:
          uVar27 = 0;
          goto LAB_01b27fc4;
        }
        uVar14 = (ulong)*(ushort *)((long)puVar16 + (8 - (long)puVar19));
        *(undefined4 *)(puVar6 + 100) = 0xfffffffe;
        if (uVar14 == 0) goto LAB_01b27fc0;
        piVar24 = (int *)(lVar13 + 4);
        while (piVar24[-1] != -0x6ba9495d) {
          piVar24 = piVar24 + 2;
          uVar14 = uVar14 - 1;
          if (uVar14 == 0) goto LAB_01b27fc0;
        }
        iVar8 = 0;
        if (*piVar24 != -1) {
          iVar8 = *piVar24;
        }
        *(int *)(puVar6 + 100) = iVar8;
        uVar27 = *puVar16;
      } while (uVar27 != 0);
    }
    uVar27 = 0;
LAB_01b28068:
    uVar31 = 0;
LAB_01b2806c:
    local_2c8 = (undefined *)uVar12;
    lVar13 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_2c8);
    local_278 = (undefined *)(lVar13 + -0x93a80);
    local_2c8 = (undefined *)nn::time::ToCalendarTimeInUtc((PosixTime *)&local_278);
    local_2e0 = uVar12;
    lVar13 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_2e0);
    local_278 = (undefined *)(lVar13 + 0x93a80);
    uVar28 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_278);
    uVar31 = uVar31 | uVar27;
    uVar27 = (int)local_2c8._3_1_ & 0xffffU | (uint)local_2c8._2_1_ << 8;
    uVar23 = (int)uVar28 >> 0x18 & 0xffffU | (uint)((ulong)uVar28 >> 8) & 0xff00;
    if (uVar23 < uVar27) {
      if (uVar23 < uVar31) {
LAB_01b28118:
        if (uVar31 < uVar27) goto LAB_01b28230;
      }
      local_2c8 = *(undefined **)param_7;
      lVar13 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_2c8);
      local_278 = (undefined *)(lVar13 + -0x93a80);
      local_2c8 = (undefined *)nn::time::ToCalendarTimeInUtc((PosixTime *)&local_278);
      local_2e0 = *(undefined8 *)param_7;
      lVar13 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_2e0);
      local_278 = (undefined *)(lVar13 + 0x93a80);
      uVar28 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_278);
      uVar27 = (int)local_2c8._3_1_ & 0xffffU | (uint)local_2c8._2_1_ << 8;
      uVar23 = (int)uVar28 >> 0x18 & 0xffffU | (uint)((ulong)uVar28 >> 8) & 0xff00;
      if (uVar23 < uVar27) {
        if (uVar31 < uVar27) {
LAB_01b281c4:
          if (uVar23 < uVar31) goto LAB_01b28230;
        }
        iVar8 = FUN_01bdb0f0(auStack_14d8,auStack_1ab8,&local_1f98,auStack_1cd8,auStack_1bb8);
        uVar26 = uVar26 ^ uVar26 * 0x800;
        uVar27 = uVar26 >> 8 ^ uVar9 >> 0x13 ^ uVar26 ^ uVar9;
        uVar26 = uVar29;
        uVar29 = uVar30;
        uVar30 = uVar9;
        uVar9 = uVar27;
        if ((int)((ulong)uVar27 * 100 >> 0x20) < iVar8) {
          cVar15 = '\x05';
          uVar10 = 1;
          goto LAB_01b286a8;
        }
      }
      else if (uVar27 <= uVar31) goto LAB_01b281c4;
    }
    else if (uVar31 <= uVar23) goto LAB_01b28118;
  }
LAB_01b28230:
  uVar28 = FUN_0272eca4(param_6 + 0x12674,0);
  local_2c8 = (undefined *)uVar28;
  local_278 = (undefined *)nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_2c8);
  local_2c8 = (undefined *)nn::time::ToCalendarTimeInUtc((PosixTime *)&local_278);
  local_2e0 = uVar28;
  lVar13 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_2e0);
  local_278 = (undefined *)(lVar13 + 0x127500);
  iVar8 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_278);
  if ((((int)(char)local_2c8._2_1_ << 8 | (uint)(ushort)local_2c8 << 0x10 | (int)local_2c8._3_1_) <=
       uVar3) && (uVar3 <= (uint)(iVar8 >> 0x18 | iVar8 << 0x10 | ((iVar8 << 8) >> 0x18) << 8))) {
    local_2c8 = (undefined *)uVar28;
    local_278 = (undefined *)nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_2c8);
    local_2c8 = (undefined *)nn::time::ToCalendarTimeInUtc((PosixTime *)&local_278);
    local_2e0 = uVar28;
    lVar13 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_2e0);
    local_278 = (undefined *)(lVar13 + 0x127500);
    iVar8 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_278);
    uVar3 = (int)(char)param_7[1] << 8 | (uint)*param_7 << 0x10 | (int)*(char *)((long)param_7 + 3);
    if ((((int)(char)local_2c8._2_1_ << 8 | (uint)(ushort)local_2c8 << 0x10 | (int)local_2c8._3_1_)
         <= uVar3) && (uVar3 <= (uint)(iVar8 >> 0x18 | iVar8 << 0x10 | ((iVar8 << 8) >> 0x18) << 8))
       ) {
      iVar8 = FUN_01bdb0f0(auStack_ee0,auStack_1ab8,&local_1f98,auStack_1cd8,auStack_1bb8);
      uVar26 = uVar26 ^ uVar26 << 0xb;
      uVar3 = uVar9 >> 0x13 ^ uVar26 >> 8 ^ uVar9 ^ uVar26;
      uVar26 = uVar29;
      uVar29 = uVar30;
      uVar30 = uVar9;
      uVar9 = uVar3;
      if ((int)((ulong)uVar3 * 100 >> 0x20) < iVar8) {
        cVar15 = '\x04';
        uVar10 = 2;
        goto LAB_01b286a8;
      }
    }
  }
  if ((((uint)*param_7 == (uVar11 & 0xffff)) && (((uint)((ulong)uVar12 >> 0x10) & 0xff) == 0xc)) &&
     ((char)param_7[1] == '\f')) {
    iVar8 = FUN_01bdb0f0(auStack_8e8,auStack_1ab8,&local_1f98,auStack_1cd8,auStack_1bb8);
    uVar26 = uVar26 ^ uVar26 << 0xb;
    uVar9 = uVar9 >> 0x13 ^ uVar26 >> 8 ^ uVar9 ^ uVar26;
    uVar26 = uVar29;
    uVar29 = uVar30;
    if ((int)((ulong)uVar9 * 100 >> 0x20) < iVar8) {
      uVar10 = 3;
      cVar15 = '\x03';
      goto LAB_01b286a8;
    }
  }
  memset(&local_270,0,0x1e0);
  local_240 = (undefined *)0x0;
  local_238 = 0;
  puVar1 = PTR_DAT_04bb2d80 + 0x10;
  local_210 = 0;
  local_208 = 0;
  local_1e0 = 0;
  local_1d8 = 0;
  local_1b0 = 0;
  local_1a8 = 0;
  local_180 = 0;
  local_178 = 0;
  local_150 = 0;
  local_148 = 0;
  local_118 = 0;
  local_120 = 0;
  local_f0 = 0;
  local_e8 = 0;
  local_278 = PTR_DAT_04bc07c0 + 0x10;
  local_b8 = 0;
  local_c0 = 0;
  local_70 = 0;
  local_74 = 1;
  local_260 = (undefined **)puVar1;
  local_230 = puVar1;
  local_200 = puVar1;
  local_1d0 = puVar1;
  local_1a0 = puVar1;
  local_170 = puVar1;
  local_140 = puVar1;
  local_110 = puVar1;
  local_e0 = puVar1;
  local_b0 = puVar1;
  local_270 = (**(code **)(local_1f98 + 0x18))(&local_1f98);
  if (local_270 != 0) {
    local_78 = 0;
    local_80 = 0;
    local_88 = 0;
    local_90 = 0;
    local_268 = 0;
    local_260 = (undefined **)puVar1;
    FUN_006f1490(&local_278);
    uVar3 = local_70;
    local_2f0 = local_70;
    if (local_70 != 0) {
      if (*param_4 == -2) {
        uVar29 = uVar26;
      }
      else {
        uVar26 = uVar26 ^ uVar26 << 0xb;
        uVar9 = uVar26 >> 8 ^ uVar9 >> 0x13 ^ uVar26 ^ uVar9;
        if ((uint)((ulong)uVar9 * 100 >> 0x20) < 10) {
          if ((int)local_70 < 0x10) {
            *param_2 = *param_2 + -1;
          }
          cVar15 = '\x02';
          uVar10 = 4;
          goto LAB_01b286a8;
        }
      }
      if ((int)local_70 < 0xb) {
        uVar29 = uVar29 ^ uVar29 << 0xb;
        if (9 < (uint)((ulong)(uVar9 >> 0x13 ^ uVar29 >> 8 ^ uVar9 ^ uVar29) * 100 >> 0x20)) {
          return;
        }
        cVar15 = '\x01';
        uVar10 = 5;
      }
      else {
        uVar11 = FUN_01bdbdb8(&local_1fa0);
        if (uVar11 == 0) {
          return;
        }
        if ((int)uVar11 < 3) {
          *param_2 = *param_2 + -1;
        }
        else if (((0x2f < uVar3) && (4 < uVar11)) &&
                (uVar29 = uVar29 ^ uVar29 << 0xb,
                (uint)((ulong)(uVar9 >> 0x13 ^ uVar29 >> 8 ^ uVar9 ^ uVar29) * 100 >> 0x20) < 0x1e))
        {
          cVar15 = '\x02';
          uVar10 = 7;
          goto LAB_01b286a8;
        }
        cVar15 = '\x01';
        uVar10 = 8;
      }
      goto LAB_01b286a8;
    }
  }
  uVar26 = uVar26 ^ uVar26 << 0xb;
  if (4 < (uint)((ulong)(uVar26 >> 8 ^ uVar9 >> 0x13 ^ uVar26 ^ uVar9) * 100 >> 0x20)) {
    return;
  }
  cVar15 = '\x01';
  uVar10 = 6;
LAB_01b286a8:
  *param_1 = uVar10;
  *param_2 = *param_2 + cVar15;
  return;
LAB_01b27fe4:
  if (-1 < (int)uVar23) {
    if ((byte *)((long)puVar16 + (ulong)uVar23) != (byte *)0x0) {
      uVar31 = (uint)*(byte *)((long)puVar16 + (ulong)uVar23);
      goto LAB_01b2806c;
    }
    goto LAB_01b28068;
  }
  if ((uVar23 != 0xffffffff) || (lVar13 = (long)puVar16 - (ulong)uVar31, lVar13 == 0))
  goto LAB_01b28068;
  lVar25 = 0xc;
  if (*(char *)(lVar13 + 10) != '\0') {
    lVar25 = 0x1c;
  }
  if (lVar25 + lVar13 == 0) goto LAB_01b28068;
  uVar14 = (ulong)*(ushort *)(lVar13 + 8);
  *(undefined4 *)(puVar6 + 0x60) = 0xfffffffe;
  if (uVar14 == 0) goto LAB_01b28068;
  puVar19 = (uint *)(lVar25 + lVar13 + 4);
  while (puVar19[-1] != 0x919ea52a) {
    puVar19 = puVar19 + 2;
    uVar14 = uVar14 - 1;
    if (uVar14 == 0) goto LAB_01b28068;
  }
  uVar23 = 0;
  if (*puVar19 != 0xffffffff) {
    uVar23 = *puVar19;
  }
  *(uint *)(puVar6 + 0x60) = uVar23;
  uVar31 = *puVar16;
  if (uVar31 == 0) goto LAB_01b28068;
  goto LAB_01b27fe4;
}

