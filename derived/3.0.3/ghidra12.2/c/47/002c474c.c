
void FUN_002c474c(undefined8 param_1,long param_2)

{
  long lVar1;
  ulong uVar2;
  int *piVar3;
  undefined8 local_50;
  undefined4 local_48;
  int local_40;
  ErrorResultVariant aEStack_3c [12];
  undefined4 local_24;
  
  piVar3 = (int *)&local_50;
  local_40 = 0;
  local_50 = local_50 & 0xffffffff00000000;
  nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_3c,(Result *)&local_50);
  lVar1 = param_2 + 8;
  FUN_00226918(&local_50,lVar1,2,2,0x11);
  FUN_00229780(&local_40,&local_50);
  if (local_40 != 0) {
    piVar3 = &local_40;
    goto LAB_002c485c;
  }
  if (*(short *)(param_2 + 0x38) == 0) {
LAB_002c47ec:
    uVar2 = FUN_002c4880(param_2);
    if ((uVar2 & 1) != 0) goto LAB_002c47f8;
    local_48 = 0;
    local_50 = 0x40000;
    FUN_00220138(param_2 + 0x20,&local_50);
    FUN_002269b8(&local_50,lVar1);
    FUN_00229780(&local_40,&local_50);
    local_50 = CONCAT44(local_50._4_4_,0x10c08);
  }
  else {
    FUN_00226a50(&local_50,lVar1,param_2 + 0x20,0xffffffff,0);
    FUN_00229780(&local_40,&local_50);
    if (local_40 != 0) goto LAB_002c47ec;
LAB_002c47f8:
    local_50 = local_50 & 0xffffffff00000000;
  }
  local_24 = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((long)&local_50 + 4),(Result *)&local_24);
LAB_002c485c:
  FUN_002296c4(param_1,piVar3);
  return;
}

