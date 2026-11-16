
void FUN_028420c0(long param_1)

{
  int iVar1;
  uint uVar2;
  ulong uVar3;
  
  uVar3 = 0;
  uVar2 = 0;
  do {
    iVar1 = *(int *)(param_1 + 0x104 + uVar3);
    uVar3 = uVar3 + 4;
    uVar2 = (iVar1 * 0x16a88000 | (uint)(iVar1 * -0x3361d2af) >> 0x11) * 0x1b873593 ^ uVar2;
    uVar2 = (uVar2 >> 0x13 | uVar2 << 0xd) * 5 + 0xe6546b64;
  } while (uVar3 < 0x69459);
  uVar2 = (uVar2 ^ 0x6945c ^ (uVar2 ^ 0x6945c) >> 0x10) * -0x7a143595;
  uVar2 = (uVar2 ^ uVar2 >> 0xd) * -0x3d4d51cb;
  *(uint *)(param_1 + 0x100) = uVar2 ^ uVar2 >> 0x10;
  return;
}

