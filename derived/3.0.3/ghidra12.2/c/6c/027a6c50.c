
void FUN_027a6c50(short *param_1,byte *param_2)

{
  ushort *puVar1;
  short *psVar2;
  ushort *puVar3;
  ushort *puVar4;
  uint *puVar5;
  long lVar6;
  long lVar7;
  ushort uVar8;
  short *psVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  bool bVar13;
  undefined4 uVar14;
  uint *puVar15;
  char *pcVar16;
  char cVar17;
  short sVar18;
  uint uVar19;
  long lVar20;
  uint *puVar21;
  long lVar22;
  short *psVar23;
  uint uVar24;
  short *psVar25;
  uint *puVar26;
  ulong uVar27;
  uint uVar28;
  int *piVar29;
  ulong uVar30;
  int iVar31;
  short sVar32;
  uint uVar33;
  uint *puVar34;
  ulong uVar35;
  byte local_90 [4];
  uint local_8c;
  uint local_88;
  undefined2 local_84;
  undefined8 local_82;
  undefined8 local_7a;
  undefined1 local_72;
  undefined8 local_70;
  long local_68;
  
  puVar10 = PTR_DAT_04bb2208;
  uVar33 = *(uint *)(*(long *)PTR_DAT_04bb2208 + 0x1b20);
  if ((int)uVar33 < 1) {
    lVar20 = *(long *)(*(long *)PTR_DAT_04bb2208 + 0x1a10);
    if ((lVar20 == 0) || (puVar21 = *(uint **)(lVar20 + 8), puVar21 == (uint *)0x0)) {
      uVar33 = 0;
    }
    else {
      uVar33 = *puVar21;
    }
  }
  local_7a = CONCAT44(local_7a._4_4_,0x1010000);
  local_90[0] = *param_2;
  if (7 < local_90[0]) {
    local_90[0] = 0xff;
  }
  local_82 = *(undefined8 *)(*(long *)PTR_DAT_04bb32e8 + 0x4060);
  psVar25 = (short *)(*(long *)PTR_DAT_04bb32e8 + 0x4068);
  if (*psVar25 == 0) {
    local_70 = local_82;
    if ((char)((ulong)local_82 >> 0x20) < '\x05') {
      local_68 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_70);
      local_68 = local_68 + -0x15180;
      local_70 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_68);
    }
    psVar25 = (short *)&local_70;
    uVar35 = local_70 >> 0x30;
    local_70._0_6_ = CONCAT24(5,(undefined4)local_70);
    local_70 = CONCAT26((short)uVar35,(undefined6)local_70) & 0xff00ffffffffffff;
  }
  puVar12 = PTR_DAT_04bb6428;
  local_7a = *(undefined8 *)psVar25;
  local_72 = 0;
  if ((int)uVar33 < 1) {
LAB_027a7a20:
    FUN_027a16e4(param_2,0);
    return;
  }
  puVar1 = (ushort *)(param_1 + 0x725);
  uVar35 = 0;
  psVar25 = param_1 + 0x200;
  psVar2 = param_1 + 0x400;
  puVar21 = (uint *)(param_1 + 0x726);
  puVar3 = (ushort *)(param_1 + 0x723);
  puVar4 = (ushort *)(param_1 + 0x724);
  puVar5 = (uint *)(param_1 + 0x727);
  pcVar16 = PTR_DAT_04bb6420;
LAB_027a6db0:
  lVar20 = *(long *)puVar10;
  if ((int)*(uint *)(lVar20 + 0x1b20) < 1) {
    if ((((*(long *)(lVar20 + 0x1a10) != 0) &&
         (puVar34 = *(uint **)(*(long *)(lVar20 + 0x1a10) + 8), puVar34 != (uint *)0x0)) &&
        ((*(uint *)(lVar20 + 0x1a28) <= uVar35 ||
         (*(char *)(*(long *)(lVar20 + 0x1a30) + uVar35) != '\0')))) &&
       (((uVar35 < *puVar34 && (puVar34[1] != 0)) && ((ushort)puVar34[2] != 0)))) {
      iVar31 = 0xc;
      if (*(char *)((long)puVar34 + 10) != '\0') {
        iVar31 = 0x1c;
      }
      puVar34 = (uint *)((ulong)(puVar34[1] * (int)uVar35 + (uint)(ushort)puVar34[2] * 8 + iVar31) +
                        (long)puVar34);
      goto joined_r0x027a6f14;
    }
  }
  else if (uVar35 < *(uint *)(lVar20 + 0x1b20)) {
    uVar30 = uVar35 & 0xffffffff;
    if (*(uint *)(lVar20 + 0x1b10) <= uVar35) {
      uVar30 = 0;
    }
    puVar34 = *(uint **)(*(long *)(lVar20 + 0x1b18) + uVar30 * 8);
joined_r0x027a6f14:
    if ((puVar34 != (uint *)0x0) && (*puVar34 != 0)) {
      cVar17 = *pcVar16;
      do {
        if (cVar17 == '\0') {
          cVar17 = '\x01';
          *(undefined8 *)puVar12 = 0xffffffffffffffff;
          *(undefined8 *)(puVar12 + 8) = 0xffffffffffffffff;
          *pcVar16 = '\x01';
          *(undefined4 *)(puVar12 + 0x50) = 0xffffffff;
          *(undefined8 *)(puVar12 + 0x10) = 0xffffffffffffffff;
          *(undefined8 *)(puVar12 + 0x18) = 0xffffffffffffffff;
          *(undefined8 *)(puVar12 + 0x20) = 0xffffffffffffffff;
          *(undefined8 *)(puVar12 + 0x28) = 0xffffffffffffffff;
          *(undefined8 *)(puVar12 + 0x30) = 0xffffffffffffffff;
          *(undefined8 *)(puVar12 + 0x38) = 0xffffffffffffffff;
          *(undefined8 *)(puVar12 + 0x40) = 0xffffffffffffffff;
          *(undefined8 *)(puVar12 + 0x48) = 0xffffffffffffffff;
        }
        else {
          uVar19 = *(uint *)(puVar12 + 0x48);
          if (-1 < (int)uVar19) {
            if (((char *)((ulong)uVar19 + (long)puVar34) != (char *)0x0) &&
               (*(char *)((ulong)uVar19 + (long)puVar34) != '\0')) {
              uVar19 = *puVar34;
              if (uVar19 == 0) goto LAB_027a6fcc;
              uVar30 = (ulong)*(uint *)(puVar12 + 0x14);
              goto LAB_027a6f40;
            }
            break;
          }
          if (uVar19 != 0xffffffff) break;
        }
        lVar22 = (long)puVar34 - (ulong)*puVar34;
        if ((*puVar34 == 0) || (lVar22 == 0)) break;
        lVar6 = 0xc;
        if (*(char *)(lVar22 + 10) != '\0') {
          lVar6 = 0x1c;
        }
        if (lVar6 + lVar22 == 0) break;
        uVar30 = (ulong)*(ushort *)(lVar22 + 8);
        *(undefined4 *)(puVar12 + 0x48) = 0xfffffffe;
        if (uVar30 == 0) break;
        piVar29 = (int *)(lVar6 + lVar22 + 4);
        while (piVar29[-1] != -0x6f35003a) {
          piVar29 = piVar29 + 2;
          uVar30 = uVar30 - 1;
          if (uVar30 == 0) goto LAB_027a6da4;
        }
        iVar31 = 0;
        if (*piVar29 != -1) {
          iVar31 = *piVar29;
        }
        *(int *)(puVar12 + 0x48) = iVar31;
        if (*puVar34 == 0) break;
      } while( true );
    }
  }
  goto LAB_027a6da4;
LAB_027a6f40:
  if (-1 < (int)uVar30) {
    local_8c = 0;
    if ((ushort *)(uVar30 + (long)puVar34) != (ushort *)0x0) {
      local_8c = (uint)*(ushort *)(uVar30 + (long)puVar34);
    }
    goto LAB_027a6fd4;
  }
  if ((uVar30 != 0xffffffff) || (lVar22 = (long)puVar34 - (ulong)uVar19, lVar22 == 0))
  goto LAB_027a6fcc;
  lVar6 = 0xc;
  if (*(char *)(lVar22 + 10) != '\0') {
    lVar6 = 0x1c;
  }
  if (lVar6 + lVar22 == 0) goto LAB_027a6fcc;
  uVar30 = (ulong)*(ushort *)(lVar22 + 8);
  *(undefined4 *)(puVar12 + 0x14) = 0xfffffffe;
  if (uVar30 == 0) goto LAB_027a6fcc;
  puVar15 = (uint *)(lVar6 + lVar22 + 4);
  while (puVar15[-1] != 0x110b14c) {
    puVar15 = puVar15 + 2;
    uVar30 = uVar30 - 1;
    if (uVar30 == 0) goto LAB_027a6fcc;
  }
  uVar30 = 0;
  if (*puVar15 != 0xffffffff) {
    uVar30 = (ulong)*puVar15;
  }
  *(int *)(puVar12 + 0x14) = (int)uVar30;
  uVar19 = *puVar34;
  if (uVar19 == 0) goto LAB_027a6fcc;
  goto LAB_027a6f40;
LAB_027a6fcc:
  local_8c = 0;
LAB_027a6fd4:
  uVar19 = *puVar34;
  local_88 = 0;
  if (uVar19 != 0) {
    uVar30 = (ulong)*(uint *)(puVar12 + 8);
    do {
      if (-1 < (int)uVar30) {
        local_88 = 0;
        if ((ushort *)(uVar30 + (long)puVar34) != (ushort *)0x0) {
          local_88 = (uint)*(ushort *)(uVar30 + (long)puVar34);
        }
        goto LAB_027a70d8;
      }
      if (uVar30 != 0xffffffff) {
LAB_027a7170:
        local_88 = 0;
        goto LAB_027a70d8;
      }
      lVar22 = (long)puVar34 - (ulong)uVar19;
      local_88 = 0;
      if (lVar22 == 0) goto LAB_027a70d8;
      lVar6 = 0xc;
      if (*(char *)(lVar22 + 10) != '\0') {
        lVar6 = 0x1c;
      }
      if (lVar6 + lVar22 == 0) goto LAB_027a7170;
      uVar30 = (ulong)*(ushort *)(lVar22 + 8);
      *(undefined4 *)(puVar12 + 8) = 0xfffffffe;
      local_88 = 0;
      if (uVar30 == 0) goto LAB_027a70d8;
      puVar15 = (uint *)(lVar6 + lVar22 + 4);
      while (puVar15[-1] != 0x8792265f) {
        puVar15 = puVar15 + 2;
        uVar30 = uVar30 - 1;
        if (uVar30 == 0) {
          local_88 = 0;
          goto LAB_027a70d8;
        }
      }
      uVar30 = 0;
      if (*puVar15 != 0xffffffff) {
        uVar30 = (ulong)*puVar15;
      }
      *(int *)(puVar12 + 8) = (int)uVar30;
      uVar19 = *puVar34;
    } while (uVar19 != 0);
    local_88 = 0;
  }
LAB_027a70d8:
  uVar19 = *puVar34;
  if (uVar19 != 0) {
    uVar30 = (ulong)*(uint *)(puVar12 + 0x10);
    while ((int)uVar30 < 0) {
      if ((uVar30 != 0xffffffff) || (lVar22 = (long)puVar34 - (ulong)uVar19, lVar22 == 0))
      goto LAB_027a71b8;
      lVar6 = 0xc;
      if (*(char *)(lVar22 + 10) != '\0') {
        lVar6 = 0x1c;
      }
      if (lVar6 + lVar22 == 0) goto LAB_027a71b8;
      uVar30 = (ulong)*(ushort *)(lVar22 + 8);
      *(undefined4 *)(puVar12 + 0x10) = 0xfffffffe;
      if (uVar30 == 0) goto LAB_027a71b8;
      puVar15 = (uint *)(lVar6 + lVar22 + 4);
      while (puVar15[-1] != 0xc33a894e) {
        puVar15 = puVar15 + 2;
        uVar30 = uVar30 - 1;
        if (uVar30 == 0) goto LAB_027a71b8;
      }
      uVar30 = 0;
      if (*puVar15 != 0xffffffff) {
        uVar30 = (ulong)*puVar15;
      }
      *(int *)(puVar12 + 0x10) = (int)uVar30;
      uVar19 = *puVar34;
      if (uVar19 == 0) goto LAB_027a71b8;
    }
    if ((undefined2 *)(uVar30 + (long)puVar34) != (undefined2 *)0x0) {
      local_84 = *(undefined2 *)(uVar30 + (long)puVar34);
      goto LAB_027a71bc;
    }
  }
LAB_027a71b8:
  local_84 = 0xfffe;
LAB_027a71bc:
  uVar19 = *puVar34;
  psVar23 = psVar25;
  if (uVar19 != 0) {
    uVar30 = (ulong)*(uint *)(puVar12 + 0x20);
    while ((int)uVar30 < 0) {
      if ((uVar30 != 0xffffffff) || (lVar22 = (long)puVar34 - (ulong)uVar19, lVar22 == 0))
      goto LAB_027a7248;
      lVar6 = 0xc;
      if (*(char *)(lVar22 + 10) != '\0') {
        lVar6 = 0x1c;
      }
      if (lVar6 + lVar22 == 0) goto LAB_027a7248;
      uVar30 = (ulong)*(ushort *)(lVar22 + 8);
      *(undefined4 *)(puVar12 + 0x20) = 0xfffffffe;
      if (uVar30 == 0) goto LAB_027a7248;
      puVar15 = (uint *)(lVar6 + lVar22 + 4);
      while (puVar15[-1] != 0x54706054) {
        puVar15 = puVar15 + 2;
        uVar30 = uVar30 - 1;
        if (uVar30 == 0) goto LAB_027a7248;
      }
      uVar30 = 0;
      if (*puVar15 != 0xffffffff) {
        uVar30 = (ulong)*puVar15;
      }
      *(int *)(puVar12 + 0x20) = (int)uVar30;
      uVar19 = *puVar34;
      if (uVar19 == 0) goto LAB_027a7248;
    }
    if (((ushort *)(uVar30 + (long)puVar34) != (ushort *)0x0) &&
       (uVar8 = *(ushort *)(uVar30 + (long)puVar34), uVar8 < 0x200)) {
      psVar23 = (short *)((long)psVar25 + (ulong)uVar8);
    }
  }
LAB_027a7248:
  if ((char)*psVar23 == '\0') goto LAB_027a6da4;
  uVar19 = *puVar34;
  psVar23 = psVar2;
  if (uVar19 != 0) {
    uVar30 = (ulong)*(uint *)(puVar12 + 0x20);
    while ((int)uVar30 < 0) {
      if ((uVar30 != 0xffffffff) || (lVar22 = (long)puVar34 - (ulong)uVar19, lVar22 == 0))
      goto LAB_027a72e8;
      lVar6 = 0xc;
      if (*(char *)(lVar22 + 10) != '\0') {
        lVar6 = 0x1c;
      }
      if (lVar6 + lVar22 == 0) goto LAB_027a72e8;
      uVar30 = (ulong)*(ushort *)(lVar22 + 8);
      *(undefined4 *)(puVar12 + 0x20) = 0xfffffffe;
      if (uVar30 == 0) goto LAB_027a72e8;
      puVar15 = (uint *)(lVar6 + lVar22 + 4);
      while (puVar15[-1] != 0x54706054) {
        puVar15 = puVar15 + 2;
        uVar30 = uVar30 - 1;
        if (uVar30 == 0) goto LAB_027a72e8;
      }
      uVar30 = 0;
      if (*puVar15 != 0xffffffff) {
        uVar30 = (ulong)*puVar15;
      }
      *(int *)(puVar12 + 0x20) = (int)uVar30;
      uVar19 = *puVar34;
      if (uVar19 == 0) goto LAB_027a72e8;
    }
    if (((ushort *)(uVar30 + (long)puVar34) != (ushort *)0x0) &&
       (uVar8 = *(ushort *)(uVar30 + (long)puVar34), uVar8 < 0x200)) {
      psVar23 = (short *)((long)psVar2 + (ulong)uVar8);
    }
  }
LAB_027a72e8:
  if ((char)*psVar23 == '\0') {
    uVar19 = *puVar34;
    if (uVar19 != 0) {
      uVar30 = (ulong)*(uint *)(puVar12 + 0x3c);
      do {
        if (-1 < (int)uVar30) {
          lVar22 = uVar30 + (long)puVar34;
          goto LAB_027a7398;
        }
        if (uVar30 != 0xffffffff) break;
        lVar6 = (long)puVar34 - (ulong)uVar19;
        lVar22 = 0;
        if (lVar6 == 0) goto LAB_027a7398;
        lVar7 = 0xc;
        if (*(char *)(lVar6 + 10) != '\0') {
          lVar7 = 0x1c;
        }
        if (lVar7 + lVar6 == 0) break;
        uVar30 = (ulong)*(ushort *)(lVar6 + 8);
        *(undefined4 *)(puVar12 + 0x3c) = 0xfffffffe;
        lVar22 = 0;
        if (uVar30 == 0) goto LAB_027a7398;
        puVar15 = (uint *)(lVar7 + lVar6 + 4);
        while (puVar15[-1] != 0x45f320f2) {
          puVar15 = puVar15 + 2;
          uVar30 = uVar30 - 1;
          if (uVar30 == 0) {
            lVar22 = 0;
            goto LAB_027a7398;
          }
        }
        uVar30 = 0;
        if (*puVar15 != 0xffffffff) {
          uVar30 = (ulong)*puVar15;
        }
        *(int *)(puVar12 + 0x3c) = (int)uVar30;
        uVar19 = *puVar34;
      } while (uVar19 != 0);
    }
    lVar22 = 0;
LAB_027a7398:
    lVar6 = *(long *)PTR_PTR_04bb6418;
    if (lVar22 != 0) {
      lVar6 = lVar22;
    }
    uVar14 = FUN_006bd550(lVar6,0);
    local_68._0_4_ = uVar14;
    puVar15 = (uint *)FUN_00ad5fc0(lVar20 + 0x1960,&local_68);
    puVar11 = PTR_DAT_04bb6420;
    if ((puVar15 == (uint *)0x0) || (*puVar15 == 0)) {
      sVar32 = 0;
    }
    else {
      cVar17 = *PTR_DAT_04bb6420;
      while (cVar17 == '\0') {
        cVar17 = '\x01';
        *(undefined8 *)puVar12 = 0xffffffffffffffff;
        *(undefined8 *)(puVar12 + 8) = 0xffffffffffffffff;
        *puVar11 = 1;
        *(undefined4 *)(puVar12 + 0x50) = 0xffffffff;
        *(undefined8 *)(puVar12 + 0x10) = 0xffffffffffffffff;
        *(undefined8 *)(puVar12 + 0x18) = 0xffffffffffffffff;
        *(undefined8 *)(puVar12 + 0x20) = 0xffffffffffffffff;
        *(undefined8 *)(puVar12 + 0x28) = 0xffffffffffffffff;
        *(undefined8 *)(puVar12 + 0x30) = 0xffffffffffffffff;
        *(undefined8 *)(puVar12 + 0x38) = 0xffffffffffffffff;
        *(undefined8 *)(puVar12 + 0x40) = 0xffffffffffffffff;
        *(undefined8 *)(puVar12 + 0x48) = 0xffffffffffffffff;
LAB_027a7424:
        puVar26 = (uint *)(ulong)*puVar15;
        sVar32 = 0;
        if ((*puVar15 == 0) || (puVar15 == puVar26)) goto LAB_027a7544;
        lVar20 = 0xc;
        if (*(char *)((long)puVar15 + (10 - (long)puVar26)) != '\0') {
          lVar20 = 0x1c;
        }
        lVar20 = (long)puVar15 + (lVar20 - (long)puVar26);
        if (lVar20 == 0) goto LAB_027a7540;
        uVar30 = (ulong)*(ushort *)((long)puVar15 + (8 - (long)puVar26));
        *(undefined4 *)(puVar12 + 0x14) = 0xfffffffe;
        if (uVar30 == 0) goto LAB_027a7540;
        piVar29 = (int *)(lVar20 + 4);
        while (piVar29[-1] != 0x110b14c) {
          piVar29 = piVar29 + 2;
          uVar30 = uVar30 - 1;
          if (uVar30 == 0) goto LAB_027a7540;
        }
        sVar32 = 0;
        iVar31 = 0;
        if (*piVar29 != -1) {
          iVar31 = *piVar29;
        }
        *(int *)(puVar12 + 0x14) = iVar31;
        if (*puVar15 == 0) goto LAB_027a7544;
      }
      uVar19 = *(uint *)(puVar12 + 0x14);
      if ((int)uVar19 < 0) {
        if (uVar19 == 0xffffffff) goto LAB_027a7424;
      }
      else if ((short *)((ulong)uVar19 + (long)puVar15) != (short *)0x0) {
        sVar32 = *(short *)((ulong)uVar19 + (long)puVar15);
        goto LAB_027a7544;
      }
LAB_027a7540:
      sVar32 = 0;
    }
LAB_027a7544:
    if (*puVar34 != 0) {
      cVar17 = *puVar11;
      do {
        if (cVar17 == '\0') {
          cVar17 = '\x01';
          *(undefined8 *)puVar12 = 0xffffffffffffffff;
          *(undefined8 *)(puVar12 + 8) = 0xffffffffffffffff;
          *puVar11 = 1;
          *(undefined4 *)(puVar12 + 0x50) = 0xffffffff;
          *(undefined8 *)(puVar12 + 0x10) = 0xffffffffffffffff;
          *(undefined8 *)(puVar12 + 0x18) = 0xffffffffffffffff;
          *(undefined8 *)(puVar12 + 0x20) = 0xffffffffffffffff;
          *(undefined8 *)(puVar12 + 0x28) = 0xffffffffffffffff;
          *(undefined8 *)(puVar12 + 0x30) = 0xffffffffffffffff;
          *(undefined8 *)(puVar12 + 0x38) = 0xffffffffffffffff;
          *(undefined8 *)(puVar12 + 0x40) = 0xffffffffffffffff;
          *(undefined8 *)(puVar12 + 0x48) = 0xffffffffffffffff;
        }
        else {
          uVar19 = *(uint *)(puVar12 + 0x3c);
          if (-1 < (int)uVar19) {
            lVar20 = (ulong)uVar19 + (long)puVar34;
            goto LAB_027a7604;
          }
          if (uVar19 != 0xffffffff) break;
        }
        puVar15 = (uint *)(ulong)*puVar34;
        lVar20 = 0;
        if ((*puVar34 == 0) || (puVar34 == puVar15)) goto LAB_027a7604;
        lVar20 = 0xc;
        if (*(char *)((long)puVar34 + (10 - (long)puVar15)) != '\0') {
          lVar20 = 0x1c;
        }
        lVar22 = (long)puVar34 + (lVar20 - (long)puVar15);
        if (lVar22 == 0) break;
        uVar30 = (ulong)*(ushort *)((long)puVar34 + (8 - (long)puVar15));
        *(undefined4 *)(puVar12 + 0x3c) = 0xfffffffe;
        lVar20 = 0;
        if (uVar30 == 0) goto LAB_027a7604;
        piVar29 = (int *)(lVar22 + 4);
        while (piVar29[-1] != 0x45f320f2) {
          piVar29 = piVar29 + 2;
          uVar30 = uVar30 - 1;
          if (uVar30 == 0) {
            lVar20 = 0;
            goto LAB_027a7604;
          }
        }
        iVar31 = 0;
        if (*piVar29 != -1) {
          iVar31 = *piVar29;
        }
        *(int *)(puVar12 + 0x3c) = iVar31;
      } while (*puVar34 != 0);
    }
    lVar20 = 0;
LAB_027a7604:
    lVar22 = *(long *)PTR_PTR_04bb6418;
    if (lVar20 != 0) {
      lVar22 = lVar20;
    }
    lVar20 = *(long *)puVar10;
    uVar14 = FUN_006bd550(lVar22,0);
    local_68 = CONCAT44(local_68._4_4_,uVar14);
    puVar15 = (uint *)FUN_00ad5fc0(lVar20 + 0x1960,&local_68);
    pcVar16 = PTR_DAT_04bb6420;
    if (puVar15 == (uint *)0x0) {
      sVar18 = 0;
    }
    else {
      psVar23 = param_1;
      if (*puVar15 != 0) {
        cVar17 = *PTR_DAT_04bb6420;
        do {
          if (cVar17 == '\0') {
            cVar17 = '\x01';
            *(undefined8 *)puVar12 = 0xffffffffffffffff;
            *(undefined8 *)(puVar12 + 8) = 0xffffffffffffffff;
            *pcVar16 = 1;
            *(undefined4 *)(puVar12 + 0x50) = 0xffffffff;
            *(undefined8 *)(puVar12 + 0x10) = 0xffffffffffffffff;
            *(undefined8 *)(puVar12 + 0x18) = 0xffffffffffffffff;
            *(undefined8 *)(puVar12 + 0x20) = 0xffffffffffffffff;
            *(undefined8 *)(puVar12 + 0x28) = 0xffffffffffffffff;
            *(undefined8 *)(puVar12 + 0x30) = 0xffffffffffffffff;
            *(undefined8 *)(puVar12 + 0x38) = 0xffffffffffffffff;
            *(undefined8 *)(puVar12 + 0x40) = 0xffffffffffffffff;
            *(undefined8 *)(puVar12 + 0x48) = 0xffffffffffffffff;
          }
          else {
            uVar19 = *(uint *)(puVar12 + 0x20);
            if (-1 < (int)uVar19) {
              if ((ushort *)((ulong)uVar19 + (long)puVar15) != (ushort *)0x0) {
                uVar8 = *(ushort *)((ulong)uVar19 + (long)puVar15);
                if (0x1ff < uVar8) goto LAB_027a7734;
                psVar23 = param_1 + uVar8;
              }
              break;
            }
            if (uVar19 != 0xffffffff) break;
          }
          puVar26 = (uint *)(ulong)*puVar15;
          if ((*puVar15 == 0) || (puVar15 == puVar26)) break;
          lVar20 = 0xc;
          if (*(char *)((long)puVar15 + (10 - (long)puVar26)) != '\0') {
            lVar20 = 0x1c;
          }
          lVar20 = (long)puVar15 + (lVar20 - (long)puVar26);
          if (lVar20 == 0) break;
          uVar30 = (ulong)*(ushort *)((long)puVar15 + (8 - (long)puVar26));
          *(undefined4 *)(puVar12 + 0x20) = 0xfffffffe;
          if (uVar30 == 0) break;
          piVar29 = (int *)(lVar20 + 4);
          while (piVar29[-1] != 0x54706054) {
            piVar29 = piVar29 + 2;
            uVar30 = uVar30 - 1;
            if (uVar30 == 0) goto LAB_027a7724;
          }
          iVar31 = 0;
          if (*piVar29 != -1) {
            iVar31 = *piVar29;
          }
          *(int *)(puVar12 + 0x20) = iVar31;
          if (*puVar15 == 0) break;
        } while( true );
      }
LAB_027a7724:
LAB_027a7734:
      sVar18 = *psVar23;
    }
    if (sVar32 == sVar18) goto LAB_027a6da4;
  }
  uVar30 = FUN_00ad48f0(*(undefined8 *)PTR_DAT_04bb64a0,puVar34,local_90);
  pcVar16 = PTR_DAT_04bb6420;
  if ((uVar30 & 1) == 0) {
    uVar19 = 0;
    if (*puVar34 != 0) {
      cVar17 = *PTR_DAT_04bb6420;
      do {
        if (cVar17 != '\0') {
          uVar24 = *(uint *)(puVar12 + 0x20);
          if ((int)uVar24 < 0) {
            if (uVar24 == 0xffffffff) goto LAB_027a7814;
LAB_027a788c:
            uVar19 = 0;
          }
          else {
            uVar19 = 0;
            if ((ushort *)((ulong)uVar24 + (long)puVar34) != (ushort *)0x0) {
              uVar19 = (uint)*(ushort *)((ulong)uVar24 + (long)puVar34);
            }
          }
          goto LAB_027a78a0;
        }
        cVar17 = '\x01';
        *(undefined8 *)puVar12 = 0xffffffffffffffff;
        *(undefined8 *)(puVar12 + 8) = 0xffffffffffffffff;
        *pcVar16 = 1;
        *(undefined4 *)(puVar12 + 0x50) = 0xffffffff;
        *(undefined8 *)(puVar12 + 0x10) = 0xffffffffffffffff;
        *(undefined8 *)(puVar12 + 0x18) = 0xffffffffffffffff;
        *(undefined8 *)(puVar12 + 0x20) = 0xffffffffffffffff;
        *(undefined8 *)(puVar12 + 0x28) = 0xffffffffffffffff;
        *(undefined8 *)(puVar12 + 0x30) = 0xffffffffffffffff;
        *(undefined8 *)(puVar12 + 0x38) = 0xffffffffffffffff;
        *(undefined8 *)(puVar12 + 0x40) = 0xffffffffffffffff;
        *(undefined8 *)(puVar12 + 0x48) = 0xffffffffffffffff;
LAB_027a7814:
        puVar15 = (uint *)(ulong)*puVar34;
        uVar19 = 0;
        if ((*puVar34 == 0) || (puVar34 == puVar15)) goto LAB_027a78a0;
        lVar20 = 0xc;
        if (*(char *)((long)puVar34 + (10 - (long)puVar15)) != '\0') {
          lVar20 = 0x1c;
        }
        lVar20 = (long)puVar34 + (lVar20 - (long)puVar15);
        if (lVar20 == 0) goto LAB_027a788c;
        uVar30 = (ulong)*(ushort *)((long)puVar34 + (8 - (long)puVar15));
        *(undefined4 *)(puVar12 + 0x20) = 0xfffffffe;
        uVar19 = 0;
        if (uVar30 == 0) goto LAB_027a78a0;
        piVar29 = (int *)(lVar20 + 4);
        while (piVar29[-1] != 0x54706054) {
          piVar29 = piVar29 + 2;
          uVar30 = uVar30 - 1;
          if (uVar30 == 0) {
            uVar19 = 0;
            goto LAB_027a78a0;
          }
        }
        iVar31 = 0;
        if (*piVar29 != -1) {
          iVar31 = *piVar29;
        }
        *(int *)(puVar12 + 0x20) = iVar31;
      } while (*puVar34 != 0);
      uVar19 = 0;
    }
LAB_027a78a0:
    uVar27 = (ulong)uVar19;
    bVar13 = 0x1ff < uVar19;
    psVar23 = (short *)((long)psVar25 + uVar27);
    uVar30 = uVar27;
    if (bVar13) {
      uVar30 = 0;
      psVar23 = psVar25;
    }
    param_1[uVar30] = 0;
    *(char *)psVar23 = '\0';
    psVar23 = (short *)((long)psVar2 + uVar27);
    if (bVar13) {
      psVar23 = psVar2;
    }
    *(char *)psVar23 = '\0';
    psVar23 = (short *)((long)(param_1 + 0x620) + uVar27);
    psVar9 = (short *)((long)(param_1 + 0x300) + uVar27);
    if (bVar13) {
      psVar23 = param_1 + 0x620;
      psVar9 = param_1 + 0x300;
    }
    *(undefined1 *)psVar9 = 0;
    *(undefined1 *)psVar23 = 0;
    *(undefined1 *)((long)param_1 + uVar30 + 0x54a8) = 0;
    if ((ushort)param_1[0x722] == uVar19) {
      param_1[0x728] = param_1[0x729];
      *(undefined4 *)(param_1 + 0x726) = *(undefined4 *)(param_1 + 0x727);
      *(undefined8 *)(param_1 + 0x722) = *(undefined8 *)puVar3;
      *(undefined2 *)puVar21 = 0xffff;
    }
    if (*puVar3 == uVar19) {
      *(undefined4 *)(param_1 + 0x727) = *(undefined4 *)(param_1 + 0x728);
      *(undefined8 *)puVar3 = *(undefined8 *)puVar4;
      *(undefined2 *)puVar21 = 0xffff;
    }
    if (*puVar4 == uVar19) {
      param_1[0x728] = param_1[0x729];
      *(undefined8 *)puVar4 = *(undefined8 *)puVar1;
      param_1[0x726] = -1;
    }
    if (*puVar1 == uVar19) {
      *(undefined8 *)puVar1 = *(undefined8 *)(param_1 + 0x726);
      uVar24 = 0xffff;
      param_1[0x726] = -1;
    }
    else {
      uVar24 = (uint)(ushort)*puVar21;
    }
    if (uVar24 == uVar19) {
      *puVar21 = *puVar5;
      param_1[0x728] = param_1[0x729];
      *(undefined2 *)puVar21 = 0xffff;
    }
    if ((ushort)*puVar5 == uVar19) {
      param_1[0x726] = -1;
      *puVar5 = *(uint *)(param_1 + 0x728);
      uVar24 = *(uint *)(param_1 + 0x728) >> 0x10;
      uVar28 = uVar24;
    }
    else {
      uVar28 = (uint)(ushort)param_1[0x728];
      uVar24 = (uint)(ushort)param_1[0x729];
    }
    if (uVar28 == uVar19) {
      param_1[0x728] = (short)uVar24;
      param_1[0x726] = -1;
    }
    if (uVar24 == uVar19) {
      *(undefined2 *)puVar21 = 0xffff;
    }
  }
LAB_027a6da4:
  uVar35 = uVar35 + 1;
  if (uVar35 == uVar33) goto LAB_027a7a20;
  goto LAB_027a6db0;
}

