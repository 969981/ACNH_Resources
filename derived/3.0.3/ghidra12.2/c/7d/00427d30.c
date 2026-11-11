
void FUN_00427d30(byte *param_1)

{
  byte bVar1;
  
  do {
    bVar1 = *param_1;
    param_1 = *(byte **)(param_1 + 8);
  } while ((bVar1 & 1) == 0);
  return;
}

