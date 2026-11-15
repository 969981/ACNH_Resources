
void FUN_021ab460(long param_1,uint *param_2,uint *param_3,undefined8 param_4)

{
  uint uVar1;
  ushort uVar2;
  undefined *puVar3;
  undefined *puVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint *puVar9;
  undefined8 *puVar10;
  long lVar11;
  long lVar12;
  undefined1 uVar13;
  undefined4 uVar14;
  long lVar15;
  byte *pbVar16;
  byte bVar17;
  int iVar18;
  char cVar19;
  uint *puVar20;
  ulong uVar21;
  int *piVar22;
  char *pcVar23;
  undefined *puVar24;
  ulong uVar25;
  undefined *puVar26;
  undefined8 local_90;
  char *pcStack_88;
  undefined4 local_7c;
  undefined4 uStack_78;
  undefined1 local_74;
  undefined2 local_73;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined1 local_68;
  undefined2 local_67;
  uint local_64;
  
  lVar15 = *(long *)PTR_DAT_04bb3968;
  uVar6 = *(uint *)(lVar15 + 0x16718);
  if ((int)uVar6 < 1) {
    lVar11 = *(long *)(lVar15 + 0x16608);
    if (lVar11 == 0) goto LAB_021ab558;
    puVar9 = *(uint **)(lVar11 + 8);
    if (((puVar9 == (uint *)0x0) ||
        (((0x10 < *(uint *)(lVar15 + 0x16620) &&
          (*(char *)(*(long *)(lVar15 + 0x16628) + 0x10) == '\0')) || (*puVar9 < 0x11)))) ||
       ((puVar9[1] == 0 || ((ushort)puVar9[2] == 0)))) {
      lVar12 = 0;
    }
    else {
      iVar18 = 0xc;
      if (*(char *)((long)puVar9 + 10) != '\0') {
        iVar18 = 0x1c;
      }
      lVar12 = (ulong)((uint)(ushort)puVar9[2] * 8 + puVar9[1] * 0x10 + iVar18) + (long)puVar9;
    }
    puVar9 = *(uint **)(lVar11 + 8);
    if ((((puVar9 == (uint *)0x0) ||
         ((0x11 < *(uint *)(lVar15 + 0x16620) &&
          (*(char *)(*(long *)(lVar15 + 0x16628) + 0x11) == '\0')))) || (*puVar9 < 0x12)) ||
       ((puVar9[1] == 0 || ((ushort)puVar9[2] == 0)))) goto LAB_021ab55c;
    iVar18 = 0xc;
    if (*(char *)((long)puVar9 + 10) != '\0') {
      iVar18 = 0x1c;
    }
    lVar15 = (ulong)(puVar9[1] * 0x11 + (uint)(ushort)puVar9[2] * 8 + iVar18) + (long)puVar9;
  }
  else {
    if (uVar6 < 0x11) {
LAB_021ab558:
      lVar12 = 0;
    }
    else {
      lVar12 = *(long *)(*(long *)(lVar15 + 0x16710) +
                        (ulong)(0x10 < *(uint *)(lVar15 + 0x16708)) * 0x80);
      if (uVar6 != 0x11) {
        lVar11 = 0x88;
        if (*(uint *)(lVar15 + 0x16708) < 0x12) {
          lVar11 = 0;
        }
        lVar15 = *(long *)(*(long *)(lVar15 + 0x16710) + lVar11);
        goto LAB_021ab560;
      }
    }
LAB_021ab55c:
    lVar15 = 0;
  }
LAB_021ab560:
  uVar6 = *param_3 - (*param_3 >> 1 & 0x55555555);
  uVar6 = (uVar6 >> 2 & 0x33333333) + (uVar6 & 0x33333333);
  uVar6 = uVar6 + (uVar6 >> 4) & 0xf0f0f0f;
  uVar6 = uVar6 + (uVar6 >> 8);
  if ((uVar6 + (uVar6 >> 0x10) & 0x3f) == 0) {
    return;
  }
  if (lVar15 == 0) {
    return;
  }
  if (lVar12 == 0) {
    return;
  }
  uVar6 = *param_2 - (*param_2 >> 1 & 0x55555555);
  uVar6 = (uVar6 >> 2 & 0x33333333) + (uVar6 & 0x33333333);
  uVar6 = uVar6 + (uVar6 >> 4) & 0xf0f0f0f;
  uVar6 = uVar6 + (uVar6 >> 8);
  if ((uVar6 + (uVar6 >> 0x10) & 0x3f) < 3) {
    return;
  }
  FUN_0214ca00(&local_70);
  FUN_0214ca00(&local_7c,lVar15);
  uVar6 = FUN_021abc98(param_3,param_4);
  if (uVar6 < 10) {
    *param_2 = *param_2 & (1 << (ulong)(uVar6 & 0x1f) ^ 0xffffffffU);
  }
  uVar7 = FUN_021abc98(param_2,param_4);
  if (uVar7 < 10) {
    *param_2 = *param_2 & (1 << (ulong)(uVar7 & 0x1f) ^ 0xffffffffU);
  }
  uVar8 = FUN_021abc98(param_2,param_4);
  if ((uVar6 < 10) &&
     (puVar26 = &DAT_053fe348 + (ulong)uVar6 * 0xba0, (&DAT_053fee41)[(ulong)uVar6 * 0xba0] != '\0')
     ) {
    if (uVar7 < 10) goto LAB_021ab694;
LAB_021ab6ac:
    puVar24 = (undefined *)0x0;
  }
  else {
    puVar26 = (undefined *)0x0;
    if (9 < uVar7) goto LAB_021ab6ac;
LAB_021ab694:
    puVar24 = &DAT_053fe348 + (ulong)uVar7 * 0xba0;
    if ((&DAT_053fee41)[(ulong)uVar7 * 0xba0] == '\0') goto LAB_021ab6ac;
  }
  if ((((uVar8 < 10) && ((&DAT_053fee41)[(ulong)uVar8 * 0xba0] != '\0')) &&
      (puVar26 != (undefined *)0x0)) && (puVar24 != (undefined *)0x0)) {
    uVar1 = *(uint *)(puVar26 + 0xa94);
    local_90._0_4_ = uVar1;
    if ((uVar1 == 0) || (local_64 = uVar1, uVar1 == 0x22)) {
      *(undefined4 *)(puVar26 + 0xa90) = local_70;
      *(undefined4 *)(puVar26 + 0xa94) = uStack_6c;
      puVar26[0xa98] = local_68;
      *(undefined2 *)(puVar26 + 0xa99) = local_67;
      if (*(long *)(puVar26 + 0xaa0) == 0) {
        uVar14 = 0x22;
      }
      else {
        uVar14 = *(undefined4 *)(*(long *)(puVar26 + 0xaa0) + 4);
      }
      *(undefined4 *)(puVar26 + 0xaac) = uVar14;
      *(undefined8 *)(puVar26 + 0xaa0) = 0;
      FUN_0214d220(puVar26 + 0x8b0);
      puVar26[0xae6] = 1;
    }
    lVar15 = *(long *)PTR_DAT_04bb2208;
    uVar25 = (ulong)uVar8;
    local_90._0_4_ = FUN_006bd550("PlayerBirthdayCall",0);
    puVar9 = (uint *)FUN_021cb820(lVar15 + 0x660,&local_90);
    puVar4 = PTR_DAT_04bb6380;
    puVar3 = PTR_DAT_04bb6378;
    if (puVar9 != (uint *)0x0) {
      puVar26 = puVar26 + 0x818;
      if (*puVar9 != 0) {
        cVar19 = *PTR_DAT_04bb6378;
        do {
          if (cVar19 == '\0') {
            cVar19 = '\x01';
            *(undefined8 *)puVar4 = 0xffffffffffffffff;
            *(undefined8 *)(puVar4 + 8) = 0xffffffffffffffff;
            *puVar3 = 1;
            *(undefined8 *)(puVar4 + 0x10) = 0xffffffffffffffff;
            *(undefined8 *)(puVar4 + 0x18) = 0xffffffffffffffff;
          }
          else {
            uVar1 = *(uint *)(puVar4 + 8);
            if (-1 < (int)uVar1) {
              if (((ushort *)((ulong)uVar1 + (long)puVar9) != (ushort *)0x0) &&
                 (uVar2 = *(ushort *)((ulong)uVar1 + (long)puVar9), uVar2 < 0x80)) {
                puVar26 = puVar26 + uVar2;
              }
              break;
            }
            if (uVar1 != 0xffffffff) break;
          }
          puVar20 = (uint *)(ulong)*puVar9;
          if ((*puVar9 == 0) || (puVar9 == puVar20)) break;
          lVar15 = 0xc;
          if (*(char *)((long)puVar9 + (10 - (long)puVar20)) != '\0') {
            lVar15 = 0x1c;
          }
          lVar15 = (long)puVar9 + (lVar15 - (long)puVar20);
          if (lVar15 == 0) break;
          uVar21 = (ulong)*(ushort *)((long)puVar9 + (8 - (long)puVar20));
          *(undefined4 *)(puVar4 + 8) = 0xfffffffe;
          if (uVar21 == 0) break;
          piVar22 = (int *)(lVar15 + 4);
          while (piVar22[-1] != 0x54706054) {
            piVar22 = piVar22 + 2;
            uVar21 = uVar21 - 1;
            if (uVar21 == 0) goto LAB_021ab8d4;
          }
          iVar18 = 0;
          if (*piVar22 != -1) {
            iVar18 = *piVar22;
          }
          *(int *)(puVar4 + 8) = iVar18;
          if (*puVar9 == 0) break;
        } while( true );
      }
LAB_021ab8d4:
      *puVar26 = 1;
    }
    local_90._0_4_ = *(uint *)(puVar24 + 0xa94);
    if (((uint)local_90 == 0) || (local_64 = (uint)local_90, (uint)local_90 == 0x22)) {
      *(undefined4 *)(puVar24 + 0xa90) = local_7c;
      *(undefined4 *)(puVar24 + 0xa94) = uStack_78;
      puVar24[0xa98] = local_74;
      *(undefined2 *)(puVar24 + 0xa99) = local_73;
      if (*(long *)(puVar24 + 0xaa0) == 0) {
        uVar14 = 0x22;
      }
      else {
        uVar14 = *(undefined4 *)(*(long *)(puVar24 + 0xaa0) + 4);
      }
      *(undefined4 *)(puVar24 + 0xaac) = uVar14;
      *(undefined8 *)(puVar24 + 0xaa0) = 0;
      FUN_0214d220(puVar24 + 0x8b0);
      puVar24[0xae6] = 1;
    }
    lVar15 = uVar25 * 0xba0;
    local_90._0_4_ = (&DAT_053feddc)[uVar25 * 0x2e8];
    if (((uint)local_90 == 0) || (local_64 = (uint)local_90, (uint)local_90 == 0x22)) {
      *(undefined4 *)(&DAT_053fedd8 + lVar15) = local_7c;
      (&DAT_053feddc)[uVar25 * 0x2e8] = uStack_78;
      (&DAT_053fede0)[lVar15] = local_74;
      (&DAT_053fede1)[uVar25 * 0x5d0] = local_73;
      if ((&DAT_053fede8)[uVar25 * 0x174] == 0) {
        uVar14 = 0x22;
      }
      else {
        uVar14 = *(undefined4 *)((&DAT_053fede8)[uVar25 * 0x174] + 4);
      }
      (&DAT_053fedf4)[uVar25 * 0x2e8] = uVar14;
      (&DAT_053fede8)[uVar25 * 0x174] = 0;
      FUN_0214d220(&DAT_053febf8 + lVar15);
      (&DAT_053fee2e)[lVar15] = 1;
    }
    *(uint *)(param_1 + 0x92c0) = uVar6;
    *(uint *)(param_1 + 0x92c4) = uVar7;
    *(uint *)(param_1 + 0x92c8) = uVar8;
    local_90 = (undefined *)((ulong)local_90._4_4_ << 0x20);
    uVar25 = FUN_02b67a30(&local_90,uVar6);
    if ((uVar25 & 1) != 0) {
      *(uint *)(param_1 + 0x92e4) = (uint)local_90;
    }
  }
  puVar26 = PTR_DAT_04bb4f78;
  lVar15 = *(long *)PTR_DAT_04bb39b0;
  pbVar16 = PTR_DAT_04bb32e0;
  if (lVar15 == 0) {
LAB_021aba48:
    if (7 < *pbVar16) {
LAB_021aba54:
      if (*(long **)PTR_DAT_04bb27d0 != (long *)0x0) {
        lVar15 = **(long **)PTR_DAT_04bb27d0;
        bVar17 = *(byte *)(lVar15 + 0x473);
        pbVar16 = PTR_DAT_04bb5038;
        if ((long)(char)bVar17 != 0xffffffffffffffff) {
          puVar9 = (uint *)(lVar15 + 0x48) + ((long)(char)bVar17 & 0xffffffffU) * 0x20;
          if (7 < bVar17) {
            puVar9 = (uint *)(lVar15 + 0x48);
          }
          if ((*puVar9 & 8) != 0) {
            pbVar16 = (byte *)(lVar15 + 0x471);
          }
        }
        bVar17 = *pbVar16;
        bVar5 = 7 < bVar17;
        if (bVar5) {
          bVar17 = 0xff;
        }
        local_64 = CONCAT31(local_64._1_3_,bVar17);
        if (!bVar5) goto LAB_021abad4;
      }
      pbVar16 = PTR_DAT_04bb5038;
    }
  }
  else {
    if (*(int *)(lVar15 + 0x15c) != 0) {
      pbVar16 = (byte *)(lVar15 + 0x158);
    }
    if (7 < *pbVar16) {
      if ((*(int *)(lVar15 + 0x15c) != 0) && (*(long *)PTR_DAT_04bb4718 != 0)) {
        pbVar16 = (byte *)(*(long *)PTR_DAT_04bb4718 + 0x11a5);
        goto LAB_021aba48;
      }
      goto LAB_021aba54;
    }
  }
  bVar17 = *pbVar16;
  if (7 < bVar17) {
    bVar17 = 0xff;
  }
  local_64 = CONCAT31(local_64._1_3_,bVar17);
LAB_021abad4:
  uVar25 = 0;
  pcVar23 = (char *)(param_1 + 0xaf9);
  puVar24 = PTR_DAT_04bb2020 + 0x10;
  do {
    if (*pcVar23 != '\0') {
      uVar13 = (undefined1)local_64;
      if (7 < (local_64 & 0xff)) {
        uVar13 = 0xff;
      }
      local_90 = (undefined *)CONCAT71(local_90._1_7_,uVar13);
      lVar15 = FUN_025830c0(*(undefined8 *)puVar26,&local_90,1);
      if (lVar15 != 0) {
        if ((*(long **)(lVar15 + 0x28) == (long *)0x0) ||
           (puVar10 = (undefined8 *)**(long **)(lVar15 + 0x28), puVar10 == (undefined8 *)0x0)) {
          uVar6 = 1;
        }
        else {
          uVar6 = (**(code **)*puVar10)();
          uVar6 = uVar6 ^ 1;
        }
        lVar11 = FUN_0265c8a0(uVar25 & 0xffffffff,
                              *(long *)(lVar15 + 0x10) + *(long *)(lVar15 + 8) + 0xc154);
        if ((((uVar6 & 1) == 0) && (*(long *)(lVar15 + 0x28) != 0)) &&
           (puVar10 = *(undefined8 **)(*(long *)(lVar15 + 0x28) + 8), puVar10 != (undefined8 *)0x0))
        {
          (**(code **)*puVar10)();
        }
        if (lVar11 != 0) {
          pcStack_88 = "BirhdayPTalkFlag";
          local_90 = puVar24;
          FUN_0265d4e0(uVar25 & 0xffffffff,&local_64,&local_90,0,1);
          pcStack_88 = "BirhdayPCupcakeFlag";
          local_90 = puVar24;
          FUN_0265d4e0(uVar25 & 0xffffffff,&local_64,&local_90,0,1);
          pcStack_88 = "BirthdayPAttendance";
          local_90 = puVar24;
          FUN_0265d4e0(uVar25 & 0xffffffff,&local_64,&local_90,0,1);
        }
      }
    }
    uVar25 = uVar25 + 1;
    pcVar23 = pcVar23 + 0xba0;
  } while (uVar25 != 10);
  return;
}

