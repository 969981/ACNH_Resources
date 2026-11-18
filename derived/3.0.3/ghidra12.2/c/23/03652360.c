
void FUN_03652360(long *param_1,undefined1 (*param_2) [16],undefined1 (*param_3) [16])

{
  undefined1 (*pauVar1) [16];
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  ulong uVar6;
  ulong uVar7;
  uint *puVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  undefined1 (*pauVar13) [16];
  uint *puVar14;
  undefined8 *puVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined8 local_260;
  uint auStack_258 [2];
  undefined8 auStack_250 [62];
  
  if (*(char *)((long)param_1 + 0xc) != '\0') {
    local_260._0_1_ = 4;
    (**(code **)(*param_1 + 0x20))(param_1,&local_260,1);
  }
  if ((int)param_1[1] != 2) {
    if ((int)param_1[1] != 1) {
      (**(code **)(*param_1 + 0x20))(param_1,param_2,(long)param_3 - (long)param_2);
      if ((int)param_1[2] == 0xff) {
        return;
      }
      uVar9 = (long)param_3 - (long)param_2 >> 2;
      uVar6 = 0;
      if ((uVar9 & 0xfffffffffffffffc) != 0) {
        pauVar13 = param_2;
        do {
          uVar6 = uVar6 + 4;
          auVar16 = NEON_rev32(*pauVar13,1);
          *(long *)(*pauVar13 + 8) = auVar16._8_8_;
          *(long *)*pauVar13 = auVar16._0_8_;
          pauVar13 = pauVar13 + 1;
        } while (uVar6 < (uVar9 & 0xfffffffffffffffc));
      }
      if (uVar9 <= uVar6) {
        return;
      }
      uVar7 = uVar6;
      if ((uVar9 & 1) != 0) {
        uVar3 = (*(uint *)(*param_2 + uVar6 * 4) & 0xff00ff00) >> 8 |
                (*(uint *)(*param_2 + uVar6 * 4) & 0xff00ff) << 8;
        *(uint *)(*param_2 + uVar6 * 4) = uVar3 >> 0x10 | uVar3 << 0x10;
        uVar7 = uVar6 + 1;
      }
      if (uVar9 == uVar6 + 1) {
        return;
      }
      lVar11 = uVar9 - uVar7;
      puVar8 = (uint *)(*param_2 + uVar7 * 4 + 4);
      do {
        lVar11 = lVar11 + -2;
        uVar3 = (puVar8[-1] & 0xff00ff00) >> 8 | (puVar8[-1] & 0xff00ff) << 8;
        uVar2 = (*puVar8 & 0xff00ff00) >> 8 | (*puVar8 & 0xff00ff) << 8;
        puVar8[-1] = uVar3 >> 0x10 | uVar3 << 0x10;
        *puVar8 = uVar2 >> 0x10 | uVar2 << 0x10;
        puVar8 = puVar8 + 2;
      } while (lVar11 != 0);
      return;
    }
    if ((int)param_1[2] != 0xff) {
      if (param_3 <= param_2) {
        return;
      }
      do {
        uVar6 = (long)param_3 - (long)param_2 >> 2;
        if (0x7f < uVar6) {
          uVar6 = 0x80;
        }
        uVar9 = 0;
        if ((uVar6 & 0xfc) != 0) {
          uVar9 = (uVar6 & 0xfc) - 1;
          uVar7 = (uVar9 >> 2) + 1;
          if (uVar9 == 3) {
            uVar10 = 0;
          }
          else {
            uVar9 = uVar7 & 0x7ffffffffffffffe;
            pauVar13 = param_2 + 1;
            uVar10 = uVar9 << 2;
            puVar15 = auStack_250;
            do {
              pauVar1 = pauVar13 + -1;
              auVar16 = *pauVar13;
              pauVar13 = pauVar13 + 2;
              uVar9 = uVar9 - 2;
              auVar17 = NEON_rev32(auVar16,1);
              auVar16 = NEON_rev32(*pauVar1,1);
              puVar15[-1] = auVar16._8_8_;
              puVar15[-2] = auVar16._0_8_;
              puVar15[1] = auVar17._8_8_;
              *puVar15 = auVar17._0_8_;
              puVar15 = puVar15 + 4;
            } while (uVar9 != 0);
          }
          uVar9 = uVar10;
          if ((uVar7 & 1) != 0) {
            uVar9 = uVar10 + 4;
            auVar16 = NEON_rev32(*(undefined1 (*) [16])(*param_2 + uVar10 * 4),1);
            *(long *)(auStack_258 + uVar10) = auVar16._8_8_;
            *(long *)(auStack_258 + (uVar10 - 2)) = auVar16._0_8_;
          }
        }
        if (uVar9 < uVar6) {
          uVar10 = uVar6 & 3;
          uVar7 = uVar9;
          if ((uVar6 & 3) != 0) {
            uVar12 = uVar9;
            do {
              uVar7 = uVar12 + 1;
              uVar10 = uVar10 - 1;
              uVar3 = (*(uint *)(*param_2 + uVar12 * 4) & 0xff00ff00) >> 8 |
                      (*(uint *)(*param_2 + uVar12 * 4) & 0xff00ff) << 8;
              auStack_258[uVar12 - 2] = uVar3 >> 0x10 | uVar3 << 0x10;
              uVar12 = uVar7;
            } while (uVar10 != 0);
          }
          if (2 < uVar6 + ~uVar9) {
            lVar11 = uVar6 - uVar7;
            puVar8 = auStack_258 + uVar7;
            puVar14 = (uint *)(*param_2 + uVar7 * 4 + 8);
            do {
              lVar11 = lVar11 + -4;
              uVar3 = *puVar14;
              uVar2 = puVar14[1];
              uVar4 = (puVar14[-2] & 0xff00ff00) >> 8 | (puVar14[-2] & 0xff00ff) << 8;
              uVar5 = (puVar14[-1] & 0xff00ff00) >> 8 | (puVar14[-1] & 0xff00ff) << 8;
              puVar8[-2] = uVar4 >> 0x10 | uVar4 << 0x10;
              puVar8[-1] = uVar5 >> 0x10 | uVar5 << 0x10;
              uVar3 = (uVar3 & 0xff00ff00) >> 8 | (uVar3 & 0xff00ff) << 8;
              uVar2 = (uVar2 & 0xff00ff00) >> 8 | (uVar2 & 0xff00ff) << 8;
              *puVar8 = uVar3 >> 0x10 | uVar3 << 0x10;
              puVar8[1] = uVar2 >> 0x10 | uVar2 << 0x10;
              puVar8 = puVar8 + 4;
              puVar14 = puVar14 + 4;
            } while (lVar11 != 0);
          }
        }
        (**(code **)(*param_1 + 0x20))(param_1,&local_260,uVar6 * 4);
        param_2 = (undefined1 (*) [16])(*param_2 + uVar6 * 4);
      } while (param_2 < param_3);
      return;
    }
  }
  (**(code **)(*param_1 + 0x20))(param_1,param_2,(long)param_3 - (long)param_2);
  return;
}

