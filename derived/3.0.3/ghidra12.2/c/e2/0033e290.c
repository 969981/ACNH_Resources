
void FUN_0033e290(long param_1,int param_2,int param_3,uint param_4)

{
  uint *puVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined1 auVar6 [16];
  undefined4 uVar7;
  long lVar8;
  long lVar9;
  uint *puVar10;
  code *pcVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined1 auVar16 [16];
  
  lVar8 = *(long *)(param_1 + (long)param_3 * 8 + 0x438);
  if (lVar8 != 0) {
    lVar9 = *(long *)(param_1 + 0x1c8);
    pcVar11 = *(code **)(param_1 + 0x15f8);
    puVar10 = (uint *)(lVar9 + (long)param_2 * 0x7d8);
    puVar1 = puVar10 + 0x1f2;
    puVar2 = puVar10 + 500;
    if (pcVar11 == (code *)0x0) {
      do {
        if ((((*puVar10 & *(uint *)(lVar8 + 0x50)) != 0) &&
            ((*(uint *)(lVar8 + 0x240) & param_4) != 0)) && (*(char *)(lVar8 + 0x1b) != '\0')) {
          *(long *)(*(long *)puVar1 + (long)(int)*puVar2 * 0x10) = lVar8;
          fVar12 = *(float *)(lVar8 + 0xa0) * (float)puVar10[0x15a];
          fVar13 = *(float *)(lVar8 + 0xa4) * (float)puVar10[0x15b];
          fVar14 = *(float *)(lVar8 + 0xa8) * (float)puVar10[0x15c];
          fVar15 = *(float *)(lVar8 + 0xac) * 0.0;
          auVar16._4_4_ = fVar13;
          auVar16._0_4_ = fVar12;
          auVar16._8_4_ = fVar14;
          auVar16._12_4_ = fVar15;
          auVar6._4_4_ = fVar13;
          auVar6._0_4_ = fVar12;
          auVar6._8_4_ = fVar14;
          auVar6._12_4_ = fVar15;
          auVar16 = NEON_ext(auVar16,auVar6,8,1);
          fVar12 = auVar16._0_4_ + fVar12 + auVar16._4_4_ + fVar13 + (float)puVar10[0x15d];
          uVar3 = (uint)fVar12 >> 8 & 0x800000;
          uVar4 = 0;
          if (ABS(fVar12) != 0.0) {
            uVar4 = ((uint)fVar12 >> 0x17 & 0xff) - 0x40;
          }
          uVar5 = 0x7f0000;
          if (uVar4 < 0x80) {
            uVar5 = (uint)fVar12 >> 7 & 0xffff | (uVar4 & 0x7f) << 0x10 | uVar3;
          }
          if ((uVar4 & 0x80000000) == 0) {
            uVar3 = uVar5;
          }
          *(uint *)(*(long *)puVar1 + (long)(int)*puVar2 * 0x10 + 8) =
               uVar3 | (uint)*(byte *)(lVar8 + 0x20) << 0x18;
          *puVar2 = *puVar2 + 1;
        }
        lVar8 = *(long *)(lVar8 + 0x1e0);
      } while (lVar8 != 0);
    }
    else {
      do {
        if ((((*puVar10 & *(uint *)(lVar8 + 0x50)) != 0) &&
            ((*(uint *)(lVar8 + 0x240) & param_4) != 0)) && (*(char *)(lVar8 + 0x1b) != '\0')) {
          *(long *)(*(long *)puVar1 + (long)(int)*puVar2 * 0x10) = lVar8;
          uVar7 = (*pcVar11)(lVar8,puVar10 + 0x152);
          *(undefined4 *)(*(long *)puVar1 + (long)(int)*puVar2 * 0x10 + 8) = uVar7;
          *puVar2 = *puVar2 + 1;
        }
        lVar8 = *(long *)(lVar8 + 0x1e0);
      } while (lVar8 != 0);
    }
    lVar9 = lVar9 + (long)param_2 * 0x7d8;
    *(uint *)(lVar9 + 4) = *(uint *)(lVar9 + 4) | param_4;
  }
  return;
}

