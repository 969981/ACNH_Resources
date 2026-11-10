
void FUN_0030c080(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  
  FUN_002a3854();
  lVar2 = 0;
  *(undefined4 *)(param_1 + 0x10) = 2;
  do {
    puVar1 = (undefined8 *)(param_1 + 0x18 + lVar2);
    lVar2 = lVar2 + 0x20;
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar1[3] = 0;
  } while (lVar2 != 0x960);
  *(undefined8 *)(param_1 + 0x978) = 0x1010000000000;
  return;
}

