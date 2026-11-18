
void FUN_0374a300(ushort *param_1,uint param_2)

{
  uint uVar1;
  uint local_8;
  
  uVar1 = param_2 & 0xf;
  param_2 = param_2 & 0xffff;
  *param_1 = (ushort)uVar1;
  if (uVar1 == 1) {
    local_8 = param_2 >> 4 & 0xf;
  }
  else if (uVar1 == 3) {
    local_8 = param_2 >> 4 & 0xf;
  }
  else {
    if (uVar1 != 4) {
      return;
    }
    local_8 = param_2 >> 4 & 0xf;
  }
  *param_1 = (ushort)uVar1 | (ushort)(local_8 << 4);
  return;
}

