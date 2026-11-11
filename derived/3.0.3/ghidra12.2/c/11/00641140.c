
void FUN_00641140(long param_1,long param_2,undefined8 *param_3,undefined8 *param_4)

{
  long lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
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
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  if (*(int *)(param_1 + 0x50) == 2) {
    FUN_006414f0(param_1,param_2,param_4);
  }
  else if (*(int *)(param_1 + 0x50) == 0) {
    FUN_00641270();
  }
  else {
    FUN_00641760();
  }
  lVar1 = FUN_0043c4e0(DAT_04c6f410);
  if (lVar1 != 0) {
    FUN_00443a00(lVar1,"TtBuild Composite Matrices");
  }
  fVar6 = (float)((ulong)*(undefined8 *)(param_2 + 0xa0) >> 0x20);
  fVar12 = (float)param_3[2];
  fVar13 = (float)((ulong)param_3[2] >> 0x20);
  fVar14 = (float)param_3[3];
  fVar15 = (float)((ulong)param_3[3] >> 0x20);
  fVar2 = (float)*(undefined8 *)(param_2 + 0x90);
  fVar8 = (float)*param_3;
  fVar9 = (float)((ulong)*param_3 >> 0x20);
  fVar10 = (float)param_3[1];
  fVar11 = (float)((ulong)param_3[1] >> 0x20);
  fVar3 = (float)((ulong)*(undefined8 *)(param_2 + 0x90) >> 0x20);
  fVar4 = (float)*(undefined8 *)(param_2 + 0x98);
  fVar16 = (float)param_3[4];
  fVar17 = (float)((ulong)param_3[4] >> 0x20);
  fVar18 = (float)param_3[5];
  fVar19 = (float)((ulong)param_3[5] >> 0x20);
  fVar5 = (float)*(undefined8 *)(param_2 + 0xa0);
  fVar7 = (float)*(undefined8 *)(param_2 + 0xa8);
  local_80 = CONCAT44(fVar9 * fVar2 + fVar13 * fVar3 + fVar17 * fVar4,
                      fVar8 * fVar2 + fVar12 * fVar3 + fVar16 * fVar4);
  uStack_78 = CONCAT44(fVar11 * fVar2 + fVar15 * fVar3 + fVar19 * fVar4,
                       fVar10 * fVar2 + fVar14 * fVar3 + fVar18 * fVar4);
  fVar2 = (float)*(undefined8 *)(param_2 + 0xb0);
  fVar20 = (float)*(undefined8 *)(param_2 + 0xc0);
  uStack_70 = CONCAT44(fVar17 * fVar7 + fVar9 * fVar5 + fVar13 * fVar6,
                       fVar16 * fVar7 + fVar8 * fVar5 + fVar12 * fVar6);
  uStack_68 = CONCAT44(fVar19 * fVar7 + fVar11 * fVar5 + fVar15 * fVar6,
                       fVar18 * fVar7 + fVar10 * fVar5 + fVar14 * fVar6);
  fVar3 = (float)((ulong)*(undefined8 *)(param_2 + 0xb0) >> 0x20);
  fVar5 = (float)((ulong)*(undefined8 *)(param_2 + 0xc0) >> 0x20);
  fVar4 = (float)*(undefined8 *)(param_2 + 0xb8);
  fVar6 = (float)*(undefined8 *)(param_2 + 200);
  local_60 = CONCAT44(fVar17 * fVar4 + fVar9 * fVar2 + fVar13 * fVar3,
                      fVar16 * fVar4 + fVar8 * fVar2 + fVar12 * fVar3);
  uStack_58 = CONCAT44(fVar19 * fVar4 + fVar11 * fVar2 + fVar15 * fVar3,
                       fVar18 * fVar4 + fVar10 * fVar2 + fVar14 * fVar3);
  uStack_50 = CONCAT44(fVar17 * fVar6 +
                       fVar13 * fVar5 + fVar9 * fVar20 + (float)((ulong)param_3[6] >> 0x20),
                       fVar16 * fVar6 + fVar12 * fVar5 + fVar8 * fVar20 + (float)param_3[6]);
  uStack_48 = CONCAT44(fVar19 * fVar6 +
                       fVar15 * fVar5 + fVar11 * fVar20 + (float)((ulong)param_3[7] >> 0x20),
                       fVar18 * fVar6 + fVar14 * fVar5 + fVar10 * fVar20 + (float)param_3[7]);
  FUN_00555950(&local_80,*param_4,*(undefined8 *)(param_1 + 0x68),*(undefined4 *)(param_4 + 1),
               *param_4);
  if (lVar1 != 0) {
    FUN_00443a70(lVar1,&DAT_04085310);
  }
  return;
}

