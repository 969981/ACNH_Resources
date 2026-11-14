
void FUN_01777098(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = param_1[1];
  if (((lVar1 != 0) || (lVar1 = *param_1, lVar1 != 0)) || (lVar1 = param_1[0xd], lVar1 != 0)) {
    FUN_039a9540(*(undefined8 *)(param_2 + 0x1150),lVar1,&DAT_0528c9f0);
  }
  if (param_1[2] != 0) {
    FUN_039a9540(*(undefined8 *)(param_2 + 0x1150),param_1[2],&DAT_0528ca30);
  }
  if (param_1[3] != 0) {
    FUN_039a9540(*(undefined8 *)(param_2 + 0x1150),param_1[3],&DAT_0528ca00);
  }
  if (param_1[4] == 0) {
    return;
  }
  FUN_039a9540(*(undefined8 *)(param_2 + 0x1150),param_1[4],&DAT_0528ca10);
  return;
}

