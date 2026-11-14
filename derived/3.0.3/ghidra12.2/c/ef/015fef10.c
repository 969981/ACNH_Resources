
void FUN_015fef10(long param_1,long *param_2)

{
  long lVar1;
  undefined4 uVar2;
  char cVar3;
  undefined *puVar4;
  bool bVar5;
  int iVar6;
  undefined8 uVar7;
  long lVar8;
  long *plVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  undefined1 *__dest;
  void *__dest_00;
  undefined1 *puVar15;
  undefined8 uVar16;
  void *__src;
  ulong uVar17;
  undefined **local_b8;
  undefined1 *local_b0;
  int local_a8;
  undefined1 local_a4 [63];
  undefined1 local_65;
  
  if (*(char *)param_2[1] != '\0') {
    local_a8 = 0x40;
    local_65 = 0;
    local_b8 = &PTR_LAB_048fd2d8;
    local_b0 = local_a4;
    (**(code **)(*param_2 + 0x18))(param_2);
    puVar15 = (undefined1 *)param_2[1];
    if (local_a4 != puVar15) {
      (**(code **)(*param_2 + 0x18))(param_2);
      lVar12 = 0;
      do {
        if (*(char *)(param_2[1] + lVar12) == '\0') goto LAB_015fefe0;
        lVar13 = param_2[1] + lVar12;
        if (*(char *)(lVar13 + 1) == '\0') {
          lVar12 = lVar12 + 1;
          goto LAB_015fefe0;
        }
        if (*(char *)(lVar13 + 2) == '\0') {
          lVar12 = lVar12 + 2;
          goto LAB_015fefe0;
        }
        lVar12 = lVar12 + 3;
      } while (lVar12 != 0x80001);
      lVar12 = 0;
LAB_015fefe0:
      iVar6 = (int)lVar12;
      if (local_a8 <= (int)lVar12) {
        iVar6 = local_a8 + -1;
      }
      memcpy(local_a4,puVar15,(long)iVar6);
      local_a4[iVar6] = 0;
    }
    local_b8 = (undefined **)(PTR_DAT_04bb2bc0 + 0x10);
    lVar12 = (**(code **)(*(long *)(param_1 + 0x1d8) + 0xf0))(param_1 + 0x1d8);
    __dest = *(undefined1 **)(lVar12 + 8);
    (*(code *)local_b8[3])(&local_b8);
    puVar15 = local_b0;
    if (__dest != local_b0) {
      (*(code *)local_b8[3])(&local_b8);
      lVar13 = 0;
      do {
        if (local_b0[lVar13] == '\0') goto LAB_015ff0a0;
        if (local_b0[lVar13 + 1] == '\0') {
          lVar13 = lVar13 + 1;
          goto LAB_015ff0a0;
        }
        if (local_b0[lVar13 + 2] == '\0') {
          lVar13 = lVar13 + 2;
          goto LAB_015ff0a0;
        }
        lVar13 = lVar13 + 3;
      } while (lVar13 != 0x80001);
      lVar13 = 0;
LAB_015ff0a0:
      iVar6 = (int)lVar13;
      if (*(int *)(lVar12 + 0x10) <= (int)lVar13) {
        iVar6 = *(int *)(lVar12 + 0x10) + -1;
      }
      memcpy(__dest,puVar15,(long)iVar6);
      __dest[iVar6] = 0;
    }
    *(uint *)(param_1 + 0x1f8) = *(uint *)(param_1 + 0x1f8) | 0x1000000;
  }
  puVar4 = PTR_DAT_04bb2200;
  uVar2 = *(undefined4 *)(param_1 + 0x330);
  uVar16 = *(undefined8 *)(*(long *)(*(long *)PTR_DAT_04bb2200 + 0x70) + 0x1d0);
  uVar7 = (**(code **)(*(long *)(param_1 + 0x260) + 0xf0))(param_1 + 0x260);
  lVar12 = FUN_015ff440(uVar16,uVar2,uVar7,param_1 + 0x330);
  if (lVar12 == 0) {
    lVar12 = *(long *)(*(long *)(*(long *)puVar4 + 0x70) + 0x1d0);
    if (0 < *(int *)(lVar12 + 0x1d0)) {
      uVar17 = 0;
      do {
        if (uVar17 < *(uint *)(lVar12 + 0x1b0)) {
          lVar13 = *(long *)(*(long *)(lVar12 + 0x1b8) + uVar17 * 8);
        }
        else {
          lVar13 = 0;
        }
        plVar9 = (long *)(**(code **)(*(long *)(lVar13 + 0x158) + 0xf0))(lVar13 + 0x158);
        (**(code **)(*plVar9 + 0x18))();
        (**(code **)(*plVar9 + 0x18))(plVar9);
        lVar8 = plVar9[1];
        (**(code **)(*(long *)(param_1 + 800) + 0x18))(param_1 + 800);
        lVar13 = *(long *)(param_1 + 0x328);
        if (lVar8 == lVar13) {
LAB_015ff260:
          if ((((int)(uint)uVar17 < *(int *)(lVar12 + 0x1d0)) &&
              ((uint)uVar17 < *(uint *)(lVar12 + 0x1b0))) &&
             (lVar12 = *(long *)(*(long *)(lVar12 + 0x1b8) + (uVar17 & 0xffffffff) * 8), lVar12 != 0
             )) {
            *(long *)(param_1 + 0x318) = lVar12;
            lVar13 = (**(code **)(*(long *)(lVar12 + 0x158) + 0xf0))(lVar12 + 0x158);
            *(undefined8 *)(param_1 + 0x328) = *(undefined8 *)(lVar13 + 8);
            *(long *)(lVar12 + 0x1b28) = param_1;
            lVar12 = *(long *)(param_1 + 0x318);
            goto LAB_015ff2b4;
          }
          break;
        }
        uVar14 = 0;
        bVar5 = true;
        do {
          lVar8 = plVar9[1] + 2 + uVar14;
          cVar3 = *(char *)(lVar8 + -2);
          if (cVar3 != *(char *)(lVar13 + uVar14)) break;
          if (cVar3 == '\0') {
            if (bVar5) goto LAB_015ff260;
            break;
          }
          cVar3 = *(char *)(lVar8 + -1);
          if (cVar3 != *(char *)(lVar13 + uVar14 + 1)) break;
          if (cVar3 == '\0') goto LAB_015ff260;
          cVar3 = *(char *)(plVar9[1] + 2 + uVar14);
          if (cVar3 != *(char *)(lVar13 + uVar14 + 2)) break;
          if (cVar3 == '\0') goto LAB_015ff260;
          bVar5 = uVar14 < 0x7fffe;
          uVar14 = uVar14 + 3;
        } while (uVar14 != 0x80001);
        uVar17 = uVar17 + 1;
      } while ((long)uVar17 < (long)*(int *)(lVar12 + 0x1d0));
    }
    lVar12 = 0;
    *(undefined8 *)(param_1 + 0x318) = 0;
  }
  else {
    *(long *)(param_1 + 0x318) = lVar12;
    lVar13 = (**(code **)(*(long *)(lVar12 + 0x158) + 0xf0))(lVar12 + 0x158);
    *(undefined8 *)(param_1 + 0x328) = *(undefined8 *)(lVar13 + 8);
    *(long *)(lVar12 + 0x1b28) = param_1;
  }
LAB_015ff2b4:
  uVar2 = *(undefined4 *)(param_1 + 0x334);
  uVar16 = *(undefined8 *)(*(long *)(*(long *)puVar4 + 0x70) + 0x1d0);
  uVar7 = (**(code **)(*(long *)(param_1 + 0x1d8) + 0xf0))(param_1 + 0x1d8);
  lVar8 = FUN_015ff440(uVar16,uVar2,uVar7,param_1 + 0x334);
  lVar13 = *(long *)(param_1 + 0x318);
  if (lVar8 != 0) {
    lVar13 = lVar8;
  }
  if ((lVar12 != 0) && (lVar13 != 0)) {
    iVar6 = FUN_01626700(lVar13);
    local_b8 = (undefined **)((ulong)local_b8 & 0xffffffff00000000);
    *(bool *)(param_1 + 0x348) = iVar6 != *(int *)(param_1 + 0x1d0);
    FUN_015ff620(param_1,*(undefined8 *)(param_1 + 0x318),lVar13,&local_b8);
    plVar9 = (long *)(**(code **)(*(long *)(param_1 + 0x260) + 0xf0))(param_1 + 0x260);
    lVar13 = (**(code **)(*(long *)(lVar12 + 0x158) + 0xf0))(lVar12 + 0x158);
    __dest_00 = *(void **)(lVar13 + 8);
    (**(code **)(*plVar9 + 0x18))(plVar9);
    __src = (void *)plVar9[1];
    if (__dest_00 != __src) {
      (**(code **)(*plVar9 + 0x18))(plVar9);
      lVar8 = 0;
      do {
        if (*(char *)(plVar9[1] + lVar8) == '\0') goto LAB_015ff3cc;
        lVar1 = plVar9[1] + lVar8;
        if (*(char *)(lVar1 + 1) == '\0') {
          lVar8 = lVar8 + 1;
          goto LAB_015ff3cc;
        }
        if (*(char *)(lVar1 + 2) == '\0') {
          lVar8 = lVar8 + 2;
          goto LAB_015ff3cc;
        }
        lVar8 = lVar8 + 3;
      } while (lVar8 != 0x80001);
      lVar8 = 0;
LAB_015ff3cc:
      iVar6 = (int)lVar8;
      if (*(int *)(lVar13 + 0x10) <= (int)lVar8) {
        iVar6 = *(int *)(lVar13 + 0x10) + -1;
      }
      memcpy(__dest_00,__src,(long)iVar6);
      *(undefined1 *)((long)__dest_00 + (long)iVar6) = 0;
    }
    puVar10 = (undefined4 *)(**(code **)(*(long *)(param_1 + 0x2e8) + 0xf0))(param_1 + 0x2e8);
    puVar11 = (undefined4 *)(**(code **)(*(long *)(lVar12 + 0x1e0) + 0xf0))(lVar12 + 0x1e0);
    *puVar11 = *puVar10;
  }
  return;
}

