
bool FUN_023d65bc(long param_1)

{
  uint uVar1;
  float *pfVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  int local_4;
  
  pfVar2 = (float *)PTR_DAT_04bc3038;
  if (*(char *)(param_1 + 0x12f8) != '\0') {
    pfVar2 = (float *)(param_1 + 0xeec);
  }
  if (SQRT(pfVar2[1] * pfVar2[1] + *pfVar2 * *pfVar2) < 0.8) {
    return false;
  }
  lVar5 = *(long *)(*(long *)(param_1 + 0xf08) + 0x68);
  FUN_02569464(&local_4,pfVar2);
  uVar3 = local_4 - *(int *)(lVar5 + 0x2b4);
  uVar4 = (uint)(long)((float)(uVar3 + 0x20000000 >> 0x1e) * 90.0 * 11930465.0);
  if (uVar3 == uVar4) {
    return true;
  }
  uVar1 = uVar3 - uVar4;
  if (uVar3 < uVar4 || uVar3 - uVar4 == 0) {
    uVar1 = uVar4 - uVar3;
  }
  uVar3 = -uVar1;
  if (uVar1 < 0x80000001) {
    uVar3 = uVar1;
  }
  return uVar3 < 0x1b05b061;
}

