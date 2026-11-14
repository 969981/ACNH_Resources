
void FUN_01b387f4(undefined4 *param_1,long param_2)

{
  uint uVar1;
  undefined *puVar2;
  bool bVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  long lVar7;
  undefined8 *puVar8;
  long lVar9;
  long *plVar10;
  undefined8 uVar11;
  long lVar12;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  
  puVar2 = PTR_DAT_04bb46b0;
  lVar7 = FUN_026f43ec(*(undefined8 *)PTR_DAT_04bb46b0,*param_1);
  if (lVar7 != 0) {
    if ((*(long *)(lVar7 + 0x28) == 0) ||
       (puVar8 = *(undefined8 **)(*(long *)(lVar7 + 0x28) + 0x10), puVar8 == (undefined8 *)0x0)) {
      uVar5 = 1;
      lVar9 = *(long *)puVar2;
    }
    else {
      uVar5 = (**(code **)*puVar8)();
      uVar5 = uVar5 ^ 1;
      lVar9 = *(long *)puVar2;
    }
    if ((lVar9 != 0) && (lVar9 = FUN_026eec4c(lVar9,*param_1), lVar9 != 0)) {
      lVar12 = lVar9 + 0x194b0;
      if (*(long *)(lVar9 + 0x194b8) == 0) {
        lVar12 = *(long *)(*(long *)puVar2 + 0x20);
      }
      if ((*(long **)(lVar12 + 0x2a648) == (long *)0x0) ||
         (puVar8 = (undefined8 *)**(long **)(lVar12 + 0x2a648), puVar8 == (undefined8 *)0x0)) {
        uVar6 = 1;
      }
      else {
        uVar6 = (**(code **)*puVar8)();
        uVar6 = uVar6 ^ 1;
      }
      puVar2 = PTR_DAT_04bb28f8;
      bVar3 = *(int *)(param_2 + 8) == 1;
      uVar1 = *(uint *)(*(long *)(lVar12 + 0x2a630) + *(long *)(lVar12 + 0x2a628));
      bVar4 = uVar1 != **(uint **)PTR_DAT_04bb3448;
      if (bVar3 && bVar4) {
        if (0xf < uVar1) {
          uVar1 = 0;
        }
        if ((*(long *)PTR_DAT_04bb2720 == 0) ||
           (lVar9 = *(long *)(*(long *)PTR_DAT_04bb2720 + 0x330), lVar9 == 0)) {
          uVar11 = 0;
        }
        else {
          uVar11 = *(undefined8 *)(lVar9 + 0xd0);
        }
        FUN_01bdeff8(*(long *)PTR_DAT_04bb28f8 + 0x2688,uVar1,uVar11);
      }
      uVar11 = *(undefined8 *)PTR_DAT_04bb4fa8;
      if ((*(long *)(lVar7 + 0x28) != 0) &&
         (plVar10 = *(long **)(*(long *)(lVar7 + 0x28) + 0x20), plVar10 != (long *)0x0)) {
        local_78 = *(undefined8 *)(lVar7 + 8);
        uStack_70 = *(undefined8 *)(lVar7 + 0x10);
        local_68 = 0x47430;
        (**(code **)(*plVar10 + 0x20))(plVar10,&local_78);
      }
      uVar1 = DAT_0532dde8;
      DAT_0532dde8 = DAT_0532ddec;
      uVar1 = uVar1 ^ uVar1 << 0xb;
      DAT_0532ddec = DAT_0532ddf0;
      DAT_0532ddf0 = DAT_0532ddf4;
      DAT_0532ddf4 = uVar1 >> 8 ^ DAT_0532ddf4 >> 0x13 ^ uVar1 ^ DAT_0532ddf4;
      FUN_01b36130(uVar11,*(long *)(lVar7 + 0x10) + *(long *)(lVar7 + 8),*param_1,param_2);
      if (bVar3 && bVar4) {
        FUN_01bdf1d8(*(long *)puVar2 + 0x2688);
      }
      if ((*(long *)(lVar7 + 0x28) != 0) &&
         (plVar10 = *(long **)(*(long *)(lVar7 + 0x28) + 0x20), plVar10 != (long *)0x0)) {
        local_78 = *(undefined8 *)(lVar7 + 8);
        uStack_70 = *(undefined8 *)(lVar7 + 0x10);
        local_68 = 0x47430;
        (**(code **)(*plVar10 + 0x20))(plVar10,&local_78);
      }
      FUN_02827bb0(*(long *)(lVar7 + 0x10) + *(long *)(lVar7 + 8),*param_1);
      if ((((uVar6 & 1) == 0) && (*(long *)(lVar12 + 0x2a648) != 0)) &&
         (puVar8 = *(undefined8 **)(*(long *)(lVar12 + 0x2a648) + 8), puVar8 != (undefined8 *)0x0))
      {
        (**(code **)*puVar8)();
      }
    }
    if ((((uVar5 & 1) == 0) && (*(long *)(lVar7 + 0x28) != 0)) &&
       (puVar8 = *(undefined8 **)(*(long *)(lVar7 + 0x28) + 0x18), puVar8 != (undefined8 *)0x0)) {
      (**(code **)*puVar8)();
    }
  }
  return;
}

