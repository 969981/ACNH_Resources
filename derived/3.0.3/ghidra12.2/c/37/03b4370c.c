
void FUN_03b4370c(long param_1)

{
  long lVar1;
  long lVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  switch(*(undefined4 *)(param_1 + 0xc)) {
  case 1:
    fVar4 = *(float *)(param_1 + 0x2c);
    if (0.0 < fVar4) {
      fVar4 = fVar4 - *(float *)(*(long *)(DAT_05aebb78 + 0x10) + 0x1c);
      *(float *)(param_1 + 0x2c) = fVar4;
    }
    if (0.0 < fVar4) {
      return;
    }
    *(undefined4 *)(param_1 + 0xc) = 2;
    return;
  default:
    goto switchD_03b43744_caseD_2;
  case 4:
    if (((*(ushort *)(param_1 + 0x14) & 1) != 0) || (*(float *)(param_1 + 0x1c) == 0.0)) {
      FUN_03b43ed0(param_1);
    }
    lVar1 = *(long *)(param_1 + 0x128);
    fVar4 = *(float *)(lVar1 + 0x10);
    lVar2 = *(long *)PTR_DAT_04bc3ee8;
    if (*(float *)(lVar1 + 8) != fVar4) {
      *(float *)(lVar1 + 8) = *(float *)(lVar1 + 0xc);
      fVar5 = *(float *)(lVar1 + 0xc) +
              *(float *)(*(long *)(lVar2 + 0x10) + 0x1c) * *(float *)(lVar1 + 0x14);
      if (0.0 <= *(float *)(lVar1 + 0x14)) {
        if (fVar4 < fVar5) goto LAB_03b437e8;
      }
      else if (fVar5 < fVar4) {
LAB_03b437e8:
        fVar5 = fVar4;
      }
      *(float *)(lVar1 + 0xc) = fVar5;
    }
    lVar1 = *(long *)(lVar2 + 0x10);
    goto LAB_03b439d4;
  case 5:
    if ((*(ushort *)(param_1 + 0x14) & 1) != 0) {
      FUN_03b43ed0(param_1);
    }
    fVar4 = *(float *)(param_1 + 0x2c);
    if (0.0 < fVar4) {
      fVar4 = fVar4 - *(float *)(*(long *)(DAT_05aebb78 + 0x10) + 0x1c);
      *(float *)(param_1 + 0x2c) = fVar4;
    }
    if (fVar4 <= 0.0) {
      FUN_03b456dc(param_1);
    }
    break;
  case 6:
    if (DAT_05aebb10 == '\0') {
      if (*(int *)(param_1 + 0x18) == 0) {
        FUN_03b43ed0(param_1);
      }
      lVar1 = *(long *)(param_1 + 0x128);
      if (lVar1 == 0) {
        return;
      }
      fVar4 = *(float *)(lVar1 + 0x10);
      if ((0.0 < *(float *)(param_1 + 0x30)) && (*(float *)(lVar1 + 8) == fVar4)) {
        lVar1 = *(long *)(param_1 + 0x120);
        *(undefined4 *)(param_1 + 0xf4) = 0;
        nn::os::LockMutex((MutexType *)(lVar1 + 0x48));
        if (*(long *)(lVar1 + 8) != 0) {
          FUN_03b60e78(0);
        }
        *(undefined4 *)(lVar1 + 0x10) = 0;
        *(undefined4 *)(lVar1 + 0x24) = 0;
        *(undefined1 *)(lVar1 + 0x18) = 0;
        nn::os::UnlockMutex((MutexType *)(lVar1 + 0x48));
        if (*(long *)(param_1 + 0x110) != 0) {
          if (*(long *)(param_1 + 0x230) != 0 || *(long *)(param_1 + 0x228) != 0) {
            FUN_03b3d410(*(long *)(param_1 + 0x110),param_1);
          }
          *(undefined8 *)(param_1 + 0x110) = 0;
        }
        *(undefined4 *)(param_1 + 0xc) = 7;
        return;
      }
      if (*(float *)(lVar1 + 8) != fVar4) {
        *(float *)(lVar1 + 8) = *(float *)(lVar1 + 0xc);
        fVar5 = *(float *)(lVar1 + 0xc) +
                *(float *)(*(long *)(*(long *)PTR_DAT_04bc3ee8 + 0x10) + 0x1c) *
                *(float *)(lVar1 + 0x14);
        if (0.0 <= *(float *)(lVar1 + 0x14)) {
          if (fVar4 < fVar5) goto LAB_03b439b4;
        }
        else if (fVar5 < fVar4) {
LAB_03b439b4:
          fVar5 = fVar4;
        }
        *(float *)(lVar1 + 0xc) = fVar5;
      }
    }
    else {
      lVar1 = *(long *)(param_1 + 0x128);
      if (lVar1 == 0) {
        return;
      }
      fVar4 = *(float *)(lVar1 + 8);
      fVar5 = *(float *)(lVar1 + 0x10);
      if (fVar4 != fVar5) {
        *(float *)(lVar1 + 8) = *(float *)(lVar1 + 0xc);
        fVar3 = *(float *)(lVar1 + 0xc) +
                *(float *)(*(long *)(*(long *)PTR_DAT_04bc3ee8 + 0x10) + 0x1c) *
                *(float *)(lVar1 + 0x14);
        if (0.0 <= *(float *)(lVar1 + 0x14)) {
          if (fVar5 < fVar3) goto LAB_03b4389c;
        }
        else if (fVar3 < fVar5) {
LAB_03b4389c:
          fVar3 = fVar5;
        }
        *(float *)(lVar1 + 0xc) = fVar3;
      }
      if (*(int *)(param_1 + 0x18) == 0) {
        FUN_03b43ed0(param_1);
      }
      if (((0.0 < *(float *)(param_1 + 0x30)) && (fVar4 == fVar5)) &&
         (*(float *)(*(long *)(param_1 + 0x128) + 8) ==
          *(float *)(*(long *)(param_1 + 0x128) + 0x10))) {
        *(undefined4 *)(param_1 + 0xf4) = 0;
        FUN_03b47b74(*(undefined8 *)(param_1 + 0x120));
        if (*(long *)(param_1 + 0x110) != 0) {
          if (*(long *)(param_1 + 0x230) != 0 || *(long *)(param_1 + 0x228) != 0) {
            FUN_03b3d410(*(long *)(param_1 + 0x110),param_1);
          }
          *(undefined8 *)(param_1 + 0x110) = 0;
        }
        *(undefined4 *)(param_1 + 0xc) = 7;
        return;
      }
    }
    if (*(int *)(param_1 + 0x18) != 0) {
      return;
    }
  }
  lVar1 = *(long *)(DAT_05aebb78 + 0x10);
LAB_03b439d4:
  *(float *)(param_1 + 0x1c) = *(float *)(lVar1 + 0x1c) + *(float *)(param_1 + 0x1c);
switchD_03b43744_caseD_2:
  return;
}

