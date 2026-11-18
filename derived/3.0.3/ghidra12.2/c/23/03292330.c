
void FUN_03292330(long *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long *plVar3;
  long lVar4;
  
  if (*param_1 != 0) {
    return;
  }
  lVar4 = *(long *)PTR_DAT_04bc8fe0;
  plVar3 = (long *)(lVar4 + 8);
  puVar1 = (undefined8 *)*plVar3;
  if ((undefined8 *)*plVar3 == (undefined8 *)0x0) {
    *plVar3 = (long)param_1;
  }
  else {
    do {
      puVar2 = puVar1;
      puVar1 = (undefined8 *)puVar2[2];
    } while ((undefined8 *)puVar2[2] != (undefined8 *)0x0);
    puVar2[2] = param_1;
    param_1[1] = (long)puVar2;
    plVar3 = (long *)*puVar2;
  }
  *param_1 = (long)plVar3;
  FUN_0328fad0(lVar4);
  if ((*(uint *)((long)param_1 + 0x2c) & 1) == 0) {
    *(undefined8 *)(lVar4 + 0xa8) = 0;
    *(byte *)(lVar4 + 0xd4) = *(byte *)(lVar4 + 0xd4) & 0xfd;
  }
  return;
}

