
undefined8 FUN_026c4448(void)

{
  undefined *puVar1;
  byte *pbVar2;
  byte bVar3;
  long *plVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  
  plVar4 = DAT_0537d558;
  uVar5 = FUN_0375f6e0();
  if ((uVar5 & 1) == 0) {
    if (DAT_04c487d4 != -1) {
      puVar1 = PTR_DAT_04bc39f8 + (ulong)(uint)(int)DAT_04c487d4 * 8;
      if (0xff < (uint)(int)DAT_04c487d4) {
        puVar1 = PTR_DAT_04bc39f8;
      }
      if ((*(uint *)(puVar1 + 4) >> 2 & 1) != 0) goto LAB_026c446c;
      puVar1 = PTR_DAT_04bc39f8 + (ulong)(uint)(int)DAT_04c487d4 * 8;
      if (0xff < (uint)(int)DAT_04c487d4) {
        puVar1 = PTR_DAT_04bc39f8;
      }
      if ((*(uint *)(puVar1 + 4) & 1) != 0) {
        if ((DAT_0537d558 == (long *)0x0) || (*(byte *)(*DAT_0537d558 + 0x476) < 2)) {
          return 0x15;
        }
        lVar7 = *plVar4;
        bVar3 = *(byte *)(lVar7 + 0x473);
        if ((long)(char)bVar3 != 0xffffffffffffffff) {
          pbVar2 = (byte *)(lVar7 + 0x48) + ((long)(char)bVar3 & 0xffffffffU) * 0x80;
          if (7 < bVar3) {
            pbVar2 = (byte *)(lVar7 + 0x48);
          }
          if (((*pbVar2 >> 3 & 1) != 0) && (*(byte *)(lVar7 + 0x472) != bVar3)) {
            return 0x1d;
          }
        }
        return 0x18;
      }
    }
    if ((DAT_0537d558 == (long *)0x0) || (*(byte *)(*DAT_0537d558 + 0x476) < 2)) {
      uVar6 = 0;
    }
    else {
      lVar7 = *plVar4;
      bVar3 = *(byte *)(lVar7 + 0x473);
      if ((long)(char)bVar3 != 0xffffffffffffffff) {
        pbVar2 = (byte *)(lVar7 + 0x48) + ((long)(char)bVar3 & 0xffffffffU) * 0x80;
        if (7 < bVar3) {
          pbVar2 = (byte *)(lVar7 + 0x48);
        }
        if (((*pbVar2 >> 3 & 1) != 0) && (*(byte *)(lVar7 + 0x472) != bVar3)) {
          return 9;
        }
      }
      uVar6 = 3;
    }
  }
  else {
LAB_026c446c:
    uVar6 = 0x11;
  }
  return uVar6;
}

