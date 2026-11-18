
undefined8 FUN_03782ad0(undefined4 *param_1)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long lVar4;
  
  lVar4 = *(long *)PTR_DAT_04bb2720;
  if (lVar4 == 0) {
    puVar2 = &DAT_055c04a0;
  }
  else {
    puVar2 = &DAT_055c04a0;
    if (*(long *)(lVar4 + 0x330) != 0) {
      puVar2 = (undefined8 *)
               (**(code **)(*DAT_05aed668 + 0x18))(DAT_05aed668,*(undefined4 *)(lVar4 + 0x338));
      iVar1 = FUN_006bd550(*puVar2,0);
      puVar2 = (undefined8 *)PTR_DAT_04bc3a80;
      if (iVar1 != 0x758f7eaf) {
        puVar2 = &DAT_055c04a0;
      }
    }
  }
  if (param_1 == (undefined4 *)0x0) {
LAB_03782c60:
    uVar3 = 0;
  }
  else {
    iVar1 = *(int *)(puVar2 + 7);
    if (DAT_05ac0a90 == iVar1) {
      lVar4 = 0;
    }
    else if (DAT_05ac0aa0 == iVar1) {
      lVar4 = 1;
    }
    else if (DAT_05ac0ab0 == iVar1) {
      lVar4 = 2;
    }
    else if (DAT_05ac0ac0 == iVar1) {
      lVar4 = 3;
    }
    else if (DAT_05ac0ad0 == iVar1) {
      lVar4 = 4;
    }
    else if (DAT_05ac0ae0 == iVar1) {
      lVar4 = 5;
    }
    else if (DAT_05ac0af0 == iVar1) {
      lVar4 = 6;
    }
    else if (DAT_05ac0b00 == iVar1) {
      lVar4 = 7;
    }
    else if (DAT_05ac0b10 == iVar1) {
      lVar4 = 8;
    }
    else {
      if (DAT_05ac0b20 != iVar1) goto LAB_03782c60;
      lVar4 = 9;
    }
    uVar3 = 1;
    *param_1 = (&DAT_05ac0a9c)[lVar4 * 4];
  }
  return uVar3;
}

