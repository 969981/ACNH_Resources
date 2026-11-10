
void FUN_002bd02c(undefined8 param_1,long param_2,long param_3,uint param_4)

{
  long lVar1;
  int local_44;
  ErrorResultVariant aEStack_40 [12];
  int local_34;
  ErrorResultVariant aEStack_30 [12];
  undefined4 local_24;
  
  if ((param_3 != 0) && (param_4 != 0)) {
    lVar1 = FUN_002aaa54();
    if (lVar1 == 0) {
      if (param_4 == 0) goto LAB_002bd0ac;
    }
    else if (param_4 <= *(int *)(lVar1 + 8) - 0x30U) {
LAB_002bd0ac:
      if (((*(long *)(param_2 + 0x58) == 0) || (lVar1 = FUN_002aaa54(param_2), lVar1 == 0)) ||
         (lVar1 = FUN_002aaa64(param_2), lVar1 == 0)) {
        local_34 = 0x10c08;
      }
      else {
        lVar1 = FUN_002aaa28(param_2);
        if (lVar1 != 0) {
          FUN_002296c4(&local_34,*(long *)PTR_DAT_04bc1510 + 0xd4);
          local_24 = 0;
          local_44 = 0x4c11;
          nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_40,(Result *)&local_24);
          if (local_34 == local_44) {
            local_44 = 0x4c11;
          }
          else {
            local_44 = 0;
          }
          local_24 = 0;
          nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_40,(Result *)&local_24);
          FUN_002296c4(param_1,&local_44);
          return;
        }
        local_34 = 0x2c27;
      }
      goto LAB_002bd06c;
    }
  }
  local_34 = 0x10c07;
LAB_002bd06c:
  local_44 = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_30,(Result *)&local_44);
  FUN_002296c4(param_1,&local_34);
  return;
}

