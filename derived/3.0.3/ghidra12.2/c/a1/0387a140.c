
void FUN_0387a140(uint param_1,undefined8 param_2)

{
  undefined4 local_1c;
  undefined8 local_18;
  
  if (param_1 < 0x19) {
    local_1c = *(undefined4 *)(&DAT_0419935c + (long)(int)param_1 * 4);
  }
  else {
    local_1c = 10;
  }
  local_18 = param_2;
  FUN_0387b7d0(&local_1c,&local_18);
  return;
}

