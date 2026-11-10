
void FUN_003788e0(long param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  uint uVar2;
  undefined *puVar3;
  uint uVar4;
  uint uVar5;
  long lVar6;
  float *pfVar7;
  undefined8 *puVar8;
  ulong uVar9;
  float *pfVar10;
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
  
  puVar3 = PTR_SinCosSampleTable_04bcef98;
  uVar4 = *(uint *)(param_1 + 0x14);
  if ((uVar4 & 0xc) != 0) {
    uVar2 = uVar4 >> 2 & 3;
    uVar5 = uVar4 & 3;
    if (uVar2 <= (uVar4 & 3)) {
      uVar5 = uVar2;
    }
    if ((int)*(char *)(param_2 + 0x18d) <= (int)uVar5) {
      uVar5 = (uint)*(char *)(param_2 + 0x18d);
    }
    if (uVar5 != 0) {
      uVar4 = 0;
      fVar11 = (float)NEON_ucvtf(*(undefined4 *)PTR_AngleIndexHalfRound_04bcef90);
      fVar12 = *(float *)PTR_FloatDegree180_04bcedf8;
      do {
        lVar1 = ((ulong)*(uint *)(param_1 + 0x10) & 3) * 0x10;
        if (*(byte *)(*(long *)(param_1 + 0x18) +
                      lVar1 + ((ulong)(*(uint *)(param_1 + 0x10) >> 2) & 3) * 0x14 +
                      (long)(int)uVar4 * 0x10 + 1) - 5 < 2) {
          lVar6 = *(long *)(*(long *)(param_2 + 200) + 0x38);
          lVar1 = 0;
          if (lVar6 != 0) {
            lVar1 = lVar6 + (ulong)*(uint *)(param_1 + 0x30);
          }
          if (uVar4 == 2) {
            puVar8 = (undefined8 *)(lVar1 + 0xb0);
            pfVar7 = (float *)(lVar1 + 0xc0);
LAB_00378980:
            fVar13 = -1.0;
            fVar15 = 1.0;
            *puVar8 = 0x3f800000;
            puVar8[1] = 0;
            *pfVar7 = 0.0;
            goto LAB_00378990;
          }
          if (uVar4 == 1) {
            puVar8 = (undefined8 *)(lVar1 + 0x90);
            pfVar7 = (float *)(lVar1 + 0xa0);
            goto LAB_00378980;
          }
          if (uVar4 == 0) {
            puVar8 = (undefined8 *)(lVar1 + 0x70);
            pfVar7 = (float *)(lVar1 + 0x80);
            goto LAB_00378980;
          }
        }
        else {
          pfVar7 = (float *)(*(long *)(param_1 + 0x18) + lVar1 + (long)(int)uVar4 * 0x14);
          fVar14 = pfVar7[3];
          fVar17 = *pfVar7;
          fVar16 = pfVar7[1];
          uVar9 = (ulong)(pfVar7[2] * (fVar11 / fVar12));
          fVar15 = pfVar7[4];
          lVar6 = *(long *)(*(long *)(param_2 + 200) + 0x38);
          pfVar7 = (float *)(puVar3 + (uVar9 >> 0x18 & 0xff) * 0x10);
          fVar18 = *pfVar7;
          fVar19 = pfVar7[1];
          fVar13 = pfVar7[2];
          fVar20 = pfVar7[3];
          lVar1 = 0;
          if (lVar6 != 0) {
            lVar1 = lVar6 + (ulong)*(uint *)(param_1 + 0x30);
          }
          if (uVar4 == 2) {
            pfVar10 = (float *)(lVar1 + 0xb0);
            pfVar7 = (float *)(lVar1 + 0xc0);
          }
          else if (uVar4 == 1) {
            pfVar10 = (float *)(lVar1 + 0x90);
            pfVar7 = (float *)(lVar1 + 0xa0);
          }
          else {
            if (uVar4 != 0) goto LAB_0037899c;
            pfVar10 = (float *)(lVar1 + 0x70);
            pfVar7 = (float *)(lVar1 + 0x80);
          }
          pfVar10[2] = 0.0;
          fVar21 = (float)((uint)uVar9 & 0xffffff) * 5.9604645e-08;
          fVar19 = fVar19 + fVar21 * fVar20;
          fVar18 = fVar18 + fVar21 * fVar13;
          fVar13 = -(fVar15 * fVar18);
          *pfVar10 = fVar14 * fVar18;
          pfVar10[1] = -(fVar19 * fVar15);
          pfVar10[3] = fVar17 + 0.5 + fVar14 * fVar18 * -0.5 + -(fVar19 * fVar15) * -0.5;
          fVar15 = 1.0 - (fVar16 + 0.5 + fVar14 * fVar19 * -0.5 + fVar15 * fVar18 * -0.5);
          *pfVar7 = -(fVar14 * fVar19);
LAB_00378990:
          pfVar7[1] = fVar13;
          pfVar7[2] = 0.0;
          pfVar7[3] = fVar15;
        }
LAB_0037899c:
        uVar4 = uVar4 + 1;
      } while (uVar5 != uVar4);
      uVar4 = *(uint *)(param_1 + 0x14);
    }
  }
  if ((uVar4 & 0x30) == 0) {
    *(undefined1 *)(param_2 + 0x188) = 0xff;
  }
  else {
    uVar4 = uVar4 >> 4 & 3;
    if ((((uVar4 == 0) ||
         (*(undefined1 *)(param_2 + 0x188) =
               *(undefined1 *)
                (*(long *)(param_1 + 0x18) +
                 ((ulong)*(uint *)(param_1 + 0x10) & 3) * 0x10 +
                 ((ulong)(*(uint *)(param_1 + 0x10) >> 2) & 3) * 0x14 + 1), uVar4 == 1)) ||
        (*(undefined1 *)(param_2 + 0x189) =
              *(undefined1 *)
               (*(long *)(param_1 + 0x18) +
                ((ulong)*(uint *)(param_1 + 0x10) & 3) * 0x10 +
                ((ulong)(*(uint *)(param_1 + 0x10) >> 2) & 3) * 0x14 + 0x11), uVar4 == 2)) ||
       (*(undefined1 *)(param_2 + 0x18a) =
             *(undefined1 *)
              (*(long *)(param_1 + 0x18) +
               ((ulong)*(uint *)(param_1 + 0x10) & 3) * 0x10 +
               ((ulong)(*(uint *)(param_1 + 0x10) >> 2) & 3) * 0x14 + 0x21), uVar4 != 3)) {
      memset((void *)(param_2 + (ulong)(uVar4 | 0x188)),0xff,(ulong)(2 - uVar4) + 1);
    }
  }
  FUN_00378f54(param_1,param_2,param_3,param_4);
  return;
}

