
undefined8 FUN_01237e40(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined1 *puVar4;
  uint uVar5;
  undefined *puVar6;
  undefined *puVar7;
  char cVar8;
  char cVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  undefined *puVar13;
  int iVar14;
  uint uVar15;
  uint *puVar16;
  undefined1 *puVar17;
  char cVar18;
  uint *puVar19;
  int *piVar20;
  long lVar21;
  char *pcVar22;
  undefined8 *puVar23;
  undefined8 uVar24;
  ulong uVar25;
  uint uVar26;
  uint uVar27;
  undefined *local_128;
  undefined1 *local_120;
  undefined8 local_118;
  undefined1 *local_110;
  int local_108;
  undefined1 local_104 [63];
  undefined1 local_c5;
  undefined *local_c0;
  undefined1 *local_b8;
  int local_b0;
  undefined1 local_ac [63];
  undefined1 local_6d;
  
  puVar6 = PTR_DAT_04bb30a0;
  uVar26 = *(uint *)(DAT_05150358 + 0x1c0);
  if ((int)uVar26 < 1) {
    if ((*(long *)(DAT_05150358 + 0xb0) == 0) ||
       (puVar16 = *(uint **)(*(long *)(DAT_05150358 + 0xb0) + 8), puVar16 == (uint *)0x0)) {
      uVar26 = 0;
    }
    else {
      uVar26 = *puVar16;
    }
  }
  uVar24 = *(undefined8 *)PTR_DAT_04bb30a0;
  local_118 = (undefined *)FUN_00a8c31c(uVar24);
  if ((char)((ulong)local_118 >> 0x20) < '\x05') {
    lVar10 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_118);
    local_c0 = (undefined *)(lVar10 + -0x15180);
    local_118 = (undefined *)nn::time::ToCalendarTimeInUtc((PosixTime *)&local_c0);
  }
  uVar11 = (ulong)local_118 >> 0x10;
  uVar25 = (ulong)local_118 >> 0x30;
  uVar12 = (ulong)local_118 >> 0x18;
  local_118._0_6_ = CONCAT24(5,(undefined4)local_118);
  local_118 = (undefined *)(CONCAT26((short)uVar25,(uint6)local_118) & 0xff00ffffffffffff);
  cVar8 = FUN_00a8ae20(uVar24,uVar11,uVar12,4);
  uVar24 = *(undefined8 *)puVar6;
  local_118 = (undefined *)FUN_00a8c31c(uVar24);
  if ((char)((ulong)local_118 >> 0x20) < '\x05') {
    lVar10 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_118);
    local_c0 = (undefined *)(lVar10 + -0x15180);
    local_118 = (undefined *)nn::time::ToCalendarTimeInUtc((PosixTime *)&local_c0);
  }
  uVar25 = (ulong)local_118;
  uVar11 = (ulong)local_118 >> 0x10;
  uVar12 = (ulong)local_118 >> 0x18;
  local_118._0_6_ = CONCAT24(5,(undefined4)local_118);
  local_118._7_1_ = SUB81(uVar25,7);
  local_118._0_7_ = (uint7)(uint6)local_118;
  cVar9 = FUN_00a8ae20(uVar24,uVar11,uVar12,8);
  if ((*(short *)(*(long *)PTR_DAT_04bb32e8 + 0x4068) == 0) &&
     (local_118 = *(undefined **)(*(long *)PTR_DAT_04bb32e8 + 0x4060),
     (char)((ulong)local_118 >> 0x20) < '\x05')) {
    lVar10 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_118);
    local_c0 = (undefined *)(lVar10 + -0x15180);
    local_118 = (undefined *)nn::time::ToCalendarTimeInUtc((PosixTime *)&local_c0);
  }
  puVar7 = PTR_DAT_04bbbc78;
  puVar6 = PTR_DAT_04bb2020;
  if (uVar26 == 0) {
    return 1;
  }
  uVar27 = 0;
  puVar1 = PTR_DAT_04bb2f70 + 0x10;
  puVar2 = PTR_DAT_04bb2020 + 0x10;
  puVar13 = PTR_DAT_04bb2bc0;
  lVar10 = DAT_05150358;
  pcVar22 = PTR_DAT_04bbbc70;
  puVar23 = (undefined8 *)PTR_PTR_04bbbc90;
LAB_012380ac:
  if ((int)*(uint *)(lVar10 + 0x1c0) < 1) {
    if ((((*(long *)(lVar10 + 0xb0) != 0) &&
         (puVar16 = *(uint **)(*(long *)(lVar10 + 0xb0) + 8), puVar16 != (uint *)0x0)) &&
        ((*(uint *)(lVar10 + 200) <= uVar27 ||
         (*(char *)(*(long *)(lVar10 + 0xd0) + (long)(int)uVar27) != '\0')))) &&
       (((uVar27 < *puVar16 && (puVar16[1] != 0)) && ((ushort)puVar16[2] != 0)))) {
      iVar14 = 0xc;
      if (*(char *)((long)puVar16 + 10) != '\0') {
        iVar14 = 0x1c;
      }
      puVar16 = (uint *)((ulong)(puVar16[1] * uVar27 + (uint)(ushort)puVar16[2] * 8 + iVar14) +
                        (long)puVar16);
      goto joined_r0x01238210;
    }
  }
  else if (uVar27 < *(uint *)(lVar10 + 0x1c0)) {
    uVar15 = uVar27;
    if (*(uint *)(lVar10 + 0x1b0) <= uVar27) {
      uVar15 = 0;
    }
    puVar16 = *(uint **)(*(long *)(lVar10 + 0x1b8) + (ulong)uVar15 * 8);
joined_r0x01238210:
    if (puVar16 != (uint *)0x0) {
      uVar15 = *puVar16;
      if (uVar15 != 0) {
        cVar18 = *pcVar22;
        do {
          if (cVar18 == '\0') {
            *(undefined8 *)puVar7 = 0xffffffffffffffff;
            *(undefined8 *)(puVar7 + 8) = 0xffffffffffffffff;
            cVar18 = '\x01';
            *(undefined4 *)(puVar7 + 0x60) = 0xffffffff;
            *pcVar22 = '\x01';
            *(undefined8 *)(puVar7 + 0x10) = 0xffffffffffffffff;
            *(undefined8 *)(puVar7 + 0x18) = 0xffffffffffffffff;
            *(undefined8 *)(puVar7 + 0x20) = 0xffffffffffffffff;
            *(undefined8 *)(puVar7 + 0x28) = 0xffffffffffffffff;
            *(undefined8 *)(puVar7 + 0x30) = 0xffffffffffffffff;
            *(undefined8 *)(puVar7 + 0x38) = 0xffffffffffffffff;
            *(undefined8 *)(puVar7 + 0x40) = 0xffffffffffffffff;
            *(undefined8 *)(puVar7 + 0x48) = 0xffffffffffffffff;
            *(undefined8 *)(puVar7 + 0x50) = 0xffffffffffffffff;
            *(undefined8 *)(puVar7 + 0x58) = 0xffffffffffffffff;
            uVar15 = *puVar16;
          }
          else {
            uVar25 = (ulong)*(uint *)(puVar7 + 0x5c);
            if (-1 < (int)*(uint *)(puVar7 + 0x5c)) {
              if ((byte *)(uVar25 + (long)puVar16) != (byte *)0x0) {
                if ((*(byte *)(uVar25 + (long)puVar16) & 1) != 0) {
                  uVar15 = *puVar16;
                  if (uVar15 == 0) goto LAB_012382c4;
                  uVar11 = (ulong)*(uint *)(puVar7 + 0x60);
                  goto LAB_01238254;
                }
              }
              break;
            }
            if (uVar25 != 0xffffffff) break;
          }
          if ((ulong)uVar15 == 0) break;
          lVar21 = (long)puVar16 - (ulong)uVar15;
          if (lVar21 == 0) break;
          lVar3 = 0xc;
          if (*(char *)(lVar21 + 10) != '\0') {
            lVar3 = 0x1c;
          }
          if (lVar3 + lVar21 == 0) break;
          uVar25 = (ulong)*(ushort *)(lVar21 + 8);
          *(undefined4 *)(puVar7 + 0x5c) = 0xfffffffe;
          if (uVar25 == 0) break;
          piVar20 = (int *)(lVar3 + lVar21 + 4);
          while (piVar20[-1] != -0x5b4d2993) {
            piVar20 = piVar20 + 2;
            uVar25 = uVar25 - 1;
            if (uVar25 == 0) goto LAB_012380a0;
          }
          iVar14 = 0;
          if (*piVar20 != -1) {
            iVar14 = *piVar20;
          }
          *(int *)(puVar7 + 0x5c) = iVar14;
          uVar15 = *puVar16;
          if (uVar15 == 0) break;
        } while( true );
      }
    }
  }
  goto LAB_012380a0;
  while( true ) {
    lVar10 = (long)puVar16 - (ulong)uVar15;
    puVar17 = (undefined1 *)0x0;
    if (lVar10 == 0) goto LAB_012382c8;
    lVar21 = 0xc;
    if (*(char *)(lVar10 + 10) != '\0') {
      lVar21 = 0x1c;
    }
    if (lVar21 + lVar10 == 0) break;
    uVar11 = (ulong)*(ushort *)(lVar10 + 8);
    *(undefined4 *)(puVar7 + 0x60) = 0xfffffffe;
    puVar17 = (undefined1 *)0x0;
    if (uVar11 == 0) goto LAB_012382c8;
    puVar19 = (uint *)(lVar21 + lVar10 + 4);
    while (puVar19[-1] != 0x48ef0398) {
      puVar19 = puVar19 + 2;
      uVar11 = uVar11 - 1;
      if (uVar11 == 0) {
        puVar17 = (undefined1 *)0x0;
        goto LAB_012382c8;
      }
    }
    uVar11 = 0;
    if (*puVar19 != 0xffffffff) {
      uVar11 = (ulong)*puVar19;
    }
    *(int *)(puVar7 + 0x60) = (int)uVar11;
    uVar15 = *puVar16;
    if (uVar15 == 0) break;
LAB_01238254:
    if (-1 < (int)uVar11) {
      puVar17 = (undefined1 *)(uVar11 + (long)puVar16);
      goto LAB_012382c8;
    }
    if (uVar11 != 0xffffffff) break;
  }
LAB_012382c4:
  puVar17 = (undefined1 *)0x0;
LAB_012382c8:
  puVar4 = (undefined1 *)*puVar23;
  if (puVar17 != (undefined1 *)0x0) {
    puVar4 = puVar17;
  }
  local_b0 = 0x40;
  local_6d = 0;
  local_b8 = local_ac;
  if (local_ac != puVar4) {
    lVar10 = 0;
    do {
      if (puVar4[lVar10] == '\0') {
LAB_01238338:
        iVar14 = (int)lVar10;
        if (0x3f < iVar14) {
          iVar14 = 0x3f;
        }
        goto LAB_01238344;
      }
      if (puVar4[lVar10 + 1] == '\0') {
        lVar10 = lVar10 + 1;
        goto LAB_01238338;
      }
      if (puVar4[lVar10 + 2] == '\0') {
        lVar10 = lVar10 + 2;
        goto LAB_01238338;
      }
      lVar10 = lVar10 + 3;
    } while (lVar10 != 0x80001);
    iVar14 = 0;
LAB_01238344:
    local_c0 = puVar1;
    memcpy(local_ac,puVar4,(long)iVar14);
    local_ac[iVar14] = 0;
    puVar13 = PTR_DAT_04bb2bc0;
  }
  puVar17 = local_b8;
  puVar13 = puVar13 + 0x10;
  local_c0 = puVar13;
  if ((cVar8 == '\x02') && (uVar15 = *puVar16, uVar15 != 0)) {
    while ((int)uVar25 < 0) {
      if ((uVar25 != 0xffffffff) || (lVar10 = (long)puVar16 - (ulong)uVar15, lVar10 == 0))
      goto LAB_012384b4;
      lVar21 = 0xc;
      if (*(char *)(lVar10 + 10) != '\0') {
        lVar21 = 0x1c;
      }
      if (lVar21 + lVar10 == 0) goto LAB_012384b4;
      uVar25 = (ulong)*(ushort *)(lVar10 + 8);
      *(undefined4 *)(puVar7 + 0x5c) = 0xfffffffe;
      if (uVar25 == 0) goto LAB_012384b4;
      puVar19 = (uint *)(lVar21 + lVar10 + 4);
      while (puVar19[-1] != 0xa4b2d66d) {
        puVar19 = puVar19 + 2;
        uVar25 = uVar25 - 1;
        if (uVar25 == 0) goto LAB_012384b4;
      }
      uVar25 = 0;
      if (*puVar19 != 0xffffffff) {
        uVar25 = (ulong)*puVar19;
      }
      *(int *)(puVar7 + 0x5c) = (int)uVar25;
      uVar15 = *puVar16;
      if (uVar15 == 0) goto LAB_012384b4;
    }
    if (((byte *)(uVar25 + (long)puVar16) != (byte *)0x0) &&
       ((*(byte *)(uVar25 + (long)puVar16) >> 1 & 1) != 0)) {
      lVar10 = 0;
      local_110 = &DAT_040cf099;
      local_b8[(long)local_b0 + -1] = 0;
      goto LAB_0123847c;
    }
  }
  goto LAB_012384b4;
  while( true ) {
    if (local_b8[lVar10 + 1] == '\0') {
      lVar10 = lVar10 + 1;
      goto LAB_01238704;
    }
    if (local_b8[lVar10 + 2] == '\0') {
      lVar10 = lVar10 + 2;
      goto LAB_01238704;
    }
    lVar10 = lVar10 + 3;
    if (lVar10 == 0x80001) break;
LAB_0123847c:
    if (local_b8[lVar10] == '\0') {
LAB_01238704:
      uVar15 = (uint)lVar10;
      goto LAB_01238708;
    }
  }
  uVar15 = 0;
LAB_01238708:
  uVar15 = uVar15 & ((int)uVar15 >> 0x1f ^ 0xffffffffU);
  local_118 = puVar2;
  (**(code **)(puVar6 + 0x28))(&local_118);
  lVar10 = 0;
  do {
    if (local_110[lVar10] == '\0') goto LAB_01238760;
    if (local_110[lVar10 + 1] == '\0') {
      lVar10 = lVar10 + 1;
      goto LAB_01238760;
    }
    if (local_110[lVar10 + 2] == '\0') {
      lVar10 = lVar10 + 2;
      goto LAB_01238760;
    }
    lVar10 = lVar10 + 3;
  } while (lVar10 != 0x80001);
  lVar10 = 0;
LAB_01238760:
  uVar5 = (uint)lVar10;
  if ((int)(local_b0 - uVar15) <= (int)(uint)lVar10) {
    uVar5 = local_b0 + ~uVar15;
  }
  if (0 < (int)uVar5) {
    (**(code **)(local_118 + 0x18))(&local_118);
    memcpy(puVar17 + uVar15,local_110,(ulong)uVar5);
    puVar17[(int)(uVar5 + uVar15)] = 0;
  }
LAB_012384b4:
  local_c5 = 0;
  local_108 = 0x40;
  local_104[0] = 0;
  local_118 = puVar13;
  local_110 = local_104;
  (**(code **)(local_c0 + 0x18))(&local_c0);
  puVar17 = local_b8;
  if (local_104 != local_b8) {
    (**(code **)(local_c0 + 0x18))(&local_c0);
    lVar10 = 0;
    do {
      if (local_b8[lVar10] == '\0') goto LAB_01238540;
      if (local_b8[lVar10 + 1] == '\0') {
        lVar10 = lVar10 + 1;
        goto LAB_01238540;
      }
      if (local_b8[lVar10 + 2] == '\0') {
        lVar10 = lVar10 + 2;
        goto LAB_01238540;
      }
      lVar10 = lVar10 + 3;
    } while (lVar10 != 0x80001);
    lVar10 = 0;
LAB_01238540:
    iVar14 = (int)lVar10;
    if (local_108 <= (int)lVar10) {
      iVar14 = local_108 + -1;
    }
    memcpy(local_104,puVar17,(long)iVar14);
    local_104[iVar14] = 0;
  }
  FUN_0074ed40(param_1,&local_118,0);
  puVar17 = local_110;
  puVar13 = PTR_DAT_04bbbc70;
  if ((byte)(cVar9 - 1U) < 3) {
    local_128 = (undefined *)CONCAT44(local_128._4_4_,2);
    uVar15 = *puVar16;
    if (uVar15 != 0) {
      cVar18 = *PTR_DAT_04bbbc70;
      do {
        if (cVar18 == '\0') {
          *(undefined8 *)puVar7 = 0xffffffffffffffff;
          *(undefined8 *)(puVar7 + 8) = 0xffffffffffffffff;
          cVar18 = '\x01';
          *(undefined4 *)(puVar7 + 0x60) = 0xffffffff;
          *puVar13 = 1;
          *(undefined8 *)(puVar7 + 0x10) = 0xffffffffffffffff;
          *(undefined8 *)(puVar7 + 0x18) = 0xffffffffffffffff;
          *(undefined8 *)(puVar7 + 0x20) = 0xffffffffffffffff;
          *(undefined8 *)(puVar7 + 0x28) = 0xffffffffffffffff;
          *(undefined8 *)(puVar7 + 0x30) = 0xffffffffffffffff;
          *(undefined8 *)(puVar7 + 0x38) = 0xffffffffffffffff;
          *(undefined8 *)(puVar7 + 0x40) = 0xffffffffffffffff;
          *(undefined8 *)(puVar7 + 0x48) = 0xffffffffffffffff;
          *(undefined8 *)(puVar7 + 0x50) = 0xffffffffffffffff;
          *(undefined8 *)(puVar7 + 0x58) = 0xffffffffffffffff;
          uVar15 = *puVar16;
        }
        else {
          uVar5 = *(uint *)(puVar7 + 0x5c);
          if (-1 < (int)uVar5) {
            if (((byte *)((ulong)uVar5 + (long)puVar16) != (byte *)0x0) &&
               ((*(byte *)((ulong)uVar5 + (long)puVar16) >> 2 & 1) != 0)) {
              (**(code **)(local_c0 + 0x18))(&local_c0);
              puVar4 = local_b8;
              if (puVar17 == local_b8) goto LAB_012387fc;
              (**(code **)(local_c0 + 0x18))(&local_c0);
              lVar10 = 0;
              goto LAB_012386c8;
            }
            break;
          }
          if (uVar5 != 0xffffffff) break;
        }
        lVar10 = (long)puVar16 - (ulong)uVar15;
        if (((ulong)uVar15 == 0) || (lVar10 == 0)) break;
        lVar21 = 0xc;
        if (*(char *)(lVar10 + 10) != '\0') {
          lVar21 = 0x1c;
        }
        if (lVar21 + lVar10 == 0) break;
        uVar25 = (ulong)*(ushort *)(lVar10 + 8);
        *(undefined4 *)(puVar7 + 0x5c) = 0xfffffffe;
        if (uVar25 == 0) break;
        piVar20 = (int *)(lVar21 + lVar10 + 4);
        while (piVar20[-1] != -0x5b4d2993) {
          piVar20 = piVar20 + 2;
          uVar25 = uVar25 - 1;
          if (uVar25 == 0) goto LAB_0123892c;
        }
        iVar14 = 0;
        if (*piVar20 != -1) {
          iVar14 = *piVar20;
        }
        *(int *)(puVar7 + 0x5c) = iVar14;
        uVar15 = *puVar16;
        if (uVar15 == 0) break;
      } while( true );
    }
  }
LAB_0123892c:
  puVar17 = local_110;
  (**(code **)(local_c0 + 0x18))(&local_c0);
  puVar4 = local_b8;
  if (puVar17 != local_b8) {
    (**(code **)(local_c0 + 0x18))(&local_c0);
    lVar10 = 0;
    do {
      if (local_b8[lVar10] == '\0') goto LAB_012389a8;
      if (local_b8[lVar10 + 1] == '\0') {
        lVar10 = lVar10 + 1;
        goto LAB_012389a8;
      }
      if (local_b8[lVar10 + 2] == '\0') {
        lVar10 = lVar10 + 2;
        goto LAB_012389a8;
      }
      lVar10 = lVar10 + 3;
    } while (lVar10 != 0x80001);
    lVar10 = 0;
LAB_012389a8:
    iVar14 = (int)lVar10;
    if (local_108 <= (int)lVar10) {
      iVar14 = local_108 + -1;
    }
    memcpy(puVar17,puVar4,(long)iVar14);
    puVar17[iVar14] = 0;
  }
  puVar17 = local_110;
  local_128 = PTR_DAT_04bb2020 + 0x10;
  local_120 = &DAT_04091831;
  (**(code **)(local_118 + 0x18))(&local_118);
  lVar10 = 0;
  do {
    if (local_110[lVar10] == '\0') goto LAB_01238a4c;
    if (local_110[lVar10 + 1] == '\0') {
      lVar10 = lVar10 + 1;
      goto LAB_01238a4c;
    }
    if (local_110[lVar10 + 2] == '\0') {
      lVar10 = lVar10 + 2;
      goto LAB_01238a4c;
    }
    lVar10 = lVar10 + 3;
  } while (lVar10 != 0x80001);
  lVar10 = 0;
LAB_01238a4c:
  uVar15 = (uint)lVar10 & ((int)(uint)lVar10 >> 0x1f ^ 0xffffffffU);
  (**(code **)(local_128 + 0x18))(&local_128);
  lVar10 = 0;
  do {
    if (local_120[lVar10] == '\0') goto LAB_01238aac;
    if (local_120[lVar10 + 1] == '\0') {
      lVar10 = lVar10 + 1;
      goto LAB_01238aac;
    }
    if (local_120[lVar10 + 2] == '\0') {
      lVar10 = lVar10 + 2;
      goto LAB_01238aac;
    }
    lVar10 = lVar10 + 3;
  } while (lVar10 != 0x80001);
  lVar10 = 0;
LAB_01238aac:
  uVar5 = (uint)lVar10;
  if ((int)(local_108 - uVar15) <= (int)(uint)lVar10) {
    uVar5 = local_108 + ~uVar15;
  }
  if (0 < (int)uVar5) {
    (**(code **)(local_128 + 0x18))(&local_128);
    memcpy(puVar17 + uVar15,local_120,(ulong)uVar5);
    puVar17[(int)(uVar5 + uVar15)] = 0;
  }
  FUN_0074ed40(param_1,&local_118,0);
  puVar13 = PTR_DAT_04bb2bc0;
  lVar10 = DAT_05150358;
  pcVar22 = PTR_DAT_04bbbc70;
  puVar23 = (undefined8 *)PTR_PTR_04bbbc90;
LAB_012380a0:
  uVar27 = uVar27 + 1;
  if (uVar27 == uVar26) {
    return 1;
  }
  goto LAB_012380ac;
  while( true ) {
    if (local_b8[lVar10 + 1] == '\0') {
      lVar10 = lVar10 + 1;
      goto LAB_012387d4;
    }
    if (local_b8[lVar10 + 2] == '\0') {
      lVar10 = lVar10 + 2;
      goto LAB_012387d4;
    }
    lVar10 = lVar10 + 3;
    if (lVar10 == 0x80001) break;
LAB_012386c8:
    if (local_b8[lVar10] == '\0') goto LAB_012387d4;
  }
  lVar10 = 0;
LAB_012387d4:
  iVar14 = (int)lVar10;
  if (local_108 <= (int)lVar10) {
    iVar14 = local_108 + -1;
  }
  memcpy(puVar17,puVar4,(long)iVar14);
  puVar17[iVar14] = 0;
LAB_012387fc:
  puVar17 = local_110;
  local_128 = PTR_DAT_04bb2020 + 0x10;
  local_120 = &DAT_040bae5e;
  (**(code **)(local_118 + 0x18))(&local_118);
  lVar10 = 0;
  do {
    if (local_110[lVar10] == '\0') goto LAB_01238870;
    if (local_110[lVar10 + 1] == '\0') {
      lVar10 = lVar10 + 1;
      goto LAB_01238870;
    }
    if (local_110[lVar10 + 2] == '\0') {
      lVar10 = lVar10 + 2;
      goto LAB_01238870;
    }
    lVar10 = lVar10 + 3;
  } while (lVar10 != 0x80001);
  lVar10 = 0;
LAB_01238870:
  uVar15 = (uint)lVar10 & ((int)(uint)lVar10 >> 0x1f ^ 0xffffffffU);
  (**(code **)(local_128 + 0x18))(&local_128);
  lVar10 = 0;
  do {
    if (local_120[lVar10] == '\0') goto LAB_012388d0;
    if (local_120[lVar10 + 1] == '\0') {
      lVar10 = lVar10 + 1;
      goto LAB_012388d0;
    }
    if (local_120[lVar10 + 2] == '\0') {
      lVar10 = lVar10 + 2;
      goto LAB_012388d0;
    }
    lVar10 = lVar10 + 3;
  } while (lVar10 != 0x80001);
  lVar10 = 0;
LAB_012388d0:
  uVar5 = (uint)lVar10;
  if ((int)(local_108 - uVar15) <= (int)(uint)lVar10) {
    uVar5 = local_108 + ~uVar15;
  }
  if (0 < (int)uVar5) {
    (**(code **)(local_128 + 0x18))(&local_128);
    memcpy(puVar17 + uVar15,local_120,(ulong)uVar5);
    puVar17[(int)(uVar5 + uVar15)] = 0;
  }
  FUN_0074ed40(param_1,&local_118,0);
  goto LAB_0123892c;
}

