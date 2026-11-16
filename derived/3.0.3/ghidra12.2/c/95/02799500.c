
void FUN_02799500(long param_1,byte *param_2,long *param_3,int param_4)

{
  long lVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined *puVar5;
  uint *puVar6;
  ushort uVar7;
  short sVar8;
  uint uVar9;
  undefined *puVar10;
  undefined4 uVar11;
  uint uVar12;
  uint uVar13;
  uint *puVar14;
  undefined8 uVar15;
  long lVar16;
  ulong uVar17;
  ulong uVar18;
  int *piVar19;
  char cVar20;
  uint *puVar21;
  ulong uVar22;
  int *piVar23;
  uint uVar24;
  int *piVar25;
  undefined *local_70;
  long lStack_68;
  
  lVar16 = *(long *)PTR_DAT_04bb27d0;
  if (((lVar16 != 0) && (*(long *)(lVar16 + 0x28) != 0)) && (*(int *)(lVar16 + 0x80) == 1)) {
    return;
  }
  sVar8 = *(short *)PTR_DAT_04bb6298;
  if (sVar8 != -1) {
    local_70 = (undefined *)CONCAT44(local_70._4_4_,0x20);
    puVar5 = PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar8 * 8;
    if (0xff < (uint)(int)sVar8) {
      puVar5 = PTR_DAT_04bc39f8;
    }
    if ((*(uint *)(puVar5 + 4) & 1) != 0) {
      return;
    }
  }
  if (*(int *)(PTR_DAT_04bc3a80 + 0x38) == -0x3f5c743d) {
    return;
  }
  if ((*(int *)(PTR_DAT_04bc3a80 + 0x38) == -0x2f1ac06c) &&
     (*(int *)(*(long *)PTR_DAT_04bb3728 + 0xb0) != 0)) {
    return;
  }
  lVar16 = *(long *)PTR_DAT_04bb2208;
  (**(code **)(*param_3 + 0x18))(param_3);
  uVar11 = FUN_006bd550(param_3[1],0);
  local_70 = (undefined *)CONCAT44(local_70._4_4_,uVar11);
  puVar14 = (uint *)FUN_01b1ee90(lVar16 + 0x1b80,&local_70);
  puVar10 = PTR_DAT_04bb6448;
  puVar5 = PTR_DAT_04bb6440;
  if (puVar14 == (uint *)0x0) {
    return;
  }
  piVar25 = (int *)(param_1 + 0xe98);
  piVar19 = piVar25;
  if (*puVar14 != 0) {
    cVar20 = *PTR_DAT_04bb6440;
    uVar17 = 0xffffffff;
    do {
      if (cVar20 != '\0') {
        if (*(uint *)(puVar10 + 0x3c) == 0xffffffff) {
          uVar12 = *puVar14;
          if (uVar12 != 0) goto LAB_027996ac;
        }
        else {
          uVar17 = (ulong)*(uint *)(puVar10 + 0x3c);
        }
LAB_0279971c:
        if (*puVar14 != 0) goto LAB_02799734;
        break;
      }
      cVar20 = '\x01';
      *(undefined8 *)puVar10 = 0xffffffffffffffff;
      *(undefined8 *)(puVar10 + 8) = 0xffffffffffffffff;
      *puVar5 = 1;
      *(undefined4 *)(puVar10 + 0x50) = 0xffffffff;
      *(undefined8 *)(puVar10 + 0x10) = 0xffffffffffffffff;
      *(undefined8 *)(puVar10 + 0x18) = 0xffffffffffffffff;
      *(undefined8 *)(puVar10 + 0x20) = 0xffffffffffffffff;
      *(undefined8 *)(puVar10 + 0x28) = 0xffffffffffffffff;
      *(undefined8 *)(puVar10 + 0x30) = 0xffffffffffffffff;
      *(undefined8 *)(puVar10 + 0x38) = 0xffffffffffffffff;
      *(undefined8 *)(puVar10 + 0x40) = 0xffffffffffffffff;
      *(undefined8 *)(puVar10 + 0x48) = 0xffffffffffffffff;
      uVar12 = *puVar14;
      if (uVar12 == 0) goto LAB_0279971c;
LAB_027996ac:
      puVar21 = (uint *)(ulong)uVar12;
      if (puVar14 == puVar21) goto LAB_0279971c;
      lVar16 = 0xc;
      if (*(char *)((long)puVar14 + (10 - (long)puVar21)) != '\0') {
        lVar16 = 0x1c;
      }
      lVar16 = (long)puVar14 + (lVar16 - (long)puVar21);
      if (lVar16 == 0) goto LAB_0279971c;
      uVar18 = (ulong)*(ushort *)((long)puVar14 + (8 - (long)puVar21));
      *(undefined4 *)(puVar10 + 0x3c) = 0xfffffffe;
      if (uVar18 == 0) {
LAB_02799718:
        uVar17 = 0xfffffffe;
        goto LAB_0279971c;
      }
      piVar23 = (int *)(lVar16 + 4);
      while (piVar23[-1] != 0x54706054) {
        piVar23 = piVar23 + 2;
        uVar18 = uVar18 - 1;
        if (uVar18 == 0) goto LAB_02799718;
      }
      iVar4 = 0;
      if (*piVar23 != -1) {
        iVar4 = *piVar23;
      }
      *(int *)(puVar10 + 0x3c) = iVar4;
    } while (*puVar14 != 0);
  }
LAB_027997b8:
  uVar12 = FUN_02798cb0(puVar14,puVar14,*piVar19);
  uVar17 = (ulong)uVar12;
  uVar15 = FUN_027a3e90(param_3);
  puVar5 = PTR_DAT_04bb6440;
  iVar4 = param_4;
  if ((int)uVar15 <= param_4) {
    iVar4 = (int)uVar15;
  }
  iVar3 = 0;
  if (-1 < param_4) {
    iVar3 = iVar4;
  }
  piVar19 = piVar25;
  if (*puVar14 != 0) {
    cVar20 = *PTR_DAT_04bb6440;
    do {
      if (cVar20 == '\0') {
        cVar20 = '\x01';
        *(undefined8 *)puVar10 = 0xffffffffffffffff;
        *(undefined8 *)(puVar10 + 8) = 0xffffffffffffffff;
        *puVar5 = 1;
        *(undefined4 *)(puVar10 + 0x50) = 0xffffffff;
        *(undefined8 *)(puVar10 + 0x10) = 0xffffffffffffffff;
        *(undefined8 *)(puVar10 + 0x18) = 0xffffffffffffffff;
        *(undefined8 *)(puVar10 + 0x20) = 0xffffffffffffffff;
        *(undefined8 *)(puVar10 + 0x28) = 0xffffffffffffffff;
        *(undefined8 *)(puVar10 + 0x30) = 0xffffffffffffffff;
        *(undefined8 *)(puVar10 + 0x38) = 0xffffffffffffffff;
        *(undefined8 *)(puVar10 + 0x40) = 0xffffffffffffffff;
        *(undefined8 *)(puVar10 + 0x48) = 0xffffffffffffffff;
        uVar13 = *puVar14;
      }
      else {
        uVar13 = *(uint *)(puVar10 + 0x3c);
        if (-1 < (int)uVar13) {
          if (((ushort *)((ulong)uVar13 + (long)puVar14) != (ushort *)0x0) &&
             (uVar7 = *(ushort *)((ulong)uVar13 + (long)puVar14), uVar7 < 0x200)) {
            piVar19 = piVar25 + uVar7;
          }
          break;
        }
        if (uVar13 != 0xffffffff) break;
        uVar13 = *puVar14;
      }
      if ((uVar13 == 0) || (puVar21 = (uint *)(ulong)uVar13, puVar14 == puVar21)) break;
      lVar16 = 0xc;
      if (*(char *)((long)puVar14 + (10 - (long)puVar21)) != '\0') {
        lVar16 = 0x1c;
      }
      lVar16 = (long)puVar14 + (lVar16 - (long)puVar21);
      if (lVar16 == 0) break;
      uVar18 = (ulong)*(ushort *)((long)puVar14 + (8 - (long)puVar21));
      *(undefined4 *)(puVar10 + 0x3c) = 0xfffffffe;
      if (uVar18 == 0) break;
      piVar23 = (int *)(lVar16 + 4);
      while (piVar23[-1] != 0x54706054) {
        piVar23 = piVar23 + 2;
        uVar18 = uVar18 - 1;
        if (uVar18 == 0) goto LAB_027998b8;
      }
      iVar4 = 0;
      if (*piVar23 != -1) {
        iVar4 = *piVar23;
      }
      *(int *)(puVar10 + 0x3c) = iVar4;
      if (*puVar14 == 0) break;
    } while( true );
  }
LAB_027998b8:
  *piVar19 = iVar3;
  if (*puVar14 != 0) {
    cVar20 = *puVar5;
    uVar18 = 0xffffffff;
    do {
      if (cVar20 != '\0') {
        if (*(uint *)(puVar10 + 0x3c) == 0xffffffff) {
          uVar13 = *puVar14;
          if (uVar13 != 0) goto LAB_02799918;
          goto LAB_0279998c;
        }
        uVar18 = (ulong)*(uint *)(puVar10 + 0x3c);
        uVar13 = *puVar14;
joined_r0x02799a2c:
        if (uVar13 != 0) goto LAB_027999a0;
        break;
      }
      cVar20 = '\x01';
      *(undefined8 *)puVar10 = 0xffffffffffffffff;
      *(undefined8 *)(puVar10 + 8) = 0xffffffffffffffff;
      *puVar5 = 1;
      *(undefined4 *)(puVar10 + 0x50) = 0xffffffff;
      *(undefined8 *)(puVar10 + 0x10) = 0xffffffffffffffff;
      *(undefined8 *)(puVar10 + 0x18) = 0xffffffffffffffff;
      *(undefined8 *)(puVar10 + 0x20) = 0xffffffffffffffff;
      *(undefined8 *)(puVar10 + 0x28) = 0xffffffffffffffff;
      *(undefined8 *)(puVar10 + 0x30) = 0xffffffffffffffff;
      *(undefined8 *)(puVar10 + 0x38) = 0xffffffffffffffff;
      *(undefined8 *)(puVar10 + 0x40) = 0xffffffffffffffff;
      *(undefined8 *)(puVar10 + 0x48) = 0xffffffffffffffff;
      uVar13 = *puVar14;
      if (uVar13 == 0) {
LAB_0279998c:
        uVar13 = *puVar14;
        goto joined_r0x02799a2c;
      }
LAB_02799918:
      puVar21 = (uint *)(ulong)uVar13;
      if (puVar14 == puVar21) goto LAB_0279998c;
      lVar16 = 0xc;
      if (*(char *)((long)puVar14 + (10 - (long)puVar21)) != '\0') {
        lVar16 = 0x1c;
      }
      lVar16 = (long)puVar14 + (lVar16 - (long)puVar21);
      if (lVar16 == 0) goto LAB_0279998c;
      uVar22 = (ulong)*(ushort *)((long)puVar14 + (8 - (long)puVar21));
      *(undefined4 *)(puVar10 + 0x3c) = 0xfffffffe;
      if (uVar22 == 0) {
LAB_02799988:
        uVar18 = 0xfffffffe;
        goto LAB_0279998c;
      }
      piVar19 = (int *)(lVar16 + 4);
      while (piVar19[-1] != 0x54706054) {
        piVar19 = piVar19 + 2;
        uVar22 = uVar22 - 1;
        if (uVar22 == 0) goto LAB_02799988;
      }
      iVar4 = 0;
      if (*piVar19 != -1) {
        iVar4 = *piVar19;
      }
      *(int *)(puVar10 + 0x3c) = iVar4;
    } while (*puVar14 != 0);
  }
LAB_02799aa0:
  uVar13 = FUN_02798cb0(uVar15,puVar14,*piVar25);
  if (uVar12 != uVar13) {
    lVar16 = *(long *)PTR_DAT_04bb32e8;
    local_70 = (undefined *)
               (*(long *)(lVar16 + 0x20) / 1000000000 + *(long *)(lVar16 + 8) +
               (((*(long *)(lVar16 + 0x10) + (long)*(int *)(lVar16 + 0x38)) - *(long *)(lVar16 + 8))
               * 1000000000) / 1000000000);
    uVar15 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_70);
    uVar24 = (uint)((ulong)uVar15 >> 0x10);
    uVar9 = (uint)((ulong)uVar15 >> 0x18);
    uVar2 = (uint)uVar15 & 0xffff;
    uVar18 = nn::time::IsValidDate(uVar2,uVar24 & 0xff,uVar9 & 0xff);
    puVar5 = PTR_DAT_04bb6440;
    if (uVar12 < uVar13) {
      cVar20 = *PTR_DAT_04bb6440;
      uVar2 = uVar9 << 0x18 | (uVar24 & 0xff) << 0x10 | uVar2;
      if ((uVar18 & 1) == 0) {
        uVar2 = 0;
      }
      do {
        if (*puVar14 != 0) {
          do {
            if (cVar20 == '\0') {
              cVar20 = '\x01';
              *(undefined8 *)puVar10 = 0xffffffffffffffff;
              *(undefined8 *)(puVar10 + 8) = 0xffffffffffffffff;
              *puVar5 = 1;
              *(undefined4 *)(puVar10 + 0x50) = 0xffffffff;
              *(undefined8 *)(puVar10 + 0x10) = 0xffffffffffffffff;
              *(undefined8 *)(puVar10 + 0x18) = 0xffffffffffffffff;
              *(undefined8 *)(puVar10 + 0x20) = 0xffffffffffffffff;
              *(undefined8 *)(puVar10 + 0x28) = 0xffffffffffffffff;
              *(undefined8 *)(puVar10 + 0x30) = 0xffffffffffffffff;
              *(undefined8 *)(puVar10 + 0x38) = 0xffffffffffffffff;
              *(undefined8 *)(puVar10 + 0x40) = 0xffffffffffffffff;
              *(undefined8 *)(puVar10 + 0x48) = 0xffffffffffffffff;
              uVar12 = *puVar14;
            }
            else {
              uVar12 = *(uint *)(puVar10 + 0x3c);
              if (-1 < (int)uVar12) {
                if (((ushort *)((ulong)uVar12 + (long)puVar14) != (ushort *)0x0) &&
                   (uVar7 = *(ushort *)((ulong)uVar12 + (long)puVar14), uVar7 < 0x200)) {
                  puVar21 = (uint *)(param_1 + 0x2298) + (ulong)uVar7 * 6;
                  goto LAB_02799c74;
                }
                break;
              }
              if (uVar12 != 0xffffffff) break;
              uVar12 = *puVar14;
            }
            if ((uVar12 == 0) || (puVar21 = (uint *)(ulong)uVar12, puVar14 == puVar21)) break;
            lVar16 = 0xc;
            if (*(char *)((long)puVar14 + (10 - (long)puVar21)) != '\0') {
              lVar16 = 0x1c;
            }
            lVar16 = (long)puVar14 + (lVar16 - (long)puVar21);
            if (lVar16 == 0) break;
            uVar18 = (ulong)*(ushort *)((long)puVar14 + (8 - (long)puVar21));
            *(undefined4 *)(puVar10 + 0x3c) = 0xfffffffe;
            if (uVar18 == 0) break;
            piVar19 = (int *)(lVar16 + 4);
            while (piVar19[-1] != 0x54706054) {
              piVar19 = piVar19 + 2;
              uVar18 = uVar18 - 1;
              if (uVar18 == 0) goto LAB_02799c70;
            }
            iVar4 = 0;
            if (*piVar19 != -1) {
              iVar4 = *piVar19;
            }
            *(int *)(puVar10 + 0x3c) = iVar4;
            if (*puVar14 == 0) break;
          } while( true );
        }
LAB_02799c70:
        puVar21 = (uint *)(param_1 + 0x2298);
LAB_02799c74:
        puVar6 = puVar21 + uVar17;
        uVar24 = (uint)uVar17;
        uVar12 = uVar24 + 1;
        uVar17 = (ulong)uVar12;
        if (5 < uVar24) {
          puVar6 = puVar21;
        }
        *puVar6 = uVar2;
      } while (uVar12 != uVar13);
    }
    puVar5 = PTR_DAT_04bb6440;
    if (*param_2 < 8) {
      if (*puVar14 != 0) {
        cVar20 = *PTR_DAT_04bb6440;
        do {
          if (cVar20 == '\0') {
            cVar20 = '\x01';
            *(undefined8 *)puVar10 = 0xffffffffffffffff;
            *(undefined8 *)(puVar10 + 8) = 0xffffffffffffffff;
            *puVar5 = 1;
            *(undefined4 *)(puVar10 + 0x50) = 0xffffffff;
            *(undefined8 *)(puVar10 + 0x10) = 0xffffffffffffffff;
            *(undefined8 *)(puVar10 + 0x18) = 0xffffffffffffffff;
            *(undefined8 *)(puVar10 + 0x20) = 0xffffffffffffffff;
            *(undefined8 *)(puVar10 + 0x28) = 0xffffffffffffffff;
            *(undefined8 *)(puVar10 + 0x30) = 0xffffffffffffffff;
            *(undefined8 *)(puVar10 + 0x38) = 0xffffffffffffffff;
            *(undefined8 *)(puVar10 + 0x40) = 0xffffffffffffffff;
            *(undefined8 *)(puVar10 + 0x48) = 0xffffffffffffffff;
          }
          else {
            uVar12 = *(uint *)(puVar10 + 0x48);
            if (-1 < (int)uVar12) {
              lVar16 = (ulong)uVar12 + (long)puVar14;
              goto LAB_02799d78;
            }
            if (uVar12 != 0xffffffff) break;
          }
          puVar21 = (uint *)(ulong)*puVar14;
          lVar16 = 0;
          if ((*puVar14 == 0) || (puVar14 == puVar21)) goto LAB_02799d78;
          lVar16 = 0xc;
          if (*(char *)((long)puVar14 + (10 - (long)puVar21)) != '\0') {
            lVar16 = 0x1c;
          }
          lVar1 = (long)puVar14 + (lVar16 - (long)puVar21);
          if (lVar1 == 0) break;
          uVar17 = (ulong)*(ushort *)((long)puVar14 + (8 - (long)puVar21));
          *(undefined4 *)(puVar10 + 0x48) = 0xfffffffe;
          lVar16 = 0;
          if (uVar17 == 0) goto LAB_02799d78;
          piVar19 = (int *)(lVar1 + 4);
          while (piVar19[-1] != 0x45f320f2) {
            piVar19 = piVar19 + 2;
            uVar17 = uVar17 - 1;
            if (uVar17 == 0) {
              lVar16 = 0;
              goto LAB_02799d78;
            }
          }
          iVar4 = 0;
          if (*piVar19 != -1) {
            iVar4 = *piVar19;
          }
          *(int *)(puVar10 + 0x48) = iVar4;
        } while (*puVar14 != 0);
      }
      lVar16 = 0;
LAB_02799d78:
      lStack_68 = *(long *)PTR_PTR_04bb6438;
      if (lVar16 != 0) {
        lStack_68 = lVar16;
      }
      local_70 = PTR_DAT_04bb2020 + 0x10;
      FUN_027a3ce0(1,&local_70,param_2);
    }
  }
  return;
LAB_02799734:
  if (-1 < (int)uVar17) {
    if (((ushort *)((long)puVar14 + uVar17) != (ushort *)0x0) &&
       (uVar7 = *(ushort *)((long)puVar14 + uVar17), uVar7 < 0x200)) {
      piVar19 = piVar25 + uVar7;
    }
    goto LAB_027997b8;
  }
  if ((((int)uVar17 != -1) || (puVar21 = (uint *)(ulong)*puVar14, *puVar14 == 0)) ||
     (puVar14 == puVar21)) goto LAB_027997b8;
  lVar16 = 0xc;
  if (*(char *)((long)puVar14 + (10 - (long)puVar21)) != '\0') {
    lVar16 = 0x1c;
  }
  lVar16 = (long)puVar14 + (lVar16 - (long)puVar21);
  if (lVar16 == 0) goto LAB_027997b8;
  uVar17 = (ulong)*(ushort *)((long)puVar14 + (8 - (long)puVar21));
  *(undefined4 *)(puVar10 + 0x3c) = 0xfffffffe;
  if (uVar17 == 0) goto LAB_027997b8;
  puVar21 = (uint *)(lVar16 + 4);
  while (puVar21[-1] != 0x54706054) {
    puVar21 = puVar21 + 2;
    uVar17 = uVar17 - 1;
    if (uVar17 == 0) goto LAB_027997b8;
  }
  uVar12 = 0;
  if (*puVar21 != 0xffffffff) {
    uVar12 = *puVar21;
  }
  uVar17 = (ulong)uVar12;
  *(uint *)(puVar10 + 0x3c) = uVar12;
  if (*puVar14 == 0) goto LAB_027997b8;
  goto LAB_02799734;
LAB_027999a0:
  if (-1 < (int)uVar18) {
    if (((ushort *)((long)puVar14 + uVar18) != (ushort *)0x0) &&
       (uVar7 = *(ushort *)((long)puVar14 + uVar18), uVar7 < 0x200)) {
      piVar25 = piVar25 + uVar7;
    }
    goto LAB_02799aa0;
  }
  if ((((int)uVar18 != -1) || (puVar21 = (uint *)(ulong)*puVar14, *puVar14 == 0)) ||
     (puVar14 == puVar21)) goto LAB_02799aa0;
  lVar16 = 0xc;
  if (*(char *)((long)puVar14 + (10 - (long)puVar21)) != '\0') {
    lVar16 = 0x1c;
  }
  lVar16 = (long)puVar14 + (lVar16 - (long)puVar21);
  if (lVar16 == 0) goto LAB_02799aa0;
  uVar18 = (ulong)*(ushort *)((long)puVar14 + (8 - (long)puVar21));
  *(undefined4 *)(puVar10 + 0x3c) = 0xfffffffe;
  if (uVar18 == 0) goto LAB_02799aa0;
  puVar21 = (uint *)(lVar16 + 4);
  while (puVar21[-1] != 0x54706054) {
    puVar21 = puVar21 + 2;
    uVar18 = uVar18 - 1;
    if (uVar18 == 0) goto LAB_02799aa0;
  }
  uVar13 = 0;
  if (*puVar21 != 0xffffffff) {
    uVar13 = *puVar21;
  }
  uVar18 = (ulong)uVar13;
  *(uint *)(puVar10 + 0x3c) = uVar13;
  if (*puVar14 == 0) goto LAB_02799aa0;
  goto LAB_027999a0;
}

