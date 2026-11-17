
/* WARNING: Removing unreachable block (ram,0x030c68dc) */
/* WARNING: Removing unreachable block (ram,0x030c6848) */
/* WARNING: Removing unreachable block (ram,0x030c67b4) */
/* WARNING: Removing unreachable block (ram,0x030c67c8) */
/* WARNING: Removing unreachable block (ram,0x030c685c) */
/* WARNING: Removing unreachable block (ram,0x030c68f0) */

void FUN_030c6724(long param_1)

{
  long lVar1;
  long *plVar2;
  undefined *local_40;
  undefined4 local_38;
  
  lVar1 = *(long *)(param_1 + 0x220);
  if ((lVar1 != 0) && (plVar2 = *(long **)(lVar1 + 0x48), plVar2[1] != 0)) {
    local_40 = PTR_DAT_04bc0878 + 0x10;
    local_38 = 9;
    (**(code **)(*plVar2 + 0x18))(plVar2,&local_40);
    (**(code **)(plVar2[3] + 0x5e0))(plVar2[1],PTR_DAT_04bb2da0,0);
    FUN_03d7dd80(lVar1);
  }
  if (((*(long *)(param_1 + 0x208) != 0) &&
      (lVar1 = **(long **)(*(long *)(param_1 + 0x208) + 0x2e0), lVar1 != 0)) &&
     (plVar2 = *(long **)(lVar1 + 0x48), plVar2[1] != 0)) {
    local_40 = PTR_DAT_04bc0878 + 0x10;
    local_38 = 9;
    (**(code **)(*plVar2 + 0x18))(plVar2,&local_40);
    (**(code **)(plVar2[3] + 0x5e0))(plVar2[1],PTR_DAT_04bb2da0,0);
    FUN_03d7dd80(lVar1);
  }
  if (((*(long *)(param_1 + 0x210) != 0) &&
      (lVar1 = **(long **)(*(long *)(param_1 + 0x210) + 0x2e0), lVar1 != 0)) &&
     (plVar2 = *(long **)(lVar1 + 0x48), plVar2[1] != 0)) {
    local_40 = PTR_DAT_04bc0878 + 0x10;
    local_38 = 9;
    (**(code **)(*plVar2 + 0x18))(plVar2,&local_40);
    (**(code **)(plVar2[3] + 0x5e0))(plVar2[1],PTR_DAT_04bb2da0,0);
    FUN_03d7dd80(lVar1);
  }
  if (((*(long *)(param_1 + 0x218) != 0) &&
      (lVar1 = **(long **)(*(long *)(param_1 + 0x218) + 0x2e0), lVar1 != 0)) &&
     (plVar2 = *(long **)(lVar1 + 0x48), plVar2[1] != 0)) {
    local_40 = PTR_DAT_04bc0878 + 0x10;
    local_38 = 9;
    (**(code **)(*plVar2 + 0x18))(plVar2,&local_40);
    (**(code **)(plVar2[3] + 0x5e0))(plVar2[1],PTR_DAT_04bb2da0,0);
    FUN_03d7dd80(lVar1);
  }
  lVar1 = *(long *)(param_1 + 0x228);
  if ((lVar1 != 0) && (plVar2 = *(long **)(lVar1 + 0x48), plVar2[1] != 0)) {
    local_40 = PTR_DAT_04bc0878 + 0x10;
    local_38 = 9;
    (**(code **)(*plVar2 + 0x18))(plVar2,&local_40);
    (**(code **)(plVar2[3] + 0x5e0))(plVar2[1],PTR_DAT_04bb2da0,0);
    FUN_03d7dd80(lVar1);
  }
  return;
}

