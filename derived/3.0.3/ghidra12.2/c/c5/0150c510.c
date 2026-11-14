
void FUN_0150c510(undefined8 param_1,undefined8 param_2)

{
  byte *pbVar1;
  byte bVar2;
  long lVar3;
  undefined4 local_8;
  undefined2 local_4;
  undefined1 local_2;
  
  FUN_0150bd50(param_2);
  if (DAT_0537d558 != (long *)0x0) {
    lVar3 = *DAT_0537d558;
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
    local_8 = 0;
    local_2 = 0;
    local_4 = 0xff00;
    if (-1 < DAT_0520f030) {
      FUN_01db1df0(*DAT_0537d558 + 0x480,DAT_0520f030,&local_8,param_2,0x18,0);
    }
  }
  return;
}

