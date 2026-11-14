
undefined8 * FUN_01702960(long param_1,uint param_2)

{
  long lVar1;
  uint uVar2;
  
  lVar1 = *(long *)(param_1 + 0x1138);
  if (lVar1 == 0) {
    return &DAT_04c931a0;
  }
  uVar2 = 0;
  if (*(long *)(lVar1 + 0x78) != 0) {
    uVar2 = *(uint *)(*(long *)(lVar1 + 0x78) + 0x18);
  }
  if (uVar2 <= param_2) {
    param_2 = 0;
  }
  if (*(uint *)(lVar1 + 0x80) <= param_2) {
    param_2 = 0;
  }
  return (undefined8 *)(*(long *)(lVar1 + 0x88) + (long)(int)param_2 * 0xe8 + 0x60);
}

