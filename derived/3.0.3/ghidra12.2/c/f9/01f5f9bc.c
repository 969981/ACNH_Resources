
void FUN_01f5f9bc(long param_1)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  
  *(undefined4 *)(param_1 + 0x7880) = 5;
  FUN_01edaf40();
  if ((*(int *)(param_1 + 0x77b8) != 3) && (*(int *)(param_1 + 0x77b8) != 99)) {
    lVar3 = *(long *)(param_1 + 8);
    uVar1 = *(uint *)(lVar3 + 0x288);
    *(undefined4 *)(lVar3 + 0x288) = *(undefined4 *)(lVar3 + 0x28c);
    uVar1 = uVar1 ^ uVar1 << 0xb;
    *(undefined4 *)(lVar3 + 0x28c) = *(undefined4 *)(lVar3 + 0x290);
    uVar2 = *(uint *)(lVar3 + 0x294);
    *(uint *)(lVar3 + 0x290) = uVar2;
    uVar1 = uVar1 >> 8 ^ uVar2 >> 0x13 ^ uVar1 ^ uVar2;
    *(uint *)(lVar3 + 0x294) = uVar1;
    *(int *)(param_1 + 0x13648) = (int)((ulong)uVar1 * 900 >> 0x20) + 900;
  }
  return;
}

