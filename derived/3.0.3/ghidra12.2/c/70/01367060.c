
uint FUN_01367060(void)

{
  undefined *puVar1;
  uint *puVar2;
  uint uVar3;
  ulong uVar4;
  
  uVar4 = (ulong)(short)DAT_04c487d4;
  if (uVar4 == 0xffffffffffffffff) {
    uVar3 = 0;
LAB_01367188:
    return uVar3 ^ 1;
  }
  puVar1 = PTR_DAT_04bc39f8 + (ulong)(uint)(int)(short)DAT_04c487d4 * 8;
  if (0xff < (uint)(int)(short)DAT_04c487d4) {
    puVar1 = PTR_DAT_04bc39f8;
  }
  if ((*(uint *)(puVar1 + 4) & 1) == 0) {
    puVar2 = (uint *)(PTR_DAT_04bc39f8 + (uVar4 & 0xffffffff) * 8);
    if (0xff < DAT_04c487d4) {
      puVar2 = (uint *)PTR_DAT_04bc39f8;
    }
    if ((*puVar2 >> 0x12 & 1) == 0) {
      puVar2 = (uint *)(PTR_DAT_04bc39f8 + (uVar4 & 0xffffffff) * 8);
      if (0xff < DAT_04c487d4) {
        puVar2 = (uint *)PTR_DAT_04bc39f8;
      }
      if ((*puVar2 >> 3 & 1) != 0) {
        return 1;
      }
      puVar2 = (uint *)(PTR_DAT_04bc39f8 + (uVar4 & 0xffffffff) * 8);
      if (0xff < DAT_04c487d4) {
        puVar2 = (uint *)PTR_DAT_04bc39f8;
      }
      uVar3 = *puVar2 >> 1 & 1;
      goto LAB_01367188;
    }
  }
  return 0;
}

