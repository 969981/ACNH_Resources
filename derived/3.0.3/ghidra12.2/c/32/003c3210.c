
byte FUN_003c3210(long param_1,undefined4 *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined1 uVar4;
  uint uVar5;
  uint uVar6;
  byte bVar7;
  int iVar8;
  undefined4 uVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  ulong uVar14;
  int iVar15;
  long lVar16;
  long lVar17;
  ulong uVar18;
  ulong uVar19;
  float fVar20;
  undefined1 auStack_78 [24];
  
  uVar1 = *param_2;
  uVar2 = param_2[1];
  if (*(long **)(param_2 + 4) == (long *)0x0) {
    iVar8 = param_2[2];
    uVar9 = param_2[3];
  }
  else {
    iVar8 = (**(code **)(**(long **)(param_2 + 4) + 0x10))();
    uVar9 = (**(code **)(**(long **)(param_2 + 4) + 8))();
  }
  uVar4 = *(undefined1 *)(param_2 + 6);
  lVar10 = FUN_03b38a74();
  lVar11 = FUN_03b38a74();
  iVar3 = *(int *)(lVar11 + 0x8c0);
  FUN_003c5228(auStack_78,param_3,param_4);
  *(undefined4 *)(param_1 + 0xa0) = uVar2;
  *(undefined4 *)(param_1 + 0xa4) = uVar1;
  *(undefined4 *)(param_1 + 0xa8) = uVar9;
  *(undefined1 *)(param_1 + 0xf2) = 0;
  uVar12 = FUN_003c4698(uVar1,uVar4);
  uVar1 = *(undefined4 *)(param_1 + 0xa4);
  uVar13 = FUN_003c5234(auStack_78,uVar12,8);
  FUN_003c46b0(param_1,uVar1,uVar4,uVar13,uVar12);
  uVar5 = *(int *)(param_1 + 0xa0) * *(int *)(param_1 + 0xa4);
  uVar12 = FUN_003c5280(auStack_78,8,8,(ulong)uVar5);
  *(undefined8 *)(param_1 + 0x98) = uVar12;
  if (0 < (int)uVar5) {
    uVar19 = 0;
    do {
      uVar6 = *(int *)(param_1 + 0xa8) * iVar8;
      uVar18 = (ulong)uVar6;
      uVar12 = FUN_003c5280(auStack_78,4,4,uVar18);
      *(undefined8 *)(*(long *)(param_1 + 0x98) + uVar19 * 8) = uVar12;
      if (0 < (int)uVar6) {
        if (uVar6 < 4) {
          uVar14 = 0;
        }
        else {
          uVar14 = 0;
          do {
            lVar11 = uVar19 * 8;
            lVar17 = uVar14 * 4;
            uVar14 = uVar14 + 4;
            *(undefined4 *)(*(long *)(*(long *)(param_1 + 0x98) + lVar11) + lVar17) = 0;
            *(undefined4 *)(*(long *)(*(long *)(param_1 + 0x98) + lVar11) + lVar17 + 4) = 0;
            *(undefined4 *)(*(long *)(*(long *)(param_1 + 0x98) + lVar11) + lVar17 + 8) = 0;
            *(undefined4 *)(*(long *)(*(long *)(param_1 + 0x98) + lVar11) + lVar17 + 0xc) = 0;
          } while ((uVar18 & 0xfffffffc) != uVar14);
        }
        uVar18 = uVar18 & 3;
        if ((uVar6 & 3) != 0) {
          lVar11 = uVar14 << 2;
          do {
            uVar18 = uVar18 - 1;
            *(undefined4 *)(*(long *)(*(long *)(param_1 + 0x98) + uVar19 * 8) + lVar11) = 0;
            lVar11 = lVar11 + 4;
          } while (uVar18 != 0);
        }
      }
      uVar19 = uVar19 + 1;
    } while (uVar19 != uVar5);
  }
  if (*(int *)(param_1 + 0xa4) <= iVar8) {
    iVar8 = *(int *)(param_1 + 0xa4);
  }
  uVar6 = *(uint *)(param_1 + 0xa8);
  if ((int)*(uint *)(param_1 + 0xa0) <= (int)*(uint *)(param_1 + 0xa8)) {
    uVar6 = *(uint *)(param_1 + 0xa0);
  }
  if ((0 < iVar8) && (0 < (int)uVar6)) {
    iVar15 = 0;
    do {
      if (uVar6 == 1) {
        lVar11 = 0;
      }
      else {
        lVar11 = 0;
        do {
          *(undefined4 *)
           (*(long *)(*(long *)(param_1 + 0x98) +
                     (lVar11 + (long)*(int *)(param_1 + 0xa0) * (long)iVar15) * 8) +
           (lVar11 + (long)*(int *)(param_1 + 0xa8) * (long)iVar15) * 4) = 0x3f800000;
          lVar17 = lVar11 + (long)*(int *)(param_1 + 0xa0) * (long)iVar15;
          lVar16 = lVar11 + (long)*(int *)(param_1 + 0xa8) * (long)iVar15;
          lVar11 = lVar11 + 2;
          *(undefined4 *)(*(long *)(*(long *)(param_1 + 0x98) + lVar17 * 8 + 8) + lVar16 * 4 + 4) =
               0x3f800000;
        } while ((uVar6 & 0xfffffffe) != (uint)lVar11);
      }
      if ((uVar6 & 1) != 0) {
        *(undefined4 *)
         (*(long *)(*(long *)(param_1 + 0x98) +
                   (long)((int)lVar11 + *(int *)(param_1 + 0xa0) * iVar15) * 8) +
         (long)((int)lVar11 + *(int *)(param_1 + 0xa8) * iVar15) * 4) = 0x3f800000;
      }
      iVar15 = iVar15 + 1;
    } while (iVar15 != iVar8);
  }
  *(undefined1 *)(param_1 + 0x88) = 0;
  *(undefined1 *)(param_1 + 0x8a) = 1;
  if (*(int *)(param_1 + 0x84) < *(int *)(param_1 + 0x80)) {
    fVar20 = *(float *)(param_1 + 0x78) +
             ((*(float *)(param_1 + 0x7c) - *(float *)(param_1 + 0x78)) *
             (float)*(int *)(param_1 + 0x84)) / (float)*(int *)(param_1 + 0x80);
  }
  else {
    fVar20 = *(float *)(param_1 + 0x7c);
  }
  *(float *)(param_1 + 0x78) = fVar20;
  *(undefined8 *)(param_1 + 0x7c) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x84) = 0;
  uVar12 = FUN_003c5280(auStack_78,1,1,*(undefined4 *)(param_1 + 0xa4));
  *(undefined8 *)(param_1 + 0x90) = uVar12;
  if (0 < *(int *)(param_1 + 0xa4)) {
    lVar11 = 0;
    do {
      *(undefined1 *)(*(long *)(param_1 + 0x90) + lVar11) =
           *(undefined1 *)((long)param_2 + lVar11 + 0x19);
      lVar11 = lVar11 + 1;
    } while (lVar11 < *(int *)(param_1 + 0xa4));
  }
  uVar12 = FUN_003c5280(auStack_78,0x14,4);
  *(undefined8 *)(param_1 + 0x68) = uVar12;
  if (0 < *(int *)(param_1 + 0xa4)) {
    lVar17 = 0;
    lVar11 = 0;
    do {
      FUN_003c3008(*(long *)(param_1 + 0x68) + lVar17);
      lVar11 = lVar11 + 1;
      lVar17 = lVar17 + 0x14;
    } while (lVar11 < *(int *)(param_1 + 0xa4));
  }
  uVar12 = FUN_003c5280(auStack_78,0x14,4,*(undefined4 *)(param_1 + 0xa0));
  *(undefined8 *)(param_1 + 0x70) = uVar12;
  if (0 < *(int *)(param_1 + 0xa0)) {
    lVar17 = 0;
    lVar11 = 0;
    do {
      FUN_003c3008(*(long *)(param_1 + 0x70) + lVar17);
      lVar11 = lVar11 + 1;
      lVar17 = lVar17 + 0x14;
    } while (lVar11 < *(int *)(param_1 + 0xa0));
  }
  lVar11 = FUN_03b38a74();
  nn::os::LockMutex((MutexType *)(lVar11 + 0x960));
  bVar7 = nn::audio::AcquireSubMix
                    ((AudioRendererConfig *)(lVar10 + 0x18),(SubMixType *)(param_1 + 0x50),iVar3,
                     uVar5);
  lVar10 = FUN_03b38a74();
  nn::os::UnlockMutex((MutexType *)(lVar10 + 0x960));
  *(byte *)(param_1 + 0xf0) = bVar7 & 1;
  if ((bVar7 & 1) != 0) {
    uVar12 = FUN_03b38a74();
    FUN_003b6850(uVar12,param_1);
  }
  return bVar7 & 1;
}

