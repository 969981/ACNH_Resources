
void FUN_00482510(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar7;
  undefined8 uVar6;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined1 local_c0 [48];
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined1 auStack_60 [48];
  
  FUN_004385d0(auStack_60);
  FUN_00438690(auStack_60,param_2 + 2);
  FUN_004385d0(&local_90);
  fVar1 = (float)param_2[4];
  fVar2 = (float)((ulong)param_2[4] >> 0x20);
  uStack_80 = CONCAT44(fVar2 * (float)((ulong)DAT_0413f4d0 >> 0x20),fVar1 * (float)DAT_0413f4d0);
  fVar3 = (float)param_2[5];
  fVar4 = (float)((ulong)param_2[5] >> 0x20);
  uStack_78 = CONCAT44(fVar4 * (float)((ulong)DAT_0413f4d8 >> 0x20),fVar3 * (float)DAT_0413f4d8);
  local_90 = CONCAT44((float)((ulong)DAT_0413f4c0 >> 0x20) * fVar2,(float)DAT_0413f4c0 * fVar1);
  uStack_88 = CONCAT44((float)((ulong)DAT_0413f4c8 >> 0x20) * fVar4,(float)DAT_0413f4c8 * fVar3);
  local_70 = CONCAT44(fVar2 * (float)((ulong)DAT_0413f4e0 >> 0x20),fVar1 * (float)DAT_0413f4e0);
  uStack_68 = CONCAT44(fVar4 * (float)((ulong)DAT_0413f4e8 >> 0x20),fVar3 * (float)DAT_0413f4e8);
  FUN_004385d0(local_c0);
  FUN_0047f770(local_c0,auStack_60,&local_90);
  fVar7 = (float)((ulong)*param_3 >> 0x20);
  fVar9 = local_c0._16_4_;
  fVar10 = local_c0._20_4_;
  fVar11 = local_c0._24_4_;
  fVar12 = local_c0._28_4_;
  fVar5 = (float)*param_3;
  fVar1 = local_c0._0_4_;
  fVar2 = local_c0._4_4_;
  fVar3 = local_c0._8_4_;
  fVar4 = local_c0._12_4_;
  fVar8 = (float)param_3[1];
  fVar13 = local_c0._32_4_;
  fVar14 = local_c0._36_4_;
  fVar15 = local_c0._40_4_;
  fVar16 = local_c0._44_4_;
  param_1[1] = CONCAT44(fVar16 * fVar8 + fVar4 * fVar5 + fVar12 * fVar7,
                        fVar15 * fVar8 + fVar3 * fVar5 + fVar11 * fVar7);
  *param_1 = CONCAT44(fVar14 * fVar8 + fVar2 * fVar5 + fVar10 * fVar7,
                      fVar13 * fVar8 + fVar1 * fVar5 + fVar9 * fVar7);
  fVar5 = (float)param_3[2];
  fVar7 = (float)((ulong)param_3[2] >> 0x20);
  fVar8 = (float)param_3[3];
  param_1[3] = CONCAT44(fVar16 * fVar8 + fVar4 * fVar5 + fVar12 * fVar7,
                        fVar15 * fVar8 + fVar3 * fVar5 + fVar11 * fVar7);
  param_1[2] = CONCAT44(fVar14 * fVar8 + fVar2 * fVar5 + fVar10 * fVar7,
                        fVar13 * fVar8 + fVar1 * fVar5 + fVar9 * fVar7);
  fVar5 = (float)param_3[4];
  fVar7 = (float)((ulong)param_3[4] >> 0x20);
  fVar8 = (float)param_3[5];
  param_1[5] = CONCAT44(fVar16 * fVar8 + fVar4 * fVar5 + fVar12 * fVar7,
                        fVar15 * fVar8 + fVar3 * fVar5 + fVar11 * fVar7);
  param_1[4] = CONCAT44(fVar14 * fVar8 + fVar2 * fVar5 + fVar10 * fVar7,
                        fVar13 * fVar8 + fVar1 * fVar5 + fVar9 * fVar7);
  fVar5 = (float)param_3[6];
  fVar7 = (float)((ulong)param_3[6] >> 0x20);
  fVar8 = (float)param_3[7];
  fVar1 = fVar13 * fVar8 + fVar1 * fVar5 + fVar9 * fVar7;
  fVar2 = fVar14 * fVar8 + fVar2 * fVar5 + fVar10 * fVar7;
  fVar3 = fVar15 * fVar8 + fVar3 * fVar5 + fVar11 * fVar7;
  fVar4 = fVar16 * fVar8 + fVar4 * fVar5 + fVar12 * fVar7;
  param_1[7] = CONCAT44(fVar4,fVar3);
  param_1[6] = CONCAT44(fVar2,fVar1);
  uVar6 = *param_2;
  param_1[7] = CONCAT44((float)((ulong)param_2[1] >> 0x20) + fVar4,(float)param_2[1] + fVar3);
  param_1[6] = CONCAT44((float)((ulong)uVar6 >> 0x20) + fVar2,(float)uVar6 + fVar1);
  FUN_004385e0(local_c0);
  FUN_004385e0(&local_90);
  FUN_004385e0(auStack_60);
  return;
}

