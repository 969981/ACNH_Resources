
uint FUN_02acaa90(uint *param_1,float *param_2)

{
  uint uVar1;
  byte bVar2;
  undefined *puVar3;
  int iVar4;
  uint uVar5;
  ulong uVar6;
  long *plVar7;
  byte *pbVar8;
  long lVar9;
  uint *puVar10;
  long *plVar11;
  uint uVar12;
  uint *puVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  byte local_18 [4];
  undefined4 local_14;
  
  fVar14 = (float)NEON_ucvtf(param_2[3]);
  fVar15 = sinf(fVar14 * 1.4629181e-09);
  fVar16 = cosf(fVar14 * 1.4629181e-09);
  iVar4 = 0;
  fVar14 = fVar15 * 0.0;
  fVar17 = *param_2 + fVar14 * 0.0 + fVar16 * 0.0 + (fVar15 + 0.0) * 7.5;
  fVar18 = param_2[1] + (fVar14 * 0.0 + 1.0) * 0.0 + fVar16 * 0.0 * 0.0 + fVar14 * 7.5;
  fVar14 = 3.4028235e+38;
  fVar15 = param_2[2] + (fVar16 * 0.0 * 0.0 - fVar15 * 0.0) + fVar16 * 7.5;
  puVar13 = (uint *)(*(long *)PTR_DAT_04bb5008 + 0x1fd0);
  do {
    puVar10 = (uint *)(*(long *)PTR_DAT_04bb5008 + 0x1fd0) + (long)iVar4 * 5;
    iVar4 = iVar4 + 1;
    fVar19 = fVar18 - (float)puVar10[3];
    fVar16 = fVar17 - (float)puVar10[2];
    fVar20 = fVar15 - (float)puVar10[4];
    fVar16 = SQRT(fVar19 * fVar19 + fVar16 * fVar16 + fVar20 * fVar20);
    if (fVar14 <= fVar16) {
      puVar10 = puVar13;
      fVar16 = fVar14;
    }
    fVar14 = fVar16;
    puVar13 = puVar10;
  } while (iVar4 != 0x24);
  fVar18 = (float)puVar10[3] - fVar18;
  fVar17 = (float)puVar10[2] - fVar17;
  fVar15 = (float)puVar10[4] - fVar15;
  if (SQRT(fVar18 * fVar18 + fVar17 * fVar17 + fVar15 * fVar15) <= 6.0) {
    local_14 = 0;
    uVar6 = FUN_02b68b20(&local_14,(short)puVar10[1]);
    if ((uVar6 & 1) != 0) {
      lVar9 = *(long *)PTR_DAT_04bb39b0;
      pbVar8 = PTR_DAT_04bb32e0;
      if (lVar9 == 0) {
LAB_02acac38:
        if (*pbVar8 < 8) goto LAB_02acacb0;
LAB_02acac44:
        if (*(long **)PTR_DAT_04bb27d0 == (long *)0x0) {
LAB_02acaca8:
          pbVar8 = PTR_DAT_04bb5038;
          goto LAB_02acacb0;
        }
        lVar9 = **(long **)PTR_DAT_04bb27d0;
        bVar2 = *(byte *)(lVar9 + 0x473);
        pbVar8 = PTR_DAT_04bb5038;
        if ((long)(char)bVar2 != 0xffffffffffffffff) {
          puVar13 = (uint *)(lVar9 + 0x48) + ((long)(char)bVar2 & 0xffffffffU) * 0x20;
          if (7 < bVar2) {
            puVar13 = (uint *)(lVar9 + 0x48);
          }
          if ((*puVar13 & 8) != 0) {
            pbVar8 = (byte *)(lVar9 + 0x471);
          }
        }
        local_18[0] = *pbVar8;
        if (7 < local_18[0]) goto LAB_02acaca8;
      }
      else {
        if (*(int *)(lVar9 + 0x15c) != 0) {
          pbVar8 = (byte *)(lVar9 + 0x158);
        }
        if (7 < *pbVar8) {
          if ((*(int *)(lVar9 + 0x15c) != 0) && (*(long *)PTR_DAT_04bb4718 != 0)) {
            pbVar8 = (byte *)(*(long *)PTR_DAT_04bb4718 + 0x11a5);
            goto LAB_02acac38;
          }
          goto LAB_02acac44;
        }
LAB_02acacb0:
        local_18[0] = *pbVar8;
        if (7 < local_18[0]) {
          local_18[0] = 0xff;
        }
      }
      uVar6 = FUN_0266cce0(local_14,local_18);
      if ((uVar6 & 1) != 0) {
        uVar12 = *puVar10;
        *param_1 = uVar12;
        puVar3 = PTR_DAT_04bb27c0;
        lVar9 = *(long *)PTR_DAT_04bb27c0;
        if (lVar9 != 0) {
          if ((((uVar12 == 0) ||
               (plVar11 = *(long **)(*(long *)(*(long *)(lVar9 + 0x1c0) + 8) +
                                    ((ulong)(uVar12 >> 0x11) & 0x7ff8)), plVar11 == (long *)0x0)) ||
              ((*(uint *)(plVar11 + 0x49) >> 1 & 1) != 0)) || (*(uint *)(plVar11 + 0x46) != uVar12))
          {
            plVar11 = (long *)0x0;
          }
          if ((*(int *)(lVar9 + 0x288) == 1) || (*(int *)(lVar9 + 0x288) == -1)) {
            plVar7 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
            lVar9 = *(long *)puVar3;
            iVar4 = (**(code **)(*plVar7 + 0x60))();
            if (iVar4 < 0x11) {
              uVar12 = 1;
            }
            else {
              if (4 < *(uint *)(lVar9 + 0x5e8)) goto LAB_02acad80;
              uVar12 = 0x1aU >> (ulong)(*(uint *)(lVar9 + 0x5e8) & 0x1f) & 1;
            }
          }
          else {
LAB_02acad80:
            uVar12 = 0;
          }
          if (plVar11 != (long *)0x0) {
            lVar9 = plVar11[0x2a];
            if (((*PTR_DAT_04bc3010 & 1) == 0) &&
               (iVar4 = __cxa_guard_acquire(PTR_DAT_04bc3010), iVar4 != 0)) {
              *(undefined **)PTR_DAT_04bc3008 = PTR_DAT_04bc3018 + 0x10;
              __cxa_guard_release(PTR_DAT_04bc3010);
            }
            uVar6 = (**(code **)(*plVar11 + 0x20))(plVar11,PTR_DAT_04bc3008);
            uVar5 = 0;
            uVar1 = 0;
            if ((int)lVar9 == 1) {
              uVar1 = uVar12;
            }
            if (((uVar6 & 1) != 0) && (uVar1 != 0)) {
              uVar5 = FUN_02ac6634(plVar11);
            }
            goto LAB_02acade8;
          }
        }
      }
    }
  }
  uVar5 = 0;
LAB_02acade8:
  return uVar5 & 1;
}

