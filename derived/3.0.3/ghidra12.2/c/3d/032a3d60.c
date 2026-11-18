
void FUN_032a3d60(long *param_1,uint param_2,long param_3)

{
  ulong uVar1;
  long *plVar2;
  long lVar3;
  long local_68;
  undefined *local_60;
  undefined *puStack_58;
  undefined *local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined *local_30;
  undefined1 *puStack_28;
  
  local_50 = (undefined *)CONCAT44(local_50._4_4_,param_2);
  lVar3 = *(long *)(*(long *)(*param_1 + 0x240) + 0x18);
  if (lVar3 != 0) {
    local_40 = *(undefined8 *)(*(long *)(lVar3 + 0xf0) + 0x18);
    uVar1 = (ulong)param_2;
    if (2 < param_2) {
      uVar1 = 0;
    }
    puStack_28 = &DAT_0419b684;
    if ((&PTR_s_L_Btn_00_T_00_04b19690)[uVar1] != (undefined1 *)0x0) {
      puStack_28 = (&PTR_s_L_Btn_00_T_00_04b19690)[uVar1];
    }
    local_30 = &DAT_04b177a8;
    local_68 = FUN_032a3e70(&local_40,&local_30);
    if (local_68 != 0) {
      uStack_48 = *(undefined8 *)(param_3 + 8);
      plVar2 = *(long **)PTR_DAT_04bc9198;
      if (*(long **)(*(long *)PTR_DAT_04bc6338 + 0x88) != (long *)0x0) {
        plVar2 = *(long **)(*(long *)PTR_DAT_04bc6338 + 0x88);
      }
      local_50 = &DAT_04b177a8;
      local_60 = &DAT_04b177a8;
      puStack_58 = PTR_DAT_04c4b988;
      (**(code **)(*plVar2 + 0x18))(&local_40,plVar2,&local_50,&local_60);
      local_30 = PTR_DAT_04bb8610 + 0x10;
      puStack_28 = (undefined1 *)local_38;
      FUN_032d67f0(&local_68,&local_30);
    }
  }
  return;
}

