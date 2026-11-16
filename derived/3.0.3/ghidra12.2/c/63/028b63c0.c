
void FUN_028b63c0(long param_1)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined1 auStack_350 [16];
  undefined1 auStack_340 [16];
  undefined1 auStack_330 [256];
  undefined4 local_230 [128];
  
  uVar4 = 0;
  do {
    uVar2 = uVar4 << 2;
    uVar3 = uVar4 >> 0x1f;
    uVar1 = (int)uVar4 + 1;
    uVar4 = (ulong)uVar1;
    *(undefined4 *)((long)local_230 + (-uVar3 & 0xfffffffc00000000 | uVar2)) = 0;
  } while (uVar1 != 0x80);
  memcpy(auStack_330,*(void **)(param_1 + 0x28),0x300);
  FUN_028b7d30(auStack_340,2,local_230);
  FUN_028b7f90(auStack_350,2,local_230);
  nn::crypto::DecryptAes128Ctr
            (*(void **)(param_1 + 8),*(ulong *)(param_1 + 0x10),auStack_340,0x10,auStack_350,0x10,
             *(void **)(param_1 + 8),*(ulong *)(param_1 + 0x10));
  return;
}

