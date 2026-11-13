
void FUN_01338f24(long param_1,long param_2)

{
  uint uVar1;
  undefined *puVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  undefined *local_330;
  char *pcStack_328;
  undefined *local_1f0;
  undefined1 *puStack_1e8;
  undefined4 local_1e0;
  undefined1 local_1dc [127];
  undefined1 local_15d;
  undefined *local_158;
  long local_150;
  undefined *local_148;
  undefined1 *puStack_140;
  undefined4 local_138;
  undefined1 local_134 [255];
  undefined1 local_35;
  
  if (param_2 != 0) {
    local_158 = PTR_DAT_04bbc350 + 0x10;
    lVar6 = *(long *)PTR_DAT_04bb27a8;
    uVar1 = (uint)*(ushort *)(param_1 + 8) - (uint)*(ushort *)(lVar6 + 0x1168);
    if ((uVar1 < *(uint *)(lVar6 + 0x1148)) &&
       (local_150 = *(long *)(*(long *)(lVar6 + 0x1150) + (long)(int)uVar1 * 8), local_150 != 0)) {
      local_15d = 0;
      local_1e0 = 0x80;
      local_1dc[0] = 0;
      puStack_1e8 = local_1dc;
      local_1f0 = PTR_DAT_04bb2d88 + 0x10;
      FUN_0131c830(&local_158,&local_1f0);
      lVar6 = 1;
      local_330 = PTR_DAT_04bb2020 + 0x10;
      pcStack_328 = "FieldPresetParamsLandMakingHeap";
      plVar3 = (long *)FUN_038c6d48(0xe00000,&local_330,param_2,8,1,0);
      puVar2 = PTR_DAT_04bb3350;
      if (plVar3 != (long *)0x0) {
        lVar4 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
        lVar6 = *(long *)(lVar4 + 0xa8);
        *(long **)(lVar4 + 0xa8) = plVar3;
      }
      FUN_013352c8(&local_330,&DAT_05194bb0,&local_1f0,0);
      local_35 = 0;
      local_138 = 0x100;
      puStack_140 = local_134;
      local_134[0] = 0;
      local_148 = PTR_DAT_04bb21f8 + 0x10;
      uVar5 = (**(code **)(local_330 + 0xf0))(&local_330,&local_148,1);
      if ((uVar5 & 1) != 0) {
        uVar5 = FUN_03c27e60(&local_330,&local_148,plVar3);
      }
      FUN_013390e0(uVar5,&local_330);
      (**(code **)(local_330 + 0x20))(&local_330);
      FUN_01335460(&local_330);
      if (lVar6 != 1) {
        lVar4 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar2 + 0x68));
        *(long *)(lVar4 + 0xa8) = lVar6;
      }
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 0x20))(plVar3);
      }
    }
  }
  return;
}

