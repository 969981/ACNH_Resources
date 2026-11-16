
void FUN_025fe7dc(undefined8 param_1,undefined4 *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 *puVar6;
  ulong uVar7;
  long *plVar8;
  long lVar9;
  undefined4 uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  
  puVar3 = PTR_DAT_04bb46b0;
  if (*(long *)PTR_DAT_04bb46b0 == 0) {
    return;
  }
  lVar5 = FUN_026eec4c(*(long *)PTR_DAT_04bb46b0,*param_2);
  if (lVar5 == 0) {
    return;
  }
  lVar12 = lVar5 + 0x194b0;
  lVar9 = lVar12;
  if (*(long *)(lVar5 + 0x194b8) == 0) {
    lVar9 = *(long *)(*(long *)puVar3 + 0x20);
  }
  if ((*(long **)(lVar9 + 0x2a840) == (long *)0x0) ||
     (puVar6 = (undefined8 *)**(long **)(lVar9 + 0x2a840), puVar6 == (undefined8 *)0x0)) {
    uVar10 = *(undefined4 *)(*(long *)(lVar9 + 0x2a828) + *(long *)(lVar9 + 0x2a820) + 0xc);
  }
  else {
    uVar7 = (**(code **)*puVar6)();
    uVar10 = *(undefined4 *)(*(long *)(lVar9 + 0x2a828) + *(long *)(lVar9 + 0x2a820) + 0xc);
    if ((((uVar7 & 1) != 0) && (*(long *)(lVar9 + 0x2a840) != 0)) &&
       (puVar6 = *(undefined8 **)(*(long *)(lVar9 + 0x2a840) + 8), puVar6 != (undefined8 *)0x0)) {
      (**(code **)*puVar6)();
    }
  }
  FUN_025fea20(param_1,param_2,uVar10);
  puVar2 = PTR_DAT_04bb3350;
  puVar1 = PTR_DAT_04bb2268;
  lVar9 = *(long *)PTR_DAT_04bb3350;
  lVar13 = *(long *)PTR_DAT_04bb2268;
  uVar7 = nn::os::GetTlsValue(*(undefined4 *)(lVar9 + 0x68));
  puVar4 = PTR_DAT_04bc3578;
  if ((*(ulong *)(lVar9 + 0x60) != uVar7) &&
     (uVar7 = FUN_03f26e50(*(undefined8 *)PTR_DAT_04bc3578,5000), (uVar7 & 1) == 0)) {
    *(undefined1 *)(lVar13 + 0xb1) = 1;
  }
  FUN_025fee10(uVar7,param_2,uVar10);
  lVar11 = *(long *)puVar2;
  lVar13 = *(long *)puVar1;
  lVar9 = nn::os::GetTlsValue(*(undefined4 *)(lVar11 + 0x68));
  if ((*(long *)(lVar11 + 0x60) != lVar9) &&
     (uVar7 = FUN_03f26e50(*(undefined8 *)puVar4,5000), (uVar7 & 1) == 0)) {
    *(undefined1 *)(lVar13 + 0xb1) = 1;
  }
  if (*(long *)(lVar5 + 0x194b8) == 0) {
    lVar12 = *(long *)(*(long *)puVar3 + 0x20);
  }
  lVar5 = *(long *)(lVar12 + 0x2a840);
  if (lVar5 == 0) {
    uVar7 = 0;
  }
  else {
    if (*(undefined8 **)(lVar5 + 0x10) == (undefined8 *)0x0) {
      uVar7 = 0;
      plVar8 = *(long **)(lVar5 + 0x20);
    }
    else {
      uVar7 = (**(code **)**(undefined8 **)(lVar5 + 0x10))();
      uVar7 = uVar7 & 0xffffffff;
      if (*(long *)(lVar12 + 0x2a840) == 0) goto LAB_025fe9c0;
      plVar8 = *(long **)(*(long *)(lVar12 + 0x2a840) + 0x20);
    }
    if (plVar8 != (long *)0x0) {
      local_78 = *(long *)(lVar12 + 0x2a820);
      local_70 = *(undefined8 *)(lVar12 + 0x2a828);
      uStack_68 = 0x400;
      (**(code **)(*plVar8 + 0x20))(plVar8,&local_78);
    }
  }
LAB_025fe9c0:
  lVar5 = *(long *)(lVar12 + 0x2a828) + *(long *)(lVar12 + 0x2a820);
  *(int *)(lVar5 + 0xc) = *(int *)(lVar5 + 0xc) + 1;
  if ((((uVar7 & 1) != 0) && (*(long *)(lVar12 + 0x2a840) != 0)) &&
     (puVar6 = *(undefined8 **)(*(long *)(lVar12 + 0x2a840) + 0x18), puVar6 != (undefined8 *)0x0)) {
    (**(code **)*puVar6)();
  }
  return;
}

