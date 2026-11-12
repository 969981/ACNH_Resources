
uint FUN_006f6900(long param_1,uint param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  ushort *puVar4;
  
  if (3 < param_2) {
    uVar3 = 4;
    do {
      uVar2 = uVar3 - 4;
      uVar3 = uVar3 + 4;
      iVar1 = *(int *)(param_1 + (ulong)uVar2);
      param_3 = (iVar1 * 0x16a88000 | (uint)(iVar1 * -0x3361d2af) >> 0x11) * 0x1b873593 ^ param_3;
      param_3 = (param_3 >> 0x13 | param_3 << 0xd) * 5 + 0xe6546b64;
    } while (uVar3 <= param_2);
  }
  uVar3 = param_2 & 3;
  if (uVar3 != 0) {
    puVar4 = (ushort *)((param_1 + (ulong)param_2) - ((ulong)param_2 & 3));
    if (uVar3 == 1) {
      uVar3 = (uint)(byte)*puVar4;
    }
    else if (uVar3 == 2) {
      uVar3 = (uint)*puVar4;
    }
    else if (uVar3 == 3) {
      uVar3 = (uint)(byte)puVar4[1] << 0x10 | (uint)*(byte *)((long)puVar4 + 1) << 8 |
              (uint)(byte)*puVar4;
    }
    else {
      uVar3 = 0;
    }
    param_3 = (uVar3 * 0x16a88000 | uVar3 * -0x3361d2af >> 0x11) * 0x1b873593 ^ param_3;
  }
  uVar3 = (param_3 ^ param_2 ^ (param_3 ^ param_2) >> 0x10) * -0x7a143595;
  uVar3 = (uVar3 ^ uVar3 >> 0xd) * -0x3d4d51cb;
  return uVar3 ^ uVar3 >> 0x10;
}

