
void FUN_03fe6c00(long param_1,byte param_2)

{
  undefined2 *puVar1;
  undefined2 uVar2;
  long lVar3;
  
  if (*(byte *)(param_1 + 0x12000) != (param_2 & 1)) {
    *(byte *)(param_1 + 0x12000) = param_2 & 1;
    uVar2 = 0x600;
    if ((param_2 & 1) == 0) {
      uVar2 = 0x800;
    }
    lVar3 = 0;
    do {
      puVar1 = (undefined2 *)(param_1 + 0x11018 + lVar3);
      lVar3 = lVar3 + 0x20;
      puVar1[-4] = uVar2;
      puVar1[-3] = uVar2;
      puVar1[-2] = uVar2;
      puVar1[-1] = uVar2;
      *puVar1 = uVar2;
      puVar1[1] = uVar2;
      puVar1[2] = uVar2;
      puVar1[3] = uVar2;
    } while (lVar3 != 0x800);
    lVar3 = 0;
    do {
      puVar1 = (undefined2 *)(param_1 + 0x11810 + lVar3);
      lVar3 = lVar3 + 0x20;
      puVar1[-8] = uVar2;
      puVar1[-7] = uVar2;
      puVar1[-6] = uVar2;
      puVar1[-5] = uVar2;
      puVar1[-4] = uVar2;
      puVar1[-3] = uVar2;
      puVar1[-2] = uVar2;
      puVar1[-1] = uVar2;
      *puVar1 = uVar2;
      puVar1[1] = uVar2;
      puVar1[2] = uVar2;
      puVar1[3] = uVar2;
      puVar1[4] = uVar2;
      puVar1[5] = uVar2;
      puVar1[6] = uVar2;
      puVar1[7] = uVar2;
    } while (lVar3 != 0x800);
  }
  return;
}

