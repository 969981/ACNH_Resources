
uint FUN_016e6c20(ushort param_1)

{
  int iVar1;
  ushort uVar2;
  long lVar3;
  uint *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  
  lVar3 = *(long *)PTR_DAT_04bb2720;
  if (lVar3 == 0) {
    puVar6 = &DAT_055c04a0;
  }
  else {
    puVar6 = &DAT_055c04a0;
    if (*(long *)(lVar3 + 0x330) != 0) {
      puVar6 = (undefined8 *)
               (**(code **)(*DAT_05aed668 + 0x18))(DAT_05aed668,*(undefined4 *)(lVar3 + 0x338));
      iVar1 = FUN_006bd550(*puVar6,0);
      puVar6 = (undefined8 *)PTR_DAT_04bc3a80;
      if (iVar1 != 0x758f7eaf) {
        puVar6 = &DAT_055c04a0;
      }
    }
  }
  if (DAT_055c1b60 != &DAT_055c1b58) {
    uVar2 = 0;
    puVar5 = DAT_055c1b60;
    do {
      if (*(int *)(puVar5 + -1) == *(int *)(puVar6 + 7)) {
        if (uVar2 != 0xffff) goto LAB_016e6cf4;
        break;
      }
      puVar5 = (undefined8 *)puVar5[1];
      uVar2 = uVar2 + 1;
    } while (puVar5 != &DAT_055c1b58);
  }
  uVar2 = 0;
LAB_016e6cf4:
  if (uVar2 == param_1) {
    if (DAT_04c487d4 == -1) {
      return 0;
    }
    puVar4 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)DAT_04c487d4 * 8);
    if (0xff < (uint)(int)DAT_04c487d4) {
      puVar4 = (uint *)PTR_DAT_04bc39f8;
    }
  }
  else {
    if (param_1 == 0xffff) {
      return 0;
    }
    puVar4 = (uint *)(PTR_DAT_04bc39f8 + ((long)(short)param_1 & 0xffffffffU) * 8);
    if ((param_1 & 0xff00) != 0) {
      puVar4 = (uint *)PTR_DAT_04bc39f8;
    }
  }
  return *puVar4 >> 5 & 1;
}

