
void FUN_02e54918(long param_1)

{
  byte bVar1;
  
  if (*(long *)(param_1 + 0x218) != 0) {
    bVar1 = *(byte *)(param_1 + 0x1f8);
    if (7 < bVar1) {
      bVar1 = 0xff;
    }
    *(byte *)(*(long *)(param_1 + 0x218) + 0x1f8) = bVar1;
    FUN_038694bc(param_1,*(undefined8 *)(param_1 + 0x218));
  }
  FUN_03d5c660(*(undefined8 *)(param_1 + 0x210),0);
  return;
}

