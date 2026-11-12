
void FUN_00974bc8(long param_1,long param_2,long param_3)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  byte bVar4;
  
  *(undefined1 *)(param_3 + 8) = 0;
  uVar2 = *(uint *)(param_2 + 8);
  if ((((-1 < (int)uVar2) && (uVar3 = *(uint *)(param_2 + 0xc), -1 < (int)uVar3)) &&
      (uVar2 < *(uint *)(param_1 + 0x38))) && (uVar3 < *(uint *)(param_1 + 0x3c))) {
    uVar2 = uVar2 + *(uint *)(param_1 + 0x38) * uVar3;
    puVar1 = (uint *)(*(long *)(param_1 + 0x70) + (long)(int)uVar2 * 4);
    if (*(uint *)(param_1 + 0x68) <= uVar2) {
      puVar1 = (uint *)0x0;
    }
    if ((*puVar1 >> 8 & 1) == 0) {
      bVar4 = 0;
    }
    else {
      bVar4 = 4;
      *(undefined1 *)(param_3 + 8) = 4;
    }
    if ((*puVar1 >> 9 & 1) != 0) {
      bVar4 = bVar4 | 8;
      *(byte *)(param_3 + 8) = bVar4;
    }
    if ((*puVar1 >> 10 & 1) != 0) {
      bVar4 = bVar4 | 1;
      *(byte *)(param_3 + 8) = bVar4;
    }
    if ((*puVar1 >> 0xb & 1) != 0) {
      bVar4 = bVar4 | 2;
      *(byte *)(param_3 + 8) = bVar4;
    }
    if (((*puVar1 >> 0xc & 1) != 0) && ((*puVar1 >> 6 & 1) == 0)) {
      bVar4 = bVar4 | 0x10;
      *(byte *)(param_3 + 8) = bVar4;
    }
    if ((*puVar1 >> 0xd & 1) != 0) {
      bVar4 = bVar4 | 0x20;
      *(byte *)(param_3 + 8) = bVar4;
    }
    if ((*puVar1 >> 0xe & 1) != 0) {
      *(byte *)(param_3 + 8) = bVar4 | 0x40;
    }
  }
  return;
}

