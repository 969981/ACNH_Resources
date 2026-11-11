
undefined4 FUN_003b7f38(float param_1)

{
  float fVar1;
  float fVar2;
  
  fVar2 = -904.0;
  if (-90.4 <= param_1) {
    fVar2 = param_1 * 10.0;
  }
  fVar1 = 60.0;
  if (param_1 <= 6.0) {
    fVar1 = fVar2;
  }
  return *(undefined4 *)(&DAT_04136920 + (long)(int)fVar1 * 4);
}

