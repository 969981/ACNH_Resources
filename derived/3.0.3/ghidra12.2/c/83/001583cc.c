
bool FUN_001583cc(undefined8 param_1,int *param_2)

{
  int iVar1;
  undefined4 local_8;
  int local_4;
  
  local_8 = 4;
  local_4 = 0;
  iVar1 = nnsocketGetSockOpt(param_1,0xffff,0x1007,&local_4,&local_8);
  if (iVar1 != 0) {
    local_4 = nnsocketGetLastErrno();
  }
  if (param_2 != (int *)0x0) {
    *param_2 = local_4;
  }
  return local_4 == 0 || local_4 == 0x6a;
}

