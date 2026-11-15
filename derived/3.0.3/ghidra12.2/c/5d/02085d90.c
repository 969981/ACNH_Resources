
uint FUN_02085d90(long param_1,undefined4 param_2,undefined4 *param_3,byte param_4)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  
  uVar3 = FUN_02085a50(param_1,3,param_2);
  if ((uVar3 & 1) != 0) {
    *(undefined1 *)(param_1 + 0x801) = 1;
    lVar1 = param_1 + 0x10;
    lVar2 = lVar1 + (ulong)*(uint *)(param_1 + 0x294) * 0x80;
    if (4 < *(uint *)(param_1 + 0x294)) {
      lVar2 = lVar1;
    }
    *(undefined4 *)(lVar2 + 0xc) = *param_3;
    *(undefined4 *)(lVar2 + 0x10) = param_3[1];
    *(undefined4 *)(lVar2 + 0x14) = param_3[2];
    lVar2 = lVar1 + (ulong)*(uint *)(param_1 + 0x294) * 0x80;
    if (4 < *(uint *)(param_1 + 0x294)) {
      lVar2 = lVar1;
    }
    *(byte *)(lVar2 + 0x7e) = param_4 & 1;
  }
  return uVar3 & 1;
}

