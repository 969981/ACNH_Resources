
uint FUN_0290d828(void)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  undefined8 *puVar4;
  long lVar5;
  
  lVar5 = 0;
  if (DAT_05aed670 != 0) {
    if (*(long *)(DAT_05aed670 + 0x330) != 0) {
      puVar4 = (undefined8 *)
               (**(code **)(*DAT_05aed668 + 0x18))
                         (DAT_05aed668,*(undefined4 *)(DAT_05aed670 + 0x338));
      iVar2 = FUN_006bd550(*puVar4,0);
      if (iVar2 == 0x758f7eaf) {
        lVar5 = 0;
        if (DAT_05aed670 != 0) {
          lVar5 = *(long *)(DAT_05aed670 + 0x330);
        }
        goto LAB_0290d89c;
      }
    }
    lVar5 = 0;
  }
LAB_0290d89c:
  if ((long)(short)DAT_04c487d4 == 0xffffffffffffffff) {
LAB_0290d8e8:
    if ((*DAT_055cdb40 != '\0') && ((long)(short)DAT_04c487cc != 0xffffffffffffffff)) {
      puVar1 = &DAT_055c11c8 + ((long)(short)DAT_04c487cc & 0xffffffffU) * 2;
      if (0xff < DAT_04c487cc) {
        puVar1 = &DAT_055c11c8;
      }
      if ((*puVar1 >> 0x1d & 1) != 0) goto LAB_0290d948;
    }
    if (((lVar5 == 0) || (0 < *(int *)(lVar5 + 0xe0))) ||
       ((long)(short)DAT_04c487d0 == 0xffffffffffffffff)) {
      uVar3 = 0;
    }
    else {
      puVar1 = &DAT_055c11c8 + ((long)(short)DAT_04c487d0 & 0xffffffffU) * 2;
      if (0xff < DAT_04c487d0) {
        puVar1 = &DAT_055c11c8;
      }
      uVar3 = *puVar1 >> 0x1d & 1;
    }
  }
  else {
    puVar1 = &DAT_055c11c8 + ((long)(short)DAT_04c487d4 & 0xffffffffU) * 2;
    if (0xff < DAT_04c487d4) {
      puVar1 = &DAT_055c11c8;
    }
    if ((*puVar1 >> 0x1d & 1) == 0) goto LAB_0290d8e8;
LAB_0290d948:
    uVar3 = 1;
  }
  return uVar3;
}

