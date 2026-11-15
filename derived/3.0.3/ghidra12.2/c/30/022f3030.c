
void FUN_022f3030(long param_1)

{
  uint *puVar1;
  byte *pbVar2;
  byte bVar3;
  long lVar4;
  ulong uVar5;
  undefined **local_28;
  uint local_20;
  uint local_1c;
  undefined4 local_18;
  undefined2 local_14;
  undefined1 local_12;
  
  if (DAT_04c487d4 != -1) {
    puVar1 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)DAT_04c487d4 * 8);
    if (0xff < (uint)(int)DAT_04c487d4) {
      puVar1 = (uint *)PTR_DAT_04bc39f8;
    }
    if ((*puVar1 >> 3 & 1) != 0) {
      local_28 = &PTR_FUN_04986b58;
      local_20 = *(uint *)(param_1 + 8);
      local_1c = *(uint *)(param_1 + 0xc);
      if ((local_20 & 1) != 0) {
        local_20 = local_20 - 1;
      }
      if ((local_1c & 1) != 0) {
        local_1c = local_1c - 1;
      }
      FUN_011dab84(&local_28,0,0,0,1);
      FUN_0122a7f0(&local_28,0);
      lVar4 = *DAT_0537d558;
      if (1 < *(byte *)(lVar4 + 0x476)) {
        bVar3 = *(byte *)(lVar4 + 0x473);
        if ((long)(char)bVar3 != 0xffffffffffffffff) {
          uVar5 = (long)(char)bVar3 & 0xffffffff;
          pbVar2 = (byte *)(lVar4 + 0x48) + uVar5 * 0x80;
          if (7 < bVar3) {
            pbVar2 = (byte *)(lVar4 + 0x48);
          }
          if ((*pbVar2 >> 3 & 1) != 0) {
            lVar4 = DAT_0537d558[2] + 0x108 + uVar5 * 0xc;
            if (0xb < bVar3) {
              lVar4 = DAT_0537d558[2] + 0x108;
            }
            if (*(char *)(lVar4 + 10) == '\0') {
              return;
            }
          }
        }
        local_18 = 0;
        local_12 = 0;
        DAT_05486900 = local_20 & 0xffff | local_1c << 0x10;
        local_14 = 0xff00;
        if (-1 < DAT_054868d8) {
          FUN_01db1df0(*DAT_0537d558 + 0x480,DAT_054868d8,&local_18,&DAT_05486900,4,0);
        }
      }
    }
  }
  return;
}

