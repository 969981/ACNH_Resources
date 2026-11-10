
void FUN_00222cb8(int *param_1,void *param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong *puVar3;
  
  if (*param_1 != 5) {
    if (param_1[0x1f] != 0 || param_1[0x1e] != 0) {
      FUN_002229d0(param_1,param_1 + 6);
    }
    puVar3 = (ulong *)(param_1 + 6);
    uVar2 = (*(long *)(param_1 + 0x1a) << 3 & 0xff00ff00ff00ff00U) >> 8 |
            (*(long *)(param_1 + 0x1a) << 3 & 0xff00ff00ff00ffU) << 8;
    uVar2 = (uVar2 & 0xffff0000ffff0000) >> 0x10 | (uVar2 & 0xffff0000ffff) << 0x10;
    uVar1 = uVar2 >> 0x20 | uVar2 << 0x20;
    uVar2 = (*(long *)(param_1 + 0x1c) << 3 & 0xff00ff00ff00ff00U) >> 8 |
            (*(long *)(param_1 + 0x1c) << 3 & 0xff00ff00ff00ffU) << 8;
    uVar2 = (uVar2 & 0xffff0000ffff0000) >> 0x10 | (uVar2 & 0xffff0000ffff) << 0x10;
    uVar2 = uVar2 >> 0x20 | uVar2 << 0x20;
    *(ulong *)(param_1 + 0x16) = uVar1;
    *(ulong *)(param_1 + 0x18) = uVar2;
    *puVar3 = *puVar3 ^ uVar1;
    *(ulong *)(param_1 + 8) = *(ulong *)(param_1 + 8) ^ uVar2;
    FUN_002229d0(param_1,puVar3);
    *puVar3 = *puVar3 ^ *(ulong *)(param_1 + 0x12);
    *(ulong *)(param_1 + 8) = *(ulong *)(param_1 + 8) ^ *(ulong *)(param_1 + 0x14);
    *param_1 = 5;
  }
  memcpy(param_2,param_1 + 6,0x10);
  return;
}

