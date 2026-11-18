
bool FUN_03688e2c(int param_1)

{
  bool bVar1;
  int iVar2;
  undefined8 *puVar3;
  
  if ((DAT_05ab8198 == (ushort *)0x0) || ((*DAT_05ab8198 & 1) == 0)) {
    if (DAT_05aed670 == 0) {
      puVar3 = &DAT_055c04a0;
    }
    else {
      puVar3 = &DAT_055c04a0;
      if (*(long *)(DAT_05aed670 + 0x330) != 0) {
        puVar3 = (undefined8 *)
                 (**(code **)(*DAT_05aed668 + 0x18))
                           (DAT_05aed668,*(undefined4 *)(DAT_05aed670 + 0x338));
        iVar2 = FUN_006bd550(*puVar3,0);
        puVar3 = (undefined8 *)PTR_DAT_04bc3a80;
        if (iVar2 != 0x758f7eaf) {
          puVar3 = &DAT_055c04a0;
        }
      }
    }
    iVar2 = *(int *)(puVar3 + 7);
    if ((param_1 == 1) ||
       (((bVar1 = true, iVar2 != -0x7975b8e8 && (iVar2 != -0x3e092032)) && (iVar2 != -0x17df00c3))))
    {
      bVar1 = ((((((((DAT_05ac0a90 == iVar2 || DAT_05ac0aa0 == iVar2) || DAT_05ac0ab0 == iVar2) ||
                   DAT_05ac0ac0 == iVar2) || DAT_05ac0ad0 == iVar2) || DAT_05ac0ae0 == iVar2) ||
                DAT_05ac0af0 == iVar2) || DAT_05ac0b00 == iVar2) || DAT_05ac0b10 == iVar2) ||
              DAT_05ac0b20 == iVar2;
    }
  }
  else {
    bVar1 = false;
  }
  return bVar1;
}

