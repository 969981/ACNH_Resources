
void FUN_01d50f10(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  int *piVar2;
  uint *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  ulong uVar8;
  byte *pbVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  uint uVar13;
  uint uVar14;
  long lVar15;
  int iVar16;
  byte bVar17;
  byte local_6c [4];
  byte local_68 [4];
  byte local_64 [4];
  
  puVar4 = PTR_DAT_04bb4f78;
  lVar15 = **(long **)*param_1;
  if (DAT_04cd19d8 == 0) {
    pbVar9 = &DAT_0548e140;
LAB_01d50fa0:
    if (7 < *pbVar9) {
LAB_01d50fac:
      if (DAT_0537d558 != (long *)0x0) {
        lVar10 = *DAT_0537d558;
        bVar17 = *(byte *)(lVar10 + 0x473);
        pbVar9 = PTR_DAT_04bb5038;
        if ((long)(char)bVar17 != 0xffffffffffffffff) {
          puVar3 = (uint *)(lVar10 + 0x48) + ((long)(char)bVar17 & 0xffffffffU) * 0x20;
          if (7 < bVar17) {
            puVar3 = (uint *)(lVar10 + 0x48);
          }
          if ((*puVar3 & 8) != 0) {
            pbVar9 = (byte *)(lVar10 + 0x471);
          }
        }
        local_64[0] = *pbVar9;
        if (local_64[0] < 8) goto LAB_01d5102c;
      }
      pbVar9 = &DAT_0548e168;
    }
  }
  else {
    pbVar9 = PTR_DAT_04bb32e0;
    if (*(int *)(DAT_04cd19d8 + 0x15c) != 0) {
      pbVar9 = (byte *)(DAT_04cd19d8 + 0x158);
    }
    if (7 < *pbVar9) {
      if ((*(int *)(DAT_04cd19d8 + 0x15c) != 0) && (DAT_054f5738 != 0)) {
        pbVar9 = (byte *)(DAT_054f5738 + 0x11a5);
        goto LAB_01d50fa0;
      }
      goto LAB_01d50fac;
    }
  }
  local_64[0] = *pbVar9;
  if (7 < local_64[0]) {
    local_64[0] = 0xff;
  }
LAB_01d5102c:
  local_68[0] = local_64[0];
  if (7 < local_64[0]) {
    local_68[0] = 0xff;
  }
  lVar10 = FUN_025830c0(*(undefined8 *)PTR_DAT_04bb4f78,local_68,1);
  uVar6 = FUN_026585a0(local_64);
  *param_2 = uVar6;
  if ((*(long **)(lVar10 + 0x28) == (long *)0x0) ||
     (puVar7 = (undefined8 *)**(long **)(lVar10 + 0x28), puVar7 == (undefined8 *)0x0)) {
    lVar10 = *(long *)(lVar10 + 0x10) + *(long *)(lVar10 + 8);
    uVar11 = *(undefined8 *)(lVar10 + 0xc168);
    uVar6 = *(undefined8 *)(lVar10 + 0xc150);
    uVar12 = *(undefined8 *)(lVar10 + 0xc158);
    param_2[6] = *(undefined8 *)(lVar10 + 0xc160);
    param_2[7] = uVar11;
    param_2[4] = uVar6;
    param_2[5] = uVar12;
    uVar6 = *(undefined8 *)(lVar10 + 0xc138);
    uVar11 = *(undefined8 *)(lVar10 + 0xc148);
    param_2[2] = *(undefined8 *)(lVar10 + 0xc140);
    param_2[3] = uVar11;
    param_2[1] = uVar6;
  }
  else {
    uVar8 = (**(code **)*puVar7)();
    lVar1 = *(long *)(lVar10 + 0x10) + *(long *)(lVar10 + 8);
    uVar11 = *(undefined8 *)(lVar1 + 0xc138);
    uVar6 = *(undefined8 *)(lVar1 + 0xc140);
    param_2[3] = *(undefined8 *)(lVar1 + 0xc148);
    param_2[1] = uVar11;
    param_2[2] = uVar6;
    uVar11 = *(undefined8 *)(lVar1 + 0xc168);
    uVar6 = *(undefined8 *)(lVar1 + 0xc150);
    uVar12 = *(undefined8 *)(lVar1 + 0xc158);
    param_2[6] = *(undefined8 *)(lVar1 + 0xc160);
    param_2[7] = uVar11;
    param_2[4] = uVar6;
    param_2[5] = uVar12;
    if ((((uVar8 & 1) != 0) && (*(long *)(lVar10 + 0x28) != 0)) &&
       (puVar7 = *(undefined8 **)(*(long *)(lVar10 + 0x28) + 8), puVar7 != (undefined8 *)0x0)) {
      (**(code **)*puVar7)();
    }
  }
  puVar5 = PTR_DAT_04bb5038;
  uVar13 = 0;
  iVar16 = 0;
  do {
    local_6c[0] = puVar5[iVar16];
    if (7 < local_6c[0]) {
      local_6c[0] = 0xff;
    }
    bVar17 = local_64[0];
    if (7 < local_64[0]) {
      bVar17 = 0xff;
    }
    if (local_6c[0] != bVar17) {
      lVar10 = FUN_025830c0(*(undefined8 *)puVar4,local_6c,1);
      if (lVar10 != 0) {
        if (*(long **)(lVar10 + 0x17f68) == (long *)0x0) {
          uVar8 = 0;
        }
        else {
          puVar7 = (undefined8 *)**(long **)(lVar10 + 0x17f68);
          uVar8 = 0;
          if (puVar7 != (undefined8 *)0x0) {
            uVar8 = (**(code **)*puVar7)();
          }
        }
        piVar2 = (int *)(*(long *)(lVar10 + 0x17f50) + *(long *)(lVar10 + 0x17f48));
        uVar14 = uVar13;
        if (*piVar2 != 0) {
          if (6 < uVar13) {
            if ((((uVar8 & 1) != 0) && (*(long *)(lVar10 + 0x17f68) != 0)) &&
               (puVar7 = *(undefined8 **)(*(long *)(lVar10 + 0x17f68) + 8),
               puVar7 != (undefined8 *)0x0)) {
              (**(code **)*puVar7)();
            }
            *(char *)((long)param_2 + 0x105) = (char)uVar13;
            goto LAB_01d51270;
          }
          uVar6 = *(undefined8 *)piVar2;
          uVar11 = *(undefined8 *)(piVar2 + 2);
          uVar12 = *(undefined8 *)(piVar2 + 4);
          uVar14 = uVar13 + 1;
          *(int *)((long)param_2 + (ulong)uVar13 * 0x1c + 0x58) = piVar2[6];
          *(undefined8 *)((long)param_2 + (ulong)uVar13 * 0x1c + 0x48) = uVar11;
          *(undefined8 *)((long)param_2 + (ulong)uVar13 * 0x1c + 0x50) = uVar12;
          *(undefined8 *)((long)param_2 + (ulong)uVar13 * 0x1c + 0x40) = uVar6;
        }
        uVar13 = uVar14;
        if ((((uVar8 & 1) != 0) && (*(long *)(lVar10 + 0x17f68) != 0)) &&
           (puVar7 = *(undefined8 **)(*(long *)(lVar10 + 0x17f68) + 8), puVar7 != (undefined8 *)0x0)
           ) {
          (**(code **)*puVar7)();
        }
      }
    }
    iVar16 = iVar16 + 1;
  } while (iVar16 != 8);
  *(char *)((long)param_2 + 0x105) = (char)uVar13;
  if (uVar13 < 7) {
    puVar7 = (undefined8 *)((long)param_2 + (ulong)uVar13 * 0x1c + 0x44);
    do {
      uVar13 = uVar13 + 1;
      *(undefined8 *)((long)puVar7 + 4) = 0;
      *(undefined8 *)((long)puVar7 + -4) = 0;
      *(undefined8 *)((long)puVar7 + 0xc) = 0;
      puVar7[2] = 0;
      *puVar7 = 0;
      puVar7[1] = 0;
      puVar7 = (undefined8 *)((long)puVar7 + 0x1c);
    } while ((uVar13 & 0xff) != 7);
  }
LAB_01d51270:
  puVar4 = PTR_DAT_04bb21a8;
  *(char *)((long)param_2 + 0x106) = (char)*(undefined4 *)(lVar15 + 0xaa8);
  *(undefined2 *)(param_2 + 0x21) = *(undefined2 *)puVar4;
  return;
}

