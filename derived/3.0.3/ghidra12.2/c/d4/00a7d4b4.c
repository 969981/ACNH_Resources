
void FUN_00a7d4b4(byte *param_1,undefined8 param_2,undefined4 param_3)

{
  byte *pbVar1;
  byte bVar2;
  long lVar3;
  ulong uVar4;
  undefined4 local_18;
  undefined2 local_14;
  undefined1 local_12;
  
  if ((DAT_04da56d0 != 0 && DAT_0537d558 != (long *)0x0) &&
     (lVar3 = *DAT_0537d558, 1 < *(byte *)(lVar3 + 0x476))) {
    bVar2 = *(byte *)(lVar3 + 0x473);
    if ((long)(char)bVar2 != 0xffffffffffffffff) {
      uVar4 = (long)(char)bVar2 & 0xffffffff;
      pbVar1 = (byte *)(lVar3 + 0x48) + uVar4 * 0x80;
      if (7 < bVar2) {
        pbVar1 = (byte *)(lVar3 + 0x48);
      }
      if ((*pbVar1 >> 3 & 1) != 0) {
        lVar3 = DAT_0537d558[2] + 0x108 + uVar4 * 0xc;
        if (0xb < bVar2) {
          lVar3 = DAT_0537d558[2] + 0x108;
        }
        if (*(char *)(lVar3 + 10) == '\0') {
          DAT_04da5750 = *param_1;
          local_18 = 0;
          local_12 = 0;
          DAT_04da5751 = 6;
          if (7 < DAT_04da5750) {
            DAT_04da5750 = 0xff;
          }
          local_14 = 0xff02;
          DAT_04da5748 = param_2;
          DAT_04da5754 = param_3;
          if (-1 < DAT_04da5720) {
            FUN_01db1df0(*DAT_0537d558 + 0x480,DAT_04da5720,&local_18,&DAT_04da5748,0x10,0);
          }
          return;
        }
      }
    }
  }
  return;
}

