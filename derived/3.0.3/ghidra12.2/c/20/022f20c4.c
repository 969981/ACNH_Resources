
undefined1 FUN_022f20c4(void)

{
  byte *pbVar1;
  byte bVar2;
  uint uVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  undefined **local_48;
  undefined4 local_40;
  uint local_3c;
  byte local_38;
  undefined1 local_37;
  undefined4 local_18;
  undefined2 local_14;
  undefined1 local_12;
  
  lVar4 = *DAT_0537d558;
  if (1 < *(byte *)(lVar4 + 0x476)) {
    bVar2 = *(byte *)(lVar4 + 0x473);
    if ((long)(char)bVar2 != 0xffffffffffffffff) {
      uVar5 = (long)(char)bVar2 & 0xffffffff;
      pbVar1 = (byte *)(lVar4 + 0x48) + uVar5 * 0x80;
      if (7 < bVar2) {
        pbVar1 = (byte *)(lVar4 + 0x48);
      }
      if ((*pbVar1 >> 3 & 1) != 0) {
        lVar4 = DAT_0537d558[2] + 0x108 + uVar5 * 0xc;
        if (0xb < bVar2) {
          lVar4 = DAT_0537d558[2] + 0x108;
        }
        if (*(char *)(lVar4 + 10) == '\0') {
          return 0;
        }
      }
    }
  }
  local_40 = 0x11;
  local_38 = *PTR_DAT_04bb32e0;
  if (7 < local_38) {
    local_38 = 0xff;
  }
  local_48 = &PTR_LAB_04a7ef60;
  uVar3 = FUN_022f1914();
  if (uVar3 == 0xffffffff) {
    return 0;
  }
  uVar5 = (ulong)uVar3;
  local_37 = 1;
  local_3c = uVar3;
  FUN_01393458(&local_48);
  lVar4 = *DAT_0537d558;
  if (1 < *(byte *)(lVar4 + 0x476)) {
    bVar2 = *(byte *)(lVar4 + 0x473);
    if ((long)(char)bVar2 != 0xffffffffffffffff) {
      uVar6 = (long)(char)bVar2 & 0xffffffff;
      pbVar1 = (byte *)(lVar4 + 0x48) + uVar6 * 0x80;
      if (7 < bVar2) {
        pbVar1 = (byte *)(lVar4 + 0x48);
      }
      if ((*pbVar1 >> 3 & 1) != 0) {
        lVar4 = DAT_0537d558[2] + 0x108 + uVar6 * 0xc;
        if (0xb < bVar2) {
          lVar4 = DAT_0537d558[2] + 0x108;
        }
        if (*(char *)(lVar4 + 10) == '\0') goto LAB_022f223c;
      }
    }
    local_18 = 0;
    DAT_05486880 = (ushort)(uVar3 << 8) | 0xd;
    local_12 = 0;
    local_14 = 0xff00;
    if (-1 < DAT_05486858) {
      FUN_01db1df0(*DAT_0537d558 + 0x480,DAT_05486858,&local_18,&DAT_05486880,2,0);
    }
  }
LAB_022f223c:
  (&DAT_05486910)[uVar5 * 8] = 0xffffffffffffffff;
  *(undefined8 *)(&DAT_05486928 + uVar5 * 0x10) = 0;
  (&DAT_05486938)[uVar5 * 0x10] = 0;
  *(undefined8 *)(&DAT_0548693c + uVar5 * 0x10) = 0xffff000000000000;
  *(undefined1 *)((long)&DAT_05486945 + uVar5 * 0x40 + 1) = 0;
  *(undefined2 *)(&DAT_05486944 + uVar5 * 0x40) = 0;
  return 1;
}

