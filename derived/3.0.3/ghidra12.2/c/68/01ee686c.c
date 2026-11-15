
undefined8 FUN_01ee686c(long *param_1,long param_2)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  undefined4 *puVar7;
  undefined *puVar8;
  undefined8 local_150;
  undefined *puStack_148;
  int local_140 [27];
  undefined4 local_d4;
  undefined4 uStack_d0;
  undefined1 local_c7;
  undefined4 local_c4;
  undefined1 local_a4;
  
  if ((((*(byte *)(**(long **)PTR_DAT_04bb27d0 + 0x476) < 2) && (4 < (int)param_1[0xef6] - 3U)) &&
      (uVar4 = (**(code **)(*(long *)param_1[1] + 0x180))(), (uVar4 & 1) != 0)) &&
     ((local_140[0] = 0xb, (*(ushort *)(param_1 + 0x15a5) >> 0xb & 1) == 0 &&
      ((*(ushort *)((long)param_1 + 0xad2a) >> 0xb & 1) == 0)))) {
    lVar6 = param_1[1];
    if ((lVar6 != 0) && (uVar1 = *(uint *)(lVar6 + 0x508), uVar1 != 0xffffffff)) {
      puVar8 = &DAT_053fe348 + (ulong)uVar1 * 0xba0;
      if (9 < uVar1) {
        puVar8 = &DAT_053fe348;
      }
      local_140[0] = *(int *)(puVar8 + 0x4e8);
      if (local_140[0] != 0) {
        return 0;
      }
    }
    iVar3 = FUN_021d68a0(lVar6 + 0x3e0);
    if (iVar3 != 0) {
      if (((ulong)*(byte *)(param_2 + 8) < 8) && (*(long *)PTR_DAT_04bb4718 != 0)) {
        puVar7 = (undefined4 *)
                 (*(long *)PTR_DAT_04bb4718 + (ulong)*(byte *)(param_2 + 8) * 4 + 0xde8);
      }
      else {
        puVar7 = (undefined4 *)PTR_DAT_04bb3238;
      }
      uVar2 = *puVar7;
      if (((uint)param_1[0x15ab] >> 0x1c & 1) == 0) {
        param_1[0x15ab] = param_1[0x15ab] | 0x10000000;
        FUN_02087b00(param_1[3],4);
      }
      FUN_02085e20(param_1[3],0,uVar2,PTR_DAT_04bb6928,0);
      FUN_01e7b7bc(local_140);
      local_c4 = 0x96;
      local_150 = PTR_DAT_04bb2020 + 0x10;
      puStack_148 = PTR_s_EmotEnd_04bb4608 + 9;
      FUN_01ed8df0(local_140,0,&local_150);
      local_a4 = 1;
      local_c7 = 1;
      plVar5 = (long *)FUN_016debb0(param_1[1]);
      (**(code **)(*plVar5 + 0x370))(&local_150);
      local_d4 = (undefined4)local_150;
      uStack_d0 = local_150._4_4_;
      (**(code **)(*param_1 + 0x38))(param_1,1,local_140,0);
      return 1;
    }
  }
  return 0;
}

