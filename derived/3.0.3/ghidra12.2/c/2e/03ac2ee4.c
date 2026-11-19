
void FUN_03ac2ee4(float param_1,float param_2,float param_3,float param_4,long param_5,uint param_6,
                 float *param_7,undefined8 param_8,long param_9)

{
  char cVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  float fVar5;
  float fVar6;
  undefined4 uVar7;
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
  
  if (*(uint *)(param_5 + 0x1d0) <= param_6) {
    param_6 = 0;
  }
  if (*(char *)(param_5 + 0x468) != '\0') {
    lVar2 = *(long *)(param_5 + 0x1d8);
    uVar4 = *(undefined8 *)param_7;
    lVar3 = lVar2 + (long)(int)param_6 * 0x1340;
    *(undefined8 *)(lVar3 + 0x1008) = *(undefined8 *)(param_7 + 2);
    *(undefined8 *)(lVar3 + 0x1000) = uVar4;
    uVar4 = *(undefined8 *)(param_7 + 4);
    *(undefined8 *)(lVar3 + 0x1018) = *(undefined8 *)(param_7 + 6);
    *(undefined8 *)(lVar3 + 0x1010) = uVar4;
    uVar4 = *(undefined8 *)(param_7 + 8);
    *(undefined8 *)(lVar3 + 0x1028) = *(undefined8 *)(param_7 + 10);
    *(undefined8 *)(lVar3 + 0x1020) = uVar4;
    FUN_007535b4(lVar3 + 0x1030,param_7);
    *(float *)(lVar3 + 0x1060) = param_3;
    *(float *)(lVar3 + 0x1064) = param_4;
    *(float *)(lVar3 + 0x1304) = param_1;
    *(float *)(lVar3 + 0x12d0) = param_3;
    *(float *)(lVar3 + 0x1308) = param_2 - param_1;
    *(float *)(lVar3 + 0x130c) = 1.0 - param_1 / param_2;
    *(float *)(lVar3 + 0x12cc) = param_3 * param_4;
    *(undefined4 *)(lVar3 + 0x1310) = *(undefined4 *)(param_5 + 0x508);
    *(undefined4 *)(lVar3 + 0x12bc) = *(undefined4 *)(lVar3 + 0xfe8);
    *(undefined4 *)(lVar3 + 0x12c0) = *(undefined4 *)(lVar3 + 0xfec);
    if (*(char *)(param_5 + 0x5c8) == '\0') {
      fVar6 = 1.0;
      lVar3 = lVar2 + (long)(int)param_6 * 0x1340;
      *(float *)(lVar3 + 0x1314) = param_2;
      *(undefined4 *)(lVar3 + 0x1318) = 0x3f800000;
      fVar5 = param_2;
    }
    else {
      fVar5 = *(float *)(param_5 + 0x608);
      lVar3 = lVar2 + (long)(int)param_6 * 0x1340;
      fVar6 = *(float *)(param_5 + 0x5e8);
      *(float *)(lVar3 + 0x1314) = fVar6;
      *(float *)(lVar3 + 0x1318) = 1.0 / (fVar5 - fVar6);
      fVar6 = 1.0 / (*(float *)(param_5 + 0x648) - *(float *)(param_5 + 0x628));
      fVar5 = *(float *)(param_5 + 0x628);
    }
    lVar2 = lVar2 + (long)(int)param_6 * 0x1340;
    *(float *)(lVar2 + 0x131c) = fVar5;
    *(float *)(lVar2 + 0x1320) = fVar6;
    fVar15 = *(float *)(param_5 + 0x814);
    fVar5 = *param_7;
    fVar6 = param_7[1];
    fVar16 = *(float *)(param_5 + 0x818);
    fVar8 = param_7[2];
    fVar17 = *(float *)(param_5 + 0x81c);
    fVar9 = param_7[4];
    fVar10 = param_7[5];
    fVar12 = param_7[8];
    fVar13 = param_7[9];
    fVar11 = param_7[6];
    fVar14 = param_7[10];
    *(undefined4 *)(lVar2 + 0x12a8) = *(undefined4 *)(param_5 + 0x820);
    *(float *)(lVar2 + 0x129c) = fVar6 * fVar16 + fVar15 * fVar5 + fVar17 * fVar8;
    *(float *)(lVar2 + 0x12a0) = fVar10 * fVar16 + fVar15 * fVar9 + fVar17 * fVar11;
    *(float *)(lVar2 + 0x12a4) = fVar13 * fVar16 + fVar15 * fVar12 + fVar17 * fVar14;
    *(undefined4 *)(lVar2 + 0x1328) = *(undefined4 *)(param_5 + 0x6a8);
    *(undefined4 *)(lVar2 + 0x132c) = *(undefined4 *)(param_5 + 0x6c8);
    *(undefined4 *)(lVar2 + 0x1324) = *(undefined4 *)(param_5 + 0x6e8);
    fVar5 = *(float *)(param_9 + 0xfc);
    *(float *)(lVar2 + 0x12b0) =
         (*(float *)(param_9 + 0x100) + *(float *)(param_9 + 0x100)) * param_3;
    *(float *)(lVar2 + 0x12ac) = (fVar5 + fVar5) * param_3 * param_4;
    fVar5 = *(float *)(param_5 + 0x7c8);
    if (*(float *)(param_5 + 0x7c8) == 0.0) {
      fVar5 = param_2;
    }
    *(float *)(lVar2 + 0x1330) = fVar5;
    cVar1 = *(char *)(param_5 + 0x5a8);
    uVar7 = 0x3f800000;
    if (*(char *)(param_5 + 0x588) != '\0') {
      uVar7 = 0x3f000000;
    }
    *(undefined4 *)(lVar2 + 0x128c) = uVar7;
    uVar7 = 0x3f800000;
    if (cVar1 != '\0') {
      uVar7 = 0x3f000000;
    }
    *(undefined4 *)(lVar2 + 0x1290) = 0x3f800000;
    *(undefined4 *)(lVar2 + 0x1298) = 0x3f800000;
    *(undefined4 *)(lVar2 + 0x1294) = uVar7;
  }
  return;
}

