
undefined8 FUN_0205c0e0(long param_1,long param_2)

{
  undefined8 *puVar1;
  uint *puVar2;
  undefined4 uVar3;
  byte bVar4;
  undefined *puVar5;
  byte bVar6;
  char *pcVar7;
  long lVar8;
  undefined4 local_28;
  undefined1 uStack_24;
  byte bStack_23;
  byte bStack_22;
  uint uStack_21;
  undefined2 local_1d;
  
  puVar1 = (undefined8 *)(param_1 + 0x90) + (ulong)*(byte *)(param_2 + 8) * 7;
  if (9 < *(byte *)(param_2 + 8)) {
    puVar1 = (undefined8 *)(param_1 + 0x90);
  }
  if ((*(byte *)(param_1 + 0x2cc) >> 1 & 1) != 0) {
    lVar8 = *DAT_0537d558;
    bVar4 = *(byte *)(lVar8 + 0x473);
    pcVar7 = PTR_DAT_04bc1220;
    if ((long)(char)bVar4 != 0xffffffffffffffff) {
      puVar2 = (uint *)(lVar8 + 0x48) + ((long)(char)bVar4 & 0xffffffffU) * 0x20;
      if (7 < bVar4) {
        puVar2 = (uint *)(lVar8 + 0x48);
      }
      if ((*puVar2 & 8) != 0) {
        pcVar7 = (char *)(lVar8 + 0x473);
      }
    }
    if (*(char *)((long)puVar1 + 7) == *pcVar7) {
      *(undefined4 *)(param_1 + 0x2c8) = 0;
      *(byte *)(param_1 + 0x2cc) = *(byte *)(param_1 + 0x2cc) & 0xfd;
    }
  }
  local_28 = 0;
  *puVar1 = 0xff08002300000000;
  puVar5 = PTR_DAT_04bb37e0;
  *(undefined2 *)(puVar1 + 6) = 0xffff;
  bVar6 = DAT_0537bdb8;
  local_1d = 0;
  bStack_23 = DAT_0537bdb8 << 2 | 3;
  uVar3 = *(undefined4 *)puVar5;
  *(undefined4 *)(puVar1 + 2) = *(undefined4 *)(puVar5 + 4);
  bVar4 = bVar6 >> 6;
  *(undefined4 *)(puVar1 + 1) = 0xffffffff;
  *(undefined4 *)((long)puVar1 + 0xc) = uVar3;
  bStack_22 = bVar4 | bVar6 << 2;
  uStack_24 = 0xff;
  uStack_21 = (uint)(bVar4 | 4);
  FUN_020e9c5c(&local_28,(long)puVar1 + 0x32);
  return 0;
}

