
bool FUN_016e6850(short param_1)

{
  bool bVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  bVar1 = DAT_055c1b60 == &DAT_055c1b58;
  puVar3 = DAT_055c1b60 + -8;
  if ((param_1 != 0) && (puVar2 = DAT_055c1b60, puVar3 != &DAT_055c1b18)) {
    do {
      puVar2 = (undefined8 *)puVar2[1];
      param_1 = param_1 + -1;
      bVar1 = puVar2 == &DAT_055c1b58;
    } while (!bVar1 && param_1 != 0);
    puVar3 = puVar2 + -8;
  }
  puVar2 = &DAT_055c04a0;
  if (!bVar1) {
    puVar2 = puVar3;
  }
  return *(int *)(puVar2 + 7) == -0x78855454;
}

