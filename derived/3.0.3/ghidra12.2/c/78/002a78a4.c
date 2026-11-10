
void FUN_002a78a4(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0xe8);
  if (lVar1 != 0) {
    FUN_00285e00(lVar1);
    FUN_00285dc0(lVar1);
    *(undefined8 *)(param_1 + 0xe8) = 0;
  }
  FUN_0022c8f4(*(undefined8 *)(param_1 + 0xd8));
  lVar1 = *(long *)(param_1 + 0xe0);
  if (lVar1 != 0) {
    FUN_00285e00(lVar1);
    FUN_00285dc0(lVar1);
    *(undefined8 *)(param_1 + 0xe0) = 0;
  }
  lVar1 = *(long *)(param_1 + 0xd8);
  if (lVar1 != 0) {
    FUN_0022c86c(lVar1);
    FUN_00285dc0(lVar1);
    *(undefined8 *)(param_1 + 0xd8) = 0;
  }
  *(undefined8 *)(param_1 + 0x30) = 0;
  FUN_002a8828(param_1);
  return;
}

