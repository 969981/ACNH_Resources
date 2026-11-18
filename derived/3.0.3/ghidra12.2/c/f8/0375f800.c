
undefined4 FUN_0375f800(void)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  
  if (DAT_05aed670 == 0) {
    puVar3 = &DAT_055c04a0;
  }
  else {
    puVar3 = &DAT_055c04a0;
    if (*(long *)(DAT_05aed670 + 0x330) != 0) {
      puVar3 = (undefined8 *)
               (**(code **)(*DAT_05aed668 + 0x18))
                         (DAT_05aed668,*(undefined4 *)(DAT_05aed670 + 0x338));
      iVar1 = FUN_006bd550(*puVar3,0);
      puVar3 = (undefined8 *)PTR_DAT_04bc3a80;
      if (iVar1 != 0x758f7eaf) {
        puVar3 = &DAT_055c04a0;
      }
    }
  }
  iVar1 = *(int *)(puVar3 + 7);
  if (iVar1 < -0x17df00c3) {
    if (iVar1 == -0x7975b8e8) {
      lVar2 = 1;
    }
    else {
      if (iVar1 != -0x3e092032) goto LAB_0375f8dc;
      lVar2 = 2;
    }
  }
  else if (iVar1 == -0x17df00c3) {
    lVar2 = 0;
  }
  else {
    if (iVar1 != 0x10cdc40c) {
LAB_0375f8dc:
      if (((((((((DAT_05ac0a90 == iVar1 || DAT_05ac0aa0 == iVar1) || DAT_05ac0ab0 == iVar1) ||
               DAT_05ac0ac0 == iVar1) || DAT_05ac0ad0 == iVar1) || DAT_05ac0ae0 == iVar1) ||
            DAT_05ac0af0 == iVar1) || DAT_05ac0b00 == iVar1) || DAT_05ac0b10 == iVar1) ||
          DAT_05ac0b20 == iVar1) {
        return 300;
      }
      return 0;
    }
    lVar2 = 3;
  }
  return (&DAT_04198fd4)[lVar2 * 3];
}

