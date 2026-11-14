
void FUN_0161cca0(long param_1,float *param_2)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  uint uVar5;
  long lVar6;
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
  float fVar23;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  
  if (param_2 != (float *)0x0) {
    param_2[4] = -3.4028235e+38;
    param_2[5] = -3.4028235e+38;
    param_2[0] = 3.4028235e+38;
    param_2[1] = 3.4028235e+38;
    param_2[2] = 3.4028235e+38;
    param_2[3] = -3.4028235e+38;
    uVar2 = *(uint *)(param_1 + 0x10);
    if (0 < (int)uVar2) {
      uVar5 = 0;
      do {
        local_78 = 0xff7fffffff7fffff;
        uVar1 = uVar5;
        if (uVar2 <= uVar5) {
          uVar1 = 0;
        }
        local_88 = 0x7f7fffff7f7fffff;
        local_80 = 0xff7fffff7f7fffff;
        lVar6 = *(long *)(param_1 + 0x18) + (ulong)uVar1 * 0x78;
        (**(code **)(**(long **)(lVar6 + 0x18) + 0x220))(*(long **)(lVar6 + 0x18),&local_88,1);
        fVar12 = *(float *)(*(long *)(*(long *)(lVar6 + 0x18) + 0x38) + 0xc);
        nn::os::LockMutex((MutexType *)(lVar6 + 0x58));
        if (*(long *)(lVar6 + 0x28) != lVar6 + 0x20) {
          lVar3 = (long)*(int *)(lVar6 + 0x34);
          lVar4 = *(long *)(lVar6 + 0x28) - lVar3;
          fVar13 = param_2[2];
          fVar14 = param_2[3];
          fVar10 = *param_2;
          fVar11 = param_2[1];
          fVar7 = ((float)local_88 + local_80._4_4_) * 0.5;
          fVar8 = (local_88._4_4_ + (float)local_78) * 0.5;
          fVar9 = ((float)local_80 + local_78._4_4_) * 0.5;
          fVar15 = param_2[4];
          fVar16 = param_2[5];
          do {
            fVar17 = *(float *)(lVar4 + 0x20);
            fVar19 = *(float *)(lVar4 + 0x18);
            fVar18 = *(float *)(lVar4 + 0x1c);
            fVar22 = (*(float *)(lVar4 + 0x24) / fVar12) * 0.5;
            fVar20 = (local_80._4_4_ - (float)local_88) * fVar22;
            fVar20 = ((fVar7 + fVar20) - (fVar7 - fVar20)) * 0.5;
            fVar21 = fVar19 - fVar20;
            if (fVar21 < fVar10) {
              *param_2 = fVar21;
              fVar10 = fVar21;
            }
            fVar21 = ((float)local_78 - local_88._4_4_) * fVar22;
            fVar21 = ((fVar8 + fVar21) - (fVar8 - fVar21)) * 0.5;
            fVar23 = fVar18 - fVar21;
            if (fVar23 < fVar11) {
              param_2[1] = fVar23;
              fVar11 = fVar23;
            }
            fVar22 = (local_78._4_4_ - (float)local_80) * fVar22;
            fVar22 = ((fVar9 + fVar22) - (fVar9 - fVar22)) * 0.5;
            fVar23 = fVar17 - fVar22;
            if (fVar23 < fVar13) {
              param_2[2] = fVar23;
              fVar13 = fVar23;
            }
            fVar19 = fVar19 + fVar20;
            if (fVar14 < fVar19) {
              param_2[3] = fVar19;
              fVar14 = fVar19;
            }
            fVar18 = fVar18 + fVar21;
            if (fVar15 < fVar18) {
              param_2[4] = fVar18;
              fVar15 = fVar18;
            }
            fVar17 = fVar17 + fVar22;
            if (fVar16 < fVar17) {
              param_2[5] = fVar17;
              fVar16 = fVar17;
            }
            lVar4 = *(long *)(lVar4 + lVar3 + 8) - lVar3;
          } while (lVar4 != (lVar6 + 0x20) - lVar3);
        }
        nn::os::UnlockMutex((MutexType *)(lVar6 + 0x58));
        uVar2 = *(uint *)(param_1 + 0x10);
        uVar5 = uVar5 + 1;
      } while ((int)uVar5 < (int)uVar2);
    }
  }
  return;
}

