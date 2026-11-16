
void FUN_026802e0(undefined8 param_1,int param_2)

{
  undefined *puVar1;
  int *piVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  long lVar7;
  undefined8 *puVar8;
  ulong uVar9;
  long *plVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  undefined *local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  int local_5c;
  undefined4 local_58;
  undefined **local_50;
  undefined *puStack_48;
  
  lVar7 = FUN_0266c700();
  if (lVar7 != 0) {
    if ((*(long **)(lVar7 + 0x28) == (long *)0x0) ||
       (puVar8 = (undefined8 *)**(long **)(lVar7 + 0x28), puVar8 == (undefined8 *)0x0)) {
      uVar5 = 1;
    }
    else {
      uVar5 = (**(code **)*puVar8)();
      uVar5 = uVar5 ^ 1;
    }
    iVar6 = 0;
    lVar11 = *(long *)(lVar7 + 0x10) + *(long *)(lVar7 + 8);
    uVar3 = *(uint *)(lVar11 + 0x10);
    if ((*(byte *)(lVar11 + 0x17) != 0 ||
         (((ulong)uVar3 != 0 || *(ushort *)(lVar11 + 0x14) != 0) || *(byte *)(lVar11 + 0x16) != 0))
       && ((uint)*(byte *)(lVar11 + 0x17) ==
           ((uVar3 + (uVar3 >> 0x10) + (uVar3 >> 0x18) + (uVar3 >> 8)) - 0x2d & 0xff))) {
      lVar13 = (ulong)uVar3 << ((ulong)(0x1d - *(byte *)(lVar11 + 0x16)) & 0x3f);
      iVar6 = ((int)lVar13 - (uint)*(ushort *)(lVar11 + 0x14)) + (int)((ulong)lVar13 >> 0x20) +
              -0x7f1cd4ef;
    }
    if ((((uVar5 & 1) == 0) && (*(long *)(lVar7 + 0x28) != 0)) &&
       (puVar8 = *(undefined8 **)(*(long *)(lVar7 + 0x28) + 8), puVar8 != (undefined8 *)0x0)) {
      (**(code **)*puVar8)();
    }
    if (iVar6 != 0) {
      return;
    }
  }
  lVar7 = FUN_0266c580(param_1);
  if (lVar7 == 0) {
    return;
  }
  lVar11 = *(long *)(lVar7 + 0xd0);
  if (lVar11 == 0) {
    uVar9 = 0;
  }
  else {
    if (*(undefined8 **)(lVar11 + 0x10) == (undefined8 *)0x0) {
      uVar9 = 0;
      plVar10 = *(long **)(lVar11 + 0x20);
    }
    else {
      uVar9 = (**(code **)**(undefined8 **)(lVar11 + 0x10))();
      uVar9 = uVar9 & 0xffffffff;
      if (*(long *)(lVar7 + 0xd0) == 0) goto LAB_0268043c;
      plVar10 = *(long **)(*(long *)(lVar7 + 0xd0) + 0x20);
    }
    if (plVar10 != (long *)0x0) {
      local_80 = *(undefined **)(lVar7 + 0xb0);
      uStack_78 = *(undefined8 *)(lVar7 + 0xb8);
      local_70 = 8;
      (**(code **)(*plVar10 + 0x20))(plVar10,&local_80);
    }
  }
LAB_0268043c:
  piVar2 = (int *)(*(long *)(lVar7 + 0xb8) + *(long *)(lVar7 + 0xb0));
  uVar5 = nn::os::GetSystemTick();
  uVar3 = (uVar5 ^ uVar5 >> 0x1e) * 0x6c078965 + 1;
  uVar5 = uVar3 ^ uVar3 * 0x800;
  uVar4 = (uVar3 ^ uVar3 >> 0x1e) * 0x6c078965 + 2;
  uVar3 = uVar4 ^ uVar4 * 0x800;
  uVar4 = (uVar4 ^ uVar4 >> 0x1e) * 0x6c078965 + 3;
  uVar4 = (uVar4 ^ uVar4 >> 0x1e) * 0x6c078965 + 4;
  uVar5 = uVar5 >> 8 ^ uVar4 >> 0x13 ^ uVar5 ^ uVar4;
  *(short *)(piVar2 + 1) = (short)(uVar5 >> 0x10);
  uVar12 = (ulong)(uVar3 >> 8 ^ uVar5 >> 0x13 ^ uVar3 ^ uVar5) * 0x1b;
  *(char *)((long)piVar2 + 6) = (char)(uVar12 >> 0x20);
  lVar11 = (ulong)(param_2 + 0x7f1cd4ef + (uVar5 >> 0x10)) << (uVar12 >> 0x20) + 3;
  iVar6 = (int)((ulong)lVar11 >> 0x20) + (int)lVar11;
  *piVar2 = iVar6;
  *(char *)((long)piVar2 + 7) =
       (char)iVar6 + (char)((uint)iVar6 >> 0x10) + (char)((uint)iVar6 >> 0x18) +
       (char)((uint)iVar6 >> 8) + -0x2d;
  if ((((uVar9 & 1) != 0) && (*(long *)(lVar7 + 0xd0) != 0)) &&
     (puVar8 = *(undefined8 **)(*(long *)(lVar7 + 0xd0) + 0x18), puVar8 != (undefined8 *)0x0)) {
    (**(code **)*puVar8)();
  }
  puStack_48 = PTR_s_atm_loan_set_04a85348;
  local_50 = &PTR_LAB_048f9770;
  FUN_025ffac8(&local_80,&local_50,param_1);
  local_50 = (undefined **)((ulong)local_50 & 0xffffff0000000000);
  puVar1 = PTR_DAT_04bc3238 + 0x10;
  local_58 = 0;
  local_80 = puVar1;
  FUN_0258cbf8(&local_80,&local_50);
  local_80 = puVar1;
  iVar6 = FUN_0258cec0(&local_80);
  if (iVar6 != -1) {
    iVar6 = (**(code **)(local_80 + 0x20))(&local_80);
    local_50 = (undefined **)CONCAT44(local_50._4_4_,iVar6);
    if (iVar6 < 0xd) goto LAB_026805bc;
  }
  if (local_5c == 0) {
    local_5c = 1;
  }
LAB_026805bc:
  FUN_02601530(&local_80);
  return;
}

