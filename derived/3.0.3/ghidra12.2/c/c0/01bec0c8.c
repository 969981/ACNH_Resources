
void FUN_01bec0c8(undefined8 *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  bool bVar3;
  bool bVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  undefined *local_c0;
  undefined8 local_b8;
  long *local_68;
  long *local_60;
  long *local_58;
  long local_48;
  
  puVar2 = PTR_DAT_04bc0cb8;
  puVar1 = PTR_DAT_04bb2020;
  lVar6 = param_1[1];
  if (lVar6 == 0) {
    bVar3 = false;
  }
  else {
    plVar7 = *(long **)(lVar6 + 0x48);
    if (plVar7 == (long *)0x0) {
      bVar3 = false;
      plVar7 = *(long **)(lVar6 + 0x48);
    }
    else {
      local_c0 = PTR_DAT_04bc0cb8 + 0x10;
      local_b8 = (char *)CONCAT44(local_b8._4_4_,0x18);
      (**(code **)(*plVar7 + 0x20))(plVar7,&local_c0);
      local_c0 = puVar1 + 0x10;
      local_b8 = "RubyOff";
      (**(code **)(plVar7[3] + 0x1a0))(&local_48,plVar7[1],&local_c0);
      bVar3 = local_48 != 0;
      if (param_1[1] == 0) goto LAB_01bec174;
      plVar7 = *(long **)(param_1[1] + 0x48);
    }
    if (plVar7 != (long *)0x0) {
      local_c0 = puVar2 + 0x10;
      local_b8._4_4_ = (undefined4)((ulong)local_b8 >> 0x20);
      local_b8 = (char *)CONCAT44(local_b8._4_4_,0x18);
      (**(code **)(*plVar7 + 0x20))(plVar7,&local_c0);
      local_c0 = puVar1 + 0x10;
      local_b8 = "WordwrapOn";
      (**(code **)(plVar7[3] + 0x1a0))(&local_48,plVar7[1],&local_c0);
      bVar4 = local_48 != 0;
      lVar6 = param_1[0x37];
      plVar7 = (long *)PTR_DAT_04bb3350;
      goto joined_r0x01bec240;
    }
  }
LAB_01bec174:
  bVar4 = false;
  lVar6 = param_1[0x37];
  plVar7 = (long *)PTR_DAT_04bb3350;
joined_r0x01bec240:
  PTR_DAT_04bb3350 = (undefined *)plVar7;
  if (lVar6 != 0) {
    *(undefined1 *)(*(long *)(lVar6 + 0x60) + 0x278) = *(undefined1 *)(param_1 + 0x38);
    *(bool *)(*(long *)(param_1[0x37] + 0x60) + 0x279) = bVar3;
    *(bool *)(*(long *)(param_1[0x37] + 0x60) + 0x27a) = bVar4;
    *(undefined8 *)(*(long *)(param_1[0x37] + 0x60) + 0x270) = param_1[1];
    FUN_006f3d64(param_1[0x37],*param_1,param_1 + 0x18);
    return;
  }
  lVar6 = *(long *)PTR_DAT_04bc08b0;
  if (lVar6 == 0) {
    lVar8 = 1;
  }
  else {
    lVar5 = nn::os::GetTlsValue(*(undefined4 *)(*plVar7 + 0x68));
    lVar8 = *(long *)(lVar5 + 0xa8);
    *(long *)(lVar5 + 0xa8) = lVar6;
  }
  FUN_01bed9e0(&local_c0,param_1 + 0x35);
  *(undefined1 *)(local_60 + 0x4f) = *(undefined1 *)(param_1 + 0x38);
  *(bool *)((long)local_60 + 0x279) = bVar3;
  *(bool *)((long)local_60 + 0x27a) = bVar4;
  local_60[0x4e] = param_1[1];
  FUN_006f3d64(&local_c0,*param_1,param_1 + 0x18);
  local_c0 = PTR_DAT_04bc0c00 + 0x10;
  if (local_58 != (long *)0x0) {
    (**(code **)(*local_58 + 8))();
  }
  if (local_60 != (long *)0x0) {
    (**(code **)(*local_60 + 8))();
  }
  if (local_68 != (long *)0x0) {
    (**(code **)(*local_68 + 8))();
  }
  FUN_003532f4(&local_c0);
  if (lVar8 != 1) {
    lVar6 = nn::os::GetTlsValue(*(undefined4 *)(*plVar7 + 0x68));
    *(long *)(lVar6 + 0xa8) = lVar8;
  }
  return;
}

