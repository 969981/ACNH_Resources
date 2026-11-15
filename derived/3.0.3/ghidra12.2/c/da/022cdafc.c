
undefined8 FUN_022cdafc(byte *param_1)

{
  undefined *puVar1;
  uint *puVar2;
  char cVar3;
  short sVar4;
  ushort uVar5;
  undefined *puVar6;
  long *plVar7;
  char *pcVar8;
  ulong uVar9;
  
  puVar6 = PTR_DAT_04bb6298;
  sVar4 = *(short *)PTR_DAT_04bb6298;
  if (sVar4 != -1) {
    puVar1 = PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar4 * 8;
    if (0xff < (uint)(int)sVar4) {
      puVar1 = PTR_DAT_04bc39f8;
    }
    if ((*(uint *)(puVar1 + 4) & 1) != 0) {
      return 0;
    }
  }
  if (1 < *(byte *)(*DAT_0537d558 + 0x476)) {
    pcVar8 = (char *)FUN_02582a24(param_1);
    plVar7 = DAT_0537d558;
    cVar3 = *pcVar8;
    uVar9 = FUN_01d3e29c(*DAT_0537d558 + 8);
    pcVar8 = (char *)(*plVar7 + 0x472);
    if ((uVar9 & 1) == 0) {
      pcVar8 = PTR_DAT_04bc1220;
    }
    if (cVar3 != *pcVar8) {
      return 1;
    }
  }
  if (*(int *)(PTR_DAT_04bc3a80 + 0x38) == 0x6622bd46) {
    if ((((DAT_04cd19d8 == 0) || (*(int *)(DAT_04cd19d8 + 0x15c) == 0)) &&
        (DAT_0537d558 != (long *)0x0)) && (1 < *(byte *)(*DAT_0537d558 + 0x476))) {
      return 2;
    }
  }
  else {
    uVar5 = *(ushort *)puVar6;
    uVar9 = (ulong)(short)uVar5;
    if (uVar9 != 0xffffffffffffffff) {
      puVar2 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)(short)uVar5 * 8);
      if (0xff < (uint)(int)(short)uVar5) {
        puVar2 = (uint *)PTR_DAT_04bc39f8;
      }
      if ((*puVar2 >> 0x15 & 1) == 0) {
        if (*param_1 < 8) {
          puVar2 = (uint *)(PTR_DAT_04bc39f8 + (uVar9 & 0xffffffff) * 8);
          if (0xff < uVar5) {
            puVar2 = (uint *)PTR_DAT_04bc39f8;
          }
          if ((*puVar2 >> 6 & 1) == 0) {
            return 0;
          }
          uVar9 = FUN_02915598(param_1);
          if ((uVar9 & 1) == 0) {
            return 0;
          }
        }
        else {
          puVar2 = (uint *)(PTR_DAT_04bc39f8 + (uVar9 & 0xffffffff) * 8);
          if (0xff < uVar5) {
            puVar2 = (uint *)PTR_DAT_04bc39f8;
          }
          if ((*puVar2 >> 6 & 1) == 0) {
            return 0;
          }
        }
        uVar9 = FUN_016e7450(param_1);
        if ((uVar9 & 1) != 0) {
          return 3;
        }
        uVar9 = FUN_016e7650();
        if ((uVar9 & 1) != 0) {
          return 4;
        }
      }
    }
  }
  return 0;
}

