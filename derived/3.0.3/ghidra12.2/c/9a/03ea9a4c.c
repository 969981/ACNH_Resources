
uint FUN_03ea9a4c(undefined8 param_1,uint *param_2)

{
  uint uVar1;
  ulong uVar2;
  uint local_8;
  char local_4;
  
  local_8 = 0;
  local_4 = '\0';
  uVar2 = FUN_03ea9450(param_1,&local_8);
  if ((uVar2 & 1) == 0) {
    return 0;
  }
  if (local_4 == -1) {
LAB_03ea9aa8:
    uVar1 = 0;
  }
  else {
    if (local_4 == -0x2d) {
      uVar1 = 1;
    }
    else {
      if (local_4 != -0x2f) goto LAB_03ea9aa8;
      uVar1 = ~local_8;
      local_8 = local_8 & ((int)local_8 >> 0x1f ^ 0xffffffffU);
      uVar1 = uVar1 >> 0x1f;
    }
    *param_2 = local_8;
  }
  return uVar1;
}

