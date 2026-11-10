
undefined8 FUN_0016e69c(long param_1,long param_2,long param_3)

{
  bool bVar1;
  undefined8 uVar2;
  uint uVar3;
  undefined4 *puVar4;
  uint *puVar5;
  long lVar6;
  uint uVar7;
  uint uVar8;
  long local_50;
  uint local_48;
  undefined4 uStack_44;
  
  if (param_3 == 0) {
    return 0;
  }
  uVar3 = 0xffffffff;
  bVar1 = false;
  uVar8 = 0;
  puVar5 = (uint *)(param_2 + 4);
  uVar7 = 0xffffffff;
  lVar6 = param_3;
  do {
    if (puVar5[-1] == 4) {
      uVar7 = *puVar5;
    }
    else if (puVar5[-1] == 1) {
      uVar8 = *puVar5;
      bVar1 = true;
      if (uVar8 <= uVar3) {
        uVar3 = uVar8;
      }
    }
    puVar5 = puVar5 + 2;
    lVar6 = lVar6 + -1;
  } while (lVar6 != 0);
  if (bVar1) {
    if ((uVar3 < uVar8) && (uVar2 = FUN_00168df4(param_1 + 0x6e8,uVar3), (int)uVar2 != 0)) {
      return uVar2;
    }
    uVar2 = FUN_00168df4(param_1 + 0x6e8,uVar8);
    if ((int)uVar2 != 0) {
      return uVar2;
    }
  }
  if (uVar7 == 0xffffffff) {
    if (param_3 == 0) {
      return 0;
    }
  }
  else {
    uStack_44 = *(undefined4 *)(param_1 + 0x98c);
    local_50 = param_1;
    local_48 = uVar7;
    uVar2 = FUN_0017251c(param_1,FUN_00172200,&local_50);
    if ((int)uVar2 != 0) {
      return uVar2;
    }
    if (param_3 == 0) {
      return uVar2;
    }
  }
  puVar4 = (undefined4 *)(param_2 + 4);
  do {
    switch(puVar4[-1]) {
    case 1:
      *(undefined4 *)(param_1 + 0x980) = *puVar4;
      break;
    case 2:
      *(undefined4 *)(param_1 + 0x984) = *puVar4;
      break;
    case 3:
      *(undefined4 *)(param_1 + 0x988) = *puVar4;
      break;
    case 4:
      *(undefined4 *)(param_1 + 0x98c) = *puVar4;
      break;
    case 5:
      *(undefined4 *)(param_1 + 0x990) = *puVar4;
      break;
    case 6:
      *(undefined4 *)(param_1 + 0x994) = *puVar4;
      break;
    case 8:
      *(undefined4 *)(param_1 + 0x998) = *puVar4;
    }
    puVar4 = puVar4 + 2;
    param_3 = param_3 + -1;
  } while (param_3 != 0);
  return 0;
}

