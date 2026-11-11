
undefined8
FUN_003da600(long param_1,long param_2,void *param_3,undefined4 param_4,long param_5,
            undefined8 param_6,long param_7)

{
  uint uVar1;
  bool bVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  int iVar10;
  long lVar11;
  int iVar12;
  int iVar13;
  long local_148;
  undefined8 local_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined1 auStack_118 [16];
  long local_108;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined4 local_e8 [2];
  undefined1 auStack_e0 [128];
  
  local_f0 = nn::os::GetSystemTick();
  bVar2 = *(char *)(param_7 + 0x30) != '\0';
  plVar4 = *(long **)(param_1 + 0x3600);
  if (bVar2 && plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 0x30))();
  }
  if ((*(uint *)(param_1 + 0x314) < *(uint *)(param_1 + 0x310)) &&
     (*(char *)(*(long *)(param_1 + 0x30) + 8) != '\0')) {
    *(undefined4 *)(param_1 + 0x310) = *(undefined4 *)(param_1 + 0x318);
    lVar5 = nn::os::GetSystemTick();
    (**(code **)(**(long **)(param_1 + 0x28) + 0x30))
              (*(long **)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x328),0);
    local_148 = nn::os::GetSystemTick();
    if (*(char *)(param_1 + 0x59) == '\0') {
      lVar11 = *(long *)(param_1 + 0x3608);
joined_r0x003da944:
      if (lVar11 != 0) {
        (**(code **)(**(long **)(param_1 + 0x3600) + 0x28))();
      }
    }
    else {
      lVar11 = *(long *)(param_1 + 0x3608);
      if (*(int *)(param_1 + 0x318) == 0) goto joined_r0x003da944;
      if (lVar11 == 0) {
        return 0;
      }
      uVar1 = *(uint *)(param_1 + 0x50);
      if (0 < (int)uVar1) {
        memcpy(local_e8,param_3,(ulong)uVar1 << 3);
      }
      uVar6 = (**(code **)(**(long **)(param_1 + 0x3600) + 0x20))
                        (*(long **)(param_1 + 0x3600),local_e8,*(undefined8 *)(param_1 + 0x28),
                         (ulong)uVar1,2);
      if ((uVar6 & 1) == 0) {
        return 0;
      }
    }
    local_148 = local_148 - lVar5;
    FUN_003dc13c(param_1 + 0x340,*(undefined8 *)(*(long *)(param_1 + 0x30) + 0x10));
    *(undefined1 *)(param_1 + 0x338) = 1;
    if (param_5 != 0) goto LAB_003da71c;
LAB_003da97c:
    if (*(char *)(param_1 + 0x338) == '\0') {
      iVar13 = 0;
      lVar5 = 0;
      iVar10 = *(int *)(param_1 + 0x310);
      iVar12 = *(int *)(param_1 + 0x318);
      goto joined_r0x003da7b0;
    }
    lVar5 = *(long *)(param_1 + 0x330);
    iVar13 = 0;
    iVar10 = *(int *)(param_1 + 0x310);
    iVar12 = *(int *)(param_1 + 0x318);
    if (iVar12 == 0) goto LAB_003da9a0;
LAB_003da7b4:
    if (*(char *)(param_1 + 0x59) != '\0') {
      iVar12 = iVar12 + -1;
    }
    if (iVar12 == iVar10) {
LAB_003da7c8:
      uVar7 = (**(code **)(**(long **)(param_1 + 0x28) + 0x38))();
      iVar10 = *(int *)(param_1 + 0x310);
      *(undefined8 *)(param_1 + 0x328) = uVar7;
    }
  }
  else {
    local_148 = 0;
    if (param_5 == 0) goto LAB_003da97c;
LAB_003da71c:
    lVar5 = *(long *)(param_1 + 0x368);
    lVar11 = *(long *)(param_1 + 0x378);
    if (lVar5 + param_5 < lVar11) {
      iVar13 = 0;
    }
    else {
      iVar13 = 0;
      do {
        uVar6 = FUN_003dc0a8(param_1 + 0x340,param_1,*(undefined8 *)(param_1 + 0x30));
        if ((uVar6 & 1) == 0) {
          *(undefined1 *)(param_1 + 0x339) = 1;
          *(undefined8 *)(param_2 + 0x28) = 0;
          return 1;
        }
        lVar8 = lVar5 - lVar11;
        lVar5 = *(long *)(param_1 + 0x368);
        iVar13 = iVar13 + 1;
        lVar11 = *(long *)(param_1 + 0x378);
        param_5 = lVar8 + param_5;
      } while (lVar11 <= lVar5 + param_5);
    }
    FUN_003dc144(param_1 + 0x340,param_5);
    FUN_003dafd0(param_1,param_3);
    lVar5 = *(long *)(param_1 + 0x368) -
            *(long *)(*(long *)(param_1 + 0x30) + 0x38) * (ulong)*(uint *)(param_1 + 0x310);
    iVar10 = *(int *)(param_1 + 0x310);
    iVar12 = *(int *)(param_1 + 0x318);
joined_r0x003da7b0:
    if (iVar12 != 0) goto LAB_003da7b4;
LAB_003da9a0:
    if (iVar10 == 0) goto LAB_003da7c8;
  }
  bVar3 = iVar10 == *(int *)(param_1 + 0x314);
  uVar7 = *(undefined8 *)(param_1 + 0x368);
  lVar11 = 0x50;
  if (!bVar3) {
    lVar11 = 0x38;
  }
  lVar11 = *(long *)(*(long *)(param_1 + 0x30) + lVar11);
  lVar8 = (**(code **)(**(long **)(param_1 + 0x28) + 0x38))();
  lVar9 = (**(code **)(**(long **)(param_1 + 0x28) + 0x40))();
  if (lVar9 <= lVar8) {
    lVar11 = 0;
  }
  if (lVar11 != 0) {
    if (*(long *)(param_1 + 0x3608) == 0) {
      return 0;
    }
    uVar1 = *(uint *)(param_1 + 0x50);
    if (0 < (int)uVar1) {
      memcpy(local_e8,param_3,(ulong)uVar1 << 3);
    }
    uVar6 = (**(code **)(**(long **)(param_1 + 0x3600) + 0x20))
                      (*(long **)(param_1 + 0x3600),local_e8,*(undefined8 *)(param_1 + 0x28),
                       (ulong)uVar1,bVar3);
    if ((uVar6 & 1) == 0) {
      return 0;
    }
    if (0 < *(int *)(param_1 + 0x50)) {
      lVar8 = 0;
      do {
        FUN_003b6c7c(*(undefined8 *)((long)param_3 + lVar8 * 8),lVar11 << 1);
        lVar8 = lVar8 + 1;
      } while (lVar8 < *(int *)(param_1 + 0x50));
    }
    if (*(char *)(*(long *)(param_1 + 0x30) + 8) == '\0') {
      lVar8 = (**(code **)(**(long **)(param_1 + 0x28) + 0x38))();
      lVar9 = (**(code **)(**(long **)(param_1 + 0x28) + 0x40))();
      if (lVar9 <= lVar8) {
        *(undefined4 *)(param_1 + 0x314) = *(undefined4 *)(param_1 + 0x310);
      }
    }
  }
  FUN_003dc144(param_1 + 0x340,lVar11);
  *(undefined1 *)(param_1 + 0x338) = 0;
  uVar1 = *(int *)(param_1 + 0x310) + 1;
  *(uint *)(param_1 + 0x310) = uVar1;
  if (*(uint *)(param_1 + 0x314) < uVar1) {
    if (*(char *)(*(long *)(param_1 + 0x30) + 8) == '\0') {
      *(undefined1 *)(param_1 + 0x339) = 1;
    }
    else {
      iVar13 = iVar13 + 1;
    }
  }
  *(undefined1 *)(param_2 + 0x48) = 0;
  *(undefined4 *)(param_2 + 0x20) = param_4;
  *(int *)(param_2 + 0xac) = iVar13;
  *(long *)(param_2 + 0x28) = lVar11;
  *(undefined8 *)(param_2 + 0x30) = uVar7;
  *(long *)(param_2 + 0x38) = lVar5;
  *(long *)(param_2 + 0x40) = lVar11 << 1;
  *(undefined1 *)(param_2 + 0xb0) = *(undefined1 *)(param_1 + 0x339);
  if (!bVar2 || plVar4 == (long *)0x0) {
    return 1;
  }
  local_f8 = nn::os::GetSystemTick();
  (**(code **)(**(long **)(param_1 + 0x3600) + 0x38))(auStack_118);
  local_128 = 0;
  uStack_120 = 0;
  local_108 = local_108 + local_148;
  local_138 = 0;
  local_130 = 0;
  local_e8[0] = 1;
  if ((*(long *)(param_1 + 0x300) == 0) || (*(long *)(param_1 + 0x308) == 0)) goto LAB_003dab00;
  if (*(long **)(param_1 + 0x28) == (long *)0x0) {
LAB_003daab0:
    local_128 = 0;
    local_130 = 0;
  }
  else {
    uVar6 = (**(code **)(**(long **)(param_1 + 0x28) + 0x80))();
    if ((uVar6 & 1) == 0) {
      plVar4 = *(long **)(param_1 + 0x28);
      local_138 = 0;
    }
    else {
      local_138 = (**(code **)(**(long **)(param_1 + 0x28) + 0xa0))();
      plVar4 = *(long **)(param_1 + 0x28);
    }
    if (plVar4 == (long *)0x0) goto LAB_003daab0;
    uVar6 = (**(code **)(*plVar4 + 0x80))();
    if ((uVar6 & 1) == 0) {
      local_130 = 0;
    }
    else {
      local_130 = (**(code **)(**(long **)(param_1 + 0x28) + 0xa8))();
    }
    plVar4 = *(long **)(param_1 + 0x28);
    if ((plVar4 == (long *)0x0) || (uVar6 = (**(code **)(*plVar4 + 0x80))(plVar4), (uVar6 & 1) == 0)
       ) {
      local_128 = 0;
    }
    else {
      local_128 = (**(code **)(**(long **)(param_1 + 0x28) + 0x38))();
    }
  }
  uStack_120 = *(undefined8 *)(param_1 + 0x20);
LAB_003dab00:
  FUN_003c9e48(auStack_e0,&local_f0,&local_f8,auStack_118,&local_138);
  FUN_003c9ee0(param_7,local_e8);
  return 1;
}

