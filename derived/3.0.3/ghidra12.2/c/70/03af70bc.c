
void FUN_03af70bc(long param_1,undefined8 param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  byte bVar4;
  uint *puVar5;
  uint *puVar6;
  long lVar7;
  
  lVar7 = *(long *)(param_1 + 0x10);
  uVar1 = param_3;
  if (*(uint *)(param_1 + 8) <= param_3) {
    uVar1 = 0;
  }
  puVar5 = (uint *)(lVar7 + (long)(int)uVar1 * 0x23c0);
  if (((byte)*puVar5 >> 5 & 1) != 0) {
    puVar6 = (uint *)(lVar7 + (long)(int)uVar1 * 0x23c0 + 4);
    uVar2 = *puVar6;
    uVar3 = uVar2;
    if ((uVar2 >> 0xd & 1) != 0) {
      FUN_03af7210(param_1,param_2,param_3,uVar2,*(uint *)(param_1 + 0x18) >> 0x12 & 1,0);
      uVar3 = *puVar6;
      if ((uVar3 >> 0x10 & 1) != 0) {
        FUN_03af7210(param_1,param_2,param_3,uVar3,*(uint *)(param_1 + 0x18) >> 0x12 & 1,1);
        uVar3 = *puVar6;
      }
    }
    if ((uVar3 & 1) != 0) {
      if ((uVar3 >> 0xd & 1) == 0) {
        bVar4 = 0;
      }
      else {
        bVar4 = *(byte *)(lVar7 + (long)(int)uVar1 * 0x23c0 + 9) >> 3 & 1;
      }
      FUN_03af7d80(param_1,param_2,param_3,*(undefined4 *)(param_1 + 0x3c),bVar4);
    }
    if ((uVar2 >> 0xd & 1) == 0) {
      FUN_03af7210(param_1,param_2,param_3,*puVar6,*(uint *)(param_1 + 0x18) >> 0x12 & 1,0);
      if ((*puVar6 >> 0x10 & 1) != 0) {
        FUN_03af7210(param_1,param_2,param_3,*puVar6,*(uint *)(param_1 + 0x18) >> 0x12 & 1,1);
      }
    }
    *puVar5 = *puVar5 | 8;
  }
  return;
}

