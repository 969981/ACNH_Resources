
void FUN_01e64ce0(long param_1,undefined4 *param_2)

{
  bool bVar1;
  ushort *puVar2;
  long lVar3;
  int iVar4;
  short sVar5;
  undefined *puVar6;
  byte bVar7;
  int iVar8;
  uint uVar9;
  long lVar10;
  undefined8 *puVar11;
  ulong uVar12;
  ulong uVar13;
  uint *puVar14;
  undefined4 uVar15;
  undefined *puVar16;
  int iVar17;
  long lVar18;
  ulong *puVar19;
  char cVar20;
  int *piVar21;
  undefined8 uVar22;
  short *psVar23;
  uint local_a0;
  uint local_9c;
  undefined4 uStack_98;
  uint local_94;
  uint local_90;
  uint local_8c;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined6 uStack_70;
  undefined2 local_6a;
  undefined6 uStack_68;
  
  puVar16 = PTR_DAT_04bc3a80;
  if (param_2 == (undefined4 *)0x0) {
    return;
  }
  if (*(int *)(PTR_DAT_04bc3a80 + 0x38) == 0x2a789248) {
    FUN_01ea2da0(param_1,param_2);
    return;
  }
  puVar2 = (ushort *)(param_1 + 0x12570);
  iVar17 = *(int *)(*(long *)PTR_DAT_04bb27c0 + 0x5e8);
  iVar8 = *(int *)(*(long *)(param_1 + 8) + 0x178);
  lVar10 = FUN_0265c3e0(*(undefined4 *)(*(long *)(param_1 + 8) + 0x508));
  psVar23 = (short *)PTR_DAT_04bb6298;
  if (iVar17 != 1 && iVar8 != 1) {
    if (*(int *)(puVar16 + 0x38) == -0x57d4aeba) {
      if ((*(long *)(param_1 + 8) == 0) ||
         (uVar12 = FUN_021ddf10(*(long *)(param_1 + 8) + 0x508), (uVar12 & 1) == 0)) {
        if (lVar10 != 0) {
          if ((*(long **)(lVar10 + 0x28) == (long *)0x0) ||
             (puVar11 = (undefined8 *)**(long **)(lVar10 + 0x28), puVar11 == (undefined8 *)0x0)) {
            uVar12 = 0;
          }
          else {
            uVar12 = (**(code **)*puVar11)();
            uVar12 = uVar12 & 0xffffffff;
          }
          local_9c = FUN_021b3420(&DAT_053fe348,*(long *)(param_1 + 8) + 0x508,1);
          cVar20 = *(char *)(*(long *)(lVar10 + 0x10) + *(long *)(lVar10 + 8) + 0x1315b);
          if ((cVar20 == '\x12') || (cVar20 == '\x01')) {
            local_9c = 0;
          }
          local_78 = (undefined *)0xfffe;
          FUN_0277d4ac(&local_78);
          local_80 = 0xfffe;
          FUN_0277d4ac(&local_80);
          local_88 = 0xfffe;
          FUN_0277d4ac(&local_88);
          uVar13 = FUN_0269b5c0(*(long *)(lVar10 + 0x10) + *(long *)(lVar10 + 8),&local_78,&local_80
                                ,&local_88,&local_9c,0);
          if ((uVar13 & 1) != 0) {
            *param_2 = (uint)local_78;
            param_2[1] = local_78._4_4_;
            param_2[4] = (undefined4)local_80;
            param_2[5] = local_80._4_4_;
            param_2[6] = (undefined4)local_88;
            param_2[7] = local_88._4_4_;
          }
          if ((((uVar12 & 1) != 0) && (*(long *)(lVar10 + 0x28) != 0)) &&
             (puVar11 = *(undefined8 **)(*(long *)(lVar10 + 0x28) + 8), puVar11 != (undefined8 *)0x0
             )) {
            (**(code **)*puVar11)();
          }
        }
      }
      else {
        local_78 = (undefined *)0xfffe;
        FUN_0277d4ac(&local_78);
        local_80 = 0xfffe;
        FUN_0277d4ac(&local_80);
        local_88 = 0xfffe;
        FUN_0277d4ac(&local_88);
        local_9c = FUN_021de320(*(long *)(param_1 + 8) + 0x508,10);
        if (lVar10 != 0) {
          if ((*(long **)(lVar10 + 0x28) == (long *)0x0) ||
             (puVar11 = (undefined8 *)**(long **)(lVar10 + 0x28), puVar11 == (undefined8 *)0x0)) {
            uVar12 = 0;
          }
          else {
            uVar12 = (**(code **)*puVar11)();
            uVar12 = uVar12 & 0xffffffff;
          }
          uVar13 = FUN_0269b5c0(*(long *)(lVar10 + 0x10) + *(long *)(lVar10 + 8),&local_78,&local_80
                                ,&local_88,&local_9c,0);
          if ((((uVar12 & 1) != 0) && (*(long *)(lVar10 + 0x28) != 0)) &&
             (puVar11 = *(undefined8 **)(*(long *)(lVar10 + 0x28) + 8), puVar11 != (undefined8 *)0x0
             )) {
            (**(code **)*puVar11)();
          }
          if ((uVar13 & 1) != 0) {
            *(undefined4 *)(param_1 + 0x126f4) = 10;
            *puVar2 = *puVar2 | 0x200;
            param_2[4] = (undefined4)local_80;
            param_2[5] = local_80._4_4_;
            *param_2 = (uint)local_78;
            param_2[1] = local_78._4_4_;
            param_2[6] = (undefined4)local_88;
            param_2[7] = local_88._4_4_;
          }
        }
      }
      uVar15 = *(undefined4 *)(PTR_DAT_04bb37e0 + 4);
      param_2[10] = *(undefined4 *)PTR_DAT_04bb37e0;
      param_2[0xb] = uVar15;
    }
    goto LAB_01e65248;
  }
  if ((*(long *)(param_1 + 8) == 0) ||
     (uVar9 = *(uint *)(*(long *)(param_1 + 8) + 0x508), uVar9 == 0xffffffff)) goto LAB_01e65248;
  puVar16 = &DAT_053fe348 + (ulong)uVar9 * 0xba0;
  if (9 < uVar9) {
    puVar16 = &DAT_053fe348;
  }
  if (lVar10 == 0) goto LAB_01e65248;
  if ((*(long **)(lVar10 + 0x28) == (long *)0x0) ||
     (puVar11 = (undefined8 *)**(long **)(lVar10 + 0x28), puVar11 == (undefined8 *)0x0)) {
    local_a0 = 0;
  }
  else {
    local_a0 = (**(code **)*puVar11)();
  }
  local_8c = 0;
  bVar7 = FUN_0219e890(puVar16);
  iVar4 = *(int *)(puVar16 + 0x4dc);
  local_78 = (undefined *)CONCAT44(local_78._4_4_,iVar4);
  if ((iVar17 == 1) && (sVar5 = *psVar23, sVar5 != -1)) {
    local_78 = (undefined *)CONCAT44(local_78._4_4_,1);
    puVar14 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar5 * 8);
    if (0xff < (uint)(int)sVar5) {
      puVar14 = (uint *)PTR_DAT_04bc39f8;
    }
    if ((((*puVar14 >> 1 & 1) == 0) || (uVar12 = FUN_0219e6b0(puVar16), (uVar12 & 1) == 0)) ||
       (uVar12 = FUN_0220f914(&local_8c), (uVar12 & 1) == 0)) goto LAB_01e64fb8;
    FUN_0220fad4(param_1 + 0xad30);
    uVar12 = FUN_021df090(*(undefined8 *)(param_1 + 8));
    if (((uVar12 & 1) != 0) || (*(int *)(param_1 + 0xad38) == 3)) goto LAB_01e65424;
    local_78 = PTR_DAT_04bb2020 + 0x10;
    uStack_70 = 0x406d3ab;
    local_6a = 0;
    iVar8 = FUN_02749340(*(long *)(lVar10 + 0x10) + *(long *)(lVar10 + 8) + 0x1267c,&local_78);
    if (iVar8 != 0) goto LAB_01e65424;
    FUN_021e8820(&local_78,*(undefined8 *)(param_1 + 8));
    uVar9 = (uint)local_78;
    uVar15 = local_78._4_4_;
LAB_01e65884:
    param_2[10] = uVar9;
    param_2[0xb] = uVar15;
  }
  else {
LAB_01e64fb8:
    if (iVar8 == 1) {
      sVar5 = *psVar23;
      if (sVar5 != -1) {
        local_78._0_4_ = 1;
        puVar14 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar5 * 8);
        if (0xff < (uint)(int)sVar5) {
          puVar14 = (uint *)PTR_DAT_04bc39f8;
        }
        if ((((*puVar14 >> 1 & 1) != 0) && (uVar12 = FUN_0219e6b0(puVar16), (uVar12 & 1) != 0)) &&
           (uVar12 = FUN_0220f914(0), (uVar12 & 1) != 0)) {
          local_78 = (undefined *)((ulong)local_78._4_4_ << 0x20);
          *puVar2 = *puVar2 | 0x800;
          FUN_021deea0(*(undefined8 *)(param_1 + 8),&local_78);
          FUN_021def90(*(undefined8 *)(param_1 + 8),0);
        }
      }
      local_78 = (undefined *)0xfffe;
      FUN_0277d4ac(&local_78);
      local_80 = 0xfffe;
      FUN_0277d4ac(&local_80);
      local_88 = 0xfffe;
      FUN_0277d4ac(&local_88);
      local_9c = 0;
      local_90 = FUN_021de320(*(long *)(param_1 + 8) + 0x508,0);
      if (local_90 != local_9c) {
        local_94 = (uint)*(byte *)(*(long *)(lVar10 + 0x10) + *(long *)(lVar10 + 8) + 0x1315b);
        if (local_90 == local_94) {
          local_9c = local_90;
        }
      }
      if ((*(long **)(lVar10 + 0x28) == (long *)0x0) ||
         (puVar11 = (undefined8 *)**(long **)(lVar10 + 0x28), puVar11 == (undefined8 *)0x0)) {
        uVar12 = 0;
      }
      else {
        uVar12 = (**(code **)*puVar11)();
        uVar12 = uVar12 & 0xffffffff;
      }
      uVar13 = FUN_0269b5c0(*(long *)(lVar10 + 0x10) + *(long *)(lVar10 + 8),&local_78,&local_80,
                            &local_88,&local_9c,0);
      if ((((uVar12 & 1) != 0) && (*(long *)(lVar10 + 0x28) != 0)) &&
         (puVar11 = *(undefined8 **)(*(long *)(lVar10 + 0x28) + 8), puVar11 != (undefined8 *)0x0)) {
        (**(code **)*puVar11)();
      }
      if ((uVar13 & 1) != 0) {
        *(uint *)(param_1 + 0x126f4) = local_9c;
        *puVar2 = *puVar2 | 0x200;
        *param_2 = (uint)local_78;
        param_2[1] = local_78._4_4_;
        param_2[4] = (undefined4)local_80;
        param_2[5] = local_80._4_4_;
        param_2[6] = (undefined4)local_88;
        param_2[7] = local_88._4_4_;
      }
      psVar23 = (short *)PTR_DAT_04bb6298;
    }
LAB_01e65424:
    bVar7 = bVar7 & iVar4 == 0 ^ 1;
    if (iVar17 != 1) {
      bVar7 = 1;
    }
    if (bVar7 == 0) {
      if (*(long *)(puVar16 + 0xaa0) != 0) {
        iVar17 = *(int *)(*(long *)(puVar16 + 0xaa0) + 4);
        local_78 = (undefined *)CONCAT44(local_78._4_4_,iVar17);
        if (iVar17 == 0x20) goto LAB_01e65888;
      }
      if (*(long *)(param_1 + 8) == 0) {
        local_90 = 0;
      }
      else {
        local_90 = FUN_021dcc90(*(long *)(param_1 + 8) + 0x508);
      }
      puVar6 = PTR_DAT_04bc1568;
      puVar16 = PTR_DAT_04bc1560;
      lVar18 = *(long *)PTR_DAT_04bb3968;
      if (lVar18 == 0) {
LAB_01e65528:
        puVar14 = (uint *)PTR_DAT_04bc2828;
      }
      else {
        if ((int)*(uint *)(lVar18 + 0x16ac8) < 1) {
          if (((*(long *)(lVar18 + 0x169b8) != 0) &&
              (puVar14 = *(uint **)(*(long *)(lVar18 + 0x169b8) + 8), puVar14 != (uint *)0x0)) &&
             (((*(uint *)(lVar18 + 0x169d0) <= local_90 ||
               (*(char *)(*(long *)(lVar18 + 0x169d8) + (long)(int)local_90) != '\0')) &&
              (((local_90 < *puVar14 && (puVar14[1] != 0)) && ((ushort)puVar14[2] != 0)))))) {
            iVar17 = 0xc;
            if (*(char *)((long)puVar14 + 10) != '\0') {
              iVar17 = 0x1c;
            }
            puVar14 = (uint *)((ulong)(puVar14[1] * local_90 + (uint)(ushort)puVar14[2] * 8 + iVar17
                                      ) + (long)puVar14);
            if (puVar14 != (uint *)0x0) goto LAB_01e65530;
          }
          goto LAB_01e65528;
        }
        if (*(uint *)(lVar18 + 0x16ac8) <= local_90) goto LAB_01e65528;
        uVar9 = local_90;
        if (*(uint *)(lVar18 + 0x16ab8) <= local_90) {
          uVar9 = 0;
        }
        puVar14 = *(uint **)(*(long *)(lVar18 + 0x16ac0) + (ulong)uVar9 * 8);
        if (puVar14 == (uint *)0x0) goto LAB_01e65528;
      }
LAB_01e65530:
      local_78 = (undefined *)((ulong)local_78 & 0xffffffff00000000);
      if (*puVar14 != 0) {
        cVar20 = *PTR_DAT_04bc1560;
        do {
          if (cVar20 == '\0') {
            cVar20 = '\x01';
            *(undefined8 *)puVar6 = 0xffffffffffffffff;
            *(undefined8 *)(puVar6 + 8) = 0xffffffffffffffff;
            *puVar16 = 1;
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
          }
          else {
            uVar9 = *(uint *)(puVar6 + 0x14);
            if (-1 < (int)uVar9) {
              if (((byte *)((ulong)uVar9 + (long)puVar14) != (byte *)0x0) &&
                 ((*(byte *)((ulong)uVar9 + (long)puVar14) & 1) != 0)) {
                local_9c = *(uint *)PTR_DAT_04bb37e0;
                uStack_98 = *(undefined4 *)(PTR_DAT_04bb37e0 + 4);
                goto LAB_01e65788;
              }
              break;
            }
            if (uVar9 != 0xffffffff) break;
          }
          lVar18 = (long)puVar14 - (ulong)*puVar14;
          if ((*puVar14 == 0) || (lVar18 == 0)) break;
          lVar3 = 0xc;
          if (*(char *)(lVar18 + 10) != '\0') {
            lVar3 = 0x1c;
          }
          if (lVar3 + lVar18 == 0) break;
          uVar12 = (ulong)*(ushort *)(lVar18 + 8);
          *(undefined4 *)(puVar6 + 0x14) = 0xfffffffe;
          if (uVar12 == 0) break;
          piVar21 = (int *)(lVar3 + lVar18 + 4);
          while (piVar21[-1] != 0x430dbf65) {
            piVar21 = piVar21 + 2;
            uVar12 = uVar12 - 1;
            if (uVar12 == 0) goto LAB_01e65778;
          }
          iVar17 = 0;
          if (*piVar21 != -1) {
            iVar17 = *piVar21;
          }
          *(int *)(puVar6 + 0x14) = iVar17;
          if (*puVar14 == 0) break;
        } while( true );
      }
LAB_01e65778:
      FUN_01e6fdd0(&local_9c,param_1,&local_90);
LAB_01e65788:
      puVar16 = PTR_DAT_04bb32e8;
      uVar22 = *(undefined8 *)PTR_DAT_04bb32f0;
      local_78 = PTR_DAT_04bb2020 + 0x10;
      uStack_70 = 0x408bf35;
      local_6a = 0;
      puVar19 = (ulong *)(*(long *)PTR_DAT_04bb32e8 + 0x4068);
      if (*(short *)puVar19 == 0) {
        local_88 = *(ulong *)(*(long *)PTR_DAT_04bb32e8 + 0x4060);
        if ((char)(local_88 >> 0x20) < '\x05') {
          local_80 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_88);
          local_80 = local_80 + -0x15180;
          local_88 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_80);
        }
        puVar19 = &local_88;
        uVar12 = local_88 >> 0x30;
        local_88._0_6_ = CONCAT24(5,(undefined4)local_88);
        local_88 = CONCAT26((short)uVar12,(undefined6)local_88) & 0xff00ffffffffffff;
      }
      uVar12 = *puVar19;
      uVar12 = FUN_00879dd0(uVar22,&local_78,uVar12,uVar12 >> 0x10,uVar12 >> 0x18,0);
      if ((uVar12 & 1) == 0) {
        bVar1 = true;
      }
      else {
        bVar1 = *(char *)(*(long *)puVar16 + 0x4064) < '\b';
      }
      uVar12 = FUN_021f4f90(*(long *)(*(long *)(param_1 + 8) + 0x68) + 0x278,0,0);
      uVar9 = local_9c;
      uVar15 = uStack_98;
      if ((uVar12 & 1) != 0) {
        uVar12 = FUN_021dd780(*(undefined8 *)(param_1 + 8));
        uVar9 = local_9c;
        uVar15 = uStack_98;
        if ((uVar12 & 1) != 0) goto LAB_01e65888;
      }
      local_9c = uVar9;
      uStack_98 = uVar15;
      if (bVar1) goto LAB_01e65884;
    }
  }
LAB_01e65888:
  if ((((local_a0 & 1) != 0) && (*(long *)(lVar10 + 0x28) != 0)) &&
     (puVar11 = *(undefined8 **)(*(long *)(lVar10 + 0x28) + 8), puVar11 != (undefined8 *)0x0)) {
    (**(code **)*puVar11)();
  }
LAB_01e65248:
  sVar5 = *psVar23;
  if (sVar5 != -1) {
    local_78 = (undefined *)CONCAT44(local_78._4_4_,1);
    puVar14 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar5 * 8);
    if (0xff < (uint)(int)sVar5) {
      puVar14 = (uint *)PTR_DAT_04bc39f8;
    }
    if ((((*puVar14 >> 1 & 1) != 0) &&
        (uVar9 = FUN_00a86724(*(undefined8 *)PTR_DAT_04bb30a0), uVar9 < 4)) &&
       (*(long *)(param_1 + 8) != 0)) {
      uVar9 = *(uint *)(*(long *)(param_1 + 8) + 0x508);
      if ((uVar9 < 10) && ((&DAT_053fee41)[(ulong)uVar9 * 0xba0] != '\0')) {
        if (*(byte *)(**(long **)PTR_DAT_04bb27d0 + 0x476) < 2) {
          (&DAT_053fea2c)[(ulong)uVar9 * 0x2e8] = 0;
        }
        else {
          lVar10 = *(long *)PTR_DAT_04bb3968;
          lVar18 = lVar10 + 0xe18 + (ulong)uVar9 * 0x28;
          puVar19 = (ulong *)(lVar18 + 8);
          if (*(byte *)puVar19 < 100) {
            uStack_68 = (undefined6)((ulong)*(long *)(lVar18 + 0x16) >> 0x10);
            local_6a = (undefined2)((ulong)*(undefined8 *)(lVar18 + 0x10) >> 0x30);
            local_78 = (undefined *)(*puVar19 & 0xfffffffff3ffffff);
            if ((undefined *)*puVar19 != local_78 ||
                *(long *)(lVar18 + 0x16) != CONCAT62(uStack_68,local_6a)) {
              *puVar19 = (ulong)local_78;
              *(undefined8 *)(lVar18 + 0x10) = *(undefined8 *)(lVar18 + 0x10);
              *(undefined1 *)(lVar10 + 0xe18 + (ulong)uVar9 * 0x28 + 0x1e) = 1;
              *(ulong *)(lVar18 + 0x16) = CONCAT62(uStack_68,local_6a);
            }
          }
        }
      }
      if (((*(long *)(param_1 + 8) != 0) &&
          (uVar9 = *(uint *)(*(long *)(param_1 + 8) + 0x508), uVar9 < 10)) &&
         ((&DAT_053fee41)[(ulong)uVar9 * 0xba0] != '\0')) {
        if (*(byte *)(**(long **)PTR_DAT_04bb27d0 + 0x476) < 2) {
          (&DAT_053fea30)[(ulong)uVar9 * 0xba0] = (&DAT_053fea30)[(ulong)uVar9 * 0xba0] & 0xfe;
        }
        else {
          lVar10 = *(long *)PTR_DAT_04bb3968;
          lVar18 = lVar10 + 0xe18 + (ulong)uVar9 * 0x28;
          puVar19 = (ulong *)(lVar18 + 8);
          if (*(byte *)puVar19 < 100) {
            uStack_68 = (undefined6)((ulong)*(long *)(lVar18 + 0x16) >> 0x10);
            local_78 = (undefined *)(*puVar19 & 0xffffffffcfffffff);
            local_6a = (undefined2)((ulong)*(undefined8 *)(lVar18 + 0x10) >> 0x30);
            if ((undefined *)*puVar19 != local_78 ||
                *(long *)(lVar18 + 0x16) != CONCAT62(uStack_68,local_6a)) {
              *puVar19 = (ulong)local_78;
              *(undefined8 *)(lVar18 + 0x10) = *(undefined8 *)(lVar18 + 0x10);
              *(undefined1 *)(lVar10 + 0xe18 + (ulong)uVar9 * 0x28 + 0x1e) = 1;
              *(ulong *)(lVar18 + 0x16) = CONCAT62(uStack_68,local_6a);
            }
          }
        }
      }
    }
  }
  return;
}

