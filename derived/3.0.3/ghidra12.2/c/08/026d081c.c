
undefined4 FUN_026d081c(undefined8 param_1,long *param_2,long *param_3,undefined4 param_4)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  long lVar4;
  undefined *local_c8;
  char *local_c0;
  undefined4 local_b8;
  char local_b4 [127];
  undefined1 local_35;
  undefined8 local_18;
  
  local_35 = 0;
  local_b8 = 0x80;
  local_c0 = local_b4;
  local_b4[0] = '\0';
  local_c8 = PTR_DAT_04bb2d88 + 0x10;
  (**(code **)(*param_2 + 0x18))(param_2);
  lVar4 = param_2[1];
  (**(code **)(*param_3 + 0x18))(param_3);
  FUN_038d1270(&local_c8,"%s:/%s",lVar4,param_3[1]);
  (**(code **)(local_c8 + 0x18))(&local_c8);
  uVar1 = nn::fs::OpenFile((FileHandle *)&local_18,local_c0,2);
  if (uVar1 == 0) {
    iVar2 = nn::fs::SetFileSize(local_18,param_4);
    nn::fs::CloseFile(local_18);
    uVar3 = 1;
    if (iVar2 != 0) {
      uVar3 = 2;
    }
  }
  else if ((uVar1 & 0x3fffff) == 0x202) {
    uVar3 = 5;
  }
  else if (((uVar1 & 0x1ff) == 2) && ((uVar1 >> 9 & 0x1ffe) - 0x1e < 0x10)) {
    uVar3 = 2;
  }
  else {
    uVar3 = 7;
    if ((uVar1 & 0x3fffff) == 0x402) {
      uVar3 = 8;
    }
  }
  return uVar3;
}

