
void FUN_0264b9e0(undefined4 *param_1)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  long *plVar4;
  ulong uVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  
  puVar1 = PTR_DAT_04bb46b0;
  if (*(long *)PTR_DAT_04bb46b0 == 0) {
    return;
  }
  lVar2 = FUN_026eec4c(*(long *)PTR_DAT_04bb46b0,*param_1);
  if (lVar2 == 0) {
    return;
  }
  lVar7 = lVar2 + 0x194b0;
  if (*(long *)(lVar2 + 0x194b8) == 0) {
    lVar7 = *(long *)(*(long *)puVar1 + 0x20);
    lVar2 = *(long *)(lVar7 + 0x1090);
  }
  else {
    lVar2 = *(long *)(lVar2 + 0x1a540);
  }
  if (lVar2 == 0) {
    uVar3 = 0;
  }
  else {
    if (*(undefined8 **)(lVar2 + 0x10) == (undefined8 *)0x0) {
      uVar3 = 0;
      plVar4 = *(long **)(lVar2 + 0x20);
    }
    else {
      uVar3 = (**(code **)**(undefined8 **)(lVar2 + 0x10))();
      uVar3 = uVar3 & 0xffffffff;
      if (*(long *)(lVar7 + 0x1090) == 0) goto LAB_0264ba9c;
      plVar4 = *(long **)(*(long *)(lVar7 + 0x1090) + 0x20);
    }
    if (plVar4 != (long *)0x0) {
      local_38 = *(undefined8 *)(lVar7 + 0x1070);
      uStack_30 = *(undefined8 *)(lVar7 + 0x1078);
      local_28 = 0x754;
      (**(code **)(*plVar4 + 0x20))(plVar4,&local_38);
    }
  }
LAB_0264ba9c:
  uVar5 = FUN_0277a1f4(*(long *)(lVar7 + 0x1078) + *(long *)(lVar7 + 0x1070),&DAT_0555ce20);
  if ((uVar5 & 1) != 0) {
    if ((*(long *)(lVar7 + 0x1090) != 0) &&
       (plVar4 = *(long **)(*(long *)(lVar7 + 0x1090) + 0x20), plVar4 != (long *)0x0)) {
      local_38 = *(undefined8 *)(lVar7 + 0x1070);
      uStack_30 = *(undefined8 *)(lVar7 + 0x1078);
      local_28 = 0x754;
      (**(code **)(*plVar4 + 0x20))(plVar4,&local_38);
    }
    FUN_0277a328(*(long *)(lVar7 + 0x1078) + *(long *)(lVar7 + 0x1070),&DAT_0555ce20);
  }
  if ((*(long *)(lVar7 + 0x1090) != 0) &&
     (plVar4 = *(long **)(*(long *)(lVar7 + 0x1090) + 0x20), plVar4 != (long *)0x0)) {
    local_38 = *(undefined8 *)(lVar7 + 0x1070);
    uStack_30 = *(undefined8 *)(lVar7 + 0x1078);
    local_28 = 0x754;
    (**(code **)(*plVar4 + 0x20))(plVar4,&local_38);
  }
  uVar5 = FUN_0277a1f4(*(long *)(lVar7 + 0x1078) + *(long *)(lVar7 + 0x1070),&DAT_0555ce28);
  if ((uVar5 & 1) != 0) {
    if ((*(long *)(lVar7 + 0x1090) != 0) &&
       (plVar4 = *(long **)(*(long *)(lVar7 + 0x1090) + 0x20), plVar4 != (long *)0x0)) {
      local_38 = *(undefined8 *)(lVar7 + 0x1070);
      uStack_30 = *(undefined8 *)(lVar7 + 0x1078);
      local_28 = 0x754;
      (**(code **)(*plVar4 + 0x20))(plVar4,&local_38);
    }
    FUN_0277a328(*(long *)(lVar7 + 0x1078) + *(long *)(lVar7 + 0x1070),&DAT_0555ce28);
  }
  if ((*(long *)(lVar7 + 0x1090) != 0) &&
     (plVar4 = *(long **)(*(long *)(lVar7 + 0x1090) + 0x20), plVar4 != (long *)0x0)) {
    local_38 = *(undefined8 *)(lVar7 + 0x1070);
    uStack_30 = *(undefined8 *)(lVar7 + 0x1078);
    local_28 = 0x754;
    (**(code **)(*plVar4 + 0x20))(plVar4,&local_38);
  }
  uVar5 = FUN_0277a1f4(*(long *)(lVar7 + 0x1078) + *(long *)(lVar7 + 0x1070),&DAT_0555ce30);
  if ((uVar5 & 1) != 0) {
    if ((*(long *)(lVar7 + 0x1090) != 0) &&
       (plVar4 = *(long **)(*(long *)(lVar7 + 0x1090) + 0x20), plVar4 != (long *)0x0)) {
      local_38 = *(undefined8 *)(lVar7 + 0x1070);
      uStack_30 = *(undefined8 *)(lVar7 + 0x1078);
      local_28 = 0x754;
      (**(code **)(*plVar4 + 0x20))(plVar4,&local_38);
    }
    FUN_0277a328(*(long *)(lVar7 + 0x1078) + *(long *)(lVar7 + 0x1070),&DAT_0555ce30);
  }
  if ((*(long *)(lVar7 + 0x1090) != 0) &&
     (plVar4 = *(long **)(*(long *)(lVar7 + 0x1090) + 0x20), plVar4 != (long *)0x0)) {
    local_38 = *(undefined8 *)(lVar7 + 0x1070);
    uStack_30 = *(undefined8 *)(lVar7 + 0x1078);
    local_28 = 0x754;
    (**(code **)(*plVar4 + 0x20))(plVar4,&local_38);
  }
  uVar5 = FUN_0277a1f4(*(long *)(lVar7 + 0x1078) + *(long *)(lVar7 + 0x1070),&DAT_0555ce38);
  if ((uVar5 & 1) != 0) {
    if ((*(long *)(lVar7 + 0x1090) != 0) &&
       (plVar4 = *(long **)(*(long *)(lVar7 + 0x1090) + 0x20), plVar4 != (long *)0x0)) {
      local_38 = *(undefined8 *)(lVar7 + 0x1070);
      uStack_30 = *(undefined8 *)(lVar7 + 0x1078);
      local_28 = 0x754;
      (**(code **)(*plVar4 + 0x20))(plVar4,&local_38);
    }
    FUN_0277a328(*(long *)(lVar7 + 0x1078) + *(long *)(lVar7 + 0x1070),&DAT_0555ce38);
  }
  if ((*(long *)(lVar7 + 0x1090) != 0) &&
     (plVar4 = *(long **)(*(long *)(lVar7 + 0x1090) + 0x20), plVar4 != (long *)0x0)) {
    local_38 = *(undefined8 *)(lVar7 + 0x1070);
    uStack_30 = *(undefined8 *)(lVar7 + 0x1078);
    local_28 = 0x754;
    (**(code **)(*plVar4 + 0x20))(plVar4,&local_38);
  }
  uVar5 = FUN_0277a1f4(*(long *)(lVar7 + 0x1078) + *(long *)(lVar7 + 0x1070),&DAT_0555ce40);
  if ((uVar5 & 1) != 0) {
    if ((*(long *)(lVar7 + 0x1090) != 0) &&
       (plVar4 = *(long **)(*(long *)(lVar7 + 0x1090) + 0x20), plVar4 != (long *)0x0)) {
      local_38 = *(undefined8 *)(lVar7 + 0x1070);
      uStack_30 = *(undefined8 *)(lVar7 + 0x1078);
      local_28 = 0x754;
      (**(code **)(*plVar4 + 0x20))(plVar4,&local_38);
    }
    FUN_0277a328(*(long *)(lVar7 + 0x1078) + *(long *)(lVar7 + 0x1070),&DAT_0555ce40);
  }
  if ((*(long *)(lVar7 + 0x1090) != 0) &&
     (plVar4 = *(long **)(*(long *)(lVar7 + 0x1090) + 0x20), plVar4 != (long *)0x0)) {
    local_38 = *(undefined8 *)(lVar7 + 0x1070);
    uStack_30 = *(undefined8 *)(lVar7 + 0x1078);
    local_28 = 0x754;
    (**(code **)(*plVar4 + 0x20))(plVar4,&local_38);
  }
  uVar5 = FUN_0277a1f4(*(long *)(lVar7 + 0x1078) + *(long *)(lVar7 + 0x1070),&DAT_0555ce48);
  if ((uVar5 & 1) != 0) {
    if ((*(long *)(lVar7 + 0x1090) != 0) &&
       (plVar4 = *(long **)(*(long *)(lVar7 + 0x1090) + 0x20), plVar4 != (long *)0x0)) {
      local_38 = *(undefined8 *)(lVar7 + 0x1070);
      uStack_30 = *(undefined8 *)(lVar7 + 0x1078);
      local_28 = 0x754;
      (**(code **)(*plVar4 + 0x20))(plVar4,&local_38);
    }
    FUN_0277a328(*(long *)(lVar7 + 0x1078) + *(long *)(lVar7 + 0x1070),&DAT_0555ce48);
  }
  if ((*(long *)(lVar7 + 0x1090) != 0) &&
     (plVar4 = *(long **)(*(long *)(lVar7 + 0x1090) + 0x20), plVar4 != (long *)0x0)) {
    local_38 = *(undefined8 *)(lVar7 + 0x1070);
    uStack_30 = *(undefined8 *)(lVar7 + 0x1078);
    local_28 = 0x754;
    (**(code **)(*plVar4 + 0x20))(plVar4,&local_38);
  }
  uVar5 = FUN_0277a1f4(*(long *)(lVar7 + 0x1078) + *(long *)(lVar7 + 0x1070),&DAT_0555ce50);
  if ((uVar5 & 1) != 0) {
    if ((*(long *)(lVar7 + 0x1090) != 0) &&
       (plVar4 = *(long **)(*(long *)(lVar7 + 0x1090) + 0x20), plVar4 != (long *)0x0)) {
      local_38 = *(undefined8 *)(lVar7 + 0x1070);
      uStack_30 = *(undefined8 *)(lVar7 + 0x1078);
      local_28 = 0x754;
      (**(code **)(*plVar4 + 0x20))(plVar4,&local_38);
    }
    FUN_0277a328(*(long *)(lVar7 + 0x1078) + *(long *)(lVar7 + 0x1070),&DAT_0555ce50);
  }
  if ((*(long *)(lVar7 + 0x1090) != 0) &&
     (plVar4 = *(long **)(*(long *)(lVar7 + 0x1090) + 0x20), plVar4 != (long *)0x0)) {
    local_38 = *(undefined8 *)(lVar7 + 0x1070);
    uStack_30 = *(undefined8 *)(lVar7 + 0x1078);
    local_28 = 0x754;
    (**(code **)(*plVar4 + 0x20))(plVar4,&local_38);
  }
  uVar5 = FUN_0277a1f4(*(long *)(lVar7 + 0x1078) + *(long *)(lVar7 + 0x1070),&DAT_0555ce58);
  if ((uVar5 & 1) != 0) {
    if ((*(long *)(lVar7 + 0x1090) != 0) &&
       (plVar4 = *(long **)(*(long *)(lVar7 + 0x1090) + 0x20), plVar4 != (long *)0x0)) {
      local_38 = *(undefined8 *)(lVar7 + 0x1070);
      uStack_30 = *(undefined8 *)(lVar7 + 0x1078);
      local_28 = 0x754;
      (**(code **)(*plVar4 + 0x20))(plVar4,&local_38);
    }
    FUN_0277a328(*(long *)(lVar7 + 0x1078) + *(long *)(lVar7 + 0x1070),&DAT_0555ce58);
  }
  if ((((uVar3 & 1) != 0) && (*(long *)(lVar7 + 0x1090) != 0)) &&
     (puVar6 = *(undefined8 **)(*(long *)(lVar7 + 0x1090) + 0x18), puVar6 != (undefined8 *)0x0)) {
    (**(code **)*puVar6)();
  }
  return;
}

