
void FUN_0022c900(undefined8 param_1,long *param_2,long param_3,int param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  undefined4 local_24;
  ErrorResultVariant aEStack_20 [12];
  undefined4 local_14;
  
  puVar2 = PTR_LAB_04bcd048;
  puVar1 = PTR_LAB_04bcd040;
  if ((param_3 == 0) || (param_4 == 0)) {
    local_24 = 0x10c07;
  }
  else if (param_2[0xe] == 0) {
    local_24 = 0x10c08;
  }
  else {
    *param_2 = param_3;
    *(int *)(param_2 + 1) = param_4;
    param_2[10] = (long)param_2;
    param_2[8] = (long)puVar1;
    param_2[9] = (long)puVar2;
    iVar3 = FUN_0017cb60(param_2,"1.3.1.f-NINTENDO-SDK-v1",0x70);
    if (iVar3 == -4) {
      local_24 = 0x10c01;
    }
    else if (iVar3 == 0) {
      local_24 = 0;
    }
    else {
      local_24 = 0xc0b;
    }
  }
  local_14 = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_20,(Result *)&local_14);
  FUN_002296c4(param_1,&local_24);
  return;
}

