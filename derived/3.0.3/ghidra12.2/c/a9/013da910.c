
void FUN_013da910(long param_1,undefined4 *param_2)

{
  uint *puVar1;
  uint uVar2;
  long lVar3;
  int iVar4;
  long lVar5;
  undefined4 local_24;
  
  switch(*param_2) {
  case 0:
    local_24 = 1;
    lVar3 = (**(code **)(*(long *)(param_1 + 0x118) + 0x20))(param_1 + 0x118);
    lVar5 = 0;
    iVar4 = 0;
    do {
      puVar1 = (uint *)(lVar3 + lVar5);
      lVar5 = lVar5 + 4;
      uVar2 = *puVar1 - (*puVar1 >> 1 & 0x55555555);
      uVar2 = (uVar2 >> 2 & 0x33333333) + (uVar2 & 0x33333333);
      uVar2 = uVar2 + (uVar2 >> 4) & 0xf0f0f0f;
      uVar2 = uVar2 + (uVar2 >> 8);
      iVar4 = (uVar2 + (uVar2 >> 0x10) & 0x3f) + iVar4;
    } while (lVar5 != 0x754);
    break;
  case 1:
    local_24 = 1;
    lVar3 = (**(code **)(*(long *)(param_1 + 0x118) + 0x20))(param_1 + 0x118);
    lVar5 = 0;
    iVar4 = 0;
    do {
      puVar1 = (uint *)(lVar3 + lVar5);
      lVar5 = lVar5 + 4;
      uVar2 = *puVar1 - (*puVar1 >> 1 & 0x55555555);
      uVar2 = (uVar2 >> 2 & 0x33333333) + (uVar2 & 0x33333333);
      uVar2 = uVar2 + (uVar2 >> 4) & 0xf0f0f0f;
      uVar2 = uVar2 + (uVar2 >> 8);
      iVar4 = (uVar2 + (uVar2 >> 0x10) & 0x3f) + iVar4;
    } while (lVar5 != 0x754);
    break;
  case 2:
    local_24 = 0;
    lVar3 = (**(code **)(*(long *)(param_1 + 0x118) + 0x20))(param_1 + 0x118);
    lVar5 = 0;
    iVar4 = 0;
    do {
      puVar1 = (uint *)(lVar3 + lVar5);
      lVar5 = lVar5 + 4;
      uVar2 = *puVar1 - (*puVar1 >> 1 & 0x55555555);
      uVar2 = (uVar2 >> 2 & 0x33333333) + (uVar2 & 0x33333333);
      uVar2 = uVar2 + (uVar2 >> 4) & 0xf0f0f0f;
      uVar2 = uVar2 + (uVar2 >> 8);
      iVar4 = (uVar2 + (uVar2 >> 0x10) & 0x3f) + iVar4;
    } while (lVar5 != 0x754);
    break;
  case 3:
    local_24 = 0;
    lVar3 = (**(code **)(*(long *)(param_1 + 0x118) + 0x20))(param_1 + 0x118);
    lVar5 = 0;
    iVar4 = 0;
    do {
      puVar1 = (uint *)(lVar3 + lVar5);
      lVar5 = lVar5 + 4;
      uVar2 = *puVar1 - (*puVar1 >> 1 & 0x55555555);
      uVar2 = (uVar2 >> 2 & 0x33333333) + (uVar2 & 0x33333333);
      uVar2 = uVar2 + (uVar2 >> 4) & 0xf0f0f0f;
      uVar2 = uVar2 + (uVar2 >> 8);
      iVar4 = (uVar2 + (uVar2 >> 0x10) & 0x3f) + iVar4;
    } while (lVar5 != 0x754);
    break;
  case 4:
    local_24 = 0;
    lVar3 = (**(code **)(*(long *)(param_1 + 0x118) + 0x20))(param_1 + 0x118);
    lVar5 = 0;
    iVar4 = 0;
    do {
      puVar1 = (uint *)(lVar3 + lVar5);
      lVar5 = lVar5 + 4;
      uVar2 = *puVar1 - (*puVar1 >> 1 & 0x55555555);
      uVar2 = (uVar2 >> 2 & 0x33333333) + (uVar2 & 0x33333333);
      uVar2 = uVar2 + (uVar2 >> 4) & 0xf0f0f0f;
      uVar2 = uVar2 + (uVar2 >> 8);
      iVar4 = (uVar2 + (uVar2 >> 0x10) & 0x3f) + iVar4;
    } while (lVar5 != 0x754);
    break;
  default:
    local_24 = 1;
    lVar3 = (**(code **)(*(long *)(param_1 + 0x118) + 0x20))(param_1 + 0x118);
    lVar5 = 0;
    iVar4 = 0;
    do {
      puVar1 = (uint *)(lVar3 + lVar5);
      lVar5 = lVar5 + 4;
      uVar2 = *puVar1 - (*puVar1 >> 1 & 0x55555555);
      uVar2 = (uVar2 >> 2 & 0x33333333) + (uVar2 & 0x33333333);
      uVar2 = uVar2 + (uVar2 >> 4) & 0xf0f0f0f;
      uVar2 = uVar2 + (uVar2 >> 8);
      iVar4 = (uVar2 + (uVar2 >> 0x10) & 0x3f) + iVar4;
    } while (lVar5 != 0x754);
  }
  if (iVar4 == 0) {
    FUN_013eeec0(*(undefined8 *)PTR_DAT_04bb3d80,param_1 + 0x118,&local_24);
  }
  lVar3 = (**(code **)(*(long *)(param_1 + 0x118) + 0x20))(param_1 + 0x118);
  lVar5 = 0;
  iVar4 = 0;
  do {
    puVar1 = (uint *)(lVar3 + lVar5);
    lVar5 = lVar5 + 4;
    uVar2 = *puVar1 - (*puVar1 >> 1 & 0x55555555);
    uVar2 = (uVar2 >> 2 & 0x33333333) + (uVar2 & 0x33333333);
    uVar2 = uVar2 + (uVar2 >> 4) & 0xf0f0f0f;
    uVar2 = uVar2 + (uVar2 >> 8);
    iVar4 = (uVar2 + (uVar2 >> 0x10) & 0x3f) + iVar4;
  } while (lVar5 != 0x754);
  *(int *)(param_1 + 0x890) = iVar4;
  return;
}

