
undefined4 FUN_026d11f0(long param_1,long *param_2,long *param_3)

{
  char *pcVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined *local_178;
  char *local_170;
  undefined4 local_168;
  char local_164 [127];
  undefined1 local_e5;
  undefined *local_e0;
  char *local_d8;
  undefined4 local_d0;
  char local_cc [127];
  undefined1 local_4d;
  undefined4 local_44;
  
  nn::os::LockMutex((MutexType *)(param_1 + 0x20));
  if (((*(char *)(param_1 + 0x44) == '\0') && (*(int *)(param_1 + 0x40) == 0)) &&
     (*(char *)(param_1 + 0x45) == '\0')) {
    (**(code **)(DAT_0556ca08 + 0x18))(&DAT_0556ca08);
    iVar2 = nn::fs::MountDeviceSaveData(DAT_0556ca10);
    if (iVar2 != 0) {
      local_e0 = (undefined *)CONCAT44(local_e0._4_4_,iVar2);
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl((Result *)&local_e0);
    }
    *(undefined1 *)(param_1 + 0x45) = 1;
  }
  *(undefined1 *)(param_1 + 0x44) = 1;
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x20));
  local_44 = 1;
  local_4d = 0;
  local_d0 = 0x80;
  local_168 = 0x80;
  local_e5 = 0;
  local_d8 = local_cc;
  local_cc[0] = '\0';
  local_178 = PTR_DAT_04bb2d88 + 0x10;
  local_164[0] = '\0';
  local_170 = local_164;
  local_e0 = local_178;
  (**(code **)(DAT_0556ca08 + 0x18))(&DAT_0556ca08);
  pcVar1 = DAT_0556ca10;
  (**(code **)(*param_2 + 0x18))(param_2);
  FUN_038d1270(&local_e0,"%s:/%s",pcVar1,param_2[1]);
  (**(code **)(DAT_0556ca08 + 0x18))(&DAT_0556ca08);
  pcVar1 = DAT_0556ca10;
  (**(code **)(*param_3 + 0x18))(param_3);
  FUN_038d1270(&local_178,"%s:/%s",pcVar1,param_3[1]);
  (**(code **)(local_e0 + 0x18))(&local_e0);
  pcVar1 = local_d8;
  (**(code **)(local_178 + 0x18))(&local_178);
  uVar3 = nn::fs::RenameDirectory(pcVar1,local_170);
  if (uVar3 == 0) {
    uVar4 = 1;
  }
  else if ((uVar3 & 0x3fffff) == 0x202) {
    uVar4 = 5;
  }
  else if (((uVar3 & 0x1ff) == 2) && ((uVar3 >> 9 & 0x1ffe) - 0x1e < 0x10)) {
    uVar4 = 2;
  }
  else {
    uVar4 = 7;
    if ((uVar3 & 0x3fffff) == 0x402) {
      uVar4 = 8;
    }
  }
  return uVar4;
}

