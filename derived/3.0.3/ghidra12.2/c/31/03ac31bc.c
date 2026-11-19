
void FUN_03ac31bc(long param_1,uint param_2,undefined8 *param_3,undefined4 *param_4,
                 undefined8 param_5)

{
  long lVar1;
  float fVar2;
  undefined4 uVar3;
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
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  
  uVar21 = param_3[3];
  if (*(uint *)(param_1 + 0x1d0) <= param_2) {
    param_2 = 0;
  }
  lVar1 = *(long *)(param_1 + 0x1d8) + (long)(int)param_2 * 0x1340;
  fVar15 = (float)*param_3;
  fVar11 = (float)*(undefined8 *)(lVar1 + 0x1030);
  fVar12 = (float)((ulong)*(undefined8 *)(lVar1 + 0x1030) >> 0x20);
  fVar13 = (float)*(undefined8 *)(lVar1 + 0x1038);
  fVar14 = (float)((ulong)*(undefined8 *)(lVar1 + 0x1038) >> 0x20);
  fVar16 = (float)((ulong)*param_3 >> 0x20);
  fVar7 = (float)*(undefined8 *)(lVar1 + 0x1040);
  fVar8 = (float)((ulong)*(undefined8 *)(lVar1 + 0x1040) >> 0x20);
  fVar9 = (float)*(undefined8 *)(lVar1 + 0x1048);
  fVar10 = (float)((ulong)*(undefined8 *)(lVar1 + 0x1048) >> 0x20);
  fVar17 = (float)param_3[1];
  fVar2 = (float)*(undefined8 *)(lVar1 + 0x1050);
  fVar4 = (float)((ulong)*(undefined8 *)(lVar1 + 0x1050) >> 0x20);
  fVar5 = (float)*(undefined8 *)(lVar1 + 0x1058);
  fVar6 = (float)((ulong)*(undefined8 *)(lVar1 + 0x1058) >> 0x20);
  fVar18 = (float)param_3[2];
  fVar19 = (float)((ulong)param_3[2] >> 0x20);
  fVar20 = (float)uVar21;
  uVar23 = param_3[5];
  uVar22 = param_3[4];
  uVar25 = param_3[7];
  uVar24 = param_3[6];
  *(ulong *)(lVar1 + 0x1074) =
       CONCAT44((float)((ulong)param_3[1] >> 0x20) +
                fVar14 * fVar15 + fVar10 * fVar16 + fVar6 * fVar17,
                fVar13 * fVar15 + fVar9 * fVar16 + fVar5 * fVar17 + 0.0);
  *(ulong *)(lVar1 + 0x106c) =
       CONCAT44(fVar12 * fVar15 + fVar8 * fVar16 + fVar4 * fVar17 + 0.0,
                fVar11 * fVar15 + fVar7 * fVar16 + fVar2 * fVar17 + 0.0);
  *(ulong *)(lVar1 + 0x1084) =
       CONCAT44((float)((ulong)uVar21 >> 0x20) + fVar14 * fVar18 + fVar10 * fVar19 + fVar6 * fVar20,
                fVar13 * fVar18 + fVar9 * fVar19 + fVar5 * fVar20 + 0.0);
  *(ulong *)(lVar1 + 0x107c) =
       CONCAT44(fVar12 * fVar18 + fVar8 * fVar19 + fVar4 * fVar20 + 0.0,
                fVar11 * fVar18 + fVar7 * fVar19 + fVar2 * fVar20 + 0.0);
  fVar15 = (float)uVar22;
  fVar16 = (float)((ulong)uVar22 >> 0x20);
  fVar17 = (float)uVar23;
  fVar18 = (float)uVar24;
  fVar19 = (float)((ulong)uVar24 >> 0x20);
  fVar20 = (float)uVar25;
  *(ulong *)(lVar1 + 0x1094) =
       CONCAT44((float)((ulong)uVar23 >> 0x20) + fVar14 * fVar15 + fVar10 * fVar16 + fVar6 * fVar17,
                fVar13 * fVar15 + fVar9 * fVar16 + fVar5 * fVar17 + 0.0);
  *(ulong *)(lVar1 + 0x108c) =
       CONCAT44(fVar12 * fVar15 + fVar8 * fVar16 + fVar4 * fVar17 + 0.0,
                fVar11 * fVar15 + fVar7 * fVar16 + fVar2 * fVar17 + 0.0);
  *(ulong *)(lVar1 + 0x10a4) =
       CONCAT44((float)((ulong)uVar25 >> 0x20) + fVar14 * fVar18 + fVar10 * fVar19 + fVar6 * fVar20,
                fVar13 * fVar18 + fVar9 * fVar19 + fVar5 * fVar20 + 0.0);
  *(ulong *)(lVar1 + 0x109c) =
       CONCAT44(fVar12 * fVar18 + fVar8 * fVar19 + fVar4 * fVar20 + 0.0,
                fVar11 * fVar18 + fVar7 * fVar19 + fVar2 * fVar20 + 0.0);
  uVar21 = param_3[0xb];
  fVar15 = (float)param_3[8];
  fVar16 = (float)((ulong)param_3[8] >> 0x20);
  fVar17 = (float)param_3[9];
  fVar18 = (float)param_3[10];
  fVar19 = (float)((ulong)param_3[10] >> 0x20);
  fVar20 = (float)uVar21;
  uVar23 = param_3[0xd];
  uVar22 = param_3[0xc];
  uVar25 = param_3[0xf];
  uVar24 = param_3[0xe];
  *(ulong *)(lVar1 + 0x10b4) =
       CONCAT44((float)((ulong)param_3[9] >> 0x20) +
                fVar14 * fVar15 + fVar10 * fVar16 + fVar6 * fVar17,
                fVar13 * fVar15 + fVar9 * fVar16 + fVar5 * fVar17 + 0.0);
  *(ulong *)(lVar1 + 0x10ac) =
       CONCAT44(fVar12 * fVar15 + fVar8 * fVar16 + fVar4 * fVar17 + 0.0,
                fVar11 * fVar15 + fVar7 * fVar16 + fVar2 * fVar17 + 0.0);
  *(ulong *)(lVar1 + 0x10c4) =
       CONCAT44((float)((ulong)uVar21 >> 0x20) + fVar14 * fVar18 + fVar10 * fVar19 + fVar6 * fVar20,
                fVar13 * fVar18 + fVar9 * fVar19 + fVar5 * fVar20 + 0.0);
  *(ulong *)(lVar1 + 0x10bc) =
       CONCAT44(fVar12 * fVar18 + fVar8 * fVar19 + fVar4 * fVar20 + 0.0,
                fVar11 * fVar18 + fVar7 * fVar19 + fVar2 * fVar20 + 0.0);
  fVar15 = (float)uVar22;
  fVar16 = (float)((ulong)uVar22 >> 0x20);
  fVar17 = (float)uVar23;
  fVar18 = (float)uVar24;
  fVar19 = (float)((ulong)uVar24 >> 0x20);
  fVar20 = (float)uVar25;
  *(ulong *)(lVar1 + 0x10d4) =
       CONCAT44((float)((ulong)uVar23 >> 0x20) + fVar14 * fVar15 + fVar10 * fVar16 + fVar6 * fVar17,
                fVar13 * fVar15 + fVar9 * fVar16 + fVar5 * fVar17 + 0.0);
  *(ulong *)(lVar1 + 0x10cc) =
       CONCAT44(fVar12 * fVar15 + fVar8 * fVar16 + fVar4 * fVar17 + 0.0,
                fVar11 * fVar15 + fVar7 * fVar16 + fVar2 * fVar17 + 0.0);
  *(ulong *)(lVar1 + 0x10e4) =
       CONCAT44((float)((ulong)uVar25 >> 0x20) + fVar14 * fVar18 + fVar10 * fVar19 + fVar6 * fVar20,
                fVar13 * fVar18 + fVar9 * fVar19 + fVar5 * fVar20 + 0.0);
  *(ulong *)(lVar1 + 0x10dc) =
       CONCAT44(fVar12 * fVar18 + fVar8 * fVar19 + fVar4 * fVar20 + 0.0,
                fVar11 * fVar18 + fVar7 * fVar19 + fVar2 * fVar20 + 0.0);
  uVar21 = param_3[0x13];
  fVar18 = (float)param_3[0x12];
  fVar19 = (float)((ulong)param_3[0x12] >> 0x20);
  fVar15 = (float)param_3[0x10];
  fVar16 = (float)((ulong)param_3[0x10] >> 0x20);
  fVar20 = (float)uVar21;
  fVar17 = (float)param_3[0x11];
  uVar23 = param_3[0x15];
  uVar22 = param_3[0x14];
  uVar25 = param_3[0x17];
  uVar24 = param_3[0x16];
  *(ulong *)(lVar1 + 0x10f4) =
       CONCAT44((float)((ulong)param_3[0x11] >> 0x20) +
                fVar14 * fVar15 + fVar10 * fVar16 + fVar6 * fVar17,
                fVar13 * fVar15 + fVar9 * fVar16 + fVar5 * fVar17 + 0.0);
  *(ulong *)(lVar1 + 0x10ec) =
       CONCAT44(fVar12 * fVar15 + fVar8 * fVar16 + fVar4 * fVar17 + 0.0,
                fVar11 * fVar15 + fVar7 * fVar16 + fVar2 * fVar17 + 0.0);
  *(ulong *)(lVar1 + 0x1104) =
       CONCAT44((float)((ulong)uVar21 >> 0x20) + fVar14 * fVar18 + fVar10 * fVar19 + fVar6 * fVar20,
                fVar13 * fVar18 + fVar9 * fVar19 + fVar5 * fVar20 + 0.0);
  *(ulong *)(lVar1 + 0x10fc) =
       CONCAT44(fVar12 * fVar18 + fVar8 * fVar19 + fVar4 * fVar20 + 0.0,
                fVar11 * fVar18 + fVar7 * fVar19 + fVar2 * fVar20 + 0.0);
  fVar15 = (float)uVar22;
  fVar16 = (float)((ulong)uVar22 >> 0x20);
  fVar18 = (float)uVar24;
  fVar19 = (float)((ulong)uVar24 >> 0x20);
  fVar17 = (float)uVar23;
  fVar20 = (float)uVar25;
  *(ulong *)(lVar1 + 0x1114) =
       CONCAT44((float)((ulong)uVar23 >> 0x20) + fVar14 * fVar15 + fVar10 * fVar16 + fVar6 * fVar17,
                fVar13 * fVar15 + fVar9 * fVar16 + fVar5 * fVar17 + 0.0);
  *(ulong *)(lVar1 + 0x110c) =
       CONCAT44(fVar12 * fVar15 + fVar8 * fVar16 + fVar4 * fVar17 + 0.0,
                fVar11 * fVar15 + fVar7 * fVar16 + fVar2 * fVar17 + 0.0);
  *(ulong *)(lVar1 + 0x1124) =
       CONCAT44((float)((ulong)uVar25 >> 0x20) + fVar14 * fVar18 + fVar10 * fVar19 + fVar6 * fVar20,
                fVar13 * fVar18 + fVar9 * fVar19 + fVar5 * fVar20 + 0.0);
  *(ulong *)(lVar1 + 0x111c) =
       CONCAT44(fVar12 * fVar18 + fVar8 * fVar19 + fVar4 * fVar20 + 0.0,
                fVar11 * fVar18 + fVar7 * fVar19 + fVar2 * fVar20 + 0.0);
  *(undefined4 *)(lVar1 + 0x12d4) = *param_4;
  *(undefined4 *)(lVar1 + 0x12d8) = param_4[1];
  uVar3 = param_4[2];
  *(undefined8 *)(lVar1 + 0xee0) = param_5;
  *(undefined4 *)(lVar1 + 0x12dc) = uVar3;
  return;
}

