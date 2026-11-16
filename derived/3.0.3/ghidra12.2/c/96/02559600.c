
void FUN_02559600(byte *param_1)

{
  uint uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  byte bVar4;
  byte bVar5;
  undefined2 uVar6;
  short sVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  bool bVar11;
  int iVar12;
  uint *puVar13;
  long *plVar14;
  ulong uVar15;
  byte *pbVar16;
  undefined8 uVar17;
  uint *puVar18;
  long lVar19;
  int *piVar20;
  long lVar21;
  long lVar22;
  undefined8 uVar23;
  char cVar24;
  long *plVar25;
  uint uVar26;
  uint uVar27;
  ulong uVar28;
  undefined8 *puVar29;
  byte local_68 [4];
  byte local_64 [4];
  byte local_60 [4];
  uint local_5c;
  uint local_58;
  uint local_54;
  
  local_5c = (uint)*(ushort *)(param_1 + 3);
  local_58 = local_5c;
  puVar13 = (uint *)FUN_0251d928(local_5c);
  uVar27 = local_5c;
  uVar26 = *puVar13;
  if (uVar26 == 0 || puVar13 == (uint *)(ulong)uVar26) {
    return;
  }
  puVar18 = (uint *)((long)puVar13 - (long)(ulong)uVar26);
  if (*puVar18 == 0) {
    return;
  }
  uVar26 = puVar18[1];
  if (uVar26 == 0) {
    return;
  }
  if ((ulong)(ushort)puVar18[2] == 0) {
    return;
  }
  lVar19 = 0xc;
  if (*(char *)((long)puVar18 + 10) != '\0') {
    lVar19 = 0x1c;
  }
  lVar19 = (long)puVar18 + lVar19 + (ulong)(ushort)puVar18[2] * 8;
  if (lVar19 == 0) {
    return;
  }
  uVar1 = 0;
  if ((ulong)uVar26 != 0) {
    uVar1 = (uint)((ulong)((long)puVar13 - lVar19) / (ulong)uVar26);
  }
  if (*puVar18 <= uVar1) {
    uVar1 = 0xffffffff;
  }
  if (*(uint *)PTR_DAT_04bc2ff8 <= uVar1) {
    return;
  }
  if (*(short *)(*(long *)(PTR_DAT_04bc2ff8 + 8) + (long)(int)uVar1 * 2) != 1) {
    return;
  }
  bVar4 = *param_1;
  if (8 < (byte)(bVar4 + 1)) {
    bVar4 = 0xff;
  }
  sVar7 = *(short *)(param_1 + 1);
  bVar11 = (bVar4 & 0xf8) != 0;
  if (bVar11) {
    bVar4 = 0xff;
  }
  pbVar16 = PTR_DAT_04bb5038 + ((long)(char)bVar4 & 0xffffffff);
  if (bVar11) {
    pbVar16 = PTR_DAT_04bb32e0;
  }
  bVar5 = *pbVar16;
  uVar28 = (ulong)bVar5;
  lVar19 = (long)(int)local_5c;
  bVar4 = bVar5;
  if (7 < uVar28) {
    bVar4 = 0xff;
  }
  if (((DAT_054f0b68 & 1) == 0) && (iVar12 = __cxa_guard_acquire(&DAT_054f0b68), iVar12 != 0)) {
    DAT_054f0b60 = 0;
    __cxa_guard_release(&DAT_054f0b68);
  }
  lVar21 = DAT_054f5738;
  puVar9 = PTR_DAT_04bc2fe8;
  puVar8 = PTR_DAT_04bc2fe0;
  if (DAT_054f5738 == 0) {
    puVar13 = &DAT_054f0b60;
  }
  else {
    if ((int)*(uint *)(DAT_054f5738 + 0x1e0) < 1) {
      lVar22 = *(long *)(DAT_054f5738 + 0xd0);
      if (lVar22 == 0) {
LAB_02559828:
        puVar18 = (uint *)0x0;
      }
      else {
        puVar13 = *(uint **)(lVar22 + 8);
        if ((puVar13 != (uint *)0x0) &&
           ((((*(uint *)(DAT_054f5738 + 0xe8) <= uVar27 ||
              (*(char *)(*(long *)(DAT_054f5738 + 0xf0) + lVar19) != '\0')) && (uVar27 < *puVar13))
            && ((puVar13[1] != 0 && ((ushort)puVar13[2] != 0)))))) {
          iVar12 = 0xc;
          if (*(char *)((long)puVar13 + 10) != '\0') {
            iVar12 = 0x1c;
          }
          puVar13 = (uint *)((ulong)(puVar13[1] * uVar27 + (uint)(ushort)puVar13[2] * 8 + iVar12) +
                            (long)puVar13);
          if (puVar13 != (uint *)0x0) goto LAB_02559834;
        }
        piVar20 = *(int **)(lVar22 + 8);
        puVar18 = (uint *)0x0;
        if (piVar20 != (int *)0x0) {
          if (((*(int *)(DAT_054f5738 + 0xe8) != 0) && (**(char **)(DAT_054f5738 + 0xf0) == '\0'))
             || ((*piVar20 == 0 || ((piVar20[1] == 0 || ((ulong)*(ushort *)(piVar20 + 2) == 0))))))
          goto LAB_02559828;
          lVar19 = 0xc;
          if (*(char *)((long)piVar20 + 10) != '\0') {
            lVar19 = 0x1c;
          }
          puVar18 = (uint *)((long)piVar20 + lVar19 + (ulong)*(ushort *)(piVar20 + 2) * 8);
        }
      }
    }
    else if (uVar27 < *(uint *)(DAT_054f5738 + 0x1e0)) {
      if (*(uint *)(DAT_054f5738 + 0x1d0) <= uVar27) {
        uVar27 = 0;
      }
      puVar13 = (uint *)(*(undefined8 **)(DAT_054f5738 + 0x1d8))[uVar27];
      if (puVar13 != (uint *)0x0) goto LAB_02559834;
      puVar18 = (uint *)**(undefined8 **)(DAT_054f5738 + 0x1d8);
    }
    else {
      puVar18 = (uint *)**(undefined8 **)(DAT_054f5738 + 0x1d8);
    }
    puVar13 = &DAT_054f0b60;
    if (puVar18 != (uint *)0x0) {
      puVar13 = puVar18;
    }
  }
LAB_02559834:
  if (*puVar13 != 0) {
    cVar24 = *PTR_DAT_04bc2fe0;
    do {
      puVar10 = PTR_DAT_04bc31b0;
      if (cVar24 == '\0') {
        cVar24 = '\x01';
        *(undefined8 *)puVar9 = 0xffffffffffffffff;
        *(undefined8 *)(puVar9 + 8) = 0xffffffffffffffff;
        *puVar8 = 1;
        *(undefined8 *)(puVar9 + 0xa0) = 0xffffffffffffffff;
        *(undefined8 *)(puVar9 + 0x10) = 0xffffffffffffffff;
        *(undefined8 *)(puVar9 + 0x18) = 0xffffffffffffffff;
        *(undefined8 *)(puVar9 + 0x20) = 0xffffffffffffffff;
        *(undefined8 *)(puVar9 + 0x28) = 0xffffffffffffffff;
        *(undefined8 *)(puVar9 + 0x30) = 0xffffffffffffffff;
        *(undefined8 *)(puVar9 + 0x38) = 0xffffffffffffffff;
        *(undefined8 *)(puVar9 + 0x40) = 0xffffffffffffffff;
        *(undefined8 *)(puVar9 + 0x48) = 0xffffffffffffffff;
        *(undefined8 *)(puVar9 + 0x50) = 0xffffffffffffffff;
        *(undefined8 *)(puVar9 + 0x58) = 0xffffffffffffffff;
        *(undefined8 *)(puVar9 + 0x60) = 0xffffffffffffffff;
        *(undefined8 *)(puVar9 + 0x68) = 0xffffffffffffffff;
        *(undefined8 *)(puVar9 + 0x70) = 0xffffffffffffffff;
        *(undefined8 *)(puVar9 + 0x78) = 0xffffffffffffffff;
        *(undefined8 *)(puVar9 + 0x80) = 0xffffffffffffffff;
        *(undefined8 *)(puVar9 + 0x88) = 0xffffffffffffffff;
        *(undefined8 *)(puVar9 + 0x90) = 0xffffffffffffffff;
        *(undefined8 *)(puVar9 + 0x98) = 0xffffffffffffffff;
      }
      else {
        uVar27 = *(uint *)(puVar9 + 0x40);
        if (-1 < (int)uVar27) {
          if (((char *)((ulong)uVar27 + (long)puVar13) != (char *)0x0) &&
             (uVar26 = (uint)bVar5, *(char *)((ulong)uVar27 + (long)puVar13) != '\0' && bVar5 < 8))
          {
            plVar25 = (long *)(PTR_DAT_04bc31b0 + (ulong)uVar26 * 0x30 + 8);
            if (((*plVar25 != *(long *)param_1 ||
                 *(long *)(PTR_DAT_04bc31b0 + (ulong)uVar26 * 0x30 + 0x10) != *(long *)(param_1 + 8)
                 ) || *(long *)(PTR_DAT_04bc31b0 + (ulong)uVar26 * 0x30 + 0x18) !=
                      *(long *)(param_1 + 0x10)) ||
                *(int *)(PTR_DAT_04bc31b0 + (ulong)uVar26 * 0x30 + 0x20) != *(int *)(param_1 + 0x18)
               ) {
              lVar19 = *(long *)param_1;
              uVar2 = *(undefined8 *)(param_1 + 8);
              uVar17 = *(undefined8 *)(param_1 + 0x10);
              *(undefined4 *)(PTR_DAT_04bc31b0 + (ulong)uVar26 * 0x30 + 0x20) =
                   *(undefined4 *)(param_1 + 0x18);
              *plVar25 = lVar19;
              *(undefined8 *)(puVar10 + (ulong)uVar26 * 0x30 + 0x10) = uVar2;
              *(undefined8 *)(puVar10 + (ulong)uVar26 * 0x30 + 0x18) = uVar17;
            }
            puVar8 = PTR_DAT_04bc31b8;
            pbVar16 = param_1 + 0x20;
            puVar29 = (undefined8 *)(PTR_DAT_04bc31b8 + (ulong)uVar26 * 0x70 + 8);
            iVar12 = memcmp(puVar29,pbVar16,0x58);
            if (iVar12 != 0) {
              uVar2 = *(undefined8 *)pbVar16;
              uVar17 = *(undefined8 *)(param_1 + 0x30);
              *(undefined8 *)(puVar8 + (ulong)uVar26 * 0x70 + 0x10) =
                   *(undefined8 *)(param_1 + 0x28);
              *(undefined8 *)(puVar8 + (ulong)uVar26 * 0x70 + 0x18) = uVar17;
              *puVar29 = uVar2;
              uVar2 = *(undefined8 *)(param_1 + 0x38);
              uVar17 = *(undefined8 *)(param_1 + 0x40);
              uVar23 = *(undefined8 *)(param_1 + 0x50);
              *(undefined8 *)(puVar8 + (ulong)uVar26 * 0x70 + 0x30) =
                   *(undefined8 *)(param_1 + 0x48);
              *(undefined8 *)(puVar8 + (ulong)uVar26 * 0x70 + 0x38) = uVar23;
              *(undefined8 *)(puVar8 + (ulong)uVar26 * 0x70 + 0x20) = uVar2;
              *(undefined8 *)(puVar8 + (ulong)uVar26 * 0x70 + 0x28) = uVar17;
              uVar2 = *(undefined8 *)(param_1 + 0x58);
              uVar17 = *(undefined8 *)(param_1 + 0x60);
              uVar23 = *(undefined8 *)(param_1 + 0x70);
              *(undefined8 *)(puVar8 + (ulong)uVar26 * 0x70 + 0x50) =
                   *(undefined8 *)(param_1 + 0x68);
              *(undefined8 *)(puVar8 + (ulong)uVar26 * 0x70 + 0x58) = uVar23;
              *(undefined8 *)(puVar8 + (ulong)uVar26 * 0x70 + 0x40) = uVar2;
              *(undefined8 *)(puVar8 + (ulong)uVar26 * 0x70 + 0x48) = uVar17;
            }
            lVar19 = lVar21 + uVar28 * 0x80;
            uVar3 = *(undefined4 *)(param_1 + 0x17);
            uVar2 = *(undefined8 *)param_1;
            uVar17 = *(undefined8 *)(param_1 + 8);
            *(undefined8 *)(lVar19 + 0x2f8) = *(undefined8 *)(param_1 + 0x10);
            *(undefined8 *)(lVar19 + 0x2f0) = uVar17;
            *(undefined8 *)(lVar19 + 0x2e8) = uVar2;
            *(undefined4 *)(lVar19 + 0x2ff) = uVar3;
            uVar2 = *(undefined8 *)(param_1 + 0x48);
            uVar17 = *(undefined8 *)(param_1 + 0x50);
            uVar23 = *(undefined8 *)(param_1 + 0x40);
            *(undefined8 *)(lVar19 + 800) = *(undefined8 *)(param_1 + 0x38);
            *(undefined8 *)(lVar19 + 0x338) = uVar17;
            *(undefined8 *)(lVar19 + 0x330) = uVar2;
            *(undefined8 *)(lVar19 + 0x328) = uVar23;
            uVar2 = *(undefined8 *)(param_1 + 0x60);
            uVar17 = *(undefined8 *)(param_1 + 0x68);
            uVar23 = *(undefined8 *)(param_1 + 0x6e);
            *(undefined8 *)(lVar19 + 0x340) = *(undefined8 *)(param_1 + 0x58);
            *(undefined8 *)(lVar19 + 0x356) = uVar23;
            *(undefined8 *)(lVar19 + 0x350) = uVar17;
            *(undefined8 *)(lVar19 + 0x348) = uVar2;
            uVar2 = *(undefined8 *)pbVar16;
            uVar17 = *(undefined8 *)(param_1 + 0x28);
            *(undefined8 *)(lVar19 + 0x318) = *(undefined8 *)(param_1 + 0x30);
            *(undefined8 *)(lVar19 + 0x310) = uVar17;
            *(undefined8 *)(lVar19 + 0x308) = uVar2;
          }
          break;
        }
        if (uVar27 != 0xffffffff) break;
      }
      lVar19 = (long)puVar13 - (ulong)*puVar13;
      if ((*puVar13 == 0) || (lVar19 == 0)) break;
      lVar22 = 0xc;
      if (*(char *)(lVar19 + 10) != '\0') {
        lVar22 = 0x1c;
      }
      if (lVar22 + lVar19 == 0) break;
      uVar15 = (ulong)*(ushort *)(lVar19 + 8);
      *(undefined4 *)(puVar9 + 0x40) = 0xfffffffe;
      if (uVar15 == 0) break;
      piVar20 = (int *)(lVar22 + lVar19 + 4);
      while (piVar20[-1] != 0x16e483f0) {
        piVar20 = piVar20 + 2;
        uVar15 = uVar15 - 1;
        if (uVar15 == 0) goto LAB_02559a74;
      }
      iVar12 = 0;
      if (*piVar20 != -1) {
        iVar12 = *piVar20;
      }
      *(int *)(puVar9 + 0x40) = iVar12;
      if (*puVar13 == 0) break;
    } while( true );
  }
LAB_02559a74:
  puVar8 = PTR_DAT_04bb27c0;
  if (*(int *)(PTR_DAT_04bc3a80 + 0x38) == 0x55b5d9de) {
    pbVar16 = local_60;
    local_60[0] = bVar4;
    goto LAB_02559d18;
  }
  if (sVar7 != *(short *)PTR_DAT_04bb6298) {
    pbVar16 = local_64;
    local_64[0] = bVar4;
    goto LAB_02559d18;
  }
  puVar13 = (uint *)(lVar21 + 0xde8);
  if (bVar5 < 8) {
    puVar13 = (uint *)(lVar21 + 0xde8) + ((long)(char)bVar4 & 0xffffffff);
  }
  uVar27 = (uint)bVar5;
  puVar18 = (uint *)PTR_DAT_04bb3238;
  if (lVar21 != 0 && uVar27 < 8) {
    puVar18 = puVar13;
  }
  lVar19 = *(long *)PTR_DAT_04bb27c0;
  if (lVar19 != 0) {
    uVar26 = *puVar18;
    if ((((uVar26 == 0) ||
         (plVar25 = *(long **)(*(long *)(*(long *)(lVar19 + 0x1c0) + 8) +
                              ((ulong)(uVar26 >> 0x11) & 0x7ff8)), plVar25 == (long *)0x0)) ||
        ((*(uint *)(plVar25 + 0x49) >> 1 & 1) != 0)) || (*(uint *)(plVar25 + 0x46) != uVar26)) {
      plVar25 = (long *)0x0;
    }
    if ((*(int *)(lVar19 + 0x288) == 1) || (*(int *)(lVar19 + 0x288) == -1)) {
      plVar14 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      lVar19 = *(long *)puVar8;
      iVar12 = (**(code **)(*plVar14 + 0x60))();
      if (iVar12 < 0x11) {
        uVar26 = 0;
      }
      else {
        if (4 < *(uint *)(lVar19 + 0x5e8)) goto LAB_02559b88;
        uVar26 = 5U >> (ulong)(*(uint *)(lVar19 + 0x5e8) & 0x1f) & 1;
      }
    }
    else {
LAB_02559b88:
      uVar26 = 1;
    }
    if (plVar25 != (long *)0x0) {
      lVar19 = plVar25[0x2a];
      uVar1 = *(uint *)(plVar25 + 0x49);
      if (((*PTR_DAT_04bb3778 & 1) == 0) &&
         (iVar12 = __cxa_guard_acquire(PTR_DAT_04bb3778), iVar12 != 0)) {
        *(undefined **)PTR_DAT_04bb3770 = PTR_DAT_04bb3780 + 0x10;
        __cxa_guard_release(PTR_DAT_04bb3778);
      }
      uVar15 = (**(code **)(*plVar25 + 0x20))(plVar25,PTR_DAT_04bb3770);
      if ((uVar15 & 1) != 0) {
        if ((int)lVar19 != 1) {
          uVar26 = 1;
        }
        if ((uVar26 == 0) && ((uVar1 >> 4 & 1) != 0)) {
          puVar29 = (undefined8 *)(DAT_054f5738 + 0x2e8);
          if (uVar27 < 8) {
            puVar29 = puVar29 + uVar28 * 0x10;
            uVar23 = *(undefined8 *)(PTR_DAT_04bc31b0 + (ulong)uVar27 * 0x30 + 0x18);
            uVar2 = *(undefined8 *)(PTR_DAT_04bc31b0 + (ulong)uVar27 * 0x30 + 8);
            uVar17 = *(undefined8 *)(PTR_DAT_04bc31b0 + (ulong)uVar27 * 0x30 + 0x10);
            *(undefined4 *)((long)puVar29 + 0x17) =
                 *(undefined4 *)(PTR_DAT_04bc31b0 + (ulong)uVar27 * 0x30 + 0x1f);
            puVar29[1] = uVar17;
            puVar29[2] = uVar23;
            *puVar29 = uVar2;
            puVar8 = PTR_DAT_04bc31b8;
            uVar17 = *(undefined8 *)(PTR_DAT_04bc31b8 + (ulong)uVar27 * 0x70 + 0x38);
            uVar2 = *(undefined8 *)(PTR_DAT_04bc31b8 + (ulong)uVar27 * 0x70 + 0x20);
            uVar23 = *(undefined8 *)(PTR_DAT_04bc31b8 + (ulong)uVar27 * 0x70 + 0x28);
            puVar29[9] = *(undefined8 *)(PTR_DAT_04bc31b8 + (ulong)uVar27 * 0x70 + 0x30);
            puVar29[10] = uVar17;
            puVar29[7] = uVar2;
            puVar29[8] = uVar23;
            uVar2 = *(undefined8 *)(puVar8 + (ulong)uVar27 * 0x70 + 0x48);
            uVar17 = *(undefined8 *)(puVar8 + (ulong)uVar27 * 0x70 + 0x50);
            uVar23 = *(undefined8 *)(puVar8 + (ulong)uVar27 * 0x70 + 0x40);
            *(undefined8 *)((long)puVar29 + 0x6e) =
                 *(undefined8 *)(puVar8 + (ulong)uVar27 * 0x70 + 0x56);
            puVar29[0xc] = uVar2;
            puVar29[0xd] = uVar17;
            puVar29[0xb] = uVar23;
            uVar2 = *(undefined8 *)(puVar8 + (ulong)uVar27 * 0x70 + 8);
            uVar17 = *(undefined8 *)(puVar8 + (ulong)uVar27 * 0x70 + 0x18);
            puVar29[5] = *(undefined8 *)(puVar8 + (ulong)uVar27 * 0x70 + 0x10);
            puVar29[6] = uVar17;
            puVar29[4] = uVar2;
          }
          FUN_0235b810(plVar25,0,1,0);
          local_54 = local_5c;
          if (local_5c < 0x149) {
            lVar19 = *(long *)param_1;
            lVar22 = *(long *)(param_1 + 8);
            lVar21 = *(long *)(param_1 + 0x10);
            plVar25[0x30f] = *(long *)(param_1 + 0x18);
            plVar25[0x30e] = lVar21;
            plVar25[0x30d] = lVar22;
            plVar25[0x30c] = lVar19;
            lVar19 = *(long *)(param_1 + 0x20);
            lVar22 = *(long *)(param_1 + 0x28);
            lVar21 = *(long *)(param_1 + 0x30);
            plVar25[0x313] = *(long *)(param_1 + 0x38);
            plVar25[0x312] = lVar21;
            plVar25[0x311] = lVar22;
            plVar25[0x310] = lVar19;
            lVar19 = *(long *)(param_1 + 0x40);
            lVar22 = *(long *)(param_1 + 0x48);
            lVar21 = *(long *)(param_1 + 0x50);
            plVar25[0x317] = *(long *)(param_1 + 0x58);
            plVar25[0x316] = lVar21;
            plVar25[0x315] = lVar22;
            plVar25[0x314] = lVar19;
            lVar19 = *(long *)(param_1 + 0x68);
            lVar21 = *(long *)(param_1 + 0x70);
            uVar6 = *(undefined2 *)(param_1 + 0x78);
            plVar25[0x318] = *(long *)(param_1 + 0x60);
            *(undefined2 *)(plVar25 + 0x31b) = uVar6;
            plVar25[0x31a] = lVar21;
            plVar25[0x319] = lVar19;
            lVar19 = 0;
            if (plVar25[0xe] != 0) {
              lVar19 = plVar25[0xe] + 0x278;
            }
            FUN_03ebb160(lVar19,local_5c);
          }
          *(ushort *)((long)plVar25 + 0x17de) = (ushort)*(byte *)((long)puVar29 + 0x13);
          return;
        }
      }
    }
  }
  pbVar16 = local_68;
  local_68[0] = bVar4;
LAB_02559d18:
  FUN_0237561c(pbVar16,param_1);
  return;
}

