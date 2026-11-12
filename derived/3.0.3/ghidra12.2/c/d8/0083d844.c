
void FUN_0083d844(long param_1)

{
  int iVar1;
  float *pfVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  if (((((*(int *)(param_1 + 0x2b8) == DAT_04c9a0c8) && (*(int *)(param_1 + 700) == DAT_04c9a0c8))
       && (*(int *)(param_1 + 0x2c0) == DAT_04c9a0c8)) &&
      (((*(int *)(param_1 + 0x2c4) == DAT_04c9a0c8 && (*(int *)(param_1 + 0x2c8) == DAT_04c9a0c8))
       && ((*(int *)(param_1 + 0x2cc) == DAT_04c9a0c8 &&
           ((*(int *)(param_1 + 0x2d0) == DAT_04c9a0c8 &&
            (*(int *)(param_1 + 0x2d4) == DAT_04c9a0c8)))))))) &&
     ((*(int *)(param_1 + 0x2d8) == DAT_04c9a0c8 &&
      (((*(int *)(param_1 + 0x2dc) == DAT_04c9a0c8 &&
        (((DAT_056b6f18 == 0 || (*(int *)(DAT_056b6f18 + 0x588) == 0)) &&
         (pfVar2 = (float *)FUN_0252d9bc(0), pfVar2 != (float *)0x0)))) &&
       (fVar3 = *(float *)(param_1 + 0x2a8) - *pfVar2,
       fVar4 = *(float *)(param_1 + 0x2ac) - pfVar2[1],
       fVar5 = *(float *)(param_1 + 0x2b0) - pfVar2[2],
       230.0 < SQRT(fVar4 * fVar4 + fVar3 * fVar3 + fVar5 * fVar5))))))) {
    iVar1 = FUN_0083bd04();
    *(int *)(param_1 + 0x274) = iVar1;
    if (iVar1 != 0) {
      FUN_0083c1b0(param_1);
      return;
    }
  }
  return;
}

