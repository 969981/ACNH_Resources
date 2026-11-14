
undefined8 FUN_016e6604(byte *param_1)

{
  uint *puVar1;
  short sVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined8 uVar5;
  ushort uVar6;
  
  puVar3 = PTR_DAT_04bb6298;
  uVar6 = *(ushort *)PTR_DAT_04bb6298;
  if (*param_1 < 8) {
    if (uVar6 != 0xffff) {
      puVar1 = (uint *)(PTR_DAT_04bc39f8 + ((long)(short)uVar6 & 0xffffffffU) * 8);
      if (0xff < uVar6) {
        puVar1 = (uint *)PTR_DAT_04bc39f8;
      }
      if ((*puVar1 >> 6 & 1) != 0) {
        uVar4 = FUN_02915598();
        if ((uVar4 & 1) != 0) goto LAB_016e6764;
        uVar6 = *(ushort *)puVar3;
        if (uVar6 == 0xffff) goto LAB_016e6718;
      }
LAB_016e66d8:
      puVar1 = (uint *)(PTR_DAT_04bc39f8 + ((long)(short)uVar6 & 0xffffffffU) * 8);
      if (0xff < uVar6) {
        puVar1 = (uint *)PTR_DAT_04bc39f8;
      }
      if ((*puVar1 >> 0x15 & 1) != 0) goto LAB_016e6764;
    }
LAB_016e6718:
    uVar4 = FUN_016e6498();
    if (((uVar4 & 1) != 0) && (sVar2 = *(short *)puVar3, sVar2 != -1)) {
      puVar1 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar2 * 8);
      if (0xff < (uint)(int)sVar2) {
        puVar1 = (uint *)PTR_DAT_04bc39f8;
      }
      if ((*puVar1 & 1) != 0) goto LAB_016e6764;
    }
    uVar5 = 0;
  }
  else {
    if (uVar6 == 0xffff) goto LAB_016e6718;
    puVar1 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)(short)uVar6 * 8);
    if (0xff < uVar6) {
      puVar1 = (uint *)PTR_DAT_04bc39f8;
    }
    if ((*puVar1 >> 6 & 1) == 0) goto LAB_016e66d8;
LAB_016e6764:
    uVar5 = 1;
  }
  return uVar5;
}

