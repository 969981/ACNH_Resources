
void FUN_03444738(long param_1,long *param_2)

{
  int iVar1;
  undefined **local_40;
  undefined4 local_38;
  uint local_24;
  
  (**(code **)(*(long *)(param_1 + 8) + 0x18))((long *)(param_1 + 8));
  if ((param_2 != (long *)0x0) && (*(long *)(param_1 + 0x10) != 0)) {
    FUN_03444090(&local_24);
    if (2 < local_24) {
      local_24 = 0;
    }
    iVar1 = (&DAT_05753358)[(ulong)local_24 * 0x1a];
    local_40 = &PTR_LAB_04aa7fe0;
    local_38 = 0x14;
    (**(code **)(*param_2 + 0x18))(param_2,&local_40);
    (**(code **)(param_2[3] + 0x158))((float)iVar1,param_2[1]);
  }
  return;
}

