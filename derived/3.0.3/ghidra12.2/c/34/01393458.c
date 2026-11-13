
void FUN_01393458(long *param_1)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  uint *puVar4;
  uint uVar5;
  uint uVar6;
  byte bVar7;
  uint uVar8;
  undefined *puVar9;
  long *plVar10;
  undefined8 uVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  char *pcVar16;
  long lVar17;
  long lVar18;
  long *plVar19;
  undefined8 local_38;
  
  puVar9 = PTR_DAT_04bbc218;
  uVar5 = *(uint *)(param_1 + 1);
  uVar6 = *(uint *)((long)param_1 + 0xc);
  lVar14 = *(long *)PTR_DAT_04bbc218;
  puVar1 = (uint *)(lVar14 + 0x20);
  puVar4 = puVar1 + (ulong)uVar5 * 4;
  if (0x1d < uVar5) {
    puVar4 = puVar1;
  }
  uVar2 = uVar6;
  if (*puVar4 <= uVar6) {
    uVar2 = 0;
  }
  lVar17 = *(long *)(puVar4 + 2) + (long)(int)uVar2 * 0x30;
  uVar2 = *(uint *)(lVar17 + 8);
  lVar15 = *(long *)(lVar14 + 0x18);
  if (*(uint *)(lVar14 + 0x10) <= uVar2) {
    uVar2 = 0;
  }
  uVar8 = *(uint *)(lVar17 + 0xc);
  if (*(uint *)(lVar15 + (long)(int)uVar2 * 0x18 + 8) <= uVar8) {
    return;
  }
  lVar18 = *(long *)(lVar15 + (long)(int)uVar2 * 0x18 + 0x10);
  if (*(uint *)(lVar18 + (long)(int)uVar8 * 0x10) <= *(uint *)(lVar17 + 0x10)) {
    return;
  }
  lVar18 = *(long *)(lVar18 + (long)(int)uVar8 * 0x10 + 8);
  if (lVar18 == 0) {
    return;
  }
  if (*(int *)(lVar18 + (long)(int)*(uint *)(lVar17 + 0x10) * 0x518 + 0x2c) != 1) {
    return;
  }
  puVar4 = puVar1 + (ulong)uVar5 * 4;
  if (0x1d < uVar5) {
    puVar4 = puVar1;
  }
  if (*puVar4 <= uVar6) {
    uVar6 = 0;
  }
  lVar17 = *(long *)(puVar4 + 2) + (long)(int)uVar6 * 0x30;
  local_38._0_4_ = *(uint *)(lVar17 + 8);
  uVar6 = (uint)local_38;
  if (*(uint *)(lVar14 + 0x10) <= (uint)local_38) {
    uVar6 = 0;
  }
  uVar5 = *(uint *)(lVar17 + 0xc);
  if (*(uint *)(lVar15 + (long)(int)uVar6 * 0x18 + 8) <= uVar5) {
    return;
  }
  uVar2 = *(uint *)(lVar17 + 0x10);
  lVar15 = *(long *)(lVar15 + (long)(int)uVar6 * 0x18 + 0x10);
  if (*(uint *)(lVar15 + (long)(int)uVar5 * 0x10) <= uVar2) {
    return;
  }
  lVar15 = *(long *)(lVar15 + (long)(int)uVar5 * 0x10 + 8);
  if (lVar15 == 0) {
    return;
  }
  if (*(int *)(lVar15 + (long)(int)uVar2 * 0x518 + 0x2c) == 0) {
LAB_01393728:
    uVar6 = *(uint *)((long)param_1 + 0xc);
    puVar1 = (uint *)(lVar14 + 0x20) + (ulong)*(uint *)(param_1 + 1) * 4;
    if (0x1d < *(uint *)(param_1 + 1)) {
      puVar1 = (uint *)(lVar14 + 0x20);
    }
    if (*puVar1 <= uVar6) {
      uVar6 = 0;
    }
    if (*(int *)(*(long *)(puVar1 + 2) + (long)(int)uVar6 * 0x30 + 0x28) == 0) {
      return;
    }
    lVar15 = *(long *)(puVar1 + 2) + (long)(int)uVar6 * 0x30;
    iVar3 = 0;
    if (*(int *)(lVar15 + 0x20) <= *(int *)(lVar15 + 0x24)) {
      iVar3 = *(int *)(lVar15 + 0x20);
    }
    if (*(long *)(lVar15 + 0x18) == 0) {
      return;
    }
    lVar17 = *(long *)(lVar15 + 0x18) + (long)(*(int *)(lVar15 + 0x24) - iVar3) * 0x18;
    uVar6 = *(uint *)(lVar17 + 8);
    local_38 = CONCAT44(local_38._4_4_,uVar6);
    uVar5 = *(uint *)(lVar17 + 0xc);
    if (*(uint *)(lVar14 + 0x10) <= uVar6) {
      uVar6 = 0;
    }
    if (*(uint *)(*(long *)(lVar14 + 0x18) + (long)(int)uVar6 * 0x18 + 8) <= uVar5) {
      return;
    }
    uVar2 = *(uint *)(lVar17 + 0x10);
    lVar14 = *(long *)(*(long *)(lVar14 + 0x18) + (long)(int)uVar6 * 0x18 + 0x10);
    if (*(uint *)(lVar14 + (long)(int)uVar5 * 0x10) <= uVar2) {
      return;
    }
    lVar14 = *(long *)(lVar14 + (long)(int)uVar5 * 0x10 + 8);
    if (lVar14 == 0) {
      return;
    }
    plVar10 = *(long **)(lVar14 + (long)(int)uVar2 * 0x518 + 0x58);
    if ((plVar10 != (long *)0x0) && (lVar15 = (**(code **)(*plVar10 + 0x28))(), lVar15 != 0)) {
      lVar18 = **(long **)PTR_DAT_04bb27d0;
      bVar7 = *(byte *)(lVar18 + 0x473);
      pcVar16 = PTR_DAT_04bc1220;
      if ((long)(char)bVar7 != 0xffffffffffffffff) {
        puVar1 = (uint *)(lVar18 + 0x48) + ((long)(char)bVar7 & 0xffffffffU) * 0x20;
        if (7 < bVar7) {
          puVar1 = (uint *)(lVar18 + 0x48);
        }
        if ((*puVar1 & 8) != 0) {
          pcVar16 = (char *)(lVar18 + 0x473);
        }
      }
      if (*(char *)(lVar15 + 0x16) == *pcVar16) {
        return;
      }
    }
    lVar18 = lVar14 + (long)(int)uVar2 * 0x518;
    if ((*(int *)(lVar18 + 0xc0) != 4) && (*(int *)(lVar18 + 0x100) != 4)) {
      return;
    }
    lVar15 = lVar14 + (long)(int)uVar2 * 0x518;
    uVar12 = FUN_013965e8(lVar15);
    if ((uVar12 & 1) != 0) {
      return;
    }
    FUN_01391948(*(undefined8 *)puVar9,(int)param_1[1],*(undefined4 *)((long)param_1 + 0xc));
    lVar17 = FUN_013919f8(*(undefined8 *)puVar9,lVar17);
    if (lVar17 == 0) goto LAB_01393710;
    if ((*(long **)(lVar17 + 0x28) != (long *)0x0) &&
       (lVar13 = (**(code **)(**(long **)(lVar17 + 0x28) + 0x28))(), lVar13 != 0)) {
      FUN_01396840(lVar15,lVar13);
    }
    *(undefined4 *)(lVar18 + 0x100) = 0xffffffff;
    FUN_03ebb160(lVar14 + (long)(int)uVar2 * 0x518 + 0xb8,0);
    plVar10 = *(long **)(lVar17 + 0x48);
    if (plVar10 == (long *)0x0) {
      uVar11 = 0;
    }
    else {
LAB_013936ec:
      uVar11 = (**(code **)(*plVar10 + 0x28))();
    }
  }
  else {
    plVar19 = (long *)(lVar15 + (long)(int)uVar2 * 0x518 + 0x58);
    plVar10 = (long *)*plVar19;
    if (plVar10 != (long *)0x0) {
      lVar14 = (**(code **)(*plVar10 + 0x28))();
      if (lVar14 != 0) {
        lVar18 = **(long **)PTR_DAT_04bb27d0;
        bVar7 = *(byte *)(lVar18 + 0x473);
        pcVar16 = PTR_DAT_04bc1220;
        if ((long)(char)bVar7 != 0xffffffffffffffff) {
          puVar1 = (uint *)(lVar18 + 0x48) + ((long)(char)bVar7 & 0xffffffffU) * 0x20;
          if (7 < bVar7) {
            puVar1 = (uint *)(lVar18 + 0x48);
          }
          if ((*puVar1 & 8) != 0) {
            pcVar16 = (char *)(lVar18 + 0x473);
          }
        }
        if (*(char *)(lVar14 + 0x16) == *pcVar16) goto LAB_0139365c;
      }
      plVar19 = (long *)*plVar19;
      if (((plVar19 != (long *)0x0) && (lVar14 = (**(code **)(*plVar19 + 0x28))(), lVar14 != 0)) &&
         ((*(byte *)(lVar14 + 8) >> 5 & 1) != 0)) {
        lVar14 = *(long *)puVar9;
        goto LAB_01393728;
      }
    }
LAB_0139365c:
    lVar14 = *(long *)puVar9;
    if ((*(byte *)(lVar15 + (long)(int)uVar2 * 0x518 + 0x28) & 1) != 0) goto LAB_01393728;
    lVar15 = lVar15 + (long)(int)uVar2 * 0x518;
    uVar6 = *(uint *)(lVar17 + 8);
    local_38 = CONCAT44(local_38._4_4_,uVar6);
    uVar5 = *(uint *)(lVar17 + 0xc);
    if (*(uint *)(lVar14 + 0x10) <= uVar6) {
      uVar6 = 0;
    }
    if (*(uint *)(*(long *)(lVar14 + 0x18) + (long)(int)uVar6 * 0x18 + 8) <= uVar5)
    goto LAB_01393710;
    lVar14 = *(long *)(*(long *)(lVar14 + 0x18) + (long)(int)uVar6 * 0x18 + 0x10);
    if ((*(uint *)(lVar14 + (long)(int)uVar5 * 0x10) <= *(uint *)(lVar17 + 0x10)) ||
       (lVar14 = *(long *)(lVar14 + (long)(int)uVar5 * 0x10 + 8), lVar14 == 0)) goto LAB_01393710;
    plVar10 = *(long **)(lVar14 + (long)(int)*(uint *)(lVar17 + 0x10) * 0x518 + 0x78);
    uVar11 = 0;
    if (plVar10 != (long *)0x0) goto LAB_013936ec;
  }
  local_38 = uVar11;
  (**(code **)(*param_1 + 0x28))(param_1,&local_38);
LAB_01393710:
  FUN_013966b4(lVar15);
  FUN_0139534c(lVar15);
  return;
}

