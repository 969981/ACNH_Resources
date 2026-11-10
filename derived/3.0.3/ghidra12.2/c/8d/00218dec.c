
void FUN_00218dec(undefined8 param_1,long param_2,long *param_3)

{
  long lVar1;
  undefined4 local_24;
  ErrorResultVariant aEStack_20 [12];
  undefined4 local_14;
  
  if (*(int *)(param_2 + 0x50) == 4) {
    lVar1 = -1;
  }
  else {
    lVar1 = *(long *)(param_2 + 0x60);
    if (lVar1 != -1) {
      if (*(char *)(param_2 + 0x70) == '\0') {
        *param_3 = -1;
        local_24 = 0x4c11;
      }
      else {
        local_24 = 0;
        *param_3 = *(long *)(param_2 + 0x68);
      }
      goto LAB_00218e3c;
    }
  }
  *param_3 = lVar1;
  local_24 = 0x6c1b;
LAB_00218e3c:
  local_14 = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_20,(Result *)&local_14);
  FUN_002296c4(param_1,&local_24);
  return;
}

