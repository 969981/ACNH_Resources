
void FUN_03b61160(float param_1,long param_2)

{
  bool bVar1;
  bool bVar2;
  float fVar3;
  float fVar4;
  long local_8;
  
  if (DAT_05aebc00 == '\0') {
    fVar4 = 1.0;
    if (param_1 <= 1.0) {
      fVar4 = param_1;
    }
    fVar3 = 0.0;
    if (0.0 <= param_1) {
      fVar3 = fVar4;
    }
    bVar1 = true;
    bVar2 = false;
    if (param_1 <= 1.0) {
      bVar1 = false;
      bVar2 = true;
      if (!NAN(param_1)) {
        bVar1 = param_1 < 0.0;
        bVar2 = false;
      }
    }
    if (bVar1 == bVar2) {
      fVar3 = param_1;
    }
    *(int *)(param_2 + 0x34) = (int)(fVar3 * 127.0);
    if (*(long *)(param_2 + 0x48) != 0) {
      FUN_003e5df0(&local_8);
      if (local_8 != 0) {
        FUN_003e14d4(local_8,*(undefined4 *)(param_2 + 0x34));
      }
      FUN_003e5ec0(&local_8);
    }
  }
  else if (((*(char *)(param_2 + 0x58) != '\0') &&
           (*(float *)(param_2 + 100) = param_1, *(int *)(param_2 + 0x5c) != 0)) &&
          (*(long *)(param_2 + 0x128) != 0)) {
    FUN_03b62f70();
    return;
  }
  return;
}

