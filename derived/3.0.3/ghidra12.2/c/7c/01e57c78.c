
void FUN_01e57c78(long param_1,undefined4 *param_2,ulong param_3,uint param_4)

{
  undefined *puVar1;
  uint uVar2;
  int iVar3;
  long *plVar4;
  long lVar5;
  undefined8 local_70;
  undefined4 local_68;
  undefined4 local_64;
  undefined8 local_60;
  undefined4 local_58;
  undefined2 local_54;
  undefined1 local_52;
  
  puVar1 = PTR_DAT_04bb43c0;
  lVar5 = *(long *)PTR_DAT_04bb43c0;
  uVar2 = FUN_0277d6c4(param_2);
  if (*(long *)puVar1 == 0) {
LAB_01e57d34:
    plVar4 = *(long **)(param_1 + 0x340);
LAB_01e57d3c:
    if ((param_3 & 1) != 0) {
      local_70 = (undefined *)((ulong)local_70._4_4_ << 0x20);
      (**(code **)(*plVar4 + 0x2d0))(plVar4,PTR_DAT_04bb37e0,&local_70);
      FUN_01706aa0(0,*(undefined8 *)(param_1 + 0x340));
      goto LAB_01e57fd0;
    }
    local_70 = (undefined *)((ulong)local_70._4_4_ << 0x20);
    (**(code **)(*plVar4 + 0x2c0))(plVar4,PTR_DAT_04bb37e0,&local_70);
    plVar4 = *(long **)(param_1 + 0x340);
    local_70._0_4_ = 4;
    *(undefined8 *)((long)plVar4 + 0x160c) = 0x3a83126f3a83126f;
    (**(code **)(*plVar4 + 0x4e0))((int)plVar4[0x2c1],plVar4);
    local_70 = (undefined *)CONCAT44(local_70._4_4_,4);
    if (*(float *)((long)plVar4 + 0x160c) == 0.001) {
      uVar2 = *(uint *)((long)plVar4 + 0x15f4) | 0x10;
    }
    else {
      uVar2 = *(uint *)((long)plVar4 + 0x15f4) & 0xffffffef;
    }
    *(uint *)((long)plVar4 + 0x15f4) = uVar2;
  }
  else {
    lVar5 = *(long *)(lVar5 + 0x57e58);
    uVar2 = (uVar2 & 0xffff) - (uint)*(ushort *)(lVar5 + 0x1f8);
    if (*(uint *)(lVar5 + 0x1d8) <= uVar2) goto LAB_01e57d34;
    plVar4 = *(long **)(param_1 + 0x340);
    if (*(long *)(*(long *)(lVar5 + 0x1e0) + (long)(int)uVar2 * 8) == 0) goto LAB_01e57d3c;
    if ((param_3 & 1) != 0) {
      local_70 = (undefined *)((ulong)local_70._4_4_ << 0x20);
      (**(code **)(*plVar4 + 0x2d0))(plVar4,param_2,&local_70);
      FUN_01706aa0(0x3f800000,*(undefined8 *)(param_1 + 0x340));
      if ((param_4 & 1) != 0) {
        FUN_01e5de70(param_1,param_2);
      }
      goto LAB_01e57fd0;
    }
    local_70 = (undefined *)((ulong)local_70._4_4_ << 0x20);
    (**(code **)(*plVar4 + 0x2c0))(plVar4,param_2,&local_70);
    plVar4 = *(long **)(param_1 + 0x340);
    local_70 = (undefined *)CONCAT44(local_70._4_4_,4);
    *(undefined1 **)((long)plVar4 + 0x160c) = &DAT_3f8000003f800000;
    (**(code **)(*plVar4 + 0x4e0))((int)plVar4[0x2c1],plVar4);
    if (*(float *)((long)plVar4 + 0x160c) == 0.001) {
      uVar2 = *(uint *)((long)plVar4 + 0x15f4) | 0x10;
    }
    else {
      uVar2 = *(uint *)((long)plVar4 + 0x15f4) & 0xffffffef;
    }
    *(uint *)((long)plVar4 + 0x15f4) = uVar2;
    local_68 = *param_2;
    local_64 = param_2[1];
    lVar5 = *(long *)puVar1;
    local_60 = 0;
    local_70 = PTR_DAT_04bc0510 + 0x10;
    uVar2 = FUN_0277d6c4(&local_68);
    if (*(long *)puVar1 != 0) {
      lVar5 = *(long *)(lVar5 + 0x57e58);
      uVar2 = (uVar2 & 0xffff) - (uint)*(ushort *)(lVar5 + 0x1f8);
      if ((uVar2 < *(uint *)(lVar5 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar5 + 0x1e0) + (long)(int)uVar2 * 8) != 0)) {
        lVar5 = *(long *)PTR_DAT_04bc0428;
        uVar2 = FUN_0277d6c4(param_2);
        uVar2 = (uVar2 & 0xffff) - (uint)*(ushort *)(lVar5 + 0x1f8);
        if ((uVar2 < *(uint *)(lVar5 + 0x1d8)) &&
           (lVar5 = *(long *)(*(long *)(lVar5 + 0x1e0) + (long)(int)uVar2 * 8), lVar5 != 0)) {
          local_60 = lVar5;
        }
      }
    }
    iVar3 = FUN_01ad78cc(&local_70);
    if (iVar3 == 0x1a) {
      *(long *)(param_1 + 0x2e8) = param_1;
      *(undefined1 **)(param_1 + 0x2f0) = &LAB_01e5d990;
      *(undefined8 *)(param_1 + 0x2f8) = 0;
      *(undefined ***)(param_1 + 0x2e0) = &PTR_LAB_04a5dd38;
    }
  }
  if ((param_4 & 1) != 0) {
    FUN_01e5db20(param_1,param_2);
  }
LAB_01e57fd0:
  local_70 = (undefined *)CONCAT35((int3)((ulong)local_70 >> 0x28),0x100000000);
  local_60 = CONCAT71(local_60._1_7_,1);
  local_54 = 0x101;
  local_52 = 0;
  local_68 = *(undefined4 *)PTR_DAT_04bb37e0;
  local_64 = *(undefined4 *)(PTR_DAT_04bb37e0 + 4);
  local_60 = CONCAT17(PTR_DAT_04bb37e0[3],
                      CONCAT16(PTR_DAT_04bb37e0[2],
                               CONCAT24(*(undefined2 *)PTR_DAT_04bb37e0,(undefined4)local_60)));
  local_58 = local_64;
  FUN_0170f380(*(undefined8 *)(param_1 + 0x340),&local_70);
  return;
}

