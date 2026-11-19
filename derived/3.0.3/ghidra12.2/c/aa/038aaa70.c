
void FUN_038aaa70(long *param_1,uint *param_2)

{
  bool bVar1;
  uint uVar2;
  ulong uVar3;
  uint uVar4;
  uint uVar5;
  ulong uVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  uint uVar10;
  uint uVar11;
  long *plVar12;
  undefined8 *puVar13;
  
  uVar2 = *(uint *)(param_1 + 2);
  uVar3 = (ulong)uVar2;
  if (1 < (int)uVar2) {
    uVar4 = 0;
    uVar6 = uVar3;
    do {
      uVar11 = *param_2 ^ *param_2 << 0xb;
      uVar5 = param_2[3];
      *param_2 = param_2[1];
      param_2[1] = param_2[2];
      uVar11 = uVar11 >> 8 ^ uVar5 >> 0x13 ^ uVar11 ^ uVar5;
      param_2[2] = uVar5;
      param_2[3] = uVar11;
      uVar5 = (uint)uVar3;
      if ((uint)(uVar6 - 1) < *(uint *)(param_1 + 2)) {
        plVar7 = param_1;
        if (6 < uVar2 + ~uVar4) {
          uVar10 = uVar5 & 0xfffffff8;
          do {
            uVar10 = uVar10 - 8;
            plVar7 = *(long **)(*(long *)(*(long *)(*(long *)(*(long *)(*(long *)(*(long *)(plVar7[1
                                                  ] + 8) + 8) + 8) + 8) + 8) + 8) + 8);
          } while (uVar10 != 0);
        }
        if ((uVar2 - uVar4 & 7) != 0) {
          uVar10 = uVar5 & 7;
          do {
            plVar7 = (long *)plVar7[1];
            uVar10 = uVar10 - 1;
          } while (uVar10 != 0);
        }
      }
      else {
        plVar7 = (long *)0x0;
      }
      uVar11 = (uint)(uVar6 * uVar11 >> 0x20);
      if (uVar11 < *(uint *)(param_1 + 2)) {
        plVar8 = param_1;
        if (6 < uVar11) {
          uVar10 = uVar11 + 1 & 0xfffffff8;
          do {
            uVar10 = uVar10 - 8;
            plVar8 = *(long **)(*(long *)(*(long *)(*(long *)(*(long *)(*(long *)(*(long *)(plVar8[1
                                                  ] + 8) + 8) + 8) + 8) + 8) + 8) + 8);
          } while (uVar10 != 0);
        }
        if ((uVar11 + 1 & 7) != 0) {
          uVar11 = uVar11 + 1 & 7;
          do {
            plVar8 = (long *)plVar8[1];
            uVar11 = uVar11 - 1;
          } while (uVar11 != 0);
        }
      }
      else {
        plVar8 = (long *)0x0;
      }
      if (plVar7 != plVar8) {
        plVar12 = (long *)*plVar8;
        plVar9 = (long *)*plVar7;
        if (plVar12 != plVar7) {
          if (plVar9 != (long *)0x0) {
            plVar9[1] = plVar7[1];
          }
          if ((long *)plVar7[1] != (long *)0x0) {
            *(long *)plVar7[1] = *plVar7;
          }
          *plVar7 = 0;
          plVar7[1] = 0;
          puVar13 = (undefined8 *)plVar12[1];
          plVar12[1] = (long)plVar7;
          *plVar7 = (long)plVar12;
          plVar7[1] = (long)puVar13;
          if (puVar13 != (undefined8 *)0x0) {
            *puVar13 = plVar7;
          }
        }
        if (plVar9 != plVar8) {
          if (*plVar8 != 0) {
            *(long *)(*plVar8 + 8) = plVar8[1];
          }
          if ((long *)plVar8[1] != (long *)0x0) {
            *(long *)plVar8[1] = *plVar8;
          }
          *plVar8 = 0;
          plVar8[1] = 0;
          puVar13 = (undefined8 *)plVar9[1];
          plVar9[1] = (long)plVar8;
          *plVar8 = (long)plVar9;
          plVar8[1] = (long)puVar13;
          if (puVar13 != (undefined8 *)0x0) {
            *puVar13 = plVar8;
          }
        }
      }
      uVar4 = uVar4 + 1;
      uVar3 = (ulong)(uVar5 - 1);
      bVar1 = 2 < (long)uVar6;
      uVar6 = uVar6 - 1;
    } while (bVar1);
  }
  return;
}

