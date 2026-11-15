
void FUN_01f7273c(long *param_1,ulong param_2)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  long lVar4;
  
  if ((DAT_053e0208 != 0) && (*(long *)(DAT_053e0208 + 0x175a0) != 0)) {
    if (((param_2 & 1) == 0) && ((int)param_1[0xef6] != 0x3c)) {
      (**(code **)(*param_1 + 0x38))(param_1,0x3c,0,0);
    }
    *(ushort *)((long)param_1 + 0xaf64) = *(ushort *)((long)param_1 + 0xaf64) & 0xfeff;
    (**(code **)(*param_1 + 0x400))(param_1);
    lVar4 = param_1[1];
    uVar1 = *(uint *)(lVar4 + 0x288);
    *(undefined4 *)(lVar4 + 0x288) = *(undefined4 *)(lVar4 + 0x28c);
    uVar1 = uVar1 ^ uVar1 << 0xb;
    *(undefined4 *)(lVar4 + 0x28c) = *(undefined4 *)(lVar4 + 0x290);
    uVar2 = *(uint *)(lVar4 + 0x294);
    *(uint *)(lVar4 + 0x290) = uVar2;
    uVar1 = uVar1 >> 8 ^ uVar2 >> 0x13 ^ uVar1 ^ uVar2;
    *(uint *)(lVar4 + 0x294) = uVar1;
    *(int *)((long)param_1 + 0xaf8c) = (int)((ulong)uVar1 * 0x3c >> 0x20) + 0x1e;
    lVar4 = param_1[1];
    uVar1 = *(uint *)(lVar4 + 0x288);
    *(undefined4 *)(lVar4 + 0x288) = *(undefined4 *)(lVar4 + 0x28c);
    uVar1 = uVar1 ^ uVar1 << 0xb;
    *(undefined4 *)(lVar4 + 0x28c) = *(undefined4 *)(lVar4 + 0x290);
    uVar2 = *(uint *)(lVar4 + 0x294);
    *(uint *)(lVar4 + 0x290) = uVar2;
    uVar1 = uVar1 >> 8 ^ uVar2 >> 0x13 ^ uVar1 ^ uVar2;
    *(uint *)(lVar4 + 0x294) = uVar1;
    *(int *)(param_1 + 0x15f1) = (int)((ulong)uVar1 * 900 >> 0x20) + 0x1194;
    uVar3 = FUN_01e3cc1c(param_1[1]);
    if ((uVar3 & 1) != 0) {
      FUN_01e3cdc4(param_1[1]);
      return;
    }
  }
  return;
}

