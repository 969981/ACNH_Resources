
uint FUN_027b0660(undefined1 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined *puVar1;
  uint uVar2;
  short sVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  undefined *puVar8;
  undefined8 uVar9;
  bool bVar10;
  byte bVar11;
  undefined1 uVar12;
  uint uVar13;
  int iVar14;
  undefined8 *puVar15;
  ulong uVar16;
  uint *puVar17;
  undefined8 uVar18;
  ushort uVar19;
  undefined8 uVar20;
  uint *puVar21;
  undefined8 uVar22;
  long lVar23;
  undefined8 in_stack_fffffffffffff7f0;
  undefined4 uVar24;
  ulong in_stack_fffffffffffff7f8;
  uint local_7d8 [6];
  undefined1 local_7c0;
  undefined *local_7a0;
  undefined *puStack_798;
  undefined1 *local_780;
  undefined1 *puStack_778;
  undefined1 *local_770;
  undefined1 auStack_728 [320];
  undefined1 auStack_5e8 [704];
  undefined1 auStack_328 [320];
  undefined1 *local_1e8;
  undefined1 *local_1e0;
  undefined1 *local_1d8;
  ushort local_1d0;
  undefined2 uStack_1ce;
  undefined4 uStack_1cc;
  undefined4 local_1c8;
  undefined4 uStack_1c4;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  undefined1 local_1b8;
  undefined *local_1b0;
  undefined4 local_1a8;
  undefined4 local_1a4;
  long local_1a0;
  undefined *local_198;
  undefined *local_190;
  undefined *local_160;
  char *pcStack_158;
  undefined *local_128;
  undefined *local_120;
  long local_118;
  undefined1 auStack_f0 [8];
  undefined2 local_e8;
  undefined1 auStack_b8 [8];
  undefined2 local_b0;
  byte local_7c [4];
  ushort local_78 [2];
  undefined2 local_74;
  undefined1 local_72;
  undefined8 local_70 [2];
  
  puVar1 = PTR_DAT_04bc0510;
  puVar8 = PTR_DAT_04bb43c0;
  uVar24 = (undefined4)((ulong)in_stack_fffffffffffff7f0 >> 0x20);
  local_1a0 = 0;
  local_1b0 = PTR_DAT_04bc0510 + 0x10;
  local_1a8 = *(undefined4 *)param_3;
  local_1a4 = *(undefined4 *)((long)param_3 + 4);
  lVar23 = *(long *)PTR_DAT_04bb43c0;
  uVar13 = FUN_0277d6c4(&local_1a8);
  if (*(long *)puVar8 != 0) {
    lVar23 = *(long *)(lVar23 + 0x57e58);
    uVar13 = (uVar13 & 0xffff) - (uint)*(ushort *)(lVar23 + 0x1f8);
    if ((uVar13 < *(uint *)(lVar23 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar23 + 0x1e0) + (long)(int)uVar13 * 8) != 0)) {
      lVar23 = *(long *)PTR_DAT_04bc0428;
      uVar13 = FUN_0277d6c4(param_3);
      uVar13 = (uVar13 & 0xffff) - (uint)*(ushort *)(lVar23 + 0x1f8);
      if ((uVar13 < *(uint *)(lVar23 + 0x1d8)) &&
         (lVar23 = *(long *)(*(long *)(lVar23 + 0x1e0) + (long)(int)uVar13 * 8), lVar23 != 0)) {
        local_1a0 = lVar23;
      }
    }
  }
  iVar14 = FUN_0277d6c4(&local_1a8);
  if (iVar14 == 0x3100) {
    local_120 = (undefined *)*param_3;
    lVar23 = *(long *)puVar8;
    local_128 = puVar1 + 0x10;
    local_118 = 0;
    uVar13 = FUN_0277d6c4(&local_120);
    if (*(long *)puVar8 != 0) {
      lVar23 = *(long *)(lVar23 + 0x57e58);
      uVar13 = (uVar13 & 0xffff) - (uint)*(ushort *)(lVar23 + 0x1f8);
      if ((uVar13 < *(uint *)(lVar23 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar23 + 0x1e0) + (long)(int)uVar13 * 8) != 0)) {
        lVar23 = *(long *)PTR_DAT_04bc0428;
        uVar13 = FUN_0277d6c4(param_3);
        uVar13 = (uVar13 & 0xffff) - (uint)*(ushort *)(lVar23 + 0x1f8);
        if ((uVar13 < *(uint *)(lVar23 + 0x1d8)) &&
           (lVar23 = *(long *)(*(long *)(lVar23 + 0x1e0) + (long)(int)uVar13 * 8), lVar23 != 0)) {
          local_118 = lVar23;
        }
      }
    }
    local_7d8[0] = CONCAT13(local_7d8[0]._3_1_,0x80023);
    FUN_01afc678(&local_128,local_7d8,&local_1d0,local_70);
    uVar4 = local_7d8[0];
    uVar13 = local_7d8[0] >> 8;
    if (((*PTR_DAT_04bb8aa8 & 1) == 0) &&
       (iVar14 = __cxa_guard_acquire(PTR_DAT_04bb8aa8), iVar14 != 0)) {
      FUN_00dd5f80(PTR_DAT_04bb8aa0);
      __cxa_guard_release(PTR_DAT_04bb8aa8);
    }
    if (0 < (int)*(uint *)PTR_DAT_04bb8aa0) {
      uVar16 = 0;
      do {
        if (*(int *)(*(long *)(PTR_DAT_04bb8aa0 + 8) + uVar16 * 4) == 0x2a) goto LAB_027b086c;
        uVar16 = uVar16 + 1;
      } while (*(uint *)PTR_DAT_04bb8aa0 != uVar16);
    }
    uVar16 = 0;
LAB_027b086c:
    uVar13 = (~(uint)(byte)local_70[0] << 0x18 | (uint)(byte)local_70[0] << 0x10 |
              (uint)(byte)local_70[0] << 8 | (uint)(byte)local_70[0]) ^
             (uVar4 << 0x18 | (uVar13 & 0xff) << 0x10 | (uint)local_1d0);
    uVar4 = (uVar13 ^ uVar13 >> 0x1e ^ 0xf00f00) * 0x6c078965 + 1;
    uVar13 = uVar4 ^ uVar4 * 0x800;
    uVar5 = (uVar4 ^ uVar4 >> 0x1e) * 0x6c078965 + 2;
    uVar4 = uVar5 ^ uVar5 * 0x800;
    uVar6 = (uVar5 ^ uVar5 >> 0x1e) * 0x6c078965 + 3;
    uVar5 = uVar6 ^ uVar6 * 0x800;
    uVar6 = (uVar6 ^ uVar6 >> 0x1e) * 0x6c078965 + 4;
    local_198 = (undefined *)CONCAT44(local_198._4_4_,(int)uVar16);
    uVar13 = uVar13 >> 8 ^ uVar6 >> 0x13 ^ uVar13 ^ uVar6;
    uVar4 = uVar4 >> 8 ^ uVar13 >> 0x13 ^ uVar4 ^ uVar13;
    uVar5 = uVar5 >> 8 ^ uVar4 >> 0x13 ^ uVar5 ^ uVar4;
    local_160 = PTR_DAT_04bb2020 + 0x10;
    pcStack_158 = "MAIL_SNpc_pyn_mes";
    FUN_006d8678(&local_7a0,"0%02d",(int)((ulong)uVar13 * 3 >> 0x20) + 1);
    FUN_006d8678(auStack_b8,"1%02d",(int)((ulong)uVar4 * 3 >> 0x20) + 1);
    FUN_006d8678(auStack_f0,"2%02d",1);
    uVar6 = uVar6 ^ uVar6 * 0x800;
    uVar13 = FUN_027b1524(param_1,&local_198,param_2,&local_160,&local_7a0,auStack_b8,auStack_f0,
                          *(long *)PTR_DAT_04bb32e8 + 0x4060,
                          CONCAT44(uVar24,uVar6 >> 8 ^ uVar5 >> 0x13 ^ uVar6 ^ uVar5),
                          in_stack_fffffffffffff7f8 & 0xffffffffffffff00,0);
    goto LAB_027b14d4;
  }
  uVar16 = FUN_01af4a7c(&local_1b0);
  if ((uVar16 & 1) == 0) {
    local_70[0] = *(undefined8 *)(*(long *)PTR_DAT_04bb32e8 + 0x4060);
    sVar3 = *(short *)PTR_DAT_04bb6298;
    if (sVar3 == -1) {
LAB_027b0ee4:
      bVar10 = false;
    }
    else {
      local_7a0 = (undefined *)CONCAT44(local_7a0._4_4_,0x11);
      puVar17 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar3 * 8);
      if (0xff < (uint)(int)sVar3) {
        puVar17 = (uint *)PTR_DAT_04bc39f8;
      }
      if (((*puVar17 >> 0x11 & 1) == 0) ||
         (local_7a0 = (undefined *)CONCAT44(local_7a0._4_4_,0x1f), -1 < (int)*puVar17))
      goto LAB_027b0ee4;
      puVar15 = (undefined8 *)FUN_00a8c18c(*(undefined8 *)PTR_DAT_04bb30a0);
      local_70[0] = *puVar15;
      uVar13 = (uint)*(ushort *)(*(long *)PTR_DAT_04bb4928 + 10) - (uint)DAT_0534e320;
      if ((uVar13 < DAT_0534e300) &&
         (puVar17 = *(uint **)(DAT_0534e308 + (long)(int)uVar13 * 8), puVar17 != (uint *)0x0)) {
        uVar13 = *puVar17;
        uVar19 = 0;
        if ((uVar13 != 0) && (puVar17 != (uint *)(ulong)uVar13)) {
          puVar21 = (uint *)((long)puVar17 - (long)(ulong)uVar13);
          uVar19 = 0;
          if (*puVar21 != 0) {
            uVar13 = puVar21[1];
            if ((uVar13 != 0) && ((ulong)(ushort)puVar21[2] != 0)) {
              lVar23 = 0xc;
              if (*(char *)((long)puVar21 + 10) != '\0') {
                lVar23 = 0x1c;
              }
              lVar23 = (long)puVar21 + lVar23 + (ulong)(ushort)puVar21[2] * 8;
              if (lVar23 != 0) {
                uVar4 = 0;
                if ((ulong)uVar13 != 0) {
                  uVar4 = (uint)((ulong)((long)puVar17 - lVar23) / (ulong)uVar13);
                }
                if (*puVar21 <= uVar4) {
                  uVar4 = 0xffffffff;
                }
                if ((uVar4 < *(uint *)PTR_DAT_04bc0e58) &&
                   (uVar19 = *(ushort *)(*(long *)(PTR_DAT_04bc0e58 + 8) + (long)(int)uVar4 * 2),
                   uVar19 < 0xb)) goto LAB_027b0cc4;
              }
            }
            goto LAB_027b0cc0;
          }
        }
      }
      else {
LAB_027b0cc0:
        uVar19 = 0;
      }
LAB_027b0cc4:
      bVar10 = uVar19 == 2;
    }
    uVar9 = local_70[0];
    local_74 = 0x23;
    local_72 = 8;
    FUN_01afc678(&local_1b0,&local_74,local_78,local_7c);
    bVar11 = FUN_020fd7d8(&local_74);
    if (bVar11 < 8) {
      puVar15 = *(undefined8 **)(PTR_DAT_04bb6a58 + (ulong)bVar11 * 8 + 0x20);
    }
    else {
      puVar15 = &DAT_0407ebb1;
    }
    FUN_006d8678(auStack_b8,"MAIL_RND_MsgD_%s",puVar15);
    uStack_1cc = 0;
    local_1c8 = 0;
    uStack_1c4 = 0;
    uStack_1c0 = 0;
    local_1b8 = 2;
    local_1d0 = 0;
    uStack_1ce = 0;
    uStack_1bc = 0;
    if (local_7c[0] == 0) {
      puVar1 = PTR_DAT_04bb2020 + 0x10;
      puStack_798 = &DAT_040e9445;
      local_7a0 = puVar1;
      FUN_01b8b070(auStack_f0,auStack_b8,&local_7a0);
      memset(param_1,0,0x374);
      param_1[0xc3] = 0;
      *(undefined2 *)(param_1 + 0xc0) = 0xfffe;
      FUN_0277d4ac();
      param_1[200] = 0;
      param_1[0xcc] = 0;
      memset(param_1 + 0xce,0,0x2a2);
      *(undefined2 *)(param_1 + 0x370) = 0xfffe;
      *param_1 = 1;
      param_1[0x5c] = 1;
      *(undefined2 *)(param_1 + 4) = local_74;
      uVar12 = FUN_020fd7d8(&local_74);
      param_1[6] = uVar12;
      param_1[0xb8] = 0;
      *(ulong *)(param_1 + 8) = CONCAT44(uStack_1cc,CONCAT22(uStack_1ce,local_1d0));
      *(ulong *)(param_1 + 0x10) = CONCAT44(uStack_1c4,local_1c8);
      *(ulong *)(param_1 + 0x18) = CONCAT44(uStack_1bc,uStack_1c0);
      param_1[0x20] = local_1b8;
      uVar18 = param_2[1];
      uVar20 = param_2[2];
      uVar22 = *param_2;
      param_1[0x78] = *(undefined1 *)(param_2 + 3);
      *(undefined8 *)(param_1 + 0x68) = uVar18;
      *(undefined8 *)(param_1 + 0x70) = uVar20;
      *(undefined8 *)(param_1 + 0x60) = uVar22;
      uVar18 = *(undefined8 *)((long)param_2 + 0x1c);
      uVar20 = *(undefined8 *)((long)param_2 + 0x24);
      *(undefined8 *)(param_1 + 0x8c) = *(undefined8 *)((long)param_2 + 0x2c);
      *(undefined8 *)(param_1 + 0x84) = uVar20;
      *(undefined8 *)(param_1 + 0x7c) = uVar18;
      uVar13 = *(uint *)((long)param_2 + 0x34);
      if (1 < uVar13) {
        uVar13 = 0;
      }
      *(uint *)(param_1 + 0x94) = uVar13;
      uVar16 = nn::time::IsValidDate
                         ((uint)uVar9 & 0xffff,(uint)uVar9 >> 0x10 & 0xff,
                          (uint)((ulong)uVar9 >> 0x18) & 0xff);
      if ((uVar16 & 1) != 0) {
        *(short *)(param_1 + 0xbc) = (short)uVar9;
        param_1[0xbe] = (char)((ulong)uVar9 >> 0x10);
        param_1[0xbf] = (char)((ulong)uVar9 >> 0x18);
      }
      param_1[0xcc] = 1;
      *(undefined2 *)(param_1 + 0x36e) = local_e8;
      FUN_01bdde78(&local_7a0);
      local_1e0 = param_1 + 0x12e;
      local_780 = auStack_728;
      local_1d8 = param_1 + 0x30e;
      local_770 = auStack_328;
      puStack_778 = auStack_5e8;
      local_120 = &DAT_040c47ff;
      pcStack_158 = "501";
      local_190 = &DAT_04063414;
      local_1e8 = param_1 + 0xce;
      local_198 = puVar1;
      local_160 = puVar1;
      local_128 = puVar1;
      uVar13 = FUN_01bdc210(&local_7a0,auStack_b8,&local_128,&local_160,&local_198,&local_74,param_2
                           );
      goto LAB_027b14d4;
    }
    uVar13 = (uint)local_7c[0];
    uVar13 = ((uint)(byte)local_74 << 0x18 | (uint)local_74._1_1_ << 0x10 | (uint)local_78[0]) ^
             ((uint)(byte)~local_7c[0] << 0x18 | uVar13 << 0x10 | uVar13 << 8 | uVar13);
    uVar4 = (uVar13 ^ uVar13 >> 0x1e ^ 0xf00f00) * 0x6c078965 + 1;
    uVar13 = uVar4 ^ uVar4 * 0x800;
    uVar5 = (uVar4 ^ uVar4 >> 0x1e) * 0x6c078965 + 2;
    uVar4 = uVar5 ^ uVar5 * 0x800;
    uVar7 = (uVar5 ^ uVar5 >> 0x1e) * 0x6c078965 + 3;
    uVar6 = (uVar7 ^ uVar7 >> 0x1e) * 0x6c078965 + 4;
    uVar5 = uVar6 ^ uVar6 * 0x800;
    uVar13 = uVar13 >> 8 ^ uVar6 >> 0x13 ^ uVar13 ^ uVar6;
    uVar6 = uVar13 ^ uVar13 << 0xb;
    uVar2 = uVar4 >> 8 ^ uVar13 >> 0x13 ^ uVar4 ^ uVar13;
    uVar7 = uVar7 ^ uVar7 * 0x800;
    uVar7 = uVar7 >> 8 ^ uVar2 >> 0x13 ^ uVar7 ^ uVar2;
    uVar4 = uVar5 >> 8 ^ uVar7 >> 0x13 ^ uVar5 ^ uVar7;
    uVar5 = uVar6 >> 8 ^ uVar4 >> 0x13 ^ uVar6 ^ uVar4;
    bVar11 = FUN_020fd7d8(&local_74);
    if (bVar11 < 8) {
      puVar15 = *(undefined8 **)(PTR_DAT_04bb6a58 + (ulong)bVar11 * 8 + 0x20);
    }
    else {
      puVar15 = &DAT_0407ebb1;
    }
    FUN_006d8678(&local_7a0,"MAIL_RND_MsgD_%s",puVar15);
    FUN_006d8678(auStack_f0,"0%02d",(int)((ulong)uVar13 * 5 >> 0x20) + 1);
    FUN_006d8678(&local_128,"1%02d",(int)((ulong)uVar2 * 5 >> 0x20) + 1);
    FUN_006d8678(&local_160,"2%02d",(int)((ulong)uVar7 * 5 >> 0x20) + 1);
    FUN_006d8678(&local_198,"3%02d",(int)((ulong)uVar4 * 5 >> 0x20) + 1);
    FUN_006d8678(local_7d8,"4%02d",(int)((ulong)uVar5 * 5 >> 0x20) + 1);
    uVar2 = uVar2 ^ uVar2 << 0xb;
    uVar4 = uVar2 >> 8 ^ uVar5 >> 0x13 ^ uVar2 ^ uVar5;
    uVar13 = FUN_027b0354(param_1,&local_74,&local_1d0,param_2,&local_7a0,auStack_f0,&local_128,
                          &local_160,&local_198,local_7d8,local_70,uVar4,0,0);
    if (!bVar10) goto LAB_027b14d4;
    local_7a0 = (undefined *)0x0;
    puStack_798 = (undefined *)0x0;
    FUN_01b88958(&local_7a0,0x1b6);
    FUN_01b88958(&local_7a0,0x1b8);
    FUN_01b88958(&local_7a0,0x1bb);
    FUN_01b88958(&local_7a0,0x1bc);
    uVar7 = uVar7 ^ uVar7 << 0xb;
    FUN_01b88620(auStack_f0,&local_7a0,uVar7 >> 8 ^ uVar4 >> 0x13 ^ uVar7 ^ uVar4);
    local_b0 = local_e8;
  }
  else {
    local_70[0] = *(undefined8 *)(*(long *)PTR_DAT_04bb32e8 + 0x4060);
    sVar3 = *(short *)PTR_DAT_04bb6298;
    if (sVar3 == -1) {
LAB_027b0cd0:
      bVar10 = false;
    }
    else {
      local_7a0 = (undefined *)CONCAT44(local_7a0._4_4_,0x11);
      puVar17 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar3 * 8);
      if (0xff < (uint)(int)sVar3) {
        puVar17 = (uint *)PTR_DAT_04bc39f8;
      }
      if (((*puVar17 >> 0x11 & 1) == 0) ||
         (local_7a0 = (undefined *)CONCAT44(local_7a0._4_4_,0x1f), -1 < (int)*puVar17))
      goto LAB_027b0cd0;
      puVar15 = (undefined8 *)FUN_00a8c18c(*(undefined8 *)PTR_DAT_04bb30a0);
      local_70[0] = *puVar15;
      uVar13 = (uint)*(ushort *)(*(long *)PTR_DAT_04bb4928 + 10) - (uint)DAT_0534e320;
      if ((uVar13 < DAT_0534e300) &&
         (puVar17 = *(uint **)(DAT_0534e308 + (long)(int)uVar13 * 8), puVar17 != (uint *)0x0)) {
        uVar13 = *puVar17;
        uVar19 = 0;
        if ((uVar13 != 0) && (puVar17 != (uint *)(ulong)uVar13)) {
          puVar21 = (uint *)((long)puVar17 - (long)(ulong)uVar13);
          uVar19 = 0;
          if (*puVar21 != 0) {
            uVar13 = puVar21[1];
            if ((uVar13 != 0) && ((ulong)(ushort)puVar21[2] != 0)) {
              lVar23 = 0xc;
              if (*(char *)((long)puVar21 + 10) != '\0') {
                lVar23 = 0x1c;
              }
              lVar23 = (long)puVar21 + lVar23 + (ulong)(ushort)puVar21[2] * 8;
              if (lVar23 != 0) {
                uVar4 = 0;
                if ((ulong)uVar13 != 0) {
                  uVar4 = (uint)((ulong)((long)puVar17 - lVar23) / (ulong)uVar13);
                }
                if (*puVar21 <= uVar4) {
                  uVar4 = 0xffffffff;
                }
                if ((uVar4 < *(uint *)PTR_DAT_04bc0e58) &&
                   (uVar19 = *(ushort *)(*(long *)(PTR_DAT_04bc0e58 + 8) + (long)(int)uVar4 * 2),
                   uVar19 < 0xb)) goto LAB_027b0b50;
              }
            }
            goto LAB_027b0b4c;
          }
        }
      }
      else {
LAB_027b0b4c:
        uVar19 = 0;
      }
LAB_027b0b50:
      bVar10 = uVar19 == 2;
    }
    local_1c8 = *(undefined4 *)param_3;
    uStack_1c4 = *(undefined4 *)((long)param_3 + 4);
    lVar23 = *(long *)puVar8;
    puVar1 = puVar1 + 0x10;
    local_1d0 = (ushort)puVar1;
    uStack_1ce = (undefined2)((ulong)puVar1 >> 0x10);
    uStack_1cc = (undefined4)((ulong)puVar1 >> 0x20);
    uStack_1c0 = 0;
    uStack_1bc = 0;
    uVar13 = FUN_0277d6c4(&local_1c8);
    if (*(long *)puVar8 != 0) {
      lVar23 = *(long *)(lVar23 + 0x57e58);
      uVar13 = (uVar13 & 0xffff) - (uint)*(ushort *)(lVar23 + 0x1f8);
      if ((uVar13 < *(uint *)(lVar23 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar23 + 0x1e0) + (long)(int)uVar13 * 8) != 0)) {
        lVar23 = *(long *)PTR_DAT_04bc0428;
        uVar13 = FUN_0277d6c4(param_3);
        uVar13 = (uVar13 & 0xffff) - (uint)*(ushort *)(lVar23 + 0x1f8);
        if ((uVar13 < *(uint *)(lVar23 + 0x1d8)) &&
           (lVar23 = *(long *)(*(long *)(lVar23 + 0x1e0) + (long)(int)uVar13 * 8), lVar23 != 0)) {
          uStack_1c0 = (undefined4)lVar23;
          uStack_1bc = (undefined4)((ulong)lVar23 >> 0x20);
        }
      }
    }
    local_74 = 0x23;
    local_72 = 8;
    FUN_01afc678(&local_1d0,&local_74,local_78,local_7c);
    local_7c0 = 2;
    local_7d8[0] = 0;
    local_7d8[1] = 0;
    local_7d8[2] = 0;
    local_7d8[3] = 0;
    local_7d8[4] = 0;
    local_7d8[5] = 0;
    uVar13 = (~(uint)local_7c[0] << 0x18 | (uint)local_7c[0] << 0x10 | (uint)local_7c[0] << 8 |
             (uint)local_7c[0]) ^
             ((uint)(byte)local_74 << 0x18 | (uint)local_74._1_1_ << 0x10 | (uint)local_78[0]);
    uVar4 = (uVar13 ^ uVar13 >> 0x1e ^ 0xf00f00) * 0x6c078965 + 1;
    uVar13 = uVar4 ^ uVar4 * 0x800;
    uVar5 = (uVar4 ^ uVar4 >> 0x1e) * 0x6c078965 + 2;
    uVar4 = uVar5 ^ uVar5 * 0x800;
    uVar7 = (uVar5 ^ uVar5 >> 0x1e) * 0x6c078965 + 3;
    uVar6 = (uVar7 ^ uVar7 >> 0x1e) * 0x6c078965 + 4;
    uVar5 = uVar6 ^ uVar6 * 0x800;
    uVar13 = uVar13 >> 8 ^ uVar6 >> 0x13 ^ uVar13 ^ uVar6;
    uVar6 = uVar13 ^ uVar13 << 0xb;
    uVar2 = uVar4 >> 8 ^ uVar13 >> 0x13 ^ uVar4 ^ uVar13;
    uVar7 = uVar7 ^ uVar7 * 0x800;
    uVar7 = uVar7 >> 8 ^ uVar2 >> 0x13 ^ uVar7 ^ uVar2;
    uVar4 = uVar5 >> 8 ^ uVar7 >> 0x13 ^ uVar5 ^ uVar7;
    uVar5 = uVar6 >> 8 ^ uVar4 >> 0x13 ^ uVar6 ^ uVar4;
    bVar11 = FUN_020fd7d8(&local_74);
    if (bVar11 < 8) {
      puVar15 = *(undefined8 **)(PTR_DAT_04bb6a58 + (ulong)bVar11 * 8 + 0x20);
    }
    else {
      puVar15 = &DAT_0407ebb1;
    }
    FUN_006d8678(&local_7a0,"MAIL_RND_MsgE_%s",puVar15);
    FUN_006d8678(auStack_b8,"0%02d",(int)((ulong)uVar13 * 5 >> 0x20) + 1);
    FUN_006d8678(auStack_f0,"1%02d",(int)((ulong)uVar2 * 5 >> 0x20) + 1);
    FUN_006d8678(&local_128,"2%02d",(int)((ulong)uVar7 * 5 >> 0x20) + 1);
    FUN_006d8678(&local_160,"3%02d",(int)((ulong)uVar4 * 5 >> 0x20) + 1);
    FUN_006d8678(&local_198,"4%02d",(int)((ulong)uVar5 * 5 >> 0x20) + 1);
    uVar2 = uVar2 ^ uVar2 << 0xb;
    uVar4 = uVar2 >> 8 ^ uVar5 >> 0x13 ^ uVar2 ^ uVar5;
    uVar13 = FUN_027b0354(param_1,&local_74,local_7d8,param_2,&local_7a0,auStack_b8,auStack_f0,
                          &local_128,&local_160,&local_198,local_70,uVar4,0,0);
    if (!bVar10) goto LAB_027b14d4;
    local_7a0 = (undefined *)0x0;
    puStack_798 = (undefined *)0x0;
    FUN_01b88958(&local_7a0,0x1b6);
    FUN_01b88958(&local_7a0,0x1b8);
    FUN_01b88958(&local_7a0,0x1bb);
    FUN_01b88958(&local_7a0,0x1bc);
    uVar7 = uVar7 ^ uVar7 << 0xb;
    FUN_01b88620(auStack_b8,&local_7a0,uVar7 >> 8 ^ uVar4 >> 0x13 ^ uVar7 ^ uVar4);
  }
  *(undefined2 *)(param_1 + 0x36e) = local_b0;
LAB_027b14d4:
  return uVar13 & 1;
}

