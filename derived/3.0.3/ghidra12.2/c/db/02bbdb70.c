
void FUN_02bbdb70(long param_1,int param_2)

{
  int *piVar1;
  long *plVar2;
  long *plVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  uint uVar7;
  undefined2 uVar8;
  uint uVar9;
  undefined8 *puVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined8 *puVar14;
  int iVar15;
  long *plVar16;
  long lVar17;
  byte local_24 [4];
  
  piVar1 = (int *)(param_1 + 0x1c2d0);
  if (0 < *piVar1) {
    lVar12 = 0;
    puVar10 = *(undefined8 **)(param_1 + 0x1c2e0);
    do {
      puVar14 = *(undefined8 **)(*(long *)(param_1 + 0x1c2d8) + lVar12 * 8);
      lVar12 = lVar12 + 1;
      *puVar14 = puVar10;
      *(undefined8 **)(param_1 + 0x1c2e0) = puVar14;
      puVar10 = puVar14;
    } while (lVar12 < *piVar1);
  }
  local_24[0] = *(byte *)(param_1 + 0x1f8);
  *piVar1 = 0;
  if (7 < local_24[0]) {
    local_24[0] = 0xff;
  }
  lVar12 = FUN_025830c0(DAT_055021a0,local_24,1);
  if (lVar12 != 0) {
    lVar13 = lVar12 + 0x194b0;
    if (*(long *)(lVar12 + 0x194b8) == 0) {
      lVar13 = *(long *)(DAT_05574040 + 0x20);
    }
    if ((*(long **)(lVar13 + 0x8560) == (long *)0x0) ||
       (puVar10 = (undefined8 *)**(long **)(lVar13 + 0x8560), puVar10 == (undefined8 *)0x0)) {
      uVar9 = 1;
    }
    else {
      uVar9 = (**(code **)*puVar10)();
      uVar9 = uVar9 ^ 1;
    }
    if (param_2 == 0x58) {
      iVar15 = *piVar1;
      lVar12 = 0;
      plVar2 = (long *)(*(long *)(lVar13 + 0x8548) + *(long *)(lVar13 + 0x8540));
      do {
        if (*(int *)(param_1 + 0x1c2d4) <= iVar15) break;
        uVar7 = *(uint *)((long)plVar2 + lVar12 + 0xaf00);
        plVar3 = plVar2 + (ulong)uVar7 * 0xe;
        if (399 < uVar7) {
          plVar3 = plVar2;
        }
        if (*plVar3 != 0) {
          if ((*(int *)((long)plVar3 + 0x2c) != 0 && (int)plVar3[2] != 0) &&
             (((*(byte *)((long)plVar3 + 0x6e) ^ 0xff) & 6) == 0)) {
            plVar16 = *(long **)(param_1 + 0x1c2e0);
            if (plVar16 != (long *)0x0) {
              *(long *)(param_1 + 0x1c2e0) = *plVar16;
            }
            lVar5 = plVar3[1];
            *plVar16 = *plVar3;
            plVar16[1] = lVar5;
            lVar11 = plVar3[4];
            lVar5 = plVar3[2];
            lVar17 = plVar3[3];
            *(int *)(plVar16 + 5) = (int)plVar3[5];
            plVar16[3] = lVar17;
            plVar16[4] = lVar11;
            plVar16[2] = lVar5;
            uVar4 = *(undefined8 *)((long)plVar3 + 0x2c);
            uVar6 = *(undefined8 *)((long)plVar3 + 0x34);
            *(undefined8 *)((long)plVar16 + 0x3c) = *(undefined8 *)((long)plVar3 + 0x3c);
            *(undefined8 *)((long)plVar16 + 0x34) = uVar6;
            *(undefined8 *)((long)plVar16 + 0x2c) = uVar4;
            uVar7 = *(uint *)((long)plVar3 + 0x44);
            if (1 < uVar7) {
              uVar7 = 0;
            }
            *(uint *)((long)plVar16 + 0x44) = uVar7;
            lVar17 = plVar3[0xb];
            lVar5 = plVar3[10];
            plVar16[9] = plVar3[9];
            plVar16[10] = lVar5;
            plVar16[0xb] = lVar17;
            *(char *)(plVar16 + 0xc) = (char)plVar3[0xc];
            *(undefined1 *)((long)plVar16 + 0x61) = *(undefined1 *)((long)plVar3 + 0x61);
            *(undefined1 *)((long)plVar16 + 0x62) = *(undefined1 *)((long)plVar3 + 0x62);
            *(undefined1 *)((long)plVar16 + 99) = *(undefined1 *)((long)plVar3 + 99);
            *(undefined1 *)((long)plVar16 + 100) = *(undefined1 *)((long)plVar3 + 100);
            *(undefined1 *)((long)plVar16 + 0x65) = *(undefined1 *)((long)plVar3 + 0x65);
            *(undefined1 *)((long)plVar16 + 0x66) = *(undefined1 *)((long)plVar3 + 0x66);
            *(undefined1 *)((long)plVar16 + 0x67) = *(undefined1 *)((long)plVar3 + 0x67);
            *(char *)(plVar16 + 0xd) = (char)plVar3[0xd];
            *(undefined2 *)((long)plVar16 + 0x6a) = *(undefined2 *)((long)plVar3 + 0x6a);
            uVar8 = *(undefined2 *)((long)plVar3 + 0x6c);
            *(undefined1 *)((long)plVar16 + 0x6e) = *(undefined1 *)((long)plVar3 + 0x6e);
            *(undefined2 *)((long)plVar16 + 0x6c) = uVar8;
            iVar15 = *piVar1;
            if (iVar15 < *(int *)(param_1 + 0x1c2d4)) {
              *(long **)(*(long *)(param_1 + 0x1c2d8) + (long)iVar15 * 8) = plVar16;
              iVar15 = *piVar1 + 1;
              *piVar1 = iVar15;
            }
          }
        }
        lVar12 = lVar12 + 4;
      } while (lVar12 != 0x640);
    }
    else if (param_2 == 0x5c) {
      lVar12 = 0;
      iVar15 = *piVar1;
      plVar2 = (long *)(*(long *)(lVar13 + 0x8548) + *(long *)(lVar13 + 0x8540));
      do {
        if (*(int *)(param_1 + 0x1c2d4) <= iVar15) break;
        uVar7 = *(uint *)((long)plVar2 + lVar12 + 0xaf00);
        plVar3 = plVar2 + (ulong)uVar7 * 0xe;
        if (399 < uVar7) {
          plVar3 = plVar2;
        }
        if (*plVar3 != 0) {
          if (((*(int *)((long)plVar3 + 0x2c) != 0 && (int)plVar3[2] != 0) &&
              ((*(byte *)((long)plVar3 + 0x6e) & 1) != 0)) &&
             ((*(byte *)((long)plVar3 + 0x6e) & 6) != 6)) {
            plVar16 = *(long **)(param_1 + 0x1c2e0);
            if (plVar16 != (long *)0x0) {
              *(long *)(param_1 + 0x1c2e0) = *plVar16;
            }
            lVar5 = plVar3[1];
            *plVar16 = *plVar3;
            plVar16[1] = lVar5;
            lVar11 = plVar3[4];
            lVar5 = plVar3[2];
            lVar17 = plVar3[3];
            *(int *)(plVar16 + 5) = (int)plVar3[5];
            plVar16[3] = lVar17;
            plVar16[4] = lVar11;
            plVar16[2] = lVar5;
            uVar4 = *(undefined8 *)((long)plVar3 + 0x2c);
            uVar6 = *(undefined8 *)((long)plVar3 + 0x34);
            *(undefined8 *)((long)plVar16 + 0x3c) = *(undefined8 *)((long)plVar3 + 0x3c);
            *(undefined8 *)((long)plVar16 + 0x34) = uVar6;
            *(undefined8 *)((long)plVar16 + 0x2c) = uVar4;
            uVar7 = *(uint *)((long)plVar3 + 0x44);
            if (1 < uVar7) {
              uVar7 = 0;
            }
            *(uint *)((long)plVar16 + 0x44) = uVar7;
            lVar17 = plVar3[0xb];
            lVar5 = plVar3[10];
            plVar16[9] = plVar3[9];
            plVar16[10] = lVar5;
            plVar16[0xb] = lVar17;
            *(char *)(plVar16 + 0xc) = (char)plVar3[0xc];
            *(undefined1 *)((long)plVar16 + 0x61) = *(undefined1 *)((long)plVar3 + 0x61);
            *(undefined1 *)((long)plVar16 + 0x62) = *(undefined1 *)((long)plVar3 + 0x62);
            *(undefined1 *)((long)plVar16 + 99) = *(undefined1 *)((long)plVar3 + 99);
            *(undefined1 *)((long)plVar16 + 100) = *(undefined1 *)((long)plVar3 + 100);
            *(undefined1 *)((long)plVar16 + 0x65) = *(undefined1 *)((long)plVar3 + 0x65);
            *(undefined1 *)((long)plVar16 + 0x66) = *(undefined1 *)((long)plVar3 + 0x66);
            *(undefined1 *)((long)plVar16 + 0x67) = *(undefined1 *)((long)plVar3 + 0x67);
            *(char *)(plVar16 + 0xd) = (char)plVar3[0xd];
            *(undefined2 *)((long)plVar16 + 0x6a) = *(undefined2 *)((long)plVar3 + 0x6a);
            uVar8 = *(undefined2 *)((long)plVar3 + 0x6c);
            *(undefined1 *)((long)plVar16 + 0x6e) = *(undefined1 *)((long)plVar3 + 0x6e);
            *(undefined2 *)((long)plVar16 + 0x6c) = uVar8;
            iVar15 = *piVar1;
            if (iVar15 < *(int *)(param_1 + 0x1c2d4)) {
              *(long **)(*(long *)(param_1 + 0x1c2d8) + (long)iVar15 * 8) = plVar16;
              iVar15 = *piVar1 + 1;
              *piVar1 = iVar15;
            }
          }
        }
        lVar12 = lVar12 + 4;
      } while (lVar12 != 0x640);
    }
    if ((((uVar9 & 1) == 0) && (*(long *)(lVar13 + 0x8560) != 0)) &&
       (puVar10 = *(undefined8 **)(*(long *)(lVar13 + 0x8560) + 8), puVar10 != (undefined8 *)0x0)) {
      (**(code **)*puVar10)();
    }
  }
  return;
}

