
void FUN_024858b8(byte *param_1,long param_2)

{
  char cVar1;
  byte local_18 [4];
  byte local_14 [4];
  
  local_14[0] = *param_1;
  cVar1 = *(char *)(param_2 + 0x20);
  if (7 < local_14[0]) {
    local_14[0] = 0xff;
  }
  FUN_0266b170(local_14,(int)cVar1);
  local_18[0] = *param_1;
  if (7 < local_18[0]) {
    local_18[0] = 0xff;
  }
  FUN_0266a1c0(local_18,(uint)(int)cVar1 >> 7 & 1 ^ 1);
  return;
}

