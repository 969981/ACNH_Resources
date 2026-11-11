
void FUN_003a292c(undefined8 *param_1,int param_2)

{
  undefined8 *puVar1;
  long lVar2;
  
  lVar2 = *(long *)(*(long *)*param_1 + 0x18) + (long)param_2 * 0x28;
  puVar1 = param_1 + 1;
  if ((*(byte *)(lVar2 + 0x1c) & 1) != 0) {
    puVar1 = param_1 + 2;
  }
  FUN_0039fd18(lVar2,*puVar1);
  return;
}

