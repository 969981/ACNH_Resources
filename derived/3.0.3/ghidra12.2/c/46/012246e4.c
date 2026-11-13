
bool FUN_012246e4(long param_1)

{
  byte *pbVar1;
  byte bVar2;
  bool bVar3;
  uint uVar4;
  long lVar5;
  
  if (((DAT_0537d558 == (long *)0x0) || (DAT_0537d558[5] == 0)) || ((int)DAT_0537d558[0x10] != 1)) {
    lVar5 = *DAT_0537d558;
    bVar2 = *(byte *)(lVar5 + 0x473);
    if ((long)(char)bVar2 != 0xffffffffffffffff) {
      pbVar1 = (byte *)(lVar5 + 0x48) + ((long)(char)bVar2 & 0xffffffffU) * 0x80;
      if (7 < bVar2) {
        pbVar1 = (byte *)(lVar5 + 0x48);
      }
      if (((*pbVar1 >> 3 & 1) != 0) && (*(byte *)(lVar5 + 0x472) != bVar2)) goto LAB_01224764;
    }
    bVar3 = (bool)(*(byte *)(param_1 + 0x87e2) >> 1 & 1);
  }
  else {
LAB_01224764:
    uVar4 = FUN_00a86724(DAT_04da7238);
    if ((uVar4 & 0xfffffffe) == 4) {
      bVar3 = true;
    }
    else {
      uVar4 = FUN_00a86724(DAT_04da7238);
      bVar3 = (uVar4 & 0xfffffffe) == 6;
    }
  }
  return bVar3;
}

