
void FUN_002a89f0(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 local_38;
  undefined4 local_24;
  
  if (*(char *)(param_2 + 0xd68) == '\0') {
    nn::os::LockMutex((MutexType *)(param_2 + 0xd40));
    FUN_002a6fb0(param_2);
    nn::os::UnlockMutex((MutexType *)(param_2 + 0xd40));
    puVar2 = DAT_04c61168;
    if (DAT_04c61168 == (undefined8 *)0x0) {
      local_38 = 0;
      puVar2 = &local_38;
      FUN_002282f0(&local_38);
    }
    uVar1 = *puVar2;
    local_38 = local_38 & 0xffffffff00000000;
    *(undefined1 *)(param_2 + 0xd68) = 1;
    *(undefined8 *)(param_2 + 0xd60) = uVar1;
  }
  else {
    local_38 = CONCAT44(local_38._4_4_,0x10c08);
  }
  local_24 = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((long)&local_38 + 4),(Result *)&local_24);
  FUN_002296c4(param_1,&local_38);
  return;
}

