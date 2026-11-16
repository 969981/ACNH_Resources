
void FUN_02694430(undefined8 param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  undefined4 uVar3;
  undefined *puVar4;
  uint uVar5;
  uint uVar6;
  ulong uVar7;
  long lVar8;
  undefined8 *puVar9;
  long lVar10;
  long *plVar11;
  long *plVar12;
  long lVar13;
  long *plVar14;
  uint local_64;
  uint local_48;
  uint local_44;
  
  if (param_2 != (long *)0x0) {
    uVar5 = FUN_021d7d60();
    plVar11 = (long *)param_2[1];
    while (plVar11 != param_2) {
      plVar12 = (long *)plVar11[1];
      plVar14 = plVar12;
      if (*plVar11 != 0) {
        *(long **)(*plVar11 + 8) = plVar12;
        plVar14 = (long *)plVar11[1];
      }
      if (plVar14 != (long *)0x0) {
        *plVar14 = *plVar11;
      }
      *plVar11 = 0;
      plVar11[1] = 0;
      *(int *)(param_2 + 2) = (int)param_2[2] + -1;
      plVar11[-1] = param_2[3];
      param_2[3] = (long)(plVar11 + -1);
      plVar11 = plVar12;
    }
    local_48 = uVar5;
    uVar7 = FUN_02663fa0(&local_48);
    if ((uVar7 & 1) == 0) {
      local_64 = 0;
      uVar7 = FUN_02b67a30(&local_64,uVar5);
      if (((uVar7 & 1) != 0) && (local_44 = local_64, DAT_05574040 != 0)) {
        puVar9 = *(undefined8 **)(DAT_05574040 + 0x10);
        if ((*(byte *)(DAT_05574040 + 0x453) & 1) == 0) {
          lVar8 = (**(code **)(*(long *)*puVar9 + 0x38))();
          if (lVar8 == 0) {
            return;
          }
          lVar8 = lVar8 + 0x70;
        }
        else {
          if (puVar9 == (undefined8 *)0x0) {
            return;
          }
          if ((long *)puVar9[0x26] == (long *)0x0) {
            return;
          }
          lVar8 = (**(code **)(*(long *)puVar9[0x26] + 0x38))();
          if (lVar8 == 0) {
            return;
          }
        }
        if (local_44 < 10) {
          lVar2 = lVar8 + 0x1962d8 + (ulong)local_44 * 0x10d8;
          if (9 < local_44) {
            lVar2 = lVar8 + 0x1962d8;
          }
          if ((*(long **)(lVar2 + 0x28) == (long *)0x0) ||
             (puVar9 = (undefined8 *)**(long **)(lVar2 + 0x28), puVar9 == (undefined8 *)0x0)) {
            uVar5 = 1;
          }
          else {
            uVar5 = (**(code **)*puVar9)();
            uVar5 = uVar5 ^ 1;
          }
          puVar4 = PTR_DAT_04bb43c0;
          lVar8 = 0;
          lVar13 = *(long *)PTR_DAT_04bb43c0;
          do {
            lVar1 = *(long *)(lVar2 + 0x10) + *(long *)(lVar2 + 8) + lVar8;
            uVar6 = FUN_0277d6c4((undefined2 *)(lVar1 + 0x14));
            lVar10 = *(long *)puVar4;
            if (lVar10 != 0) {
              lVar13 = *(long *)(lVar13 + 0x57e58);
              uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar13 + 0x1f8);
              if (((uVar6 < *(uint *)(lVar13 + 0x1d8)) &&
                  (*(long *)(*(long *)(lVar13 + 0x1e0) + (long)(int)uVar6 * 8) != 0)) &&
                 ((int)param_2[2] < (int)param_2[5])) {
                plVar11 = (long *)param_2[3];
                if (plVar11 != (long *)0x0) {
                  param_2[3] = *plVar11;
                }
                *(undefined2 *)plVar11 = *(undefined2 *)(lVar1 + 0x14);
                *(undefined1 *)((long)plVar11 + 2) = *(undefined1 *)(lVar1 + 0x16);
                *(undefined1 *)((long)plVar11 + 3) = *(undefined1 *)(lVar1 + 0x17);
                uVar3 = *(undefined4 *)(lVar1 + 0x18);
                plVar12 = plVar11 + 1;
                *plVar12 = 0;
                plVar11[2] = 0;
                *(undefined4 *)((long)plVar11 + 4) = uVar3;
                lVar13 = *param_2;
                *param_2 = (long)plVar12;
                *plVar12 = lVar13;
                plVar11[2] = (long)param_2;
                if (lVar13 != 0) {
                  *(long **)(lVar13 + 8) = plVar12;
                }
                lVar10 = *(long *)puVar4;
                *(int *)(param_2 + 2) = (int)param_2[2] + 1;
              }
            }
            lVar8 = lVar8 + 0xc;
            lVar13 = lVar10;
          } while (lVar8 != 0x1b0);
          if ((((uVar5 & 1) == 0) && (*(long *)(lVar2 + 0x28) != 0)) &&
             (puVar9 = *(undefined8 **)(*(long *)(lVar2 + 0x28) + 8), puVar9 != (undefined8 *)0x0))
          {
            (**(code **)*puVar9)();
          }
        }
      }
    }
  }
  return;
}

