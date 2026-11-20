
undefined1  [16] FUN_03ee85bc(long param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  undefined4 *puVar5;
  undefined1 auVar6 [16];
  
  lVar3 = *(long *)(param_1 + 0x10);
  uVar1 = param_2;
  if (*(uint *)(lVar3 + 0x178) <= param_2) {
    uVar1 = 0;
  }
  lVar4 = *(long *)(lVar3 + 0x180) + (ulong)uVar1 * 0xa0;
  uVar1 = *(uint *)(lVar4 + 0x48);
  switch(*(undefined4 *)(lVar4 + 0x68)) {
  case 0:
    uVar2 = uVar1;
    if (*(uint *)(param_1 + 0x50) <= uVar1) {
      uVar2 = 0;
    }
    if ((*(byte *)(*(long *)(param_1 + 0x58) + (long)(int)uVar2) & 1) == 0) {
      FUN_03ee87f4(param_1,uVar1);
      lVar3 = *(long *)(param_1 + 0x10);
    }
    if (*(uint *)(param_1 + 0x40) <= uVar1) {
      uVar1 = 0;
    }
    puVar5 = (undefined4 *)(*(long *)(param_1 + 0x48) + (long)(int)uVar1 * 0x1c + 8);
    break;
  case 1:
    uVar2 = uVar1;
    if (*(uint *)(param_1 + 0x50) <= uVar1) {
      uVar2 = 0;
    }
    if ((*(byte *)(*(long *)(param_1 + 0x58) + (long)(int)uVar2) & 1) == 0) {
      FUN_03ee87f4(param_1,uVar1);
      lVar3 = *(long *)(param_1 + 0x10);
    }
    if (*(uint *)(param_1 + 0x40) <= uVar1) {
      uVar1 = 0;
    }
    puVar5 = (undefined4 *)(*(long *)(param_1 + 0x48) + (long)(int)uVar1 * 0x1c);
    break;
  case 2:
    uVar2 = uVar1;
    if (*(uint *)(param_1 + 0x50) <= uVar1) {
      uVar2 = 0;
    }
    if ((*(byte *)(*(long *)(param_1 + 0x58) + (long)(int)uVar2) & 1) == 0) {
      FUN_03ee87f4(param_1,uVar1);
      lVar3 = *(long *)(param_1 + 0x10);
    }
    if (*(uint *)(param_1 + 0x40) <= uVar1) {
      uVar1 = 0;
    }
    puVar5 = (undefined4 *)(*(long *)(param_1 + 0x48) + (long)(int)uVar1 * 0x1c + 4);
    break;
  case 3:
    uVar2 = uVar1;
    if (*(uint *)(param_1 + 0x50) <= uVar1) {
      uVar2 = 0;
    }
    if ((*(byte *)(*(long *)(param_1 + 0x58) + (long)(int)uVar2) >> 1 & 1) == 0) {
      FUN_03ee8dd0(param_1,uVar1);
      lVar3 = *(long *)(param_1 + 0x10);
    }
    if (*(uint *)(param_1 + 0x40) <= uVar1) {
      uVar1 = 0;
    }
    puVar5 = (undefined4 *)(*(long *)(param_1 + 0x48) + (long)(int)uVar1 * 0x1c + 0xc);
    break;
  case 4:
    uVar2 = uVar1;
    if (*(uint *)(param_1 + 0x50) <= uVar1) {
      uVar2 = 0;
    }
    if ((*(byte *)(*(long *)(param_1 + 0x58) + (long)(int)uVar2) >> 1 & 1) == 0) {
      FUN_03ee8dd0(param_1,uVar1);
      lVar3 = *(long *)(param_1 + 0x10);
    }
    if (*(uint *)(param_1 + 0x40) <= uVar1) {
      uVar1 = 0;
    }
    puVar5 = (undefined4 *)(*(long *)(param_1 + 0x48) + (long)(int)uVar1 * 0x1c + 0x10);
    break;
  case 5:
    uVar2 = uVar1;
    if (*(uint *)(param_1 + 0x50) <= uVar1) {
      uVar2 = 0;
    }
    if ((*(byte *)(*(long *)(param_1 + 0x58) + (long)(int)uVar2) >> 1 & 1) == 0) {
      FUN_03ee8dd0(param_1,uVar1);
      lVar3 = *(long *)(param_1 + 0x10);
    }
    if (*(uint *)(param_1 + 0x40) <= uVar1) {
      uVar1 = 0;
    }
    puVar5 = (undefined4 *)(*(long *)(param_1 + 0x48) + (long)(int)uVar1 * 0x1c + 0x14);
    break;
  default:
    return ZEXT816(0);
  }
  auVar6 = FUN_03eec430(*puVar5,lVar3,param_2);
  return auVar6;
}

