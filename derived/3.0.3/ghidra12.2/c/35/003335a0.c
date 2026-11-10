
void FUN_003335a0(long param_1,int *param_2,long *param_3)

{
  uint *puVar1;
  int iVar2;
  bool bVar3;
  long lVar4;
  uint uVar5;
  char cVar6;
  long lVar7;
  long lVar8;
  int iVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  int *piVar13;
  ulong uVar14;
  int iVar15;
  long lVar16;
  long lVar17;
  long *plVar18;
  long lVar19;
  
  *(undefined1 *)(param_2 + 10) = 1;
  lVar19 = *(long *)(param_2 + 2) + (ulong)*(uint *)(*(long *)(param_2 + 2) + 0x14);
  *(long *)(param_2 + 4) = lVar19;
  *(int *)(param_1 + 0x48) = *(int *)(param_1 + 0x48) + *(int *)(lVar19 + 0x50);
  uVar5 = *(uint *)(*(long *)(param_2 + 2) + 8);
  if (uVar5 == 0xffffffff) {
    iVar9 = 0;
  }
  else {
    iVar9 = 0;
    piVar13 = (int *)(*(long *)(param_2 + 2) + (ulong)uVar5);
    do {
      puVar1 = (uint *)(piVar13 + 3);
      if (*piVar13 == 0x52544d45) {
        iVar9 = iVar9 + 1;
      }
      piVar13 = (int *)((long)piVar13 + (ulong)*puVar1);
    } while (*puVar1 != 0xffffffff);
  }
  *param_2 = iVar9;
  iVar9 = *(int *)(*(long *)(param_2 + 4) + 0x50);
  param_2[1] = iVar9;
  lVar19 = (long)iVar9 * 0x430 + 0x20;
  lVar7 = (**(code **)(**(long **)(param_1 + 0x440) + 0x10))
                    (*(long **)(param_1 + 0x440),lVar19,0x80);
  if (lVar7 != 0) {
    *(long *)(param_1 + 0x448) = *(long *)(param_1 + 0x448) + lVar19;
    *(int *)(param_1 + 0x450) = *(int *)(param_1 + 0x450) + 1;
  }
  *(long *)(param_2 + 8) = lVar7;
  if (param_2[1] != 0) {
    lVar16 = (long)param_2[1] * 0x430;
    lVar19 = lVar7;
    do {
      FUN_00322d90(lVar19);
      lVar19 = lVar19 + 0x430;
      lVar16 = lVar16 + -0x430;
    } while (lVar16 != 0);
  }
  *(long *)(param_2 + 6) = lVar7;
  uVar5 = *(uint *)(*(long *)(param_2 + 2) + 8);
  if (uVar5 != 0xffffffff) {
    piVar13 = (int *)(*(long *)(param_2 + 2) + (ulong)uVar5);
    do {
      if (*piVar13 == 0x52544d45) {
        iVar9 = 0;
        iVar15 = 0;
        *(undefined2 *)((long)param_2 + 0x29) = 0;
        lVar7 = *(long *)(param_2 + 6);
        *(undefined8 *)(lVar7 + 0x110) = 0;
        lVar19 = lVar7;
        do {
          lVar8 = lVar19;
          lVar17 = lVar7 + (long)iVar15 * 0x430;
          *(int *)(lVar17 + 8) = iVar9;
          uVar5 = piVar13[5];
          plVar18 = (long *)(lVar17 + 0x10);
          *plVar18 = (long)piVar13 + (ulong)uVar5;
          *(ulong *)(lVar17 + 0x18) = (long)piVar13 + (ulong)uVar5 + 0x50;
          FUN_003255f0(lVar8,piVar13);
          lVar16 = param_3[1];
          uVar14 = -lVar16;
          lVar19 = (lVar16 + 0x78fU & uVar14) + *param_3;
          *param_3 = lVar19;
          if (*(long *)(lVar17 + 0x308) != 0) {
            lVar19 = ((lVar16 + *(long *)(lVar7 + (long)iVar15 * 0x430 + 0x310)) - 1U & uVar14) +
                     lVar19;
            *param_3 = lVar19;
          }
          if (*(long *)(lVar7 + (long)iVar15 * 0x430 + 0x348) != 0) {
            lVar19 = lVar19 + (lVar16 + 0x7fU & uVar14);
            *param_3 = lVar19;
          }
          if (*(char *)(lVar7 + (long)iVar15 * 0x430 + 3) != '\0') {
            *param_3 = lVar19 + (lVar16 + 0x15fU & uVar14);
          }
          *(ulong *)(param_1 + 0xb8) = *(long *)(param_1 + 0xb8) + (ulong)(uint)piVar13[1];
          if (*(char *)(*plVar18 + 0x8f0) == '\0') {
            cVar6 = *(char *)(*plVar18 + 0x838);
          }
          else {
            *(undefined1 *)((long)param_2 + 0x2a) = 1;
            cVar6 = *(char *)(*plVar18 + 0x838);
          }
          if (cVar6 == '\0') {
            *(undefined1 *)((long)param_2 + 0x29) = 1;
          }
          lVar19 = lVar7 + (long)iVar15 * 0x430;
          iVar2 = iVar15 + 1;
          *(int *)(lVar19 + 0x88) = 0;
          *(undefined8 *)(lVar19 + 0x100) = 0;
          *(undefined8 *)(lVar19 + 0x108) = 0;
          *(undefined8 *)(lVar19 + 0xf0) = 0;
          *(undefined8 *)(lVar19 + 0xf8) = 0;
          *(undefined8 *)(lVar19 + 0xe0) = 0;
          *(undefined8 *)(lVar19 + 0xe8) = 0;
          *(undefined8 *)(lVar19 + 0xd0) = 0;
          *(undefined8 *)(lVar19 + 0xd8) = 0;
          *(undefined8 *)(lVar19 + 0xc0) = 0;
          *(undefined8 *)(lVar19 + 200) = 0;
          *(undefined8 *)(lVar19 + 0xb0) = 0;
          *(undefined8 *)(lVar19 + 0xb8) = 0;
          *(undefined8 *)(lVar19 + 0xa0) = 0;
          *(undefined8 *)(lVar19 + 0xa8) = 0;
          *(undefined8 *)(lVar19 + 0x90) = 0;
          *(undefined8 *)(lVar19 + 0x98) = 0;
          if (piVar13[2] != 0xffffffff) {
            lVar16 = 0;
            lVar17 = (long)iVar2 * 0x430;
            lVar7 = lVar7 + (long)iVar15 * 0x430 + 0x90;
            lVar10 = (long)piVar13 + (ulong)(uint)piVar13[2];
            do {
              lVar12 = *(long *)(param_2 + 6) + lVar17;
              *(int *)(lVar12 + 8) = (int)lVar16;
              lVar11 = lVar10 + (ulong)*(uint *)(lVar10 + 0x14);
              *(long *)(lVar12 + 0x10) = lVar11;
              *(long *)(lVar12 + 0x18) = lVar11 + 0x50;
              FUN_003255f0(lVar12,lVar10);
              lVar4 = param_3[1];
              uVar14 = -lVar4;
              lVar11 = (lVar4 + 0x78fU & uVar14) + *param_3;
              *param_3 = lVar11;
              if (*(long *)(lVar12 + 0x308) != 0) {
                lVar11 = ((lVar4 + *(long *)(lVar12 + 0x310)) - 1U & uVar14) + lVar11;
                *param_3 = lVar11;
              }
              if (*(long *)(lVar12 + 0x348) != 0) {
                lVar11 = lVar11 + (lVar4 + 0x7fU & uVar14);
                *param_3 = lVar11;
              }
              if (*(char *)(lVar12 + 3) != '\0') {
                *param_3 = lVar11 + (lVar4 + 0x15fU & uVar14);
              }
              *(undefined1 *)(lVar12 + 4) = 1;
              if (*(char *)(*(long *)(lVar12 + 0x10) + 0x8f0) != '\0') {
                *(undefined1 *)((long)param_2 + 0x2a) = 1;
              }
              lVar11 = lVar16 * 8;
              lVar16 = lVar16 + 1;
              *(long *)(lVar7 + lVar11) = lVar12;
              *(undefined8 *)(lVar12 + 0x110) = 0;
              lVar12 = *(long *)(lVar7 + lVar11);
              *(undefined8 *)(lVar12 + 0x100) = 0;
              *(undefined8 *)(lVar12 + 0x108) = 0;
              *(undefined8 *)(lVar12 + 0xf0) = 0;
              *(undefined8 *)(lVar12 + 0xf8) = 0;
              *(undefined8 *)(lVar12 + 0xe0) = 0;
              *(undefined8 *)(lVar12 + 0xe8) = 0;
              *(undefined8 *)(lVar12 + 0xd0) = 0;
              *(undefined8 *)(lVar12 + 0xd8) = 0;
              *(undefined8 *)(lVar12 + 0xc0) = 0;
              *(undefined8 *)(lVar12 + 200) = 0;
              *(undefined8 *)(lVar12 + 0xb0) = 0;
              *(undefined8 *)(lVar12 + 0xb8) = 0;
              *(undefined8 *)(lVar12 + 0xa0) = 0;
              *(undefined8 *)(lVar12 + 0xa8) = 0;
              *(undefined8 *)(lVar12 + 0x90) = 0;
              *(undefined8 *)(lVar12 + 0x98) = 0;
              if (*(uint *)(lVar10 + 0xc) == 0xffffffff) break;
              lVar17 = lVar17 + 0x430;
              bVar3 = lVar10 != 0;
              lVar10 = lVar10 + (ulong)*(uint *)(lVar10 + 0xc);
            } while (bVar3);
            *(int *)(lVar19 + 0x88) = (int)lVar16;
            iVar2 = iVar2 + (int)lVar16;
          }
          iVar15 = iVar2;
          if (piVar13[3] == 0xffffffff) {
            return;
          }
          iVar9 = iVar9 + 1;
          piVar13 = (int *)((long)piVar13 + (ulong)(uint)piVar13[3]);
          while (*piVar13 != 0x52544d45) {
            puVar1 = (uint *)(piVar13 + 3);
            piVar13 = (int *)((long)piVar13 + (ulong)*puVar1);
            if (*puVar1 == 0xffffffff) {
              return;
            }
          }
          lVar7 = *(long *)(param_2 + 6);
          lVar19 = lVar7 + (long)iVar15 * 0x430;
          *(undefined8 *)(lVar19 + 0x110) = 0;
          if (lVar8 != 0) {
            *(long *)(lVar8 + 0x110) = lVar19;
          }
        } while( true );
      }
      puVar1 = (uint *)(piVar13 + 3);
      piVar13 = (int *)((long)piVar13 + (ulong)*puVar1);
    } while (*puVar1 != 0xffffffff);
  }
  *(undefined2 *)((long)param_2 + 0x29) = 0;
  return;
}

