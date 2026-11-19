
void FUN_03ba6b10(long param_1)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  long lVar4;
  long lVar5;
  
  uVar2 = 0;
  if (*(long **)(param_1 + 0x20) != (long *)0x0) {
    uVar2 = (**(code **)(**(long **)(param_1 + 0x20) + 0x10))();
  }
  if (5 < *(uint *)(param_1 + 0x1c)) {
    return;
  }
  uVar1 = 1 << (ulong)(*(uint *)(param_1 + 0x1c) & 0x1f);
  if ((uVar1 & 0x19) == 0) {
    if ((uVar1 & 6) != 0) {
      if ((uVar2 & 1) != 0) {
        if (*(float *)(param_1 + 0x14) <= 0.0) {
          return;
        }
        if (*(float *)(param_1 + 0x44) < *(float *)(param_1 + 0x14)) {
          return;
        }
        if (*(long *)(param_1 + 0x30) != param_1 + 0x28) {
          lVar4 = (long)*(int *)(param_1 + 0x3c);
          lVar5 = *(long *)(param_1 + 0x30) - lVar4;
          do {
            *(undefined4 *)(lVar5 + 0x38) = *(undefined4 *)(lVar5 + 0x14);
            FUN_03b773d4(0x3f800000,*(undefined4 *)(lVar5 + 0x10),lVar5 + 0x18);
            lVar5 = *(long *)(lVar5 + lVar4 + 8) - lVar4;
          } while (lVar5 != (param_1 + 0x28) - lVar4);
        }
        *(undefined4 *)(param_1 + 0x1c) = 5;
        return;
      }
      if (*(float *)(param_1 + 0x10) == 0.0) {
        if (*(long *)(param_1 + 0x30) != param_1 + 0x28) {
          lVar4 = (long)*(int *)(param_1 + 0x3c);
          lVar5 = *(long *)(param_1 + 0x30) - lVar4;
          do {
            *(undefined4 *)(lVar5 + 0x38) = *(undefined4 *)(lVar5 + 0x14);
            FUN_03b773d4(0x3f800000,*(undefined4 *)(lVar5 + 0x10),lVar5 + 0x18);
            lVar5 = *(long *)(lVar5 + lVar4 + 8) - lVar4;
          } while (lVar5 != (param_1 + 0x28) - lVar4);
        }
        uVar3 = 4;
      }
      else {
        uVar3 = 3;
      }
      goto LAB_03ba6d30;
    }
    if (*(char *)(param_1 + 0x18) == '\0' || ((uVar2 ^ 0xffffffff) & 1) != 0) {
      return;
    }
    if (*(char *)(param_1 + 0x48) != '\0') {
      return;
    }
    *(undefined4 *)(param_1 + 0x44) = 0;
    if (*(float *)(param_1 + 0xc) == 0.0) {
      if (*(long *)(param_1 + 0x30) != param_1 + 0x28) {
        lVar4 = (long)*(int *)(param_1 + 0x3c);
        lVar5 = *(long *)(param_1 + 0x30) - lVar4;
        do {
          *(undefined4 *)(lVar5 + 0x38) = *(undefined4 *)(lVar5 + 0x14);
          FUN_03b773d4(*(undefined4 *)(lVar5 + 8),*(undefined4 *)(lVar5 + 0xc),lVar5 + 0x18);
          lVar5 = *(long *)(lVar5 + lVar4 + 8) - lVar4;
        } while (lVar5 != (param_1 + 0x28) - lVar4);
      }
      goto LAB_03ba6cb8;
    }
  }
  else {
    if ((uVar2 & 1) == 0) {
      return;
    }
    if (*(float *)(param_1 + 0xc) == 0.0) {
      if (*(long *)(param_1 + 0x30) != param_1 + 0x28) {
        lVar4 = (long)*(int *)(param_1 + 0x3c);
        lVar5 = *(long *)(param_1 + 0x30) - lVar4;
        do {
          *(undefined4 *)(lVar5 + 0x38) = *(undefined4 *)(lVar5 + 0x14);
          FUN_03b773d4(*(undefined4 *)(lVar5 + 8),*(undefined4 *)(lVar5 + 0xc),lVar5 + 0x18);
          lVar5 = *(long *)(lVar5 + lVar4 + 8) - lVar4;
        } while (lVar5 != (param_1 + 0x28) - lVar4);
      }
LAB_03ba6cb8:
      uVar3 = 2;
      goto LAB_03ba6d30;
    }
  }
  uVar3 = 1;
LAB_03ba6d30:
  *(undefined4 *)(param_1 + 0x1c) = uVar3;
  *(undefined4 *)(param_1 + 0x40) = 0;
  return;
}

