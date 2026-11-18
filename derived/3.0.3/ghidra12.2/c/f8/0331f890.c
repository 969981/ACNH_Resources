
void FUN_0331f890(long param_1,uint param_2,uint param_3,ulong param_4)

{
  ushort *puVar1;
  long *plVar2;
  bool bVar3;
  uint uVar4;
  undefined2 *puVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  ushort *puVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  undefined *local_68;
  undefined2 *puStack_60;
  undefined2 local_54 [2];
  undefined *local_50;
  undefined *puStack_48;
  undefined8 local_28;
  
  lVar6 = *(long *)(param_1 + 800);
  if (lVar6 == 0) {
    return;
  }
  uVar11 = (ulong)param_2;
  if ((param_3 & 0xffff) == 0) {
LAB_0331f974:
    plVar2 = (long *)(lVar6 + 0x4a0) + uVar11;
    puVar5 = (undefined2 *)(lVar6 + 0x500) + uVar11;
    if (10 < param_2) {
      plVar2 = (long *)(lVar6 + 0x4a0);
      puVar5 = (undefined2 *)(lVar6 + 0x500);
    }
    *puVar5 = 0;
    puStack_60 = local_54;
    local_54[0] = 0;
    local_68 = PTR_DAT_04bc8e78 + 0x10;
    local_28 = *(undefined8 *)(*(long *)(*plVar2 + 0x20) + 0x18);
    local_50 = PTR_DAT_04bc8e68 + 0x10;
    puStack_48 = &DAT_040c1e5f;
    local_50 = (undefined *)FUN_0328b6d0(&local_28,&local_50,0);
    FUN_032d67f0(&local_50,&local_68);
    return;
  }
  lVar12 = *(long *)(*(long *)PTR_DAT_04bc1118 + 0x20);
  if ((*(uint *)(lVar12 + 0x106c) >> 8 & 1) != 0) {
    lVar10 = 0;
    bVar3 = false;
    do {
      puVar1 = (ushort *)((long)&DAT_0418d22a + lVar10);
      puVar9 = (ushort *)((long)&DAT_0418d22c + lVar10);
      lVar10 = lVar10 + 4;
      if ((uint)*puVar1 == (param_3 & 0xffff) || (uint)*puVar9 == (param_3 & 0xffff)) {
        bVar3 = true;
      }
    } while (lVar10 != 0x52c);
    if (!bVar3) goto LAB_0331f974;
  }
  if (((*(uint *)(lVar12 + 0x106c) >> 7 & 1) != 0) &&
     ((uVar4 = (param_3 & 0xffff) - 0x30, 0x29 < uVar4 ||
      ((1L << ((ulong)uVar4 & 0x3f) & 0x3ff7dfe03ffU) == 0)))) goto LAB_0331f974;
  (**(code **)(*(long *)(lVar12 + 0x1570) + 0x18))(lVar12 + 0x1570);
  puVar9 = *(ushort **)(lVar12 + 0x1578);
  if (*puVar9 == 0) {
LAB_0331fa54:
    lVar6 = *(long *)(param_1 + 800);
  }
  else {
    if ((uint)*puVar9 == (param_3 & 0xffff)) {
      lVar6 = *(long *)(param_1 + 800);
      goto LAB_0331f974;
    }
    uVar7 = 0;
    do {
      uVar8 = uVar7;
      if ((uVar8 == 0x80000) || (puVar9[uVar8 + 1] == 0)) goto LAB_0331fa54;
      if ((uint)puVar9[uVar8 + 1] == (param_3 & 0xffff)) goto LAB_0331fa44;
      if (puVar9[uVar8 + 2] == 0) goto LAB_0331fa54;
      uVar7 = uVar8 + 2;
    } while ((uint)puVar9[uVar8 + 2] != (param_3 & 0xffff));
    uVar8 = uVar8 + 1;
LAB_0331fa44:
    lVar6 = *(long *)(param_1 + 800);
    if (uVar8 < 0x80000) goto LAB_0331f974;
  }
  if (*(int *)(param_1 + 0x308) - 0xdU < 4) {
    if ((param_3 - 0x21 & 0xffff) < 0x5e) {
      uVar7 = 2;
      goto LAB_0331faec;
    }
    uVar7 = 1;
    if (((param_3 + 0xff & 0xffff) < 100) || ((param_3 + 0x20 & 0xffff) < 7)) goto LAB_0331faec;
    uVar4 = param_3 & 0xffff;
    uVar7 = 2;
    if ((uVar4 == 0xa5) || (uVar4 == 0x2022)) goto LAB_0331faec;
    if (uVar4 == 0x203b) {
      uVar7 = 1;
      goto LAB_0331faec;
    }
    if (1 < (param_3 - 0x3001 & 0xffff)) {
      uVar4 = (param_3 & 0xffff) - 0x3003;
      if ((uVar4 < 0x1a) && (uVar7 = 1, (1 << (ulong)(uVar4 & 0x1f) & 0x2007e0dU) != 0))
      goto LAB_0331faec;
      if ((param_3 - 0x30f5 & 0xffff) < 2) {
        uVar7 = param_4 & 1;
        goto LAB_0331faec;
      }
      uVar4 = param_3 & 0xffff;
      uVar7 = 1;
      if (((uVar4 - 0x309d < 2) || (uVar4 - 0x30fb < 2)) || (uVar4 == 0x4edd)) goto LAB_0331faec;
    }
  }
  uVar7 = 0;
LAB_0331faec:
  FUN_0328479c(lVar6,uVar11,param_3,uVar7);
  return;
}

