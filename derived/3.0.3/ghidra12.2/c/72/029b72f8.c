
undefined8 FUN_029b72f8(long param_1)

{
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  
  uVar3 = nn::os::GetSystemTick();
  uVar3 = (uVar3 ^ uVar3 >> 0x1e) * 0x6c078965 + 1;
  uVar2 = (uVar3 ^ uVar3 >> 0x1e) * 0x6c078965 + 2;
  *(uint *)(param_1 + 8) = uVar3;
  *(uint *)(param_1 + 0xc) = uVar2;
  uVar3 = (uVar2 ^ uVar2 >> 0x1e) * 0x6c078965 + 3;
  *(uint *)(param_1 + 0x10) = uVar3;
  *(uint *)(param_1 + 0x14) = (uVar3 ^ uVar3 >> 0x1e) * 0x6c078965 + 4;
  if (*(uint **)PTR_DAT_04bb3448 != (uint *)0x0) {
    uVar3 = **(uint **)PTR_DAT_04bb3448;
    if (uVar3 < 0x10) {
      *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(&DAT_0417da88 + (long)(int)uVar3 * 4);
    }
  }
  uVar4 = 3;
  if (*(int *)(param_1 + 0x18) == 3) {
    uVar4 = 1;
  }
  uVar1 = 4;
  if (*(int *)(param_1 + 0x18) != 1) {
    uVar1 = uVar4;
  }
  *(undefined4 *)(param_1 + 0x1c) = uVar1;
  return 1;
}

