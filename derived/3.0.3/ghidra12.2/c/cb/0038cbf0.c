
long FUN_0038cbf0(long param_1,uint param_2)

{
  size_t sVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  
  if ((int)param_2 < 1) {
    return 0;
  }
  lVar2 = 0;
  uVar3 = (ulong)param_2;
  puVar4 = (undefined8 *)(param_1 + 0x50);
  do {
    sVar1 = strlen((char *)*puVar4);
    uVar3 = uVar3 - 1;
    lVar2 = lVar2 + sVar1 + 1;
    puVar4 = puVar4 + 1;
  } while (uVar3 != 0);
  return lVar2;
}

