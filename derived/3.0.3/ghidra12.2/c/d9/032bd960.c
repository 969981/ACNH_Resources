
/* WARNING: Removing unreachable block (ram,0x032bd99c) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_032bd960(long param_1,ulong *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  void *__s;
  long *plVar4;
  undefined8 uVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  void *__ptr;
  long lVar8;
  undefined **local_130;
  long lStack_128;
  undefined1 *local_120;
  undefined8 uStack_118;
  undefined *local_110;
  undefined ***local_108;
  undefined **local_100;
  long lStack_f8;
  undefined1 *local_f0;
  undefined8 uStack_e8;
  undefined *local_e0;
  undefined ***local_d8;
  undefined **local_d0;
  long lStack_c8;
  undefined1 *local_c0;
  undefined8 uStack_b8;
  ulong local_b0;
  long lStack_a8;
  long local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  long lStack_88;
  long local_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined4 local_6c;
  long local_68;
  long local_60;
  long local_58;
  
  local_b0 = local_b0 & 0xffffffff00000000;
  __s = (void *)(**(code **)(**(long **)*param_2 + 0x30))(*(long **)*param_2,0x1f0,8);
  memset(__s,0,0x1f0);
  *(undefined1 *)((long)__s + 0xc0) = 0;
  puVar1 = PTR_DAT_04bc8e60;
  *(undefined4 *)((long)__s + 0xa0) = 0;
  puVar2 = PTR_DAT_04bc9300;
  *(undefined8 *)((long)__s + 0xa8) = 0;
  *(undefined8 *)((long)__s + 0xb0) = 0;
  *(undefined8 *)((long)__s + 0xb6) = 0;
  *(undefined8 *)((long)__s + 0xc4) = 0;
  *(undefined **)((long)__s + 0x40) = puVar1 + 0x10;
  *(undefined8 *)((long)__s + 0xcc) = 0;
  *(undefined8 *)((long)__s + 0xd1) = 0;
  *(undefined **)((long)__s + 0x70) = puVar2 + 0x10;
  *(undefined8 *)((long)__s + 0xe0) = 0;
  *(undefined8 *)((long)__s + 0xe8) = 0;
  *(undefined8 *)((long)__s + 0xf0) = 0;
  *(undefined8 *)((long)__s + 0xf8) = 0;
  *(undefined8 *)((long)__s + 0x100) = 0;
  *(undefined8 *)((long)__s + 0x108) = 0;
  *(undefined8 *)((long)__s + 0x110) = 0;
  *(undefined8 *)((long)__s + 0x118) = 0;
  *(undefined8 *)((long)__s + 0x120) = 0;
  *(undefined8 *)((long)__s + 0x128) = 0;
  *(undefined8 *)((long)__s + 0x130) = 0;
  *(undefined8 *)((long)__s + 0x138) = 0;
  puVar2 = PTR_DAT_04bc9070;
  puVar1 = PTR_DAT_04bc9070 + 0x10;
  *(undefined8 *)((long)__s + 0x140) = 0;
  *(undefined8 *)((long)__s + 0x148) = 0;
  *(undefined8 *)((long)__s + 0x150) = 0;
  *(undefined **)((long)__s + 0x158) = puVar1;
  puVar3 = PTR_DAT_04bc9078;
  *(undefined **)((long)__s + 0x188) = puVar1;
  *(undefined4 *)((long)__s + 0x1e8) = 0;
  *(undefined **)((long)__s + 0x1b8) = puVar3 + 0x10;
  __ptr = *(void **)(param_1 + 0x28);
  *(void **)(param_1 + 0x28) = __s;
  if (__ptr != (void *)0x0) {
    if (*(long **)((long)__ptr + 0x1c0) != (long *)0x0) {
      (**(code **)(**(long **)((long)__ptr + 0x1c0) + 8))();
    }
    if (*(long **)((long)__ptr + 400) != (long *)0x0) {
      (**(code **)(**(long **)((long)__ptr + 400) + 8))();
    }
    if (*(long **)((long)__ptr + 0x160) != (long *)0x0) {
      (**(code **)(**(long **)((long)__ptr + 0x160) + 8))();
    }
    if (*(long **)((long)__ptr + 0x150) != (long *)0x0) {
      (**(code **)(**(long **)((long)__ptr + 0x150) + 8))();
    }
    *(undefined8 *)((long)__ptr + 0x120) = 0;
    *(undefined8 *)((long)__ptr + 0x128) = 0;
    *(undefined8 *)((long)__ptr + 0x148) = 0;
    *(undefined8 *)((long)__ptr + 0x110) = 0;
    *(undefined8 *)((long)__ptr + 0x118) = 0;
    *(undefined8 *)((long)__ptr + 0x100) = 0;
    *(undefined8 *)((long)__ptr + 0x108) = 0;
    *(undefined8 *)((long)__ptr + 0xf0) = 0;
    *(undefined8 *)((long)__ptr + 0xf8) = 0;
    *(undefined8 *)((long)__ptr + 0x138) = 0;
    *(undefined8 *)((long)__ptr + 0x140) = 0;
    FUN_032b3674((long)__ptr + 8);
    if (*(long *)PTR_DAT_04bb2698 == 0) {
      free(__ptr);
    }
    else {
      plVar4 = (long *)FUN_038cb610(*(long *)PTR_DAT_04bb2698,__ptr);
      if (plVar4 != (long *)0x0) {
        (**(code **)(*plVar4 + 0x38))(plVar4,__ptr);
      }
    }
  }
  plVar4 = *(long **)(param_1 + 0x30);
  local_78 = 0;
  local_6c = 0;
  local_b0 = *param_2;
  local_70 = 0;
  lStack_a8 = plVar4[4];
  local_a0 = plVar4[5];
  uStack_98 = *(undefined8 *)(param_1 + 0x20);
  local_90 = *(undefined8 *)(param_1 + 0x10);
  lStack_88 = plVar4[6];
  local_80 = plVar4[7];
  if (plVar4[0xc] != 0) {
    local_70 = *(undefined4 *)(plVar4[0xc] + 0x54);
  }
  if (plVar4[0xd] != 0) {
    local_6c = *(undefined4 *)(plVar4[0xd] + 0x54);
  }
  if (plVar4[0xe] == 0) {
    local_60 = 0;
    local_68 = 0;
  }
  else {
    local_60 = *(long *)(plVar4[0xe] + 0xe8);
    local_68 = *(long *)(*plVar4 + 0x110);
    if (local_68 != 0) {
      do {
        while (*(ulong *)(local_60 + 0x30) < *(ulong *)(local_68 + 0x20)) {
          local_68 = *(long *)(local_68 + 8);
          if (local_68 == 0) goto LAB_032bdb9c;
        }
        if (*(ulong *)(local_60 + 0x30) <= *(ulong *)(local_68 + 0x20)) {
          local_68 = local_68 + 0x28;
          goto LAB_032bdbb0;
        }
        local_68 = *(long *)(local_68 + 0x10);
      } while (local_68 != 0);
    }
LAB_032bdb9c:
    local_68 = 0;
  }
LAB_032bdbb0:
  local_58 = plVar4[0xf];
  FUN_032c03f0(*(undefined8 *)(param_1 + 0x28),&local_b0);
  lVar8 = *(long *)(param_1 + 0x28);
  local_e0 = puVar2 + 0x10;
  local_d8 = &local_d0;
  local_c0 = &LAB_032bdd64;
  uStack_b8 = 0;
  ppuVar7 = &PTR_LAB_04b1aaa0;
  local_d0 = &PTR_LAB_04b1aaa0;
  plVar4 = *(long **)(lVar8 + 0x160);
  lStack_c8 = param_1;
  if (plVar4 == (long *)0x0) {
    ppuVar6 = &PTR_LAB_04b1aaa0;
LAB_032bdc20:
    uVar5 = (*(code *)ppuVar6[3])(local_d8,lVar8 + 0x168);
    *(undefined8 *)(lVar8 + 0x160) = uVar5;
    if (local_d8 != (undefined ***)0x0) {
      (*(code *)(*local_d8)[1])();
    }
  }
  else {
    (**(code **)(*plVar4 + 8))(plVar4);
    if (local_d8 != (undefined ***)0x0) {
      ppuVar6 = *local_d8;
      goto LAB_032bdc20;
    }
    *(undefined8 *)(lVar8 + 0x160) = 0;
  }
  lVar8 = *(long *)(param_1 + 0x28);
  local_110 = puVar2 + 0x10;
  local_108 = &local_100;
  local_f0 = &LAB_032bdd6c;
  uStack_e8 = 0;
  plVar4 = *(long **)(lVar8 + 400);
  local_100 = &PTR_LAB_04b1aaa0;
  lStack_f8 = param_1;
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 8))(plVar4);
    if (local_108 == (undefined ***)0x0) {
      *(undefined8 *)(lVar8 + 400) = 0;
      goto LAB_032bdcc8;
    }
    ppuVar7 = *local_108;
  }
  uVar5 = (*(code *)ppuVar7[3])(local_108,lVar8 + 0x198);
  *(undefined8 *)(lVar8 + 400) = uVar5;
  if (local_108 != (undefined ***)0x0) {
    (*(code *)(*local_108)[1])();
  }
LAB_032bdcc8:
  lVar8 = *(long *)(param_1 + 0x28);
  local_120 = &LAB_032bddf4;
  uStack_118 = 0;
  local_130 = &PTR_LAB_04b1ab28;
  plVar4 = *(long **)(lVar8 + 0x1c0);
  lStack_128 = param_1;
  if ((plVar4 != (long *)0x0) &&
     ((**(code **)(*plVar4 + 8))(plVar4), &local_130 == (undefined ***)0x0)) {
    *(undefined8 *)(lVar8 + 0x1c0) = 0;
    return;
  }
  uVar5 = (*(code *)local_130[3])(&local_130,lVar8 + 0x1c8);
  *(undefined8 *)(lVar8 + 0x1c0) = uVar5;
  if (&local_130 != (undefined ***)0x0) {
    (*(code *)local_130[1])();
  }
  return;
}

