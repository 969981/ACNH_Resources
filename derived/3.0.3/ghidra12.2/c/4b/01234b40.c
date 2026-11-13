
/* WARNING: Removing unreachable block (ram,0x0123651c) */
/* WARNING: Removing unreachable block (ram,0x01236370) */

uint FUN_01234b40(undefined8 param_1,long param_2,uint param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  undefined *puVar4;
  undefined *puVar5;
  char cVar6;
  char cVar7;
  uint uVar8;
  int iVar9;
  ulong uVar10;
  long lVar11;
  undefined *puVar12;
  ushort *puVar13;
  ulong uVar14;
  char *pcVar15;
  ulong uVar16;
  ushort uVar17;
  long lVar18;
  uint *puVar19;
  uint *puVar20;
  int *piVar21;
  byte bVar22;
  undefined1 *puVar23;
  uint *puVar24;
  byte bVar25;
  undefined8 uVar26;
  undefined1 *puVar27;
  char *pcVar28;
  undefined *puVar29;
  byte bVar30;
  undefined8 local_1a0;
  char *pcStack_198;
  undefined *local_190;
  undefined1 *local_188;
  int local_180;
  undefined1 local_17c [63];
  undefined1 local_13d;
  undefined8 local_138;
  char *local_130;
  int local_128;
  char local_124 [63];
  undefined1 local_e5;
  undefined *local_e0;
  undefined1 *local_d8;
  int local_d0;
  undefined1 local_cc [63];
  undefined1 local_8d;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [8];
  uint *local_78;
  uint local_6c;
  
  lVar11 = DAT_05150358;
  uVar8 = FUN_0277d6c4();
  uVar8 = (uVar8 & 0xffff) - (uint)*(ushort *)(lVar11 + 0x1f8);
  if ((*(uint *)(lVar11 + 0x1d8) <= uVar8) ||
     (puVar24 = *(uint **)(*(long *)(lVar11 + 0x1e0) + (long)(int)uVar8 * 8), puVar24 == (uint *)0x0
     )) {
LAB_01234d78:
    uVar8 = 0;
    goto LAB_01234d7c;
  }
  uVar10 = FUN_012375e0(puVar24);
  puVar29 = PTR_DAT_04bb30a0;
  if ((uVar10 & 1) == 0) goto LAB_01234d78;
  uVar26 = *(undefined8 *)PTR_DAT_04bb30a0;
  local_138 = (undefined *)FUN_00a8c31c(uVar26);
  if ((char)((ulong)local_138 >> 0x20) < '\x05') {
    lVar11 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_138);
    local_e0 = (undefined *)(lVar11 + -0x15180);
    local_138 = (undefined *)nn::time::ToCalendarTimeInUtc((PosixTime *)&local_e0);
  }
  uVar14 = (ulong)local_138 >> 0x10;
  uVar10 = (ulong)local_138 >> 0x30;
  uVar16 = (ulong)local_138 >> 0x18;
  local_138._0_6_ = CONCAT24(5,(undefined4)local_138);
  local_138 = (undefined *)(CONCAT26((short)uVar10,(uint6)local_138) & 0xff00ffffffffffff);
  cVar6 = FUN_00a8ae20(uVar26,uVar14,uVar16,4);
  uVar26 = *(undefined8 *)puVar29;
  local_138 = (undefined *)FUN_00a8c31c(uVar26);
  if ((char)((ulong)local_138 >> 0x20) < '\x05') {
    lVar11 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_138);
    local_e0 = (undefined *)(lVar11 + -0x15180);
    local_138 = (undefined *)nn::time::ToCalendarTimeInUtc((PosixTime *)&local_e0);
  }
  uVar10 = (ulong)local_138;
  uVar14 = (ulong)local_138 >> 0x10;
  uVar16 = (ulong)local_138 >> 0x18;
  local_138._0_6_ = CONCAT24(5,(undefined4)local_138);
  local_138._7_1_ = SUB81(uVar10,7);
  local_138._0_7_ = (uint7)(uint6)local_138;
  cVar7 = FUN_00a8ae20(uVar26,uVar14,uVar16,8);
  puVar12 = PTR_DAT_04bbbc78;
  puVar29 = PTR_DAT_04bbbc70;
  bVar30 = 0;
  if ((byte)(cVar7 - 1U) < 3) {
    local_e0 = (undefined *)CONCAT44(local_e0._4_4_,2);
    uVar8 = *puVar24;
    if (uVar8 != 0) {
      cVar7 = *PTR_DAT_04bbbc70;
      do {
        if (cVar7 == '\0') {
          *(undefined8 *)puVar12 = 0xffffffffffffffff;
          *(undefined8 *)(puVar12 + 8) = 0xffffffffffffffff;
          cVar7 = '\x01';
          *(undefined4 *)(puVar12 + 0x60) = 0xffffffff;
          *puVar29 = 1;
          *(undefined8 *)(puVar12 + 0x10) = 0xffffffffffffffff;
          *(undefined8 *)(puVar12 + 0x18) = 0xffffffffffffffff;
          *(undefined8 *)(puVar12 + 0x20) = 0xffffffffffffffff;
          *(undefined8 *)(puVar12 + 0x28) = 0xffffffffffffffff;
          *(undefined8 *)(puVar12 + 0x30) = 0xffffffffffffffff;
          *(undefined8 *)(puVar12 + 0x38) = 0xffffffffffffffff;
          *(undefined8 *)(puVar12 + 0x40) = 0xffffffffffffffff;
          *(undefined8 *)(puVar12 + 0x48) = 0xffffffffffffffff;
          *(undefined8 *)(puVar12 + 0x50) = 0xffffffffffffffff;
          *(undefined8 *)(puVar12 + 0x58) = 0xffffffffffffffff;
          uVar8 = *puVar24;
        }
        else {
          uVar3 = *(uint *)(puVar12 + 0x5c);
          if (-1 < (int)uVar3) {
            if ((byte *)((ulong)uVar3 + (long)puVar24) != (byte *)0x0) {
              bVar30 = *(byte *)((ulong)uVar3 + (long)puVar24) >> 2 & 1;
              goto LAB_01234dd8;
            }
            break;
          }
          if (uVar3 != 0xffffffff) break;
        }
        puVar19 = (uint *)(ulong)uVar8;
        bVar30 = 0;
        if ((puVar19 == (uint *)0x0) || (bVar30 = 0, puVar24 == puVar19)) goto LAB_01234dd8;
        lVar11 = 0xc;
        if (*(char *)((long)puVar24 + (10 - (long)puVar19)) != '\0') {
          lVar11 = 0x1c;
        }
        lVar11 = (long)puVar24 + (lVar11 - (long)puVar19);
        if (lVar11 == 0) break;
        uVar10 = (ulong)*(ushort *)((long)puVar24 + (8 - (long)puVar19));
        *(undefined4 *)(puVar12 + 0x5c) = 0xfffffffe;
        if (uVar10 == 0) break;
        piVar21 = (int *)(lVar11 + 4);
        while (piVar21[-1] != -0x5b4d2993) {
          piVar21 = piVar21 + 2;
          uVar10 = uVar10 - 1;
          if (uVar10 == 0) goto LAB_01234dd4;
        }
        iVar9 = 0;
        if (*piVar21 != -1) {
          iVar9 = *piVar21;
        }
        *(int *)(puVar12 + 0x5c) = iVar9;
        uVar8 = *puVar24;
        if (uVar8 == 0) break;
      } while( true );
    }
LAB_01234dd4:
    bVar30 = 0;
  }
LAB_01234dd8:
  FUN_0124c030(auStack_88,param_1);
  iVar9 = FUN_0123db50(auStack_80,local_78);
  puVar12 = PTR_DAT_04bbbc78;
  puVar29 = PTR_DAT_04bbbc70;
  if (((iVar9 - 0xbU < 7) && (local_78 != (uint *)0x0)) && (uVar8 = *local_78, uVar8 != 0)) {
    cVar7 = *PTR_DAT_04bbbc70;
    do {
      if (cVar7 == '\0') {
        *(undefined8 *)puVar12 = 0xffffffffffffffff;
        *(undefined8 *)(puVar12 + 8) = 0xffffffffffffffff;
        cVar7 = '\x01';
        *(undefined4 *)(puVar12 + 0x60) = 0xffffffff;
        *puVar29 = 1;
        *(undefined8 *)(puVar12 + 0x10) = 0xffffffffffffffff;
        *(undefined8 *)(puVar12 + 0x18) = 0xffffffffffffffff;
        *(undefined8 *)(puVar12 + 0x20) = 0xffffffffffffffff;
        *(undefined8 *)(puVar12 + 0x28) = 0xffffffffffffffff;
        *(undefined8 *)(puVar12 + 0x30) = 0xffffffffffffffff;
        *(undefined8 *)(puVar12 + 0x38) = 0xffffffffffffffff;
        *(undefined8 *)(puVar12 + 0x40) = 0xffffffffffffffff;
        *(undefined8 *)(puVar12 + 0x48) = 0xffffffffffffffff;
        *(undefined8 *)(puVar12 + 0x50) = 0xffffffffffffffff;
        *(undefined8 *)(puVar12 + 0x58) = 0xffffffffffffffff;
        uVar8 = *local_78;
      }
      else {
        uVar3 = *(uint *)(puVar12 + 0x4c);
        if (-1 < (int)uVar3) {
          if ((((byte *)((ulong)uVar3 + (long)local_78) == (byte *)0x0) ||
              (bVar22 = *(byte *)((ulong)uVar3 + (long)local_78), bVar22 < 3)) ||
             ((iVar9 = FUN_0123db50(auStack_80), cVar6 != '\x02' || (0xfffffffd < iVar9 - 0x11U))))
          break;
          if (bVar22 == 4) {
            puVar13 = (ushort *)FUN_01246470(puVar24,0xb,0x2c6a189e,DAT_05151398);
            if (puVar13 == (ushort *)0x0) goto LAB_012365a8;
LAB_01235c7c:
            uVar17 = *puVar13;
          }
          else {
            if (bVar22 != 3) break;
            puVar13 = (ushort *)FUN_01246470(puVar24,7,0x76e7fe08,DAT_05151390);
            if (puVar13 != (ushort *)0x0) goto LAB_01235c7c;
LAB_012365a8:
            uVar17 = 0xfffe;
          }
          local_138 = (undefined *)(ulong)uVar17;
          FUN_0277d4ac(&local_138);
          local_e0 = local_138;
          uVar8 = FUN_01234b40(&local_e0,param_2,param_3 & 1);
          goto LAB_01234d7c;
        }
        if (uVar3 != 0xffffffff) break;
      }
      puVar19 = (uint *)(ulong)uVar8;
      if ((puVar19 == (uint *)0x0) || (local_78 == puVar19)) break;
      lVar11 = 0xc;
      if (*(char *)((long)local_78 + (10 - (long)puVar19)) != '\0') {
        lVar11 = 0x1c;
      }
      lVar11 = (long)local_78 + (lVar11 - (long)puVar19);
      if (lVar11 == 0) break;
      uVar10 = (ulong)*(ushort *)((long)local_78 + (8 - (long)puVar19));
      *(undefined4 *)(puVar12 + 0x4c) = 0xfffffffe;
      if (uVar10 == 0) break;
      piVar21 = (int *)(lVar11 + 4);
      while (piVar21[-1] != -0xa58ccc9) {
        piVar21 = piVar21 + 2;
        uVar10 = uVar10 - 1;
        if (uVar10 == 0) goto LAB_01234f00;
      }
      iVar9 = 0;
      if (*piVar21 != -1) {
        iVar9 = *piVar21;
      }
      *(int *)(puVar12 + 0x4c) = iVar9;
      uVar8 = *local_78;
      if (uVar8 == 0) break;
    } while( true );
  }
LAB_01234f00:
  lVar11 = DAT_05150358;
  if ((param_3 & 1) == 0) {
    uVar8 = FUN_0277d6c4(param_1);
    puVar12 = PTR_DAT_04bbbc78;
    puVar29 = PTR_DAT_04bbbc70;
    uVar8 = (uVar8 & 0xffff) - (uint)*(ushort *)(lVar11 + 0x1f8);
    if ((*(uint *)(lVar11 + 0x1d8) <= uVar8) ||
       (puVar19 = *(uint **)(*(long *)(lVar11 + 0x1e0) + (long)(int)uVar8 * 8),
       puVar19 == (uint *)0x0)) goto LAB_01235018;
    uVar8 = *puVar19;
    if (uVar8 != 0) {
      cVar7 = *PTR_DAT_04bbbc70;
      do {
        if (cVar7 == '\0') {
          *(undefined8 *)puVar12 = 0xffffffffffffffff;
          *(undefined8 *)(puVar12 + 8) = 0xffffffffffffffff;
          cVar7 = '\x01';
          *(undefined4 *)(puVar12 + 0x60) = 0xffffffff;
          *puVar29 = 1;
          *(undefined8 *)(puVar12 + 0x10) = 0xffffffffffffffff;
          *(undefined8 *)(puVar12 + 0x18) = 0xffffffffffffffff;
          *(undefined8 *)(puVar12 + 0x20) = 0xffffffffffffffff;
          *(undefined8 *)(puVar12 + 0x28) = 0xffffffffffffffff;
          *(undefined8 *)(puVar12 + 0x30) = 0xffffffffffffffff;
          *(undefined8 *)(puVar12 + 0x38) = 0xffffffffffffffff;
          *(undefined8 *)(puVar12 + 0x40) = 0xffffffffffffffff;
          *(undefined8 *)(puVar12 + 0x48) = 0xffffffffffffffff;
          *(undefined8 *)(puVar12 + 0x50) = 0xffffffffffffffff;
          *(undefined8 *)(puVar12 + 0x58) = 0xffffffffffffffff;
          uVar8 = *puVar19;
        }
        else {
          uVar3 = *(uint *)(puVar12 + 0x5c);
          if (-1 < (int)uVar3) {
            if ((byte *)((ulong)uVar3 + (long)puVar19) != (byte *)0x0) {
              bVar22 = *(byte *)((ulong)uVar3 + (long)puVar19) & 1;
              goto LAB_0123501c;
            }
            break;
          }
          if (uVar3 != 0xffffffff) break;
        }
        puVar20 = (uint *)(ulong)uVar8;
        bVar22 = 0;
        if ((puVar20 == (uint *)0x0) || (puVar19 == puVar20)) goto LAB_0123501c;
        lVar11 = 0xc;
        if (*(char *)((long)puVar19 + (10 - (long)puVar20)) != '\0') {
          lVar11 = 0x1c;
        }
        lVar11 = (long)puVar19 + (lVar11 - (long)puVar20);
        bVar22 = 0;
        if (lVar11 == 0) goto LAB_0123501c;
        uVar10 = (ulong)*(ushort *)((long)puVar19 + (8 - (long)puVar20));
        *(undefined4 *)(puVar12 + 0x5c) = 0xfffffffe;
        if (uVar10 == 0) break;
        piVar21 = (int *)(lVar11 + 4);
        while (piVar21[-1] != -0x5b4d2993) {
          piVar21 = piVar21 + 2;
          uVar10 = uVar10 - 1;
          if (uVar10 == 0) goto LAB_01235c1c;
        }
        iVar9 = 0;
        if (*piVar21 != -1) {
          iVar9 = *piVar21;
        }
        *(int *)(puVar12 + 0x5c) = iVar9;
        uVar8 = *puVar19;
        if (uVar8 == 0) break;
      } while( true );
    }
LAB_01235c1c:
    bVar22 = 0;
  }
  else {
LAB_01235018:
    bVar22 = 0;
  }
LAB_0123501c:
  puVar5 = PTR_DAT_04bbbc78;
  puVar4 = PTR_DAT_04bbbc70;
  puVar12 = PTR_DAT_04bb2f70;
  puVar29 = PTR_DAT_04bb2bc0;
  if (cVar6 == '\x02') {
    uVar8 = *puVar24;
    if (uVar8 != 0) {
      cVar7 = *PTR_DAT_04bbbc70;
      do {
        if (cVar7 == '\0') {
          *(undefined8 *)puVar5 = 0xffffffffffffffff;
          *(undefined8 *)(puVar5 + 8) = 0xffffffffffffffff;
          cVar7 = '\x01';
          *(undefined4 *)(puVar5 + 0x60) = 0xffffffff;
          *puVar4 = 1;
          *(undefined8 *)(puVar5 + 0x10) = 0xffffffffffffffff;
          *(undefined8 *)(puVar5 + 0x18) = 0xffffffffffffffff;
          *(undefined8 *)(puVar5 + 0x20) = 0xffffffffffffffff;
          *(undefined8 *)(puVar5 + 0x28) = 0xffffffffffffffff;
          *(undefined8 *)(puVar5 + 0x30) = 0xffffffffffffffff;
          *(undefined8 *)(puVar5 + 0x38) = 0xffffffffffffffff;
          *(undefined8 *)(puVar5 + 0x40) = 0xffffffffffffffff;
          *(undefined8 *)(puVar5 + 0x48) = 0xffffffffffffffff;
          *(undefined8 *)(puVar5 + 0x50) = 0xffffffffffffffff;
          *(undefined8 *)(puVar5 + 0x58) = 0xffffffffffffffff;
          uVar8 = *puVar24;
        }
        else {
          uVar3 = *(uint *)(puVar5 + 0x5c);
          if (-1 < (int)uVar3) {
            if ((byte *)((ulong)uVar3 + (long)puVar24) != (byte *)0x0) {
              bVar25 = *(byte *)((ulong)uVar3 + (long)puVar24) >> 1 & 1;
              goto LAB_0123530c;
            }
            break;
          }
          if (uVar3 != 0xffffffff) break;
        }
        puVar19 = (uint *)(ulong)uVar8;
        bVar25 = 0;
        if ((puVar19 == (uint *)0x0) || (bVar25 = 0, puVar24 == puVar19)) goto LAB_0123530c;
        lVar11 = 0xc;
        if (*(char *)((long)puVar24 + (10 - (long)puVar19)) != '\0') {
          lVar11 = 0x1c;
        }
        lVar11 = (long)puVar24 + (lVar11 - (long)puVar19);
        if (lVar11 == 0) break;
        uVar10 = (ulong)*(ushort *)((long)puVar24 + (8 - (long)puVar19));
        *(undefined4 *)(puVar5 + 0x5c) = 0xfffffffe;
        if (uVar10 == 0) break;
        piVar21 = (int *)(lVar11 + 4);
        while (piVar21[-1] != -0x5b4d2993) {
          piVar21 = piVar21 + 2;
          uVar10 = uVar10 - 1;
          if (uVar10 == 0) goto LAB_01235308;
        }
        iVar9 = 0;
        if (*piVar21 != -1) {
          iVar9 = *piVar21;
        }
        *(int *)(puVar5 + 0x5c) = iVar9;
        uVar8 = *puVar24;
        if (uVar8 == 0) break;
      } while( true );
    }
LAB_01235308:
    bVar25 = 0;
LAB_0123530c:
    puVar5 = PTR_DAT_04bbbc78;
    puVar4 = PTR_DAT_04bbbc70;
    uVar8 = *puVar24;
    if (uVar8 != 0) {
      cVar7 = *PTR_DAT_04bbbc70;
      do {
        if (cVar7 == '\0') {
          *(undefined8 *)puVar5 = 0xffffffffffffffff;
          *(undefined8 *)(puVar5 + 8) = 0xffffffffffffffff;
          cVar7 = '\x01';
          *(undefined4 *)(puVar5 + 0x60) = 0xffffffff;
          *puVar4 = 1;
          *(undefined8 *)(puVar5 + 0x10) = 0xffffffffffffffff;
          *(undefined8 *)(puVar5 + 0x18) = 0xffffffffffffffff;
          *(undefined8 *)(puVar5 + 0x20) = 0xffffffffffffffff;
          *(undefined8 *)(puVar5 + 0x28) = 0xffffffffffffffff;
          *(undefined8 *)(puVar5 + 0x30) = 0xffffffffffffffff;
          *(undefined8 *)(puVar5 + 0x38) = 0xffffffffffffffff;
          *(undefined8 *)(puVar5 + 0x40) = 0xffffffffffffffff;
          *(undefined8 *)(puVar5 + 0x48) = 0xffffffffffffffff;
          *(undefined8 *)(puVar5 + 0x50) = 0xffffffffffffffff;
          *(undefined8 *)(puVar5 + 0x58) = 0xffffffffffffffff;
          uVar8 = *puVar24;
        }
        else {
          uVar3 = *(uint *)(puVar5 + 0x60);
          if (-1 < (int)uVar3) {
            puVar23 = (undefined1 *)((ulong)uVar3 + (long)puVar24);
            goto LAB_012353f8;
          }
          if (uVar3 != 0xffffffff) break;
        }
        puVar19 = (uint *)(ulong)uVar8;
        puVar23 = (undefined1 *)0x0;
        if ((puVar19 == (uint *)0x0) || (puVar23 = (undefined1 *)0x0, puVar24 == puVar19))
        goto LAB_012353f8;
        lVar11 = 0xc;
        if (*(char *)((long)puVar24 + (10 - (long)puVar19)) != '\0') {
          lVar11 = 0x1c;
        }
        lVar11 = (long)puVar24 + (lVar11 - (long)puVar19);
        puVar23 = (undefined1 *)0x0;
        if (lVar11 == 0) goto LAB_012353f8;
        uVar10 = (ulong)*(ushort *)((long)puVar24 + (8 - (long)puVar19));
        *(undefined4 *)(puVar5 + 0x60) = 0xfffffffe;
        if (uVar10 == 0) break;
        piVar21 = (int *)(lVar11 + 4);
        while (piVar21[-1] != 0x48ef0398) {
          piVar21 = piVar21 + 2;
          uVar10 = uVar10 - 1;
          if (uVar10 == 0) goto LAB_012353f4;
        }
        iVar9 = 0;
        if (*piVar21 != -1) {
          iVar9 = *piVar21;
        }
        *(int *)(puVar5 + 0x60) = iVar9;
        uVar8 = *puVar24;
        if (uVar8 == 0) break;
      } while( true );
    }
LAB_012353f4:
    puVar23 = (undefined1 *)0x0;
LAB_012353f8:
    local_8d = 0;
    puVar27 = *(undefined1 **)PTR_PTR_04bbbc90;
    if (puVar23 != (undefined1 *)0x0) {
      puVar27 = puVar23;
    }
    local_d0 = 0x40;
    local_e0 = puVar12 + 0x10;
    local_d8 = local_cc;
    if (local_cc != puVar27) {
      lVar11 = 0;
      do {
        if (puVar27[lVar11] == '\0') {
LAB_01235470:
          iVar9 = (int)lVar11;
          if (0x3f < iVar9) {
            iVar9 = 0x3f;
          }
          goto LAB_0123547c;
        }
        if (puVar27[lVar11 + 1] == '\0') {
          lVar11 = lVar11 + 1;
          goto LAB_01235470;
        }
        if (puVar27[lVar11 + 2] == '\0') {
          lVar11 = lVar11 + 2;
          goto LAB_01235470;
        }
        lVar11 = lVar11 + 3;
      } while (lVar11 != 0x80001);
      iVar9 = 0;
LAB_0123547c:
      memcpy(local_cc,puVar27,(long)iVar9);
      local_cc[iVar9] = 0;
      puVar12 = PTR_DAT_04bb2f70;
    }
    puVar23 = local_d8;
    puVar4 = PTR_DAT_04bb2020;
    local_e0 = puVar29 + 0x10;
    if (bVar25 == 0) goto LAB_01235504;
    lVar11 = 0;
    local_138 = PTR_DAT_04bb2020 + 0x10;
    local_130 = "Snow";
    local_d8[(long)local_d0 + -1] = 0;
    do {
      if (local_d8[lVar11] == '\0') goto LAB_012355d8;
      if (local_d8[lVar11 + 1] == '\0') {
        lVar11 = lVar11 + 1;
        goto LAB_012355d8;
      }
      if (local_d8[lVar11 + 2] == '\0') {
        lVar11 = lVar11 + 2;
        goto LAB_012355d8;
      }
      lVar11 = lVar11 + 3;
    } while (lVar11 != 0x80001);
    lVar11 = 0;
LAB_012355d8:
    uVar8 = (uint)lVar11 & ((int)(uint)lVar11 >> 0x1f ^ 0xffffffffU);
    (**(code **)(puVar4 + 0x28))(&local_138);
    lVar11 = 0;
    do {
      if (local_130[lVar11] == '\0') goto LAB_01235630;
      if (local_130[lVar11 + 1] == '\0') goto LAB_01235624;
      if (local_130[lVar11 + 2] == '\0') goto LAB_0123562c;
      lVar11 = lVar11 + 3;
    } while (lVar11 != 0x80001);
LAB_0123561c:
    lVar11 = 0;
    goto LAB_01235630;
  }
  uVar8 = *puVar24;
  if (uVar8 != 0) {
    cVar7 = *PTR_DAT_04bbbc70;
    do {
      if (cVar7 == '\0') {
        *(undefined8 *)puVar5 = 0xffffffffffffffff;
        *(undefined8 *)(puVar5 + 8) = 0xffffffffffffffff;
        cVar7 = '\x01';
        *(undefined4 *)(puVar5 + 0x60) = 0xffffffff;
        *puVar4 = 1;
        *(undefined8 *)(puVar5 + 0x10) = 0xffffffffffffffff;
        *(undefined8 *)(puVar5 + 0x18) = 0xffffffffffffffff;
        *(undefined8 *)(puVar5 + 0x20) = 0xffffffffffffffff;
        *(undefined8 *)(puVar5 + 0x28) = 0xffffffffffffffff;
        *(undefined8 *)(puVar5 + 0x30) = 0xffffffffffffffff;
        *(undefined8 *)(puVar5 + 0x38) = 0xffffffffffffffff;
        *(undefined8 *)(puVar5 + 0x40) = 0xffffffffffffffff;
        *(undefined8 *)(puVar5 + 0x48) = 0xffffffffffffffff;
        *(undefined8 *)(puVar5 + 0x50) = 0xffffffffffffffff;
        *(undefined8 *)(puVar5 + 0x58) = 0xffffffffffffffff;
        uVar8 = *puVar24;
      }
      else {
        uVar3 = *(uint *)(puVar5 + 0x60);
        if (-1 < (int)uVar3) {
          puVar23 = (undefined1 *)((ulong)uVar3 + (long)puVar24);
          goto LAB_01235228;
        }
        if (uVar3 != 0xffffffff) break;
      }
      puVar19 = (uint *)(ulong)uVar8;
      puVar23 = (undefined1 *)0x0;
      if ((puVar19 == (uint *)0x0) || (puVar23 = (undefined1 *)0x0, puVar24 == puVar19))
      goto LAB_01235228;
      lVar11 = 0xc;
      if (*(char *)((long)puVar24 + (10 - (long)puVar19)) != '\0') {
        lVar11 = 0x1c;
      }
      lVar11 = (long)puVar24 + (lVar11 - (long)puVar19);
      puVar23 = (undefined1 *)0x0;
      if (lVar11 == 0) goto LAB_01235228;
      uVar10 = (ulong)*(ushort *)((long)puVar24 + (8 - (long)puVar19));
      *(undefined4 *)(puVar5 + 0x60) = 0xfffffffe;
      if (uVar10 == 0) break;
      piVar21 = (int *)(lVar11 + 4);
      while (piVar21[-1] != 0x48ef0398) {
        piVar21 = piVar21 + 2;
        uVar10 = uVar10 - 1;
        if (uVar10 == 0) goto LAB_01235224;
      }
      iVar9 = 0;
      if (*piVar21 != -1) {
        iVar9 = *piVar21;
      }
      *(int *)(puVar5 + 0x60) = iVar9;
      uVar8 = *puVar24;
      if (uVar8 == 0) break;
    } while( true );
  }
LAB_01235224:
  puVar23 = (undefined1 *)0x0;
LAB_01235228:
  local_8d = 0;
  puVar27 = *(undefined1 **)PTR_PTR_04bbbc90;
  if (puVar23 != (undefined1 *)0x0) {
    puVar27 = puVar23;
  }
  local_d0 = 0x40;
  local_e0 = puVar12 + 0x10;
  local_d8 = local_cc;
  if (local_cc != puVar27) {
    lVar11 = 0;
    do {
      if (puVar27[lVar11] == '\0') {
LAB_012352a0:
        iVar9 = (int)lVar11;
        if (0x3f < iVar9) {
          iVar9 = 0x3f;
        }
        goto LAB_012352ac;
      }
      if (puVar27[lVar11 + 1] == '\0') {
        lVar11 = lVar11 + 1;
        goto LAB_012352a0;
      }
      if (puVar27[lVar11 + 2] == '\0') {
        lVar11 = lVar11 + 2;
        goto LAB_012352a0;
      }
      lVar11 = lVar11 + 3;
    } while (lVar11 != 0x80001);
    iVar9 = 0;
LAB_012352ac:
    memcpy(local_cc,puVar27,(long)iVar9);
    local_cc[iVar9] = 0;
    puVar12 = PTR_DAT_04bb2f70;
  }
LAB_01235504:
  puVar23 = local_d8;
  puVar4 = PTR_DAT_04bb2020;
  local_e0 = puVar29 + 0x10;
  if (bVar30 != 0) {
    lVar11 = 0;
    local_138 = PTR_DAT_04bb2020 + 0x10;
    local_130 = "Sakura";
    local_d8[(long)local_d0 + -1] = 0;
    do {
      if (local_d8[lVar11] == '\0') goto LAB_0123557c;
      if (local_d8[lVar11 + 1] == '\0') {
        lVar11 = lVar11 + 1;
        goto LAB_0123557c;
      }
      if (local_d8[lVar11 + 2] == '\0') {
        lVar11 = lVar11 + 2;
        goto LAB_0123557c;
      }
      lVar11 = lVar11 + 3;
    } while (lVar11 != 0x80001);
    lVar11 = 0;
LAB_0123557c:
    uVar8 = (uint)lVar11 & ((int)(uint)lVar11 >> 0x1f ^ 0xffffffffU);
    (**(code **)(puVar4 + 0x28))(&local_138);
    lVar11 = 0;
    do {
      if (local_130[lVar11] == '\0') goto LAB_01235630;
      if (local_130[lVar11 + 1] == '\0') goto LAB_01235624;
      if (local_130[lVar11 + 2] == '\0') goto LAB_0123562c;
      lVar11 = lVar11 + 3;
    } while (lVar11 != 0x80001);
    goto LAB_0123561c;
  }
  goto LAB_0123568c;
LAB_01235624:
  lVar11 = lVar11 + 1;
  goto LAB_01235630;
LAB_0123562c:
  lVar11 = lVar11 + 2;
LAB_01235630:
  uVar3 = (uint)lVar11;
  if ((int)(local_d0 - uVar8) <= (int)(uint)lVar11) {
    uVar3 = local_d0 + ~uVar8;
  }
  if (0 < (int)uVar3) {
    (**(code **)(local_138 + 0x18))(&local_138);
    memcpy(puVar23 + uVar8,local_130,(ulong)uVar3);
    puVar23[(int)(uVar3 + uVar8)] = 0;
  }
  puVar12 = PTR_DAT_04bb2f70;
  puVar29 = PTR_DAT_04bb2bc0;
LAB_0123568c:
  puVar5 = PTR_DAT_04bbbc78;
  puVar4 = PTR_DAT_04bbbc70;
  uVar8 = *puVar24;
  if (uVar8 != 0) {
    cVar7 = *PTR_DAT_04bbbc70;
    do {
      if (cVar7 == '\0') {
        *(undefined8 *)puVar5 = 0xffffffffffffffff;
        *(undefined8 *)(puVar5 + 8) = 0xffffffffffffffff;
        cVar7 = '\x01';
        *(undefined4 *)(puVar5 + 0x60) = 0xffffffff;
        *puVar4 = 1;
        *(undefined8 *)(puVar5 + 0x10) = 0xffffffffffffffff;
        *(undefined8 *)(puVar5 + 0x18) = 0xffffffffffffffff;
        *(undefined8 *)(puVar5 + 0x20) = 0xffffffffffffffff;
        *(undefined8 *)(puVar5 + 0x28) = 0xffffffffffffffff;
        *(undefined8 *)(puVar5 + 0x30) = 0xffffffffffffffff;
        *(undefined8 *)(puVar5 + 0x38) = 0xffffffffffffffff;
        *(undefined8 *)(puVar5 + 0x40) = 0xffffffffffffffff;
        *(undefined8 *)(puVar5 + 0x48) = 0xffffffffffffffff;
        *(undefined8 *)(puVar5 + 0x50) = 0xffffffffffffffff;
        *(undefined8 *)(puVar5 + 0x58) = 0xffffffffffffffff;
        uVar8 = *puVar24;
      }
      else {
        uVar3 = *(uint *)(puVar5 + 0x54);
        if (-1 < (int)uVar3) {
          pcVar15 = (char *)((ulong)uVar3 + (long)puVar24);
          goto LAB_01235778;
        }
        if (uVar3 != 0xffffffff) break;
      }
      puVar19 = (uint *)(ulong)uVar8;
      pcVar15 = (char *)0x0;
      if ((puVar19 == (uint *)0x0) || (pcVar15 = (char *)0x0, puVar24 == puVar19))
      goto LAB_01235778;
      lVar11 = 0xc;
      if (*(char *)((long)puVar24 + (10 - (long)puVar19)) != '\0') {
        lVar11 = 0x1c;
      }
      lVar11 = (long)puVar24 + (lVar11 - (long)puVar19);
      pcVar15 = (char *)0x0;
      if (lVar11 == 0) goto LAB_01235778;
      uVar10 = (ulong)*(ushort *)((long)puVar24 + (8 - (long)puVar19));
      *(undefined4 *)(puVar5 + 0x54) = 0xfffffffe;
      if (uVar10 == 0) break;
      piVar21 = (int *)(lVar11 + 4);
      while (piVar21[-1] != 0x39b5a93d) {
        piVar21 = piVar21 + 2;
        uVar10 = uVar10 - 1;
        if (uVar10 == 0) goto LAB_01235774;
      }
      iVar9 = 0;
      if (*piVar21 != -1) {
        iVar9 = *piVar21;
      }
      *(int *)(puVar5 + 0x54) = iVar9;
      uVar8 = *puVar24;
      if (uVar8 == 0) break;
    } while( true );
  }
LAB_01235774:
  pcVar15 = (char *)0x0;
LAB_01235778:
  local_e5 = 0;
  pcVar28 = PTR_DAT_04c47fb0;
  if (pcVar15 != (char *)0x0) {
    pcVar28 = pcVar15;
  }
  local_128 = 0x40;
  local_138 = puVar12 + 0x10;
  local_130 = local_124;
  if (local_124 != pcVar28) {
    lVar11 = 0;
    do {
      if (pcVar28[lVar11] == '\0') {
LAB_012357ec:
        iVar9 = (int)lVar11;
        if (0x3f < iVar9) {
          iVar9 = 0x3f;
        }
        goto LAB_012357f8;
      }
      if (pcVar28[lVar11 + 1] == '\0') {
        lVar11 = lVar11 + 1;
        goto LAB_012357ec;
      }
      if (pcVar28[lVar11 + 2] == '\0') {
        lVar11 = lVar11 + 2;
        goto LAB_012357ec;
      }
      lVar11 = lVar11 + 3;
    } while (lVar11 != 0x80001);
    iVar9 = 0;
LAB_012357f8:
    memcpy(local_124,pcVar28,(long)iVar9);
    local_124[iVar9] = '\0';
  }
  puVar4 = PTR_DAT_04bbbc78;
  puVar12 = PTR_DAT_04bbbc70;
  local_138 = puVar29 + 0x10;
  if (cVar6 == '\x02') {
    local_190 = (undefined *)CONCAT44(local_190._4_4_,1);
    uVar8 = *puVar24;
    if (uVar8 != 0) {
      cVar6 = *PTR_DAT_04bbbc70;
      do {
        if (cVar6 == '\0') {
          *(undefined8 *)puVar4 = 0xffffffffffffffff;
          *(undefined8 *)(puVar4 + 8) = 0xffffffffffffffff;
          cVar6 = '\x01';
          *(undefined4 *)(puVar4 + 0x60) = 0xffffffff;
          *puVar12 = 1;
          *(undefined8 *)(puVar4 + 0x10) = 0xffffffffffffffff;
          *(undefined8 *)(puVar4 + 0x18) = 0xffffffffffffffff;
          *(undefined8 *)(puVar4 + 0x20) = 0xffffffffffffffff;
          *(undefined8 *)(puVar4 + 0x28) = 0xffffffffffffffff;
          *(undefined8 *)(puVar4 + 0x30) = 0xffffffffffffffff;
          *(undefined8 *)(puVar4 + 0x38) = 0xffffffffffffffff;
          *(undefined8 *)(puVar4 + 0x40) = 0xffffffffffffffff;
          *(undefined8 *)(puVar4 + 0x48) = 0xffffffffffffffff;
          *(undefined8 *)(puVar4 + 0x50) = 0xffffffffffffffff;
          *(undefined8 *)(puVar4 + 0x58) = 0xffffffffffffffff;
          uVar8 = *puVar24;
        }
        else {
          uVar3 = *(uint *)(puVar4 + 0x5c);
          if (-1 < (int)uVar3) {
            if (((byte *)((ulong)uVar3 + (long)puVar24) != (byte *)0x0) &&
               ((*(byte *)((ulong)uVar3 + (long)puVar24) >> 1 & 1) != 0)) goto LAB_01235a78;
            break;
          }
          if (uVar3 != 0xffffffff) break;
        }
        puVar19 = (uint *)(ulong)uVar8;
        if ((puVar19 == (uint *)0x0) || (puVar24 == puVar19)) break;
        lVar11 = 0xc;
        if (*(char *)((long)puVar24 + (10 - (long)puVar19)) != '\0') {
          lVar11 = 0x1c;
        }
        lVar11 = (long)puVar24 + (lVar11 - (long)puVar19);
        if (lVar11 == 0) break;
        uVar10 = (ulong)*(ushort *)((long)puVar24 + (8 - (long)puVar19));
        *(undefined4 *)(puVar4 + 0x5c) = 0xfffffffe;
        if (uVar10 == 0) break;
        piVar21 = (int *)(lVar11 + 4);
        while (piVar21[-1] != -0x5b4d2993) {
          piVar21 = piVar21 + 2;
          uVar10 = uVar10 - 1;
          if (uVar10 == 0) goto LAB_01235954;
        }
        iVar9 = 0;
        if (*piVar21 != -1) {
          iVar9 = *piVar21;
        }
        *(int *)(puVar4 + 0x5c) = iVar9;
        uVar8 = *puVar24;
        if (uVar8 == 0) break;
      } while( true );
    }
LAB_01235954:
    puVar12 = PTR_DAT_04bbbc78;
    puVar29 = PTR_DAT_04bbbc70;
    local_190 = (undefined *)CONCAT44(local_190._4_4_,10);
    uVar8 = *puVar24;
    if (uVar8 != 0) {
      cVar6 = *PTR_DAT_04bbbc70;
      do {
        if (cVar6 == '\0') {
          *(undefined8 *)puVar12 = 0xffffffffffffffff;
          *(undefined8 *)(puVar12 + 8) = 0xffffffffffffffff;
          cVar6 = '\x01';
          *(undefined4 *)(puVar12 + 0x60) = 0xffffffff;
          *puVar29 = 1;
          *(undefined8 *)(puVar12 + 0x10) = 0xffffffffffffffff;
          *(undefined8 *)(puVar12 + 0x18) = 0xffffffffffffffff;
          *(undefined8 *)(puVar12 + 0x20) = 0xffffffffffffffff;
          *(undefined8 *)(puVar12 + 0x28) = 0xffffffffffffffff;
          *(undefined8 *)(puVar12 + 0x30) = 0xffffffffffffffff;
          *(undefined8 *)(puVar12 + 0x38) = 0xffffffffffffffff;
          *(undefined8 *)(puVar12 + 0x40) = 0xffffffffffffffff;
          *(undefined8 *)(puVar12 + 0x48) = 0xffffffffffffffff;
          *(undefined8 *)(puVar12 + 0x50) = 0xffffffffffffffff;
          *(undefined8 *)(puVar12 + 0x58) = 0xffffffffffffffff;
          uVar8 = *puVar24;
        }
        else {
          uVar3 = *(uint *)(puVar12 + 0x58);
          if (-1 < (int)uVar3) {
            if (((ulong)uVar3 + (long)puVar24 != 0) &&
               ((*(byte *)((ulong)uVar3 + (long)puVar24 + 1) >> 2 & 1) != 0)) goto LAB_01235a78;
            break;
          }
          if (uVar3 != 0xffffffff) break;
        }
        puVar19 = (uint *)(ulong)uVar8;
        if ((puVar19 == (uint *)0x0) || (puVar24 == puVar19)) break;
        lVar11 = 0xc;
        if (*(char *)((long)puVar24 + (10 - (long)puVar19)) != '\0') {
          lVar11 = 0x1c;
        }
        lVar11 = (long)puVar24 + (lVar11 - (long)puVar19);
        if (lVar11 == 0) break;
        uVar10 = (ulong)*(ushort *)((long)puVar24 + (8 - (long)puVar19));
        *(undefined4 *)(puVar12 + 0x58) = 0xfffffffe;
        if (uVar10 == 0) break;
        piVar21 = (int *)(lVar11 + 4);
        while (piVar21[-1] != 0x623dc307) {
          piVar21 = piVar21 + 2;
          uVar10 = uVar10 - 1;
          if (uVar10 == 0) goto LAB_01235a8c;
        }
        iVar9 = 0;
        if (*piVar21 != -1) {
          iVar9 = *piVar21;
        }
        *(int *)(puVar12 + 0x58) = iVar9;
        uVar8 = *puVar24;
        if (uVar8 == 0) break;
      } while( true );
    }
  }
LAB_01235a8c:
  pcVar15 = local_130;
  if (bVar30 != 0) {
    local_190 = PTR_DAT_04bb2020 + 0x10;
    local_188 = &DAT_040bae5e;
    (**(code **)(local_138 + 0x18))(&local_138);
    lVar11 = 0;
    do {
      if (local_130[lVar11] == '\0') goto LAB_01235afc;
      if (local_130[lVar11 + 1] == '\0') {
        lVar11 = lVar11 + 1;
        goto LAB_01235afc;
      }
      if (local_130[lVar11 + 2] == '\0') {
        lVar11 = lVar11 + 2;
        goto LAB_01235afc;
      }
      lVar11 = lVar11 + 3;
    } while (lVar11 != 0x80001);
    lVar11 = 0;
LAB_01235afc:
    uVar8 = (uint)lVar11 & ((int)(uint)lVar11 >> 0x1f ^ 0xffffffffU);
    (**(code **)(local_190 + 0x18))(&local_190);
    lVar11 = 0;
    do {
      if (local_188[lVar11] == '\0') goto LAB_01235d18;
      if (local_188[lVar11 + 1] == '\0') goto LAB_01235d0c;
      if (local_188[lVar11 + 2] == '\0') goto LAB_01235d14;
      lVar11 = lVar11 + 3;
    } while (lVar11 != 0x80001);
LAB_01235b48:
    lVar11 = 0;
    goto LAB_01235d18;
  }
  goto LAB_01235d64;
LAB_01235a78:
  iVar9 = FUN_0123db50(auStack_80,local_78);
  if (iVar9 == 0x2d) goto LAB_01235a8c;
  iVar9 = FUN_0277d6c4(param_1);
  if ((iVar9 == 0xed14) || (iVar9 = FUN_0277d6c4(param_1), iVar9 == 0xed15)) {
    pcVar15 = "PltWeedLight1A";
LAB_01235b80:
    FUN_038d1270(&local_138,pcVar15);
  }
  else {
    iVar9 = FUN_0277d6c4(param_1);
    if ((iVar9 == 0xed11) || (iVar9 = FUN_0277d6c4(param_1), iVar9 == 0xed10)) {
      pcVar15 = "PltWeedLight2A";
      goto LAB_01235b80;
    }
  }
  pcVar15 = local_130;
  local_190 = PTR_DAT_04bb2020 + 0x10;
  local_188 = &DAT_040cf099;
  (**(code **)(local_138 + 0x18))(&local_138);
  lVar11 = 0;
  do {
    if (local_130[lVar11] == '\0') goto LAB_01235cc4;
    if (local_130[lVar11 + 1] == '\0') {
      lVar11 = lVar11 + 1;
      goto LAB_01235cc4;
    }
    if (local_130[lVar11 + 2] == '\0') {
      lVar11 = lVar11 + 2;
      goto LAB_01235cc4;
    }
    lVar11 = lVar11 + 3;
  } while (lVar11 != 0x80001);
  lVar11 = 0;
LAB_01235cc4:
  uVar8 = (uint)lVar11 & ((int)(uint)lVar11 >> 0x1f ^ 0xffffffffU);
  (**(code **)(local_190 + 0x18))(&local_190);
  lVar11 = 0;
  do {
    if (local_188[lVar11] == '\0') goto LAB_01235d18;
    if (local_188[lVar11 + 1] == '\0') goto LAB_01235d0c;
    if (local_188[lVar11 + 2] == '\0') goto LAB_01235d14;
    lVar11 = lVar11 + 3;
  } while (lVar11 != 0x80001);
  goto LAB_01235b48;
LAB_01235d0c:
  lVar11 = lVar11 + 1;
  goto LAB_01235d18;
LAB_01235d14:
  lVar11 = lVar11 + 2;
LAB_01235d18:
  uVar3 = (uint)lVar11;
  if ((int)(local_128 - uVar8) <= (int)(uint)lVar11) {
    uVar3 = local_128 + ~uVar8;
  }
  if (0 < (int)uVar3) {
    (**(code **)(local_190 + 0x18))(&local_190);
    memcpy(pcVar15 + uVar8,local_188,(ulong)uVar3);
    pcVar15[(int)(uVar3 + uVar8)] = '\0';
  }
LAB_01235d64:
  pcVar15 = local_130;
  puVar29 = PTR_DAT_04bb2020;
  if (bVar22 == 0) {
    puVar27 = *(undefined1 **)(param_2 + 0x280);
    (**(code **)(local_e0 + 0x18))(&local_e0);
    puVar23 = local_d8;
    if (puVar27 != local_d8) {
      (**(code **)(local_e0 + 0x18))(&local_e0);
      lVar11 = 0;
      do {
        if (local_d8[lVar11] == '\0') goto LAB_01235f84;
        if (local_d8[lVar11 + 1] == '\0') {
          lVar11 = lVar11 + 1;
          goto LAB_01235f84;
        }
        if (local_d8[lVar11 + 2] == '\0') {
          lVar11 = lVar11 + 2;
          goto LAB_01235f84;
        }
        lVar11 = lVar11 + 3;
      } while (lVar11 != 0x80001);
      lVar11 = 0;
LAB_01235f84:
      iVar9 = (int)lVar11;
      if (*(int *)(param_2 + 0x288) <= (int)lVar11) {
        iVar9 = *(int *)(param_2 + 0x288) + -1;
      }
      memcpy(puVar27,puVar23,(long)iVar9);
      puVar27[iVar9] = 0;
    }
    *(undefined4 *)(param_2 + 0x10d8) = 0;
    pcVar28 = *(char **)(param_2 + 0xf90);
    (**(code **)(local_138 + 0x18))(&local_138);
    pcVar15 = local_130;
    if (pcVar28 != local_130) {
      (**(code **)(local_138 + 0x18))(&local_138);
      lVar11 = 0;
      do {
        if (local_130[lVar11] == '\0') goto LAB_012360cc;
        if (local_130[lVar11 + 1] == '\0') {
          lVar11 = lVar11 + 1;
          goto LAB_012360cc;
        }
        if (local_130[lVar11 + 2] == '\0') {
          lVar11 = lVar11 + 2;
          goto LAB_012360cc;
        }
        lVar11 = lVar11 + 3;
      } while (lVar11 != 0x80001);
      lVar11 = 0;
LAB_012360cc:
      iVar9 = (int)lVar11;
      if (*(int *)(param_2 + 0xf98) <= (int)lVar11) {
        iVar9 = *(int *)(param_2 + 0xf98) + -1;
      }
      goto LAB_01236570;
    }
  }
  else {
    local_190 = PTR_DAT_04bb2020 + 0x10;
    local_188 = &DAT_040c4c2c;
    (**(code **)(local_138 + 0x18))(&local_138);
    lVar11 = 0;
    do {
      if (local_130[lVar11] == '\0') goto LAB_01235e4c;
      if (local_130[lVar11 + 1] == '\0') {
        lVar11 = lVar11 + 1;
        goto LAB_01235e4c;
      }
      if (local_130[lVar11 + 2] == '\0') {
        lVar11 = lVar11 + 2;
        goto LAB_01235e4c;
      }
      lVar11 = lVar11 + 3;
    } while (lVar11 != 0x80001);
    lVar11 = 0;
LAB_01235e4c:
    uVar8 = (uint)lVar11 & ((int)(uint)lVar11 >> 0x1f ^ 0xffffffffU);
    (**(code **)(local_190 + 0x18))(&local_190);
    lVar11 = 0;
    do {
      if (local_188[lVar11] == '\0') goto LAB_01235eac;
      if (local_188[lVar11 + 1] == '\0') {
        lVar11 = lVar11 + 1;
        goto LAB_01235eac;
      }
      if (local_188[lVar11 + 2] == '\0') {
        lVar11 = lVar11 + 2;
        goto LAB_01235eac;
      }
      lVar11 = lVar11 + 3;
    } while (lVar11 != 0x80001);
    lVar11 = 0;
LAB_01235eac:
    uVar3 = (uint)lVar11;
    if ((int)(local_128 - uVar8) <= (int)(uint)lVar11) {
      uVar3 = local_128 + ~uVar8;
    }
    if (0 < (int)uVar3) {
      (**(code **)(local_190 + 0x18))(&local_190);
      memcpy(pcVar15 + uVar8,local_188,(ulong)uVar3);
      pcVar15[(int)(uVar3 + uVar8)] = '\0';
    }
    puVar27 = *(undefined1 **)(param_2 + 0x280);
    (**(code **)(local_e0 + 0x18))(&local_e0);
    puVar23 = local_d8;
    puVar12 = PTR_DAT_04bb2bc0;
    if (puVar27 != local_d8) {
      (**(code **)(local_e0 + 0x18))(&local_e0);
      lVar11 = 0;
      do {
        if (local_d8[lVar11] == '\0') goto LAB_0123602c;
        if (local_d8[lVar11 + 1] == '\0') {
          lVar11 = lVar11 + 1;
          goto LAB_0123602c;
        }
        if (local_d8[lVar11 + 2] == '\0') {
          lVar11 = lVar11 + 2;
          goto LAB_0123602c;
        }
        lVar11 = lVar11 + 3;
      } while (lVar11 != 0x80001);
      lVar11 = 0;
LAB_0123602c:
      iVar9 = (int)lVar11;
      if (*(int *)(param_2 + 0x288) <= (int)lVar11) {
        iVar9 = *(int *)(param_2 + 0x288) + -1;
      }
      memcpy(puVar27,puVar23,(long)iVar9);
      puVar27[iVar9] = 0;
    }
    *(undefined4 *)(param_2 + 0x10d8) = 0;
    pcVar28 = *(char **)(param_2 + 0xf90);
    (**(code **)(local_138 + 0x18))(&local_138);
    pcVar15 = local_130;
    if (pcVar28 != local_130) {
      (**(code **)(local_138 + 0x18))(&local_138);
      lVar11 = 0;
      do {
        if (local_130[lVar11] == '\0') goto LAB_012360ec;
        if (local_130[lVar11 + 1] == '\0') {
          lVar11 = lVar11 + 1;
          goto LAB_012360ec;
        }
        if (local_130[lVar11 + 2] == '\0') {
          lVar11 = lVar11 + 2;
          goto LAB_012360ec;
        }
        lVar11 = lVar11 + 3;
      } while (lVar11 != 0x80001);
      lVar11 = 0;
LAB_012360ec:
      iVar9 = (int)lVar11;
      if (*(int *)(param_2 + 0xf98) <= (int)lVar11) {
        iVar9 = *(int *)(param_2 + 0xf98) + -1;
      }
      memcpy(pcVar28,pcVar15,(long)iVar9);
      pcVar28[iVar9] = '\0';
    }
    puVar5 = PTR_DAT_04bbbc78;
    puVar4 = PTR_DAT_04bbbc70;
    uVar8 = *puVar24;
    if (uVar8 != 0) {
      cVar6 = *PTR_DAT_04bbbc70;
      do {
        if (cVar6 == '\0') {
          *(undefined8 *)puVar5 = 0xffffffffffffffff;
          *(undefined8 *)(puVar5 + 8) = 0xffffffffffffffff;
          cVar6 = '\x01';
          *(undefined4 *)(puVar5 + 0x60) = 0xffffffff;
          *puVar4 = 1;
          *(undefined8 *)(puVar5 + 0x10) = 0xffffffffffffffff;
          *(undefined8 *)(puVar5 + 0x18) = 0xffffffffffffffff;
          *(undefined8 *)(puVar5 + 0x20) = 0xffffffffffffffff;
          *(undefined8 *)(puVar5 + 0x28) = 0xffffffffffffffff;
          *(undefined8 *)(puVar5 + 0x30) = 0xffffffffffffffff;
          *(undefined8 *)(puVar5 + 0x38) = 0xffffffffffffffff;
          *(undefined8 *)(puVar5 + 0x40) = 0xffffffffffffffff;
          *(undefined8 *)(puVar5 + 0x48) = 0xffffffffffffffff;
          *(undefined8 *)(puVar5 + 0x50) = 0xffffffffffffffff;
          *(undefined8 *)(puVar5 + 0x58) = 0xffffffffffffffff;
          uVar8 = *puVar24;
        }
        else {
          uVar3 = *(uint *)(puVar5 + 0x60);
          if (-1 < (int)uVar3) {
            puVar23 = (undefined1 *)((ulong)uVar3 + (long)puVar24);
            goto LAB_01236208;
          }
          if (uVar3 != 0xffffffff) break;
        }
        puVar19 = (uint *)(ulong)uVar8;
        puVar23 = (undefined1 *)0x0;
        if ((puVar19 == (uint *)0x0) || (puVar23 = (undefined1 *)0x0, puVar24 == puVar19))
        goto LAB_01236208;
        lVar11 = 0xc;
        if (*(char *)((long)puVar24 + (10 - (long)puVar19)) != '\0') {
          lVar11 = 0x1c;
        }
        lVar11 = (long)puVar24 + (lVar11 - (long)puVar19);
        puVar23 = (undefined1 *)0x0;
        if (lVar11 == 0) goto LAB_01236208;
        uVar10 = (ulong)*(ushort *)((long)puVar24 + (8 - (long)puVar19));
        *(undefined4 *)(puVar5 + 0x60) = 0xfffffffe;
        if (uVar10 == 0) break;
        piVar21 = (int *)(lVar11 + 4);
        while (piVar21[-1] != 0x48ef0398) {
          piVar21 = piVar21 + 2;
          uVar10 = uVar10 - 1;
          if (uVar10 == 0) goto LAB_01236204;
        }
        iVar9 = 0;
        if (*piVar21 != -1) {
          iVar9 = *piVar21;
        }
        *(int *)(puVar5 + 0x60) = iVar9;
        uVar8 = *puVar24;
        if (uVar8 == 0) break;
      } while( true );
    }
LAB_01236204:
    puVar23 = (undefined1 *)0x0;
LAB_01236208:
    local_13d = 0;
    puVar27 = *(undefined1 **)PTR_PTR_04bbbc90;
    if (puVar23 != (undefined1 *)0x0) {
      puVar27 = puVar23;
    }
    local_180 = 0x40;
    local_188 = local_17c;
    if (local_17c == puVar27) {
      lVar11 = 0x3f;
    }
    else {
      lVar11 = 0;
      do {
        if (puVar27[lVar11] == '\0') {
LAB_01236284:
          iVar9 = (int)lVar11;
          if (0x3f < iVar9) {
            iVar9 = 0x3f;
          }
          goto LAB_01236290;
        }
        if (puVar27[lVar11 + 1] == '\0') {
          lVar11 = lVar11 + 1;
          goto LAB_01236284;
        }
        if (puVar27[lVar11 + 2] == '\0') {
          lVar11 = lVar11 + 2;
          goto LAB_01236284;
        }
        lVar11 = lVar11 + 3;
      } while (lVar11 != 0x80001);
      iVar9 = 0;
LAB_01236290:
      memcpy(local_17c,puVar27,(long)iVar9);
      local_17c[iVar9] = 0;
      lVar11 = (long)local_180 + -1;
      puVar27 = local_188;
    }
    local_190 = puVar12 + 0x10;
    lVar18 = 0;
    puVar27[lVar11] = 0;
    do {
      if (local_188[lVar18] == '\0') goto LAB_0123630c;
      if (local_188[lVar18 + 1] == '\0') {
        lVar18 = lVar18 + 1;
        goto LAB_0123630c;
      }
      if (local_188[lVar18 + 2] == '\0') {
        lVar18 = lVar18 + 2;
        goto LAB_0123630c;
      }
      lVar18 = lVar18 + 3;
    } while (lVar18 != 0x80001);
    lVar18 = 0;
LAB_0123630c:
    uVar8 = (uint)lVar18 & ((int)(uint)lVar18 >> 0x1f ^ 0xffffffffU);
    uVar3 = 4;
    if ((int)(local_180 - uVar8) < 5) {
      uVar3 = local_180 + ~uVar8;
    }
    if (0 < (int)uVar3) {
      memcpy(puVar27 + uVar8,&DAT_04091831,(ulong)uVar3);
      puVar27[(ulong)uVar3 + (ulong)uVar8] = 0;
    }
    local_1a0 = (undefined *)((ulong)local_1a0._4_4_ << 0x20);
    (**(code **)(*(long *)(param_2 + 0x310) + 0x10))((long *)(param_2 + 0x310),&local_190);
    puVar1 = (undefined4 *)(param_2 + 0x10dc);
    puVar2 = puVar1 + ((ulong)local_1a0 & 0xffffffff);
    if (0x11 < (uint)local_1a0) {
      puVar2 = puVar1;
    }
    *puVar2 = 0;
    lVar11 = DAT_05150358;
    uVar8 = FUN_0277d6c4(param_1);
    puVar4 = PTR_DAT_04bbbc78;
    puVar12 = PTR_DAT_04bbbc70;
    uVar8 = (uVar8 & 0xffff) - (uint)*(ushort *)(lVar11 + 0x1f8);
    if ((uVar8 < *(uint *)(lVar11 + 0x1d8)) &&
       (puVar24 = *(uint **)(*(long *)(lVar11 + 0x1e0) + (long)(int)uVar8 * 8),
       puVar24 != (uint *)0x0)) {
      local_1a0 = (undefined *)CONCAT44(local_1a0._4_4_,10);
      uVar8 = *puVar24;
      if (uVar8 != 0) {
        cVar6 = *PTR_DAT_04bbbc70;
        do {
          if (cVar6 == '\0') {
            *(undefined8 *)puVar4 = 0xffffffffffffffff;
            *(undefined8 *)(puVar4 + 8) = 0xffffffffffffffff;
            cVar6 = '\x01';
            *(undefined4 *)(puVar4 + 0x60) = 0xffffffff;
            *puVar12 = 1;
            *(undefined8 *)(puVar4 + 0x10) = 0xffffffffffffffff;
            *(undefined8 *)(puVar4 + 0x18) = 0xffffffffffffffff;
            *(undefined8 *)(puVar4 + 0x20) = 0xffffffffffffffff;
            *(undefined8 *)(puVar4 + 0x28) = 0xffffffffffffffff;
            *(undefined8 *)(puVar4 + 0x30) = 0xffffffffffffffff;
            *(undefined8 *)(puVar4 + 0x38) = 0xffffffffffffffff;
            *(undefined8 *)(puVar4 + 0x40) = 0xffffffffffffffff;
            *(undefined8 *)(puVar4 + 0x48) = 0xffffffffffffffff;
            *(undefined8 *)(puVar4 + 0x50) = 0xffffffffffffffff;
            *(undefined8 *)(puVar4 + 0x58) = 0xffffffffffffffff;
            uVar8 = *puVar24;
          }
          else {
            uVar3 = *(uint *)(puVar4 + 0x58);
            if (-1 < (int)uVar3) {
              if (((ulong)uVar3 + (long)puVar24 != 0) &&
                 ((*(byte *)((ulong)uVar3 + (long)puVar24 + 1) >> 2 & 1) != 0)) {
                local_1a0 = puVar29 + 0x10;
                pcStack_198 = "PltTreeCedarAnim";
                local_6c = 3;
                (**(code **)(*(long *)(param_2 + 0x4d8) + 0x10))
                          ((long *)(param_2 + 0x4d8),&local_1a0);
                uVar10 = (ulong)local_6c;
                if (0x11 < local_6c) {
                  uVar10 = 0;
                }
                puVar1[uVar10] = 0;
              }
              break;
            }
            if (uVar3 != 0xffffffff) break;
          }
          puVar19 = (uint *)(ulong)uVar8;
          if ((puVar19 == (uint *)0x0) || (puVar24 == puVar19)) break;
          lVar11 = 0xc;
          if (*(char *)((long)puVar24 + (10 - (long)puVar19)) != '\0') {
            lVar11 = 0x1c;
          }
          lVar11 = (long)puVar24 + (lVar11 - (long)puVar19);
          if (lVar11 == 0) break;
          uVar10 = (ulong)*(ushort *)((long)puVar24 + (8 - (long)puVar19));
          *(undefined4 *)(puVar4 + 0x58) = 0xfffffffe;
          if (uVar10 == 0) break;
          piVar21 = (int *)(lVar11 + 4);
          while (piVar21[-1] != 0x623dc307) {
            piVar21 = piVar21 + 2;
            uVar10 = uVar10 - 1;
            if (uVar10 == 0) goto LAB_0123653c;
          }
          iVar9 = 0;
          if (*piVar21 != -1) {
            iVar9 = *piVar21;
          }
          *(int *)(puVar4 + 0x58) = iVar9;
          uVar8 = *puVar24;
          if (uVar8 == 0) break;
        } while( true );
      }
    }
LAB_0123653c:
    pcVar28 = *(char **)(param_2 + 0x1028);
    if (pcVar28 != "PlantCommon") {
      pcVar15 = "PlantCommon";
      iVar9 = 0xb;
      if (*(int *)(param_2 + 0x1030) < 0xc) {
        iVar9 = *(int *)(param_2 + 0x1030) + -1;
      }
LAB_01236570:
      memcpy(pcVar28,pcVar15,(long)iVar9);
      pcVar28[iVar9] = '\0';
    }
  }
  uVar8 = 1;
LAB_01234d7c:
  return uVar8 & 1;
}

