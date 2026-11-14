
void FUN_01be2fc0(int *param_1,int param_2)

{
  undefined *puVar1;
  int iVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  uint uVar6;
  uint uVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  long *plVar12;
  ushort uVar13;
  long lVar14;
  long lVar15;
  undefined1 auStack_668 [56];
  undefined *local_630;
  undefined *puStack_628;
  undefined8 local_620;
  undefined6 uStack_618;
  undefined2 local_612;
  undefined6 uStack_610;
  undefined8 local_608;
  int local_600 [360];
  
  iVar2 = *param_1;
  if (iVar2 != 0) {
    if (param_2 == 0xe) {
      lVar14 = (long)iVar2 << 3;
      puVar1 = PTR_DAT_04bb2020 + 0x10;
      plVar12 = *(long **)(param_1 + 2);
      uVar13 = 0;
      do {
        lVar15 = *plVar12;
        uStack_610 = 0;
        local_620 = 0;
        uStack_618 = 0;
        local_612 = 0;
        local_608 = 0;
        puStack_628 = PTR_s_NookMilage_Keyword_Modifier_04c485f0;
        local_630 = puVar1;
        FUN_006d8678(auStack_668,"%03d_%02d",*(undefined2 *)(lVar15 + 4),*(int *)(lVar15 + 8) + -1);
        local_608 = 0;
        local_620 = 0;
        uStack_618 = 0;
        local_612 = 0;
        uStack_610 = 0;
        FUN_01b970f0(&local_620,&local_630);
        FUN_01b9735c(&local_620,&local_630,auStack_668);
        uVar5 = (ulong)uVar13;
        *(ushort *)(lVar15 + 2) = uVar13;
        if ((int)local_620 != 7) {
          local_608._0_4_ = 0;
        }
        if (0x167 < uVar13) {
          uVar5 = 0;
        }
        lVar14 = lVar14 + -8;
        local_600[uVar5] = (int)local_608;
        plVar12 = plVar12 + 1;
        uVar13 = uVar13 + 1;
      } while (lVar14 != 0);
    }
    else {
      lVar14 = (long)iVar2 << 3;
      puVar1 = PTR_DAT_04bb2020 + 0x10;
      plVar12 = *(long **)(param_1 + 2);
      uVar13 = 0;
      do {
        lVar15 = *plVar12;
        uStack_610 = 0;
        local_620 = 0;
        uStack_618 = 0;
        local_612 = 0;
        local_608 = 0;
        puStack_628 = PTR_s_NookMilage_Keyword_Modifier_04c485f0;
        local_630 = puVar1;
        FUN_006d8678(auStack_668,"%03d_%02d",*(undefined2 *)(lVar15 + 4),*(int *)(lVar15 + 8) + -1);
        local_608 = 0;
        local_620 = 0;
        uStack_618 = 0;
        local_612 = 0;
        uStack_610 = 0;
        FUN_01b970f0(&local_620,&local_630);
        FUN_01b9735c(&local_620,&local_630,auStack_668);
        uVar5 = (ulong)uVar13;
        *(ushort *)(lVar15 + 2) = uVar13;
        if ((int)local_620 != 7) {
          local_608._4_4_ = 0;
        }
        if (0x167 < uVar13) {
          uVar5 = 0;
        }
        lVar14 = lVar14 + -8;
        local_600[uVar5] = local_608._4_4_;
        plVar12 = plVar12 + 1;
        uVar13 = uVar13 + 1;
      } while (lVar14 != 0);
    }
    if (1 < *param_1) {
      uVar6 = *param_1 - 1;
      lVar14 = *(long *)(param_1 + 2);
      uVar7 = 0;
      do {
        if ((int)uVar6 <= (int)uVar7) {
          return;
        }
        lVar15 = *(long *)(lVar14 + (ulong)uVar7 * 8);
        uVar5 = (ulong)uVar7;
        if ((uVar6 - uVar7 & 1) == 0) {
          lVar9 = lVar15;
          uVar8 = uVar5;
        }
        else {
          uVar8 = uVar5 + 1;
          uVar10 = (ulong)*(ushort *)(lVar15 + 2);
          lVar9 = *(long *)(lVar14 + uVar8 * 8);
          uVar3 = (ulong)*(ushort *)(lVar9 + 2);
          if (0x167 < *(ushort *)(lVar15 + 2)) {
            uVar10 = 0;
          }
          if (0x167 < *(ushort *)(lVar9 + 2)) {
            uVar3 = 0;
          }
          if (local_600[uVar3] < local_600[uVar10]) {
            *(long *)(lVar14 + uVar8 * 8) = lVar15;
            *(long *)(lVar14 + uVar5 * 8) = lVar9;
            lVar9 = lVar15;
          }
        }
        uVar10 = (ulong)uVar6;
        uVar6 = uVar7;
        if (~uVar5 + uVar10 != 0) {
          plVar12 = (long *)(lVar14 + 8 + uVar8 * 8);
          do {
            lVar15 = *plVar12;
            uVar3 = (ulong)*(ushort *)(lVar9 + 2);
            uVar4 = (ulong)*(ushort *)(lVar15 + 2);
            if (0x167 < *(ushort *)(lVar9 + 2)) {
              uVar3 = 0;
            }
            if (0x167 < *(ushort *)(lVar15 + 2)) {
              uVar4 = 0;
            }
            if (local_600[uVar4] < local_600[uVar3]) {
              plVar12[-1] = lVar15;
              *plVar12 = lVar9;
              uVar6 = (uint)uVar8;
            }
            else {
              lVar9 = lVar15;
            }
            lVar15 = plVar12[1];
            uVar3 = (ulong)*(ushort *)(lVar9 + 2);
            uVar4 = (ulong)*(ushort *)(lVar15 + 2);
            if (0x167 < *(ushort *)(lVar9 + 2)) {
              uVar3 = 0;
            }
            if (0x167 < *(ushort *)(lVar15 + 2)) {
              uVar4 = 0;
            }
            if (local_600[uVar4] < local_600[uVar3]) {
              uVar6 = (uint)uVar8 + 1;
              *plVar12 = lVar15;
              plVar12[1] = lVar9;
            }
            else {
              lVar9 = lVar15;
            }
            uVar8 = uVar8 + 2;
            plVar12 = plVar12 + 2;
          } while (uVar10 != uVar8);
        }
        if ((int)uVar6 <= (int)uVar7) {
          return;
        }
        lVar15 = *(long *)(lVar14 + (ulong)uVar6 * 8);
        uVar8 = (ulong)uVar6;
        uVar7 = uVar6;
        do {
          lVar9 = lVar14 + uVar8 * 8;
          uVar10 = (ulong)*(ushort *)(lVar15 + 2);
          lVar11 = *(long *)(lVar9 + -8);
          if (0x167 < *(ushort *)(lVar15 + 2)) {
            uVar10 = 0;
          }
          uVar3 = (ulong)*(ushort *)(lVar11 + 2);
          if (0x167 < *(ushort *)(lVar11 + 2)) {
            uVar3 = 0;
          }
          if (local_600[uVar10] < local_600[uVar3]) {
            uVar7 = (uint)uVar8;
            *(long *)(lVar9 + -8) = lVar15;
            *(long *)(lVar14 + uVar8 * 8) = lVar11;
          }
          else {
            lVar15 = lVar11;
          }
          uVar8 = uVar8 - 1;
        } while ((long)uVar5 < (long)uVar8);
      } while (uVar7 != uVar6);
    }
  }
  return;
}

