
void FUN_039d94f4(long param_1,uint param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  
  uVar3 = -(ulong)((uint)((int)param_2 >> 5) >> 0x1f) & 0xfffffffc00000000 |
          (ulong)(uint)((int)param_2 >> 5) << 2;
  uVar2 = 1 << (ulong)(param_2 & 0x1f);
  uVar1 = *(uint *)(*(long *)(param_1 + 0xe8) + uVar3);
  *(uint *)(*(long *)(param_1 + 0xe8) + uVar3) =
       uVar1 & (uVar2 ^ 0xffffffff) | (param_3 & 1) << (ulong)(param_2 & 0x1f);
  if ((*(code **)(param_1 + 0x158) == (code *)0x0) || ((((uVar1 & uVar2) != 0 ^ param_3) & 1) == 0))
  {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x039d953c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x158))(param_1 + 0xd8);
  return;
}

