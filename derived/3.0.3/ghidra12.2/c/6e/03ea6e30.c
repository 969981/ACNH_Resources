
void FUN_03ea6e30(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  
  if (*(long *)(param_2 + 8) != param_2) {
    lVar1 = (long)*(int *)(param_2 + 0x14);
    lVar2 = *(long *)(param_2 + 8) - lVar1;
    do {
      if (*(int *)(*(long *)(lVar2 + 0x38) + 0x60) == 2) {
        FUN_03bf4cc4(*(undefined4 *)(lVar2 + 0x40),*(undefined8 *)(param_1 + 0x30),
                     *(undefined4 *)(lVar2 + 0x18));
        FUN_03bf4cc4(*(undefined4 *)(lVar2 + 0x40),*(undefined8 *)(param_1 + 0x38),
                     *(undefined4 *)(lVar2 + 0x18));
      }
      else {
        FUN_03bf4bac(*(undefined8 *)(param_1 + 0x30),*(undefined4 *)(lVar2 + 0x18),
                     *(undefined4 *)(lVar2 + 0x40));
        FUN_03bf4bac(*(undefined8 *)(param_1 + 0x38),*(undefined4 *)(lVar2 + 0x18),
                     *(undefined4 *)(lVar2 + 0x40));
      }
      lVar2 = *(long *)(lVar2 + lVar1 + 8) - lVar1;
    } while (lVar2 != param_2 - lVar1);
  }
  return;
}

