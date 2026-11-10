
undefined8 FUN_0014e850(time_t param_1,void *param_2)

{
  tm *__src;
  undefined8 uVar1;
  time_t local_8;
  
  local_8 = param_1;
  __src = gmtime(&local_8);
  if (__src == (tm *)0x0) {
    uVar1 = 0x2b;
  }
  else {
    memcpy(param_2,__src,0x38);
    uVar1 = 0;
  }
  return uVar1;
}

