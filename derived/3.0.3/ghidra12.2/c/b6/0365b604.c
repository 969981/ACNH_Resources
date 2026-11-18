
void FUN_0365b604(long param_1,uint param_2,uint param_3)

{
  int iVar1;
  byte bVar2;
  undefined8 uVar3;
  long lVar4;
  
  iVar1 = *(int *)(param_1 + 0x218c);
  if (iVar1 != 0) {
    uVar3 = FUN_0365c1e0(param_1,param_1 + 0x204c,iVar1);
    uVar3 = FUN_0365c1e0(uVar3,param_1 + 0x2098,iVar1);
    uVar3 = FUN_0365c320(uVar3,param_1 + 0x20e4,iVar1);
    FUN_0365c470(uVar3,param_1 + 0x2114,iVar1);
    *(undefined4 *)(param_1 + 0x218c) = 0;
    *(int *)(param_1 + 0x2038) = *(int *)(param_1 + 0x2038) + iVar1;
  }
  lVar4 = param_1 + (ulong)param_2 * 0x4c;
  *(undefined1 *)(param_1 + 0x21a5) = *(undefined1 *)(lVar4 + 0x2055);
  *(uint *)(lVar4 + 0x2064) = param_3 & 0xf;
  *(uint *)(lVar4 + 0x205c) = param_3 & 0xf;
  *(uint *)(lVar4 + 0x208c) = param_3 >> 6 & 3;
  *(byte *)(lVar4 + 0x206a) = (byte)(param_3 >> 4) & 1;
  bVar2 = (byte)(param_3 >> 5) & 1;
  *(byte *)(lVar4 + 0x2069) = bVar2;
  *(byte *)(lVar4 + 0x2055) = bVar2;
  *(undefined4 *)(param_1 + 0x21a8) = *(undefined4 *)(param_1 + 0x2198);
  return;
}

