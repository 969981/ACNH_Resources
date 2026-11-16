
byte FUN_026f64f0(long param_1)

{
  long *plVar1;
  int iVar2;
  byte bVar3;
  uint uVar4;
  long *plVar5;
  ulong uVar6;
  ulong uVar7;
  long *plVar8;
  byte bVar9;
  uint uVar10;
  long lVar11;
  uint local_48;
  long local_38;
  
  lVar11 = *(long *)(param_1 + 0x10);
  plVar5 = *(long **)(lVar11 + 400);
  if (plVar5 == (long *)0x0) {
    uVar6 = 0;
  }
  else {
    (**(code **)(*plVar5 + 0x40))();
    uVar6 = FUN_027b7e10();
    uVar6 = uVar6 & 0xffffffff;
    local_38 = (**(code **)(**(long **)(lVar11 + 400) + 0x40))();
  }
  local_48 = (uint)(plVar5 != (long *)0x0);
  lVar11 = *(long *)(param_1 + 0x10);
  plVar5 = *(long **)(lVar11 + 0x198);
  if (plVar5 != (long *)0x0) {
    (**(code **)(*plVar5 + 0x40))();
    uVar6 = FUN_027b7e10();
    uVar6 = uVar6 & 0xffffffff;
    if (local_48 == 0) {
      (**(code **)(**(long **)(lVar11 + 0x198) + 0x40))();
      local_48 = 1;
    }
  }
  lVar11 = *(long *)(param_1 + 0x10);
  plVar5 = *(long **)(lVar11 + 0x1a0);
  if (plVar5 != (long *)0x0) {
    (**(code **)(*plVar5 + 0x40))();
    uVar7 = FUN_027b7e10();
    uVar6 = uVar7 & 0xffffffff;
    if (local_48 == 0) {
      (**(code **)(**(long **)(lVar11 + 0x1a0) + 0x40))();
      local_48 = 1;
      uVar6 = uVar7;
    }
  }
  bVar9 = (uVar6 & 1) != 0;
  if ((bool)bVar9) {
    iVar2 = *(int *)(param_1 + 0x128);
  }
  else {
    iVar2 = *(int *)(param_1 + 0x128);
  }
  if (iVar2 != 0) {
    plVar5 = *(long **)(param_1 + 0x130);
    uVar10 = 0;
    plVar1 = plVar5 + iVar2;
    do {
      if (local_48 != 0) {
        lVar11 = (long)(int)local_48 << 3;
        plVar8 = &local_38;
        do {
          if (*plVar8 == *plVar5) goto LAB_026f667c;
          plVar8 = plVar8 + 1;
          lVar11 = lVar11 + -8;
        } while (lVar11 != 0);
      }
      uVar4 = FUN_027b7e10();
      uVar10 = uVar4 | uVar10;
LAB_026f667c:
      plVar5 = plVar5 + 1;
    } while (plVar5 != plVar1);
    bVar3 = bVar9 | 2;
    if ((uVar10 & 1) == 0) {
      bVar3 = bVar9;
    }
    bVar9 = bVar3;
  }
  return bVar9;
}

