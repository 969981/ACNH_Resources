
void FUN_022f1af4(void)

{
  uint *puVar1;
  long lVar2;
  byte *pbVar3;
  uint uVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  byte bVar8;
  undefined4 local_18;
  undefined2 local_14;
  undefined1 local_12;
  
  if (DAT_04c487d4 == -1) {
    return;
  }
  local_18 = 1;
  puVar1 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)DAT_04c487d4 * 8);
  if (0xff < (uint)(int)DAT_04c487d4) {
    puVar1 = (uint *)PTR_DAT_04bc39f8;
  }
  if ((*puVar1 >> 1 & 1) == 0) {
    return;
  }
  uVar4 = FUN_022f1914();
  if (uVar4 == 0xffffffff) {
    return;
  }
  uVar6 = (ulong)uVar4;
  uVar5 = FUN_022f1cf0(&DAT_05486908 + uVar6 * 8,1);
  if ((uVar5 & 1) == 0) {
    return;
  }
  lVar7 = *DAT_0537d558;
  if (*(byte *)(lVar7 + 0x476) < 2) {
    *(undefined8 *)(&DAT_05486928 + uVar6 * 0x10) = 0;
    (&DAT_05486938)[uVar6 * 0x10] = 0;
    (&DAT_05486910)[uVar6 * 8] = 0xffffffffffffffff;
    *(undefined1 *)((long)&DAT_05486945 + uVar6 * 0x40 + 1) = 0;
    *(undefined8 *)(&DAT_0548693c + uVar6 * 0x10) = 0xffff000000000000;
    *(undefined2 *)(&DAT_05486944 + uVar6 * 0x40) = 0;
    return;
  }
  bVar8 = *(byte *)(lVar7 + 0x473);
  if ((long)(char)bVar8 != 0xffffffffffffffff) {
    uVar5 = (long)(char)bVar8 & 0xffffffff;
    pbVar3 = (byte *)(lVar7 + 0x48) + uVar5 * 0x80;
    if (7 < bVar8) {
      pbVar3 = (byte *)(lVar7 + 0x48);
    }
    if ((*pbVar3 >> 3 & 1) != 0) {
      lVar2 = DAT_0537d558[2] + 0x108 + uVar5 * 0xc;
      if (0xb < bVar8) {
        lVar2 = DAT_0537d558[2] + 0x108;
      }
      if (*(char *)(lVar2 + 10) == '\0') goto LAB_022f1c4c;
    }
  }
  local_18 = 0;
  DAT_05486880 = (ushort)(uVar4 << 8) | 6;
  local_12 = 0;
  local_14 = 0xff00;
  if (-1 < DAT_05486858) {
    FUN_01db1df0(*DAT_0537d558 + 0x480,DAT_05486858,&local_18,&DAT_05486880,2,0);
  }
  lVar7 = *DAT_0537d558;
  bVar8 = *(byte *)(lVar7 + 0x473);
  if (bVar8 == 0xff) {
    return;
  }
LAB_022f1c4c:
  pbVar3 = (byte *)(lVar7 + 0x48) + ((long)(char)bVar8 & 0xffffffffU) * 0x80;
  if (7 < bVar8) {
    pbVar3 = (byte *)(lVar7 + 0x48);
  }
  if (((*pbVar3 >> 3 & 1) != 0) && (bVar8 != *(byte *)(lVar7 + 0x472))) {
    local_18 = 0;
    DAT_05486880 = (ushort)(uVar4 << 8) | 9;
    local_12 = 0;
    local_14 = 0xff01;
    if (-1 < DAT_05486858) {
      FUN_01db1df0(*DAT_0537d558 + 0x480,DAT_05486858,&local_18,&DAT_05486880,2,0);
    }
  }
  return;
}

