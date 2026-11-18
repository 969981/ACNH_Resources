
bool FUN_037a7828(long param_1,long param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  
  uVar2 = *(uint *)(param_1 + 0x3a8);
  uVar3 = *(uint *)(param_2 + 8);
  if ((int)uVar3 <= (int)uVar2) {
    uVar1 = uVar3;
    if (uVar2 <= uVar3) {
      uVar1 = 0;
    }
    *(undefined1 *)(*(long *)(param_1 + 0x3b0) + (long)(int)uVar1 * 0x68) = 1;
    uVar1 = *(uint *)(param_2 + 8);
    if (*(uint *)(param_1 + 0x3a8) <= uVar1) {
      uVar1 = 0;
    }
    *(undefined1 *)(*(long *)(param_1 + 0x3b0) + (long)(int)uVar1 * 0x68 + 0x5c) =
         *(undefined1 *)(param_2 + 0xc);
    uVar1 = *(uint *)(param_2 + 8);
    if (*(uint *)(param_1 + 0x3a8) <= uVar1) {
      uVar1 = 0;
    }
    *(undefined1 *)(*(long *)(param_1 + 0x3b0) + (long)(int)uVar1 * 0x68 + 0x5e) =
         *(undefined1 *)(param_2 + 0xd);
    uVar1 = *(uint *)(param_2 + 8);
    if (*(uint *)(param_1 + 0x3a8) <= uVar1) {
      uVar1 = 0;
    }
    lVar4 = *(long *)(param_1 + 0x3b0) + (long)(int)uVar1 * 0x68;
    *(undefined4 *)(lVar4 + 0x30) = *(undefined4 *)(param_2 + 0x18);
    *(undefined4 *)(lVar4 + 0x34) = *(undefined4 *)(param_2 + 0x1c);
    uVar1 = *(uint *)(param_2 + 8);
    if (*(uint *)(param_1 + 0x3a8) <= uVar1) {
      uVar1 = 0;
    }
    *(undefined4 *)(*(long *)(param_1 + 0x3b0) + (long)(int)uVar1 * 0x68 + 0x38) =
         *(undefined4 *)(param_2 + 0x20);
    uVar1 = *(uint *)(param_2 + 8);
    if (*(uint *)(param_1 + 0x3a8) <= uVar1) {
      uVar1 = 0;
    }
    *(undefined4 *)(*(long *)(param_1 + 0x3b0) + (long)(int)uVar1 * 0x68 + 0x3c) =
         *(undefined4 *)(param_2 + 0x24);
    uVar1 = *(uint *)(param_2 + 8);
    if (*(uint *)(param_1 + 0x3a8) <= uVar1) {
      uVar1 = 0;
    }
    *(undefined4 *)(*(long *)(param_1 + 0x3b0) + (long)(int)uVar1 * 0x68 + 0x40) =
         *(undefined4 *)(param_2 + 0x28);
    uVar1 = *(uint *)(param_2 + 8);
    if (*(uint *)(param_1 + 0x3a8) <= uVar1) {
      uVar1 = 0;
    }
    lVar4 = *(long *)(param_1 + 0x3b0) + (long)(int)uVar1 * 0x68;
    *(undefined4 *)(lVar4 + 0x50) = *(undefined4 *)(param_2 + 0x38);
    *(undefined4 *)(lVar4 + 0x54) = *(undefined4 *)(param_2 + 0x3c);
    uVar1 = *(uint *)(param_2 + 8);
    if (*(uint *)(param_1 + 0x3a8) <= uVar1) {
      uVar1 = 0;
    }
    *(undefined4 *)(*(long *)(param_1 + 0x3b0) + (long)(int)uVar1 * 0x68 + 0x58) =
         *(undefined4 *)(param_2 + 0x40);
    uVar1 = *(uint *)(param_2 + 8);
    if (*(uint *)(param_1 + 0x3a8) <= uVar1) {
      uVar1 = 0;
    }
    *(undefined4 *)(*(long *)(param_1 + 0x3b0) + (long)(int)uVar1 * 0x68 + 0x60) =
         *(undefined4 *)(param_2 + 0x44);
    uVar1 = *(uint *)(param_2 + 8);
    if (*(uint *)(param_1 + 0x3a8) <= uVar1) {
      uVar1 = 0;
    }
    *(undefined1 *)(*(long *)(param_1 + 0x3b0) + (long)(int)uVar1 * 0x68 + 100) =
         *(undefined1 *)(param_2 + 0x48);
  }
  return (int)uVar3 <= (int)uVar2;
}

