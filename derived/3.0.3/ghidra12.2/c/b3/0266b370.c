
void FUN_0266b370(undefined8 *param_1)

{
  undefined8 *puVar1;
  uint uVar2;
  long lVar3;
  ushort uVar4;
  ushort uVar5;
  undefined *puVar6;
  undefined1 *puVar7;
  bool bVar8;
  undefined4 uVar9;
  undefined8 *puVar10;
  ulong uVar11;
  ulong uVar12;
  undefined8 uVar13;
  long *plVar14;
  long lVar15;
  long *plVar16;
  uint uVar17;
  ulong uVar18;
  ulong uVar19;
  ulong uVar20;
  uint local_c4;
  int local_b8;
  uint local_b4;
  undefined8 local_b0;
  undefined1 *local_a8;
  undefined1 local_a0 [64];
  
  if (param_1 != (undefined8 *)0x0) {
    param_1[2] = 0xffffffffffffffff;
    param_1[3] = 0xffffffffffffffff;
    *param_1 = 0xffffffffffffffff;
    param_1[1] = 0xffffffffffffffff;
    puVar6 = PTR_DAT_04bb46b0;
    if (*(long *)PTR_DAT_04bb46b0 != 0) {
      local_a8 = local_a0;
      local_b0 = 0x800000000;
      FUN_02705554(&local_b8,0,1);
      uVar17 = local_b4;
      while (uVar17 != 8) {
        lVar15 = *(long *)puVar6;
        if (lVar15 != 0) {
          uVar2 = uVar17;
          if (7 < uVar17) {
            uVar2 = 0xffffffff;
          }
          lVar15 = FUN_026eec4c(lVar15,uVar2);
          if (lVar15 != 0) {
            if ((int)(uint)local_b0 < local_b0._4_4_) {
              *(long *)(local_a8 + (long)(int)(uint)local_b0 * 8) = lVar15;
              local_b0 = CONCAT44(local_b0._4_4_,(uint)local_b0 + 1);
            }
          }
        }
        if (uVar17 < 8) {
          lVar15 = *(long *)puVar6;
          if (lVar15 == 0) break;
          (**(code **)(*(long *)**(undefined8 **)(lVar15 + 0x10) + 0x18))();
          if ((local_b8 == 0) && ((*(byte *)(lVar15 + 0x453) & 1) != 0)) {
            lVar15 = (**(code **)(**(long **)(*(long *)(lVar15 + 0x10) + 0x130) + 0x18))();
          }
          else {
            lVar15 = (**(code **)(*(long *)**(undefined8 **)(lVar15 + 0x10) + 0x18))();
            lVar15 = lVar15 + 0x110;
          }
          if (uVar17 == 7) break;
          uVar19 = (ulong)uVar17;
          plVar16 = (long *)(lVar15 + (ulong)uVar17 * 0x48 + 0x1e3400);
          while ((6 < uVar19 || (plVar16[-1] == 0 && *plVar16 == 0))) {
            uVar19 = uVar19 + 1;
            plVar16 = plVar16 + 9;
            if (uVar19 == 7) goto LAB_0266b3e0;
          }
          uVar17 = (int)uVar19 + 1;
        }
      }
LAB_0266b3e0:
      puVar7 = local_a8;
      local_c4 = (uint)local_b0 - 1;
      if (local_c4 != 0 && 0 < (int)(uint)local_b0) {
        uVar17 = 0;
        do {
          if ((int)local_c4 <= (int)uVar17) break;
          uVar20 = (ulong)uVar17;
          uVar18 = (ulong)local_c4;
          uVar19 = uVar20;
          local_c4 = uVar17;
          do {
            plVar16 = (long *)(puVar7 + uVar19 * 8);
            lVar15 = *plVar16;
            lVar3 = plVar16[1];
            if ((*(long **)(lVar15 + 0x28) == (long *)0x0) ||
               (puVar10 = (undefined8 *)**(long **)(lVar15 + 0x28), puVar10 == (undefined8 *)0x0)) {
              uVar11 = 0;
              plVar14 = *(long **)(lVar3 + 0x28);
              if (plVar14 == (long *)0x0) goto LAB_0266b46c;
LAB_0266b480:
              uVar12 = 0;
              if ((undefined8 *)*plVar14 != (undefined8 *)0x0) {
                uVar12 = (*(code *)**(undefined8 **)*plVar14)();
              }
            }
            else {
              uVar11 = (**(code **)*puVar10)();
              uVar11 = uVar11 & 0xffffffff;
              plVar14 = *(long **)(lVar3 + 0x28);
              if (plVar14 != (long *)0x0) goto LAB_0266b480;
LAB_0266b46c:
              uVar12 = 0;
            }
            uVar4 = *(ushort *)(*(long *)(lVar15 + 0x10) + *(long *)(lVar15 + 8) + 0x1341e);
            uVar5 = *(ushort *)(*(long *)(lVar3 + 0x10) + *(long *)(lVar3 + 8) + 0x1341e);
            if ((((uVar12 & 1) != 0) && (*(long *)(lVar3 + 0x28) != 0)) &&
               (puVar10 = *(undefined8 **)(*(long *)(lVar3 + 0x28) + 8),
               puVar10 != (undefined8 *)0x0)) {
              (**(code **)*puVar10)();
            }
            if ((((uVar11 & 1) != 0) && (*(long *)(lVar15 + 0x28) != 0)) &&
               (puVar10 = *(undefined8 **)(*(long *)(lVar15 + 0x28) + 8),
               puVar10 != (undefined8 *)0x0)) {
              (**(code **)*puVar10)();
            }
            if (uVar4 < uVar5) {
              lVar15 = plVar16[1];
              local_c4 = (uint)uVar19;
              plVar16[1] = *(long *)(puVar7 + uVar19 * 8);
              *(long *)(puVar7 + uVar19 * 8) = lVar15;
            }
            uVar19 = uVar19 + 1;
          } while (uVar18 != uVar19);
          if ((int)local_c4 <= (int)uVar17) break;
          uVar19 = (ulong)local_c4;
          uVar17 = local_c4;
          do {
            plVar16 = (long *)(puVar7 + uVar19 * 8);
            lVar15 = plVar16[-1];
            lVar3 = *plVar16;
            if ((*(long **)(lVar3 + 0x28) == (long *)0x0) ||
               (puVar10 = (undefined8 *)**(long **)(lVar3 + 0x28), puVar10 == (undefined8 *)0x0)) {
              uVar18 = 0;
              plVar14 = *(long **)(lVar15 + 0x28);
              if (plVar14 == (long *)0x0) goto LAB_0266b580;
LAB_0266b59c:
              uVar11 = 0;
              if ((undefined8 *)*plVar14 != (undefined8 *)0x0) {
                uVar11 = (*(code *)**(undefined8 **)*plVar14)();
              }
            }
            else {
              uVar18 = (**(code **)*puVar10)();
              uVar18 = uVar18 & 0xffffffff;
              plVar14 = *(long **)(lVar15 + 0x28);
              if (plVar14 != (long *)0x0) goto LAB_0266b59c;
LAB_0266b580:
              uVar11 = 0;
            }
            uVar4 = *(ushort *)(*(long *)(lVar3 + 0x10) + *(long *)(lVar3 + 8) + 0x1341e);
            uVar5 = *(ushort *)(*(long *)(lVar15 + 0x10) + *(long *)(lVar15 + 8) + 0x1341e);
            if ((((uVar11 & 1) != 0) && (*(long *)(lVar15 + 0x28) != 0)) &&
               (puVar10 = *(undefined8 **)(*(long *)(lVar15 + 0x28) + 8),
               puVar10 != (undefined8 *)0x0)) {
              (**(code **)*puVar10)();
            }
            if ((((uVar18 & 1) != 0) && (*(long *)(lVar3 + 0x28) != 0)) &&
               (puVar10 = *(undefined8 **)(*(long *)(lVar3 + 0x28) + 8),
               puVar10 != (undefined8 *)0x0)) {
              (**(code **)*puVar10)();
            }
            if (uVar5 < uVar4) {
              lVar15 = plVar16[-1];
              uVar17 = (uint)uVar19;
              plVar16[-1] = *(long *)(puVar7 + uVar19 * 8);
              *(long *)(puVar7 + uVar19 * 8) = lVar15;
            }
            uVar19 = uVar19 - 1;
          } while ((long)uVar20 < (long)uVar19);
        } while (uVar17 != local_c4);
      }
      if (0 < (int)(uint)local_b0) {
        uVar19 = 0;
        uVar18 = (ulong)(uint)local_b0;
        puVar10 = param_1;
        do {
          if (uVar19 < (local_b0 & 0xffffffff)) {
            uVar13 = *(undefined8 *)(local_a8 + uVar19 * 8);
          }
          else {
            uVar13 = 0;
          }
          uVar9 = FUN_02669de0(uVar13);
          bVar8 = 7 < uVar19;
          uVar19 = uVar19 + 1;
          puVar1 = puVar10;
          if (bVar8) {
            puVar1 = param_1;
          }
          puVar10 = (undefined8 *)((long)puVar10 + 4);
          *(undefined4 *)puVar1 = uVar9;
        } while (uVar18 != uVar19);
      }
    }
  }
  return;
}

