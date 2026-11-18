
uint FUN_03401c30(void)

{
  uint *puVar1;
  undefined *puVar2;
  int iVar3;
  ushort uVar4;
  undefined *local_30;
  char *pcStack_28;
  
  puVar2 = PTR_DAT_04bb6298;
  uVar4 = *(ushort *)PTR_DAT_04bb6298;
  if ((long)(short)uVar4 != 0xffffffffffffffff) {
    puVar1 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)(short)uVar4 * 8);
    if (0xff < uVar4) {
      puVar1 = (uint *)PTR_DAT_04bc39f8;
    }
    if ((*puVar1 >> 0x17 & 1) != 0) {
      return 1;
    }
    puVar1 = (uint *)(PTR_DAT_04bc39f8 + ((long)(short)uVar4 & 0xffffffffU) * 8);
    if (0xff < uVar4) {
      puVar1 = (uint *)PTR_DAT_04bc39f8;
    }
    if ((*puVar1 >> 0x19 & 1) != 0) {
      return 1;
    }
  }
  if (*(long *)PTR_DAT_04bb2800 != 0) {
    local_30 = PTR_DAT_04bb2020 + 0x10;
    pcStack_28 = "NpcInteriorCoordinate";
    iVar3 = FUN_02743000(&local_30);
    if (iVar3 != 0) {
      return 1;
    }
    uVar4 = *(ushort *)puVar2;
  }
  if (uVar4 == 0xffff) {
    return 0;
  }
  puVar2 = PTR_DAT_04bc39f8 + ((long)(short)uVar4 & 0xffffffffU) * 8;
  if (0xff < uVar4) {
    puVar2 = PTR_DAT_04bc39f8;
  }
  if ((*(uint *)(puVar2 + 4) >> 2 & 1) != 0) {
    return 1;
  }
  puVar2 = PTR_DAT_04bc39f8 + ((long)(short)uVar4 & 0xffffffffU) * 8;
  if (0xff < uVar4) {
    puVar2 = PTR_DAT_04bc39f8;
  }
  return *(uint *)(puVar2 + 4) & 1;
}

