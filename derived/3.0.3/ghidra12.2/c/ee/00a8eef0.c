
bool FUN_00a8eef0(long param_1,long param_2)

{
  uint *puVar1;
  short sVar2;
  ulong uVar3;
  
  sVar2 = *(short *)PTR_DAT_04bb6298;
  if (sVar2 != -1) {
    puVar1 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar2 * 8);
    if (0xff < (uint)(int)sVar2) {
      puVar1 = (uint *)PTR_DAT_04bc39f8;
    }
    if ((*puVar1 >> 0x17 & 1) != 0) {
      return false;
    }
    puVar1 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar2 * 8);
    if (0xff < (uint)(int)sVar2) {
      puVar1 = (uint *)PTR_DAT_04bc39f8;
    }
    if ((*puVar1 >> 0x1e & 1) != 0) {
      return false;
    }
  }
  if ((((((*(int *)(param_1 + 0x652cc) == 0) && (*(int *)(param_1 + 0x652d0) == 0)) &&
        (*(int *)(param_1 + 0x652d4) == 0)) &&
       (((*(int *)(param_1 + 0x652d8) == 0 && (*(int *)(param_1 + 0x652dc) == 0)) &&
        ((*(int *)(param_1 + 0x652e0) == 0 &&
         ((*(int *)(param_1 + 0x652e4) == 0 && (*(int *)(param_1 + 0x652e8) == 0)))))))) &&
      (((*(int *)(param_1 + 0x652ec) == 0 &&
        ((((((*(int *)(param_1 + 0x652f0) == 0 && (*(int *)(param_1 + 0x652f4) == 0)) &&
            (*(int *)(param_1 + 0x652f8) == 0)) &&
           ((*(int *)(param_1 + 0x652fc) == 0 && (*(int *)(param_1 + 0x65300) == 0)))) &&
          ((*(int *)(param_1 + 0x65304) == 0 &&
           ((*(int *)(param_1 + 0x65308) == 0 && (*(int *)(param_1 + 0x6530c) == 0)))))) &&
         (*(int *)(param_1 + 0x65310) == 0)))) &&
       (((*(int *)(param_1 + 0x65314) == 0 && (*(int *)(param_1 + 0x65318) == 0)) &&
        (*(int *)(param_1 + 0x6531c) == 0)))))) &&
     (((*(int *)(param_1 + 0x65320) == 0 && (*(int *)(param_1 + 0x65324) == 0)) &&
      (*(int *)(param_1 + 0x65328) == 0)))) {
    return false;
  }
  uVar3 = FUN_00a8117c(param_2);
  if ((uVar3 & 1) == 0) {
    return *(char *)(param_2 + 4) == '\x04';
  }
  return true;
}

