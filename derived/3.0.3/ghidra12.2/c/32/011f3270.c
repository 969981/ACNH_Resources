
undefined8 FUN_011f3270(undefined8 param_1,undefined4 param_2,long param_3)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined *local_50;
  int local_48;
  int local_44;
  short local_28 [4];
  
  uVar3 = FUN_01a4fafc(param_1,param_2);
  if (((uVar3 & 1) == 0) || (uVar3 = FUN_00978be0(param_3), (uVar3 & 1) == 0)) {
LAB_011f3374:
    uVar4 = 0;
  }
  else {
    iVar2 = *(int *)(param_3 + 0x10);
    local_44 = *(int *)(param_3 + 0x14);
    local_50 = PTR_DAT_04bb2010 + 0x10;
    iVar1 = *(int *)(param_3 + 0x24) + 1;
    if (iVar1 != local_44) {
      local_48 = iVar2;
      do {
        uVar3 = FUN_01a4f798(param_1,param_2,&local_50);
        if (((uVar3 & 1) == 0) ||
           (FUN_01a50240(local_28,param_1,param_2,&local_50), local_28[0] != -2)) goto LAB_011f3374;
        if (local_48 < *(int *)(param_3 + 0x20)) {
          local_48 = local_48 + 1;
        }
        else {
          local_44 = local_44 + 1;
          local_48 = *(int *)(param_3 + 0x10);
        }
      } while ((iVar2 != local_48) || (iVar1 != local_44));
    }
    uVar4 = 1;
  }
  return uVar4;
}

