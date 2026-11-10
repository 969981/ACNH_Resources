
void FUN_001fbc74(long param_1,int param_2,undefined8 param_3,uint param_4)

{
  if (param_2 == 3) {
    if ((param_4 & 1) != 0) {
      if (*(undefined1 **)(param_1 + 0xa8) != (undefined1 *)0x0) {
        **(undefined1 **)(param_1 + 0xa8) = 0;
        *(undefined8 *)(param_1 + 0xa8) = 0;
      }
      if (*(long *)(param_1 + 0xb0) != 0) {
        FUN_0018ab44(*(long *)(param_1 + 0xb0),param_3);
        *(undefined8 *)(param_1 + 0xb0) = 0;
      }
    }
  }
  else if (param_2 == 0) {
    *(undefined8 *)(param_1 + 0x98) = *(undefined8 *)(param_1 + 0x90);
    return;
  }
  return;
}

