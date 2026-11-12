
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_008cd7bc(long param_1)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined *puVar5;
  undefined *puVar6;
  bool bVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  byte *pbVar12;
  ulong uVar13;
  ulong uVar14;
  short *psVar15;
  long lVar16;
  uint *puVar17;
  long lVar18;
  undefined8 *puVar19;
  byte bVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  undefined1 local_54 [4];
  byte local_38 [4];
  undefined4 local_34;
  
  piVar1 = (int *)(param_1 + 0x30808);
  iVar2 = *(int *)(param_1 + 0x30964);
  lVar16 = *(long *)PTR_DAT_04bb39b0;
  pbVar12 = &DAT_0548e140;
  if (lVar16 == 0) {
LAB_008cd838:
    if (*pbVar12 < 8) goto LAB_008cd8b0;
LAB_008cd844:
    if (DAT_0537d558 == (long *)0x0) {
LAB_008cd8a8:
      pbVar12 = &DAT_0548e168;
      goto LAB_008cd8b0;
    }
    lVar16 = *DAT_0537d558;
    bVar20 = *(byte *)(lVar16 + 0x473);
    pbVar12 = PTR_DAT_04bb5038;
    if ((long)(char)bVar20 != 0xffffffffffffffff) {
      puVar17 = (uint *)(lVar16 + 0x48) + ((long)(char)bVar20 & 0xffffffffU) * 0x20;
      if (7 < bVar20) {
        puVar17 = (uint *)(lVar16 + 0x48);
      }
      if ((*puVar17 & 8) != 0) {
        pbVar12 = (byte *)(lVar16 + 0x471);
      }
    }
    local_38[0] = *pbVar12;
    uVar13 = (ulong)local_38[0];
    if (7 < local_38[0]) goto LAB_008cd8a8;
  }
  else {
    pbVar12 = &DAT_0548e140;
    if (*(int *)(lVar16 + 0x15c) != 0) {
      pbVar12 = (byte *)(lVar16 + 0x158);
    }
    if (7 < *pbVar12) {
      if ((*(int *)(lVar16 + 0x15c) != 0) && (DAT_054f5738 != 0)) {
        pbVar12 = (byte *)(DAT_054f5738 + 0x11a5);
        goto LAB_008cd838;
      }
      goto LAB_008cd844;
    }
LAB_008cd8b0:
    uVar8 = (uint)*pbVar12;
    if (7 < uVar8) {
      uVar8 = 0xff;
    }
    uVar13 = (ulong)uVar8;
    local_38[0] = (byte)uVar8;
  }
  local_54[0] = (undefined1)uVar13;
  if (7 < (uint)uVar13) {
    local_54[0] = 0xff;
  }
  if (*(char *)(param_1 + 0x315c8) == '\0') {
    if (*(int *)(param_1 + 0x315b8) < 1) {
      return iVar2;
    }
    iVar4 = *(int *)(param_1 + 0x315b8) + *(int *)(param_1 + 0x315b4) + -1;
    iVar10 = 0;
    if (*(int *)(param_1 + 0x315b0) <= iVar4) {
      iVar10 = *(int *)(param_1 + 0x315b0);
    }
    if (*(int *)(*(long *)(param_1 + 0x315a8) + (long)(iVar4 - iVar10) * 4) == 1) {
      return iVar2;
    }
    if (DAT_054f5738 == 0) {
      if ((DAT_054f0960 & 1) == 0) {
        iVar10 = __cxa_guard_acquire(&DAT_054f0960);
        puVar19 = &DAT_054f0958;
        if (iVar10 != 0) {
          DAT_054f0958 = 0;
          __cxa_guard_release(&DAT_054f0960);
        }
      }
      else {
        puVar19 = &DAT_054f0958;
      }
    }
    else {
      puVar19 = (undefined8 *)(DAT_054f5738 + 0x204);
      if ((uint)uVar13 < 8) {
        puVar19 = puVar19 + uVar13;
      }
    }
    local_34 = 0x20;
    if ((*(uint *)((long)puVar19 + 4) & 1) != 0) {
      return iVar2;
    }
  }
  uVar8 = FUN_02582d8c(local_54,1);
  lVar16 = DAT_04d02f58;
  puVar5 = PTR_DAT_04bb4fb8;
  if (7 < uVar8) {
    return iVar2;
  }
  if (*(char *)(*(long *)PTR_DAT_04bb4fb8 + (ulong)uVar8 * 0x13f0 + 0x13d4) == '\0') {
    return iVar2;
  }
  uVar8 = *(uint *)(*(long *)PTR_DAT_04bb4fb8 + (ulong)uVar8 * 0x13f0 + 0x13d8);
  uVar13 = (ulong)uVar8;
  if ((int)uVar8 < 0) {
    return iVar2;
  }
  if (DAT_04d02f58 == 0) {
    return iVar2;
  }
  uVar9 = FUN_02582d8c(local_54,1);
  puVar6 = PTR_DAT_04bb7ff8;
  if (7 < uVar9) {
    return iVar2;
  }
  if (*(char *)(*(long *)puVar5 + (ulong)uVar9 * 0x13f0 + 0x13d4) == '\0') {
    return iVar2;
  }
  uVar9 = *(uint *)(*(long *)puVar5 + (ulong)uVar9 * 0x13f0 + 0x13d8);
  uVar14 = (ulong)uVar9;
  if ((int)uVar9 < 0) {
    return iVar2;
  }
  if (DAT_04d02f58 == 0) {
    return iVar2;
  }
  if (3 < uVar9) {
    uVar14 = 0;
  }
  lVar18 = *(long *)(DAT_04d02f58 + uVar14 * 8 + 0xf5b20);
  if (lVar18 == 0) {
    return iVar2;
  }
  if (3 < uVar8) {
    uVar13 = 0;
  }
  uVar8 = *(uint *)(lVar16 + uVar13 * 4 + 0xf5b40);
  if (uVar8 < 3) {
LAB_008cdb00:
    fVar22 = *(float *)(lVar18 + 0x98);
    fVar21 = *(float *)(lVar18 + 0x9c);
    fVar24 = 0.0;
    fVar23 = SQRT(fVar21 * fVar21 + fVar22 * fVar22);
    if (DAT_04ced028 < fVar23) {
      if (DAT_04ced02c <= fVar23) {
        fVar24 = 1.0;
      }
      else {
        fVar24 = (fVar23 - DAT_04ced028) / (DAT_04ced02c - DAT_04ced028) + 0.0;
      }
    }
    if (0.0 < fVar23) {
      fVar22 = (fVar24 / fVar23) * fVar22;
      fVar21 = (fVar24 / fVar23) * fVar21;
    }
    bVar7 = false;
    if ((fVar22 == 0.0) && (fVar21 == 0.0)) goto LAB_008cdb78;
  }
  else {
    if ((*(long *)PTR_DAT_04bb7ff8 == 0) || (*(int *)(*(long *)PTR_DAT_04bb7ff8 + 0x588) == 0)) {
      if (DAT_054f5738 == 0) {
        if ((DAT_054f0960 & 1) == 0) {
          iVar10 = __cxa_guard_acquire(&DAT_054f0960);
          puVar17 = (uint *)&DAT_054f0958;
          if (iVar10 != 0) {
            DAT_054f0958 = 0;
            __cxa_guard_release(&DAT_054f0960);
            puVar17 = (uint *)&DAT_054f0958;
          }
        }
        else {
          puVar17 = (uint *)&DAT_054f0958;
        }
      }
      else {
        puVar17 = (uint *)(DAT_054f5738 + 0x204);
        if (local_38[0] < 8) {
          puVar17 = puVar17 + (ulong)local_38[0] * 2;
        }
      }
      local_34 = 0x19;
      if ((*puVar17 >> 0x19 & 1) == 0) goto LAB_008cdb00;
    }
    else if (*piVar1 != 3) goto LAB_008cdb00;
LAB_008cdb78:
    uVar13 = FUN_0251d1e0(local_38);
    if ((uVar13 & 1) == 0) {
      if ((DAT_054f5738 == 0) || (uVar13 = (ulong)local_38[0], 7 < uVar13)) {
        if ((DAT_054f0c70 & 1) == 0) {
          iVar10 = __cxa_guard_acquire(&DAT_054f0c70);
          psVar15 = &DAT_054f0c08;
          if (iVar10 != 0) {
            DAT_054f0c6c = 0;
            _DAT_054f0c44 = 0;
            DAT_054f0c1c._0_4_ = 0;
            DAT_054f0c1c._4_4_ = 0;
            DAT_054f0c24._0_4_ = 0;
            DAT_054f0c24._4_4_ = 0;
            DAT_054f0c2c._0_4_ = 0;
            DAT_054f0c2c._4_4_ = 0;
            DAT_054f0c34._0_4_ = 0;
            DAT_054f0c34._4_4_ = 0;
            DAT_054f0c3c._0_4_ = 0;
            DAT_054f0c3c._4_4_ = 0;
            _DAT_054f0c08 = 0;
            _DAT_054f0c10 = 1;
            DAT_054f0c14._0_4_ = 0;
            DAT_054f0c14._4_4_ = 0;
            DAT_054f0c68 = 1;
            DAT_054f0c48 = 0;
            DAT_054f0c50 = 0;
            DAT_054f0c58 = 0;
            DAT_054f0c60 = 0;
            __cxa_guard_release(&DAT_054f0c70);
            psVar15 = &DAT_054f0c08;
          }
        }
        else {
          psVar15 = &DAT_054f0c08;
        }
      }
      else {
        psVar15 = (short *)(DAT_054f5738 + uVar13 * 0xd0 +
                            (ulong)(*(uint *)(DAT_054f5738 + uVar13 * 4 + 0xd68) & 1) * 0x68 + 0x6e8
                           );
      }
      uVar9 = (uint)*(byte *)(psVar15 + 0x32);
      if (((*(byte *)(psVar15 + 0x32) == 0) || (uVar9 = 0, *psVar15 != *(short *)PTR_DAT_04bb6298))
         || (uVar3 = *(uint *)(psVar15 + 2), 0x148 < uVar3)) {
LAB_008cdc38:
        bVar7 = uVar9 == 0xfb;
      }
      else {
        uVar9 = uVar3;
        if ((3 < uVar3 - 0xf7) || (uVar3 - 0xf7 == 1)) goto LAB_008cdc38;
        bVar7 = true;
      }
      bVar7 = (bool)(bVar7 ^ 1);
    }
    else {
      bVar7 = false;
    }
  }
  iVar4 = DAT_04ced030;
  iVar10 = 2;
  if (DAT_04ced030 != 0) {
    iVar10 = 3;
  }
  if (uVar8 < 3) {
    if ((*(uint *)(lVar18 + 0x8c) >> 0x18 & 1) == 0) {
      uVar8 = *(uint *)(lVar18 + 0x8c) & 0x2000000;
      goto LAB_008cdda0;
    }
    goto LAB_008cddc8;
  }
  lVar16 = *(long *)puVar6;
  if ((lVar16 == 0) || (*(int *)(lVar16 + 0x588) == 0)) {
    if (DAT_054f5738 == 0) {
      if ((DAT_054f0960 & 1) == 0) {
        iVar11 = __cxa_guard_acquire(&DAT_054f0960);
        puVar17 = (uint *)&DAT_054f0958;
        if (iVar11 != 0) {
          DAT_054f0958 = 0;
          __cxa_guard_release(&DAT_054f0960);
        }
      }
      else {
        puVar17 = (uint *)&DAT_054f0958;
      }
    }
    else {
      puVar17 = (uint *)(DAT_054f5738 + 0x204);
      if (local_38[0] < 8) {
        puVar17 = puVar17 + (ulong)local_38[0] * 2;
      }
    }
    local_34 = 0x19;
    if ((*puVar17 >> 0x19 & 1) == 0) goto LAB_008cdd08;
LAB_008cdcfc:
    bVar20 = *(byte *)(lVar18 + 0x8e) >> 4 & 1;
  }
  else {
    if (*piVar1 == 3) goto LAB_008cdcfc;
LAB_008cdd08:
    bVar20 = 0;
  }
  lVar16 = *(long *)puVar6;
  if ((lVar16 == 0) || (*(int *)(lVar16 + 0x588) == 0)) {
    if (DAT_054f5738 == 0) {
      if ((DAT_054f0960 & 1) == 0) {
        iVar11 = __cxa_guard_acquire(&DAT_054f0960);
        puVar17 = (uint *)&DAT_054f0958;
        if (iVar11 != 0) {
          DAT_054f0958 = 0;
          __cxa_guard_release(&DAT_054f0960);
        }
      }
      else {
        puVar17 = (uint *)&DAT_054f0958;
      }
    }
    else {
      puVar17 = (uint *)(DAT_054f5738 + 0x204);
      if (local_38[0] < 8) {
        puVar17 = puVar17 + (ulong)local_38[0] * 2;
      }
    }
    if ((*puVar17 >> 0x19 & 1) != 0) goto LAB_008cdd94;
  }
  else if (*piVar1 == 3) {
LAB_008cdd94:
    if (bVar20 == 0) {
      uVar8 = *(uint *)(lVar18 + 0x8c) & 0x200000;
LAB_008cdda0:
      if (uVar8 == 0) {
        return iVar2;
      }
      if (iVar2 + 1 < iVar10) {
        iVar10 = iVar2 + 1;
      }
      iVar2 = 3;
      if (iVar10 != 2 || iVar4 != 2) {
        iVar2 = iVar10;
      }
      return iVar2;
    }
    goto LAB_008cddc8;
  }
  if (bVar20 == 0) {
    return iVar2;
  }
LAB_008cddc8:
  iVar10 = 2;
  if (iVar2 != 3 || iVar4 != 2) {
    iVar10 = iVar2;
  }
  iVar2 = iVar10;
  if (iVar10 < 2) {
    iVar2 = 1;
  }
  if (iVar2 + -1 != 0) {
    bVar7 = true;
  }
  iVar2 = iVar2 + -1;
  if (!bVar7) {
    iVar2 = iVar10;
  }
  return iVar2;
}

