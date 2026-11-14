
uint FUN_01a50010(undefined8 param_1,undefined4 param_2,long param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  ulong uVar4;
  undefined *local_50;
  int local_48;
  int local_44;
  
  uVar4 = FUN_01a4fafc(param_1,param_2);
  if ((uVar4 & 1) == 0) {
    uVar3 = 0;
  }
  else {
    iVar2 = *(int *)(param_3 + 0x10);
    local_44 = *(int *)(param_3 + 0x14);
    local_50 = PTR_DAT_04bb2010 + 0x10;
    iVar1 = *(int *)(param_3 + 0x24) + 1;
    if (iVar1 == local_44) {
      uVar3 = 1;
    }
    else {
      local_48 = iVar2;
      do {
        uVar3 = FUN_01a4fd6c(param_1,param_2,&local_50,1);
        if ((uVar3 & 1) == 0) break;
        if (local_48 < *(int *)(param_3 + 0x20)) {
          local_48 = local_48 + 1;
        }
        else {
          local_44 = local_44 + 1;
          local_48 = *(int *)(param_3 + 0x10);
        }
      } while (iVar2 != local_48 || iVar1 != local_44);
    }
  }
  return uVar3 & 1;
}

