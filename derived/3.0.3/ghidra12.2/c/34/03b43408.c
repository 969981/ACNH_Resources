
void FUN_03b43408(long param_1)

{
  long lVar1;
  ushort uVar2;
  ulong uVar3;
  undefined4 uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  float fVar8;
  float fVar9;
  
  *(undefined4 *)(param_1 + 0x1c) = 0;
  if ((*(byte *)(param_1 + 0x1d0) >> 1 & 1) == 0) {
    fVar9 = *(float *)(param_1 + 0xf4) * *(float *)(param_1 + 0xfc);
    uVar7 = *(undefined8 *)(*(long *)(param_1 + 0x120) + 8);
    if (*(long *)(param_1 + 0x1e8) == 0) {
      if (*(long **)(param_1 + 0x118) != (long *)0x0) {
        fVar8 = (float)(**(code **)(**(long **)(param_1 + 0x118) + 0x48))();
        goto LAB_03b43474;
      }
    }
    else {
      fVar8 = *(float *)(*(long *)(param_1 + 0x1e8) + 0x18);
LAB_03b43474:
      fVar9 = fVar9 * fVar8;
    }
    FUN_03b61160(fVar9,uVar7);
    if (0.0 < *(float *)(param_1 + 0x2c)) {
      lVar5 = *(long *)(*(long *)(param_1 + 0x120) + 8);
      if (*(char *)(lVar5 + 0x58) != '\0') {
        *(float *)(lVar5 + 0x68) = *(float *)(param_1 + 0x2c);
      }
      *(undefined4 *)(param_1 + 0x2c) = 0;
    }
    if (*(char *)(param_1 + 0x16) == '\0') {
      lVar6 = *(long *)(param_1 + 0x120);
      lVar5 = *(long *)(lVar6 + 8);
      if (lVar5 != 0) {
        uVar2 = *(ushort *)(param_1 + 0x14);
        lVar1 = *(long *)(lVar5 + 0x38);
        if (DAT_05aebc00 != '\0') {
          lVar1 = lVar5 + 0x70;
        }
        if ((lVar1 == 0) || ((*(byte *)(lVar1 + 0x11) >> 5 & 1) == 0)) {
          FUN_03b60e78(0);
          if (DAT_05aebc00 == '\0') {
            uVar3 = FUN_03b46a00(0,*(long *)(lVar6 + 8) + 8,uVar2 >> 2 & 1);
          }
          else {
            uVar3 = FUN_03b600e4(0,*(long *)(lVar6 + 8) + 0x50,uVar2 >> 2 & 1);
          }
          if ((uVar3 & 1) == 0) goto LAB_03b43600;
        }
        *(undefined4 *)(lVar6 + 0x10) = 1;
        lVar5 = *(long *)(param_1 + 0x118);
        goto joined_r0x03b435c4;
      }
    }
    else {
      *(ushort *)(param_1 + 0x14) = *(ushort *)(param_1 + 0x14) & 0xfffb;
      uVar3 = FUN_03b47ab8(*(undefined8 *)(param_1 + 0x120));
      if ((uVar3 & 1) != 0) {
        lVar5 = *(long *)(param_1 + 0x118);
joined_r0x03b435c4:
        if (lVar5 != 0) {
          FUN_03b46430(param_1);
        }
        if (0.0 < *(float *)(param_1 + 0x30)) {
          lVar5 = *(long *)(param_1 + 0x128);
          *(undefined8 *)(lVar5 + 8) = 0;
          *(undefined8 *)(lVar5 + 0x10) = 0;
          fVar9 = *(float *)(param_1 + 0x30);
          if (0.0 <= fVar9) {
            lVar6 = *(long *)(param_1 + 0x128);
            *(undefined4 *)(lVar6 + 0x10) = 0x3f800000;
            lVar5 = DAT_05aebb78;
            if ((fVar9 == 0.0) || (fVar8 = *(float *)(lVar6 + 8), fVar8 == 1.0)) {
              *(undefined4 *)(lVar6 + 0x14) = 0;
              *(undefined1 **)(lVar6 + 8) = &DAT_3f8000003f800000;
            }
            else {
              fVar9 = (1.0 - fVar8) / fVar9;
              *(float *)(lVar6 + 0x14) = fVar9;
              fVar8 = fVar8 + *(float *)(*(long *)(lVar5 + 0x10) + 0x1c) * fVar9;
              if (0.0 <= fVar9) {
                if (1.0 < fVar8) goto LAB_03b43550;
              }
              else if (fVar8 < 1.0) {
LAB_03b43550:
                fVar8 = 1.0;
              }
              *(float *)(lVar6 + 0xc) = fVar8;
            }
          }
        }
        uVar4 = 3;
        if ((*(ushort *)(param_1 + 0x14) & 4) == 0) {
          uVar4 = 4;
        }
        goto LAB_03b43660;
      }
    }
  }
  else if (*(long *)(param_1 + 0x1f0) != 0) {
    uVar4 = 8;
    goto LAB_03b43660;
  }
LAB_03b43600:
  lVar5 = *(long *)(param_1 + 0x120);
  *(undefined4 *)(param_1 + 0xf4) = 0;
  nn::os::LockMutex((MutexType *)(lVar5 + 0x48));
  if (*(long *)(lVar5 + 8) != 0) {
    FUN_03b60e78(0);
  }
  *(undefined4 *)(lVar5 + 0x10) = 0;
  *(undefined4 *)(lVar5 + 0x24) = 0;
  *(undefined1 *)(lVar5 + 0x18) = 0;
  nn::os::UnlockMutex((MutexType *)(lVar5 + 0x48));
  if (*(long *)(param_1 + 0x110) != 0) {
    if (*(long *)(param_1 + 0x230) != 0 || *(long *)(param_1 + 0x228) != 0) {
      FUN_03b3d410(*(long *)(param_1 + 0x110),param_1);
    }
    *(undefined8 *)(param_1 + 0x110) = 0;
  }
  uVar4 = 7;
LAB_03b43660:
  *(undefined4 *)(param_1 + 0xc) = uVar4;
  return;
}

