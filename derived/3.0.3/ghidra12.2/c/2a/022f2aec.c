
void FUN_022f2aec(long param_1,byte param_2,undefined2 param_3,long param_4,undefined1 param_5)

{
  undefined8 *puVar1;
  byte *pbVar2;
  undefined4 uVar3;
  byte bVar4;
  long lVar5;
  
  puVar1 = &DAT_05486908 + (ulong)param_2 * 8;
  if (0x13 < param_2) {
    puVar1 = &DAT_05486908;
  }
  if (puVar1[1] == -1 || puVar1[1] != param_1) {
    *(undefined1 *)((long)puVar1 + 0x3e) = 0;
    puVar1[4] = 0;
    *(undefined4 *)(puVar1 + 6) = 0;
    *(undefined8 *)((long)puVar1 + 0x34) = 0xffff000000000000;
    *(undefined2 *)((long)puVar1 + 0x3c) = 0;
    puVar1[1] = param_1;
    *(undefined4 *)(puVar1 + 4) = *(undefined4 *)(param_4 + 0x10);
    *(undefined4 *)((long)puVar1 + 0x24) = *(undefined4 *)(param_4 + 0x14);
    *(undefined4 *)(puVar1 + 6) = *(undefined4 *)(param_4 + 0x20);
    uVar3 = *(undefined4 *)(param_4 + 0x24);
    *(undefined2 *)((long)puVar1 + 0x3a) = param_3;
    *(undefined1 *)((long)puVar1 + 0x3c) = param_5;
    *(undefined4 *)((long)puVar1 + 0x34) = uVar3;
    *(undefined2 *)(puVar1 + 7) = 0x20;
    lVar5 = *DAT_0537d558;
    if (1 < *(byte *)(lVar5 + 0x476)) {
      bVar4 = *(byte *)(lVar5 + 0x473);
      if ((long)(char)bVar4 != 0xffffffffffffffff) {
        pbVar2 = (byte *)(lVar5 + 0x48) + ((long)(char)bVar4 & 0xffffffffU) * 0x80;
        if (7 < bVar4) {
          pbVar2 = (byte *)(lVar5 + 0x48);
        }
        if (((*pbVar2 >> 3 & 1) != 0) && (*(byte *)(lVar5 + 0x472) != bVar4)) {
          return;
        }
      }
      FUN_022f3680((long)puVar1 + 0x3d);
      FUN_022f3680((undefined1 *)((long)puVar1 + 0x3e));
      return;
    }
  }
  return;
}

