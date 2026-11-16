
undefined2 FUN_0251cbd4(byte *param_1)

{
  byte *pbVar1;
  byte bVar2;
  undefined2 uVar3;
  int iVar4;
  ulong uVar5;
  long lVar6;
  
  uVar5 = (ulong)*param_1;
  if (7 < *param_1) {
    return 0xffff;
  }
  lVar6 = *DAT_0537d558;
  if (*(byte *)(lVar6 + 0x476) < 2) {
    iVar4 = FUN_02582d8c(param_1,2);
    if (iVar4 < 0) {
      return 0xffff;
    }
    uVar5 = (ulong)*param_1;
    if (7 < *param_1) {
      return 0xffff;
    }
LAB_0251cc68:
    uVar3 = *(undefined2 *)(PTR_DAT_04bc31b0 + uVar5 * 0x30 + 9);
  }
  else {
    bVar2 = *(byte *)(lVar6 + uVar5 * 4 + 0x44e);
    if ((long)(char)bVar2 != 0xffffffffffffffff) {
      pbVar1 = (byte *)(lVar6 + 0x48) + ((long)(char)bVar2 & 0xffffffffU) * 0x80;
      if (7 < bVar2) {
        pbVar1 = (byte *)(lVar6 + 0x48);
      }
      if ((*pbVar1 >> 3 & 1) != 0) goto LAB_0251cc68;
    }
    uVar3 = 0xffff;
  }
  return uVar3;
}

