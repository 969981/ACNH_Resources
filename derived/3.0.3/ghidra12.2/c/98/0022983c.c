
void FUN_0022983c(undefined8 param_1,uint *param_2,ErrorResultVariant *param_3)

{
  int iVar1;
  undefined8 uVar2;
  uint local_40;
  uint auStack_3c [3];
  undefined4 local_24;
  
  if (param_3 == (ErrorResultVariant *)0x0) {
    local_40 = 0x10c07;
    goto LAB_00229950;
  }
  if (*param_2 == 0) {
LAB_0022990c:
    local_40 = 0x10c08;
    goto LAB_00229950;
  }
  local_24 = 0;
  local_40 = 0xe437;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)auStack_3c,(Result *)&local_24);
  if (*param_2 == local_40) {
    iVar1 = nn::err::ErrorResultVariant::GetState();
    if (iVar1 != 2) goto LAB_0022990c;
LAB_002298a8:
    uVar2 = *(undefined8 *)(param_2 + 1);
    *(uint *)(param_3 + 8) = param_2[3];
    *(undefined8 *)param_3 = uVar2;
  }
  else {
    local_24 = 0;
    local_40 = 0xa46e;
    nn::err::ErrorResultVariant::ErrorResultVariant
              ((ErrorResultVariant *)auStack_3c,(Result *)&local_24);
    if (*param_2 == local_40) {
      iVar1 = nn::err::ErrorResultVariant::GetState();
      if (iVar1 != 1) goto LAB_0022990c;
      goto LAB_002298a8;
    }
    auStack_3c[0] = FUN_00229984(param_2);
    local_40 = auStack_3c[0] / 10000;
    auStack_3c[0] = auStack_3c[0] % 10000;
    nn::err::ErrorResultVariant::operator=(param_3,(ErrorCode *)&local_40);
  }
  local_40 = 0;
LAB_00229950:
  local_24 = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)auStack_3c,(Result *)&local_24);
  FUN_002296c4(param_1,&local_40);
  return;
}

