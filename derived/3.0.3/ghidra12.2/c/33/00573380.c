
void FUN_00573380(long param_1,undefined8 param_2)

{
  short sVar1;
  ulong uVar2;
  
  if (0 < *(int *)(param_1 + 0x50)) {
    uVar2 = 0;
    do {
      sVar1 = *(short *)(*(long *)(param_1 + 0x48) + uVar2 * 2);
      if (-1 < sVar1) {
        FUN_005164e0(param_2,*(undefined4 *)(param_1 + 0x58),(int)sVar1,0);
        FUN_00516520(param_2,*(undefined4 *)(param_1 + 0x5c),uVar2 & 0xffffffff,0);
        if (*(char *)(param_1 + 0x60) != '\0') {
          FUN_005164e0(param_2,*(undefined4 *)(param_1 + 0x58),(int)sVar1,1);
          FUN_00516520(param_2,*(undefined4 *)(param_1 + 0x5c),uVar2 & 0xffffffff,1);
        }
      }
      uVar2 = uVar2 + 1;
    } while ((long)uVar2 < (long)*(int *)(param_1 + 0x50));
  }
  return;
}

