
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_00655b00(long *param_1,void *param_2,uint param_3)

{
  undefined8 *puVar1;
  char cVar2;
  float *pfVar3;
  undefined8 uVar4;
  byte bVar5;
  ulong uVar6;
  long lVar7;
  uint uVar8;
  int iVar9;
  uint *puVar10;
  ulong uVar11;
  ulong uVar12;
  byte *pbVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined8 uVar16;
  float fVar17;
  float fVar18;
  undefined8 uVar19;
  
  cVar2 = *(char *)((long)param_1 + 0xc);
  if (cVar2 == '\x02') {
    bVar5 = *(byte *)((long)param_1 + 0xd);
    if ((0 < (int)param_3) && (bVar5 < 4)) {
      memset(param_2,0,(ulong)param_3 << 4);
    }
    fVar17 = DAT_04102edc;
    if (3 < bVar5) {
      bVar5 = 4;
    }
    if ((0 < (int)param_3) && (bVar5 != 0)) {
      uVar11 = (ulong)param_3;
      lVar7 = param_1[1];
      uVar6 = 0;
      pbVar13 = (byte *)(*param_1 + 3);
      do {
        fVar18 = (float)NEON_ucvtf((uint)pbVar13[-3]);
        *(float *)((long)param_2 + (uVar6 & 0xfffffffc) * 4) = fVar18 / fVar17;
        if (1 < bVar5) {
          fVar18 = (float)NEON_ucvtf((uint)pbVar13[-2]);
          uVar12 = (uVar6 & 0xfffffffc) << 2;
          *(float *)((long)param_2 + (uVar12 | 4)) = fVar18 / fVar17;
          if (bVar5 != 2) {
            fVar18 = (float)NEON_ucvtf((uint)pbVar13[-1]);
            *(float *)((long)param_2 + (uVar12 | 8)) = fVar18 / fVar17;
            if (3 < bVar5) {
              fVar18 = (float)NEON_ucvtf((uint)*pbVar13);
              *(float *)((long)param_2 + (uVar12 | 0xc)) = fVar18 / fVar17;
            }
          }
        }
        uVar6 = uVar6 + 4;
        uVar11 = uVar11 - 1;
        pbVar13 = pbVar13 + (int)lVar7;
      } while (uVar11 != 0);
    }
  }
  else if (cVar2 == '\n') {
    bVar5 = *(byte *)((long)param_1 + 0xd);
    if ((0 < (int)param_3) && (bVar5 < 4)) {
      memset(param_2,0,(ulong)param_3 << 4);
    }
    uVar8 = (uint)bVar5 << 2;
    if (3 < bVar5) {
      uVar8 = 0x10;
    }
    FUN_00655d80(*param_1,(int)param_1[1],param_2,0x10,uVar8 & 0xfc,param_3);
  }
  else {
    if (cVar2 != '\b') {
      return 0x80040200;
    }
    if (0 < (int)param_3) {
      lVar7 = param_1[1];
      puVar10 = (uint *)*param_1;
      uVar6 = 0;
      auVar14 = *(undefined1 (*) [16])(PTR_DAT_04bd4c80 + 0x1f0);
      uVar11 = (ulong)param_3;
      auVar15 = NEON_ext(auVar14,auVar14,8,1);
      auVar14 = NEON_ext(auVar15,auVar14,8,1);
      do {
        uVar8 = *puVar10;
        puVar10 = (uint *)((long)puVar10 + (long)(int)lVar7);
        auVar15._0_8_ = CONCAT44(uVar8 >> 8,uVar8) & 0xff000000ff;
        auVar15._8_4_ = uVar8 >> 0x10 & 0xff;
        uVar11 = uVar11 - 1;
        auVar15._12_4_ = uVar8 >> 0x18;
        uVar12 = uVar6 & 0xfffffffc;
        auVar15 = NEON_scvtf(auVar15,4);
        uVar6 = uVar6 + 4;
        pfVar3 = (float *)((long)param_2 + uVar12 * 4);
        pfVar3[2] = auVar14._8_4_ * auVar15._8_4_;
        pfVar3[3] = auVar14._12_4_ * auVar15._12_4_;
        *pfVar3 = auVar14._0_4_ * auVar15._0_4_;
        pfVar3[1] = auVar14._4_4_ * auVar15._4_4_;
      } while (uVar11 != 0);
    }
  }
  uVar4 = _DAT_0413f320;
  if ((*(char *)((long)param_1 + 0xe) == '\b') && (0 < (int)param_3)) {
    iVar9 = param_3 * 4;
    lVar7 = (long)(int)param_3;
    do {
      iVar9 = iVar9 + -4;
      puVar1 = (undefined8 *)((long)param_2 + (long)iVar9 * 4);
      uVar16 = *puVar1;
      fVar18 = *(float *)(puVar1 + 1);
      fVar17 = (float)((ulong)uVar16 >> 0x20);
      uVar19 = NEON_fmax(CONCAT44((float)((ulong)uVar4 >> 0x20) - ((float)uVar16 + fVar17 + fVar18),
                                  (float)uVar4 - ((float)uVar16 + fVar17 + fVar18)),0,4);
      lVar7 = lVar7 + -1;
      puVar1[1] = CONCAT44((int)uVar19,fVar18);
      *puVar1 = uVar16;
    } while (0 < lVar7);
  }
  return 0;
}

