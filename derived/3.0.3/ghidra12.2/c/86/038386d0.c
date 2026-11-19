
void FUN_038386d0(byte *param_1)

{
  byte bVar1;
  long lVar2;
  long lVar3;
  
  bVar1 = *param_1;
  if (((bVar1 & 1) == 0) && ((bVar1 & 3) == 2 && *(int *)(param_1 + 0x18) == 2)) {
    lVar2 = *(long *)(param_1 + 8);
    if (lVar2 != 0) {
      if (*(int *)(lVar2 + 0xc) == 4) {
        (**(code **)(**(long **)(lVar2 + 0x18) + 0x198))();
        *(undefined4 *)(lVar2 + 0xc) = 5;
      }
      if (*(int *)(lVar2 + 0x1498) == 4) {
        lVar3 = *(long *)(lVar2 + 0x14a8);
        if ((lVar3 != 0) && ((*(byte *)(lVar3 + 0xd8) >> 1 & 1) != 0)) {
          FUN_03bf2370(lVar3 + 0x80);
          *(byte *)(lVar3 + 0xd8) = *(byte *)(lVar3 + 0xd8) & 0xfd;
        }
        *(undefined4 *)(lVar2 + 0x1498) = 5;
      }
      if (*(int *)(lVar2 + 0x1540) == 4) {
        lVar3 = *(long *)(lVar2 + 0x1550);
        if ((lVar3 != 0) && ((*(byte *)(lVar3 + 0xd8) >> 1 & 1) != 0)) {
          FUN_03bf2370(lVar3 + 0x80);
          *(byte *)(lVar3 + 0xd8) = *(byte *)(lVar3 + 0xd8) & 0xfd;
        }
        *(undefined4 *)(lVar2 + 0x1540) = 5;
      }
      bVar1 = *param_1;
    }
    *param_1 = bVar1 | 1;
  }
  return;
}

