
uint FUN_035affbc(undefined4 *param_1,int param_2,int param_3,uint param_4)

{
  uint uVar1;
  
  if (param_1[2] != 2) {
    return 0;
  }
  if ((param_4 & 1) != 0) {
    param_1[2] = 0;
    *param_1 = 0;
  }
  uVar1 = (param_2 - (uint)DAT_05779f28) +
          *(int *)(DAT_05779f68 + 0x1c) * (param_3 - (uint)DAT_05779f2a);
  return *(uint *)(*(long *)(DAT_05779f68 + 0x10) + (long)((int)uVar1 >> 5) * 4) >>
         (ulong)(uVar1 & 0x1f) & 1;
}

