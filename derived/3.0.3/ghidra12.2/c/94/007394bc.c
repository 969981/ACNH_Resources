
/* WARNING: Removing unreachable block (ram,0x0073959c) */

uint FUN_007394bc(long param_1,long *param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined *local_e0;
  undefined1 *puStack_d8;
  undefined4 local_d0;
  undefined1 local_cc [127];
  undefined1 local_4d;
  undefined *local_48;
  undefined8 local_40;
  undefined4 local_34;
  
  if ((*(byte *)(param_1 + 0x11f0) & 1) == 0) {
    local_4d = 0;
    local_d0 = 0x80;
    local_cc[0] = 0;
    puStack_d8 = local_cc;
    local_e0 = PTR_DAT_04bb2d88 + 0x10;
    uVar2 = *(undefined4 *)(*(long *)PTR_DAT_04bb3448 + 8);
    local_48 = PTR_DAT_04bb4ba0 + 0x10;
    (**(code **)(*param_2 + 0x18))(param_2);
    local_34 = FUN_006bd550(param_2[1],0);
    local_40 = FUN_007de4b0(PTR_DAT_04bb4b98,&local_34);
    uVar3 = FUN_007dabc0(&local_48,&local_e0,uVar2,2);
    if ((uVar3 & 1) == 0) {
      (**(code **)(local_e0 + 0x10))(&local_e0,param_2);
    }
    else {
      local_48 = (undefined *)CONCAT44(local_48._4_4_,2);
      (**(code **)(*(long *)(param_1 + 0x440) + 0x10))((long *)(param_1 + 0x440),&local_e0);
      puVar1 = (undefined4 *)(param_1 + 0x10dc) + ((ulong)local_48 & 0xffffffff);
      if (0x11 < (uint)local_48) {
        puVar1 = (undefined4 *)(param_1 + 0x10dc);
      }
      *puVar1 = 0;
    }
  }
  else {
    uVar3 = 0;
  }
  return uVar3 & 1;
}

