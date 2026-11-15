
void FUN_020d4248(char *param_1)

{
  void *__s;
  char cVar1;
  ulong uVar2;
  long *plVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  
  if (DAT_05574040 == 0) {
    return;
  }
  if (9 < (byte)param_1[1]) {
    return;
  }
  if (*(long *)(DAT_05574040 + 0x10) == 0) {
    return;
  }
  lVar5 = *(long *)(*(long *)(DAT_05574040 + 0x10) + ((long)param_1[1] & 0xffffffffU) * 8 + 0x10);
  if (lVar5 == 0) {
    return;
  }
  lVar5 = *(long *)(lVar5 + 0x18);
  if (lVar5 == 0) {
    return;
  }
  lVar6 = *(long *)(lVar5 + 0x28);
  if (lVar6 == 0) {
    uVar2 = 0;
    lVar7 = *(long *)PTR_DAT_04bb6c70;
  }
  else {
    if (*(undefined8 **)(lVar6 + 0x10) == (undefined8 *)0x0) {
      uVar2 = 0;
      lVar7 = *(long *)PTR_DAT_04bb6c70;
    }
    else {
      uVar2 = (**(code **)**(undefined8 **)(lVar6 + 0x10))();
      lVar6 = *(long *)(lVar5 + 0x28);
      uVar2 = uVar2 & 0xffffffff;
      lVar7 = *(long *)PTR_DAT_04bb6c70;
      if (lVar6 == 0) goto LAB_020d4324;
    }
    plVar3 = *(long **)(lVar6 + 0x20);
    if (plVar3 != (long *)0x0) {
      local_58 = *(undefined8 *)(lVar5 + 8);
      uStack_50 = *(undefined8 *)(lVar5 + 0x10);
      local_48 = 0x13230;
      (**(code **)(*plVar3 + 0x20))(plVar3,&local_58);
    }
  }
LAB_020d4324:
  cVar1 = *param_1;
  lVar6 = lVar7 + (ulong)(uint)(int)cVar1 * 0x13298;
  if (7 < (uint)(int)cVar1) {
    lVar6 = lVar7;
  }
  if (*(char *)(lVar6 + 0x13270) == '\0') {
    FUN_026b1890(lVar6,*(long *)(lVar5 + 0x10) + *(long *)(lVar5 + 8));
    FUN_02699290(lVar6);
    FUN_026b26a0(lVar6);
    *(undefined4 *)(lVar6 + 0x13238) = 0;
    *(char *)(lVar6 + 0x1323d) = cVar1;
    *(undefined1 *)(lVar6 + 0x1323c) = 4;
    *(undefined1 *)(lVar6 + 0x1323e) = 0;
    *(long *)(lVar6 + 0x13240) = lVar6;
    *(undefined8 *)(lVar6 + 0x13248) = 0x13230;
    *(undefined4 *)(lVar6 + 0x13264) = 1;
    *(undefined1 *)(lVar6 + 0x13270) = 1;
  }
  if ((*(long *)(lVar5 + 0x28) != 0) &&
     (plVar3 = *(long **)(*(long *)(lVar5 + 0x28) + 0x20), plVar3 != (long *)0x0)) {
    local_58 = *(undefined8 *)(lVar5 + 8);
    uStack_50 = *(undefined8 *)(lVar5 + 0x10);
    local_48 = 0x13230;
    (**(code **)(*plVar3 + 0x20))(plVar3,&local_58);
  }
  __s = (void *)(*(long *)(lVar5 + 0x10) + *(long *)(lVar5 + 8));
  memset(__s,0,0x13230);
  FUN_0268abb0(__s);
  if ((((uVar2 & 1) != 0) && (*(long *)(lVar5 + 0x28) != 0)) &&
     (puVar4 = *(undefined8 **)(*(long *)(lVar5 + 0x28) + 0x18), puVar4 != (undefined8 *)0x0)) {
    (**(code **)*puVar4)();
  }
  return;
}

