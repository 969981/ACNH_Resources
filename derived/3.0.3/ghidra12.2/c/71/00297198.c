
void FUN_00297198(int *param_1,long param_2,undefined8 *param_3)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined4 local_40;
  ErrorResultVariant aEStack_3c [12];
  undefined4 local_24;
  
  if ((*(char *)(param_2 + 0x274) != '\0') && (uVar2 = FUN_0026c5c8(DAT_04c603c8), (uVar2 & 1) != 0)
     ) {
    lVar1 = 0;
    if (*(char *)(param_2 + 0x229) != '\0') {
      lVar1 = param_2 + 8;
    }
    FUN_0026a4a4(param_1,DAT_04c603c8,lVar1,*(undefined1 *)(param_2 + 0x228));
    if (*param_1 != 0) {
      return;
    }
  }
  *(undefined8 *)(param_2 + 0x22c) = *param_3;
  *(undefined4 *)(param_2 + 0x234) = *(undefined4 *)(param_3 + 1);
  memset((void *)(param_2 + 0x254),0,0x20);
  if ((void *)param_3[2] != (void *)0x0) {
    memcpy((void *)(param_2 + 0x254),(void *)param_3[2],0x20);
  }
  lVar1 = DAT_04c61168;
  uVar3 = FUN_0029c7d8(DAT_04c60f48);
  *(undefined8 *)(lVar1 + 200) = uVar3;
  *(undefined1 *)(param_2 + 0x275) = 1;
  local_40 = 0;
  local_24 = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_3c,(Result *)&local_24);
  FUN_002296c4(param_1,&local_40);
  return;
}

