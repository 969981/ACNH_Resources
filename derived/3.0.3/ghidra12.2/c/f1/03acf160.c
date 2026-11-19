
void FUN_03acf160(undefined8 param_1,float *param_2,float *param_3,undefined1 param_4)

{
  long lVar1;
  long lVar2;
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
  float fVar21;
  float fVar22;
  float local_90 [6];
  float local_78;
  float fStack_74;
  float local_70;
  float fStack_6c;
  float local_68;
  float fStack_64;
  float local_60;
  float fStack_5c;
  float local_58;
  float fStack_54;
  float local_50;
  float fStack_4c;
  float local_48;
  float fStack_44;
  float local_40;
  float fStack_3c;
  float local_38;
  float fStack_34;
  
  local_90[0] = *param_2;
  fStack_74 = param_2[1];
  local_90[2] = param_2[2];
  local_78 = param_2[3];
  fStack_5c = param_2[4];
  fStack_64 = param_2[5];
  fVar3 = param_3[0xc];
  fVar4 = param_3[0xd];
  local_68 = fStack_74;
  fVar7 = *param_3;
  fVar8 = param_3[1];
  local_90[1] = fStack_74;
  local_90[3] = local_78;
  local_90[4] = fStack_74;
  local_90[5] = local_90[2];
  local_70 = fStack_64;
  fStack_6c = local_90[0];
  fVar5 = param_3[0xe];
  fVar6 = param_3[0xf];
  local_60 = local_90[0];
  local_58 = local_90[2];
  fStack_54 = local_78;
  fVar9 = param_3[2];
  fVar10 = param_3[3];
  fVar11 = param_3[4];
  fVar12 = param_3[5];
  local_50 = fStack_5c;
  fStack_4c = local_90[2];
  local_40 = fStack_64;
  fStack_3c = local_90[0];
  fVar13 = param_3[6];
  fVar14 = param_3[7];
  fVar15 = param_3[8];
  fVar16 = param_3[9];
  local_48 = local_78;
  fStack_44 = fStack_5c;
  local_38 = fStack_5c;
  fStack_34 = fStack_64;
  fVar17 = param_3[10];
  fVar18 = param_3[0xb];
  lVar2 = 0;
  do {
    lVar1 = lVar2 + 0xc;
    fVar21 = *(float *)((long)local_90 + lVar2 + 8);
    fVar19 = *(float *)((long)local_90 + lVar2);
    fVar20 = *(float *)((long)local_90 + lVar2 + 4);
    fVar22 = fVar6 + fVar4 * fVar20 + fVar19 * fVar3 + fVar21 * fVar5;
    *(float *)((long)local_90 + lVar2) =
         fVar10 / fVar22 +
         fVar20 * (fVar8 / fVar22) + fVar19 * (fVar7 / fVar22) + fVar21 * (fVar9 / fVar22);
    *(float *)((long)local_90 + lVar2 + 4) =
         fVar14 / fVar22 +
         fVar20 * (fVar12 / fVar22) + fVar19 * (fVar11 / fVar22) + fVar21 * (fVar13 / fVar22);
    *(float *)((long)local_90 + lVar2 + 8) =
         fVar18 / fVar22 +
         fVar20 * (fVar16 / fVar22) + fVar19 * (fVar15 / fVar22) + fVar21 * (fVar17 / fVar22);
    lVar2 = lVar1;
  } while (lVar1 != 0x60);
  FUN_03acf430(param_1,local_90,param_4);
  return;
}

