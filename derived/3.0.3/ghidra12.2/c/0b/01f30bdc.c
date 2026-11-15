
void FUN_01f30bdc(long param_1,undefined4 *param_2)

{
  undefined *puVar1;
  undefined4 uVar2;
  long lVar3;
  uint uVar4;
  undefined2 uVar5;
  undefined *puVar6;
  short sVar7;
  int iVar8;
  ulong uVar9;
  long lVar10;
  long *plVar11;
  ulong uVar12;
  undefined8 *puVar13;
  long lVar14;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  uint local_70;
  undefined1 local_6c;
  undefined1 local_6b;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined4 local_38;
  undefined2 local_34;
  undefined1 local_32;
  
  uVar4 = *(uint *)(*(long *)(param_1 + 8) + 0x508);
  local_70 = uVar4;
  uVar9 = FUN_0219dee4(&DAT_053fe348,uVar4);
  if ((uVar9 & 1) != 0) {
    local_78 = 0xfffe;
    FUN_0277d4ac(&local_78);
    local_80 = 0xfffe;
    FUN_0277d4ac(&local_80);
    local_88 = 0xfffe;
    FUN_0277d4ac(&local_88);
    lVar10 = FUN_0265c3e0(uVar4);
    if (lVar10 == 0) {
      return;
    }
    lVar14 = *(long *)(lVar10 + 0x28);
    if (lVar14 == 0) {
      uVar9 = 0;
    }
    else {
      if (*(undefined8 **)(lVar14 + 0x10) == (undefined8 *)0x0) {
        uVar9 = 0;
        plVar11 = *(long **)(lVar14 + 0x20);
      }
      else {
        uVar9 = (**(code **)**(undefined8 **)(lVar14 + 0x10))();
        uVar9 = uVar9 & 0xffffffff;
        if (*(long *)(lVar10 + 0x28) == 0) goto LAB_01f30de8;
        plVar11 = *(long **)(*(long *)(lVar10 + 0x28) + 0x20);
      }
      if (plVar11 != (long *)0x0) {
        local_68 = *(undefined **)(lVar10 + 8);
        local_60 = *(char **)(lVar10 + 0x10);
        local_58 = 0x13230;
        (**(code **)(*plVar11 + 0x20))(plVar11,&local_68);
      }
    }
LAB_01f30de8:
    local_68 = (undefined *)((ulong)local_68 & 0xffffffff00000000);
    uVar12 = FUN_0269b5c0(*(long *)(lVar10 + 0x10) + *(long *)(lVar10 + 8),&local_78,&local_80,
                          &local_88,&local_68,0);
    if ((uVar12 & 1) != 0) {
      *param_2 = (undefined4)local_78;
      param_2[1] = local_78._4_4_;
      param_2[4] = (undefined4)local_80;
      param_2[5] = local_80._4_4_;
      puVar6 = PTR_DAT_04bb37e0;
      param_2[6] = (undefined4)local_88;
      param_2[7] = local_88._4_4_;
      uVar2 = *(undefined4 *)(puVar6 + 4);
      param_2[10] = *(undefined4 *)puVar6;
      param_2[0xb] = uVar2;
      if ((*(long *)(lVar10 + 0x28) != 0) &&
         (plVar11 = *(long **)(*(long *)(lVar10 + 0x28) + 0x20), plVar11 != (long *)0x0)) {
        local_68 = *(undefined **)(lVar10 + 8);
        local_60 = *(char **)(lVar10 + 0x10);
        local_58 = 0x13230;
        (**(code **)(*plVar11 + 0x20))(plVar11,&local_68);
      }
      local_38 = 0;
      *(undefined1 *)(*(long *)(lVar10 + 0x10) + *(long *)(lVar10 + 8) + 0x1315b) = 0;
      local_6c = FUN_021d7d60();
      puVar6 = PTR_DAT_04bb27d0;
      uVar12 = (ulong)local_68 >> 0x30;
      local_6b = (undefined1)local_38;
      local_68 = (undefined *)CONCAT26((ushort)uVar12 & 0xff00,0xff0000000000);
      if (-1 < DAT_053d0e30) {
        FUN_01db1df0(**(long **)PTR_DAT_04bb27d0 + 0x480,DAT_053d0e30,&local_68,&local_6c,2,0);
      }
      if ((*(long *)(lVar10 + 0x28) != 0) &&
         (plVar11 = *(long **)(*(long *)(lVar10 + 0x28) + 0x20), plVar11 != (long *)0x0)) {
        local_68 = *(undefined **)(lVar10 + 8);
        local_60 = *(char **)(lVar10 + 0x10);
        local_58 = 0x13230;
        (**(code **)(*plVar11 + 0x20))(plVar11,&local_68);
      }
      lVar14 = *(long *)(lVar10 + 8);
      lVar3 = *(long *)(lVar10 + 0x10);
      uVar5 = (undefined2)uVar4;
      local_60._0_4_ = CONCAT22(0x5ff,uVar5);
      local_38 = 0;
      local_32 = 0;
      local_68 = (undefined *)local_78;
      local_34 = 0xff00;
      if (-1 < DAT_053d08f0) {
        FUN_01db1df0(**(long **)puVar6 + 0x480,DAT_053d08f0,&local_38,&local_68,0xc,0);
      }
      FUN_0268e6d0(lVar3 + lVar14,&local_78,0,0,0,0,1,1);
      if ((*(long *)(lVar10 + 0x28) != 0) &&
         (plVar11 = *(long **)(*(long *)(lVar10 + 0x28) + 0x20), plVar11 != (long *)0x0)) {
        local_68 = *(undefined **)(lVar10 + 8);
        local_60 = *(char **)(lVar10 + 0x10);
        local_58 = 0x13230;
        (**(code **)(*plVar11 + 0x20))(plVar11,&local_68);
      }
      lVar14 = *(long *)(lVar10 + 8);
      lVar3 = *(long *)(lVar10 + 0x10);
      local_38 = 0;
      local_32 = 0;
      local_60._0_4_ = CONCAT22(0x1ff,uVar5);
      local_68 = (undefined *)local_80;
      local_34 = 0xff00;
      if (-1 < DAT_053d08f0) {
        FUN_01db1df0(**(long **)puVar6 + 0x480,DAT_053d08f0,&local_38,&local_68,0xc,0);
      }
      FUN_026934e8(lVar3 + lVar14,&local_80,0,0,0,0,1,1);
      if ((*(long *)(lVar10 + 0x28) != 0) &&
         (plVar11 = *(long **)(*(long *)(lVar10 + 0x28) + 0x20), plVar11 != (long *)0x0)) {
        local_68 = *(undefined **)(lVar10 + 8);
        local_60 = *(char **)(lVar10 + 0x10);
        local_58 = 0x13230;
        (**(code **)(*plVar11 + 0x20))(plVar11,&local_68);
      }
      lVar14 = *(long *)(lVar10 + 8);
      lVar3 = *(long *)(lVar10 + 0x10);
      local_38 = 0;
      local_32 = 0;
      local_60._0_4_ = CONCAT22(0x2ff,uVar5);
      local_68 = (undefined *)local_88;
      local_34 = 0xff00;
      if (-1 < DAT_053d08f0) {
        FUN_01db1df0(**(long **)puVar6 + 0x480,DAT_053d08f0,&local_38,&local_68,0xc,0);
      }
      FUN_0269296c(lVar3 + lVar14,&local_88,0,0,0,0,1,1);
    }
    if ((uVar9 & 1) == 0) {
      return;
    }
    if (*(long *)(lVar10 + 0x28) == 0) {
      return;
    }
    puVar13 = *(undefined8 **)(*(long *)(lVar10 + 0x28) + 0x18);
    if (puVar13 == (undefined8 *)0x0) {
      return;
    }
    (**(code **)*puVar13)();
    return;
  }
  uVar9 = FUN_021e71b0();
  puVar6 = PTR_DAT_04bb2020;
  if ((uVar4 < 10) && ((uVar9 & 1) != 0)) {
    if ((((&DAT_053fee41)[(ulong)uVar4 * 0xba0] == '\0') ||
        ((&DAT_053fede8)[(ulong)uVar4 * 0x174] == 0)) ||
       (*(int *)((&DAT_053fede8)[(ulong)uVar4 * 0x174] + 4) != 0x1e)) {
LAB_01f30cf0:
      puVar1 = PTR_DAT_04bb2020 + 0x10;
      local_60 = "ReserveStandSleep";
      local_68 = puVar1;
      sVar7 = FUN_02196ed0(&local_70,&local_68);
      if (sVar7 != 0) {
        local_60 = "ReserveStandSleep";
        uVar2 = *(undefined4 *)(PTR_DAT_04bb37e0 + 4);
        param_2[10] = *(undefined4 *)PTR_DAT_04bb37e0;
        param_2[0xb] = uVar2;
        local_68 = puVar1;
        FUN_021be8c0(&local_70,&local_68,0);
        return;
      }
      if (((9 < uVar4) || ((&DAT_053fee41)[(ulong)uVar4 * 0xba0] == '\0')) ||
         (((&DAT_053fede8)[(ulong)uVar4 * 0x174] == 0 ||
          (*(int *)((&DAT_053fede8)[(ulong)uVar4 * 0x174] + 4) != 7)))) goto LAB_01f30da0;
      local_68 = puVar6 + 0x10;
      local_60 = "CookingInDIYSchedule";
      iVar8 = FUN_0265c700(uVar4,&local_68);
      if (iVar8 != 0) goto LAB_01f30ccc;
      local_68 = (undefined *)0x2b79;
    }
    else {
LAB_01f30ccc:
      local_68 = (undefined *)0x3483;
    }
    FUN_0277d4ac(&local_68);
    param_2[10] = (undefined4)local_68;
    param_2[0xb] = local_68._4_4_;
  }
  else {
    if (uVar4 != 0xffffffff) goto LAB_01f30cf0;
LAB_01f30da0:
    FUN_01e64ce0(param_1,param_2);
  }
  return;
}

