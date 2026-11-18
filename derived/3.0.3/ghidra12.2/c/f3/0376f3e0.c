
undefined4 FUN_0376f3e0(void)

{
  int iVar1;
  uint uVar2;
  ulong uVar3;
  long lVar4;
  undefined4 uVar5;
  undefined8 *puVar6;
  ulong local_30;
  undefined4 local_28;
  
  if (DAT_05aed670 == 0) {
    puVar6 = &DAT_055c04a0;
  }
  else {
    puVar6 = &DAT_055c04a0;
    if (*(long *)(DAT_05aed670 + 0x330) != 0) {
      puVar6 = (undefined8 *)
               (**(code **)(*DAT_05aed668 + 0x18))
                         (DAT_05aed668,*(undefined4 *)(DAT_05aed670 + 0x338));
      iVar1 = FUN_006bd550(*puVar6,0);
      puVar6 = (undefined8 *)PTR_DAT_04bc3a80;
      if (iVar1 != 0x758f7eaf) {
        puVar6 = &DAT_055c04a0;
      }
    }
  }
  iVar1 = *(int *)(puVar6 + 7);
  if (DAT_05ac0a90 == iVar1) {
    lVar4 = 0;
    uVar5 = DAT_05ac0a94;
  }
  else if (DAT_05ac0aa0 == iVar1) {
    lVar4 = 1;
    uVar5 = DAT_05ac0aa4;
  }
  else {
    if (DAT_05ac0ab0 == iVar1) {
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
      if (DAT_05ac0b20 != iVar1) {
        return 0;
      }
      lVar4 = 9;
    }
    uVar5 = (&DAT_05ac0a94)[lVar4 * 4];
    if (DAT_05ac0ab0 == iVar1) {
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
      if (DAT_05ac0b20 != iVar1) {
        return 0;
      }
      lVar4 = 9;
    }
  }
  local_28 = 0;
  local_30 = 0;
  switch(uVar5) {
  case 0:
    uVar2 = 1;
    goto LAB_0376f6a8;
  case 1:
    local_30 = 0x300000002;
    local_28 = 4;
    break;
  case 2:
    local_30 = 0x600000005;
    local_28 = 10;
    break;
  case 3:
    local_30 = 0x900000007;
    break;
  case 4:
    uVar2 = 8;
LAB_0376f6a8:
    local_30 = (ulong)uVar2;
  }
  uVar3 = (ulong)(uint)(&DAT_05ac0a98)[lVar4 * 4];
  if (2 < (uint)(&DAT_05ac0a98)[lVar4 * 4]) {
    uVar3 = 0;
  }
  return *(undefined4 *)((long)&local_30 + uVar3 * 4);
}

