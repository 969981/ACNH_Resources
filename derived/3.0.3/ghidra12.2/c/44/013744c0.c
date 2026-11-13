
/* WARNING: Removing unreachable block (ram,0x013746a0) */
/* WARNING: Removing unreachable block (ram,0x013746b0) */
/* WARNING: Removing unreachable block (ram,0x013746bc) */

void FUN_013744c0(uint *param_1,uint *param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  long lVar5;
  ulong uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  undefined8 *puVar11;
  long lVar12;
  int iVar13;
  int iVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined **local_98;
  undefined1 local_90;
  undefined **local_88;
  undefined *local_78;
  char *pcStack_70;
  undefined8 local_68;
  undefined *puStack_60;
  undefined8 local_58;
  
  uVar10 = param_1[1];
  if ((uVar10 & 1) == 0) {
    param_1[1] = uVar10 | 1;
    uVar8 = uVar10 & 0xfffffffd | 1;
    if ((char)param_2[0xf] != '\0') {
      uVar8 = uVar10 | 3;
    }
    param_1[1] = uVar8;
    param_1[1] = uVar8 & 0xfffffffb | (uint)*(byte *)((long)param_2 + 0x3d) << 2;
    uVar10 = *param_2;
    *param_1 = uVar10;
    if ((uVar10 & 0xfffffffe) == 2) {
      uVar10 = param_2[6];
      param_1[6] = uVar10;
      uVar9 = param_2[7];
      param_1[7] = uVar9;
      uVar8 = param_2[10];
      param_1[10] = uVar8;
      uVar7 = param_2[0xb];
    }
    else {
      iVar2 = ((int)((float)(int)(float)param_2[0xc] / 10.0) - (uint)((float)param_2[0xc] < 0.0)) +
              *(int *)(PTR_DAT_04bbbd98 + 8);
      iVar4 = ((int)((float)(int)(float)param_2[0xe] / 10.0) - (uint)((float)param_2[0xe] < 0.0)) +
              *(int *)(PTR_DAT_04bbbd98 + 0xc);
      fVar15 = (float)(iVar2 + -0x14) * 10.0 + 2.5;
      fVar17 = (float)(iVar4 + -0x28) * 10.0 + 2.5;
      uVar8 = (int)((float)(int)fVar15 / 5.0) - (uint)(fVar15 < 0.0);
      fVar15 = (float)(iVar2 + 0x13) * 10.0 + 10.0 + -2.5;
      fVar16 = (float)(iVar4 + 0xf) * 10.0 + 10.0 + -2.5;
      uVar7 = (int)((float)(int)fVar17 / 5.0) - (uint)(fVar17 < 0.0);
      uVar9 = (int)((float)(int)fVar15 / 5.0) - (uint)(fVar15 < 0.0);
      uVar3 = (int)((float)(int)fVar16 / 5.0) - (uint)(fVar16 < 0.0);
      uVar10 = uVar8;
      if ((int)uVar9 <= (int)uVar8) {
        uVar10 = uVar9;
      }
      if ((int)uVar8 <= (int)uVar9) {
        uVar8 = uVar9;
      }
      param_1[10] = uVar8;
      uVar9 = uVar7;
      if ((int)uVar3 <= (int)uVar7) {
        uVar9 = uVar3;
      }
      if ((int)uVar7 <= (int)uVar3) {
        uVar7 = uVar3;
      }
      param_1[6] = uVar10;
      param_1[7] = uVar9;
    }
    param_1[0xb] = uVar7;
    local_78 = (undefined *)((ulong)local_78 & 0xffffffff00000000);
    if ((*(long *)(*(long *)PTR_DAT_04bb27a8 + 0x1f8) != 0) &&
       (lVar12 = *(long *)(*(long *)(*(long *)PTR_DAT_04bb27a8 + 0x1f8) + 0xb0), lVar12 != 0)) {
      fVar15 = (float)(int)uVar10 * 0.5;
      uVar10 = 0;
      if (fVar15 != (float)(int)fVar15) {
        uVar10 = (uint)(fVar15 < 0.0);
      }
      iVar2 = (int)fVar15 - uVar10;
      fVar15 = (float)(int)uVar9 * 0.5;
      uVar10 = 0;
      if (fVar15 != (float)(int)fVar15) {
        uVar10 = (uint)(fVar15 < 0.0);
      }
      iVar4 = (int)fVar15 - uVar10;
      fVar15 = (float)(int)uVar8 * 0.5;
      uVar10 = 0;
      if (fVar15 != (float)(int)fVar15) {
        uVar10 = (uint)(fVar15 < 0.0);
      }
      iVar13 = (int)fVar15 - uVar10;
      fVar15 = (float)(int)uVar7 * 0.5;
      uVar10 = 0;
      if (fVar15 != (float)(int)fVar15) {
        uVar10 = (uint)(fVar15 < 0.0);
      }
      iVar14 = (int)fVar15 - uVar10;
      iVar1 = iVar2;
      if (iVar13 <= iVar2) {
        iVar1 = iVar13;
      }
      if (iVar2 <= iVar13) {
        iVar2 = iVar13;
      }
      iVar13 = iVar4;
      if (iVar14 <= iVar4) {
        iVar13 = iVar14;
      }
      if (iVar4 <= iVar14) {
        iVar4 = iVar14;
      }
      if (iVar4 + 1 != iVar13) {
        iVar14 = iVar1;
        do {
          uVar10 = iVar14 - *(int *)(lVar12 + 0x28);
          uVar8 = iVar13 - *(int *)(lVar12 + 0x2c);
          if ((uVar10 < *(uint *)(lVar12 + 0x18) && uVar8 <= *(uint *)(lVar12 + 0x1c)) &&
              (*(uint *)(lVar12 + 0x18) <= uVar10 || *(uint *)(lVar12 + 0x1c) != uVar8)) {
            lVar5 = lVar12 + 0x40;
LAB_01374808:
            FUN_0138367c(lVar5);
          }
          else if (((*(char *)(lVar12 + 0x88) != '\0') &&
                   ((uint)(iVar14 - *(int *)(lVar12 + 0x98)) < *(uint *)(lVar12 + 0xa0))) &&
                  ((uint)(iVar13 - *(int *)(lVar12 + 0x9c)) < *(uint *)(lVar12 + 0xa4))) {
            lVar5 = lVar12 + 0xa8;
            goto LAB_01374808;
          }
          if (iVar14 < iVar2) {
            iVar14 = iVar14 + 1;
          }
          else {
            iVar13 = iVar13 + 1;
            iVar14 = iVar1;
          }
        } while ((iVar1 != iVar14) || (iVar4 + 1 != iVar13));
      }
    }
    local_58 = 0;
    local_78 = PTR_DAT_04bbc1a0 + 0x10;
    pcStack_70 = PTR_DAT_04bb2010 + 0x10;
    local_90 = 0;
    local_68 = 0;
    local_98 = &PTR_FUN_04993830;
    local_88 = &local_78;
    iVar2 = *(int *)(*(long *)PTR_DAT_04bb3968 + 0xb88);
    puStack_60 = pcStack_70;
    if (iVar2 != 0) {
      lVar12 = (long)iVar2 << 3;
      puVar11 = *(undefined8 **)(*(long *)PTR_DAT_04bb3968 + 0xb90);
      do {
        (*(code *)*local_98)(&local_98,*puVar11);
        lVar12 = lVar12 + -8;
        puVar11 = puVar11 + 1;
      } while (lVar12 != 0);
    }
    FUN_011e41b8(0);
    FUN_019535ac(*(undefined8 *)PTR_DAT_04bb47e0,0);
    local_78 = PTR_DAT_04bb2020 + 0x10;
    lVar12 = *(long *)PTR_DAT_04bb4850;
    pcStack_70 = "FlightBalloonEnable";
    uVar6 = FUN_0273f0a0(&local_78);
    if ((uVar6 & 1) != 0) {
      *(undefined2 *)(lVar12 + 8) = 0x100;
    }
  }
  return;
}

