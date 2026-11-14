
bool FUN_0180c170(void)

{
  uint *puVar1;
  int iVar2;
  undefined8 *puVar3;
  uint uVar5;
  uint uVar4;
  int iVar6;
  
  uVar4 = (uint)(short)DAT_04c487d4;
  uVar5 = (uint)(short)DAT_04c487d4;
  if (DAT_05292338 == 0) {
    if (DAT_04c487d4 == 0xffff) goto LAB_0180c29c;
  }
  else {
    if (DAT_04c487d4 == 0xffff) goto LAB_0180c29c;
    puVar1 = (uint *)(PTR_DAT_04bc39f8 + (ulong)uVar5 * 8);
    if (0xff < DAT_04c487d4) {
      puVar1 = (uint *)PTR_DAT_04bc39f8;
    }
    if ((*puVar1 >> 6 & 1) != 0) {
      return true;
    }
    puVar1 = (uint *)(PTR_DAT_04bc39f8 + (ulong)uVar4 * 8);
    if (0xff < uVar5) {
      puVar1 = (uint *)PTR_DAT_04bc39f8;
    }
    if ((*puVar1 >> 7 & 1) != 0) {
      return true;
    }
    puVar1 = (uint *)(PTR_DAT_04bc39f8 + (ulong)uVar4 * 8);
    if (0xff < uVar4) {
      puVar1 = (uint *)PTR_DAT_04bc39f8;
    }
    if ((*puVar1 >> 0x15 & 1) != 0) {
      return true;
    }
  }
  puVar1 = (uint *)(PTR_DAT_04bc39f8 + (ulong)uVar5 * 8);
  if (0xff < uVar4) {
    puVar1 = (uint *)PTR_DAT_04bc39f8;
  }
  if ((*puVar1 >> 0x1a & 1) != 0) {
    return true;
  }
LAB_0180c29c:
  iVar6 = 0;
  if (DAT_05aed670 != 0) {
    if (*(long *)(DAT_05aed670 + 0x330) == 0) {
      iVar6 = 0;
    }
    else {
      puVar3 = (undefined8 *)
               (**(code **)(*DAT_05aed668 + 0x18))
                         (DAT_05aed668,*(undefined4 *)(DAT_05aed670 + 0x338));
      iVar2 = FUN_006bd550(*puVar3,0);
      iVar6 = 0;
      if ((iVar2 == 0x758f7eaf) && (iVar6 = 0, DAT_05aed670 != 0)) {
        iVar6 = 0;
        if (*(long *)(DAT_05aed670 + 0x330) != 0) {
          iVar6 = *(int *)(*(long *)(DAT_05aed670 + 0x330) + 0x244);
        }
      }
    }
  }
  if (DAT_05292434 == iVar6) {
    return true;
  }
  iVar6 = 0;
  if (DAT_05aed670 != 0) {
    if (*(long *)(DAT_05aed670 + 0x330) == 0) {
      iVar6 = 0;
    }
    else {
      puVar3 = (undefined8 *)
               (**(code **)(*DAT_05aed668 + 0x18))
                         (DAT_05aed668,*(undefined4 *)(DAT_05aed670 + 0x338));
      iVar2 = FUN_006bd550(*puVar3,0);
      iVar6 = 0;
      if ((iVar2 == 0x758f7eaf) && (iVar6 = 0, DAT_05aed670 != 0)) {
        iVar6 = 0;
        if (*(long *)(DAT_05aed670 + 0x330) != 0) {
          iVar6 = *(int *)(*(long *)(DAT_05aed670 + 0x330) + 0x244);
        }
      }
    }
  }
  return DAT_05292438 == iVar6;
}

