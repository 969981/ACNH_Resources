
undefined8 FUN_01f89228(long param_1)

{
  undefined *puVar1;
  uint *puVar2;
  byte bVar3;
  int iVar4;
  ulong uVar5;
  undefined8 uVar6;
  uint uVar7;
  undefined *local_40;
  char *pcStack_38;
  
  bVar3 = *(byte *)(DAT_04da6480 + 0x4064);
  iVar4 = FUN_00a86724(DAT_04da7238);
  if (DAT_04c487d4 != -1) {
    puVar2 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)DAT_04c487d4 * 8);
    if (0xff < (uint)(int)DAT_04c487d4) {
      puVar2 = (uint *)PTR_DAT_04bc39f8;
    }
    if ((*puVar2 >> 3 & 1) != 0) {
      puVar1 = PTR_DAT_04bb2020 + 0x10;
      pcStack_38 = "HotelConstruction";
      local_40 = puVar1;
      uVar5 = FUN_0273f0a0(&local_40);
      if ((uVar5 & 1) == 0) {
        pcStack_38 = "HotelBuilt";
        local_40 = puVar1;
        uVar5 = FUN_0273f0a0(&local_40);
        if (((((uVar5 & 1) != 0) && (*(byte *)(*DAT_0537d558 + 0x476) < 2)) &&
            (0xfffffff1 < bVar3 - 0x13)) &&
           (((*(char *)(param_1 + 0xb14c) == '\0' && (iVar4 != 4)) && (iVar4 != 5)))) {
          uVar6 = 0;
          uVar7 = 0;
          goto LAB_01f8934c;
        }
      }
    }
  }
  uVar7 = 0x40;
  uVar6 = 1;
LAB_01f8934c:
  *(uint *)(param_1 + 0xb11c) = *(uint *)(param_1 + 0xb11c) & 0xffffffbf | uVar7;
  return uVar6;
}

