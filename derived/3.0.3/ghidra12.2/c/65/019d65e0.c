
void FUN_019d65e0(long param_1,undefined4 *param_2,undefined8 param_3)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  ulong uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  uint local_44;
  undefined8 local_40;
  float local_38;
  
  if (param_2 != (undefined4 *)0x0) {
    local_40._4_4_ = 0.0;
    fVar5 = 0.0;
    local_38 = 0.0;
    local_40 = 0;
    local_44 = 0;
    if (*(long *)(param_1 + 0x278) != 0) {
      FUN_018acc4c(*(long *)(param_1 + 0x278),&local_40,&local_44,0,param_3);
      fVar5 = (float)local_40;
    }
    uVar1 = FUN_006f0400(-(0.0 - local_40._4_4_),
                         SQRT((0.0 - local_38) * (0.0 - local_38) + (0.0 - fVar5) * (0.0 - fVar5)));
    uVar2 = FUN_006f0400(0.0 - (float)local_40,0.0 - local_38);
    uVar4 = (ulong)(uVar1 >> 0x19);
    fVar5 = (float)(uVar1 >> 1 & 0xffffff) * 5.9604645e-08;
    fVar6 = (float)(&DAT_04199798)[uVar4 * 4] + fVar5 * (float)(&DAT_0419979c)[uVar4 * 4];
    fVar5 = (float)(&DAT_041997a0)[uVar4 * 4] + fVar5 * (float)(&DAT_041997a4)[uVar4 * 4];
    uVar4 = (ulong)(uVar2 >> 0x19);
    fVar7 = (float)(uVar2 >> 1 & 0xffffff) * 5.9604645e-08;
    fVar9 = (float)(&DAT_04199798)[uVar4 * 4] + fVar7 * (float)(&DAT_0419979c)[uVar4 * 4];
    fVar7 = (float)(&DAT_041997a0)[uVar4 * 4] + fVar7 * (float)(&DAT_041997a4)[uVar4 * 4];
    uVar4 = (ulong)(local_44 >> 0x15) & 0x7f0;
    fVar12 = fVar6 * fVar9 * 0.0 + fVar5 * fVar7;
    fVar8 = -(fVar9 * 0.0 * fVar5) + fVar6 * fVar7;
    fVar10 = fVar6 * fVar7 * 0.0 + fVar5 * fVar9;
    fVar5 = -(fVar9 * fVar6) + fVar5 * fVar7 * 0.0;
    fVar14 = fVar12 + fVar10 * -0.0 + fVar8 * 0.0;
    fVar11 = (fVar10 * -0.0 + fVar8 * -0.0) - fVar5;
    fVar9 = (fVar10 - fVar5 * 0.0) + fVar12 * 0.0;
    fVar7 = (fVar5 * 0.0 - fVar8) + fVar12 * 0.0;
    fVar13 = (-(fVar5 * fVar7) + fVar12 * fVar9 + fVar10 * fVar14) - fVar8 * fVar11;
    fVar6 = ((fVar8 * fVar7 - fVar10 * fVar9) + fVar12 * fVar14) - fVar5 * fVar11;
    fVar15 = ((fVar12 * fVar7 + fVar5 * fVar9) - fVar8 * fVar14) - fVar10 * fVar11;
    fVar5 = (float)(local_44 >> 1 & 0xffffff) * 5.9604645e-08;
    fVar7 = *(float *)((long)&DAT_04199798 + uVar4) +
            fVar5 * *(float *)((long)&DAT_0419979c + uVar4);
    fVar5 = *(float *)((long)&DAT_041997a0 + uVar4) +
            fVar5 * *(float *)((long)&DAT_041997a4 + uVar4);
    fVar8 = fVar7 * 0.0;
    fVar5 = fVar5 + fVar5;
    fVar10 = fVar7 * (fVar7 + fVar7);
    fVar9 = (fVar7 + fVar7) * fVar8;
    fVar12 = fVar8 * (fVar8 + fVar8);
    fVar11 = fVar7 * (fVar8 + fVar8);
    fVar8 = fVar5 * fVar8;
    fVar7 = fVar7 * fVar5;
    fVar14 = (fVar8 + fVar9) * fVar15 + fVar13 * (fVar12 - fVar7) +
             fVar6 * ((1.0 - fVar12) - fVar10);
    fVar5 = fVar15 * (fVar11 - fVar8) + fVar13 * ((1.0 - fVar10) - fVar12) +
            fVar6 * (fVar7 + fVar12);
    uVar3 = FUN_006f0400(-((fVar9 - fVar8) * fVar6) -
                         (fVar15 * ((1.0 - fVar12) - fVar12) + fVar13 * (fVar8 + fVar11)),
                         SQRT(fVar14 * fVar14 + fVar5 * fVar5));
    *param_2 = uVar3;
    uVar3 = FUN_006f0400(fVar5,fVar14);
    param_2[1] = uVar3;
    param_2[2] = 0;
  }
  return;
}

