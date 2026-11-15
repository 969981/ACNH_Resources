
/* WARNING: Removing unreachable block (ram,0x01df53c4) */

bool FUN_01df50b0(long param_1)

{
  bool bVar1;
  long *plVar2;
  uint *puVar3;
  long *plVar4;
  byte bVar5;
  uint uVar6;
  uint uVar7;
  undefined8 *puVar8;
  int iVar9;
  byte *pbVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  long lVar16;
  undefined8 uVar17;
  byte local_48 [4];
  undefined4 local_44;
  
  lVar12 = *(long *)PTR_DAT_04bb39b0;
  local_48[0] = DAT_0548e140;
  if (lVar12 == 0) {
joined_r0x01df5134:
    if (local_48[0] < 8) goto LAB_01df51a4;
  }
  else {
    pbVar10 = &DAT_0548e140;
    if (*(int *)(lVar12 + 0x15c) != 0) {
      pbVar10 = (byte *)(lVar12 + 0x158);
    }
    local_48[0] = *pbVar10;
    if (*pbVar10 < 8) goto LAB_01df51a4;
    if ((*(int *)(lVar12 + 0x15c) != 0) && (DAT_054f5738 != 0)) {
      local_48[0] = *(byte *)(DAT_054f5738 + 0x11a5);
      goto joined_r0x01df5134;
    }
  }
  if (DAT_0537d558 != (long *)0x0) {
    lVar12 = *DAT_0537d558;
    bVar5 = *(byte *)(lVar12 + 0x473);
    pbVar10 = PTR_DAT_04bb5038;
    if ((long)(char)bVar5 != 0xffffffffffffffff) {
      puVar3 = (uint *)(lVar12 + 0x48) + ((long)(char)bVar5 & 0xffffffffU) * 0x20;
      if (7 < bVar5) {
        puVar3 = (uint *)(lVar12 + 0x48);
      }
      if ((*puVar3 & 8) != 0) {
        pbVar10 = (byte *)(lVar12 + 0x471);
      }
    }
    local_48[0] = *pbVar10;
    if (*pbVar10 < 8) goto LAB_01df51a4;
  }
  local_48[0] = DAT_0548e168;
  if (7 < DAT_0548e168) {
    return false;
  }
LAB_01df51a4:
  lVar12 = FUN_025830c0(*(undefined8 *)PTR_DAT_04bb4f78,local_48,1);
  if (lVar12 == 0) {
    return false;
  }
  lVar16 = lVar12 + 0x194b0;
  lVar11 = lVar16;
  if (*(long *)(lVar12 + 0x194b8) == 0) {
    lVar11 = *(long *)(DAT_05574040 + 0x20);
  }
  if ((*(long **)(lVar11 + 0x2ae60) == (long *)0x0) ||
     (puVar8 = (undefined8 *)**(long **)(lVar11 + 0x2ae60), puVar8 == (undefined8 *)0x0)) {
    uVar6 = 1;
  }
  else {
    uVar6 = (**(code **)*puVar8)();
    uVar6 = uVar6 ^ 1;
  }
  lVar13 = 0;
  iVar9 = 0;
  plVar2 = (long *)(*(long *)(lVar11 + 0x2ae48) + *(long *)(lVar11 + 0x2ae40));
  do {
    uVar7 = *(uint *)((long)plVar2 + lVar13 + 0x60e0);
    plVar4 = plVar2 + (ulong)uVar7 * 0x1f;
    if (99 < uVar7) {
      plVar4 = plVar2;
    }
    if (((*plVar4 == 0 || plVar4[1] == 0) || ((int)plVar4[2] == 0 || plVar4[6] == 0)) ||
       (*(int *)((long)plVar4 + 0x54) == 0 || (int)plVar4[7] == 0)) {
      uVar7 = 0;
    }
    else {
      uVar7 = (uint)((short)plVar4[0xe] != 0);
    }
    lVar13 = lVar13 + 4;
    iVar9 = iVar9 + uVar7;
  } while (lVar13 != 400);
  *(int *)(*(long *)(param_1 + 0x68) + 0xc80) = iVar9;
  lVar13 = *(long *)(param_1 + 0x68);
  iVar9 = *(int *)(lVar13 + 0xc80);
  bVar1 = 0 < iVar9;
  if (0 < iVar9) {
    lVar14 = 0;
    uVar15 = 0;
    plVar2 = (long *)(*(long *)(lVar11 + 0x2ae48) + *(long *)(lVar11 + 0x2ae40));
    do {
      uVar7 = *(uint *)((long)plVar2 + lVar14 + 0x60e0);
      plVar4 = plVar2 + (ulong)uVar7 * 0x1f;
      if (99 < uVar7) {
        plVar4 = plVar2;
      }
      if (((*plVar4 != 0 && plVar4[1] != 0) && ((int)plVar4[2] != 0 && plVar4[6] != 0)) &&
         ((*(int *)((long)plVar4 + 0x54) != 0 && (int)plVar4[7] != 0 && ((short)plVar4[0xe] != 0))))
      {
        *(long *)(lVar13 + (-(uVar15 >> 0x1f) & 0xfffffff800000000 | uVar15 << 3)) = *plVar4;
      }
      lVar14 = lVar14 + 4;
      uVar15 = (ulong)((int)uVar15 + 1);
    } while (lVar14 != 400);
    if (*(long *)(lVar12 + 0x194b8) == 0) {
      lVar16 = *(long *)(DAT_05574040 + 0x20);
    }
    if ((*(long **)(lVar16 + 0x2aca0) == (long *)0x0) ||
       (puVar8 = (undefined8 *)**(long **)(lVar16 + 0x2aca0), puVar8 == (undefined8 *)0x0)) {
      uVar7 = 1;
    }
    else {
      uVar7 = (**(code **)*puVar8)();
      uVar7 = uVar7 ^ 1;
    }
    local_44 = 2;
    uVar17 = *(undefined8 *)(*(long *)(lVar16 + 0x2ac88) + *(long *)(lVar16 + 0x2ac80) + 0x30);
    if ((((uVar7 & 1) == 0) && (*(long *)(lVar16 + 0x2aca0) != 0)) &&
       (puVar8 = *(undefined8 **)(*(long *)(lVar16 + 0x2aca0) + 8), puVar8 != (undefined8 *)0x0)) {
      (**(code **)*puVar8)();
    }
    *(undefined8 *)(*(long *)(param_1 + 0x68) + 0xc88) = uVar17;
    FUN_03ebb160(param_1,1);
  }
  if ((uVar6 & 1) != 0) {
    return bVar1;
  }
  if (*(long *)(lVar11 + 0x2ae60) == 0) {
    return bVar1;
  }
  puVar8 = *(undefined8 **)(*(long *)(lVar11 + 0x2ae60) + 8);
  if (puVar8 == (undefined8 *)0x0) {
    return bVar1;
  }
  (**(code **)*puVar8)();
  return bVar1;
}

