
void FUN_02799f00(long param_1,byte *param_2,long *param_3,uint param_4)

{
  long lVar1;
  uint uVar2;
  int iVar3;
  undefined *puVar4;
  ushort uVar5;
  short sVar6;
  uint uVar7;
  undefined *puVar8;
  undefined4 uVar9;
  uint uVar10;
  uint uVar11;
  uint *puVar12;
  undefined8 uVar13;
  long lVar14;
  ulong uVar15;
  ulong uVar16;
  char cVar17;
  uint *puVar18;
  uint *puVar19;
  ulong uVar20;
  int *piVar21;
  uint uVar22;
  uint *puVar23;
  undefined *local_70;
  long lStack_68;
  
  lVar14 = *(long *)PTR_DAT_04bb27d0;
  if (((lVar14 != 0) && (*(long *)(lVar14 + 0x28) != 0)) && (*(int *)(lVar14 + 0x80) == 1)) {
    return;
  }
  sVar6 = *(short *)PTR_DAT_04bb6298;
  if (sVar6 != -1) {
    local_70 = (undefined *)CONCAT44(local_70._4_4_,0x20);
    puVar4 = PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar6 * 8;
    if (0xff < (uint)(int)sVar6) {
      puVar4 = PTR_DAT_04bc39f8;
    }
    if ((*(uint *)(puVar4 + 4) & 1) != 0) {
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
  lVar14 = *(long *)PTR_DAT_04bb2208;
  (**(code **)(*param_3 + 0x18))(param_3);
  uVar9 = FUN_006bd550(param_3[1],0);
  local_70 = (undefined *)CONCAT44(local_70._4_4_,uVar9);
  puVar12 = (uint *)FUN_01b1ee90(lVar14 + 0x1b80,&local_70);
  puVar8 = PTR_DAT_04bb6448;
  puVar4 = PTR_DAT_04bb6440;
  if (puVar12 == (uint *)0x0) {
    return;
  }
  puVar23 = (uint *)(param_1 + 0xe98);
  puVar19 = puVar23;
  if (*puVar12 != 0) {
    cVar17 = *PTR_DAT_04bb6440;
    uVar15 = 0xffffffff;
    do {
      if (cVar17 != '\0') {
        if (*(uint *)(puVar8 + 0x3c) == 0xffffffff) {
          uVar10 = *puVar12;
          if (uVar10 != 0) goto LAB_0279a0ac;
        }
        else {
          uVar15 = (ulong)*(uint *)(puVar8 + 0x3c);
        }
LAB_0279a11c:
        if (*puVar12 != 0) goto LAB_0279a134;
        break;
      }
      cVar17 = '\x01';
      *(undefined8 *)puVar8 = 0xffffffffffffffff;
      *(undefined8 *)(puVar8 + 8) = 0xffffffffffffffff;
      *puVar4 = 1;
      *(undefined4 *)(puVar8 + 0x50) = 0xffffffff;
      *(undefined8 *)(puVar8 + 0x10) = 0xffffffffffffffff;
      *(undefined8 *)(puVar8 + 0x18) = 0xffffffffffffffff;
      *(undefined8 *)(puVar8 + 0x20) = 0xffffffffffffffff;
      *(undefined8 *)(puVar8 + 0x28) = 0xffffffffffffffff;
      *(undefined8 *)(puVar8 + 0x30) = 0xffffffffffffffff;
      *(undefined8 *)(puVar8 + 0x38) = 0xffffffffffffffff;
      *(undefined8 *)(puVar8 + 0x40) = 0xffffffffffffffff;
      *(undefined8 *)(puVar8 + 0x48) = 0xffffffffffffffff;
      uVar10 = *puVar12;
      if (uVar10 == 0) goto LAB_0279a11c;
LAB_0279a0ac:
      puVar18 = (uint *)(ulong)uVar10;
      if (puVar12 == puVar18) goto LAB_0279a11c;
      lVar14 = 0xc;
      if (*(char *)((long)puVar12 + (10 - (long)puVar18)) != '\0') {
        lVar14 = 0x1c;
      }
      lVar14 = (long)puVar12 + (lVar14 - (long)puVar18);
      if (lVar14 == 0) goto LAB_0279a11c;
      uVar16 = (ulong)*(ushort *)((long)puVar12 + (8 - (long)puVar18));
      *(undefined4 *)(puVar8 + 0x3c) = 0xfffffffe;
      if (uVar16 == 0) {
LAB_0279a118:
        uVar15 = 0xfffffffe;
        goto LAB_0279a11c;
      }
      piVar21 = (int *)(lVar14 + 4);
      while (piVar21[-1] != 0x54706054) {
        piVar21 = piVar21 + 2;
        uVar16 = uVar16 - 1;
        if (uVar16 == 0) goto LAB_0279a118;
      }
      iVar3 = 0;
      if (*piVar21 != -1) {
        iVar3 = *piVar21;
      }
      *(int *)(puVar8 + 0x3c) = iVar3;
    } while (*puVar12 != 0);
  }
LAB_0279a1b8:
  uVar10 = FUN_02798cb0(puVar12,puVar12,*puVar19);
  uVar15 = (ulong)uVar10;
  uVar13 = FUN_027a3e90(param_3);
  puVar4 = PTR_DAT_04bb6440;
  if ((uint)uVar13 <= param_4) {
    param_4 = (uint)uVar13;
  }
  puVar19 = puVar23;
  if (*puVar12 != 0) {
    cVar17 = *PTR_DAT_04bb6440;
    do {
      if (cVar17 == '\0') {
        cVar17 = '\x01';
        *(undefined8 *)puVar8 = 0xffffffffffffffff;
        *(undefined8 *)(puVar8 + 8) = 0xffffffffffffffff;
        *puVar4 = 1;
        *(undefined4 *)(puVar8 + 0x50) = 0xffffffff;
        *(undefined8 *)(puVar8 + 0x10) = 0xffffffffffffffff;
        *(undefined8 *)(puVar8 + 0x18) = 0xffffffffffffffff;
        *(undefined8 *)(puVar8 + 0x20) = 0xffffffffffffffff;
        *(undefined8 *)(puVar8 + 0x28) = 0xffffffffffffffff;
        *(undefined8 *)(puVar8 + 0x30) = 0xffffffffffffffff;
        *(undefined8 *)(puVar8 + 0x38) = 0xffffffffffffffff;
        *(undefined8 *)(puVar8 + 0x40) = 0xffffffffffffffff;
        *(undefined8 *)(puVar8 + 0x48) = 0xffffffffffffffff;
        uVar11 = *puVar12;
      }
      else {
        uVar11 = *(uint *)(puVar8 + 0x3c);
        if (-1 < (int)uVar11) {
          if (((ushort *)((ulong)uVar11 + (long)puVar12) != (ushort *)0x0) &&
             (uVar5 = *(ushort *)((ulong)uVar11 + (long)puVar12), uVar5 < 0x200)) {
            puVar19 = puVar23 + uVar5;
          }
          break;
        }
        if (uVar11 != 0xffffffff) break;
        uVar11 = *puVar12;
      }
      if ((uVar11 == 0) || (puVar18 = (uint *)(ulong)uVar11, puVar12 == puVar18)) break;
      lVar14 = 0xc;
      if (*(char *)((long)puVar12 + (10 - (long)puVar18)) != '\0') {
        lVar14 = 0x1c;
      }
      lVar14 = (long)puVar12 + (lVar14 - (long)puVar18);
      if (lVar14 == 0) break;
      uVar16 = (ulong)*(ushort *)((long)puVar12 + (8 - (long)puVar18));
      *(undefined4 *)(puVar8 + 0x3c) = 0xfffffffe;
      if (uVar16 == 0) break;
      piVar21 = (int *)(lVar14 + 4);
      while (piVar21[-1] != 0x54706054) {
        piVar21 = piVar21 + 2;
        uVar16 = uVar16 - 1;
        if (uVar16 == 0) goto LAB_0279a2ac;
      }
      iVar3 = 0;
      if (*piVar21 != -1) {
        iVar3 = *piVar21;
      }
      *(int *)(puVar8 + 0x3c) = iVar3;
      if (*puVar12 == 0) break;
    } while( true );
  }
LAB_0279a2ac:
  *puVar19 = param_4;
  if (*puVar12 != 0) {
    cVar17 = *puVar4;
    uVar16 = 0xffffffff;
    do {
      if (cVar17 != '\0') {
        if (*(uint *)(puVar8 + 0x3c) == 0xffffffff) {
          uVar11 = *puVar12;
          if (uVar11 != 0) goto LAB_0279a30c;
          goto LAB_0279a37c;
        }
        uVar16 = (ulong)*(uint *)(puVar8 + 0x3c);
        uVar11 = *puVar12;
joined_r0x0279a41c:
        if (uVar11 != 0) goto LAB_0279a390;
        break;
      }
      cVar17 = '\x01';
      *(undefined8 *)puVar8 = 0xffffffffffffffff;
      *(undefined8 *)(puVar8 + 8) = 0xffffffffffffffff;
      *puVar4 = 1;
      *(undefined4 *)(puVar8 + 0x50) = 0xffffffff;
      *(undefined8 *)(puVar8 + 0x10) = 0xffffffffffffffff;
      *(undefined8 *)(puVar8 + 0x18) = 0xffffffffffffffff;
      *(undefined8 *)(puVar8 + 0x20) = 0xffffffffffffffff;
      *(undefined8 *)(puVar8 + 0x28) = 0xffffffffffffffff;
      *(undefined8 *)(puVar8 + 0x30) = 0xffffffffffffffff;
      *(undefined8 *)(puVar8 + 0x38) = 0xffffffffffffffff;
      *(undefined8 *)(puVar8 + 0x40) = 0xffffffffffffffff;
      *(undefined8 *)(puVar8 + 0x48) = 0xffffffffffffffff;
      uVar11 = *puVar12;
      if (uVar11 == 0) {
LAB_0279a37c:
        uVar11 = *puVar12;
        goto joined_r0x0279a41c;
      }
LAB_0279a30c:
      puVar19 = (uint *)(ulong)uVar11;
      if (puVar12 == puVar19) goto LAB_0279a37c;
      lVar14 = 0xc;
      if (*(char *)((long)puVar12 + (10 - (long)puVar19)) != '\0') {
        lVar14 = 0x1c;
      }
      lVar14 = (long)puVar12 + (lVar14 - (long)puVar19);
      if (lVar14 == 0) goto LAB_0279a37c;
      uVar20 = (ulong)*(ushort *)((long)puVar12 + (8 - (long)puVar19));
      *(undefined4 *)(puVar8 + 0x3c) = 0xfffffffe;
      if (uVar20 == 0) {
LAB_0279a378:
        uVar16 = 0xfffffffe;
        goto LAB_0279a37c;
      }
      piVar21 = (int *)(lVar14 + 4);
      while (piVar21[-1] != 0x54706054) {
        piVar21 = piVar21 + 2;
        uVar20 = uVar20 - 1;
        if (uVar20 == 0) goto LAB_0279a378;
      }
      iVar3 = 0;
      if (*piVar21 != -1) {
        iVar3 = *piVar21;
      }
      *(int *)(puVar8 + 0x3c) = iVar3;
    } while (*puVar12 != 0);
  }
LAB_0279a490:
  uVar11 = FUN_02798cb0(uVar13,puVar12,*puVar23);
  if (uVar10 != uVar11) {
    lVar14 = *(long *)PTR_DAT_04bb32e8;
    local_70 = (undefined *)
               (*(long *)(lVar14 + 0x20) / 1000000000 + *(long *)(lVar14 + 8) +
               (((*(long *)(lVar14 + 0x10) + (long)*(int *)(lVar14 + 0x38)) - *(long *)(lVar14 + 8))
               * 1000000000) / 1000000000);
    uVar13 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_70);
    uVar22 = (uint)((ulong)uVar13 >> 0x10);
    uVar7 = (uint)((ulong)uVar13 >> 0x18);
    uVar2 = (uint)uVar13 & 0xffff;
    uVar16 = nn::time::IsValidDate(uVar2,uVar22 & 0xff,uVar7 & 0xff);
    puVar4 = PTR_DAT_04bb6440;
    if (uVar10 < uVar11) {
      cVar17 = *PTR_DAT_04bb6440;
      uVar2 = uVar7 << 0x18 | (uVar22 & 0xff) << 0x10 | uVar2;
      if ((uVar16 & 1) == 0) {
        uVar2 = 0;
      }
      do {
        if (*puVar12 != 0) {
          do {
            if (cVar17 == '\0') {
              cVar17 = '\x01';
              *(undefined8 *)puVar8 = 0xffffffffffffffff;
              *(undefined8 *)(puVar8 + 8) = 0xffffffffffffffff;
              *puVar4 = 1;
              *(undefined4 *)(puVar8 + 0x50) = 0xffffffff;
              *(undefined8 *)(puVar8 + 0x10) = 0xffffffffffffffff;
              *(undefined8 *)(puVar8 + 0x18) = 0xffffffffffffffff;
              *(undefined8 *)(puVar8 + 0x20) = 0xffffffffffffffff;
              *(undefined8 *)(puVar8 + 0x28) = 0xffffffffffffffff;
              *(undefined8 *)(puVar8 + 0x30) = 0xffffffffffffffff;
              *(undefined8 *)(puVar8 + 0x38) = 0xffffffffffffffff;
              *(undefined8 *)(puVar8 + 0x40) = 0xffffffffffffffff;
              *(undefined8 *)(puVar8 + 0x48) = 0xffffffffffffffff;
              uVar10 = *puVar12;
            }
            else {
              uVar10 = *(uint *)(puVar8 + 0x3c);
              if (-1 < (int)uVar10) {
                if (((ushort *)((ulong)uVar10 + (long)puVar12) != (ushort *)0x0) &&
                   (uVar5 = *(ushort *)((ulong)uVar10 + (long)puVar12), uVar5 < 0x200)) {
                  puVar19 = (uint *)(param_1 + 0x2298) + (ulong)uVar5 * 6;
                  goto LAB_0279a664;
                }
                break;
              }
              if (uVar10 != 0xffffffff) break;
              uVar10 = *puVar12;
            }
            if ((uVar10 == 0) || (puVar19 = (uint *)(ulong)uVar10, puVar12 == puVar19)) break;
            lVar14 = 0xc;
            if (*(char *)((long)puVar12 + (10 - (long)puVar19)) != '\0') {
              lVar14 = 0x1c;
            }
            lVar14 = (long)puVar12 + (lVar14 - (long)puVar19);
            if (lVar14 == 0) break;
            uVar16 = (ulong)*(ushort *)((long)puVar12 + (8 - (long)puVar19));
            *(undefined4 *)(puVar8 + 0x3c) = 0xfffffffe;
            if (uVar16 == 0) break;
            piVar21 = (int *)(lVar14 + 4);
            while (piVar21[-1] != 0x54706054) {
              piVar21 = piVar21 + 2;
              uVar16 = uVar16 - 1;
              if (uVar16 == 0) goto LAB_0279a660;
            }
            iVar3 = 0;
            if (*piVar21 != -1) {
              iVar3 = *piVar21;
            }
            *(int *)(puVar8 + 0x3c) = iVar3;
            if (*puVar12 == 0) break;
          } while( true );
        }
LAB_0279a660:
        puVar19 = (uint *)(param_1 + 0x2298);
LAB_0279a664:
        puVar23 = puVar19 + uVar15;
        uVar22 = (uint)uVar15;
        uVar10 = uVar22 + 1;
        uVar15 = (ulong)uVar10;
        if (5 < uVar22) {
          puVar23 = puVar19;
        }
        *puVar23 = uVar2;
      } while (uVar10 != uVar11);
    }
    puVar4 = PTR_DAT_04bb6440;
    if (*param_2 < 8) {
      if (*puVar12 != 0) {
        cVar17 = *PTR_DAT_04bb6440;
        do {
          if (cVar17 == '\0') {
            cVar17 = '\x01';
            *(undefined8 *)puVar8 = 0xffffffffffffffff;
            *(undefined8 *)(puVar8 + 8) = 0xffffffffffffffff;
            *puVar4 = 1;
            *(undefined4 *)(puVar8 + 0x50) = 0xffffffff;
            *(undefined8 *)(puVar8 + 0x10) = 0xffffffffffffffff;
            *(undefined8 *)(puVar8 + 0x18) = 0xffffffffffffffff;
            *(undefined8 *)(puVar8 + 0x20) = 0xffffffffffffffff;
            *(undefined8 *)(puVar8 + 0x28) = 0xffffffffffffffff;
            *(undefined8 *)(puVar8 + 0x30) = 0xffffffffffffffff;
            *(undefined8 *)(puVar8 + 0x38) = 0xffffffffffffffff;
            *(undefined8 *)(puVar8 + 0x40) = 0xffffffffffffffff;
            *(undefined8 *)(puVar8 + 0x48) = 0xffffffffffffffff;
          }
          else {
            uVar10 = *(uint *)(puVar8 + 0x48);
            if (-1 < (int)uVar10) {
              lVar14 = (ulong)uVar10 + (long)puVar12;
              goto LAB_0279a768;
            }
            if (uVar10 != 0xffffffff) break;
          }
          puVar19 = (uint *)(ulong)*puVar12;
          lVar14 = 0;
          if ((*puVar12 == 0) || (puVar12 == puVar19)) goto LAB_0279a768;
          lVar14 = 0xc;
          if (*(char *)((long)puVar12 + (10 - (long)puVar19)) != '\0') {
            lVar14 = 0x1c;
          }
          lVar1 = (long)puVar12 + (lVar14 - (long)puVar19);
          if (lVar1 == 0) break;
          uVar15 = (ulong)*(ushort *)((long)puVar12 + (8 - (long)puVar19));
          *(undefined4 *)(puVar8 + 0x48) = 0xfffffffe;
          lVar14 = 0;
          if (uVar15 == 0) goto LAB_0279a768;
          piVar21 = (int *)(lVar1 + 4);
          while (piVar21[-1] != 0x45f320f2) {
            piVar21 = piVar21 + 2;
            uVar15 = uVar15 - 1;
            if (uVar15 == 0) {
              lVar14 = 0;
              goto LAB_0279a768;
            }
          }
          iVar3 = 0;
          if (*piVar21 != -1) {
            iVar3 = *piVar21;
          }
          *(int *)(puVar8 + 0x48) = iVar3;
        } while (*puVar12 != 0);
      }
      lVar14 = 0;
LAB_0279a768:
      lStack_68 = *(long *)PTR_PTR_04bb6438;
      if (lVar14 != 0) {
        lStack_68 = lVar14;
      }
      local_70 = PTR_DAT_04bb2020 + 0x10;
      FUN_027a3ce0(1,&local_70,param_2);
    }
  }
  return;
LAB_0279a134:
  if (-1 < (int)uVar15) {
    if (((ushort *)((long)puVar12 + uVar15) != (ushort *)0x0) &&
       (uVar5 = *(ushort *)((long)puVar12 + uVar15), uVar5 < 0x200)) {
      puVar19 = puVar23 + uVar5;
    }
    goto LAB_0279a1b8;
  }
  if ((((int)uVar15 != -1) || (puVar18 = (uint *)(ulong)*puVar12, *puVar12 == 0)) ||
     (puVar12 == puVar18)) goto LAB_0279a1b8;
  lVar14 = 0xc;
  if (*(char *)((long)puVar12 + (10 - (long)puVar18)) != '\0') {
    lVar14 = 0x1c;
  }
  lVar14 = (long)puVar12 + (lVar14 - (long)puVar18);
  if (lVar14 == 0) goto LAB_0279a1b8;
  uVar15 = (ulong)*(ushort *)((long)puVar12 + (8 - (long)puVar18));
  *(undefined4 *)(puVar8 + 0x3c) = 0xfffffffe;
  if (uVar15 == 0) goto LAB_0279a1b8;
  puVar18 = (uint *)(lVar14 + 4);
  while (puVar18[-1] != 0x54706054) {
    puVar18 = puVar18 + 2;
    uVar15 = uVar15 - 1;
    if (uVar15 == 0) goto LAB_0279a1b8;
  }
  uVar10 = 0;
  if (*puVar18 != 0xffffffff) {
    uVar10 = *puVar18;
  }
  uVar15 = (ulong)uVar10;
  *(uint *)(puVar8 + 0x3c) = uVar10;
  if (*puVar12 == 0) goto LAB_0279a1b8;
  goto LAB_0279a134;
LAB_0279a390:
  if (-1 < (int)uVar16) {
    if (((ushort *)((long)puVar12 + uVar16) != (ushort *)0x0) &&
       (uVar5 = *(ushort *)((long)puVar12 + uVar16), uVar5 < 0x200)) {
      puVar23 = puVar23 + uVar5;
    }
    goto LAB_0279a490;
  }
  if ((((int)uVar16 != -1) || (puVar19 = (uint *)(ulong)*puVar12, *puVar12 == 0)) ||
     (puVar12 == puVar19)) goto LAB_0279a490;
  lVar14 = 0xc;
  if (*(char *)((long)puVar12 + (10 - (long)puVar19)) != '\0') {
    lVar14 = 0x1c;
  }
  lVar14 = (long)puVar12 + (lVar14 - (long)puVar19);
  if (lVar14 == 0) goto LAB_0279a490;
  uVar16 = (ulong)*(ushort *)((long)puVar12 + (8 - (long)puVar19));
  *(undefined4 *)(puVar8 + 0x3c) = 0xfffffffe;
  if (uVar16 == 0) goto LAB_0279a490;
  puVar19 = (uint *)(lVar14 + 4);
  while (puVar19[-1] != 0x54706054) {
    puVar19 = puVar19 + 2;
    uVar16 = uVar16 - 1;
    if (uVar16 == 0) goto LAB_0279a490;
  }
  uVar11 = 0;
  if (*puVar19 != 0xffffffff) {
    uVar11 = *puVar19;
  }
  uVar16 = (ulong)uVar11;
  *(uint *)(puVar8 + 0x3c) = uVar11;
  if (*puVar12 == 0) goto LAB_0279a490;
  goto LAB_0279a390;
}

