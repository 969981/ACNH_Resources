
undefined8 FUN_02041090(float *param_1,uint *param_2,ushort *param_3)

{
  float *pfVar1;
  uint uVar2;
  uint uVar3;
  ushort uVar4;
  ushort uVar5;
  uint uVar6;
  undefined *puVar7;
  bool bVar8;
  int iVar9;
  uint uVar10;
  undefined8 *puVar11;
  uint *puVar12;
  long lVar13;
  int iVar14;
  int iVar15;
  uint uVar16;
  int iVar17;
  ulong uVar18;
  int iVar19;
  int iVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  
  puVar7 = PTR_DAT_04bb2720;
  fVar23 = *(float *)PTR_DAT_04bb76e8;
  fVar22 = *(float *)(PTR_DAT_04bb76e8 + 8);
  lVar13 = *(long *)PTR_DAT_04bb2720;
  if ((lVar13 != 0) && (*(long *)(lVar13 + 0x330) != 0)) {
    puVar11 = (undefined8 *)
              (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                        (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar13 + 0x338));
    iVar9 = FUN_006bd550(*puVar11,0);
    if ((iVar9 == 0x758f7eaf) &&
       ((((*(long *)puVar7 != 0 && (lVar13 = *(long *)(*(long *)puVar7 + 0x330), lVar13 != 0)) &&
         (*(int *)(lVar13 + 0x260) != 0)) &&
        ((lVar13 = *(long *)(lVar13 + 600), lVar13 != 0 && (lVar13 != 0x40)))))) {
      fVar22 = (float)NEON_ucvtf(*(undefined4 *)(lVar13 + -0x20));
      fVar21 = *(float *)(lVar13 + -0x1c) + *(float *)(lVar13 + -0x24) * 0.5 + 0.0;
      pfVar1 = (float *)(PTR_DAT_04bb2d00 +
                        ((ulong)(long)(fVar22 * 11930465.0) >> 0x18 & 0xff) * 0x10);
      fVar22 = (float)((uint)(long)(fVar22 * 11930465.0) & 0xffffff) * 5.9604645e-08;
      fVar23 = *(float *)(lVar13 + -0x34) + fVar21 * (*pfVar1 + fVar22 * pfVar1[1]);
      fVar22 = *(float *)(lVar13 + -0x2c) + fVar21 * (pfVar1[2] + fVar22 * pfVar1[3]);
    }
  }
  uVar10 = (int)((float)(int)fVar23 / 5.0) - (uint)(fVar23 < 0.0) & 0xffff;
  *(undefined1 *)(param_3 + 0x24) = 1;
  uVar2 = (int)((float)(int)fVar22 / 5.0) - (uint)(fVar22 < 0.0) & 0xffff;
  FUN_035a8968(param_3,uVar10,uVar2);
  FUN_035a81f0(param_3,uVar10,uVar2,0);
  *(undefined1 *)(param_3 + 0x24) = 0;
  puVar7 = PTR_DAT_04bb5ce0;
  lVar13 = *(long *)PTR_DAT_04bb5ce0;
  if (lVar13 == 0) {
    iVar14 = 0;
    iVar9 = 0;
    iVar15 = 0x10;
    iVar17 = 0x10;
  }
  else {
    iVar9 = *(int *)(lVar13 + 0xd88);
    iVar14 = *(int *)(lVar13 + 0xd8c);
    iVar15 = *(int *)(lVar13 + 0xd98);
    iVar17 = *(int *)(lVar13 + 0xd9c);
  }
  iVar19 = iVar9 + -4;
  if ((iVar19 <= iVar15 + 4) && (iVar14 + -4 <= iVar17 + 8)) {
    do {
      iVar20 = iVar14 + -4;
      do {
        if ((iVar20 <= iVar14 || (iVar19 <= iVar9 || iVar15 < iVar19)) || (iVar17 < iVar20)) {
          lVar13 = *(long *)(param_3 + 0x20);
          uVar16 = (iVar19 - (uint)*param_3) + *(int *)(lVar13 + 0x1c) * (iVar20 - (uint)param_3[1])
          ;
          uVar2 = 1 << (ulong)(uVar16 & 0x1f);
          uVar10 = *(uint *)(*(long *)(lVar13 + 0x10) + (long)((int)uVar16 >> 5) * 4);
          if ((uVar2 & uVar10) != 0) {
            *(uint *)(*(long *)(lVar13 + 0x10) + ((long)((ulong)uVar16 << 0x20) >> 0x25) * 4) =
                 uVar10 & (uVar2 ^ 0xffffffff);
            *(int *)(lVar13 + 0x18) = *(int *)(lVar13 + 0x18) + -1;
          }
        }
        iVar20 = iVar20 + 1;
      } while ((-0xd - iVar17) + iVar20 != -4);
      bVar8 = iVar19 != iVar15 + 4;
      iVar19 = iVar19 + 1;
    } while (bVar8);
  }
  uVar10 = nn::os::GetSystemTick();
  uVar2 = (uVar10 ^ uVar10 >> 0x1e) * 0x6c078965 + 1;
  uVar10 = uVar2 ^ uVar2 * 0x800;
  uVar2 = (uVar2 ^ uVar2 >> 0x1e) * 0x6c078965 + 2;
  uVar16 = (uVar2 ^ uVar2 >> 0x1e) * 0x6c078965 + 3;
  uVar16 = (uVar16 ^ uVar16 >> 0x1e) * 0x6c078965 + 4;
  lVar13 = *(long *)(param_3 + 0x20);
  uVar10 = uVar10 >> 8 ^ uVar16 >> 0x13 ^ uVar10 ^ uVar16;
  if (0 < (int)*(uint *)(lVar13 + 8)) {
    uVar16 = 0;
    uVar18 = (ulong)*(uint *)(lVar13 + 0x18) * (ulong)uVar10 >> 0x20;
    do {
      if ((*(uint *)(*(long *)(lVar13 + 0x10) + (ulong)(uVar16 >> 5) * 4) >> (ulong)(uVar16 & 0x1f)
          & 1) != 0) {
        if ((int)uVar18 == 0) {
          iVar9 = *(int *)(lVar13 + 0x1c);
          iVar14 = 0;
          if (iVar9 != 0) {
            iVar14 = (int)uVar16 / iVar9;
          }
          iVar9 = uVar16 - iVar9 * iVar14;
          goto LAB_02041530;
        }
        uVar18 = (ulong)((int)uVar18 - 1);
      }
      uVar16 = uVar16 + 1;
    } while (*(uint *)(lVar13 + 8) != uVar16);
  }
  lVar13 = *(long *)puVar7;
  if (lVar13 == 0) {
    fVar22 = 40.0;
    fVar23 = 40.0;
  }
  else {
    fVar22 = *(float *)(lVar13 + 0xd74);
    fVar23 = *(float *)(lVar13 + 0xd7c);
  }
  uVar16 = (int)((float)(int)fVar22 / 5.0) - (uint)(fVar22 < 0.0) & 0xffff;
  *(undefined1 *)(param_3 + 0x24) = 1;
  uVar3 = (int)((float)(int)fVar23 / 5.0) - (uint)(fVar23 < 0.0) & 0xffff;
  FUN_035a8968(param_3,uVar16,uVar3);
  FUN_035a81f0(param_3,uVar16,uVar3,0);
  lVar13 = *(long *)puVar7;
  *(undefined1 *)(param_3 + 0x24) = 0;
  if (lVar13 == 0) {
    iVar14 = 0;
    iVar9 = 0;
    iVar15 = 0x10;
    iVar17 = 0x10;
  }
  else {
    iVar9 = *(int *)(lVar13 + 0xd88);
    iVar14 = *(int *)(lVar13 + 0xd8c);
    iVar15 = *(int *)(lVar13 + 0xd98);
    iVar17 = *(int *)(lVar13 + 0xd9c);
  }
  iVar19 = iVar9 + -4;
  if ((iVar19 <= iVar15 + 4) && (iVar14 + -4 <= iVar17 + 8)) {
    do {
      iVar20 = iVar14 + -4;
      do {
        if ((iVar20 <= iVar14 || (iVar19 <= iVar9 || iVar15 < iVar19)) || (iVar17 < iVar20)) {
          lVar13 = *(long *)(param_3 + 0x20);
          uVar6 = (iVar19 - (uint)*param_3) + *(int *)(lVar13 + 0x1c) * (iVar20 - (uint)param_3[1]);
          uVar3 = 1 << (ulong)(uVar6 & 0x1f);
          uVar16 = *(uint *)(*(long *)(lVar13 + 0x10) + (long)((int)uVar6 >> 5) * 4);
          if ((uVar3 & uVar16) != 0) {
            *(uint *)(*(long *)(lVar13 + 0x10) + ((long)((ulong)uVar6 << 0x20) >> 0x25) * 4) =
                 uVar16 & (uVar3 ^ 0xffffffff);
            *(int *)(lVar13 + 0x18) = *(int *)(lVar13 + 0x18) + -1;
          }
        }
        iVar20 = iVar20 + 1;
      } while ((-0xd - iVar17) + iVar20 != -4);
      bVar8 = iVar19 != iVar15 + 4;
      iVar19 = iVar19 + 1;
    } while (bVar8);
  }
  lVar13 = *(long *)(param_3 + 0x20);
  if (0 < (int)*(uint *)(lVar13 + 8)) {
    uVar2 = uVar2 ^ uVar2 * 0x800;
    uVar16 = 0;
    uVar18 = (ulong)*(uint *)(lVar13 + 0x18) * (ulong)(uVar2 >> 8 ^ uVar10 >> 0x13 ^ uVar2 ^ uVar10)
             >> 0x20;
    do {
      if ((*(uint *)(*(long *)(lVar13 + 0x10) + (ulong)(uVar16 >> 5) * 4) >> (ulong)(uVar16 & 0x1f)
          & 1) != 0) {
        if ((int)uVar18 == 0) {
          iVar9 = *(int *)(lVar13 + 0x1c);
          iVar14 = 0;
          if (iVar9 != 0) {
            iVar14 = (int)uVar16 / iVar9;
          }
          iVar9 = uVar16 - iVar9 * iVar14;
LAB_02041530:
          uVar4 = *param_3;
          uVar5 = param_3[1];
          if (param_1 != (float *)0x0) {
            *param_1 = (float)(int)(iVar9 + (uint)uVar4) * 5.0;
            param_1[2] = (float)(int)(iVar14 + (uint)uVar5) * 5.0;
          }
          puVar12 = (uint *)nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04bb39d8);
          iVar14 = iVar14 + (uint)uVar5 + -1;
          uVar2 = puVar12[3];
          uVar10 = *puVar12 ^ *puVar12 << 0xb;
          *puVar12 = puVar12[1];
          puVar12[1] = puVar12[2];
          uVar10 = uVar10 >> 8 ^ uVar2 >> 0x13 ^ uVar10 ^ uVar2;
          puVar12[2] = uVar2;
          puVar12[3] = uVar10;
          *param_2 = uVar10;
          iVar9 = iVar9 + (uint)uVar4 + -1;
          FUN_035a4360(param_3,iVar9,iVar14,0);
          FUN_035a4360(param_3,iVar9,iVar14 + (uint)DAT_057763a8,0);
          FUN_035a4360(param_3,iVar9 + (uint)DAT_057763b0,iVar14,0);
          FUN_035a4360(param_3,iVar9 + (uint)DAT_057763b8,iVar14 + (uint)DAT_057763c0,0);
          return 1;
        }
        uVar18 = (ulong)((int)uVar18 - 1);
      }
      uVar16 = uVar16 + 1;
    } while (*(uint *)(lVar13 + 8) != uVar16);
  }
  return 0;
}

