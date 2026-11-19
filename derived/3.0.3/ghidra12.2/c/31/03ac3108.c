
void FUN_03ac3108(long param_1,uint param_2,undefined8 *param_3,undefined8 param_4)

{
  long lVar1;
  float fVar2;
  undefined8 uVar3;
  float fVar4;
  float fVar5;
  undefined8 uVar6;
  float fVar7;
  undefined8 uVar8;
  float fVar9;
  float fVar10;
  undefined8 uVar11;
  float fVar12;
  undefined8 uVar13;
  float fVar14;
  float fVar15;
  undefined8 uVar16;
  float fVar17;
  undefined8 uVar18;
  float fVar19;
  float fVar20;
  undefined8 uVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  
  uVar6 = param_3[1];
  uVar3 = *param_3;
  uVar11 = param_3[3];
  uVar8 = param_3[2];
  if (*(uint *)(param_1 + 0x1d0) <= param_2) {
    param_2 = 0;
  }
  uVar16 = param_3[5];
  uVar13 = param_3[4];
  uVar21 = param_3[7];
  uVar18 = param_3[6];
  lVar1 = *(long *)(param_1 + 0x1d8) + (long)(int)param_2 * 0x1340;
  *(undefined8 *)(lVar1 + 0xee8) = param_4;
  fVar7 = (float)uVar8;
  fVar22 = (float)*(undefined8 *)(lVar1 + 0x1030);
  fVar23 = (float)((ulong)*(undefined8 *)(lVar1 + 0x1030) >> 0x20);
  fVar24 = (float)*(undefined8 *)(lVar1 + 0x1038);
  fVar25 = (float)((ulong)*(undefined8 *)(lVar1 + 0x1038) >> 0x20);
  fVar9 = (float)((ulong)uVar8 >> 0x20);
  fVar26 = (float)*(undefined8 *)(lVar1 + 0x1040);
  fVar28 = (float)((ulong)*(undefined8 *)(lVar1 + 0x1040) >> 0x20);
  fVar30 = (float)*(undefined8 *)(lVar1 + 0x1048);
  fVar32 = (float)((ulong)*(undefined8 *)(lVar1 + 0x1048) >> 0x20);
  fVar12 = (float)uVar13;
  fVar14 = (float)((ulong)uVar13 >> 0x20);
  fVar2 = (float)uVar3;
  fVar4 = (float)((ulong)uVar3 >> 0x20);
  fVar17 = (float)uVar18;
  fVar19 = (float)((ulong)uVar18 >> 0x20);
  fVar5 = (float)uVar6;
  fVar27 = (float)*(undefined8 *)(lVar1 + 0x1050);
  fVar29 = (float)((ulong)*(undefined8 *)(lVar1 + 0x1050) >> 0x20);
  fVar31 = (float)*(undefined8 *)(lVar1 + 0x1058);
  fVar33 = (float)((ulong)*(undefined8 *)(lVar1 + 0x1058) >> 0x20);
  fVar10 = (float)uVar11;
  fVar15 = (float)uVar16;
  fVar20 = (float)uVar21;
  *(ulong *)(lVar1 + 0x1134) =
       CONCAT44((float)((ulong)uVar6 >> 0x20) + fVar25 * fVar2 + fVar32 * fVar4 + fVar33 * fVar5,
                fVar24 * fVar2 + fVar30 * fVar4 + fVar31 * fVar5 + 0.0);
  *(ulong *)(lVar1 + 0x112c) =
       CONCAT44(fVar23 * fVar2 + fVar28 * fVar4 + fVar29 * fVar5 + 0.0,
                fVar22 * fVar2 + fVar26 * fVar4 + fVar27 * fVar5 + 0.0);
  *(ulong *)(lVar1 + 0x1144) =
       CONCAT44((float)((ulong)uVar11 >> 0x20) + fVar25 * fVar7 + fVar32 * fVar9 + fVar33 * fVar10,
                fVar24 * fVar7 + fVar30 * fVar9 + fVar31 * fVar10 + 0.0);
  *(ulong *)(lVar1 + 0x113c) =
       CONCAT44(fVar23 * fVar7 + fVar28 * fVar9 + fVar29 * fVar10 + 0.0,
                fVar22 * fVar7 + fVar26 * fVar9 + fVar27 * fVar10 + 0.0);
  *(ulong *)(lVar1 + 0x1154) =
       CONCAT44((float)((ulong)uVar16 >> 0x20) + fVar25 * fVar12 + fVar32 * fVar14 + fVar33 * fVar15
                ,fVar24 * fVar12 + fVar30 * fVar14 + fVar31 * fVar15 + 0.0);
  *(ulong *)(lVar1 + 0x114c) =
       CONCAT44(fVar23 * fVar12 + fVar28 * fVar14 + fVar29 * fVar15 + 0.0,
                fVar22 * fVar12 + fVar26 * fVar14 + fVar27 * fVar15 + 0.0);
  *(ulong *)(lVar1 + 0x1164) =
       CONCAT44((float)((ulong)uVar21 >> 0x20) + fVar25 * fVar17 + fVar32 * fVar19 + fVar33 * fVar20
                ,fVar24 * fVar17 + fVar30 * fVar19 + fVar31 * fVar20 + 0.0);
  *(ulong *)(lVar1 + 0x115c) =
       CONCAT44(fVar23 * fVar17 + fVar28 * fVar19 + fVar29 * fVar20 + 0.0,
                fVar22 * fVar17 + fVar26 * fVar19 + fVar27 * fVar20 + 0.0);
  return;
}

