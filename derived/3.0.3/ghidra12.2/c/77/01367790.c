
/* WARNING: Removing unreachable block (ram,0x013677d8) */
/* WARNING: Removing unreachable block (ram,0x013677c8) */
/* WARNING: Removing unreachable block (ram,0x013677e4) */
/* WARNING: Removing unreachable block (ram,0x01367820) */

void FUN_01367790(void)

{
  void *__s;
  undefined4 *puVar1;
  long lVar2;
  undefined **ppuVar3;
  long lVar4;
  undefined8 *puVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  uint uVar11;
  uint uVar12;
  undefined8 local_b0;
  undefined ***local_a8;
  uint *local_a0;
  uint local_90 [2];
  long local_88;
  long lStack_80;
  undefined **local_78;
  long local_70;
  char local_68;
  byte local_67;
  
  lVar10 = *(long *)(DAT_0519d040 + 0x1f8);
  if (lVar10 == 0) {
    return;
  }
  if (DAT_05574040 == 0) {
    return;
  }
  local_b0 = (undefined **)CONCAT44((int)((ulong)local_b0 >> 0x20),1);
  if (((*(byte *)(DAT_05574040 + 0x50d) ^ 0xff) & 6) != 0) {
    return;
  }
  lVar4 = (**(code **)(**(long **)(*(long *)(DAT_05574040 + 0x10) + 0x188) + 0x30))();
  if (lVar4 == 0) {
    return;
  }
  local_68 = '\0';
  local_70 = lVar4 + 0x5d3f18;
  lVar8 = *(long *)(&LAB_005d3f40 + lVar4);
  if (lVar8 == 0) {
    local_67 = 0;
    local_78 = &PTR_FUN_049720e0;
  }
  else {
    if (*(undefined8 **)(lVar8 + 0x10) == (undefined8 *)0x0) {
      local_67 = 0;
      local_78 = &PTR_FUN_049720e0;
    }
    else {
      local_67 = (**(code **)**(undefined8 **)(lVar8 + 0x10))();
      lVar8 = *(long *)(&LAB_005d3f40 + lVar4);
      local_67 = local_67 & 1;
      local_78 = (undefined **)(PTR_DAT_04bbab18 + 0x10);
      if (lVar8 == 0) goto LAB_01367900;
    }
    plVar6 = *(long **)(lVar8 + 0x20);
    if (plVar6 != (long *)0x0) {
      local_b0 = *(undefined ***)(&LAB_005d3f20 + lVar4);
      local_a8 = *(undefined ****)(&LAB_005d3f28 + lVar4);
      local_a0 = (uint *)0xe10;
      (**(code **)(*plVar6 + 0x20))(plVar6,&local_b0);
    }
  }
LAB_01367900:
  __s = (void *)(*(long *)(&LAB_005d3f28 + lVar4) + *(ulong *)(&LAB_005d3f20 + lVar4));
  memset(__s,0,0xe10);
  lVar8 = 0;
  do {
    puVar5 = (undefined8 *)((long)__s + lVar8);
    *puVar5 = 0xfffe;
    FUN_0277d4ac(puVar5);
    lVar8 = lVar8 + 0xc;
    *(undefined4 *)(puVar5 + 1) = 0;
  } while (lVar8 != 0xe10);
  local_b0 = (undefined **)((ulong)local_b0 & 0xffffffff00000000);
  ppuVar3 = local_b0;
  local_90[0] = 1;
  lVar8 = lVar10 + 0x38;
  local_b0._0_4_ = 0;
  uVar11 = (uint)local_b0;
  local_b0 = ppuVar3;
  do {
    local_b0 = (undefined **)CONCAT44(local_b0._4_4_,uVar11);
    lVar9 = lVar10 + 200 + (ulong)uVar11 * 0x10;
    if (7 < uVar11) {
      lVar9 = lVar10 + 200;
    }
    if (*(long *)(lVar9 + 8) != 0) {
      local_b0 = &PTR_LAB_049934b0;
      local_a8 = &local_78;
      local_a0 = local_90;
      local_90[0] = uVar11;
      local_88 = lVar9;
      lStack_80 = lVar8;
      if (*(long *)(lVar9 + 8) != 0) {
        FUN_012e6150(*(long *)(lVar9 + 8),&local_b0,lVar8);
      }
    }
    uVar12 = 8;
    if ((int)uVar11 < 8) {
      uVar12 = uVar11 + 1;
    }
    uVar11 = uVar12;
  } while (uVar12 != 2);
  local_78 = &PTR_FUN_04a882d0;
  if (local_67 != 0) {
    lVar9 = *(long *)(local_70 + 0x28);
    if (local_68 == '\0') {
      if (lVar9 != 0) {
        puVar5 = *(undefined8 **)(lVar9 + 0x18);
        goto joined_r0x01367a1c;
      }
    }
    else if (lVar9 != 0) {
      puVar5 = *(undefined8 **)(lVar9 + 8);
joined_r0x01367a1c:
      if (puVar5 != (undefined8 *)0x0) {
        (**(code **)*puVar5)();
      }
    }
  }
  local_68 = '\0';
  local_70 = lVar4 + 0x5d3f88;
  lVar9 = *(long *)(&LAB_005d3fb0 + lVar4);
  if (lVar9 == 0) {
    local_67 = 0;
    local_78 = &PTR_FUN_0498d5c0;
  }
  else {
    if (*(undefined8 **)(lVar9 + 0x10) == (undefined8 *)0x0) {
      local_67 = 0;
      local_78 = &PTR_FUN_0498d5c0;
    }
    else {
      local_67 = (**(code **)**(undefined8 **)(lVar9 + 0x10))();
      lVar9 = *(long *)(&LAB_005d3fb0 + lVar4);
      local_67 = local_67 & 1;
      local_78 = (undefined **)(PTR_DAT_04bbc1b8 + 0x10);
      if (lVar9 == 0) goto LAB_01367ad8;
    }
    plVar6 = *(long **)(lVar9 + 0x20);
    if (plVar6 != (long *)0x0) {
      local_b0 = *(undefined ***)(&LAB_005d3f90 + lVar4);
      local_a8 = *(undefined ****)(&LAB_005d3f98 + lVar4);
      local_a0 = (uint *)0x708;
      (**(code **)(*plVar6 + 0x20))(plVar6,&local_b0);
    }
  }
LAB_01367ad8:
  lVar9 = *(long *)(&LAB_005d3f90 + lVar4);
  lVar2 = *(long *)(&LAB_005d3f98 + lVar4);
  memset((void *)(lVar2 + lVar9),0,0x708);
  lVar4 = 0;
  do {
    puVar1 = (undefined4 *)(lVar2 + lVar9 + lVar4);
    lVar4 = lVar4 + 0x18;
    *(undefined1 *)(puVar1 + 1) = 0;
    *puVar1 = 0;
    *(undefined4 *)((long)puVar1 + 6) = 0;
    *(undefined1 *)((long)puVar1 + 10) = 0;
    puVar1[3] = 0;
    *(undefined1 *)(puVar1 + 4) = 0;
    *(undefined4 *)((long)puVar1 + 0x12) = 0;
    *(undefined1 *)((long)puVar1 + 0x16) = 0;
  } while (lVar4 != 0x708);
  local_b0 = (undefined **)((ulong)local_b0 & 0xffffffff00000000);
  ppuVar3 = local_b0;
  local_90[0] = 1;
  local_b0._0_4_ = 0;
  uVar11 = (uint)local_b0;
  local_b0 = ppuVar3;
  do {
    local_b0 = (undefined **)CONCAT44(local_b0._4_4_,uVar11);
    lVar4 = lVar10 + 200 + (ulong)uVar11 * 0x10;
    if (7 < uVar11) {
      lVar4 = lVar10 + 200;
    }
    lVar9 = *(long *)(lVar4 + 8);
    if (lVar9 != 0) {
      puVar5 = (undefined8 *)(lVar9 + 0x1d8);
      uVar7 = (**(code **)(*(long *)(lVar9 + 0x1d8) + 0x10))(puVar5);
      if (((uVar7 & 1) != 0) && (lVar9 = (**(code **)*puVar5)(puVar5), lVar9 != 0)) {
        local_b0 = &PTR_LAB_049934d8;
        local_a8 = &local_78;
        local_a0 = local_90;
        local_90[0] = uVar11;
        local_88 = lVar4;
        if (*(long *)(lVar4 + 8) != 0) {
          FUN_012e6150(*(long *)(lVar4 + 8),&local_b0,lVar8);
        }
      }
    }
    uVar12 = 8;
    if ((int)uVar11 < 8) {
      uVar12 = uVar11 + 1;
    }
    uVar11 = uVar12;
  } while (uVar12 != 2);
  local_78 = &PTR_FUN_04a882d0;
  if (local_67 != 0) {
    lVar10 = *(long *)(local_70 + 0x28);
    if (local_68 == '\0') {
      if (lVar10 == 0) {
        return;
      }
      puVar5 = *(undefined8 **)(lVar10 + 0x18);
    }
    else {
      if (lVar10 == 0) {
        return;
      }
      puVar5 = *(undefined8 **)(lVar10 + 8);
    }
    if (puVar5 != (undefined8 *)0x0) {
      (**(code **)*puVar5)();
    }
  }
  return;
}

