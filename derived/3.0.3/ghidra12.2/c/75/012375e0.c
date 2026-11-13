
bool FUN_012375e0(uint *param_1)

{
  int iVar1;
  char *pcVar2;
  long lVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  undefined *puVar7;
  undefined *puVar8;
  char cVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  short *psVar13;
  uint *puVar14;
  ulong uVar15;
  char *pcVar16;
  int *piVar17;
  undefined8 uVar18;
  undefined8 local_30;
  long local_28;
  
  puVar8 = PTR_DAT_04bbbc78;
  puVar7 = PTR_DAT_04bbbc70;
  if (*param_1 != 0) {
    cVar9 = *PTR_DAT_04bbbc70;
    do {
      if (cVar9 == '\0') {
        cVar9 = '\x01';
        *(undefined8 *)puVar8 = 0xffffffffffffffff;
        *(undefined8 *)(puVar8 + 8) = 0xffffffffffffffff;
        *puVar7 = 1;
        *(undefined4 *)(puVar8 + 0x60) = 0xffffffff;
        *(undefined8 *)(puVar8 + 0x10) = 0xffffffffffffffff;
        *(undefined8 *)(puVar8 + 0x18) = 0xffffffffffffffff;
        *(undefined8 *)(puVar8 + 0x20) = 0xffffffffffffffff;
        *(undefined8 *)(puVar8 + 0x28) = 0xffffffffffffffff;
        *(undefined8 *)(puVar8 + 0x30) = 0xffffffffffffffff;
        *(undefined8 *)(puVar8 + 0x38) = 0xffffffffffffffff;
        *(undefined8 *)(puVar8 + 0x40) = 0xffffffffffffffff;
        *(undefined8 *)(puVar8 + 0x48) = 0xffffffffffffffff;
        *(undefined8 *)(puVar8 + 0x50) = 0xffffffffffffffff;
        *(undefined8 *)(puVar8 + 0x58) = 0xffffffffffffffff;
      }
      else {
        uVar5 = *(uint *)(puVar8 + 0x60);
        if (-1 < (int)uVar5) {
          pcVar16 = (char *)((ulong)uVar5 + (long)param_1);
          goto LAB_012376dc;
        }
        if (uVar5 != 0xffffffff) break;
      }
      puVar14 = (uint *)(ulong)*param_1;
      pcVar16 = (char *)0x0;
      if ((*param_1 == 0) || (param_1 == puVar14)) goto LAB_012376dc;
      lVar10 = 0xc;
      if (*(char *)((long)param_1 + (10 - (long)puVar14)) != '\0') {
        lVar10 = 0x1c;
      }
      lVar10 = (long)param_1 + (lVar10 - (long)puVar14);
      if (lVar10 == 0) break;
      uVar15 = (ulong)*(ushort *)((long)param_1 + (8 - (long)puVar14));
      *(undefined4 *)(puVar8 + 0x60) = 0xfffffffe;
      pcVar16 = (char *)0x0;
      if (uVar15 == 0) goto LAB_012376dc;
      piVar17 = (int *)(lVar10 + 4);
      while (piVar17[-1] != 0x48ef0398) {
        piVar17 = piVar17 + 2;
        uVar15 = uVar15 - 1;
        if (uVar15 == 0) {
          pcVar16 = (char *)0x0;
          goto LAB_012376dc;
        }
      }
      iVar1 = 0;
      if (*piVar17 != -1) {
        iVar1 = *piVar17;
      }
      *(int *)(puVar8 + 0x60) = iVar1;
    } while (*param_1 != 0);
  }
  pcVar16 = (char *)0x0;
LAB_012376dc:
  pcVar2 = *(char **)PTR_PTR_04bbbc90;
  if (pcVar16 != (char *)0x0) {
    pcVar2 = pcVar16;
  }
  if (*pcVar2 == '\0') {
    return false;
  }
  if (*param_1 != 0) {
    cVar9 = *puVar7;
    do {
      if (cVar9 == '\0') {
        cVar9 = '\x01';
        *(undefined8 *)puVar8 = 0xffffffffffffffff;
        *(undefined8 *)(puVar8 + 8) = 0xffffffffffffffff;
        *puVar7 = 1;
        *(undefined4 *)(puVar8 + 0x60) = 0xffffffff;
        *(undefined8 *)(puVar8 + 0x10) = 0xffffffffffffffff;
        *(undefined8 *)(puVar8 + 0x18) = 0xffffffffffffffff;
        *(undefined8 *)(puVar8 + 0x20) = 0xffffffffffffffff;
        *(undefined8 *)(puVar8 + 0x28) = 0xffffffffffffffff;
        *(undefined8 *)(puVar8 + 0x30) = 0xffffffffffffffff;
        *(undefined8 *)(puVar8 + 0x38) = 0xffffffffffffffff;
        *(undefined8 *)(puVar8 + 0x40) = 0xffffffffffffffff;
        *(undefined8 *)(puVar8 + 0x48) = 0xffffffffffffffff;
        *(undefined8 *)(puVar8 + 0x50) = 0xffffffffffffffff;
        *(undefined8 *)(puVar8 + 0x58) = 0xffffffffffffffff;
      }
      else {
        uVar5 = *(uint *)(puVar8 + 0x54);
        if (-1 < (int)uVar5) {
          pcVar16 = (char *)((ulong)uVar5 + (long)param_1);
          goto LAB_012377cc;
        }
        if (uVar5 != 0xffffffff) break;
      }
      puVar14 = (uint *)(ulong)*param_1;
      pcVar16 = (char *)0x0;
      if ((*param_1 == 0) || (param_1 == puVar14)) goto LAB_012377cc;
      lVar10 = 0xc;
      if (*(char *)((long)param_1 + (10 - (long)puVar14)) != '\0') {
        lVar10 = 0x1c;
      }
      lVar10 = (long)param_1 + (lVar10 - (long)puVar14);
      if (lVar10 == 0) break;
      uVar15 = (ulong)*(ushort *)((long)param_1 + (8 - (long)puVar14));
      *(undefined4 *)(puVar8 + 0x54) = 0xfffffffe;
      pcVar16 = (char *)0x0;
      if (uVar15 == 0) goto LAB_012377cc;
      piVar17 = (int *)(lVar10 + 4);
      while (piVar17[-1] != 0x39b5a93d) {
        piVar17 = piVar17 + 2;
        uVar15 = uVar15 - 1;
        if (uVar15 == 0) {
          pcVar16 = (char *)0x0;
          goto LAB_012377cc;
        }
      }
      iVar1 = 0;
      if (*piVar17 != -1) {
        iVar1 = *piVar17;
      }
      *(int *)(puVar8 + 0x54) = iVar1;
    } while (*param_1 != 0);
  }
  pcVar16 = (char *)0x0;
LAB_012377cc:
  pcVar2 = PTR_DAT_04c47fb0;
  if (pcVar16 != (char *)0x0) {
    pcVar2 = pcVar16;
  }
  if (*pcVar2 == '\0') {
    return false;
  }
  local_28 = CONCAT44(local_28._4_4_,10);
  if (*param_1 != 0) {
    cVar9 = *puVar7;
    do {
      if (cVar9 == '\0') {
        cVar9 = '\x01';
        *(undefined8 *)puVar8 = 0xffffffffffffffff;
        *(undefined8 *)(puVar8 + 8) = 0xffffffffffffffff;
        *puVar7 = 1;
        *(undefined4 *)(puVar8 + 0x60) = 0xffffffff;
        *(undefined8 *)(puVar8 + 0x10) = 0xffffffffffffffff;
        *(undefined8 *)(puVar8 + 0x18) = 0xffffffffffffffff;
        *(undefined8 *)(puVar8 + 0x20) = 0xffffffffffffffff;
        *(undefined8 *)(puVar8 + 0x28) = 0xffffffffffffffff;
        *(undefined8 *)(puVar8 + 0x30) = 0xffffffffffffffff;
        *(undefined8 *)(puVar8 + 0x38) = 0xffffffffffffffff;
        *(undefined8 *)(puVar8 + 0x40) = 0xffffffffffffffff;
        *(undefined8 *)(puVar8 + 0x48) = 0xffffffffffffffff;
        *(undefined8 *)(puVar8 + 0x50) = 0xffffffffffffffff;
        *(undefined8 *)(puVar8 + 0x58) = 0xffffffffffffffff;
      }
      else {
        uVar5 = *(uint *)(puVar8 + 0x58);
        if (-1 < (int)uVar5) {
          if (((ulong)uVar5 + (long)param_1 != 0) &&
             ((*(byte *)((ulong)uVar5 + (long)param_1 + 1) >> 2 & 1) != 0)) {
            if (*(int *)(PTR_DAT_04bc3a80 + 0x38) == -0x24a26848) {
              return true;
            }
            if (*(int *)(PTR_DAT_04bc3a80 + 0x38) == -0x17df00c3) {
              return true;
            }
            psVar13 = (short *)(*(long *)PTR_DAT_04bb32e8 + 0x4068);
            if (*psVar13 == 0) {
              local_30 = *(undefined8 *)(*(long *)PTR_DAT_04bb32e8 + 0x4060);
              if ((char)(local_30 >> 0x20) < '\x05') {
                lVar10 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_30);
                local_28 = lVar10 + -0x15180;
                local_30 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_28);
              }
              uVar15 = local_30 >> 0x30;
              local_30._0_6_ = CONCAT24(5,(undefined4)local_30);
              local_30 = CONCAT26((short)uVar15,(undefined6)local_30) & 0xff00ffffffffffff;
              psVar13 = (short *)&local_30;
            }
            uVar5 = (uint)*(undefined8 *)psVar13 >> 0x10 & 0xff;
            iVar1 = (int)(uint)*(undefined8 *)psVar13 >> 0x18;
            if (uVar5 == 1) {
              return iVar1 < 7;
            }
            if (uVar5 == 0xc) {
              return 0xe < iVar1;
            }
            return false;
          }
          break;
        }
        if (uVar5 != 0xffffffff) break;
      }
      lVar10 = (long)param_1 - (ulong)*param_1;
      if ((*param_1 == 0) || (lVar10 == 0)) break;
      lVar3 = 0xc;
      if (*(char *)(lVar10 + 10) != '\0') {
        lVar3 = 0x1c;
      }
      if (lVar3 + lVar10 == 0) break;
      uVar15 = (ulong)*(ushort *)(lVar10 + 8);
      *(undefined4 *)(puVar8 + 0x58) = 0xfffffffe;
      if (uVar15 == 0) break;
      piVar17 = (int *)(lVar3 + lVar10 + 4);
      while (piVar17[-1] != 0x623dc307) {
        piVar17 = piVar17 + 2;
        uVar15 = uVar15 - 1;
        if (uVar15 == 0) goto LAB_012379c4;
      }
      iVar1 = 0;
      if (*piVar17 != -1) {
        iVar1 = *piVar17;
      }
      *(int *)(puVar8 + 0x58) = iVar1;
      if (*param_1 == 0) break;
    } while( true );
  }
LAB_012379c4:
  uVar18 = *(undefined8 *)PTR_DAT_04bb30a0;
  local_30 = FUN_00a8c31c(uVar18);
  if ((char)(local_30 >> 0x20) < '\x05') {
    lVar10 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_30);
    local_28 = lVar10 + -0x15180;
    local_30 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_28);
  }
  uVar11 = local_30 >> 0x10;
  uVar15 = local_30 >> 0x30;
  uVar12 = local_30 >> 0x18;
  local_30._0_6_ = CONCAT24(5,(undefined4)local_30);
  local_30 = CONCAT26((short)uVar15,(undefined6)local_30) & 0xff00ffffffffffff;
  cVar9 = FUN_00a8ae20(uVar18,uVar11,uVar12,6);
  uVar5 = *param_1;
  if (uVar5 == 0) {
    return true;
  }
  if (param_1 == (uint *)(ulong)uVar5) {
    return true;
  }
  puVar14 = (uint *)((long)param_1 - (long)(ulong)uVar5);
  uVar5 = *puVar14;
  if (uVar5 == 0) {
    return true;
  }
  uVar6 = puVar14[1];
  if ((uVar6 != 0) && ((ulong)(ushort)puVar14[2] != 0)) {
    lVar10 = 0xc;
    if (*(char *)((long)puVar14 + 10) != '\0') {
      lVar10 = 0x1c;
    }
    lVar10 = (long)puVar14 + lVar10 + (ulong)(ushort)puVar14[2] * 8;
    if (lVar10 != 0) {
      uVar4 = 0;
      if ((ulong)uVar6 != 0) {
        uVar4 = (uint)((ulong)((long)param_1 - lVar10) / (ulong)uVar6);
      }
      if (uVar5 <= uVar4) {
        uVar4 = 0xffffffff;
      }
      if ((uVar4 < DAT_051503b8) && (*(short *)(DAT_051503c0 + (long)(int)uVar4 * 2) == 0x18)) {
        return cVar9 == '\0';
      }
    }
  }
  uVar15 = (ulong)puVar14[1];
  if (puVar14[1] == 0) {
    return true;
  }
  if ((ulong)(ushort)puVar14[2] != 0) {
    lVar10 = 0xc;
    if (*(char *)((long)puVar14 + 10) != '\0') {
      lVar10 = 0x1c;
    }
    lVar10 = (long)puVar14 + lVar10 + (ulong)(ushort)puVar14[2] * 8;
    if (lVar10 != 0) {
      uVar6 = 0;
      if (uVar15 != 0) {
        uVar6 = (uint)((ulong)((long)param_1 - lVar10) / uVar15);
      }
      if (uVar5 <= uVar6) {
        uVar6 = 0xffffffff;
      }
      if ((uVar6 < DAT_051503b8) && (*(short *)(DAT_051503c0 + (long)(int)uVar6 * 2) == 0x19)) {
        return cVar9 == '\x01';
      }
    }
  }
  if ((ulong)(ushort)puVar14[2] != 0) {
    lVar10 = 0xc;
    if (*(char *)((long)puVar14 + 10) != '\0') {
      lVar10 = 0x1c;
    }
    lVar10 = (long)puVar14 + lVar10 + (ulong)(ushort)puVar14[2] * 8;
    if (lVar10 != 0) {
      uVar6 = 0;
      if (uVar15 != 0) {
        uVar6 = (uint)((ulong)((long)param_1 - lVar10) / uVar15);
      }
      if (uVar5 <= uVar6) {
        uVar6 = 0xffffffff;
      }
      if ((uVar6 < DAT_051503b8) && (*(short *)(DAT_051503c0 + (long)(int)uVar6 * 2) == 0x1a)) {
        return cVar9 == '\x02';
      }
    }
  }
  if ((ulong)(ushort)puVar14[2] != 0) {
    lVar10 = 0xc;
    if (*(char *)((long)puVar14 + 10) != '\0') {
      lVar10 = 0x1c;
    }
    lVar10 = (long)puVar14 + lVar10 + (ulong)(ushort)puVar14[2] * 8;
    if (lVar10 != 0) {
      uVar6 = 0;
      if (uVar15 != 0) {
        uVar6 = (uint)((ulong)((long)param_1 - lVar10) / uVar15);
      }
      if (uVar5 <= uVar6) {
        uVar6 = 0xffffffff;
      }
      if ((uVar6 < DAT_051503b8) && (*(short *)(DAT_051503c0 + (long)(int)uVar6 * 2) == 0x1b)) {
        return cVar9 == '\x03';
      }
    }
  }
  if ((ulong)(ushort)puVar14[2] != 0) {
    lVar10 = 0xc;
    if (*(char *)((long)puVar14 + 10) != '\0') {
      lVar10 = 0x1c;
    }
    lVar10 = (long)puVar14 + lVar10 + (ulong)(ushort)puVar14[2] * 8;
    if (lVar10 != 0) {
      uVar6 = 0;
      if (uVar15 != 0) {
        uVar6 = (uint)((ulong)((long)param_1 - lVar10) / uVar15);
      }
      if (uVar5 <= uVar6) {
        uVar6 = 0xffffffff;
      }
      if ((uVar6 < DAT_051503b8) && (*(short *)(DAT_051503c0 + (long)(int)uVar6 * 2) == 0x1c)) {
        return cVar9 == '\x04';
      }
    }
  }
  if ((ulong)(ushort)puVar14[2] != 0) {
    lVar10 = 0xc;
    if (*(char *)((long)puVar14 + 10) != '\0') {
      lVar10 = 0x1c;
    }
    lVar10 = (long)puVar14 + lVar10 + (ulong)(ushort)puVar14[2] * 8;
    if (lVar10 != 0) {
      uVar6 = 0;
      if (uVar15 != 0) {
        uVar6 = (uint)((ulong)((long)param_1 - lVar10) / uVar15);
      }
      if (uVar5 <= uVar6) {
        uVar6 = 0xffffffff;
      }
      if ((uVar6 < DAT_051503b8) && (*(short *)(DAT_051503c0 + (long)(int)uVar6 * 2) == 0x1d)) {
        return cVar9 == '\x05';
      }
    }
  }
  if ((ulong)(ushort)puVar14[2] == 0) {
    return true;
  }
  lVar10 = 0xc;
  if (*(char *)((long)puVar14 + 10) != '\0') {
    lVar10 = 0x1c;
  }
  lVar10 = (long)puVar14 + lVar10 + (ulong)(ushort)puVar14[2] * 8;
  if (lVar10 == 0) {
    return true;
  }
  uVar6 = 0;
  if (uVar15 != 0) {
    uVar6 = (uint)((ulong)((long)param_1 - lVar10) / uVar15);
  }
  if (uVar5 <= uVar6) {
    uVar6 = 0xffffffff;
  }
  if (DAT_051503b8 <= uVar6) {
    return true;
  }
  if (*(short *)(DAT_051503c0 + (long)(int)uVar6 * 2) == 0x1e) {
    return cVar9 == '\x06';
  }
  return true;
}

