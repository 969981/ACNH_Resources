
void FUN_0365b970(long param_1,uint param_2)

{
  int iVar1;
  byte bVar2;
  undefined8 uVar3;
  
  iVar1 = *(int *)(param_1 + 0x218c);
  if (iVar1 != 0) {
    uVar3 = FUN_0365c1e0(param_1,param_1 + 0x204c,iVar1);
    uVar3 = FUN_0365c1e0(uVar3,param_1 + 0x2098,iVar1);
    uVar3 = FUN_0365c320(uVar3,param_1 + 0x20e4,iVar1);
    FUN_0365c470(uVar3,param_1 + 0x2114,iVar1);
    *(undefined4 *)(param_1 + 0x218c) = 0;
    *(int *)(param_1 + 0x2038) = *(int *)(param_1 + 0x2038) + iVar1;
  }
  *(uint *)(param_1 + 0x212c) = param_2 & 0xf;
  *(uint *)(param_1 + 0x2124) = param_2 & 0xf;
  bVar2 = (byte)(param_2 >> 5) & 1;
  *(byte *)(param_1 + 0x2132) = (byte)(param_2 >> 4) & 1;
  *(byte *)(param_1 + 0x2131) = bVar2;
  *(byte *)(param_1 + 0x211d) = bVar2;
  return;
}

