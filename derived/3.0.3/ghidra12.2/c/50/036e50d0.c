
long FUN_036e50d0(long param_1)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  undefined8 *puVar4;
  
  lVar3 = *(long *)PTR_DAT_04bb2720;
  if (lVar3 == 0) {
    puVar4 = &DAT_055c04a0;
  }
  else {
    puVar4 = &DAT_055c04a0;
    if (*(long *)(lVar3 + 0x330) != 0) {
      puVar4 = (undefined8 *)
               (**(code **)(*DAT_05aed668 + 0x18))(DAT_05aed668,*(undefined4 *)(lVar3 + 0x338));
      iVar2 = FUN_006bd550(*puVar4,0);
      puVar4 = (undefined8 *)PTR_DAT_04bc3a80;
      if (iVar2 != 0x758f7eaf) {
        puVar4 = &DAT_055c04a0;
      }
    }
  }
  iVar2 = *(int *)(puVar4 + 7);
  if (DAT_05ac0a90 == iVar2) {
    lVar3 = 0;
  }
  else if (DAT_05ac0aa0 == iVar2) {
    lVar3 = 1;
  }
  else if (DAT_05ac0ab0 == iVar2) {
    lVar3 = 2;
  }
  else if (DAT_05ac0ac0 == iVar2) {
    lVar3 = 3;
  }
  else if (DAT_05ac0ad0 == iVar2) {
    lVar3 = 4;
  }
  else if (DAT_05ac0ae0 == iVar2) {
    lVar3 = 5;
  }
  else if (DAT_05ac0af0 == iVar2) {
    lVar3 = 6;
  }
  else if (DAT_05ac0b00 == iVar2) {
    lVar3 = 7;
  }
  else if (DAT_05ac0b10 == iVar2) {
    lVar3 = 8;
  }
  else {
    if (DAT_05ac0b20 != iVar2) goto LAB_036e527c;
    lVar3 = 9;
  }
  uVar1 = (&DAT_05ac0a98)[lVar3 * 4];
  if ((int)uVar1 < (int)*(uint *)(param_1 + 0xe0)) {
    if (uVar1 < *(uint *)(param_1 + 0xe0)) {
      lVar3 = *(long *)(*(long *)(param_1 + 0xe8) + (long)(int)uVar1 * 8);
    }
    else {
      lVar3 = 0;
    }
    return lVar3 + 0x10;
  }
LAB_036e527c:
  return param_1 + 0x310;
}

