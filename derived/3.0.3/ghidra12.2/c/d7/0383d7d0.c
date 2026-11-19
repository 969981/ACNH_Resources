
void FUN_0383d7d0(float param_1,long param_2)

{
  if ((0.0 <= param_1) && (32400.0 <= param_1)) {
    FUN_03f45838(param_2 + 0x80);
  }
  if (*(int *)(param_2 + 0x88) == 3) {
    *(undefined4 *)(param_2 + 0x10) = 2;
  }
  else if (*(int *)(param_2 + 0x88) == 2) {
    *(undefined4 *)(param_2 + 0x10) = 4;
    *(byte *)(param_2 + 8) = *(byte *)(param_2 + 8) | 2;
  }
  return;
}

