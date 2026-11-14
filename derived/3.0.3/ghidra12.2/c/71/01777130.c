
void FUN_01777130(long *param_1,long param_2,ulong param_3,uint param_4)

{
  undefined8 *puVar1;
  long lVar2;
  
  if (*param_1 != 0) {
    FUN_039a9540(*(undefined8 *)(param_2 + 0x1150),*param_1,&DAT_0528ca40);
  }
  if (param_1[3] != 0) {
    FUN_039a9540(*(undefined8 *)(param_2 + 0x1150),param_1[3],&DAT_0528ca50);
  }
  if (param_1[4] != 0) {
    FUN_039a9540(*(undefined8 *)(param_2 + 0x1150),param_1[4],&DAT_0528ca60);
  }
  if ((param_3 & 1) != 0) {
    lVar2 = param_1[6];
    if ((lVar2 != 0) || (lVar2 = *param_1, lVar2 != 0)) {
      FUN_039a9540(*(undefined8 *)(param_2 + 0x1150),lVar2,&DAT_0528ca90);
    }
    lVar2 = param_1[7];
    if ((lVar2 != 0) || (lVar2 = param_1[3], lVar2 != 0)) {
      FUN_039a9540(*(undefined8 *)(param_2 + 0x1150),lVar2,&DAT_0528caa0);
    }
    lVar2 = param_1[8];
    if ((lVar2 != 0) || (lVar2 = param_1[4], lVar2 != 0)) {
      FUN_039a9540(*(undefined8 *)(param_2 + 0x1150),lVar2,&DAT_0528cab0);
    }
  }
  if (param_1[0x12] == 0) {
    return;
  }
  puVar1 = &DAT_0528c990;
  if ((param_4 & 1) == 0) {
    puVar1 = &DAT_0528ca80;
  }
  FUN_039a9540(*(undefined8 *)(param_2 + 0x1150),param_1[0x12],puVar1);
  return;
}

