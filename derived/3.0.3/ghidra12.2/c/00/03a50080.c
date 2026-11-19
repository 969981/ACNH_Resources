
void FUN_03a50080(long param_1,long param_2)

{
  long *plVar1;
  int *piVar2;
  uint *puVar3;
  char cVar4;
  undefined4 uVar5;
  ushort uVar6;
  bool bVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  byte *pbVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  ulong uVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  ulong uVar24;
  int iVar25;
  long lVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  byte bVar33;
  undefined **local_118;
  undefined8 local_110;
  undefined **local_108;
  undefined8 local_100;
  undefined **local_f8;
  undefined8 local_f0;
  undefined **local_e8;
  undefined8 local_e0;
  float local_d8;
  float fStack_d4;
  float local_d0;
  float fStack_cc;
  float local_c8;
  float fStack_c4;
  float local_c0;
  float fStack_bc;
  int local_b8;
  long local_b0;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  
  cVar4 = (*(int *)(param_1 + 0x20) == 3) << 1;
  if (*(int *)(param_1 + 0x20) == 2) {
    cVar4 = '\x01';
  }
  *(char *)(param_2 + 9) = cVar4;
  bVar33 = *(byte *)(param_1 + 0x28);
  fVar27 = (float)NEON_ucvtf((uint)*(byte *)(param_1 + 0x2b));
  fVar30 = (float)NEON_ucvtf((uint)*(byte *)(param_1 + 0x2a));
  fVar31 = (float)NEON_ucvtf((uint)*(byte *)(param_1 + 0x29));
  *(float *)(param_2 + 0x344) = fVar27 / 255.0;
  fVar27 = (float)NEON_ucvtf((uint)bVar33);
  *(float *)(param_2 + 0x348) = fVar30 / 255.0;
  *(float *)(param_2 + 0x34c) = fVar31 / 255.0;
  *(float *)(param_2 + 0x350) = fVar27 / 255.0;
  uVar14 = *(uint *)(param_1 + 0x10);
  if ((uVar14 >> 4 & 1) != 0) {
    *(undefined8 *)(param_2 + 0x2d8) = 0;
    uVar14 = *(uint *)(param_1 + 0x10);
  }
  if ((uVar14 >> 5 & 1) != 0) {
    *(undefined8 *)(param_2 + 0x2e0) = 0;
    uVar14 = *(uint *)(param_1 + 0x10);
  }
  if ((uVar14 >> 6 & 1) != 0) {
    *(undefined8 *)(param_2 + 0x2e8) = 0;
  }
  uVar14 = (uint)*(byte *)(param_2 + 8);
  if (*(uint *)(param_1 + 0x68) <= (uint)*(byte *)(param_2 + 8)) {
    uVar14 = 0;
  }
  pbVar15 = (byte *)(*(long *)(param_1 + 0x70) + (ulong)uVar14 * 0x18);
  lVar19 = *(long *)(pbVar15 + 0x10);
  bVar33 = 0;
  if ((int)(uint)(byte)(*pbVar15 + 1) < (int)*(uint *)(pbVar15 + 8)) {
    bVar33 = *pbVar15 + 1;
  }
  *pbVar15 = bVar33;
  uVar14 = (uint)bVar33;
  if (*(uint *)(pbVar15 + 8) <= (uint)bVar33) {
    uVar14 = 0;
  }
  uVar20 = (ulong)uVar14;
  lVar16 = lVar19 + uVar20 * 0x350;
  uVar14 = *(uint *)(lVar16 + 0x244);
  if (0 < (int)uVar14) {
    lVar17 = lVar19 + uVar20 * 0x350;
    uVar13 = *(uint *)(lVar17 + 0x248);
    if (uVar14 <= uVar13) {
      uVar13 = uVar14;
    }
    if (uVar13 == 0) {
      iVar25 = *(int *)(param_1 + 100);
    }
    else {
      lVar18 = *(long *)(lVar17 + 0x250);
      uVar14 = 0;
      fVar27 = *(float *)(lVar16 + 0xe4) - *(float *)(lVar16 + 0xe0);
      lVar17 = lVar19 + uVar20 * 0x350;
      plVar1 = (long *)(lVar17 + 0x2d0);
      do {
        bVar33 = *(byte *)(lVar17 + 0x309);
        uVar6 = *(ushort *)(lVar17 + 0x30a);
        iVar25 = *(int *)(lVar17 + 0x300);
        iVar8 = (**(code **)(*plVar1 + 0x20))(plVar1);
        iVar9 = (**(code **)(*plVar1 + 0x20))(plVar1);
        lVar23 = *(long *)(lVar17 + 0x2f0);
        if (lVar23 != 0) {
          uVar5 = *(undefined4 *)(lVar17 + 0x300);
          iVar11 = *(int *)(lVar17 + 0x2e8);
          uVar10 = (*DAT_04c62000)(lVar23);
          if ((uVar10 >> 2 & 1) != 0) {
            (*DAT_04c61fe0)(lVar23,iVar11 + ((iVar25 + iVar8) - 1U & -iVar9) *
                                            (uVar14 + (uint)uVar6 * (uint)bVar33),uVar5);
          }
        }
        lVar23 = *(long *)(lVar17 + 0x2e0);
        iVar25 = *(int *)(lVar17 + 0x300);
        iVar8 = (**(code **)(*plVar1 + 0x20))(plVar1);
        iVar9 = (**(code **)(*plVar1 + 0x20))(plVar1);
        lVar21 = **(long **)(lVar17 + 0x2d8);
        (**(code **)(*plVar1 + 0x18))(plVar1,*(undefined1 *)(lVar21 + 8));
        piVar2 = (int *)((ulong)*(ushort *)(lVar21 + 4) +
                        lVar23 + (long)(int)uVar14 * (ulong)((iVar25 + iVar8) - 1U & -iVar9));
        iVar8 = *piVar2;
        fVar30 = (float)NEON_ucvtf(piVar2[3]);
        fVar29 = *(float *)(lVar16 + 0xe0);
        fVar31 = 0.0;
        if (0.0 < fVar30 / 65535.0) {
          fVar31 = (fVar30 / 65535.0) / (float)iVar8;
        }
        iVar25 = *(int *)(param_1 + 100);
        if (0 < iVar25) {
          fVar30 = (float)NEON_ucvtf(piVar2[1]);
          fVar32 = (float)NEON_ucvtf(piVar2[2]);
          uVar24 = 0;
          iVar9 = 4;
          lVar21 = lVar18 + (long)(int)uVar14 * 0x130;
          lVar23 = lVar21 + 0x30;
          do {
            lVar22 = *(long *)(lVar17 + 0x2e0);
            iVar25 = *(int *)(lVar17 + 0x300);
            iVar11 = (**(code **)(*plVar1 + 0x20))(plVar1);
            iVar12 = (**(code **)(*plVar1 + 0x20))(plVar1);
            lVar26 = **(long **)(lVar17 + 0x2d8);
            uVar10 = (**(code **)(*plVar1 + 0x18))(plVar1,*(undefined1 *)(lVar26 + 8));
            puVar3 = (uint *)((ulong)*(ushort *)(lVar26 + 4) + (long)(int)(iVar9 * (uVar10 & 0xff))
                             + lVar22 + (long)(int)uVar14 *
                                        (ulong)((iVar25 + iVar11) - 1U & -iVar12));
            if (iVar8 < 1) {
              local_c0 = 0.0;
            }
            else {
              fVar28 = (float)NEON_ucvtf(puVar3[2]);
              local_c0 = ((fVar28 / 255.0) * 16.0) / (float)iVar8;
            }
            bVar7 = 0xf < uVar24;
            uVar24 = uVar24 + 1;
            local_d8 = ((float)(*puVar3 >> 0x10) / 65535.0) * 16.0;
            local_d0 = ((float)(puVar3[1] >> 0x10) / 65535.0) * 16.0;
            local_118 = &PTR_LAB_048f9770;
            local_108 = &PTR_LAB_048f9770;
            local_f8 = &PTR_LAB_048f9770;
            local_e8 = &PTR_LAB_048f9770;
            local_110 = *(undefined8 *)(lVar21 + 8);
            local_100 = *(undefined8 *)(lVar21 + 0x18);
            local_f0 = *(undefined8 *)(lVar21 + 0x28);
            lVar22 = lVar23;
            if (bVar7) {
              lVar22 = lVar21 + 0x30;
            }
            local_e0 = *(undefined8 *)(lVar22 + 8);
            fStack_d4 = ((float)(*puVar3 & 0xffff) / -65535.0) * fVar27 - *(float *)(lVar16 + 0xe0);
            fStack_cc = ((float)(puVar3[1] & 0xffff) / -65535.0) * fVar27 -
                        *(float *)(lVar16 + 0xe0);
            local_a8 = *(undefined4 *)(lVar17 + 0x238);
            local_a4 = *(undefined4 *)(lVar17 + 0x23c);
            local_a0 = *(undefined4 *)(lVar17 + 0x240);
            local_c8 = (fVar30 / -65535.0) * fVar27 - fVar29;
            fStack_c4 = (fVar32 / -65535.0) * fVar27 - fVar29;
            fStack_bc = -fVar29 - fVar27 * fVar31;
            local_b8 = iVar8;
            local_b0 = lVar16;
            (*(code *)**(undefined8 **)(param_1 + 0x78))(param_1 + 0x78,&local_118);
            iVar25 = *(int *)(param_1 + 100);
            lVar23 = lVar23 + 0x10;
            iVar9 = iVar9 + 4;
          } while ((long)uVar24 < (long)iVar25);
        }
        uVar14 = uVar14 + 1;
      } while (uVar13 != uVar14);
      uVar14 = *(uint *)(lVar16 + 0x244);
      if ((int)uVar14 < 1) goto LAB_03a505a0;
    }
    lVar19 = lVar19 + uVar20 * 0x350;
    uVar20 = 0;
    plVar1 = (long *)(lVar19 + 0x2d0);
    do {
      local_118 = (undefined **)0xffffffff00000000;
      local_110 = 0;
      lVar16 = *(long *)(lVar19 + 0x2e0);
      iVar8 = *(int *)(lVar19 + 0x300);
      iVar9 = (**(code **)(*plVar1 + 0x20))(plVar1);
      iVar11 = (**(code **)(*plVar1 + 0x20))(plVar1);
      lVar17 = **(long **)(lVar19 + 0x2d8);
      bVar33 = (&DAT_041b370c)[(ulong)*(byte *)(lVar17 + 8) * 4];
      (**(code **)(*plVar1 + 0x18))(plVar1);
      if ((ulong)bVar33 != 0) {
        memcpy((void *)(lVar16 + uVar20 * ((iVar8 + iVar9) - 1U & -iVar11) +
                       (ulong)*(ushort *)(lVar17 + 4)),&local_118,(ulong)bVar33 << 2);
      }
      if (0 < iVar25) {
        iVar8 = 0;
        do {
          iVar8 = iVar8 + 1;
          local_118 = (undefined **)0xffffffff;
          local_110 = 0;
          lVar16 = *(long *)(lVar19 + 0x2e0);
          iVar9 = *(int *)(lVar19 + 0x300);
          iVar11 = (**(code **)(*plVar1 + 0x20))(plVar1);
          iVar12 = (**(code **)(*plVar1 + 0x20))(plVar1);
          lVar17 = **(long **)(lVar19 + 0x2d8);
          bVar33 = (&DAT_041b370c)[(ulong)*(byte *)(lVar17 + 8) * 4];
          uVar13 = (**(code **)(*plVar1 + 0x18))(plVar1);
          if ((ulong)bVar33 != 0) {
            memcpy((void *)(lVar16 + uVar20 * ((iVar9 + iVar11) - 1U & -iVar12) +
                            (ulong)*(ushort *)(lVar17 + 4) + (ulong)(iVar8 * (uVar13 & 0xff)) * 4),
                   &local_118,(ulong)bVar33 << 2);
          }
        } while (iVar25 != iVar8);
      }
      bVar33 = *(byte *)(lVar19 + 0x309);
      uVar6 = *(ushort *)(lVar19 + 0x30a);
      iVar8 = *(int *)(lVar19 + 0x300);
      iVar9 = (**(code **)(*plVar1 + 0x20))(plVar1);
      iVar11 = (**(code **)(*plVar1 + 0x20))(plVar1);
      lVar16 = *(long *)(lVar19 + 0x2f0);
      if (lVar16 != 0) {
        uVar5 = *(undefined4 *)(lVar19 + 0x300);
        iVar12 = *(int *)(lVar19 + 0x2e8);
        uVar13 = (*DAT_04c62000)(lVar16);
        if ((uVar13 >> 2 & 1) != 0) {
          (*DAT_04c61fd8)(lVar16,iVar12 + ((iVar8 + iVar9) - 1U & -iVar11) *
                                          ((int)uVar20 + (uint)uVar6 * (uint)bVar33),uVar5);
        }
      }
      uVar20 = uVar20 + 1;
    } while (uVar20 != uVar14);
  }
LAB_03a505a0:
  FUN_03a51170(*(undefined8 *)(param_1 + 0xb8));
  return;
}

