
undefined4 FUN_00181bf0(long *param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  bool bVar3;
  long lVar4;
  ulong uVar5;
  int iVar6;
  undefined4 uVar7;
  long *plVar8;
  ulong uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  long lVar13;
  ulong uVar14;
  void *pvVar15;
  long lVar16;
  
  uVar5 = param_1[3] - 5U;
  if ((ulong)*(uint *)(param_1 + 10) <= param_1[3] - 5U) {
    uVar5 = (ulong)*(uint *)(param_1 + 10);
  }
  iVar6 = *(int *)(*param_1 + 8);
  do {
    uVar12 = *(int *)((long)param_1 + 0x1734) + 0x2a >> 3;
    plVar8 = (long *)*param_1;
    uVar10 = *(uint *)(plVar8 + 4) - uVar12;
    if (*(uint *)(plVar8 + 4) < uVar12) {
LAB_00181ed0:
      bVar3 = true;
      iVar1 = (int)plVar8[1];
      goto joined_r0x00181edc;
    }
    iVar1 = *(int *)((long)param_1 + 0xac);
    lVar4 = param_1[0x13];
    uVar2 = iVar1 - (int)lVar4;
    uVar12 = uVar2 + *(uint *)(plVar8 + 1);
    uVar11 = uVar12;
    if (0xfffe < (ulong)uVar2 + (ulong)*(uint *)(plVar8 + 1)) {
      uVar11 = 0xffff;
    }
    if (uVar10 <= uVar11) {
      uVar11 = uVar10;
    }
    if ((uVar11 < (uint)uVar5) &&
       ((uVar11 != uVar12 || param_2 == 0 || (param_2 != 4 && uVar11 == 0)))) goto LAB_00181ed0;
    bVar3 = uVar11 == uVar12;
    FUN_00183c10(param_1,0,0,param_2 == 4 && bVar3);
    *(char *)(param_1[5] + param_1[2] + -4) = (char)uVar11;
    *(char *)(param_1[5] + param_1[2] + -3) = (char)(uVar11 >> 8);
    *(char *)(param_1[5] + param_1[2] + -2) = (char)~uVar11;
    *(char *)(param_1[5] + param_1[2] + -1) = (char)(~uVar11 >> 8);
    lVar16 = *param_1;
    lVar13 = *(long *)(lVar16 + 0x38);
    FUN_00183d90(lVar13);
    uVar12 = *(uint *)(lVar16 + 0x20);
    if (*(uint *)(lVar13 + 0x28) <= *(uint *)(lVar16 + 0x20)) {
      uVar12 = *(uint *)(lVar13 + 0x28);
    }
    uVar14 = (ulong)uVar12;
    if (uVar12 != 0) {
      memcpy(*(void **)(lVar16 + 0x18),*(void **)(lVar13 + 0x20),uVar14);
      *(ulong *)(lVar16 + 0x18) = *(long *)(lVar16 + 0x18) + uVar14;
      *(ulong *)(lVar13 + 0x20) = *(long *)(lVar13 + 0x20) + uVar14;
      *(ulong *)(lVar16 + 0x28) = *(long *)(lVar16 + 0x28) + uVar14;
      *(uint *)(lVar16 + 0x20) = *(int *)(lVar16 + 0x20) - uVar12;
      lVar16 = *(long *)(lVar13 + 0x28) - uVar14;
      *(long *)(lVar13 + 0x28) = lVar16;
      if (lVar16 == 0) {
        *(undefined8 *)(lVar13 + 0x20) = *(undefined8 *)(lVar13 + 0x10);
      }
    }
    if (iVar1 != (int)lVar4) {
      if (uVar11 <= uVar2) {
        uVar2 = uVar11;
      }
      uVar14 = (ulong)uVar2;
      memcpy(*(void **)(*param_1 + 0x18),(void *)(param_1[0xc] + param_1[0x13]),uVar14);
      uVar11 = uVar11 - uVar2;
      *(ulong *)(*param_1 + 0x18) = *(long *)(*param_1 + 0x18) + uVar14;
      *(uint *)(*param_1 + 0x20) = *(int *)(*param_1 + 0x20) - uVar2;
      *(ulong *)(*param_1 + 0x28) = *(long *)(*param_1 + 0x28) + uVar14;
      param_1[0x13] = param_1[0x13] + uVar14;
    }
    if (uVar11 != 0) {
      plVar8 = (long *)*param_1;
      uVar10 = *(uint *)(plVar8 + 1);
      pvVar15 = (void *)plVar8[3];
      uVar12 = uVar10;
      if (uVar11 <= uVar10) {
        uVar12 = uVar11;
      }
      uVar14 = (ulong)uVar12;
      if (uVar12 != 0) {
        *(uint *)(plVar8 + 1) = uVar10 - uVar12;
        memcpy(pvVar15,(void *)*plVar8,uVar14);
        if (*(int *)(plVar8[7] + 0x30) == 2) {
          lVar4 = FUN_0017ef30(plVar8[0xc],pvVar15,uVar14);
LAB_00181c4c:
          plVar8[0xc] = lVar4;
        }
        else if (*(int *)(plVar8[7] + 0x30) == 1) {
          lVar4 = FUN_0017f300(plVar8[0xc],pvVar15,uVar14);
          goto LAB_00181c4c;
        }
        *plVar8 = *plVar8 + uVar14;
        plVar8[2] = plVar8[2] + uVar14;
        plVar8 = (long *)*param_1;
        pvVar15 = (void *)plVar8[3];
      }
      plVar8[3] = (long)pvVar15 + (ulong)uVar11;
      *(uint *)(*param_1 + 0x20) = *(int *)(*param_1 + 0x20) - uVar11;
      *(ulong *)(*param_1 + 0x28) = *(long *)(*param_1 + 0x28) + (ulong)uVar11;
    }
  } while (param_2 != 4 || !bVar3);
  plVar8 = (long *)*param_1;
  bVar3 = false;
  iVar1 = (int)plVar8[1];
joined_r0x00181edc:
  uVar12 = iVar6 - iVar1;
  if (uVar12 == 0) {
    uVar5 = (ulong)*(uint *)((long)param_1 + 0xac);
    if ((ulong)param_1[0x2e7] < uVar5) goto LAB_00182004;
  }
  else {
    uVar14 = (ulong)uVar12;
    uVar10 = *(uint *)(param_1 + 10);
    uVar5 = (ulong)uVar10;
    if (uVar12 < uVar10) {
      uVar9 = (ulong)*(uint *)((long)param_1 + 0xac);
      if (param_1[0xd] - uVar9 <= uVar14) {
        uVar10 = *(uint *)((long)param_1 + 0xac) - uVar10;
        *(uint *)((long)param_1 + 0xac) = uVar10;
        memcpy((void *)param_1[0xc],(void *)(param_1[0xc] + uVar5),(ulong)uVar10);
        if (*(uint *)(param_1 + 0x2e5) < 2) {
          *(uint *)(param_1 + 0x2e5) = *(uint *)(param_1 + 0x2e5) + 1;
        }
        uVar10 = *(uint *)((long)param_1 + 0xac);
        uVar9 = (ulong)uVar10;
        if (uVar10 < *(uint *)((long)param_1 + 0x172c)) {
          *(uint *)((long)param_1 + 0x172c) = uVar10;
        }
      }
      memcpy((void *)(param_1[0xc] + uVar9),(void *)(*(long *)*param_1 - uVar14),uVar14);
      uVar11 = (int)param_1[10] - *(int *)((long)param_1 + 0x172c);
      uVar10 = *(int *)((long)param_1 + 0xac) + uVar12;
      *(uint *)((long)param_1 + 0xac) = uVar10;
      if (uVar11 <= uVar12) {
        uVar12 = uVar11;
      }
      *(uint *)((long)param_1 + 0x172c) = uVar12 + *(int *)((long)param_1 + 0x172c);
      uVar5 = (ulong)uVar10;
      param_1[0x13] = uVar5;
      if ((ulong)param_1[0x2e7] < uVar5) {
LAB_00182004:
        param_1[0x2e7] = uVar5;
      }
    }
    else {
      *(undefined4 *)(param_1 + 0x2e5) = 2;
      memcpy((void *)param_1[0xc],(void *)(*plVar8 - uVar5),uVar5);
      uVar12 = *(uint *)(param_1 + 10);
      uVar5 = (ulong)uVar12;
      *(uint *)((long)param_1 + 0xac) = uVar12;
      *(uint *)((long)param_1 + 0x172c) = uVar12;
      param_1[0x13] = uVar5;
      if ((ulong)param_1[0x2e7] < uVar5) goto LAB_00182004;
    }
  }
  if (!bVar3) {
    return 3;
  }
  if ((((param_2 | 4) != 4) && (*(int *)(*param_1 + 8) == 0)) && (param_1[0x13] == uVar5)) {
    return 1;
  }
  uVar12 = (int)param_1[0xd] - (int)uVar5;
  if (uVar12 < *(uint *)(*param_1 + 8)) {
    uVar14 = (ulong)*(uint *)(param_1 + 10);
    if ((long)uVar14 <= param_1[0x13]) {
      uVar10 = (int)uVar5 - *(uint *)(param_1 + 10);
      param_1[0x13] = param_1[0x13] - uVar14;
      *(uint *)((long)param_1 + 0xac) = uVar10;
      memcpy((void *)param_1[0xc],(void *)(param_1[0xc] + uVar14),(ulong)uVar10);
      if (*(uint *)(param_1 + 0x2e5) < 2) {
        *(uint *)(param_1 + 0x2e5) = *(uint *)(param_1 + 0x2e5) + 1;
      }
      uVar12 = (int)param_1[10] + uVar12;
      uVar10 = *(uint *)((long)param_1 + 0xac);
      uVar5 = (ulong)uVar10;
      if (uVar10 < *(uint *)((long)param_1 + 0x172c)) {
        *(uint *)((long)param_1 + 0x172c) = uVar10;
      }
    }
  }
  plVar8 = (long *)*param_1;
  uVar10 = *(uint *)(plVar8 + 1);
  if (uVar10 <= uVar12) {
    uVar12 = uVar10;
  }
  uVar14 = (ulong)uVar12;
  if (uVar12 == 0) goto LAB_00182168;
  pvVar15 = (void *)(param_1[0xc] + uVar5);
  *(uint *)(plVar8 + 1) = uVar10 - uVar12;
  memcpy(pvVar15,(void *)*plVar8,uVar14);
  if (*(int *)(plVar8[7] + 0x30) == 2) {
    lVar4 = FUN_0017ef30(plVar8[0xc],pvVar15,uVar12);
LAB_00182124:
    plVar8[0xc] = lVar4;
  }
  else if (*(int *)(plVar8[7] + 0x30) == 1) {
    lVar4 = FUN_0017f300(plVar8[0xc],pvVar15,uVar12);
    goto LAB_00182124;
  }
  *plVar8 = *plVar8 + uVar14;
  plVar8[2] = plVar8[2] + uVar14;
  uVar11 = (int)param_1[10] - *(int *)((long)param_1 + 0x172c);
  uVar10 = *(int *)((long)param_1 + 0xac) + uVar12;
  uVar5 = (ulong)uVar10;
  *(uint *)((long)param_1 + 0xac) = uVar10;
  if (uVar11 <= uVar12) {
    uVar12 = uVar11;
  }
  *(uint *)((long)param_1 + 0x172c) = uVar12 + *(int *)((long)param_1 + 0x172c);
LAB_00182168:
  if ((ulong)param_1[0x2e7] < uVar5) {
    param_1[0x2e7] = uVar5;
  }
  uVar14 = param_1[3] - (ulong)(uint)(*(int *)((long)param_1 + 0x1734) + 0x2a >> 3);
  if (0xfffe < uVar14) {
    uVar14 = 0xffff;
  }
  uVar10 = (uint)uVar14;
  uVar12 = *(uint *)(param_1 + 10);
  if (uVar10 <= *(uint *)(param_1 + 10)) {
    uVar12 = uVar10;
  }
  iVar6 = (int)param_1[0x13];
  uVar11 = (int)uVar5 - iVar6;
  if (uVar11 < uVar12) {
    if (param_2 == 0) {
      return 0;
    }
    if (param_2 != 4 && (int)uVar5 == iVar6) {
      return 0;
    }
    if (*(int *)(*param_1 + 8) != 0) {
      return 0;
    }
  }
  uVar12 = uVar11;
  if (uVar10 <= uVar11) {
    uVar12 = uVar10;
  }
  if (param_2 == 4) {
    bVar3 = *(int *)(*param_1 + 8) == 0 && uVar11 <= uVar10;
  }
  else {
    bVar3 = false;
  }
  FUN_00183c10(param_1,param_1[0xc] + param_1[0x13],(ulong)uVar12,bVar3);
  lVar13 = *param_1;
  param_1[0x13] = param_1[0x13] + (ulong)uVar12;
  lVar4 = *(long *)(lVar13 + 0x38);
  FUN_00183d90(lVar4);
  uVar12 = *(uint *)(lVar13 + 0x20);
  if (*(uint *)(lVar4 + 0x28) <= *(uint *)(lVar13 + 0x20)) {
    uVar12 = *(uint *)(lVar4 + 0x28);
  }
  uVar5 = (ulong)uVar12;
  if (uVar12 != 0) {
    memcpy(*(void **)(lVar13 + 0x18),*(void **)(lVar4 + 0x20),uVar5);
    *(ulong *)(lVar13 + 0x18) = *(long *)(lVar13 + 0x18) + uVar5;
    *(ulong *)(lVar4 + 0x20) = *(long *)(lVar4 + 0x20) + uVar5;
    *(ulong *)(lVar13 + 0x28) = *(long *)(lVar13 + 0x28) + uVar5;
    *(uint *)(lVar13 + 0x20) = *(int *)(lVar13 + 0x20) - uVar12;
    lVar13 = *(long *)(lVar4 + 0x28) - uVar5;
    *(long *)(lVar4 + 0x28) = lVar13;
    if (lVar13 == 0) {
      *(undefined8 *)(lVar4 + 0x20) = *(undefined8 *)(lVar4 + 0x10);
    }
  }
  uVar7 = 2;
  if (bVar3 == false) {
    uVar7 = 0;
  }
  return uVar7;
}

