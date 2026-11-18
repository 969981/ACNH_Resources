
void FUN_0372025c(long param_1)

{
  uint *puVar1;
  uint uVar2;
  
  if (*(int *)(PTR_DAT_04bc3a80 + 0x38) == -0x6efba09b) {
    uVar2 = 0;
  }
  else if ((((DAT_05467d70 == 5) || (DAT_05467d70 == 7)) || (DAT_05467d70 == 8)) ||
          (DAT_05467d70 == 6)) {
    uVar2 = 1;
  }
  else {
    uVar2 = (uint)(DAT_05467d70 == 9);
  }
  if (DAT_04c487cc != -1) {
    puVar1 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)DAT_04c487cc * 8);
    if (0xff < (uint)(int)DAT_04c487cc) {
      puVar1 = (uint *)PTR_DAT_04bc39f8;
    }
    if ((*puVar1 >> 0x1a & 1) != 0) {
      return;
    }
    puVar1 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)DAT_04c487cc * 8);
    if (0xff < (uint)(int)DAT_04c487cc) {
      puVar1 = (uint *)PTR_DAT_04bc39f8;
    }
    uVar2 = *puVar1 >> 0x1d | uVar2;
  }
  if ((uVar2 & 1) == 0) {
    *(uint *)(&DAT_00001230 + param_1) = *(uint *)(&DAT_00001230 + param_1) & 0xffffffbf;
    return;
  }
  return;
}

