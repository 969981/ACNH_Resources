
undefined8 FUN_03902d20(long *param_1)

{
  long lVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  int *piVar12;
  undefined4 *puVar13;
  uint *puVar14;
  ulong uVar15;
  int *piVar16;
  uint *puVar17;
  
  puVar13 = (undefined4 *)*param_1;
  uVar8 = puVar13[3];
  if ((uVar8 & 1) == 0) {
    uVar2 = FUN_038cd970(*puVar13);
    *puVar13 = uVar2;
    uVar2 = FUN_038cd970(puVar13[1]);
    puVar13[1] = uVar2;
    uVar2 = FUN_038cd970(puVar13[2]);
    puVar13[2] = uVar2;
    uVar2 = FUN_038cd970(uVar8);
    puVar13[3] = uVar2;
    uVar2 = FUN_038cd970(puVar13[4]);
    puVar13[4] = uVar2;
    lVar1 = *param_1 + (ulong)*(uint *)(*param_1 + 0x10);
    uVar2 = FUN_038cd970(*(undefined4 *)(lVar1 + 0x14));
    *(undefined4 *)(lVar1 + 0x14) = uVar2;
    iVar3 = FUN_038cd970(*(undefined4 *)(lVar1 + 0x18));
    *(int *)(lVar1 + 0x18) = iVar3;
    if (iVar3 != 0) {
      piVar12 = (int *)(lVar1 + 0x1c);
      do {
        iVar4 = FUN_038cd970(*piVar12);
        *piVar12 = iVar4;
        iVar5 = FUN_038cd970(piVar12[1]);
        piVar12[1] = iVar5;
        iVar5 = FUN_038cd970(piVar12[2]);
        piVar12[2] = iVar5;
        iVar5 = FUN_038cd970(piVar12[3]);
        piVar12[3] = iVar5;
        iVar5 = FUN_038cd970(piVar12[4]);
        piVar12[4] = iVar5;
        iVar5 = FUN_038cd970(piVar12[5]);
        piVar12[5] = iVar5;
        piVar12 = (int *)((long)piVar12 + (long)iVar4);
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
    piVar12 = (int *)(*param_1 + (ulong)*(uint *)(*param_1 + 0x10) + 0x14);
    puVar13 = (undefined4 *)((long)piVar12 + (long)*piVar12);
    uVar2 = FUN_038cd970(*puVar13);
    *puVar13 = uVar2;
    iVar3 = FUN_038cd970(puVar13[1]);
    puVar13[1] = iVar3;
    if (iVar3 != 0) {
      piVar12 = puVar13 + 2;
      do {
        iVar4 = FUN_038cd970(*piVar12);
        *piVar12 = iVar4;
        iVar5 = FUN_038cd970(piVar12[1]);
        piVar12[1] = iVar5;
        iVar5 = FUN_038cd970(piVar12[2]);
        piVar12[2] = iVar5;
        iVar5 = FUN_038cd970(piVar12[3]);
        piVar12[3] = iVar5;
        piVar12 = (int *)((long)piVar12 + (long)iVar4);
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
    iVar3 = *(int *)(lVar1 + 0x18);
    if (iVar3 != 0) {
      iVar4 = 0;
      piVar12 = (int *)(lVar1 + 0x1c);
      do {
        uVar15 = (ulong)(uint)piVar12[1];
        piVar16 = (int *)((long)piVar12 + uVar15 + 0x18);
        iVar5 = FUN_038cd970(*piVar16);
        *piVar16 = iVar5;
        iVar6 = FUN_038cd970(piVar16[1]);
        piVar16[1] = iVar6;
        if (iVar6 != 0) {
          piVar16 = piVar16 + 2;
          do {
            iVar5 = FUN_038cd970(*piVar16);
            *piVar16 = iVar5;
            iVar7 = FUN_038cd970(piVar16[1]);
            piVar16[1] = iVar7;
            iVar7 = FUN_038cd970(piVar16[2]);
            piVar16[2] = iVar7;
            piVar16 = (int *)((long)piVar16 + (long)iVar5);
            iVar6 = iVar6 + -1;
          } while (iVar6 != 0);
          uVar15 = (ulong)(uint)piVar12[1];
          iVar5 = *(int *)((long)piVar12 + uVar15 + 0x18);
        }
        puVar13 = (undefined4 *)((long)piVar12 + (long)iVar5 + uVar15 + 0x18);
        uVar2 = FUN_038cd970(*puVar13);
        *puVar13 = uVar2;
        iVar5 = FUN_038cd970(puVar13[1]);
        puVar13[1] = iVar5;
        if (iVar5 != 0) {
          piVar16 = puVar13 + 2;
          do {
            iVar6 = FUN_038cd970(*piVar16);
            *piVar16 = iVar6;
            iVar7 = FUN_038cd970(piVar16[1]);
            piVar16[1] = iVar7;
            iVar7 = FUN_038cd970(piVar16[2]);
            piVar16[2] = iVar7;
            piVar16 = (int *)((long)piVar16 + (long)iVar6);
            iVar5 = iVar5 + -1;
          } while (iVar5 != 0);
        }
        piVar16 = (int *)((long)piVar12 + (ulong)(uint)piVar12[1] + 0x18);
        piVar16 = (int *)((long)piVar16 + (long)*piVar16);
        puVar13 = (undefined4 *)((long)piVar16 + (long)*piVar16);
        uVar2 = FUN_038cd970(*puVar13);
        *puVar13 = uVar2;
        iVar5 = FUN_038cd970(puVar13[1]);
        puVar13[1] = iVar5;
        if (iVar5 != 0) {
          piVar16 = puVar13 + 2;
          do {
            iVar6 = FUN_038cd970(*piVar16);
            *piVar16 = iVar6;
            iVar7 = FUN_038cd970(piVar16[1]);
            piVar16[1] = iVar7;
            iVar7 = FUN_038cd970(piVar16[2]);
            piVar16[2] = iVar7;
            piVar16 = (int *)((long)piVar16 + (long)iVar6);
            iVar5 = iVar5 + -1;
          } while (iVar5 != 0);
        }
        piVar16 = (int *)((long)piVar12 + (ulong)(uint)piVar12[1] + 0x18);
        piVar16 = (int *)((long)piVar16 + (long)*piVar16);
        piVar16 = (int *)((long)piVar16 + (long)*piVar16);
        puVar13 = (undefined4 *)((long)piVar16 + (long)*piVar16);
        uVar2 = FUN_038cd970(*puVar13);
        *puVar13 = uVar2;
        iVar5 = FUN_038cd970(puVar13[1]);
        puVar13[1] = iVar5;
        if (iVar5 != 0) {
          piVar16 = puVar13 + 2;
          do {
            iVar6 = FUN_038cd970(*piVar16);
            *piVar16 = iVar6;
            iVar7 = FUN_038cd970(piVar16[1]);
            piVar16[1] = iVar7;
            iVar7 = FUN_038cd970(piVar16[2]);
            piVar16[2] = iVar7;
            piVar16 = (int *)((long)piVar16 + (long)iVar6);
            iVar5 = iVar5 + -1;
          } while (iVar5 != 0);
        }
        piVar16 = (int *)((long)piVar12 + (ulong)(uint)piVar12[1] + 0x18);
        piVar16 = (int *)((long)piVar16 + (long)*piVar16);
        piVar16 = (int *)((long)piVar16 + (long)*piVar16);
        piVar16 = (int *)((long)piVar16 + (long)*piVar16);
        puVar13 = (undefined4 *)((long)piVar16 + (long)*piVar16);
        uVar2 = FUN_038cd970(*puVar13);
        *puVar13 = uVar2;
        iVar5 = FUN_038cd970(puVar13[1]);
        puVar13[1] = iVar5;
        if (iVar5 != 0) {
          piVar16 = puVar13 + 2;
          do {
            iVar6 = FUN_038cd970(*piVar16);
            *piVar16 = iVar6;
            iVar7 = FUN_038cd970(piVar16[1]);
            piVar16[1] = iVar7;
            iVar7 = FUN_038cd970(piVar16[2]);
            piVar16[2] = iVar7;
            iVar7 = FUN_038cd970(piVar16[3]);
            piVar16[3] = iVar7;
            piVar16 = (int *)((long)piVar16 + (long)iVar6);
            iVar5 = iVar5 + -1;
          } while (iVar5 != 0);
        }
        piVar16 = (int *)((long)piVar12 + (ulong)(uint)piVar12[1] + 0x18);
        piVar16 = (int *)((long)piVar16 + (long)*piVar16);
        piVar16 = (int *)((long)piVar16 + (long)*piVar16);
        piVar16 = (int *)((long)piVar16 + (long)*piVar16);
        piVar16 = (int *)((long)piVar16 + (long)*piVar16);
        puVar13 = (undefined4 *)((long)piVar16 + (long)*piVar16);
        uVar2 = FUN_038cd970(*puVar13);
        *puVar13 = uVar2;
        iVar5 = FUN_038cd970(puVar13[1]);
        puVar13[1] = iVar5;
        if (iVar5 != 0) {
          piVar16 = puVar13 + 2;
          do {
            iVar6 = FUN_038cd970(*piVar16);
            *piVar16 = iVar6;
            iVar7 = FUN_038cd970(piVar16[1]);
            piVar16[1] = iVar7;
            iVar7 = FUN_038cd970(piVar16[2]);
            piVar16[2] = iVar7;
            iVar7 = FUN_038cd970(piVar16[3]);
            piVar16[3] = iVar7;
            piVar16 = (int *)((long)piVar16 + (long)iVar6);
            iVar5 = iVar5 + -1;
          } while (iVar5 != 0);
        }
        piVar16 = (int *)((long)piVar12 + (ulong)(uint)piVar12[1] + 0x18);
        piVar16 = (int *)((long)piVar16 + (long)*piVar16);
        piVar16 = (int *)((long)piVar16 + (long)*piVar16);
        piVar16 = (int *)((long)piVar16 + (long)*piVar16);
        piVar16 = (int *)((long)piVar16 + (long)*piVar16);
        piVar16 = (int *)((long)piVar16 + (long)*piVar16);
        puVar13 = (undefined4 *)((long)piVar16 + (long)*piVar16);
        uVar2 = FUN_038cd970(*puVar13);
        *puVar13 = uVar2;
        iVar5 = FUN_038cd970(puVar13[1]);
        puVar13[1] = iVar5;
        if (iVar5 != 0) {
          puVar14 = puVar13 + 2;
          puVar17 = puVar14;
          do {
            uVar8 = FUN_038cd970(*puVar17);
            *puVar17 = uVar8;
            uVar9 = FUN_038cd970(puVar17[1]);
            puVar17[1] = uVar9;
            uVar9 = FUN_038cd970(puVar17[2]);
            puVar17[2] = uVar9;
            puVar17 = (uint *)((long)puVar17 + (ulong)uVar8);
            iVar5 = iVar5 + -1;
          } while (iVar5 != 0);
          iVar5 = puVar13[1];
          if (iVar5 != 0) {
            iVar6 = 0;
            do {
              uVar8 = puVar14[2];
              puVar13 = (undefined4 *)((long)puVar14 + (ulong)uVar8 + 0xc);
              uVar2 = FUN_038cd970(*puVar13);
              *puVar13 = uVar2;
              iVar7 = FUN_038cd970(*(undefined4 *)((long)puVar14 + (ulong)uVar8 + 0x10));
              *(int *)((long)puVar14 + (ulong)uVar8 + 0x10) = iVar7;
              if (iVar7 != 0) {
                piVar16 = (int *)((long)puVar14 + (ulong)uVar8 + 0x14);
                do {
                  iVar10 = FUN_038cd970(*piVar16);
                  *piVar16 = iVar10;
                  iVar11 = FUN_038cd970(piVar16[1]);
                  piVar16[1] = iVar11;
                  iVar11 = FUN_038cd970(piVar16[2]);
                  piVar16[2] = iVar11;
                  piVar16 = (int *)((long)piVar16 + (long)iVar10);
                  iVar7 = iVar7 + -1;
                } while (iVar7 != 0);
              }
              iVar6 = iVar6 + 1;
              puVar14 = (uint *)((long)puVar14 + (ulong)*puVar14);
            } while (iVar5 != iVar6);
          }
        }
        iVar4 = iVar4 + 1;
        piVar12 = (int *)((long)piVar12 + (long)*piVar12);
      } while (iVar3 != iVar4);
    }
    piVar12 = (int *)(*param_1 + (ulong)*(uint *)(*param_1 + 0x10) + 0x14);
    piVar12 = (int *)((long)piVar12 + (long)*piVar12);
    puVar13 = (undefined4 *)((long)piVar12 + (long)*piVar12);
    uVar2 = FUN_038cd970(*puVar13);
    *puVar13 = uVar2;
    iVar3 = FUN_038cd970(puVar13[1]);
    puVar13[1] = iVar3;
    if (iVar3 != 0) {
      piVar12 = puVar13 + 2;
      do {
        iVar4 = FUN_038cd970(*piVar12);
        *piVar12 = iVar4;
        iVar5 = FUN_038cd970(piVar12[1]);
        piVar12[1] = iVar5;
        iVar5 = FUN_038cd970(piVar12[2]);
        piVar12[2] = iVar5;
        iVar5 = FUN_038cd970(piVar12[3]);
        piVar12[3] = iVar5;
        piVar12 = (int *)((long)piVar12 + (long)iVar4);
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
    *(uint *)(*param_1 + 0xc) = *(uint *)(*param_1 + 0xc) | 1;
  }
  return 1;
}

