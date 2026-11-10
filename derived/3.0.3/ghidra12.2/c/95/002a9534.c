
void FUN_002a9534(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x960);
  if (lVar1 != 0) {
    FUN_00285e00(lVar1);
    FUN_00285dc0(lVar1);
    *(undefined8 *)(param_1 + 0x960) = 0;
  }
  FUN_00229238(*(undefined8 *)(param_1 + 0x950));
  lVar1 = *(long *)(param_1 + 0x958);
  if (lVar1 != 0) {
    FUN_00285e00(lVar1);
    FUN_00285dc0(lVar1);
    *(undefined8 *)(param_1 + 0x958) = 0;
  }
  lVar1 = *(long *)(param_1 + 0x950);
  if (lVar1 != 0) {
    FUN_002291b0(lVar1);
    FUN_00285dc0(lVar1);
    *(undefined8 *)(param_1 + 0x950) = 0;
  }
  *(undefined8 *)(param_1 + 0x28) = 0;
  FUN_002a8828(param_1);
  return;
}

