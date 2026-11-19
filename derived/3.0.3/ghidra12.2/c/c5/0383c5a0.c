
undefined8 FUN_0383c5a0(long param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  int iVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined1 *puVar8;
  undefined1 *__src;
  void *__src_00;
  long *plVar9;
  byte local_1d0;
  undefined1 local_1cf;
  long local_1c8;
  undefined8 uStack_1c0;
  undefined *local_1b8;
  undefined *local_1b0;
  undefined8 local_1a8;
  undefined1 local_125;
  undefined *local_120;
  undefined1 *local_118;
  int local_110;
  undefined1 local_10c [127];
  undefined1 local_8d;
  undefined *local_88;
  undefined1 *puStack_80;
  int local_78;
  undefined1 local_74 [31];
  undefined1 local_55;
  
  local_125 = 0;
  uVar4 = (ulong)local_1a8 >> 0x20;
  local_1b0 = (undefined *)((long)&local_1a8 + 4);
  local_8d = 0;
  local_1a8 = CONCAT44((uint)uVar4 & 0xffffff00,0x80);
  local_110 = 0x80;
  local_118 = local_10c;
  local_1b8 = PTR_DAT_04bb2d88 + 0x10;
  local_10c[0] = 0;
  local_78 = 0x20;
  local_74[0] = 0;
  local_1d0 = *(byte *)(param_2 + 1);
  local_88 = PTR_DAT_04bb2028 + 0x10;
  local_55 = 0;
  uStack_1c0 = *(undefined8 *)(param_2 + 8);
  local_1c8 = param_1;
  local_120 = local_1b8;
  puStack_80 = local_74;
  (**(code **)(*(long *)(param_2 + 0x140) + 0x18))(param_2 + 0x140);
  puVar8 = *(undefined1 **)(param_2 + 0x148);
  if (local_74 != puVar8) {
    (**(code **)(*(long *)(param_2 + 0x140) + 0x18))(param_2 + 0x140);
    lVar6 = 0;
    do {
      if (*(char *)(*(long *)(param_2 + 0x148) + lVar6) == '\0') goto LAB_0383c6b0;
      lVar2 = *(long *)(param_2 + 0x148) + lVar6;
      if (*(char *)(lVar2 + 1) == '\0') {
        lVar6 = lVar6 + 1;
        goto LAB_0383c6b0;
      }
      if (*(char *)(lVar2 + 2) == '\0') {
        lVar6 = lVar6 + 2;
        goto LAB_0383c6b0;
      }
      lVar6 = lVar6 + 3;
    } while (lVar6 != 0x80001);
    lVar6 = 0;
LAB_0383c6b0:
    iVar3 = (int)lVar6;
    if (local_78 <= (int)lVar6) {
      iVar3 = local_78 + -1;
    }
    memcpy(local_74,puVar8,(long)iVar3);
    local_74[iVar3] = 0;
  }
  puVar8 = local_118;
  plVar9 = (long *)(param_2 + 0xa8);
  (**(code **)(*plVar9 + 0x18))(plVar9);
  __src = *(undefined1 **)(param_2 + 0xb0);
  if (puVar8 != __src) {
    (**(code **)(*(long *)(param_2 + 0xa8) + 0x18))(plVar9);
    lVar6 = 0;
    do {
      if (*(char *)(*(long *)(param_2 + 0xb0) + lVar6) == '\0') goto LAB_0383c750;
      lVar2 = *(long *)(param_2 + 0xb0) + lVar6;
      if (*(char *)(lVar2 + 1) == '\0') {
        lVar6 = lVar6 + 1;
        goto LAB_0383c750;
      }
      if (*(char *)(lVar2 + 2) == '\0') {
        lVar6 = lVar6 + 2;
        goto LAB_0383c750;
      }
      lVar6 = lVar6 + 3;
    } while (lVar6 != 0x80001);
    lVar6 = 0;
LAB_0383c750:
    iVar3 = (int)lVar6;
    if (local_110 <= (int)lVar6) {
      iVar3 = local_110 + -1;
    }
    memcpy(puVar8,__src,(long)iVar3);
    puVar8[iVar3] = 0;
  }
  puVar1 = local_1b0;
  plVar9 = (long *)(param_2 + 0x10);
  (**(code **)(*plVar9 + 0x18))(plVar9);
  __src_00 = *(void **)(param_2 + 0x18);
  if (puVar1 != __src_00) {
    (**(code **)(*(long *)(param_2 + 0x10) + 0x18))(plVar9);
    lVar6 = 0;
    do {
      if (*(char *)(*(long *)(param_2 + 0x18) + lVar6) == '\0') goto LAB_0383c7f0;
      lVar2 = *(long *)(param_2 + 0x18) + lVar6;
      if (*(char *)(lVar2 + 1) == '\0') {
        lVar6 = lVar6 + 1;
        goto LAB_0383c7f0;
      }
      if (*(char *)(lVar2 + 2) == '\0') {
        lVar6 = lVar6 + 2;
        goto LAB_0383c7f0;
      }
      lVar6 = lVar6 + 3;
    } while (lVar6 != 0x80001);
    lVar6 = 0;
LAB_0383c7f0:
    iVar3 = (int)lVar6;
    if ((int)local_1a8 <= (int)lVar6) {
      iVar3 = (int)local_1a8 + -1;
    }
    memcpy(puVar1,__src_00,(long)iVar3);
    *(undefined1 *)((long)puVar1 + (long)iVar3) = 0;
  }
  uVar4 = FUN_03838184((byte *)(param_1 + 8),&local_1d0);
  if ((uVar4 & 1) == 0) {
    uVar7 = 0;
  }
  else {
    local_1cf = *(undefined1 *)(param_2 + 1);
    puVar1 = PTR_DAT_04bb2020 + 0x10;
    local_1a8 = *(undefined8 *)(param_2 + 0x18);
    local_1d0 = *(byte *)(param_1 + 8) >> 3 & 1;
    uStack_1c0 = *(undefined8 *)(param_1 + 0x10);
    local_1c8 = *(undefined8 *)(param_1 + 0x18);
    if ((*(byte *)(param_1 + 8) & 10) != 2) {
      local_1c8 = 0;
    }
    local_1b8 = (undefined *)param_1;
    local_1b0 = puVar1;
    uVar4 = FUN_0383df58(param_1 + 0x1488,&local_1d0);
    local_1cf = *(undefined1 *)(param_2 + 1);
    local_1a8 = *(undefined8 *)(param_2 + 0xb0);
    local_1d0 = *(byte *)(param_1 + 8) >> 3 & 1;
    uStack_1c0 = *(undefined8 *)(param_1 + 0x10);
    local_1c8 = *(undefined8 *)(param_1 + 0x18);
    if ((*(byte *)(param_1 + 8) & 10) != 2) {
      local_1c8 = 0;
    }
    local_1b8 = (undefined *)param_1;
    local_1b0 = puVar1;
    uVar5 = FUN_0383404c(param_1 + 0x1530,&local_1d0);
    uVar7 = 0;
    if (((uVar4 & 1) != 0) && ((uVar5 & 1) != 0)) {
      if ((*(char *)(param_1 + 9) == '\0') &&
         ((((*(byte *)(param_1 + 8) >> 1 & 1) != 0 && ((*(byte *)(param_1 + 0x1490) >> 1 & 1) != 0))
          && ((*(byte *)(param_1 + 0x1538) >> 1 & 1) != 0)))) {
        uVar7 = 1;
        if (*(long **)(param_1 + 0x10) != (long *)0x0) {
          (**(code **)(**(long **)(param_1 + 0x10) + 0x28))();
          *(undefined1 *)(param_1 + 9) = 1;
        }
      }
      else {
        uVar7 = 1;
      }
    }
  }
  return uVar7;
}

