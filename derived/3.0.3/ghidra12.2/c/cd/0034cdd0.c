
uint FUN_0034cdd0(ulong param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = (uint)(param_1 >> 1);
  uVar2 = (uint)param_1;
  return uVar2 & 0x20 | uVar2 >> 3 & 2 | uVar1 & 4 |
         uVar2 & 1 | (uVar1 & 1) << 3 | (uVar2 >> 2 & 1) << 4;
}

