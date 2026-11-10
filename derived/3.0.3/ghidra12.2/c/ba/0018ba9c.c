
ulong FUN_0018ba9c(long param_1,long param_2,long param_3,ulong param_4)

{
  ulong local_8;
  
  if (param_1 == 0) {
    return 0xffffffff;
  }
  local_8 = (param_2 + 2U) / 3 << 2 | 1;
  if (param_3 != 0) {
    if (param_4 < local_8) {
      return 0xffffffff;
    }
    FUN_0018bb00(param_1,param_2,param_3,&local_8);
  }
  return local_8;
}

