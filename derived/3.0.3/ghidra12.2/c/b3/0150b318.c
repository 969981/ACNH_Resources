
bool FUN_0150b318(undefined8 param_1)

{
  byte *pbVar1;
  byte bVar2;
  long *plVar3;
  long lVar4;
  undefined4 local_18;
  undefined2 local_14;
  undefined1 local_12;
  
  plVar3 = DAT_0537d558;
  if (DAT_0537d558 == (long *)0x0) goto LAB_0150b3bc;
  lVar4 = *DAT_0537d558;
  bVar2 = *(byte *)(lVar4 + 0x473);
  if ((long)(char)bVar2 == 0xffffffffffffffff) {
LAB_0150b374:
    FUN_0150b400(param_1);
    local_14 = 0xff00;
    if (DAT_0520fed8 < 0) goto LAB_0150b3bc;
    lVar4 = *DAT_0537d558;
  }
  else {
    pbVar1 = (byte *)(lVar4 + 0x48) + ((long)(char)bVar2 & 0xffffffffU) * 0x80;
    if (7 < bVar2) {
      pbVar1 = (byte *)(lVar4 + 0x48);
    }
    if (((*pbVar1 >> 3 & 1) == 0) || (*(byte *)(lVar4 + 0x472) == bVar2)) goto LAB_0150b374;
    local_14 = 0xff01;
    if (DAT_0520fed8 < 0) goto LAB_0150b3bc;
    lVar4 = *DAT_0537d558;
  }
  local_12 = 0;
  local_18 = 0;
  FUN_01db1df0(lVar4 + 0x480,DAT_0520fed8,&local_18,param_1,0x1c,0);
LAB_0150b3bc:
  return plVar3 != (long *)0x0;
}

