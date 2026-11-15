
void FUN_0205dcb0(long param_1)

{
  byte *pbVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  byte *pbVar6;
  byte bVar7;
  uint uVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  bool bVar12;
  int *piVar13;
  int iVar14;
  uint uVar15;
  long lVar16;
  int iVar17;
  int iVar18;
  long lVar19;
  ulong uVar20;
  long *plVar21;
  long *plVar22;
  uint uVar23;
  uint *puVar24;
  undefined4 uVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  undefined8 local_a0;
  float local_98;
  uint local_94;
  
  plVar21 = (long *)PTR_DAT_04bb4948;
  puVar10 = PTR_DAT_04bb27d0;
  puVar9 = PTR_DAT_04bb27a8;
  lVar16 = *(long *)PTR_DAT_04bb4948;
  if (lVar16 == 0) {
LAB_0205dd1c:
    iVar14 = 0;
    iVar17 = 0;
  }
  else {
    lVar19 = *(long *)PTR_DAT_04bb27a8;
    if (lVar19 == 0) {
      iVar14 = 0;
      iVar17 = 0;
    }
    else {
      if ((*(ushort *)(lVar19 + 0x4b68) & 1) == 0) goto LAB_0205dd1c;
      iVar14 = *(int *)(lVar19 + 0x4b6c);
      iVar17 = *(int *)(lVar19 + 0x4b70);
      lVar19 = 0x170;
      lVar5 = lVar16 + 0x170;
      if (*(byte *)(**(long **)PTR_DAT_04bb27d0 + 0x476) < 2) {
        lVar19 = 0x138;
        lVar5 = lVar16 + 0x138;
      }
      piVar13 = (int *)(**(code **)(*(long *)(lVar16 + lVar19) + 0xf0))(lVar5);
      iVar14 = *piVar13 + iVar14 * 0x20;
      iVar17 = piVar13[1] + iVar17 * 0x20;
    }
  }
  puVar11 = PTR_DAT_04bb4760;
  lVar16 = **(long **)puVar10;
  bVar7 = *(byte *)(lVar16 + 0x473);
  if ((long)(char)bVar7 == 0xffffffffffffffff) {
LAB_0205dda8:
    if (*(int *)(PTR_DAT_04bc3a80 + 0x38) != -0x24a26848) goto LAB_0205de04;
  }
  else {
    pbVar1 = (byte *)(lVar16 + 0x48);
    uVar20 = (long)(char)bVar7 & 0xffffffff;
    pbVar6 = pbVar1 + uVar20 * 0x80;
    if (7 < bVar7) {
      pbVar6 = pbVar1;
    }
    if ((*pbVar6 >> 3 & 1) == 0) goto LAB_0205dda8;
    lVar16 = (*(long **)puVar10)[2] + 0x108;
    lVar19 = lVar16 + uVar20 * 0xc;
    if (0xb < bVar7) {
      lVar19 = lVar16;
    }
    if (*(char *)(lVar19 + 10) == '\0' || *(int *)(PTR_DAT_04bc3a80 + 0x38) != -0x24a26848)
    goto LAB_0205de04;
  }
  uVar23 = 0;
  lVar16 = 0;
  fVar28 = (float)(iVar14 + 1) * 5.0 + 5.0;
  plVar22 = (long *)PTR_DAT_04bb27c8;
  puVar24 = (uint *)(param_1 + 0x90);
  do {
    if (6 < *puVar24 || (1 << (ulong)(*puVar24 & 0x1f) & 0x71U) == 0) {
      uVar15 = (uint)lVar16;
      local_a0 = 0;
      local_98 = 0.0;
      pbVar1 = *(byte **)puVar11 + (ulong)(uVar15 + 0x62) * 0x15;
      if (0x6c < uVar15 + 0x62) {
        pbVar1 = *(byte **)puVar11;
      }
      local_94 = pbVar1[7] >> 2 & 3;
      if ((pbVar1[7] >> 2 & 3) == 0) {
        bVar7 = pbVar1[1];
        uVar3 = (uint)*pbVar1 | (bVar7 & 0xf) << 8;
        if ((bVar7 & 8) != 0) {
          uVar3 = uVar3 | 0xfffff000;
        }
        local_a0 = (ulong)(uint)(float)(int)uVar3;
        uVar8 = (uint)(bVar7 >> 4) | (uint)pbVar1[2] << 4;
        uVar4 = uVar8 | 0xfffff000;
        if (-1 < (char)pbVar1[2]) {
          uVar4 = uVar8;
        }
        local_98 = (float)(int)uVar4;
        lVar19 = *plVar22;
        if (((lVar19 == 0) || (*(long *)(lVar19 + 0xa8) == 0)) ||
           (*(char *)(lVar19 + 0x11c8) != '\0')) {
          uVar25 = 0xc3fa0000;
          fVar26 = (float)(int)uVar3;
        }
        else {
          uVar25 = FUN_0093a950(lVar19 + 0x28,&local_a0,0);
          plVar21 = (long *)PTR_DAT_04bb4948;
          plVar22 = (long *)PTR_DAT_04bb27c8;
          fVar26 = (float)local_a0;
        }
        local_a0 = CONCAT44(uVar25,(float)local_a0);
        if (*(char *)(param_1 + 0x2f8) == '\0') {
code_r0x0205dfe4:
          bVar12 = false;
          if (((float)iVar14 * 5.0 <= fVar26) && (bVar12 = false, !NAN(fVar26) && !NAN(fVar28))) {
            bVar12 = fVar26 < fVar28;
          }
          if (((!bVar12) || (local_98 < (float)iVar17 * 5.0)) ||
             ((float)(iVar17 + 1) * 5.0 + 5.0 <= local_98)) goto LAB_0205dec0;
        }
        else {
          fVar27 = (float)*(int *)(param_1 + 0x2f0) * 5.0 + 5.0;
          bVar12 = false;
          if (((float)*(int *)(param_1 + 0x2e0) * 5.0 <= fVar26) &&
             (bVar12 = false, !NAN(fVar26) && !NAN(fVar27))) {
            bVar12 = fVar26 < fVar27;
          }
          if (((!bVar12) || (local_98 < (float)*(int *)(param_1 + 0x2e4) * 5.0)) ||
             ((float)*(int *)(param_1 + 0x2f4) * 5.0 + 5.0 <= local_98)) goto code_r0x0205dfe4;
        }
        if ((uVar15 < 10) && (lVar19 = *plVar21, lVar19 != 0)) {
          piVar13 = (int *)(**(code **)(*(long *)(lVar19 + 0x1a8) + 0xf0))(lVar19 + 0x1a8);
          plVar21 = (long *)PTR_DAT_04bb4948;
          plVar22 = (long *)PTR_DAT_04bb27c8;
          lVar19 = *(long *)puVar9;
          if ((lVar19 != 0) && ((*(ushort *)(lVar19 + 0x4b68) & 1) != 0)) {
            iVar18 = piVar13[1] + (uVar15 & 0xfffffffe) + *(int *)(lVar19 + 0x4b70) * 0x20;
            iVar2 = *piVar13 + (uVar23 & 2) + *(int *)(lVar19 + 0x4b6c) * 0x20;
            uVar15 = (uint)(((float)iVar18 * 5.0 + (float)(iVar18 + 1) * 5.0 + 5.0) * 0.5);
            iVar18 = (int)(((float)iVar2 * 5.0 + (float)(iVar2 + 1) * 5.0 + 5.0) * 0.5);
            pbVar1[2] = (byte)(uVar15 >> 4);
            *pbVar1 = (byte)iVar18;
            pbVar1[7] = pbVar1[7] & 0xf3;
            pbVar1[1] = (byte)(uVar15 << 4) | (byte)((uint)iVar18 >> 8) & 0xf;
          }
        }
      }
    }
LAB_0205dec0:
    lVar16 = lVar16 + 1;
    uVar23 = uVar23 + 2;
    puVar24 = puVar24 + 0xe;
  } while (lVar16 != 10);
LAB_0205de04:
  if (*(char *)(param_1 + 0x2f8) != '\0') {
    (*(code *)**(undefined8 **)(param_1 + 0x2d0))(param_1 + 0x2d0);
    *(undefined1 *)(param_1 + 0x2f8) = 0;
  }
  return;
}

