
void FUN_02e0d240(long param_1,int param_2)

{
  int *piVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  undefined8 uVar5;
  uint uVar6;
  uint uVar7;
  undefined8 *puVar8;
  long lVar9;
  long lVar10;
  undefined8 *puVar11;
  long *plVar12;
  int iVar13;
  undefined8 uVar14;
  long lVar15;
  long lVar16;
  byte local_28 [4];
  int local_24;
  
  piVar1 = (int *)(param_1 + 0x1c1b8);
  if (0 < *piVar1) {
    lVar9 = 0;
    puVar8 = *(undefined8 **)(param_1 + 0x1c1c8);
    do {
      puVar11 = *(undefined8 **)(*(long *)(param_1 + 0x1c1c0) + lVar9 * 8);
      lVar9 = lVar9 + 1;
      *puVar11 = puVar8;
      *(undefined8 **)(param_1 + 0x1c1c8) = puVar11;
      puVar8 = puVar11;
    } while (lVar9 < *piVar1);
  }
  local_28[0] = *(byte *)(param_1 + 0x1f8);
  *piVar1 = 0;
  if (7 < local_28[0]) {
    local_28[0] = 0xff;
  }
  local_24 = param_2;
  lVar9 = FUN_025830c0(DAT_055021a0,local_28,1);
  if (lVar9 != 0) {
    lVar10 = lVar9 + 0x194b0;
    if (*(long *)(lVar9 + 0x194b8) == 0) {
      lVar10 = *(long *)(DAT_05574040 + 0x20);
    }
    if ((*(long **)(lVar10 + 0x2ae98) == (long *)0x0) ||
       (puVar8 = (undefined8 *)**(long **)(lVar10 + 0x2ae98), puVar8 == (undefined8 *)0x0)) {
      uVar7 = 1;
    }
    else {
      uVar7 = (**(code **)*puVar8)();
      uVar7 = uVar7 ^ 1;
    }
    if (local_24 == 0x7e) {
      iVar13 = *piVar1;
      plVar2 = (long *)(*(long *)(lVar10 + 0x2ae80) + *(long *)(lVar10 + 0x2ae78));
      lVar9 = 0x44c;
      do {
        if (*(int *)(param_1 + 0x1c1bc) <= iVar13) break;
        uVar6 = *(uint *)((long)plVar2 + lVar9 * 4);
        plVar3 = plVar2 + (ulong)uVar6 * 0xb;
        if (0x31 < uVar6) {
          plVar3 = plVar2;
        }
        lVar15 = *plVar3;
        if (lVar15 != 0) {
          if ((*(int *)((long)plVar3 + 0x24) != 0 && (int)plVar3[1] != 0) &&
             ((*(byte *)((long)plVar3 + 0x54) & 1) != 0)) {
            plVar12 = *(long **)(param_1 + 0x1c1c8);
            if (plVar12 != (long *)0x0) {
              *(long *)(param_1 + 0x1c1c8) = *plVar12;
              lVar15 = *plVar3;
            }
            *plVar12 = lVar15;
            lVar15 = plVar3[1];
            lVar4 = plVar3[2];
            lVar16 = plVar3[3];
            *(int *)(plVar12 + 4) = (int)plVar3[4];
            plVar12[2] = lVar4;
            plVar12[3] = lVar16;
            plVar12[1] = lVar15;
            uVar14 = *(undefined8 *)((long)plVar3 + 0x24);
            uVar5 = *(undefined8 *)((long)plVar3 + 0x2c);
            *(undefined8 *)((long)plVar12 + 0x34) = *(undefined8 *)((long)plVar3 + 0x34);
            *(undefined8 *)((long)plVar12 + 0x2c) = uVar5;
            *(undefined8 *)((long)plVar12 + 0x24) = uVar14;
            uVar6 = *(uint *)((long)plVar3 + 0x3c);
            if (1 < uVar6) {
              uVar6 = 0;
            }
            *(uint *)((long)plVar12 + 0x3c) = uVar6;
            *(char *)(plVar12 + 8) = (char)plVar3[8];
            *(undefined1 *)((long)plVar12 + 0x41) = *(undefined1 *)((long)plVar3 + 0x41);
            *(undefined1 *)((long)plVar12 + 0x42) = *(undefined1 *)((long)plVar3 + 0x42);
            *(undefined1 *)((long)plVar12 + 0x43) = *(undefined1 *)((long)plVar3 + 0x43);
            *(undefined1 *)((long)plVar12 + 0x44) = *(undefined1 *)((long)plVar3 + 0x44);
            *(undefined1 *)((long)plVar12 + 0x45) = *(undefined1 *)((long)plVar3 + 0x45);
            *(undefined1 *)((long)plVar12 + 0x46) = *(undefined1 *)((long)plVar3 + 0x46);
            *(undefined1 *)((long)plVar12 + 0x47) = *(undefined1 *)((long)plVar3 + 0x47);
            *(char *)(plVar12 + 9) = (char)plVar3[9];
            *(undefined2 *)((long)plVar12 + 0x4a) = *(undefined2 *)((long)plVar3 + 0x4a);
            uVar14 = *(undefined8 *)((long)plVar3 + 0x4c);
            *(undefined1 *)((long)plVar12 + 0x54) = *(undefined1 *)((long)plVar3 + 0x54);
            *(undefined8 *)((long)plVar12 + 0x4c) = uVar14;
            iVar13 = *piVar1;
            if (iVar13 < *(int *)(param_1 + 0x1c1bc)) {
              *(long **)(*(long *)(param_1 + 0x1c1c0) + (long)iVar13 * 8) = plVar12;
              iVar13 = *piVar1 + 1;
              *piVar1 = iVar13;
            }
          }
        }
        lVar9 = lVar9 + 1;
      } while (lVar9 != 0x47e);
    }
    else if (local_24 == 0) {
      iVar13 = *piVar1;
      plVar2 = (long *)(*(long *)(lVar10 + 0x2ae80) + *(long *)(lVar10 + 0x2ae78));
      lVar9 = 0x44c;
      do {
        if (*(int *)(param_1 + 0x1c1bc) <= iVar13) break;
        uVar6 = *(uint *)((long)plVar2 + lVar9 * 4);
        plVar3 = plVar2 + (ulong)uVar6 * 0xb;
        if (0x31 < uVar6) {
          plVar3 = plVar2;
        }
        lVar15 = *plVar3;
        if (lVar15 != 0) {
          if (*(int *)((long)plVar3 + 0x24) != 0 && (int)plVar3[1] != 0) {
            plVar12 = *(long **)(param_1 + 0x1c1c8);
            if (plVar12 != (long *)0x0) {
              *(long *)(param_1 + 0x1c1c8) = *plVar12;
              lVar15 = *plVar3;
            }
            *plVar12 = lVar15;
            lVar15 = plVar3[1];
            lVar4 = plVar3[2];
            lVar16 = plVar3[3];
            *(int *)(plVar12 + 4) = (int)plVar3[4];
            plVar12[2] = lVar4;
            plVar12[3] = lVar16;
            plVar12[1] = lVar15;
            uVar14 = *(undefined8 *)((long)plVar3 + 0x24);
            uVar5 = *(undefined8 *)((long)plVar3 + 0x2c);
            *(undefined8 *)((long)plVar12 + 0x34) = *(undefined8 *)((long)plVar3 + 0x34);
            *(undefined8 *)((long)plVar12 + 0x2c) = uVar5;
            *(undefined8 *)((long)plVar12 + 0x24) = uVar14;
            uVar6 = *(uint *)((long)plVar3 + 0x3c);
            if (1 < uVar6) {
              uVar6 = 0;
            }
            *(uint *)((long)plVar12 + 0x3c) = uVar6;
            *(char *)(plVar12 + 8) = (char)plVar3[8];
            *(undefined1 *)((long)plVar12 + 0x41) = *(undefined1 *)((long)plVar3 + 0x41);
            *(undefined1 *)((long)plVar12 + 0x42) = *(undefined1 *)((long)plVar3 + 0x42);
            *(undefined1 *)((long)plVar12 + 0x43) = *(undefined1 *)((long)plVar3 + 0x43);
            *(undefined1 *)((long)plVar12 + 0x44) = *(undefined1 *)((long)plVar3 + 0x44);
            *(undefined1 *)((long)plVar12 + 0x45) = *(undefined1 *)((long)plVar3 + 0x45);
            *(undefined1 *)((long)plVar12 + 0x46) = *(undefined1 *)((long)plVar3 + 0x46);
            *(undefined1 *)((long)plVar12 + 0x47) = *(undefined1 *)((long)plVar3 + 0x47);
            *(char *)(plVar12 + 9) = (char)plVar3[9];
            *(undefined2 *)((long)plVar12 + 0x4a) = *(undefined2 *)((long)plVar3 + 0x4a);
            uVar14 = *(undefined8 *)((long)plVar3 + 0x4c);
            *(undefined1 *)((long)plVar12 + 0x54) = *(undefined1 *)((long)plVar3 + 0x54);
            *(undefined8 *)((long)plVar12 + 0x4c) = uVar14;
            iVar13 = *piVar1;
            if (iVar13 < *(int *)(param_1 + 0x1c1bc)) {
              *(long **)(*(long *)(param_1 + 0x1c1c0) + (long)iVar13 * 8) = plVar12;
              iVar13 = *piVar1 + 1;
              *piVar1 = iVar13;
            }
          }
        }
        lVar9 = lVar9 + 1;
      } while (lVar9 != 0x47e);
    }
    if ((((uVar7 & 1) == 0) && (*(long *)(lVar10 + 0x2ae98) != 0)) &&
       (puVar8 = *(undefined8 **)(*(long *)(lVar10 + 0x2ae98) + 8), puVar8 != (undefined8 *)0x0)) {
      (**(code **)*puVar8)();
    }
  }
  return;
}

