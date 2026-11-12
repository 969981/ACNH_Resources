
uint FUN_00a7cb44(byte *param_1,undefined8 param_2)

{
  byte *pbVar1;
  byte bVar2;
  uint uVar3;
  long lVar4;
  byte local_1c [4];
  undefined4 local_18;
  undefined2 local_14;
  undefined1 local_12;
  
  if (DAT_04da56d0 == 0 || DAT_0537d558 == (long *)0x0) {
    return 1;
  }
  lVar4 = *DAT_0537d558;
  if (1 < *(byte *)(lVar4 + 0x476)) {
    bVar2 = *(byte *)(lVar4 + 0x473);
    if ((long)(char)bVar2 != 0xffffffffffffffff) {
      pbVar1 = (byte *)(lVar4 + 0x48) + ((long)(char)bVar2 & 0xffffffffU) * 0x80;
      if (7 < bVar2) {
        pbVar1 = (byte *)(lVar4 + 0x48);
      }
      if (((*pbVar1 >> 3 & 1) != 0) && (*(byte *)(lVar4 + 0x472) != bVar2)) {
        DAT_04da5750 = *param_1;
        local_18 = 0;
        local_12 = 0;
        DAT_04da5751 = 0;
        DAT_04da5754 = 0x13;
        if (7 < DAT_04da5750) {
          DAT_04da5750 = 0xff;
        }
        local_14 = 0xff01;
        DAT_04da5748 = param_2;
        if (-1 < DAT_04da5720) {
          FUN_01db1df0(*DAT_0537d558 + 0x480,DAT_04da5720,&local_18,&DAT_04da5748,0x10,0);
        }
        return 2;
      }
    }
  }
  local_1c[0] = *param_1;
  if (7 < local_1c[0]) {
    local_1c[0] = 0xff;
  }
  uVar3 = FUN_00a7b798(DAT_04da56d0,local_1c);
  return (uVar3 ^ 0xffffffff) & 1;
}

