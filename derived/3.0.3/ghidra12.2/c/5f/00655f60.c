
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_00655f60(long param_1,int param_2,long param_3)

{
  uint uVar1;
  int iVar2;
  float *pfVar3;
  undefined1 auVar4 [16];
  undefined8 uVar5;
  uint uVar6;
  ulong uVar7;
  uint *puVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  long *plVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  
  uVar5 = _DAT_0413f3c0;
  lVar11 = (long)param_2;
  plVar12 = (long *)(param_1 + (long)param_2 * 0x18);
  uVar1 = *(uint *)(param_1 + 0x304);
  uVar10 = (ulong)uVar1;
  if (*(char *)((long)plVar12 + 0xc) == '\n') {
    uVar6 = (uint)*(byte *)(param_1 + lVar11 * 0x18 + 0xd);
    iVar2 = uVar6 * 4;
    if (4 < uVar6) {
      FUN_006560a0(*plVar12 + 0x10,*(undefined4 *)(param_1 + lVar11 * 0x18 + 8),iVar2 + -0x10,uVar1)
      ;
    }
    FUN_00655d80(param_3,0x10,*plVar12,*(undefined4 *)(param_1 + lVar11 * 0x18 + 8),iVar2,uVar1);
  }
  else {
    if (*(char *)((long)plVar12 + 0xc) != '\b') {
      return 0x80040200;
    }
    if (0 < (int)uVar1) {
      fVar15 = (float)_DAT_0413f3c8;
      fVar16 = (float)((ulong)_DAT_0413f3c8 >> 0x20);
      fVar13 = (float)_DAT_0413f3c0;
      fVar14 = (float)((ulong)_DAT_0413f3c0 >> 0x20);
      iVar2 = *(int *)(param_1 + lVar11 * 0x18 + 8);
      puVar8 = (uint *)*plVar12;
      uVar7 = 0;
      do {
        uVar9 = uVar7 & 0xfffffffc;
        uVar7 = uVar7 + 4;
        pfVar3 = (float *)(param_3 + uVar9 * 4);
        uVar10 = uVar10 - 1;
        auVar17._0_4_ = fVar13 * *pfVar3;
        auVar17._4_4_ = fVar14 * pfVar3[1];
        auVar17._8_4_ = fVar15 * pfVar3[2];
        auVar17._12_4_ = fVar16 * pfVar3[3];
        auVar19._0_4_ = -(uint)(auVar17._0_4_ < fVar13);
        auVar19._4_4_ = -(uint)(auVar17._4_4_ < fVar14);
        auVar19._8_4_ = -(uint)(auVar17._8_4_ < fVar15);
        auVar19._12_4_ = -(uint)(auVar17._12_4_ < fVar16);
        auVar18._8_4_ = fVar15;
        auVar18._0_8_ = uVar5;
        auVar18._12_4_ = fVar16;
        auVar4._8_4_ = fVar15;
        auVar4._0_8_ = uVar5;
        auVar4._12_4_ = fVar16;
        auVar18 = NEON_fmax(auVar4 ^ (auVar18 ^ auVar17) & auVar19,ZEXT816(0),4);
        *puVar8 = (int)auVar18._0_4_ | (int)auVar18._4_4_ << 8 | (int)auVar18._8_4_ << 0x10 |
                  (int)auVar18._12_4_ << 0x18;
        puVar8 = (uint *)((long)puVar8 + (long)iVar2);
      } while (uVar10 != 0);
    }
  }
  return 0;
}

