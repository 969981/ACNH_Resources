
/* WARNING: Removing unreachable block (ram,0x02af1120) */
/* WARNING: Removing unreachable block (ram,0x02af0dd0) */
/* WARNING: Removing unreachable block (ram,0x02af18c0) */

void FUN_02af0b10(long param_1,ushort param_2)

{
  long lVar1;
  uint uVar2;
  long lVar3;
  bool bVar4;
  uint *puVar5;
  byte *pbVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  int iVar10;
  int *piVar11;
  char cVar12;
  char *pcVar13;
  undefined8 *puVar14;
  uint *puVar15;
  ushort uVar16;
  long *plVar17;
  long lVar18;
  uint uVar19;
  uint uVar20;
  uint *puVar21;
  ushort uVar22;
  uint uVar23;
  uint *puVar24;
  uint *puVar25;
  ulong uVar26;
  undefined8 local_68;
  long lStack_60;
  uint *local_58;
  uint local_44;
  
  puVar8 = PTR_DAT_04bc4850;
  puVar7 = PTR_DAT_04bc4848;
  lVar18 = *(long *)PTR_DAT_04bb5008;
  uVar23 = (uint)*(ushort *)(lVar18 + 0x9f0);
  uVar16 = *(short *)(lVar18 + 0x9f2) + 1;
  plVar17 = (long *)PTR_DAT_04bb5008;
  if (*(ushort *)(lVar18 + 0x9f0) != uVar16) {
    pcVar13 = PTR_DAT_04bb5be0;
    puVar14 = (undefined8 *)PTR_DAT_04bb5be8;
    do {
      uVar20 = uVar23 & 0xffff;
      uVar23 = uVar20 - *(ushort *)(lVar18 + 0x9f0);
      if (((uVar23 < *(uint *)(lVar18 + 0x9d0)) &&
          (puVar24 = *(uint **)(*(long *)(lVar18 + 0x9d8) + (long)(int)uVar23 * 8),
          puVar24 != (uint *)0x0)) || (puVar24 = (uint *)puVar7, (*puVar8 & 1) != 0)) {
        uVar23 = *puVar24;
      }
      else {
        iVar10 = __cxa_guard_acquire();
        if (iVar10 != 0) {
          *(undefined4 *)puVar7 = 0;
          __cxa_guard_release(puVar8);
        }
        uVar23 = *(uint *)puVar7;
        plVar17 = (long *)PTR_DAT_04bb5008;
        pcVar13 = PTR_DAT_04bb5be0;
        puVar14 = (undefined8 *)PTR_DAT_04bb5be8;
      }
      if (uVar23 != 0) {
        cVar12 = *pcVar13;
        do {
          puVar25 = (uint *)(ulong)uVar23;
          if (cVar12 != '\0') {
            uVar23 = *(uint *)(puVar14 + 2);
            if (-1 < (int)uVar23) {
              uVar19 = 0;
              if (((ushort *)((ulong)uVar23 + (long)puVar24) == (ushort *)0x0) ||
                 (uVar22 = *(ushort *)((ulong)uVar23 + (long)puVar24), uVar19 = (uint)uVar22,
                 uVar22 < 0x200)) goto LAB_02af0cd0;
              goto LAB_02af0e90;
            }
            if (uVar23 == 0xffffffff) {
              uVar19 = 0;
              if (puVar25 != (uint *)0x0) goto LAB_02af0c30;
              goto LAB_02af0cd0;
            }
LAB_02af0ca8:
            uVar19 = 0;
            uVar23 = *puVar24;
            uVar2 = 0;
            if (uVar23 == 0) goto LAB_02af0d50;
LAB_02af0cd8:
            uVar19 = uVar2;
            uVar26 = (ulong)*(uint *)((long)puVar14 + 0xc);
            goto LAB_02af0cdc;
          }
          cVar12 = '\x01';
          *puVar14 = 0xffffffffffffffff;
          puVar14[1] = 0xffffffffffffffff;
          *pcVar13 = '\x01';
          *(undefined4 *)(puVar14 + 4) = 0xffffffff;
          puVar14[2] = 0xffffffffffffffff;
          puVar14[3] = 0xffffffffffffffff;
          puVar25 = (uint *)(ulong)*puVar24;
          uVar19 = 0;
          if (puVar25 == (uint *)0x0) {
LAB_02af0cd0:
            uVar23 = *puVar24;
            uVar2 = uVar19;
            if (uVar23 != 0) goto LAB_02af0cd8;
            goto LAB_02af0d50;
          }
LAB_02af0c30:
          uVar19 = 0;
          if (puVar24 == puVar25) goto LAB_02af0cd0;
          lVar3 = 0xc;
          if (*(char *)((long)puVar24 + (10 - (long)puVar25)) != '\0') {
            lVar3 = 0x1c;
          }
          lVar3 = (long)puVar24 + (lVar3 - (long)puVar25);
          if (lVar3 == 0) goto LAB_02af0ca8;
          uVar26 = (ulong)*(ushort *)((long)puVar24 + (8 - (long)puVar25));
          *(undefined4 *)(puVar14 + 2) = 0xfffffffe;
          uVar19 = 0;
          if (uVar26 == 0) goto LAB_02af0cd0;
          piVar11 = (int *)(lVar3 + 4);
          while (piVar11[-1] != 0x54706054) {
            piVar11 = piVar11 + 2;
            uVar26 = uVar26 - 1;
            if (uVar26 == 0) {
              uVar19 = 0;
              goto LAB_02af0cd0;
            }
          }
          iVar10 = 0;
          if (*piVar11 != -1) {
            iVar10 = *piVar11;
          }
          *(int *)(puVar14 + 2) = iVar10;
          uVar23 = *puVar24;
        } while (uVar23 != 0);
      }
      uVar19 = 0;
LAB_02af0d50:
      uVar22 = 0;
LAB_02af0d54:
      if ((uVar19 < 0x200) && (uVar22 != param_2)) {
        lVar3 = (ulong)(uVar19 >> 5) * 4;
        *(uint *)(param_1 + 0x58 + lVar3) =
             *(uint *)(param_1 + 0x58 + lVar3) & (1 << (ulong)(uVar19 & 0x1f) ^ 0xffffffffU);
      }
      uVar19 = uVar20;
      if (uVar20 <= *(ushort *)(lVar18 + 0x9f2)) {
        uVar19 = (uint)*(ushort *)(lVar18 + 0x9f2);
      }
      uVar23 = uVar20;
      do {
        while( true ) {
          if (uVar19 == uVar23) {
            uVar23 = uVar20 + 1;
            goto LAB_02af0ba8;
          }
          uVar2 = (uVar23 + 1 & 0xffff) - (uint)*(ushort *)(lVar18 + 0x9f0);
          if (uVar2 < *(uint *)(lVar18 + 0x9d0)) break;
          uVar23 = uVar23 + 1;
        }
        uVar23 = uVar23 + 1;
      } while (*(long *)(*(long *)(lVar18 + 0x9d8) + (long)(int)uVar2 * 8) == 0);
LAB_02af0ba8:
    } while ((uint)uVar16 != (uVar23 & 0xffff));
LAB_02af0e90:
    lVar18 = *plVar17;
  }
  puVar8 = PTR_DAT_04bc4860;
  puVar7 = PTR_DAT_04bc4858;
  uVar16 = *(short *)(lVar18 + 0xbf2) + 1;
  uVar23 = (uint)*(ushort *)(lVar18 + 0xbf0);
  if (*(ushort *)(lVar18 + 0xbf0) != uVar16) {
    pcVar13 = PTR_DAT_04bc4630;
    puVar14 = (undefined8 *)PTR_DAT_04bc4638;
    uVar9 = local_68;
    do {
      local_68 = (undefined **)uVar9;
      uVar20 = uVar23 & 0xffff;
      uVar23 = uVar20 - *(ushort *)(lVar18 + 0xbf0);
      if (((uVar23 < *(uint *)(lVar18 + 0xbd0)) &&
          (puVar24 = *(uint **)(*(long *)(lVar18 + 0xbd8) + (long)(int)uVar23 * 8),
          puVar24 != (uint *)0x0)) || (puVar24 = (uint *)puVar7, (*puVar8 & 1) != 0)) {
        uVar23 = *puVar24;
        uVar9 = local_68;
      }
      else {
        iVar10 = __cxa_guard_acquire();
        if (iVar10 != 0) {
          *(undefined4 *)puVar7 = 0;
          __cxa_guard_release(puVar8);
        }
        uVar23 = *(uint *)puVar7;
        plVar17 = (long *)PTR_DAT_04bb5008;
        pcVar13 = PTR_DAT_04bc4630;
        puVar14 = (undefined8 *)PTR_DAT_04bc4638;
        uVar9 = local_68;
      }
      local_68._4_4_ = (undefined4)((ulong)uVar9 >> 0x20);
      if (uVar23 != 0) {
        cVar12 = *pcVar13;
        do {
          puVar25 = (uint *)(ulong)uVar23;
          if (cVar12 != '\0') {
            uVar23 = *(uint *)(puVar14 + 2);
            if (-1 < (int)uVar23) {
              uVar19 = 0;
              if (((ushort *)((ulong)uVar23 + (long)puVar24) == (ushort *)0x0) ||
                 (uVar22 = *(ushort *)((ulong)uVar23 + (long)puVar24), uVar19 = (uint)uVar22,
                 uVar22 < 0x200)) goto LAB_02af1020;
              goto LAB_02af11e0;
            }
            if (uVar23 == 0xffffffff) {
              uVar19 = 0;
              if (puVar25 != (uint *)0x0) goto LAB_02af0f7c;
              goto LAB_02af1020;
            }
LAB_02af0ff8:
            uVar19 = 0;
            uVar23 = *puVar24;
            uVar2 = 0;
            if (uVar23 == 0) goto LAB_02af10a0;
LAB_02af1028:
            uVar19 = uVar2;
            uVar26 = (ulong)*(uint *)(puVar14 + 1);
            goto LAB_02af102c;
          }
          cVar12 = '\x01';
          *puVar14 = 0xffffffffffffffff;
          puVar14[1] = 0xffffffffffffffff;
          *pcVar13 = '\x01';
          puVar14[2] = 0xffffffffffffffff;
          puVar14[3] = 0xffffffffffffffff;
          puVar25 = (uint *)(ulong)*puVar24;
          uVar19 = 0;
          if (puVar25 == (uint *)0x0) {
LAB_02af1020:
            uVar23 = *puVar24;
            uVar2 = uVar19;
            if (uVar23 != 0) goto LAB_02af1028;
            goto LAB_02af10a0;
          }
LAB_02af0f7c:
          uVar19 = 0;
          if (puVar24 == puVar25) goto LAB_02af1020;
          lVar3 = 0xc;
          if (*(char *)((long)puVar24 + (10 - (long)puVar25)) != '\0') {
            lVar3 = 0x1c;
          }
          lVar3 = (long)puVar24 + (lVar3 - (long)puVar25);
          if (lVar3 == 0) goto LAB_02af0ff8;
          uVar26 = (ulong)*(ushort *)((long)puVar24 + (8 - (long)puVar25));
          *(undefined4 *)(puVar14 + 2) = 0xfffffffe;
          uVar19 = 0;
          if (uVar26 == 0) goto LAB_02af1020;
          piVar11 = (int *)(lVar3 + 4);
          while (piVar11[-1] != 0x54706054) {
            piVar11 = piVar11 + 2;
            uVar26 = uVar26 - 1;
            if (uVar26 == 0) {
              uVar19 = 0;
              goto LAB_02af1020;
            }
          }
          iVar10 = 0;
          if (*piVar11 != -1) {
            iVar10 = *piVar11;
          }
          *(int *)(puVar14 + 2) = iVar10;
          uVar23 = *puVar24;
        } while (uVar23 != 0);
      }
      uVar19 = 0;
LAB_02af10a0:
      uVar22 = 0;
LAB_02af10a4:
      if ((uVar19 < 0x200) && (uVar22 != param_2)) {
        lVar3 = (ulong)(uVar19 >> 5) * 4;
        *(uint *)(param_1 + 0xa0 + lVar3) =
             *(uint *)(param_1 + 0xa0 + lVar3) & (1 << (ulong)(uVar19 & 0x1f) ^ 0xffffffffU);
      }
      uVar19 = uVar20;
      if (uVar20 <= *(ushort *)(lVar18 + 0xbf2)) {
        uVar19 = (uint)*(ushort *)(lVar18 + 0xbf2);
      }
      uVar23 = uVar20;
      do {
        while( true ) {
          if (uVar19 == uVar23) {
            uVar23 = uVar20 + 1;
            goto LAB_02af0ef8;
          }
          uVar2 = (uVar23 + 1 & 0xffff) - (uint)*(ushort *)(lVar18 + 0xbf0);
          if (uVar2 < *(uint *)(lVar18 + 0xbd0)) break;
          uVar23 = uVar23 + 1;
        }
        uVar23 = uVar23 + 1;
      } while (*(long *)(*(long *)(lVar18 + 0xbd8) + (long)(int)uVar2 * 8) == 0);
LAB_02af0ef8:
    } while ((uint)uVar16 != (uVar23 & 0xffff));
LAB_02af11e0:
    lVar18 = *plVar17;
  }
  puVar8 = PTR_DAT_04bc4628;
  puVar7 = PTR_DAT_04bc4620;
  uVar23 = (uint)param_2 - (uint)*(ushort *)(lVar18 + 0x7f0);
  if (*(uint *)(lVar18 + 2000) <= uVar23) {
    return;
  }
  puVar24 = *(uint **)(*(long *)(lVar18 + 0x7d8) + (long)(int)uVar23 * 8);
  if (puVar24 == (uint *)0x0) {
    return;
  }
  uVar23 = *puVar24;
  if (uVar23 != 0) {
    cVar12 = *PTR_DAT_04bc4620;
    do {
      if (cVar12 == '\0') {
        cVar12 = '\x01';
        *(undefined8 *)puVar8 = 0xffffffffffffffff;
        *(undefined8 *)(puVar8 + 8) = 0xffffffffffffffff;
        *puVar7 = 1;
        *(undefined4 *)(puVar8 + 0x20) = 0xffffffff;
        *(undefined8 *)(puVar8 + 0x10) = 0xffffffffffffffff;
        *(undefined8 *)(puVar8 + 0x18) = 0xffffffffffffffff;
        uVar23 = *puVar24;
      }
      else {
        uVar20 = *(uint *)(puVar8 + 8);
        if (-1 < (int)uVar20) {
          if ((ushort *)((ulong)uVar20 + (long)puVar24) != (ushort *)0x0) {
            uVar23 = (uint)*(ushort *)((ulong)uVar20 + (long)puVar24);
            goto LAB_02af12fc;
          }
          break;
        }
        if (uVar20 != 0xffffffff) break;
      }
      puVar25 = (uint *)(ulong)uVar23;
      uVar23 = 0;
      if ((puVar25 == (uint *)0x0) || (uVar23 = 0, puVar24 == puVar25)) goto LAB_02af12fc;
      lVar3 = 0xc;
      if (*(char *)((long)puVar24 + (10 - (long)puVar25)) != '\0') {
        lVar3 = 0x1c;
      }
      lVar3 = (long)puVar24 + (lVar3 - (long)puVar25);
      uVar23 = 0;
      if (lVar3 == 0) goto LAB_02af12fc;
      uVar26 = (ulong)*(ushort *)((long)puVar24 + (8 - (long)puVar25));
      *(undefined4 *)(puVar8 + 8) = 0xfffffffe;
      if (uVar26 == 0) break;
      piVar11 = (int *)(lVar3 + 4);
      while (piVar11[-1] != -0x37919f2b) {
        piVar11 = piVar11 + 2;
        uVar26 = uVar26 - 1;
        if (uVar26 == 0) goto LAB_02af12f8;
      }
      iVar10 = 0;
      if (*piVar11 != -1) {
        iVar10 = *piVar11;
      }
      *(int *)(puVar8 + 8) = iVar10;
      uVar23 = *puVar24;
      if (uVar23 == 0) break;
    } while( true );
  }
LAB_02af12f8:
  uVar23 = 0;
LAB_02af12fc:
  puVar8 = PTR_DAT_04bc4648;
  puVar7 = PTR_DAT_04bc4640;
  uVar16 = *(ushort *)(lVar18 + 0xdf0);
  uVar20 = (uint)uVar16;
  uVar23 = uVar23 - uVar16;
  if (uVar23 < *(uint *)(lVar18 + 0xdd0)) {
    puVar25 = *(uint **)(*(long *)(lVar18 + 0xdd8) + (long)(int)uVar23 * 8);
    if (puVar25 == (uint *)0x0) goto LAB_02af13fc;
    uVar23 = *puVar25;
    if (uVar23 != 0) {
      cVar12 = *PTR_DAT_04bc4640;
      do {
        puVar15 = (uint *)(ulong)uVar23;
        if (cVar12 == '\0') {
          cVar12 = '\x01';
          *(undefined8 *)puVar8 = 0xffffffffffffffff;
          *(undefined8 *)(puVar8 + 8) = 0xffffffffffffffff;
          *puVar7 = 1;
          *(undefined8 *)(puVar8 + 0x20) = 0xffffffffffffffff;
          *(undefined4 *)(puVar8 + 0x28) = 0xffffffff;
          *(undefined8 *)(puVar8 + 0x10) = 0xffffffffffffffff;
          *(undefined8 *)(puVar8 + 0x18) = 0xffffffffffffffff;
          puVar15 = (uint *)(ulong)*puVar25;
        }
        else {
          uVar23 = *(uint *)(puVar8 + 0x1c);
          if (-1 < (int)uVar23) {
            if (((char *)((ulong)uVar23 + (long)puVar25) != (char *)0x0) &&
               (*(char *)((ulong)uVar23 + (long)puVar25) != '\0')) {
              uVar23 = *(uint *)(puVar8 + 0x14);
              goto LAB_02af1ab4;
            }
            break;
          }
          if (uVar23 != 0xffffffff) break;
        }
        if ((puVar15 == (uint *)0x0) || (puVar25 == puVar15)) break;
        lVar3 = 0xc;
        if (*(char *)((long)puVar25 + (10 - (long)puVar15)) != '\0') {
          lVar3 = 0x1c;
        }
        lVar3 = (long)puVar25 + (lVar3 - (long)puVar15);
        if (lVar3 == 0) break;
        uVar26 = (ulong)*(ushort *)((long)puVar25 + (8 - (long)puVar15));
        *(undefined4 *)(puVar8 + 0x1c) = 0xfffffffe;
        if (uVar26 == 0) break;
        piVar11 = (int *)(lVar3 + 4);
        while (piVar11[-1] != -0x8a220af) {
          piVar11 = piVar11 + 2;
          uVar26 = uVar26 - 1;
          if (uVar26 == 0) goto LAB_02af1b24;
        }
        iVar10 = 0;
        if (*piVar11 != -1) {
          iVar10 = *piVar11;
        }
        *(int *)(puVar8 + 0x1c) = iVar10;
        uVar23 = *puVar25;
        if (uVar23 == 0) break;
      } while( true );
    }
LAB_02af1b24:
    bVar4 = false;
    pcVar13 = PTR_DAT_04bc4640;
    puVar14 = (undefined8 *)PTR_DAT_04bc4648;
    puVar15 = (uint *)PTR_DAT_04bc46e8;
    puVar5 = (uint *)PTR_DAT_04bc4818;
    pbVar6 = PTR_DAT_04bc4820;
  }
  else {
    puVar25 = (uint *)0x0;
LAB_02af13fc:
    bVar4 = true;
    pcVar13 = PTR_DAT_04bc4640;
    puVar14 = (undefined8 *)PTR_DAT_04bc4648;
    puVar15 = (uint *)PTR_DAT_04bc46e8;
    puVar5 = (uint *)PTR_DAT_04bc4818;
    pbVar6 = PTR_DAT_04bc4820;
  }
  PTR_DAT_04bc4640 = pcVar13;
  PTR_DAT_04bc4648 = (undefined *)puVar14;
  PTR_DAT_04bc46e8 = (undefined *)puVar15;
  PTR_DAT_04bc4818 = (undefined *)puVar5;
  PTR_DAT_04bc4820 = pbVar6;
  if (param_2 == 4) {
    puVar24 = (uint *)(param_1 + 0xe8);
    uVar23 = *(uint *)(param_1 + 0xec);
    *(undefined8 *)(param_1 + 0xf8) = 0;
    *(undefined8 *)(param_1 + 0x100) = 0;
    *(undefined8 *)(param_1 + 0x108) = 0;
    *(undefined8 *)(param_1 + 0x110) = 0;
    *(undefined8 *)(param_1 + 0x118) = 0;
    *(undefined8 *)(param_1 + 0x120) = 0;
    puVar24[0] = 0;
    puVar24[1] = 0;
    *(undefined8 *)(param_1 + 0xf0) = 0;
    if ((*puVar24 >> 8 & 1) != 0) {
      *puVar24 = 0x100;
    }
    if ((uVar23 >> 7 & 1) == 0) {
      return;
    }
    *(undefined4 *)(param_1 + 0xec) = 0x80;
    return;
  }
  if (param_2 == 3) {
    if ((!bVar4) && (uVar23 = *puVar25, uVar23 != 0)) {
      cVar12 = *pcVar13;
      do {
        if (cVar12 == '\0') {
          cVar12 = '\x01';
          *puVar14 = 0xffffffffffffffff;
          puVar14[1] = 0xffffffffffffffff;
          *pcVar13 = '\x01';
          puVar14[4] = 0xffffffffffffffff;
          *(undefined4 *)(puVar14 + 5) = 0xffffffff;
          puVar14[2] = 0xffffffffffffffff;
          puVar14[3] = 0xffffffffffffffff;
          uVar23 = *puVar25;
        }
        else {
          uVar20 = *(uint *)((long)puVar14 + 0x14);
          if (-1 < (int)uVar20) {
            if ((ushort *)((ulong)uVar20 + (long)puVar25) == (ushort *)0x0) break;
            uVar16 = *(ushort *)((ulong)uVar20 + (long)puVar25);
            uVar26 = (ulong)uVar16;
            if (0x1ff < uVar16) {
LAB_02af1b7c:
              *(undefined8 *)(param_1 + 0x118) = 0;
              *(undefined8 *)(param_1 + 0x120) = 0;
              *(undefined8 *)(param_1 + 0x108) = 0;
              *(undefined8 *)(param_1 + 0x110) = 0;
              *(undefined8 *)(param_1 + 0xf8) = 0;
              *(undefined8 *)(param_1 + 0x100) = 0;
              *(undefined8 *)(param_1 + 0xe8) = 0;
              *(undefined8 *)(param_1 + 0xf0) = 0;
              return;
            }
            goto LAB_02af1b94;
          }
          if (uVar20 != 0xffffffff) break;
        }
        puVar24 = (uint *)(ulong)uVar23;
        uVar26 = 0;
        if ((puVar24 == (uint *)0x0) || (puVar25 == puVar24)) goto LAB_02af1b94;
        lVar18 = 0xc;
        if (*(char *)((long)puVar25 + (10 - (long)puVar24)) != '\0') {
          lVar18 = 0x1c;
        }
        lVar18 = (long)puVar25 + (lVar18 - (long)puVar24);
        uVar26 = 0;
        if (lVar18 == 0) goto LAB_02af1b94;
        uVar26 = (ulong)*(ushort *)((long)puVar25 + (8 - (long)puVar24));
        *(undefined4 *)((long)puVar14 + 0x14) = 0xfffffffe;
        if (uVar26 == 0) break;
        piVar11 = (int *)(lVar18 + 4);
        while (piVar11[-1] != 0x54706054) {
          piVar11 = piVar11 + 2;
          uVar26 = uVar26 - 1;
          if (uVar26 == 0) goto LAB_02af1b90;
        }
        uVar26 = 0;
        iVar10 = 0;
        if (*piVar11 != -1) {
          iVar10 = *piVar11;
        }
        *(int *)((long)puVar14 + 0x14) = iVar10;
        uVar23 = *puVar25;
        if (uVar23 == 0) goto LAB_02af1b94;
      } while( true );
    }
LAB_02af1b90:
    uVar26 = 0;
LAB_02af1b94:
    lVar18 = param_1 + 0xe8;
    uVar23 = *(uint *)(lVar18 + (uVar26 >> 5) * 4);
    *(undefined8 *)(param_1 + 0x118) = 0;
    *(undefined8 *)(param_1 + 0x120) = 0;
    *(undefined8 *)(param_1 + 0x108) = 0;
    *(undefined8 *)(param_1 + 0x110) = 0;
    *(undefined8 *)(param_1 + 0xf8) = 0;
    *(undefined8 *)(param_1 + 0x100) = 0;
    *(undefined8 *)(param_1 + 0xe8) = 0;
    *(undefined8 *)(param_1 + 0xf0) = 0;
    puVar8 = PTR_DAT_04bc4648;
    puVar7 = PTR_DAT_04bc4640;
    if ((uVar23 >> (ulong)((uint)uVar26 & 0x1f) & 1) == 0) {
      return;
    }
    if ((bVar4) || (uVar23 = *puVar25, uVar23 == 0)) {
LAB_02af1ca8:
      uVar26 = 0;
LAB_02af1cac:
      lVar3 = (uVar26 >> 5) * 4;
      *(uint *)(lVar18 + lVar3) = 1 << (ulong)((uint)uVar26 & 0x1f) | *(uint *)(lVar18 + lVar3);
      return;
    }
    cVar12 = *PTR_DAT_04bc4640;
    do {
      if (cVar12 == '\0') {
        cVar12 = '\x01';
        *(undefined8 *)puVar8 = 0xffffffffffffffff;
        *(undefined8 *)(puVar8 + 8) = 0xffffffffffffffff;
        *puVar7 = 1;
        *(undefined8 *)(puVar8 + 0x20) = 0xffffffffffffffff;
        *(undefined4 *)(puVar8 + 0x28) = 0xffffffff;
        *(undefined8 *)(puVar8 + 0x10) = 0xffffffffffffffff;
        *(undefined8 *)(puVar8 + 0x18) = 0xffffffffffffffff;
        uVar23 = *puVar25;
      }
      else {
        uVar20 = *(uint *)(puVar8 + 0x14);
        if (-1 < (int)uVar20) {
          if ((ushort *)((ulong)uVar20 + (long)puVar25) == (ushort *)0x0) goto LAB_02af1ca8;
          uVar16 = *(ushort *)((ulong)uVar20 + (long)puVar25);
          uVar26 = (ulong)uVar16;
          if (0x1ff < uVar16) {
            return;
          }
          goto LAB_02af1cac;
        }
        if (uVar20 != 0xffffffff) goto LAB_02af1ca8;
      }
      puVar24 = (uint *)(ulong)uVar23;
      uVar26 = 0;
      if ((puVar24 == (uint *)0x0) || (puVar25 == puVar24)) goto LAB_02af1cac;
      lVar3 = 0xc;
      if (*(char *)((long)puVar25 + (10 - (long)puVar24)) != '\0') {
        lVar3 = 0x1c;
      }
      lVar3 = (long)puVar25 + (lVar3 - (long)puVar24);
      uVar26 = 0;
      if (lVar3 == 0) goto LAB_02af1cac;
      uVar26 = (ulong)*(ushort *)((long)puVar25 + (8 - (long)puVar24));
      *(undefined4 *)(puVar8 + 0x14) = 0xfffffffe;
      if (uVar26 == 0) goto LAB_02af1ca8;
      piVar11 = (int *)(lVar3 + 4);
      while (piVar11[-1] != 0x54706054) {
        piVar11 = piVar11 + 2;
        uVar26 = uVar26 - 1;
        if (uVar26 == 0) goto LAB_02af1ca8;
      }
      uVar26 = 0;
      iVar10 = 0;
      if (*piVar11 != -1) {
        iVar10 = *piVar11;
      }
      *(int *)(puVar8 + 0x14) = iVar10;
      uVar23 = *puVar25;
      if (uVar23 == 0) goto LAB_02af1cac;
    } while( true );
  }
  if (!bVar4) {
    uVar23 = *puVar25;
    uVar19 = 0;
    if ((uVar23 != 0) && (puVar25 != (uint *)(ulong)uVar23)) {
      puVar21 = (uint *)((long)puVar25 - (long)(ulong)uVar23);
      uVar19 = 0;
      if (*puVar21 != 0) {
        uVar23 = puVar21[1];
        if ((uVar23 != 0) && ((ulong)(ushort)puVar21[2] != 0)) {
          lVar3 = 0xc;
          if (*(char *)((long)puVar21 + 10) != '\0') {
            lVar3 = 0x1c;
          }
          lVar3 = (long)puVar21 + lVar3 + (ulong)(ushort)puVar21[2] * 8;
          if (lVar3 != 0) {
            uVar19 = 0;
            if ((ulong)uVar23 != 0) {
              uVar19 = (uint)((ulong)((long)puVar25 - lVar3) / (ulong)uVar23);
            }
            if (*puVar21 <= uVar19) {
              uVar19 = 0xffffffff;
            }
            if ((uVar19 < *puVar15) &&
               (uVar19 = (uint)*(ushort *)(*(long *)(puVar15 + 2) + (long)(int)uVar19 * 2),
               uVar19 < 2)) goto LAB_02af157c;
          }
        }
        uVar19 = 0;
      }
    }
LAB_02af157c:
    local_68 = (undefined **)CONCAT44(local_68._4_4_,uVar19);
    uVar22 = *(short *)(lVar18 + 0xdf2) + 1;
    if ((uint)uVar16 != (uint)uVar22) {
      do {
        uVar23 = uVar20 & 0xffff;
        uVar20 = uVar23 - *(ushort *)(lVar18 + 0xdf0);
        if (((uVar20 < *(uint *)(lVar18 + 0xdd0)) &&
            (puVar25 = *(uint **)(*(long *)(lVar18 + 0xdd8) + (long)(int)uVar20 * 8),
            puVar25 != (uint *)0x0)) || (puVar25 = puVar5, (*pbVar6 & 1) != 0)) {
          uVar20 = *puVar25;
        }
        else {
          iVar10 = __cxa_guard_acquire();
          if (iVar10 != 0) {
            *puVar5 = 0;
            __cxa_guard_release(pbVar6);
          }
          uVar20 = *puVar5;
          pcVar13 = PTR_DAT_04bc4640;
          puVar14 = (undefined8 *)PTR_DAT_04bc4648;
          puVar15 = (uint *)PTR_DAT_04bc46e8;
        }
        if (uVar20 != 0) {
          cVar12 = *pcVar13;
          do {
            if (cVar12 == '\0') {
              cVar12 = '\x01';
              *puVar14 = 0xffffffffffffffff;
              puVar14[1] = 0xffffffffffffffff;
              *pcVar13 = '\x01';
              puVar14[4] = 0xffffffffffffffff;
              *(undefined4 *)(puVar14 + 5) = 0xffffffff;
              puVar14[2] = 0xffffffffffffffff;
              puVar14[3] = 0xffffffffffffffff;
              uVar20 = *puVar25;
            }
            else {
              uVar19 = *(uint *)((long)puVar14 + 0x14);
              if (-1 < (int)uVar19) {
                uVar20 = 0;
                if (((ushort *)((ulong)uVar19 + (long)puVar25) == (ushort *)0x0) ||
                   (uVar16 = *(ushort *)((ulong)uVar19 + (long)puVar25), uVar20 = (uint)uVar16,
                   uVar16 < 0x200)) goto LAB_02af17b4;
                goto LAB_02af1590;
              }
              if (uVar19 != 0xffffffff) break;
            }
            puVar21 = (uint *)(ulong)uVar20;
            uVar20 = 0;
            if ((puVar21 == (uint *)0x0) || (uVar20 = 0, puVar25 == puVar21)) goto LAB_02af17b4;
            lVar3 = 0xc;
            if (*(char *)((long)puVar25 + (10 - (long)puVar21)) != '\0') {
              lVar3 = 0x1c;
            }
            lVar3 = (long)puVar25 + (lVar3 - (long)puVar21);
            if (lVar3 == 0) break;
            uVar26 = (ulong)*(ushort *)((long)puVar25 + (8 - (long)puVar21));
            *(undefined4 *)((long)puVar14 + 0x14) = 0xfffffffe;
            uVar20 = 0;
            if (uVar26 == 0) goto LAB_02af17b4;
            piVar11 = (int *)(lVar3 + 4);
            while (piVar11[-1] != 0x54706054) {
              piVar11 = piVar11 + 2;
              uVar26 = uVar26 - 1;
              if (uVar26 == 0) {
                uVar20 = 0;
                goto LAB_02af17b4;
              }
            }
            iVar10 = 0;
            if (*piVar11 != -1) {
              iVar10 = *piVar11;
            }
            *(int *)((long)puVar14 + 0x14) = iVar10;
            uVar20 = *puVar25;
          } while (uVar20 != 0);
        }
        uVar20 = 0;
LAB_02af17b4:
        uVar19 = *puVar25;
        local_44 = 0;
        if ((uVar19 != 0) && (puVar25 != (uint *)(ulong)uVar19)) {
          puVar21 = (uint *)((long)puVar25 - (long)(ulong)uVar19);
          local_44 = 0;
          if (*puVar21 != 0) {
            uVar19 = puVar21[1];
            if ((uVar19 != 0) && ((ulong)(ushort)puVar21[2] != 0)) {
              lVar3 = 0xc;
              if (*(char *)((long)puVar21 + 10) != '\0') {
                lVar3 = 0x1c;
              }
              lVar3 = (long)puVar21 + lVar3 + (ulong)(ushort)puVar21[2] * 8;
              if (lVar3 != 0) {
                uVar2 = 0;
                if ((ulong)uVar19 != 0) {
                  uVar2 = (uint)((ulong)((long)puVar25 - lVar3) / (ulong)uVar19);
                }
                if (*puVar21 <= uVar2) {
                  uVar2 = 0xffffffff;
                }
                if ((uVar2 < *puVar15) &&
                   (local_44 = (uint)*(ushort *)(*(long *)(puVar15 + 2) + (long)(int)uVar2 * 2),
                   local_44 < 2)) goto LAB_02af1834;
              }
            }
            local_44 = 0;
          }
        }
LAB_02af1834:
        if ((uVar20 < 0x200) && (local_44 != (uint)local_68)) {
          lVar3 = (ulong)(uVar20 >> 5) * 4;
          *(uint *)(param_1 + 0xe8 + lVar3) =
               *(uint *)(param_1 + 0xe8 + lVar3) & (1 << (ulong)(uVar20 & 0x1f) ^ 0xffffffffU);
        }
        uVar19 = uVar23;
        if (uVar23 <= *(ushort *)(lVar18 + 0xdf2)) {
          uVar19 = (uint)*(ushort *)(lVar18 + 0xdf2);
        }
        uVar20 = uVar23;
        do {
          while( true ) {
            if (uVar19 == uVar20) {
              uVar20 = uVar23 + 1;
              goto LAB_02af16b8;
            }
            uVar2 = (uVar20 + 1 & 0xffff) - (uint)*(ushort *)(lVar18 + 0xdf0);
            if (uVar2 < *(uint *)(lVar18 + 0xdd0)) break;
            uVar20 = uVar20 + 1;
          }
          uVar20 = uVar20 + 1;
        } while (*(long *)(*(long *)(lVar18 + 0xdd8) + (long)(int)uVar2 * 8) == 0);
LAB_02af16b8:
      } while ((uint)uVar22 != (uVar20 & 0xffff));
    }
  }
LAB_02af1590:
  puVar8 = PTR_DAT_04bc4628;
  puVar7 = PTR_DAT_04bc4620;
  uVar23 = *puVar24;
  if (uVar23 != 0) {
    cVar12 = *PTR_DAT_04bc4620;
    do {
      if (cVar12 == '\0') {
        cVar12 = '\x01';
        *(undefined8 *)puVar8 = 0xffffffffffffffff;
        *(undefined8 *)(puVar8 + 8) = 0xffffffffffffffff;
        *puVar7 = 1;
        *(undefined4 *)(puVar8 + 0x20) = 0xffffffff;
        *(undefined8 *)(puVar8 + 0x10) = 0xffffffffffffffff;
        *(undefined8 *)(puVar8 + 0x18) = 0xffffffffffffffff;
        uVar23 = *puVar24;
      }
      else {
        uVar20 = *(uint *)(puVar8 + 8);
        if (-1 < (int)uVar20) {
          if ((ushort *)((ulong)uVar20 + (long)puVar24) != (ushort *)0x0) {
            uVar23 = (uint)*(ushort *)((ulong)uVar20 + (long)puVar24);
            goto LAB_02af1988;
          }
          break;
        }
        if (uVar20 != 0xffffffff) break;
      }
      puVar25 = (uint *)(ulong)uVar23;
      uVar23 = 0;
      if ((puVar25 == (uint *)0x0) || (uVar23 = 0, puVar24 == puVar25)) goto LAB_02af1988;
      lVar18 = 0xc;
      if (*(char *)((long)puVar24 + (10 - (long)puVar25)) != '\0') {
        lVar18 = 0x1c;
      }
      lVar18 = (long)puVar24 + (lVar18 - (long)puVar25);
      uVar23 = 0;
      if (lVar18 == 0) goto LAB_02af1988;
      uVar26 = (ulong)*(ushort *)((long)puVar24 + (8 - (long)puVar25));
      *(undefined4 *)(puVar8 + 8) = 0xfffffffe;
      if (uVar26 == 0) break;
      piVar11 = (int *)(lVar18 + 4);
      while (piVar11[-1] != -0x37919f2b) {
        piVar11 = piVar11 + 2;
        uVar26 = uVar26 - 1;
        if (uVar26 == 0) goto LAB_02af1984;
      }
      iVar10 = 0;
      if (*piVar11 != -1) {
        iVar10 = *piVar11;
      }
      *(int *)(puVar8 + 8) = iVar10;
      uVar23 = *puVar24;
      if (uVar23 == 0) break;
    } while( true );
  }
LAB_02af1984:
  uVar23 = 0;
LAB_02af1988:
  lVar18 = *plVar17;
  uVar23 = uVar23 - *(ushort *)(lVar18 + 0xdf0);
  if (uVar23 < *(uint *)(lVar18 + 0xdd0)) {
    puVar24 = *(uint **)(*(long *)(lVar18 + 0xdd8) + (long)(int)uVar23 * 8);
    uVar16 = 0;
    if (puVar24 == (uint *)0x0) goto LAB_02af1a34;
    uVar23 = *puVar24;
    if (uVar23 != 0 && puVar24 != (uint *)(ulong)uVar23) {
      puVar25 = (uint *)((long)puVar24 - (long)(ulong)uVar23);
      if (((*puVar25 != 0) && (uVar23 = puVar25[1], uVar23 != 0)) &&
         ((ulong)(ushort)puVar25[2] != 0)) {
        lVar18 = 0xc;
        if (*(char *)((long)puVar25 + 10) != '\0') {
          lVar18 = 0x1c;
        }
        lVar18 = (long)puVar25 + lVar18 + (ulong)(ushort)puVar25[2] * 8;
        if (lVar18 != 0) {
          uVar20 = 0;
          if ((ulong)uVar23 != 0) {
            uVar20 = (uint)((ulong)((long)puVar24 - lVar18) / (ulong)uVar23);
          }
          if (*puVar25 <= uVar20) {
            uVar20 = 0xffffffff;
          }
          if ((uVar20 < *(uint *)PTR_DAT_04bc46e0) &&
             (uVar16 = *(ushort *)(*(long *)(PTR_DAT_04bc46e0 + 8) + (long)(int)uVar20 * 2),
             uVar16 < 5)) goto LAB_02af1a34;
        }
      }
    }
  }
  uVar16 = 0;
LAB_02af1a34:
  if (uVar16 != 3) {
    local_44 = 3;
    local_58 = &local_44;
    local_68 = &PTR_LAB_04aa0810;
    lStack_60 = param_1;
    FUN_02aee3a0(&local_68);
  }
  if (uVar16 == 4) {
    return;
  }
  local_44 = 4;
  local_58 = &local_44;
  local_68 = &PTR_LAB_04aa0810;
  lStack_60 = param_1;
  FUN_02aee3a0(&local_68);
  return;
LAB_02af0cdc:
  if (-1 < (int)uVar26) {
    uVar22 = 0;
    if ((ushort *)(uVar26 + (long)puVar24) != (ushort *)0x0) {
      uVar22 = *(ushort *)(uVar26 + (long)puVar24);
    }
    goto LAB_02af0d54;
  }
  if ((uVar26 != 0xffffffff) || (lVar3 = (long)puVar24 - (ulong)uVar23, lVar3 == 0))
  goto LAB_02af0d50;
  lVar1 = 0xc;
  if (*(char *)(lVar3 + 10) != '\0') {
    lVar1 = 0x1c;
  }
  if (lVar1 + lVar3 == 0) goto LAB_02af0d50;
  uVar26 = (ulong)*(ushort *)(lVar3 + 8);
  *(undefined4 *)((long)puVar14 + 0xc) = 0xfffffffe;
  if (uVar26 == 0) goto LAB_02af0d50;
  puVar25 = (uint *)(lVar1 + lVar3 + 4);
  while (puVar25[-1] != 0xb6f501d2) {
    puVar25 = puVar25 + 2;
    uVar26 = uVar26 - 1;
    if (uVar26 == 0) goto LAB_02af0d50;
  }
  uVar26 = 0;
  if (*puVar25 != 0xffffffff) {
    uVar26 = (ulong)*puVar25;
  }
  *(int *)((long)puVar14 + 0xc) = (int)uVar26;
  uVar23 = *puVar24;
  if (uVar23 == 0) goto LAB_02af0d50;
  goto LAB_02af0cdc;
LAB_02af102c:
  if (-1 < (int)uVar26) {
    uVar22 = 0;
    if ((ushort *)(uVar26 + (long)puVar24) != (ushort *)0x0) {
      uVar22 = *(ushort *)(uVar26 + (long)puVar24);
    }
    goto LAB_02af10a4;
  }
  if ((uVar26 != 0xffffffff) || (lVar3 = (long)puVar24 - (ulong)uVar23, lVar3 == 0))
  goto LAB_02af10a0;
  lVar1 = 0xc;
  if (*(char *)(lVar3 + 10) != '\0') {
    lVar1 = 0x1c;
  }
  if (lVar1 + lVar3 == 0) goto LAB_02af10a0;
  uVar26 = (ulong)*(ushort *)(lVar3 + 8);
  *(undefined4 *)(puVar14 + 1) = 0xfffffffe;
  if (uVar26 == 0) goto LAB_02af10a0;
  puVar25 = (uint *)(lVar1 + lVar3 + 4);
  while (puVar25[-1] != 0xb6f501d2) {
    puVar25 = puVar25 + 2;
    uVar26 = uVar26 - 1;
    if (uVar26 == 0) goto LAB_02af10a0;
  }
  uVar26 = 0;
  if (*puVar25 != 0xffffffff) {
    uVar26 = (ulong)*puVar25;
  }
  *(int *)(puVar14 + 1) = (int)uVar26;
  uVar23 = *puVar24;
  if (uVar23 == 0) goto LAB_02af10a0;
  goto LAB_02af102c;
LAB_02af1ab4:
  if ((int)uVar23 < 0) {
    if ((uVar23 != 0xffffffff) || (lVar18 = (long)puVar25 - (long)puVar15, lVar18 == 0))
    goto LAB_02af1cf8;
    lVar3 = 0xc;
    if (*(char *)(lVar18 + 10) != '\0') {
      lVar3 = 0x1c;
    }
    if (lVar3 + lVar18 == 0) goto LAB_02af1cf8;
    uVar26 = (ulong)*(ushort *)(lVar18 + 8);
    *(undefined4 *)(puVar8 + 0x14) = 0xfffffffe;
    if (uVar26 == 0) goto LAB_02af1cf8;
    puVar24 = (uint *)(lVar3 + lVar18 + 4);
    while (puVar24[-1] != 0x54706054) {
      puVar24 = puVar24 + 2;
      uVar26 = uVar26 - 1;
      if (uVar26 == 0) goto LAB_02af1cf8;
    }
    uVar23 = 0;
    if (*puVar24 != 0xffffffff) {
      uVar23 = *puVar24;
    }
    *(uint *)(puVar8 + 0x14) = uVar23;
    puVar15 = (uint *)(ulong)*puVar25;
    if (*puVar25 == 0) goto LAB_02af1cf8;
    goto LAB_02af1ab4;
  }
  if ((ushort *)((long)puVar25 + (ulong)uVar23) != (ushort *)0x0) {
    uVar16 = *(ushort *)((long)puVar25 + (ulong)uVar23);
    uVar26 = (ulong)uVar16;
    if (0x1ff < uVar16) goto LAB_02af1b7c;
    goto LAB_02af1cfc;
  }
LAB_02af1cf8:
  uVar26 = 0;
LAB_02af1cfc:
  lVar18 = param_1 + 0xe8;
  uVar23 = *(uint *)(lVar18 + (uVar26 >> 5) * 4);
  *(undefined8 *)(param_1 + 0x118) = 0;
  *(undefined8 *)(param_1 + 0x120) = 0;
  *(undefined8 *)(param_1 + 0x108) = 0;
  *(undefined8 *)(param_1 + 0x110) = 0;
  *(undefined8 *)(param_1 + 0xf8) = 0;
  *(undefined8 *)(param_1 + 0x100) = 0;
  *(undefined8 *)(param_1 + 0xe8) = 0;
  *(undefined8 *)(param_1 + 0xf0) = 0;
  if ((uVar23 >> (ulong)((uint)uVar26 & 0x1f) & 1) != 0) {
    uVar23 = *puVar25;
    if (uVar23 != 0) {
      uVar20 = *(uint *)(puVar8 + 0x14);
      while( true ) {
        if (-1 < (int)uVar20) {
          uVar23 = 0;
          if (((ushort *)((long)puVar25 + (ulong)uVar20) != (ushort *)0x0) &&
             (uVar16 = *(ushort *)((long)puVar25 + (ulong)uVar20), uVar23 = (uint)uVar16,
             0x1ff < uVar16)) {
            return;
          }
          goto LAB_02af1da8;
        }
        if ((uVar20 != 0xffffffff) || (lVar3 = (long)puVar25 - (ulong)uVar23, lVar3 == 0)) break;
        lVar1 = 0xc;
        if (*(char *)(lVar3 + 10) != '\0') {
          lVar1 = 0x1c;
        }
        if (lVar1 + lVar3 == 0) break;
        uVar26 = (ulong)*(ushort *)(lVar3 + 8);
        *(undefined4 *)(puVar8 + 0x14) = 0xfffffffe;
        if (uVar26 == 0) break;
        puVar24 = (uint *)(lVar1 + lVar3 + 4);
        while (puVar24[-1] != 0x54706054) {
          puVar24 = puVar24 + 2;
          uVar26 = uVar26 - 1;
          if (uVar26 == 0) goto LAB_02af1da4;
        }
        uVar20 = 0;
        if (*puVar24 != 0xffffffff) {
          uVar20 = *puVar24;
        }
        *(uint *)(puVar8 + 0x14) = uVar20;
        uVar23 = *puVar25;
        if (uVar23 == 0) break;
      }
    }
LAB_02af1da4:
    uVar23 = 0;
LAB_02af1da8:
    lVar3 = (ulong)(uVar23 >> 5) * 4;
    *(uint *)(lVar18 + lVar3) = 1 << (ulong)(uVar23 & 0x1f) | *(uint *)(lVar18 + lVar3);
  }
  return;
}

