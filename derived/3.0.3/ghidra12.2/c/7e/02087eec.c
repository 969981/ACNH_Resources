
/* WARNING: Removing unreachable block (ram,0x02087f80) */
/* WARNING: Removing unreachable block (ram,0x02087f64) */
/* WARNING: Removing unreachable block (ram,0x02087f9c) */

bool FUN_02087eec(long param_1,float *param_2,float *param_3)

{
  undefined8 *puVar1;
  uint uVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  uint uVar7;
  ulong uVar8;
  uint uVar9;
  long lVar10;
  long lVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  
  lVar10 = *(long *)(param_1 + 8);
  if ((*(long *)(lVar10 + 0x48) != 0) &&
     (lVar11 = *(long *)(*(long *)(lVar10 + 0x48) + 0x68), lVar11 != 0)) {
    fVar15 = *(float *)(lVar11 + 0x2a4);
    fVar13 = *(float *)(lVar10 + 0x1574);
    fVar16 = *(float *)(lVar10 + 0x1570) * *(float *)(lVar11 + 0x2a0) + *(float *)(lVar11 + 0x278);
    fVar18 = *(float *)(lVar11 + 0x27c);
    fVar17 = *(float *)(lVar10 + 0x1578) * *(float *)(lVar11 + 0x2a8) + *(float *)(lVar11 + 0x280);
    fVar19 = param_2[1];
    fVar12 = *param_2 - fVar16;
    fVar14 = param_2[2] - fVar17;
    fVar12 = SQRT(fVar14 * fVar14 + fVar12 * fVar12);
    if (param_3 != (float *)0x0) {
      *param_3 = fVar12;
    }
    puVar1 = (undefined8 *)(param_1 + 0x2a0);
    uVar8 = (**(code **)(*(long *)(param_1 + 0x2a0) + 0x10))(puVar1);
    if (((uVar8 & 1) == 0) || (uVar8 = (**(code **)*puVar1)(puVar1,param_2), (uVar8 & 1) != 0)) {
      fVar19 = fVar19 - (fVar13 * fVar15 + fVar18);
      bVar3 = true;
      bVar6 = false;
      if (fVar12 < *(float *)(param_1 + 0x29c)) {
        bVar3 = false;
        bVar6 = true;
        if (!NAN(fVar19)) {
          bVar3 = fVar19 < -15.0;
          bVar6 = false;
        }
      }
      bVar4 = false;
      bVar5 = true;
      if (bVar3 == bVar6) {
        bVar4 = false;
        bVar5 = true;
        if (!NAN(fVar19)) {
          bVar4 = fVar19 == 40.0;
          bVar5 = 40.0 <= fVar19;
        }
      }
      if (!bVar5 || bVar4) {
        uVar7 = FUN_006f0400(*param_2 - fVar16,param_2[2] - fVar17);
        uVar9 = *(uint *)(lVar11 + 0x2b4);
        if (uVar7 - uVar9 == 0) {
          uVar9 = 0;
        }
        else {
          uVar2 = uVar7 - uVar9;
          if (uVar7 <= uVar9) {
            uVar2 = uVar9 - uVar7;
          }
          uVar9 = -uVar2;
          if (uVar2 < 0x80000001) {
            uVar9 = uVar2;
          }
        }
        return uVar9 < *(uint *)(param_1 + 0x298);
      }
    }
  }
  return false;
}

