
uint FUN_012e5290(long param_1,undefined8 *param_2,long param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  ulong uVar6;
  long lVar7;
  long *plVar8;
  undefined8 *puVar9;
  long *plVar10;
  undefined *puVar11;
  int iVar12;
  int iVar13;
  undefined *local_c0;
  int local_b8;
  int iStack_b4;
  undefined8 local_b0;
  undefined **local_a8;
  int local_a0;
  int iStack_9c;
  undefined **local_98;
  int local_90;
  int iStack_8c;
  undefined *local_88;
  undefined *puStack_80;
  undefined8 local_78;
  undefined *local_70;
  undefined8 local_68;
  
  plVar10 = (long *)(param_1 + 0x28);
  uVar6 = (**(code **)(*plVar10 + 0x10))(plVar10);
  if ((((uVar6 & 1) == 0) || (lVar7 = (**(code **)*plVar10)(plVar10), lVar7 == 0)) ||
     (uVar6 = FUN_0277da10(param_2), puVar11 = PTR_DAT_04bb2010, (uVar6 & 1) == 0)) {
LAB_012e54f0:
    uVar5 = 0;
  }
  else {
    local_78 = 0;
    local_88 = PTR_DAT_04bbc1a0 + 0x10;
    puStack_80 = PTR_DAT_04bb2010 + 0x10;
    local_68 = 0;
    local_70 = puStack_80;
    FUN_012e5518(&local_88,param_2);
    local_90 = *(int *)(param_3 + 8);
    iStack_8c = *(int *)(param_3 + 0xc);
    iVar2 = (int)local_78 + local_90;
    iVar12 = local_78._4_4_ + iStack_8c;
    local_68._4_4_ = local_68._4_4_ + iStack_8c;
    local_68._0_4_ = (int)local_68 + local_90;
    iVar1 = local_68._4_4_ + 1;
    local_78._0_4_ = iVar2;
    local_78._4_4_ = iVar12;
    if (iVar1 != iVar12) {
      iVar13 = iVar2;
      do {
        iVar3 = *(int *)(param_1 + 0x10);
        iVar4 = *(int *)(param_1 + 0x14);
        plVar8 = (long *)(*(code *)**(undefined8 **)(param_1 + 0x28))(plVar10);
        uVar5 = (**(code **)(*plVar8 + 0x18))();
        if (uVar5 <= (uint)(iVar13 - iVar3)) goto LAB_012e54f0;
        plVar8 = (long *)(**(code **)*plVar10)(plVar10);
        uVar5 = (**(code **)(*plVar8 + 0x20))();
        if (uVar5 <= (uint)(iVar12 - iVar4)) goto LAB_012e54f0;
        if (iVar13 < (int)local_68) {
          iVar13 = iVar13 + 1;
        }
        else {
          iVar12 = iVar12 + 1;
          iVar13 = (int)local_78;
        }
      } while ((iVar2 != iVar13) || (iVar1 != iVar12));
      local_90 = *(int *)(param_3 + 8);
      iStack_8c = *(int *)(param_3 + 0xc);
      puVar11 = PTR_DAT_04bb2010;
    }
    local_98 = &PTR_FUN_0498d600;
    local_90 = local_90 - *(int *)(param_1 + 0x10);
    iStack_8c = iStack_8c - *(int *)(param_1 + 0x14);
    uVar5 = FUN_012e5734(param_1,&local_98);
    iVar1 = (int)local_78;
    if (((uVar5 & 1) != 0) && (iVar2 = local_68._4_4_ + 1, iVar2 != local_78._4_4_)) {
      iVar12 = local_78._4_4_;
      iVar13 = (int)local_78;
      do {
        local_a8 = &PTR_FUN_0498d600;
        local_a0 = iVar13 - *(int *)(param_1 + 0x10);
        iStack_9c = iVar12 - *(int *)(param_1 + 0x14);
        uVar6 = FUN_012e5734(param_1,&local_a8);
        if ((uVar6 & 1) != 0) {
          if ((iVar13 == *(int *)(param_3 + 8)) && (iVar12 == *(int *)(param_3 + 0xc))) {
            puVar9 = param_2;
          }
          else {
            local_b0 = 0xfffe;
            FUN_0277d4ac(&local_b0);
            local_b8 = iVar13 - *(int *)(param_3 + 8);
            iStack_b4 = iVar12 - *(int *)(param_3 + 0xc);
            local_c0 = puVar11 + 0x10;
            uVar6 = FUN_0277eec0(param_2,&local_b0,&local_c0);
            if ((uVar6 & 1) == 0) goto LAB_012e54c8;
            puVar9 = &local_b0;
          }
          FUN_012e5870(param_1,puVar9,&local_a8);
        }
LAB_012e54c8:
        if (iVar13 < (int)local_68) {
          iVar13 = iVar13 + 1;
        }
        else {
          iVar12 = iVar12 + 1;
          iVar13 = (int)local_78;
        }
      } while ((iVar1 != iVar13) || (iVar2 != iVar12));
    }
  }
  return uVar5 & 1;
}

