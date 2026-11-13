
void FUN_0135d040(byte param_1,long param_2,undefined4 param_3)

{
  byte *pbVar1;
  byte *pbVar2;
  long lVar3;
  byte bVar4;
  ulong uVar5;
  undefined2 local_2c;
  undefined1 local_2a;
  undefined2 local_28;
  undefined2 local_26;
  byte local_24;
  undefined4 local_8;
  undefined2 local_4;
  undefined1 local_2;
  
  bVar4 = *(byte *)(*DAT_0537d558 + 0x473);
  if ((long)(char)bVar4 != 0xffffffffffffffff) {
    pbVar1 = (byte *)(*DAT_0537d558 + 0x48);
    uVar5 = (long)(char)bVar4 & 0xffffffff;
    pbVar2 = pbVar1 + uVar5 * 0x80;
    if (7 < bVar4) {
      pbVar2 = pbVar1;
    }
    if ((*pbVar2 >> 3 & 1) != 0) {
      lVar3 = DAT_0537d558[2] + 0x108 + uVar5 * 0xc;
      if (0xb < bVar4) {
        lVar3 = DAT_0537d558[2] + 0x108;
      }
      if (*(char *)(lVar3 + 10) == '\0') {
        return;
      }
    }
  }
  local_24 = param_1 & 1;
  local_2c = *(undefined2 *)PTR_DAT_04bb6298;
  local_28 = (undefined2)*(undefined4 *)(param_2 + 8);
  local_26 = (undefined2)*(undefined4 *)(param_2 + 0xc);
  local_2a = (undefined1)param_3;
  local_8 = param_3;
  FUN_0150cbf0(&local_2c);
  local_8 = 0;
  local_2 = 0;
  local_4 = 0xff00;
  if (-1 < DAT_0520f068) {
    FUN_01db1df0(*DAT_0537d558 + 0x480,DAT_0520f068,&local_8,&local_2c,10,0);
  }
  return;
}

