
void FUN_01bfff88(undefined8 *param_1)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_DAT_04bb28f8;
  *param_1 = &PTR_FUN_04a3e560;
  lVar2 = *(long *)puVar1;
  FUN_01bf710c(lVar2 + 0xd0,param_1);
  if (*(undefined8 **)(lVar2 + 0xc0) == param_1) {
    *(undefined8 *)(lVar2 + 0xc0) = 0;
  }
  if (*(undefined8 **)(lVar2 + 200) == param_1) {
    *(undefined8 *)(lVar2 + 200) = 0;
  }
  param_1[2] = 0;
  if ((undefined8 *)param_1[3] != (undefined8 *)0x0) {
    *(undefined8 *)param_1[3] = 0;
    param_1[3] = 0;
  }
  *(undefined1 *)((long)param_1 + 0x1ba) = 0;
  FUN_03838610(param_1 + 0x31);
  return;
}

