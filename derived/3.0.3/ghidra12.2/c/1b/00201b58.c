
void FUN_00201b58(long *param_1,long param_2,undefined8 param_3,undefined1 *param_4)

{
  long lVar1;
  short sVar2;
  long lVar3;
  undefined *local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined *local_58;
  ulong local_50;
  undefined8 local_48;
  undefined *local_40;
  long *local_38;
  undefined4 local_24;
  
  lVar3 = *(long *)(param_2 + 0x10);
  lVar1 = *(long *)(param_2 + 0x18);
  if ((ulong)(*(long *)(lVar3 + 0x18) - lVar1) < 4) {
    *(undefined1 *)(param_2 + 8) = 1;
  }
  else {
    sVar2 = *(short *)(*(long *)(lVar3 + 0x10) + *(long *)(lVar3 + 0x28) + lVar1);
    *(long *)(param_2 + 0x18) = lVar1 + 4;
    if (sVar2 == 1) {
      local_50 = (local_50 >> 8 & 0xffffff) << 8;
      local_40 = PTR_DAT_04bccad0 + 0x10;
      local_38 = (long *)0x0;
      local_58 = PTR_DAT_04bccb50 + 0x10;
      FUN_002018b0(param_2,&local_58);
      if (*(char *)(param_2 + 8) == '\0') {
        (**(code **)(*param_1 + 0xc0))(param_1,&local_58);
        local_24 = 0x8001;
        FUN_00197478(param_3,&local_24,4);
      }
      local_58 = PTR_DAT_04bccb58 + 0x10;
      if (local_38 != (long *)0x0) {
        (**(code **)(*local_38 + 8))();
      }
      goto LAB_00201c84;
    }
  }
  local_24 = 0x80010002;
  FUN_0018aa70(&local_70,&local_24);
  lVar3 = FUN_0019cf4c(param_1[0xb] + 0x50);
  local_58 = local_70;
  local_50 = uStack_68;
  local_48 = local_60;
  FUN_0018ab44(lVar3 + 0x40,&local_58);
LAB_00201c84:
  *param_4 = 1;
  return;
}

