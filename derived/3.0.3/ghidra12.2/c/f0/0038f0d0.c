
int FUN_0038f0d0(float param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
                undefined8 *param_5,long *param_6,uint param_7)

{
  int iVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined8 uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 local_48;
  
  fVar5 = (float)*param_5;
  if (param_7 < 2) {
LAB_0038f104:
    iVar2 = 1;
    *(float *)*param_6 = fVar5;
    *(undefined4 *)(*param_6 + 4) = *(undefined4 *)((long)param_5 + 4);
    *param_6 = *param_6 + 8;
  }
  else {
    fVar16 = (float)*param_2;
    fVar12 = fVar5 - fVar16;
    fVar10 = (float)((ulong)*param_5 >> 0x20);
    fVar6 = (float)((ulong)*param_2 >> 0x20);
    fVar14 = fVar10 - fVar6;
    fVar11 = (float)*param_3;
    fVar13 = (float)((ulong)*param_3 >> 0x20);
    uVar8 = CONCAT44(fVar13 - fVar6,fVar11 - fVar16);
    fVar3 = fVar12 * (fVar11 - fVar16) + fVar14 * (fVar13 - fVar6);
    fVar4 = fVar12 * fVar12 + fVar14 * fVar14;
    fVar17 = (float)((ulong)DAT_04101678 >> 0x20);
    if (fVar3 <= 0.0) {
LAB_0038f164:
      fVar3 = (float)((ulong)uVar8 >> 0x20);
      fVar3 = (float)uVar8 * (float)uVar8 + fVar3 * fVar3;
      uVar8 = *param_4;
    }
    else {
      if (fVar4 < fVar3) {
        uVar8 = CONCAT44(fVar10 - fVar13,fVar5 - fVar11);
        goto LAB_0038f164;
      }
      uVar8 = NEON_rev64(uVar8,4);
      fVar3 = fVar12 * (float)uVar8 * (float)DAT_04101678 +
              fVar14 * (float)((ulong)uVar8 >> 0x20) * fVar17;
      fVar3 = (fVar3 * fVar3) / fVar4;
      uVar8 = *param_4;
    }
    fVar7 = (float)uVar8;
    fVar9 = (float)((ulong)uVar8 >> 0x20);
    if (fVar3 < param_1) {
      fVar15 = fVar7 - fVar16;
      fVar18 = fVar9 - fVar6;
      fVar3 = fVar12 * fVar15 + fVar14 * fVar18;
      if (0.0 < fVar3) {
        if (fVar3 <= fVar4) {
          uVar8 = NEON_rev64(CONCAT44(fVar18,fVar15),4);
          fVar3 = fVar12 * (float)uVar8 * (float)DAT_04101678 +
                  fVar14 * (float)((ulong)uVar8 >> 0x20) * fVar17;
          fVar4 = (fVar3 * fVar3) / fVar4;
        }
        else {
          fVar4 = (fVar5 - fVar7) * (fVar5 - fVar7) + (fVar10 - fVar9) * (fVar10 - fVar9);
        }
      }
      else {
        fVar4 = fVar15 * fVar15 + fVar18 * fVar18;
      }
      if (fVar4 < param_1) goto LAB_0038f104;
    }
    fVar4 = (fVar11 + fVar7) * 0.5;
    fVar3 = (fVar5 + fVar7) * 0.5;
    fVar5 = (fVar10 + fVar9) * 0.5;
    fVar16 = (fVar16 + fVar11) * 0.5;
    fVar10 = (fVar6 + fVar13) * 0.5;
    local_58 = CONCAT44(fVar5,fVar3);
    fVar13 = (fVar13 + fVar9) * 0.5;
    local_68 = CONCAT44(fVar10,fVar16);
    uStack_60 = CONCAT44(fVar13,fVar4);
    fVar11 = (fVar4 + fVar3) * 0.5;
    fVar3 = (fVar10 + fVar13) * 0.5;
    fVar5 = (fVar13 + fVar5) * 0.5;
    fVar4 = (fVar16 + fVar4) * 0.5;
    local_78 = CONCAT44(fVar3,fVar4);
    uStack_70 = CONCAT44(fVar5,fVar11);
    local_48 = CONCAT44((fVar3 + fVar5) * 0.5,(fVar4 + fVar11) * 0.5);
    iVar1 = FUN_0038f0d0(param_1,param_2,&local_68,&local_78,&local_48,param_6,param_7 >> 1);
    iVar2 = FUN_0038f0d0(param_1,&local_48,&uStack_70,&local_58,param_5,param_6,param_7 >> 1);
    iVar2 = iVar2 + iVar1;
  }
  return iVar2;
}

