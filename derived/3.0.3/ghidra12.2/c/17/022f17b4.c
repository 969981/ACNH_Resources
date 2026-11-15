
void FUN_022f17b4(void)

{
  uint *puVar1;
  byte *pbVar2;
  byte bVar3;
  uint uVar4;
  long lVar5;
  ulong uVar6;
  ushort *puVar7;
  undefined4 local_28;
  undefined2 local_24;
  undefined1 local_22;
  
  if (DAT_04c487d4 != -1) {
    puVar1 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)DAT_04c487d4 * 8);
    if (0xff < (uint)(int)DAT_04c487d4) {
      puVar1 = (uint *)PTR_DAT_04bc39f8;
    }
    if ((((*puVar1 >> 1 & 1) != 0) && (uVar4 = FUN_022f1914(), uVar4 != 0xffffffff)) &&
       (puVar7 = &DAT_05486940 + (ulong)uVar4 * 0x20, (*puVar7 >> 3 & 1) != 0)) {
      FUN_022f39a0();
      *puVar7 = *puVar7 & 0xffe7 | 0x10;
      lVar5 = *DAT_0537d558;
      if (1 < *(byte *)(lVar5 + 0x476)) {
        bVar3 = *(byte *)(lVar5 + 0x473);
        if ((long)(char)bVar3 != 0xffffffffffffffff) {
          uVar6 = (long)(char)bVar3 & 0xffffffff;
          pbVar2 = (byte *)(lVar5 + 0x48) + uVar6 * 0x80;
          if (7 < bVar3) {
            pbVar2 = (byte *)(lVar5 + 0x48);
          }
          if ((*pbVar2 >> 3 & 1) != 0) {
            lVar5 = DAT_0537d558[2] + 0x108 + uVar6 * 0xc;
            if (0xb < bVar3) {
              lVar5 = DAT_0537d558[2] + 0x108;
            }
            if (*(char *)(lVar5 + 10) == '\0') {
              return;
            }
          }
        }
        local_28 = 0;
        DAT_05486880 = (ushort)(uVar4 << 8) | 5;
        local_22 = 0;
        local_24 = 0xff00;
        if (-1 < DAT_05486858) {
          FUN_01db1df0(*DAT_0537d558 + 0x480,DAT_05486858,&local_28,&DAT_05486880,2,0);
        }
      }
    }
  }
  return;
}

