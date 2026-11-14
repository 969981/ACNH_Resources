
void FUN_0183b5b4(long param_1)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  byte bVar4;
  undefined *puVar5;
  long *plVar6;
  float *pfVar7;
  ulong uVar8;
  uint *puVar9;
  undefined4 *puVar10;
  float fVar11;
  undefined4 uVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  
  pfVar7 = (float *)(**(code **)(*(long *)(*(long *)(param_1 + 0x500) + 0x158) + 0xf0))
                              (*(long *)(param_1 + 0x500) + 0x158);
  fVar15 = *pfVar7;
  pfVar7 = (float *)(**(code **)(*(long *)(*(long *)(param_1 + 0x500) + 200) + 0xf0))();
  fVar16 = *pfVar7;
  pfVar7 = (float *)(**(code **)(*(long *)(*(long *)(param_1 + 0x500) + 200) + 0xf0))();
  fVar17 = *pfVar7;
  (**(code **)(*(long *)(*(long *)(param_1 + 0x3d0) + 0x2d8) + 0x28))
            (*(long *)(param_1 + 0x3d0) + 0x2d8);
  plVar6 = DAT_0537d558;
  uVar8 = FUN_01d3e29c(*DAT_0537d558 + 8);
  fVar11 = fVar15;
  if ((uVar8 & 1) != 0) {
    bVar4 = *(byte *)(*DAT_0537d558 + 0x473);
    if ((long)(char)bVar4 != 0xffffffffffffffff) {
      lVar1 = plVar6[2] + 0x108 + ((long)(char)bVar4 & 0xffffffffU) * 0xc;
      if (0xb < bVar4) {
        lVar1 = plVar6[2] + 0x108;
      }
      if ((*(char *)(lVar1 + 10) == '\0') &&
         (fVar13 = *(float *)(param_1 + 0x334) - *(float *)(param_1 + 0x328),
         fVar14 = *(float *)(param_1 + 0x33c) - *(float *)(param_1 + 0x330),
         fVar16 * fVar17 < fVar14 * fVar14 + fVar13 * fVar13)) {
        pfVar7 = (float *)(**(code **)(*(long *)(*(long *)(param_1 + 0x500) + 200) + 0xf0))();
        fVar16 = *(float *)(*(long *)(param_1 + 0x300) + 0x278) - *(float *)(param_1 + 0x328);
        fVar17 = *(float *)(*(long *)(param_1 + 0x300) + 0x280) - *(float *)(param_1 + 0x330);
        fVar11 = fVar15 * 0.8;
        if (fVar17 * fVar17 + fVar16 * fVar16 <= *pfVar7 * *pfVar7) {
          fVar11 = fVar15;
        }
      }
    }
  }
  fVar15 = *(float *)(param_1 + 0x4d0) / fVar11;
  fVar15 = fVar15 + fVar15;
  *(float *)(param_1 + 0x308) = fVar15;
  *(float *)(param_1 + 0x318) = -fVar15 / fVar11;
  pfVar7 = (float *)(**(code **)(*(long *)(*(long *)(param_1 + 0x4f8) + 0x30) + 0xf0))();
  fVar15 = *pfVar7;
  pfVar7 = (float *)(**(code **)(*(long *)(*(long *)(param_1 + 0x4f8) + 0x60) + 0xf0))();
  puVar5 = PTR_DAT_04bb39d8;
  fVar16 = *pfVar7;
  puVar9 = (uint *)nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04bb39d8);
  uVar3 = puVar9[3];
  uVar2 = *puVar9 ^ *puVar9 << 0xb;
  *puVar9 = puVar9[1];
  puVar9[1] = puVar9[2];
  uVar2 = uVar2 >> 8 ^ uVar3 >> 0x13 ^ uVar2 ^ uVar3;
  puVar9[2] = uVar3;
  puVar9[3] = uVar2;
  pfVar7 = (float *)(**(code **)(*(long *)(*(long *)(param_1 + 0x4f8) + 0x90) + 0xf0))();
  fVar17 = *pfVar7;
  pfVar7 = (float *)(**(code **)(*(long *)(*(long *)(param_1 + 0x4f8) + 0x90) + 0xf0))();
  fVar11 = *pfVar7;
  pfVar7 = (float *)(**(code **)(*(long *)(*(long *)(param_1 + 0x4f8) + 0xf0) + 0xf0))();
  *(float *)(param_1 + 0x57c) =
       (fVar15 - fVar16 * ((float)(uVar2 >> 9 | 0x3f800000) + -1.0)) +
       (fVar17 * fVar11) / (*pfVar7 + *pfVar7);
  pfVar7 = (float *)(**(code **)(*(long *)(*(long *)(param_1 + 0x4f8) + 0x30) + 0xf0))();
  fVar15 = *pfVar7;
  pfVar7 = (float *)(**(code **)(*(long *)(*(long *)(param_1 + 0x4f8) + 0x60) + 0xf0))();
  fVar17 = *pfVar7;
  puVar9 = (uint *)nn::os::GetTlsValue(*(undefined4 *)puVar5);
  uVar2 = *puVar9 ^ *puVar9 << 0xb;
  uVar3 = puVar9[3];
  *puVar9 = puVar9[1];
  puVar9[1] = puVar9[2];
  uVar2 = uVar2 >> 8 ^ uVar3 >> 0x13 ^ uVar2 ^ uVar3;
  puVar9[2] = uVar3;
  puVar9[3] = uVar2;
  pfVar7 = (float *)(**(code **)(*(long *)(*(long *)(param_1 + 0x4f8) + 0xc0) + 0xf0))();
  fVar16 = *pfVar7;
  pfVar7 = (float *)(**(code **)(*(long *)(*(long *)(param_1 + 0x4f8) + 0xc0) + 0xf0))();
  fVar11 = *pfVar7;
  pfVar7 = (float *)(**(code **)(*(long *)(*(long *)(param_1 + 0x4f8) + 0xf0) + 0xf0))();
  *(float *)(param_1 + 0x580) =
       (fVar15 + fVar17 * ((float)(uVar2 >> 9 | 0x3f800000) + -1.0)) -
       (fVar16 * fVar11) / (*pfVar7 + *pfVar7);
  puVar10 = (undefined4 *)(**(code **)(*(long *)(*(long *)(param_1 + 0x4f8) + 0x90) + 0xf0))();
  uVar12 = *puVar10;
  *(undefined1 *)(param_1 + 0x4d8) = 0;
  *(undefined4 *)(param_1 + 0x40c) = uVar12;
  *(undefined4 *)(param_1 + 0x518) = *(undefined4 *)(param_1 + 0x51c);
  return;
}

