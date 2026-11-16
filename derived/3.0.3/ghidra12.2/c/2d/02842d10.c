
void FUN_02842d10(uint *param_1)

{
  int *piVar1;
  bool bVar2;
  uint uVar3;
  ulong uVar4;
  
  uVar3 = 0;
  uVar4 = 4;
  do {
    piVar1 = (int *)((long)param_1 + uVar4);
    bVar2 = uVar4 < 0x23019;
    uVar4 = uVar4 + 4;
    uVar3 = (*piVar1 * 0x16a88000 | (uint)(*piVar1 * -0x3361d2af) >> 0x11) * 0x1b873593 ^ uVar3;
    uVar3 = (uVar3 >> 0x13 | uVar3 << 0xd) * 5 + 0xe6546b64;
  } while (bVar2);
  uVar3 = (uVar3 ^ 0x2301c ^ (uVar3 ^ 0x2301c) >> 0x10) * -0x7a143595;
  uVar3 = (uVar3 ^ uVar3 >> 0xd) * -0x3d4d51cb;
  *param_1 = uVar3 ^ uVar3 >> 0x10;
  return;
}

