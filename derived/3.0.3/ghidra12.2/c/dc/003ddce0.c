
void FUN_003ddce0(long param_1,long param_2)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  ulong uVar4;
  ulong uVar5;
  uint *puVar6;
  signed local_16 [6];
  
  uVar3 = *(uint *)(param_1 + 0x2c);
  if (0 < (int)uVar3) {
    if (uVar3 == 1) {
      uVar4 = 0;
    }
    else {
      puVar6 = (uint *)(param_1 + 0x54);
      uVar5 = 0;
      do {
        puVar1 = puVar6 + -1;
        uVar2 = *puVar6;
        uVar4 = uVar5 + 2;
        puVar6 = puVar6 + 2;
        local_16[uVar5] = *(signed *)(param_2 + (ulong)*puVar1);
        local_16[uVar5 + 1] = *(signed *)(param_2 + (ulong)uVar2);
        uVar5 = uVar4;
      } while (((ulong)uVar3 & 0xfffffffe) != uVar4);
    }
    if ((uVar3 & 1) != 0) {
      local_16[uVar4] = *(signed *)(param_2 + (ulong)*(uint *)(param_1 + uVar4 * 4 + 0x50));
    }
  }
  nn::audio::SetAuxInputOutput((AuxType *)(param_1 + 0x18),local_16,local_16,uVar3);
  return;
}

