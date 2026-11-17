
/* WARNING: Removing unreachable block (ram,0x02efd08c) */

uint FUN_02efcee0(void)

{
  uint *puVar1;
  undefined *puVar2;
  ulong uVar3;
  
  uVar3 = (ulong)(short)DAT_04c487d4;
  if (uVar3 == 0xffffffffffffffff) {
    return 0;
  }
  puVar1 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)(short)DAT_04c487d4 * 8);
  if (0xff < (uint)(int)(short)DAT_04c487d4) {
    puVar1 = (uint *)PTR_DAT_04bc39f8;
  }
  if (((*puVar1 & 1) == 0) || (((*puVar1 >> 0x1a & 1) == 0 && ((puVar1[1] & 1) == 0)))) {
    puVar1 = (uint *)(PTR_DAT_04bc39f8 + (uVar3 & 0xffffffff) * 8);
    if (0xff < DAT_04c487d4) {
      puVar1 = (uint *)PTR_DAT_04bc39f8;
    }
    if ((*puVar1 >> 7 & 1) == 0) {
      puVar1 = (uint *)(PTR_DAT_04bc39f8 + (uVar3 & 0xffffffff) * 8);
      if (0xff < DAT_04c487d4) {
        puVar1 = (uint *)PTR_DAT_04bc39f8;
      }
      if ((*puVar1 >> 6 & 1) == 0) {
        puVar1 = (uint *)(PTR_DAT_04bc39f8 + (uVar3 & 0xffffffff) * 8);
        if (0xff < DAT_04c487d4) {
          puVar1 = (uint *)PTR_DAT_04bc39f8;
        }
        if ((*puVar1 >> 0x15 & 1) == 0) {
          puVar2 = PTR_DAT_04bc39f8 + (uVar3 & 0xffffffff) * 8;
          if (0xff < DAT_04c487d4) {
            puVar2 = PTR_DAT_04bc39f8;
          }
          return *(uint *)(puVar2 + 4) >> 2 & 1;
        }
      }
    }
  }
  return 1;
}

