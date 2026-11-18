
undefined4 FUN_03401dc0(void)

{
  uint *puVar1;
  undefined *puVar2;
  ushort uVar3;
  int iVar4;
  undefined4 uVar5;
  ulong uVar6;
  undefined *local_20;
  char *pcStack_18;
  
  if (*(long *)PTR_DAT_04bb2800 != 0) {
    local_20 = PTR_DAT_04bb2020 + 0x10;
    pcStack_18 = "NpcInteriorCoordinate";
    iVar4 = FUN_02743000(&local_20);
    if (iVar4 != 0) {
      return 4;
    }
  }
  uVar3 = *(ushort *)PTR_DAT_04bb6298;
  uVar6 = (ulong)(short)uVar3;
  if (uVar6 == 0xffffffffffffffff) {
    uVar5 = 0;
  }
  else {
    puVar1 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)(short)uVar3 * 8);
    if (0xff < (uint)(int)(short)uVar3) {
      puVar1 = (uint *)PTR_DAT_04bc39f8;
    }
    if ((*puVar1 >> 0x19 & 1) == 0) {
      puVar2 = PTR_DAT_04bc39f8 + (uVar6 & 0xffffffff) * 8;
      if (0xff < uVar3) {
        puVar2 = PTR_DAT_04bc39f8;
      }
      if ((*(uint *)(puVar2 + 4) >> 2 & 1) == 0) {
        puVar2 = PTR_DAT_04bc39f8 + (uVar6 & 0xffffffff) * 8;
        if (0xff < uVar3) {
          puVar2 = PTR_DAT_04bc39f8;
        }
        uVar5 = 0;
        if ((*(uint *)(puVar2 + 4) & 1) != 0) {
          uVar5 = 7;
        }
      }
      else {
        uVar5 = 6;
      }
    }
    else {
      uVar5 = 2;
    }
  }
  return uVar5;
}

