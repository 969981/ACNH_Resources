
undefined8 FUN_0054cc80(long param_1,undefined8 *param_2,undefined8 param_3)

{
  float fVar1;
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
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 uStack_28;
  
  fVar10 = (float)((ulong)*(undefined8 *)(param_1 + 0x20) >> 0x20);
  fVar5 = (float)param_2[2];
  fVar6 = (float)((ulong)param_2[2] >> 0x20);
  fVar7 = (float)param_2[3];
  fVar8 = (float)((ulong)param_2[3] >> 0x20);
  fVar9 = (float)*(undefined8 *)(param_1 + 0x20);
  fVar1 = (float)*param_2;
  fVar2 = (float)((ulong)*param_2 >> 0x20);
  fVar3 = (float)param_2[1];
  fVar4 = (float)((ulong)param_2[1] >> 0x20);
  fVar11 = (float)*(undefined8 *)(param_1 + 0x28);
  fVar12 = (float)param_2[4];
  fVar13 = (float)((ulong)param_2[4] >> 0x20);
  fVar14 = (float)param_2[5];
  fVar15 = (float)((ulong)param_2[5] >> 0x20);
  fVar16 = (float)param_2[6];
  fVar17 = (float)((ulong)param_2[6] >> 0x20);
  local_30 = CONCAT44(fVar17 + fVar13 * fVar11 + fVar2 * fVar9 + fVar6 * fVar10,
                      fVar16 + fVar12 * fVar11 + fVar1 * fVar9 + fVar5 * fVar10);
  fVar18 = (float)param_2[7];
  fVar19 = (float)((ulong)param_2[7] >> 0x20);
  uStack_28 = CONCAT44(fVar19 + fVar15 * fVar11 + fVar4 * fVar9 + fVar8 * fVar10,
                       fVar18 + fVar14 * fVar11 + fVar3 * fVar9 + fVar7 * fVar10);
  fVar9 = (float)*(undefined8 *)(param_1 + 0x30);
  fVar10 = (float)((ulong)*(undefined8 *)(param_1 + 0x30) >> 0x20);
  fVar11 = (float)*(undefined8 *)(param_1 + 0x38);
  local_40 = CONCAT44(fVar17 + fVar13 * fVar11 + fVar2 * fVar9 + fVar6 * fVar10,
                      fVar16 + fVar12 * fVar11 + fVar1 * fVar9 + fVar5 * fVar10);
  uStack_38 = CONCAT44(fVar19 + fVar15 * fVar11 + fVar4 * fVar9 + fVar8 * fVar10,
                       fVar18 + fVar14 * fVar11 + fVar3 * fVar9 + fVar7 * fVar10);
  FUN_0054ca70(*(undefined4 *)(param_1 + 0x90),*(undefined4 *)(param_1 + 0x94),param_3,&local_30,
               &local_40);
  return param_3;
}

