
/* WARNING: Removing unreachable block (ram,0x012e7d00) */
/* WARNING: Removing unreachable block (ram,0x012e7c70) */
/* WARNING: Removing unreachable block (ram,0x012e7c80) */
/* WARNING: Removing unreachable block (ram,0x012e7d08) */

void FUN_012e7bc0(uint *param_1,long param_2)

{
  undefined2 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  long *plVar13;
  ulong uVar14;
  undefined2 uVar15;
  undefined1 uVar16;
  uint uVar17;
  undefined1 uVar18;
  int iVar19;
  long lVar20;
  long lVar21;
  undefined4 uVar22;
  long lVar23;
  undefined8 *puVar24;
  undefined8 local_98;
  undefined8 local_90;
  long local_88;
  long local_80;
  undefined *local_78;
  int local_70;
  int local_6c;
  undefined2 local_68;
  undefined1 local_66;
  undefined1 local_65;
  undefined4 local_64;
  
  if ((((*(long *)(param_1 + 2) != 0) && (*(long *)(param_1 + 6) != 0)) &&
      ((*(int *)(param_2 + 0x20) - *(int *)(param_2 + 0x10)) + 1 <= (int)param_1[0x18])) &&
     ((*(int *)(param_2 + 0x24) - *(int *)(param_2 + 0x14)) + 1 <= (int)param_1[0x19])) {
    *(undefined1 *)(param_1 + 0x1a) = 1;
    param_1[0x20] = *(uint *)(param_2 + 0x10);
    param_1[0x21] = *(uint *)(param_2 + 0x14);
    param_1[0x24] = *(uint *)(param_2 + 0x20);
    param_1[0x25] = *(uint *)(param_2 + 0x24);
    lVar20 = *(long *)(DAT_0519d040 + 0x1f8);
    local_88 = param_2 + 8;
    local_80 = param_2 + 0x18;
    iVar3 = *(int *)(param_2 + 0x10);
    local_6c = *(int *)(param_2 + 0x14);
    iVar2 = *(int *)(param_2 + 0x24) + 1;
    local_78 = PTR_DAT_04bb2010 + 0x10;
    if (iVar2 != local_6c) {
      local_70 = iVar3;
      do {
        iVar12 = local_6c;
        iVar6 = local_70;
        iVar11 = *(int *)(param_2 + 0x20);
        iVar5 = *(int *)(param_2 + 0x10);
        iVar19 = *(int *)(local_88 + 8);
        iVar4 = *(int *)(local_88 + 0xc);
        local_90 = 0xfffe;
        FUN_0277d4ac(&local_90);
        if (*(long *)(lVar20 + 0xd0) == 0) {
          uVar15 = DAT_05586008;
          uVar16 = DAT_0558600a;
          uVar18 = DAT_0558600b;
          uVar22 = DAT_0558600c;
        }
        else {
          FUN_012e4d78(&local_68,*(long *)(lVar20 + 0xd0),&local_78);
          uVar15 = local_68;
          uVar16 = local_66;
          uVar18 = local_65;
          uVar22 = local_64;
        }
        local_90 = CONCAT44(uVar22,CONCAT13(uVar18,CONCAT12(uVar16,uVar15)));
        local_98 = 0xfffe;
        FUN_0277d4ac(&local_98);
        if (*(long *)(lVar20 + 0xe0) == 0) {
          uVar15 = DAT_05586008;
          uVar16 = DAT_0558600a;
          uVar18 = DAT_0558600b;
          uVar22 = DAT_0558600c;
        }
        else {
          FUN_012e4d78(&local_68,*(long *)(lVar20 + 0xe0),&local_78);
          uVar15 = local_68;
          uVar16 = local_66;
          uVar18 = local_65;
          uVar22 = local_64;
        }
        iVar8 = local_6c;
        iVar7 = local_70;
        iVar12 = iVar12 - iVar4;
        local_98 = CONCAT44(uVar22,CONCAT13(uVar18,CONCAT12(uVar16,uVar15)));
        uVar17 = iVar12 + iVar12 * (iVar11 - iVar5) + (iVar6 - iVar19);
        uVar9 = uVar17;
        if (*param_1 <= uVar17) {
          uVar9 = 0;
        }
        puVar1 = (undefined2 *)(*(long *)(param_1 + 2) + (long)(int)uVar9 * 8);
        *puVar1 = (undefined2)local_90;
        *(undefined1 *)(puVar1 + 1) = local_90._2_1_;
        *(undefined1 *)((long)puVar1 + 3) = local_90._3_1_;
        *(undefined4 *)(puVar1 + 2) = local_90._4_4_;
        if (param_1[4] <= uVar17) {
          uVar17 = 0;
        }
        puVar1 = (undefined2 *)(*(long *)(param_1 + 6) + (long)(int)uVar17 * 8);
        *puVar1 = uVar15;
        *(undefined1 *)(puVar1 + 1) = uVar16;
        *(undefined1 *)((long)puVar1 + 3) = uVar18;
        *(undefined4 *)(puVar1 + 2) = uVar22;
        iVar19 = *(int *)(local_88 + 8);
        iVar4 = *(int *)(local_88 + 0xc);
        lVar23 = *(long *)(lVar20 + 0xd0);
        if (lVar23 == 0) {
LAB_012e7f30:
          uVar14 = 0;
          lVar23 = *(long *)(param_1 + 10);
          iVar11 = local_70;
          iVar5 = local_6c;
        }
        else {
          puVar24 = (undefined8 *)(lVar23 + 0x28);
          iVar11 = *(int *)(lVar23 + 0x14);
          uVar17 = local_70 - *(int *)(lVar23 + 0x10);
          plVar13 = (long *)(**(code **)*puVar24)(puVar24);
          uVar9 = (**(code **)(*plVar13 + 0x18))();
          if (uVar9 <= uVar17) goto LAB_012e7f30;
          uVar9 = iVar8 - iVar11;
          plVar13 = (long *)(**(code **)*puVar24)(puVar24);
          uVar10 = (**(code **)(*plVar13 + 0x20))();
          if (uVar10 <= uVar9) goto LAB_012e7f30;
          plVar13 = (long *)(*(code *)**(undefined8 **)(lVar23 + 0x28))(puVar24);
          iVar11 = (**(code **)(*plVar13 + 0x18))();
          plVar13 = (long *)(lVar23 + 0x50);
          uVar14 = (**(code **)(*plVar13 + 0x10))(plVar13);
          if ((uVar14 & 1) == 0) goto LAB_012e7f30;
          uVar14 = (**(code **)*plVar13)(plVar13,uVar17 + iVar11 * uVar9);
          lVar23 = *(long *)(param_1 + 10);
          iVar11 = local_70;
          iVar5 = local_6c;
        }
        if (lVar23 != 0) {
          uVar17 = iVar7 - iVar19;
          if ((uVar17 < param_1[0xe]) && (uVar9 = iVar8 - iVar4, uVar9 < param_1[0xf])) {
            uVar17 = uVar17 + param_1[0xe] * uVar9;
            iVar19 = param_1[0xd] + 1;
            param_1[0xd] = param_1[0xd] + 2;
            if ((uVar14 & 1) == 0) {
              if (-1 < (int)uVar17 && (int)uVar17 < (int)param_1[0xc]) {
                lVar21 = (ulong)(uVar17 >> 5) * 4;
                uVar17 = *(uint *)(lVar23 + lVar21) & (1 << (ulong)(uVar17 & 0x1f) ^ 0xffffffffU);
                goto LAB_012e7fbc;
              }
            }
            else if (-1 < (int)uVar17 && (int)uVar17 < (int)param_1[0xc]) {
              lVar21 = (ulong)(uVar17 >> 5) * 4;
              uVar17 = *(uint *)(lVar23 + lVar21) | 1 << (ulong)(uVar17 & 0x1f);
LAB_012e7fbc:
              *(uint *)(lVar23 + lVar21) = uVar17;
              iVar19 = param_1[0xd] - 1;
            }
            param_1[0xd] = iVar19 - 1;
          }
        }
        iVar19 = *(int *)(local_88 + 8);
        iVar4 = *(int *)(local_88 + 0xc);
        lVar23 = *(long *)(lVar20 + 0xe0);
        local_70 = iVar11;
        local_6c = iVar5;
        if (lVar23 == 0) {
LAB_012e8094:
          uVar14 = 0;
          lVar23 = *(long *)(param_1 + 0x12);
        }
        else {
          puVar24 = (undefined8 *)(lVar23 + 0x28);
          iVar12 = *(int *)(lVar23 + 0x14);
          uVar17 = iVar11 - *(int *)(lVar23 + 0x10);
          plVar13 = (long *)(**(code **)*puVar24)(puVar24);
          uVar9 = (**(code **)(*plVar13 + 0x18))();
          if (uVar9 <= uVar17) goto LAB_012e8094;
          uVar9 = iVar5 - iVar12;
          plVar13 = (long *)(**(code **)*puVar24)(puVar24);
          uVar10 = (**(code **)(*plVar13 + 0x20))();
          if (uVar10 <= uVar9) goto LAB_012e8094;
          plVar13 = (long *)(*(code *)**(undefined8 **)(lVar23 + 0x28))(puVar24);
          iVar12 = (**(code **)(*plVar13 + 0x18))();
          plVar13 = (long *)(lVar23 + 0x50);
          uVar14 = (**(code **)(*plVar13 + 0x10))(plVar13);
          if ((uVar14 & 1) == 0) goto LAB_012e8094;
          uVar14 = (**(code **)*plVar13)(plVar13,uVar17 + iVar12 * uVar9);
          lVar23 = *(long *)(param_1 + 0x12);
        }
        if (lVar23 != 0) {
          uVar17 = iVar11 - iVar19;
          if ((uVar17 < param_1[0x16]) && (uVar9 = iVar5 - iVar4, uVar9 < param_1[0x17])) {
            uVar17 = uVar17 + param_1[0x16] * uVar9;
            iVar19 = param_1[0x15] + 1;
            param_1[0x15] = param_1[0x15] + 2;
            if ((uVar14 & 1) == 0) {
              if (-1 < (int)uVar17 && (int)uVar17 < (int)param_1[0x14]) {
                lVar21 = (ulong)(uVar17 >> 5) * 4;
                uVar17 = *(uint *)(lVar23 + lVar21) & (1 << (ulong)(uVar17 & 0x1f) ^ 0xffffffffU);
                goto LAB_012e8120;
              }
            }
            else if (-1 < (int)uVar17 && (int)uVar17 < (int)param_1[0x14]) {
              lVar21 = (ulong)(uVar17 >> 5) * 4;
              uVar17 = *(uint *)(lVar23 + lVar21) | 1 << (ulong)(uVar17 & 0x1f);
LAB_012e8120:
              *(uint *)(lVar23 + lVar21) = uVar17;
              iVar19 = param_1[0x15] - 1;
            }
            param_1[0x15] = iVar19 - 1;
          }
        }
        if (local_70 < *(int *)(local_80 + 8)) {
          local_70 = local_70 + 1;
        }
        else {
          local_70 = *(int *)(local_88 + 8);
          local_6c = local_6c + 1;
        }
      } while ((iVar3 != local_70) || (iVar2 != local_6c));
    }
  }
  return;
}

