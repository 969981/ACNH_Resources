
void FUN_01d58a38(long param_1)

{
  uint *puVar1;
  uint *puVar2;
  byte bVar3;
  long lVar4;
  
  bVar3 = *(byte *)(param_1 + 0xaa4);
  if ((long)(char)bVar3 != 0xffffffffffffffff) {
    lVar4 = *DAT_0537d558;
    puVar1 = (uint *)(lVar4 + 0x48);
    puVar2 = puVar1 + ((long)(char)bVar3 & 0xffffffffU) * 0x20;
    if (7 < bVar3) {
      puVar2 = puVar1;
    }
    if ((*puVar2 >> 1 & 1) != 0) {
      *puVar2 = *puVar2 | 4;
      FUN_01d3e314(lVar4 + 8);
    }
  }
  if (*(int *)(DAT_0537d558[2] + 0xaa0) != 3) {
    DAT_05454054 = 1;
  }
  if (DAT_0556aa70 != 0) {
    *(uint *)(DAT_0556aa70 + 0x43c) = *(uint *)(DAT_0556aa70 + 0x43c) | 8;
  }
  if (DAT_04c487d4 != -1) {
    puVar1 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)DAT_04c487d4 * 8);
    if (0xff < (uint)(int)DAT_04c487d4) {
      puVar1 = (uint *)PTR_DAT_04bc39f8;
    }
    if ((*puVar1 >> 5 & 1) != 0) {
      return;
    }
  }
  FUN_02918280();
  return;
}

