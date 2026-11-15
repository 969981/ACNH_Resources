
bool FUN_01df4e20(long param_1)

{
  uint *puVar1;
  byte bVar2;
  undefined8 *puVar3;
  ulong uVar4;
  byte *pbVar5;
  int iVar6;
  long lVar7;
  ulong uVar8;
  uint uVar9;
  long *plVar10;
  long *plVar11;
  undefined1 auStack_48 [8];
  long local_40;
  byte local_14 [4];
  
  lVar7 = *(long *)PTR_DAT_04bb39b0;
  if (lVar7 == 0) {
    pbVar5 = &DAT_0548e140;
LAB_01df4e98:
    if (7 < *pbVar5) {
LAB_01df4ea4:
      if (DAT_0537d558 != (long *)0x0) {
        lVar7 = *DAT_0537d558;
        bVar2 = *(byte *)(lVar7 + 0x473);
        pbVar5 = PTR_DAT_04bb5038;
        if ((long)(char)bVar2 != 0xffffffffffffffff) {
          puVar1 = (uint *)(lVar7 + 0x48) + ((long)(char)bVar2 & 0xffffffffU) * 0x20;
          if (7 < bVar2) {
            puVar1 = (uint *)(lVar7 + 0x48);
          }
          if ((*puVar1 & 8) != 0) {
            pbVar5 = (byte *)(lVar7 + 0x471);
          }
        }
        local_14[0] = *pbVar5;
        if (local_14[0] < 8) goto LAB_01df4f2c;
      }
      pbVar5 = &DAT_0548e168;
    }
  }
  else {
    pbVar5 = PTR_DAT_04bb32e0;
    if (*(int *)(lVar7 + 0x15c) != 0) {
      pbVar5 = (byte *)(lVar7 + 0x158);
    }
    if (7 < *pbVar5) {
      if ((*(int *)(lVar7 + 0x15c) != 0) && (DAT_054f5738 != 0)) {
        pbVar5 = (byte *)(DAT_054f5738 + 0x11a5);
        goto LAB_01df4e98;
      }
      goto LAB_01df4ea4;
    }
  }
  local_14[0] = *pbVar5;
  if (7 < local_14[0]) {
    return false;
  }
LAB_01df4f2c:
  if (*(long *)(DAT_053719b8 + 0x10) == 0) {
    return false;
  }
  FUN_02645730(auStack_48,local_14);
  if ((*(long **)(local_40 + 0x28) == (long *)0x0) ||
     (puVar3 = (undefined8 *)**(long **)(local_40 + 0x28), puVar3 == (undefined8 *)0x0)) {
    plVar11 = (long *)(*(long *)(local_40 + 0x10) + *(long *)(local_40 + 8));
  }
  else {
    uVar4 = (**(code **)*puVar3)();
    plVar11 = (long *)(*(long *)(local_40 + 0x10) + *(long *)(local_40 + 8));
    if ((((uVar4 & 1) != 0) && (*(long *)(local_40 + 0x28) != 0)) &&
       (puVar3 = *(undefined8 **)(*(long *)(local_40 + 0x28) + 8), puVar3 != (undefined8 *)0x0)) {
      (**(code **)*puVar3)();
    }
  }
  lVar7 = 0;
  iVar6 = 0;
  do {
    uVar9 = *(uint *)((long)plVar11 + lVar7 + 0xaf00);
    plVar10 = plVar11 + (ulong)uVar9 * 0xe;
    if (399 < uVar9) {
      plVar10 = plVar11;
    }
    if (*plVar10 == 0) {
      uVar9 = 0;
    }
    else {
      uVar9 = (uint)(*(int *)((long)plVar10 + 0x2c) != 0 && (int)plVar10[2] != 0);
    }
    lVar7 = lVar7 + 4;
    iVar6 = iVar6 + uVar9;
  } while (lVar7 != 0x640);
  *(int *)(*(long *)(param_1 + 0x68) + 0xc80) = iVar6;
  lVar7 = *(long *)(param_1 + 0x68);
  iVar6 = *(int *)(lVar7 + 0xc80);
  if (iVar6 < 1) {
    return 0 < iVar6;
  }
  uVar4 = 0;
  uVar8 = 0;
  do {
    plVar10 = plVar11;
    if (((uint)uVar4 < 400) &&
       (uVar9 = *(uint *)((long)plVar11 + uVar8 * 4 + 0xaf00),
       plVar10 = plVar11 + (ulong)uVar9 * 0xe, 399 < uVar9)) {
      plVar10 = plVar11;
    }
    *(long *)(lVar7 + (-(uVar8 >> 0x1f) & 0xfffffff800000000 | uVar8 << 3)) = *plVar10;
    uVar4 = uVar8 + 1;
    uVar8 = uVar4 & 0xffffffff;
  } while ((int)uVar4 < *(int *)(*(long *)(param_1 + 0x68) + 0xc80));
  *(long *)(*(long *)(param_1 + 0x68) + 0xc88) = plVar11[0x16a8];
  FUN_03ebb160(param_1,1);
  return 0 < iVar6;
}

