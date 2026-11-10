
void FUN_0030caac(undefined8 param_1,long param_2,uint param_3,undefined4 param_4)

{
  undefined4 local_24;
  ErrorResultVariant aEStack_20 [12];
  undefined4 local_14;
  
  if (param_3 < 6) {
    if ((*(uint *)(param_2 + 0x628) < 2) && (*(int *)(param_2 + 8) == 0)) {
      *(undefined4 *)(param_2 + (ulong)param_3 * 4 + 0x18) = param_4;
      *(undefined1 *)(param_2 + 0x30 + (ulong)param_3) = 1;
      if (((*(char *)(param_2 + 0x30) != '\0') &&
          (((*(char *)(param_2 + 0x31) != '\0' && (*(char *)(param_2 + 0x32) != '\0')) &&
           (*(char *)(param_2 + 0x33) != '\0')))) &&
         ((*(char *)(param_2 + 0x34) != '\0' && (*(char *)(param_2 + 0x35) != '\0')))) {
        *(uint *)(param_2 + 0x628) = *(uint *)(param_2 + 0x628) | 1;
      }
      local_24 = 0;
    }
    else {
      local_24 = 0x10c08;
    }
  }
  else {
    local_24 = 0x10c07;
  }
  local_14 = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_20,(Result *)&local_14);
  FUN_002296c4(param_1,&local_24);
  return;
}

