
bool FUN_0375f6e0(void)

{
  int iVar1;
  undefined8 *puVar2;
  
  if (DAT_05aed670 == 0) {
    puVar2 = &DAT_055c04a0;
  }
  else {
    puVar2 = &DAT_055c04a0;
    if (*(long *)(DAT_05aed670 + 0x330) != 0) {
      puVar2 = (undefined8 *)
               (**(code **)(*DAT_05aed668 + 0x18))
                         (DAT_05aed668,*(undefined4 *)(DAT_05aed670 + 0x338));
      iVar1 = FUN_006bd550(*puVar2,0);
      puVar2 = (undefined8 *)PTR_DAT_04bc3a80;
      if (iVar1 != 0x758f7eaf) {
        puVar2 = &DAT_055c04a0;
      }
    }
  }
  iVar1 = *(int *)(puVar2 + 7);
  return ((((((((((((iVar1 == -0x17df00c3 || iVar1 == -0x7975b8e8) || iVar1 == -0x3e092032) ||
                  iVar1 == 0x10cdc40c) || DAT_05ac0a90 == iVar1) || DAT_05ac0aa0 == iVar1) ||
               DAT_05ac0ab0 == iVar1) || DAT_05ac0ac0 == iVar1) || DAT_05ac0ad0 == iVar1) ||
            DAT_05ac0ae0 == iVar1) || DAT_05ac0af0 == iVar1) || DAT_05ac0b00 == iVar1) ||
         DAT_05ac0b10 == iVar1) || DAT_05ac0b20 == iVar1;
}

