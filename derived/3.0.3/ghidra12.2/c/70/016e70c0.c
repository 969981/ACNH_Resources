
bool FUN_016e70c0(uint *param_1)

{
  ulong uVar1;
  uint uVar2;
  undefined *puVar3;
  bool bVar4;
  int iVar5;
  undefined8 *puVar6;
  long lVar7;
  long lVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  
  puVar3 = PTR_DAT_04bb2640;
  if ((DAT_05aed670 != 0) && (*(long *)(DAT_05aed670 + 0x330) != 0)) {
    puVar6 = (undefined8 *)
             (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                       (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(DAT_05aed670 + 0x338));
    iVar5 = FUN_006bd550(*puVar6,0);
    if (iVar5 != 0x758f7eaf) {
      return false;
    }
    if (((DAT_05aed670 != 0) && (*(long *)(DAT_05aed670 + 0x330) != 0)) &&
       (uVar2 = *(uint *)(*(long *)(DAT_05aed670 + 0x330) + 0x260), uVar2 != 0)) {
      uVar11 = 0;
      bVar4 = true;
      lVar7 = DAT_05aed670;
      do {
        param_1[0] = 0xffffffff;
        param_1[1] = 0x42200000;
        param_1[2] = 0;
        param_1[3] = 0x42aa0000;
        param_1[4] = 0x80000000;
        if ((lVar7 != 0) && (*(long *)(lVar7 + 0x330) != 0)) {
          puVar6 = (undefined8 *)
                   (**(code **)(**(long **)puVar3 + 0x18))
                             (*(long **)puVar3,*(undefined4 *)(lVar7 + 0x338));
          iVar5 = FUN_006bd550(*puVar6,0);
          lVar7 = DAT_05aed670;
          if (((iVar5 == 0x758f7eaf) &&
              ((DAT_05aed670 != 0 && (lVar8 = *(long *)(DAT_05aed670 + 0x330), lVar8 != 0)))) &&
             (uVar11 < *(uint *)(lVar8 + 0x260))) {
            uVar10 = uVar11 & ((int)uVar11 >> 0x1f ^ 0xffffffffU);
            lVar8 = lVar8 + 0x250;
            uVar9 = uVar10 + 1;
            if (6 < uVar10) {
              uVar10 = uVar9 & 0xfffffff8;
              do {
                uVar10 = uVar10 - 8;
                lVar8 = *(long *)(*(long *)(*(long *)(*(long *)(*(long *)(*(long *)(*(long *)(*(long
                                                                                                *)(
                                                  lVar8 + 8) + 8) + 8) + 8) + 8) + 8) + 8) + 8);
              } while (uVar10 != 0);
            }
            if ((uVar9 & 7) != 0) {
              uVar9 = uVar9 & 7;
              do {
                lVar8 = *(long *)(lVar8 + 8);
                uVar9 = uVar9 - 1;
              } while (uVar9 != 0);
            }
            if ((lVar8 != 0) && (lVar8 != 0x40)) {
              *param_1 = uVar11;
              fVar12 = (float)NEON_ucvtf(*(undefined4 *)(lVar8 + -0x20));
              fVar13 = *(float *)(lVar8 + -0x1c) + *(float *)(lVar8 + -0x24) * 0.5 + 0.0;
              uVar1 = (ulong)(long)(fVar12 * 11930465.0) >> 0x18 & 0xff;
              fVar12 = (float)((uint)(long)(fVar12 * 11930465.0) & 0xffffff) * 5.9604645e-08;
              fVar15 = (float)(&DAT_041997a0)[uVar1 * 4];
              fVar17 = (float)(&DAT_041997a4)[uVar1 * 4];
              fVar16 = *(float *)(lVar8 + -0x30);
              fVar14 = *(float *)(lVar8 + -0x2c);
              param_1[1] = (uint)(*(float *)(lVar8 + -0x34) +
                                 fVar13 * ((float)(&DAT_04199798)[uVar1 * 4] +
                                          fVar12 * (float)(&DAT_0419979c)[uVar1 * 4]));
              param_1[2] = (uint)(fVar16 + 0.0);
              param_1[3] = (uint)(fVar13 * (fVar15 + fVar12 * fVar17) + fVar14);
              fVar12 = (float)NEON_ucvtf(*(undefined4 *)(lVar8 + -0x20));
              param_1[4] = (uint)(long)(fVar12 * 11930465.0);
              return bVar4;
            }
          }
        }
        uVar11 = uVar11 + 1;
        bVar4 = uVar11 < uVar2;
        if (uVar11 == uVar2) {
          return bVar4;
        }
      } while( true );
    }
  }
  return false;
}

