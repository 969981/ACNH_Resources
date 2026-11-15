
void FUN_021aac18(long param_1)

{
  byte *pbVar1;
  byte bVar2;
  long lVar3;
  
  lVar3 = **(long **)PTR_DAT_04bb27d0;
  bVar2 = *(byte *)(lVar3 + 0x473);
  if ((long)(char)bVar2 != 0xffffffffffffffff) {
    pbVar1 = (byte *)(lVar3 + 0x48) + ((long)(char)bVar2 & 0xffffffffU) * 0x80;
    if (7 < bVar2) {
      pbVar1 = (byte *)(lVar3 + 0x48);
    }
    if (((*pbVar1 >> 3 & 1) != 0) && (*(byte *)(lVar3 + 0x472) != bVar2)) {
      return;
    }
  }
  FUN_0219eb90(param_1);
  FUN_0219eb90(param_1 + 0xba0);
  FUN_0219eb90(param_1 + 0x1740);
  FUN_0219eb90(param_1 + 0x22e0);
  FUN_0219eb90(param_1 + 0x2e80);
  FUN_0219eb90(param_1 + 0x3a20);
  FUN_0219eb90(param_1 + 0x45c0);
  FUN_0219eb90(param_1 + 0x5160);
  FUN_0219eb90(param_1 + 0x5d00);
  FUN_0219eb90(param_1 + 0x68a0);
  FUN_021aadbc(param_1 + 0x56010);
  FUN_021aadbc(param_1 + 0x562e8);
  FUN_021aadbc(param_1 + 0x565c0);
  FUN_021aadbc(param_1 + 0x56898);
  FUN_021aadbc(param_1 + 0x56b70);
  FUN_021aadbc(param_1 + 0x56e48);
  FUN_021aadbc(param_1 + 0x57120);
  FUN_021aadbc(param_1 + 0x573f8);
  FUN_021aadbc(param_1 + 0x576d0);
  FUN_021aadbc(param_1 + 0x579a8);
  FUN_021aadbc(param_1 + 0x57c80);
  FUN_021aadbc(param_1 + 0x57f58);
  FUN_021aadbc(param_1 + 0x58230);
  FUN_021aadbc(param_1 + 0x58508);
  FUN_021aadbc(param_1 + 0x587e0);
  FUN_021aadbc(param_1 + 0x58ab8);
  FUN_021aadbc(param_1 + 0x58d90);
  return;
}

