
ushort FUN_03772f40(void)

{
  ushort uVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  undefined8 *puVar5;
  
  if (DAT_05aed670 == 0) {
    puVar5 = &DAT_055c04a0;
  }
  else {
    puVar5 = &DAT_055c04a0;
    if (*(long *)(DAT_05aed670 + 0x330) != 0) {
      puVar5 = (undefined8 *)
               (**(code **)(*DAT_05aed668 + 0x18))
                         (DAT_05aed668,*(undefined4 *)(DAT_05aed670 + 0x338));
      iVar2 = FUN_006bd550(*puVar5,0);
      puVar5 = (undefined8 *)PTR_DAT_04bc3a80;
      if (iVar2 != 0x758f7eaf) {
        puVar5 = &DAT_055c04a0;
      }
    }
  }
  iVar2 = *(int *)(puVar5 + 7);
  if (DAT_05ac0a90 == iVar2) {
    lVar4 = 0;
  }
  else if (DAT_05ac0aa0 == iVar2) {
    lVar4 = 1;
  }
  else if (DAT_05ac0ab0 == iVar2) {
    lVar4 = 2;
  }
  else if (DAT_05ac0ac0 == iVar2) {
    lVar4 = 3;
  }
  else if (DAT_05ac0ad0 == iVar2) {
    lVar4 = 4;
  }
  else if (DAT_05ac0ae0 == iVar2) {
    lVar4 = 5;
  }
  else if (DAT_05ac0af0 == iVar2) {
    lVar4 = 6;
  }
  else if (DAT_05ac0b00 == iVar2) {
    lVar4 = 7;
  }
  else if (DAT_05ac0b10 == iVar2) {
    lVar4 = 8;
  }
  else {
    if (DAT_05ac0b20 != iVar2) {
      return 0;
    }
    lVar4 = 9;
  }
  lVar4 = FUN_03776680((&DAT_05ac0a94)[lVar4 * 4]);
  if (lVar4 == 0) {
    return 0;
  }
  if ((*(long **)(lVar4 + 0x28) == (long *)0x0) ||
     (puVar5 = (undefined8 *)**(long **)(lVar4 + 0x28), puVar5 == (undefined8 *)0x0)) {
    return *(ushort *)(*(long *)(lVar4 + 0x10) + *(long *)(lVar4 + 8)) >> 1 & 1;
  }
  uVar3 = (**(code **)*puVar5)();
  uVar1 = *(ushort *)(*(long *)(lVar4 + 0x10) + *(long *)(lVar4 + 8)) >> 1 & 1;
  if ((uVar3 & 1) == 0) {
    return uVar1;
  }
  if (*(long *)(lVar4 + 0x28) == 0) {
    return uVar1;
  }
  puVar5 = *(undefined8 **)(*(long *)(lVar4 + 0x28) + 8);
  if (puVar5 == (undefined8 *)0x0) {
    return uVar1;
  }
  (**(code **)*puVar5)();
  return uVar1;
}

