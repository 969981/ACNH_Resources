
void FUN_002485a8(int *param_1,long param_2)

{
  int iVar1;
  long lVar2;
  int *piVar3;
  int local_68;
  ErrorResultVariant aEStack_64 [20];
  undefined2 local_50;
  int local_44;
  ErrorResultVariant aEStack_40 [12];
  undefined4 local_34;
  
  nn::os::LockMutex((MutexType *)(param_2 + 0x1778));
  if (*(long *)(param_2 + 6000) == 0) {
LAB_00248634:
    local_68 = 0;
    local_44 = 0;
    nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_64,(Result *)&local_44);
    lVar2 = FUN_002ba574(DAT_04c61168);
    FUN_0022be40(&local_44,lVar2 + 0x10,*(undefined8 *)(param_2 + 6000));
    FUN_00229780(&local_68,&local_44);
    if (local_68 == 0) {
      FUN_0022bdf4(&local_44,lVar2 + 0x10);
      FUN_00229780(&local_68,&local_44);
      if (local_68 == 0) {
        lVar2 = FUN_002ba58c(DAT_04c61168);
        FUN_0022be40(&local_44,lVar2 + 0x10,*(undefined8 *)(param_2 + 6000));
        FUN_00229780(&local_68,&local_44);
        if (local_68 == 0) {
          FUN_0022bdf4(&local_44,lVar2 + 0x10);
          FUN_00229780(&local_68,&local_44);
          if (local_68 == 0) {
            local_44 = 0;
            local_34 = 0;
            nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_40,(Result *)&local_34);
            goto LAB_002485f4;
          }
        }
      }
    }
    piVar3 = &local_68;
  }
  else {
    FUN_00226918(&local_44,*(long *)(param_2 + 6000),2,2,0x11);
    if (local_44 == 0) {
      FUN_0021f4e0(&local_68);
      local_50 = 0x3039;
      FUN_00226a50(param_1,*(undefined8 *)(param_2 + 6000),&local_68,0xffffffff,0);
      iVar1 = *param_1;
      FUN_0021f584(&local_68);
      if (iVar1 != 0) goto LAB_00248704;
      goto LAB_00248634;
    }
LAB_002485f4:
    piVar3 = &local_44;
  }
  FUN_002296c4(param_1,piVar3);
LAB_00248704:
  nn::os::UnlockMutex((MutexType *)(param_2 + 0x1778));
  return;
}

