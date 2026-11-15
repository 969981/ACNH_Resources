
void FUN_021b7e40(long param_1)

{
  bool bVar1;
  uint *puVar2;
  undefined **ppuVar3;
  long lVar4;
  uint uVar5;
  uint uVar6;
  undefined *puVar7;
  int iVar8;
  uint *puVar9;
  long *plVar10;
  uint uVar11;
  long lVar12;
  undefined8 *puVar13;
  ulong uVar14;
  byte *pbVar15;
  uint uVar16;
  ulong uVar17;
  int iVar18;
  long lVar19;
  uint uVar20;
  long lVar21;
  uint local_94;
  undefined **local_90;
  char *pcStack_88;
  undefined8 local_80;
  undefined1 local_75;
  undefined **local_70;
  char *pcStack_68;
  
  puVar2 = (uint *)(param_1 + 0x55e20);
  *puVar2 = 0;
  lVar12 = *(long *)PTR_DAT_04bb46b0;
  if (lVar12 != 0) {
    puVar13 = *(undefined8 **)(lVar12 + 0x10);
    if ((*(byte *)(lVar12 + 0x453) & 1) == 0) {
      lVar12 = (**(code **)(*(long *)*puVar13 + 0x38))();
      if (lVar12 == 0) {
        return;
      }
      lVar12 = lVar12 + 0x70;
    }
    else {
      if (puVar13 == (undefined8 *)0x0) {
        return;
      }
      if ((long *)puVar13[0x26] == (long *)0x0) {
        return;
      }
      lVar12 = (**(code **)(*(long *)puVar13[0x26] + 0x38))();
      if (lVar12 == 0) {
        return;
      }
    }
    if ((*(long **)(lVar12 + 0xd0) == (long *)0x0) ||
       (puVar13 = (undefined8 *)**(long **)(lVar12 + 0xd0), puVar13 == (undefined8 *)0x0)) {
      local_94 = 0;
    }
    else {
      local_94 = (**(code **)*puVar13)();
    }
    lVar19 = 0;
    lVar21 = 0;
    iVar18 = 0;
    ppuVar3 = (undefined **)(PTR_DAT_04bb2020 + 0x10);
    do {
      lVar4 = *(long *)(lVar12 + 0xb8) + *(long *)(lVar12 + 0xb0);
      uVar14 = (ulong)*(byte *)(lVar4 + lVar19);
      lVar4 = lVar4 + lVar19;
      if (((uVar14 < 0x23) && (*(byte *)(lVar4 + 1) <= (byte)PTR_DAT_04bc27f0[uVar14])) &&
         (((uint)(&DAT_053e6eb8)[uVar14] >> (ulong)(*(byte *)(lVar4 + 1) & 0x1f) & 1) != 0)) {
        pcStack_68 = "AbandonedHouse";
        local_70 = ppuVar3;
        iVar8 = FUN_02749340(lVar4 + 0x1267c,&local_70);
        if (iVar8 < 2) {
          local_90 = (undefined **)(PTR_DAT_04bb2020 + 0x10);
          pcStack_88 = "MoveInCompletion";
          iVar8 = FUN_02749340(lVar4 + 0x1267c,&local_90);
          if (iVar8 != 0) {
            *puVar2 = *puVar2 | 1 << (ulong)((uint)lVar21 & 0x1f);
          }
        }
      }
      local_90 = (undefined **)CONCAT44(local_90._4_4_,(int)*(char *)(lVar4 + 0x1267a));
      if (*(char *)(lVar4 + 0x1267a) != 0) {
        iVar18 = iVar18 + 1;
        *puVar2 = *puVar2 & (1 << (ulong)((uint)lVar21 & 0x1f) ^ 0xffffffffU);
      }
      puVar7 = PTR_DAT_04bb3768;
      lVar21 = lVar21 + 1;
      lVar19 = lVar19 + 0x13230;
    } while (lVar21 != 10);
    uVar20 = *puVar2 - (*puVar2 >> 1 & 0x55555555);
    uVar20 = (uVar20 >> 2 & 0x33333333) + (uVar20 & 0x33333333);
    uVar20 = uVar20 + (uVar20 >> 4) & 0xf0f0f0f;
    uVar20 = uVar20 + (uVar20 >> 8);
    uVar20 = uVar20 + (uVar20 >> 0x10) & 0x3f;
    if (5 - iVar18 < (int)uVar20) {
      if (iVar18 < 5) {
        ppuVar3 = (undefined **)(PTR_DAT_04bb3768 + 0x10);
        iVar18 = 5 - iVar18;
        do {
          puVar9 = (uint *)nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04bb39d8);
          uVar16 = *puVar9 ^ *puVar9 << 0xb;
          uVar5 = puVar9[3];
          *puVar9 = puVar9[1];
          puVar9[1] = puVar9[2];
          uVar16 = uVar16 >> 8 ^ uVar5 >> 0x13 ^ uVar16 ^ uVar5;
          puVar9[2] = uVar5;
          puVar9[3] = uVar16;
          uVar5 = *puVar2;
          if (uVar5 == 0) {
LAB_021b8084:
            uVar11 = 0xffffffff;
          }
          else {
            uVar11 = 0xffffffff;
            uVar6 = uVar5 - (uVar5 >> 1 & 0x55555555);
            uVar6 = (uVar6 >> 2 & 0x33333333) + (uVar6 & 0x33333333);
            uVar6 = uVar6 + (uVar6 >> 4) & 0xf0f0f0f;
            uVar6 = uVar6 + (uVar6 >> 8);
            if ((int)((ulong)uVar16 * (ulong)uVar20 >> 0x20) + 1 <=
                (int)(uVar6 + (uVar6 >> 0x10) & 0x3f)) {
              iVar8 = (int)((ulong)uVar16 * (ulong)uVar20 >> 0x20) + 2;
              uVar16 = uVar5;
              do {
                iVar8 = iVar8 + -1;
                if (iVar8 < 2) {
                  uVar16 = uVar16 - 1 & (uVar16 ^ 0xffffffff);
                  uVar16 = uVar16 - (uVar16 >> 1 & 0x55555555);
                  uVar16 = (uVar16 >> 2 & 0x33333333) + (uVar16 & 0x33333333);
                  uVar16 = uVar16 + (uVar16 >> 4) & 0xf0f0f0f;
                  uVar16 = uVar16 + (uVar16 >> 8);
                  uVar16 = uVar16 + (uVar16 >> 0x10);
                  uVar11 = uVar16 & 0x3f;
                  if (uVar11 < 10) {
                    *puVar2 = uVar5 & (1 << (ulong)(uVar16 & 0x1f) ^ 0xffffffffU);
                  }
                  goto LAB_021b8088;
                }
                uVar16 = uVar16 - 1 & uVar16;
              } while (uVar16 != 0);
              goto LAB_021b8084;
            }
          }
LAB_021b8088:
          local_75 = 0;
          local_80 = CONCAT35(local_80._5_3_,8);
          local_90 = ppuVar3;
          pcStack_88 = (char *)((long)&local_80 + 4);
          FUN_021d7c00(&local_90,uVar11);
          uVar20 = uVar20 - 1;
          iVar8 = iVar18 + -1;
          bVar1 = 0 < iVar18;
          iVar18 = iVar8;
        } while (iVar8 != 0 && bVar1);
      }
    }
    else {
      *puVar2 = 0;
    }
    if ((((local_94 & 1) != 0) && (*(long *)(lVar12 + 0xd0) != 0)) &&
       (puVar13 = *(undefined8 **)(*(long *)(lVar12 + 0xd0) + 8), puVar13 != (undefined8 *)0x0)) {
      (**(code **)*puVar13)();
    }
    iVar18 = 0;
    do {
      lVar12 = FUN_0265c3e0(iVar18);
      if (lVar12 != 0) {
        lVar21 = *(long *)(lVar12 + 0x28);
        if (lVar21 == 0) {
          uVar14 = 0;
        }
        else {
          if (*(undefined8 **)(lVar21 + 0x10) == (undefined8 *)0x0) {
            uVar14 = 0;
            plVar10 = *(long **)(lVar21 + 0x20);
          }
          else {
            uVar14 = (**(code **)**(undefined8 **)(lVar21 + 0x10))();
            uVar14 = uVar14 & 0xffffffff;
            if (*(long *)(lVar12 + 0x28) == 0) goto LAB_021b82a8;
            plVar10 = *(long **)(*(long *)(lVar12 + 0x28) + 0x20);
          }
          if (plVar10 != (long *)0x0) {
            local_90 = *(undefined ***)(lVar12 + 8);
            pcStack_88 = *(char **)(lVar12 + 0x10);
            local_80 = 0x13230;
            (**(code **)(*plVar10 + 0x20))(plVar10,&local_90);
          }
        }
LAB_021b82a8:
        pbVar15 = (byte *)((long)*(undefined ***)(lVar12 + 8) + (long)*(char **)(lVar12 + 0x10));
        uVar17 = (ulong)*pbVar15;
        if (((uVar17 < 0x23) && (pbVar15[1] <= (byte)PTR_DAT_04bc27f0[uVar17])) &&
           (((uint)(&DAT_053e6eb8)[uVar17] >> (ulong)(pbVar15[1] & 0x1f) & 1) != 0)) {
          if ((*(long *)(lVar12 + 0x28) != 0) &&
             (plVar10 = *(long **)(*(long *)(lVar12 + 0x28) + 0x20), plVar10 != (long *)0x0)) {
            local_80 = 0x13230;
            local_90 = *(undefined ***)(lVar12 + 8);
            pcStack_88 = *(char **)(lVar12 + 0x10);
            (**(code **)(*plVar10 + 0x20))(plVar10,&local_90);
            pbVar15 = (byte *)(*(long *)(lVar12 + 0x10) + *(long *)(lVar12 + 8));
          }
          local_70 = &PTR_LAB_048f9770;
          pcStack_68 = "AbandonedHouse";
          iVar8 = FUN_02749340(pbVar15 + 0x1267c,&local_70);
          if (iVar8 < 2) {
            if ((*(long *)(lVar12 + 0x28) != 0) &&
               (plVar10 = *(long **)(*(long *)(lVar12 + 0x28) + 0x20), plVar10 != (long *)0x0)) {
              local_90 = *(undefined ***)(lVar12 + 8);
              pcStack_88 = *(char **)(lVar12 + 0x10);
              local_80 = 0x13230;
              (**(code **)(*plVar10 + 0x20))(plVar10,&local_90);
            }
            local_90 = &PTR_LAB_048f9770;
            pcStack_88 = "MoveInCompletion";
            iVar8 = FUN_02749340(*(long *)(lVar12 + 0x10) + *(long *)(lVar12 + 8) + 0x1267c,
                                 &local_90);
            if (iVar8 != 0) {
              local_75 = 0;
              local_80 = CONCAT35(local_80._5_3_,8);
              local_90 = (undefined **)(puVar7 + 0x10);
              pcStack_88 = (char *)((long)&local_80 + 4);
              FUN_021d7c00(&local_90,iVar18);
            }
          }
        }
        if ((((uVar14 & 1) != 0) && (*(long *)(lVar12 + 0x28) != 0)) &&
           (puVar13 = *(undefined8 **)(*(long *)(lVar12 + 0x28) + 0x18),
           puVar13 != (undefined8 *)0x0)) {
          (**(code **)*puVar13)();
        }
      }
      iVar18 = iVar18 + 1;
    } while (iVar18 != 10);
  }
  return;
}

