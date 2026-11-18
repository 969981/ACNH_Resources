
void FUN_03610e30(long param_1)

{
  byte bVar1;
  
  if (-1 < *(char *)(param_1 + 0x4fa)) {
    return;
  }
  if (1 < *(int *)(param_1 + 0x410)) {
    if (*(int *)(param_1 + 0x40c) != 0) {
      FUN_03611480(param_1);
    }
    FUN_036110c0(param_1 + 0x418);
    FUN_03611308(param_1 + 0x450);
    bVar1 = *(byte *)(param_1 + 0x498);
    if ((bVar1 & 1) == 0) {
      FUN_036094bc(param_1 + 0x488);
      bVar1 = *(byte *)(param_1 + 0x498);
    }
    *(byte *)(param_1 + 0x498) = bVar1 + 1 & 7;
    FUN_03609a3c(param_1 + 0x4c8);
    *(int *)(param_1 + 0x410) = *(int *)(param_1 + 0x410) + -2;
  }
  return;
}

