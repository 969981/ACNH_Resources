
void FUN_0083a410(long param_1,uint param_2,int param_3)

{
  ulong uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  char cVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined4 *puVar7;
  ulong uVar8;
  ulong uVar9;
  uint uVar10;
  int iVar11;
  long lVar12;
  undefined4 uVar13;
  undefined8 local_130;
  undefined8 local_128;
  undefined4 local_120;
  undefined8 local_11c;
  undefined8 local_114;
  undefined8 local_10c;
  undefined1 *local_100;
  undefined1 *puStack_f8;
  undefined4 local_f0;
  undefined1 local_ec [127];
  undefined1 local_6d;
  undefined4 local_68;
  undefined2 local_64;
  undefined8 local_60;
  undefined8 local_58;
  long local_38;
  
  uVar3 = DAT_04da7238;
  puVar2 = PTR_DAT_04bc3a80;
  if (*(int *)(PTR_DAT_04bc3a80 + 0x38) == -0x10e0fba8) {
    if (param_3 == 0) {
      local_11c = 0x3f800000;
      iVar11 = 0;
      local_f0 = 0x80;
      local_68 = 7;
      local_120 = 0;
      puStack_f8 = local_ec;
      local_6d = 0;
      local_ec[0] = 0;
      local_60 = 0;
      local_64 = 0;
      local_114 = 0;
      local_10c = 0;
      local_100 = &DAT_048fc708;
      local_130 = 0x8800000000;
      local_128 = 0;
      if ((int)param_2 < (int)*(uint *)(param_1 + 0x300)) {
        uVar10 = param_2;
        if (*(uint *)(param_1 + 0x300) <= param_2) {
          uVar10 = 0;
        }
        iVar11 = *(int *)(*(long *)(param_1 + 0x308) + (long)(int)uVar10 * 4);
        if (0xe < iVar11) {
          iVar11 = 0xf;
        }
      }
      lVar5 = FUN_00834d74(0x88);
      puVar6 = (undefined8 *)
               (**(code **)(**(long **)(*(long *)(lVar5 + 0x38a0) + (long)iVar11 * 8) + 0xf0))();
      local_120 = *(undefined4 *)(puVar6 + 1);
      local_128 = *puVar6;
      local_114 = 0x100000000;
      if ((*(int *)(puVar2 + 0x38) == -0x10e0fba8) &&
         ((int)param_2 < (int)*(uint *)(param_1 + 0x300))) {
        uVar10 = param_2;
        if (*(uint *)(param_1 + 0x300) <= param_2) {
          uVar10 = 0;
        }
        iVar11 = *(int *)(*(long *)(param_1 + 0x308) + (long)(int)uVar10 * 4);
        if (0xe < iVar11) {
          iVar11 = 0xf;
        }
      }
      else {
        iVar11 = 0;
      }
      local_10c = CONCAT44(1,iVar11);
      uVar13 = FUN_007402e0(*(undefined8 *)PTR_DAT_04bb27c0,&local_130,
                            *(undefined4 *)(param_1 + 0x230),0);
      uVar10 = *(uint *)(param_1 + 0x2c0);
      lVar5 = *(long *)(param_1 + 0x2c8);
    }
    else {
      local_11c = 0x3f800000;
      iVar11 = 0;
      local_f0 = 0x80;
      local_68 = 7;
      local_120 = 0;
      puStack_f8 = local_ec;
      local_6d = 0;
      local_ec[0] = 0;
      local_60 = 0;
      local_64 = 0;
      local_114 = 0;
      local_10c = 0;
      local_100 = &DAT_048fc708;
      local_130 = 0x8800000000;
      local_128 = 0;
      if ((int)param_2 < (int)*(uint *)(param_1 + 0x310)) {
        uVar10 = param_2;
        if (*(uint *)(param_1 + 0x310) <= param_2) {
          uVar10 = 0;
        }
        iVar11 = *(int *)(*(long *)(param_1 + 0x318) + (long)(int)uVar10 * 4);
        if (0 < iVar11) {
          iVar11 = 1;
        }
      }
      local_58 = FUN_00a8c31c(DAT_04da7238);
      if ((char)(local_58 >> 0x20) < '\x05') {
        local_38 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_58);
        local_38 = local_38 + -0x15180;
        local_58 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_38);
      }
      uVar8 = local_58 >> 0x10;
      uVar1 = local_58 >> 0x30;
      uVar9 = local_58 >> 0x18;
      local_58._0_6_ = CONCAT24(5,(undefined4)local_58);
      local_58 = CONCAT26((short)uVar1,(undefined6)local_58) & 0xff00ffffffffffff;
      cVar4 = FUN_00a8ae20(uVar3,uVar8,uVar9,4);
      lVar5 = FUN_00834d74(0x88);
      if (cVar4 == '\x02') {
        lVar12 = 0x3e30;
      }
      else {
        lVar12 = 0x3d58;
      }
      puVar6 = (undefined8 *)
               (**(code **)(**(long **)(*(long *)(lVar5 + lVar12) + (long)iVar11 * 8) + 0xf0))();
      local_120 = *(undefined4 *)(puVar6 + 1);
      local_128 = *puVar6;
      local_114 = 0x100000001;
      if (*(int *)(puVar2 + 0x38) == -0x10e0fba8) {
        if ((int)param_2 < (int)*(uint *)(param_1 + 0x310)) {
          uVar10 = param_2;
          if (*(uint *)(param_1 + 0x310) <= param_2) {
            uVar10 = 0;
          }
          iVar11 = *(int *)(*(long *)(param_1 + 0x318) + (long)(int)uVar10 * 4);
          if (0 < iVar11) {
            iVar11 = 1;
          }
        }
        else {
          iVar11 = 0;
        }
        local_10c = CONCAT44(1,iVar11);
        if (param_2 < 3) {
          lVar5 = FUN_00834d74(0x88);
          puVar7 = (undefined4 *)
                   (**(code **)(**(long **)(*(long *)(lVar5 + 0x1930) + (ulong)param_2 * 8) + 0xf0))
                             ();
          uVar13 = *puVar7;
        }
        else {
          uVar13 = 0x3f800000;
        }
      }
      else {
        uVar13 = 0x3f800000;
        local_10c = 0x100000000;
      }
      local_11c = CONCAT44(local_11c._4_4_,uVar13);
      uVar13 = FUN_007402e0(*(undefined8 *)PTR_DAT_04bb27c0,&local_130,
                            *(undefined4 *)(param_1 + 0x230),0);
      uVar10 = *(uint *)(param_1 + 0x2d0);
      lVar5 = *(long *)(param_1 + 0x2d8);
    }
    if (uVar10 <= param_2) {
      param_2 = 0;
    }
    *(undefined4 *)(lVar5 + (long)(int)param_2 * 4) = uVar13;
  }
  return;
}

