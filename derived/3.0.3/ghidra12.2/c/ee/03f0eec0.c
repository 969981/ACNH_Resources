
undefined1  [16] FUN_03f0eec0(uint *param_1)

{
  ushort *puVar1;
  ushort uVar2;
  undefined1 auVar3 [16];
  int iVar4;
  uint uVar5;
  long *plVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  int iVar10;
  int iVar11;
  ulong uVar12;
  uint uVar13;
  uint *puVar15;
  long *plVar14;
  undefined4 local_30;
  undefined8 uStack_2c;
  uint local_24;
  
  plVar6 = *(long **)(param_1 + 6);
  plVar14 = plVar6;
  if (plVar6 == (long *)0x0) {
    lVar7 = *(long *)(param_1 + 2);
    if ((lVar7 != 0) && (param_1[4] == *(uint *)(lVar7 + 0x10))) {
      lVar9 = *(long *)(*(long *)(lVar7 + 0x120) + 8);
      lVar7 = *(long *)(lVar9 + 0x38);
      if ((DAT_05aebc00 != '\0') || (lVar7 != 0)) {
        if (DAT_05aebc00 != '\0') {
          lVar7 = lVar9 + 0x70;
        }
        lVar7 = *(long *)(lVar7 + 8);
        if (((lVar7 != 0) && (*(uint *)(lVar7 + 0x18) != 0)) &&
           (plVar14 = (long *)((ulong)*(uint *)(lVar7 + 0x18) + lVar7),
           *plVar14 == 0x101feff464e494d)) goto LAB_03f0eedc;
      }
    }
  }
  else {
LAB_03f0eedc:
    puVar15 = (uint *)(plVar14 + 6);
    uVar8 = (ulong)*puVar15;
    if ((*puVar15 != 0) && (*(short *)(uVar8 + (long)puVar15) != 0)) {
      if (plVar6 == (long *)0x0) {
        lVar7 = *(long *)(param_1 + 2);
        if ((lVar7 == 0) || (param_1[4] != *(uint *)(lVar7 + 0x10))) {
          uVar5 = 0;
        }
        else {
          uVar5 = FUN_03b46270(lVar7);
          uVar8 = (ulong)*puVar15;
          if (*puVar15 == 0) goto LAB_03f0f078;
          uVar5 = uVar5 & ((int)uVar5 >> 0x1f ^ 0xffffffffU);
        }
      }
      else {
        uVar5 = *param_1;
      }
      puVar1 = (ushort *)((long)puVar15 + uVar8);
      uVar2 = *puVar1;
      if (uVar2 != 0) {
        uVar8 = (ulong)(uVar2 >> 1);
        uVar13 = *(uint *)(puVar1 + uVar8 * 4 + 2);
        if (uVar13 != uVar5) {
          iVar10 = 0;
          uVar12 = (ulong)(uint)uVar2;
          do {
            iVar4 = (int)uVar8;
            iVar11 = iVar10;
            if (uVar5 <= uVar13) {
              iVar11 = (int)uVar12;
              uVar12 = uVar8;
              iVar4 = iVar10;
            }
            iVar10 = iVar4;
            if (iVar11 == (int)uVar8) break;
            uVar8 = (ulong)((uint)(iVar10 + (int)uVar12) >> 1);
            uVar13 = *(uint *)(puVar1 + uVar8 * 4 + 2);
          } while (uVar13 != uVar5);
        }
        if (((uint)uVar8 < (uint)uVar2) &&
           (puVar15 = (uint *)((ulong)*(uint *)(puVar1 + uVar8 * 4 + 4) +
                              (long)(puVar1 + uVar8 * 4 + 4)), puVar15 != (uint *)0x0)) {
          local_24 = *puVar15;
          if (local_24 != 0) {
            uVar12 = 0;
            do {
              *(undefined1 *)(((ulong)&local_30 | 4) + uVar12) =
                   *(undefined1 *)((long)puVar15 + uVar12 + 4);
              uVar12 = uVar12 + 1;
            } while (uVar12 < local_24);
          }
          local_30 = *(undefined4 *)(puVar1 + uVar8 * 4 + 2);
          goto LAB_03f0f080;
        }
      }
    }
  }
LAB_03f0f078:
  local_30 = 0;
  local_24 = 0;
LAB_03f0f080:
  auVar3._4_8_ = uStack_2c;
  auVar3._0_4_ = local_30;
  auVar3._12_4_ = local_24;
  return auVar3;
}

