
void FUN_002a8f40(undefined8 param_1,void *param_2,void *param_3)

{
  undefined4 uVar1;
  long *plVar2;
  long lVar3;
  undefined8 local_40;
  undefined4 local_24;
  
  if (param_3 == (void *)0x0) {
    local_40 = CONCAT44(local_40._4_4_,0x10c07);
  }
  else {
    nn::os::LockMutex((MutexType *)((long)param_2 + 0xd40));
    memcpy(param_3,param_2,0xd40);
    nn::os::UnlockMutex((MutexType *)((long)param_2 + 0xd40));
    if (DAT_04c61168 == (ulong *)0x0) {
      local_40 = 0;
      FUN_002282f0(&local_40);
    }
    else {
      local_40 = *DAT_04c61168;
    }
    lVar3 = local_40 - *(long *)((long)param_2 + 0xd60);
    plVar2 = (long *)FUN_00228380();
    local_40 = local_40 & 0xffffffff00000000;
    uVar1 = 0;
    if (*plVar2 != 0) {
      uVar1 = (undefined4)(lVar3 / *plVar2);
    }
    *(undefined4 *)((long)param_3 + 0xc04) = uVar1;
  }
  local_24 = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((long)&local_40 + 4),(Result *)&local_24);
  FUN_002296c4(param_1,&local_40);
  return;
}

