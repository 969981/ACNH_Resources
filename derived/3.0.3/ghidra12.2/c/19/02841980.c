
bool FUN_02841980(long param_1,uint param_2)

{
  bool bVar1;
  long lVar2;
  int iVar3;
  byte bVar4;
  bool bVar5;
  long *plVar6;
  undefined8 *puVar7;
  uint uVar8;
  uint uVar9;
  byte *pbVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  uint *puVar15;
  uint *puVar16;
  byte local_7c [4];
  long local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  
  if (2 < param_2) {
    return false;
  }
  lVar2 = param_1 + 0x110;
  puVar16 = (uint *)(lVar2 + (ulong)param_2 * 0x23020 + 0x10);
  if (*puVar16 - 0x23001 < 0xfffdd000) {
    return false;
  }
  puVar15 = (uint *)(lVar2 + (ulong)param_2 * 0x23020);
  uVar14 = 0;
  uVar8 = 0;
  do {
    iVar3 = *(int *)((long)puVar15 + uVar14 + 4);
    uVar14 = uVar14 + 4;
    uVar8 = (iVar3 * 0x16a88000 | (uint)(iVar3 * -0x3361d2af) >> 0x11) * 0x1b873593 ^ uVar8;
    uVar8 = (uVar8 >> 0x13 | uVar8 << 0xd) * 5 + 0xe6546b64;
  } while (uVar14 < 0x23019);
  uVar8 = (uVar8 ^ 0x2301c ^ (uVar8 ^ 0x2301c) >> 0x10) * -0x7a143595;
  uVar8 = (uVar8 ^ uVar8 >> 0xd) * -0x3d4d51cb;
  if (*puVar15 != (uVar8 ^ uVar8 >> 0x10)) {
    return false;
  }
  if (DAT_04cd19d8 == 0) {
    pbVar10 = &DAT_0548e140;
LAB_02841ae8:
    if (*pbVar10 < 8) goto LAB_02841b60;
LAB_02841af4:
    if (DAT_0537d558 == (long *)0x0) {
LAB_02841b58:
      pbVar10 = &DAT_0548e168;
      goto LAB_02841b60;
    }
    lVar12 = *DAT_0537d558;
    bVar4 = *(byte *)(lVar12 + 0x473);
    pbVar10 = PTR_DAT_04bb5038;
    if ((long)(char)bVar4 != 0xffffffffffffffff) {
      puVar15 = (uint *)(lVar12 + 0x48) + ((long)(char)bVar4 & 0xffffffffU) * 0x20;
      if (7 < bVar4) {
        puVar15 = (uint *)(lVar12 + 0x48);
      }
      if ((*puVar15 & 8) != 0) {
        pbVar10 = (byte *)(lVar12 + 0x471);
      }
    }
    local_7c[0] = *pbVar10;
    if (7 < local_7c[0]) goto LAB_02841b58;
  }
  else {
    pbVar10 = PTR_DAT_04bb32e0;
    if (*(int *)(DAT_04cd19d8 + 0x15c) != 0) {
      pbVar10 = (byte *)(DAT_04cd19d8 + 0x158);
    }
    if (7 < *pbVar10) {
      if ((*(int *)(DAT_04cd19d8 + 0x15c) != 0) && (DAT_054f5738 != 0)) {
        pbVar10 = (byte *)(DAT_054f5738 + 0x11a5);
        goto LAB_02841ae8;
      }
      goto LAB_02841af4;
    }
LAB_02841b60:
    local_7c[0] = *pbVar10;
    if (7 < local_7c[0]) {
      local_7c[0] = 0xff;
    }
  }
  lVar12 = FUN_02583354(*(undefined8 *)PTR_DAT_04bb4f78,local_7c,1);
  if (lVar12 == 0) {
    return false;
  }
  lVar11 = *(long *)(lVar12 + 0x18518);
  if (lVar11 == 0) {
    uVar14 = 0;
  }
  else {
    if (*(undefined8 **)(lVar11 + 0x10) == (undefined8 *)0x0) {
      uVar14 = 0;
    }
    else {
      uVar14 = (**(code **)**(undefined8 **)(lVar11 + 0x10))();
      lVar11 = *(long *)(lVar12 + 0x18518);
      uVar14 = uVar14 & 0xffffffff;
      if (lVar11 == 0) goto LAB_02841c48;
    }
    plVar6 = *(long **)(lVar11 + 0x20);
    if (plVar6 != (long *)0x0) {
      local_78 = *(long *)(lVar12 + 0x184f8);
      local_70 = *(undefined8 *)(lVar12 + 0x18500);
      uStack_68 = 0x23020;
      (**(code **)(*plVar6 + 0x20))(plVar6,&local_78);
    }
  }
LAB_02841c48:
  uVar8 = *puVar16;
  bVar5 = uVar8 < 0x23001;
  if (bVar5) {
    puVar16 = (uint *)(*(long *)(lVar12 + 0x18500) + *(long *)(lVar12 + 0x184f8));
    memset(puVar16 + 4,0,0x23004);
    memcpy(puVar16 + 5,(void *)(lVar2 + (ulong)param_2 * 0x23020 + 0x14),(ulong)uVar8);
    uVar9 = 0;
    puVar16[4] = uVar8;
    uVar13 = 4;
    do {
      uVar9 = (*(int *)((long)puVar16 + uVar13) * 0x16a88000 |
              (uint)(*(int *)((long)puVar16 + uVar13) * -0x3361d2af) >> 0x11) * 0x1b873593 ^ uVar9;
      uVar9 = (uVar9 >> 0x13 | uVar9 << 0xd) * 5 + 0xe6546b64;
      bVar1 = uVar13 < 0x23019;
      uVar13 = uVar13 + 4;
    } while (bVar1);
    uVar8 = (uVar9 ^ 0x2301c ^ (uVar9 ^ 0x2301c) >> 0x10) * -0x7a143595;
    uVar8 = (uVar8 ^ uVar8 >> 0xd) * -0x3d4d51cb;
    *puVar16 = uVar8 ^ uVar8 >> 0x10;
    *(char *)(param_1 + 0x69170) = (char)param_2;
  }
  if ((uVar14 & 1) == 0) {
    return bVar5;
  }
  if (*(long *)(lVar12 + 0x18518) == 0) {
    return bVar5;
  }
  puVar7 = *(undefined8 **)(*(long *)(lVar12 + 0x18518) + 0x18);
  if (puVar7 == (undefined8 *)0x0) {
    return bVar5;
  }
  (**(code **)*puVar7)();
  return bVar5;
}

