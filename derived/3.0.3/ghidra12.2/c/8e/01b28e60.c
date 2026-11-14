
void FUN_01b28e60(long *param_1)

{
  undefined **ppuVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  byte bVar5;
  char cVar6;
  ushort uVar7;
  undefined *puVar8;
  byte bVar9;
  bool bVar10;
  undefined1 uVar11;
  int iVar12;
  int iVar13;
  undefined4 uVar14;
  int iVar15;
  ulong uVar16;
  long *plVar17;
  long lVar18;
  undefined8 *puVar19;
  ulong uVar20;
  long lVar21;
  undefined8 uVar22;
  long lVar23;
  undefined8 uVar24;
  long lVar25;
  long lVar26;
  long lVar27;
  long *plVar28;
  uint uVar29;
  long lVar30;
  undefined1 local_b8;
  uint local_94;
  undefined **local_90;
  long *local_88;
  undefined2 *local_80;
  long local_70;
  undefined2 local_68;
  undefined1 local_66;
  byte local_64;
  undefined1 uStack_63;
  
  puVar8 = PTR_DAT_04bb46b0;
  lVar25 = *(long *)PTR_DAT_04bb4fa8;
  lVar18 = *(long *)PTR_DAT_04bb46b0;
  if (lVar18 != 0) {
    puVar19 = *(undefined8 **)(lVar18 + 0x10);
    if ((*(byte *)(lVar18 + 0x453) & 1) == 0) {
      lVar18 = (**(code **)(*(long *)*puVar19 + 0x38))();
      if (lVar18 == 0) goto LAB_01b28f08;
      lVar18 = lVar18 + 0x70;
    }
    else if (((puVar19 == (undefined8 *)0x0) || ((long *)puVar19[0x26] == (long *)0x0)) ||
            (lVar18 = (**(code **)(*(long *)puVar19[0x26] + 0x38))(), lVar18 == 0))
    goto LAB_01b28f08;
    param_1[0x1fc] = lVar18 + 0xe7268;
    param_1[0x1fd] = lVar18 + 0xe75e8;
    param_1[0x1fe] = lVar18 + 0x1c24f8;
  }
LAB_01b28f08:
  iVar12 = FUN_0252d29c();
  iVar13 = 0;
  *(undefined8 *)((long)param_1 + 0x14) = 0;
  do {
    if ((*(long *)puVar8 != 0) && (lVar18 = FUN_026eec4c(*(long *)puVar8,iVar13), lVar18 != 0)) {
      iVar15 = *(int *)((long)param_1 + 0x14) + (int)param_1[3];
      *(int *)(param_1 + 3) = (int)param_1[3] + 1;
      iVar4 = 0;
      if ((int)param_1[2] <= iVar15) {
        iVar4 = (int)param_1[2];
      }
      plVar28 = (long *)(param_1[1] + (long)(iVar15 - iVar4) * 0x1f8);
      memset(plVar28 + 1,0,0x1f0);
      *(undefined8 *)((long)plVar28 + 0xc) = 0;
      *(undefined1 *)(plVar28 + 4) = 2;
      *(undefined8 *)((long)plVar28 + 0x14) = 0;
      *(undefined8 *)((long)plVar28 + 0x24) = 0;
      *(undefined4 *)((long)plVar28 + 0x1c) = 0;
      *(undefined8 *)((long)plVar28 + 0x2c) = 0;
      *(undefined8 *)((long)plVar28 + 0x34) = 0;
      *(undefined4 *)((long)plVar28 + 0x3c) = 0;
      plVar28[9] = (long)plVar28 + 0x5c;
      *(undefined4 *)(plVar28 + 10) = 10;
      *plVar28 = lVar18;
      if (*(long **)(lVar18 + 0x17bb0) == (long *)0x0) {
        uVar16 = 0;
      }
      else {
        puVar19 = (undefined8 *)**(long **)(lVar18 + 0x17bb0);
        uVar16 = 0;
        if (puVar19 != (undefined8 *)0x0) {
          uVar16 = (**(code **)*puVar19)();
        }
      }
      plVar17 = (long *)(*(long *)(lVar18 + 0x17b98) + *(long *)(lVar18 + 0x17b90));
      lVar27 = *plVar17;
      lVar30 = plVar17[1];
      lVar23 = plVar17[2];
      *(char *)(plVar28 + 4) = (char)plVar17[3];
      plVar28[1] = lVar27;
      plVar28[2] = lVar30;
      plVar28[3] = lVar23;
      uVar22 = *(undefined8 *)((long)plVar17 + 0x24);
      uVar24 = *(undefined8 *)((long)plVar17 + 0x2c);
      *(undefined8 *)((long)plVar28 + 0x24) = *(undefined8 *)((long)plVar17 + 0x1c);
      *(undefined8 *)((long)plVar28 + 0x2c) = uVar22;
      *(undefined8 *)((long)plVar28 + 0x34) = uVar24;
      uVar29 = *(uint *)((long)plVar17 + 0x34);
      if (1 < uVar29) {
        uVar29 = 0;
      }
      *(uint *)((long)plVar28 + 0x3c) = uVar29;
      if ((((uVar16 & 1) != 0) && (*(long *)(lVar18 + 0x17bb0) != 0)) &&
         (puVar19 = *(undefined8 **)(*(long *)(lVar18 + 0x17bb0) + 8), puVar19 != (undefined8 *)0x0)
         ) {
        (**(code **)*puVar19)();
      }
      *(int *)(plVar28 + 8) = iVar13;
      if (*(long *)(lVar18 + 0x194b8) == 0) {
        lVar18 = *(long *)(*(long *)puVar8 + 0x20);
      }
      else {
        lVar18 = lVar18 + 0x194b0;
      }
      if (*(long **)(lVar18 + 0x2a648) == (long *)0x0) {
        uVar16 = 0;
      }
      else {
        puVar19 = (undefined8 *)**(long **)(lVar18 + 0x2a648);
        uVar16 = 0;
        if (puVar19 != (undefined8 *)0x0) {
          uVar16 = (**(code **)*puVar19)();
        }
      }
      uVar29 = *(uint *)(*(long *)(lVar18 + 0x2a630) + *(long *)(lVar18 + 0x2a628));
      if (0xf < uVar29) {
        uVar29 = 0;
      }
      *(uint *)(plVar28 + 0x3e) = uVar29;
      if ((((uVar16 & 1) != 0) && (*(long *)(lVar18 + 0x2a648) != 0)) &&
         (puVar19 = *(undefined8 **)(*(long *)(lVar18 + 0x2a648) + 8), puVar19 != (undefined8 *)0x0)
         ) {
        (**(code **)*puVar19)();
      }
      *(bool *)((long)plVar28 + 500) = iVar12 == iVar13;
      *(undefined2 *)((long)plVar28 + 0x1f5) = 0;
    }
    iVar13 = iVar13 + 1;
  } while (iVar13 != 8);
  lVar18 = *(long *)puVar8;
  if (lVar18 != 0) {
    puVar19 = *(undefined8 **)(lVar18 + 0x10);
    if ((*(byte *)(lVar18 + 0x453) & 1) == 0) {
      lVar18 = (**(code **)(*(long *)*puVar19 + 0x38))();
      if (lVar18 == 0) {
        return;
      }
      lVar18 = lVar18 + 0x70;
    }
    else {
      if (puVar19 == (undefined8 *)0x0) {
        return;
      }
      if ((long *)puVar19[0x26] == (long *)0x0) {
        return;
      }
      lVar18 = (**(code **)(*(long *)puVar19[0x26] + 0x38))();
      if (lVar18 == 0) {
        return;
      }
    }
    local_64 = 0;
    uStack_63 = 0;
    plVar28 = (long *)(lVar18 + 0xe6ba8);
    if ((*(long **)(lVar18 + 0xe6bc8) == (long *)0x0) ||
       (puVar19 = (undefined8 *)**(long **)(lVar18 + 0xe6bc8), puVar19 == (undefined8 *)0x0)) {
      uVar16 = 0;
    }
    else {
      uVar16 = (**(code **)*puVar19)();
      uVar16 = uVar16 & 0xffffffff;
    }
    iVar13 = FUN_0284da58(*(long *)(lVar18 + 0xe6bb0) + *plVar28,0,1);
    bVar9 = iVar13 == 6;
    if ((bool)bVar9) {
      local_64 = 1;
    }
    iVar13 = FUN_0284da58(*(long *)(lVar18 + 0xe6bb0) + *plVar28,1,1);
    if (iVar13 == 6) {
      bVar9 = bVar9 | 2;
      local_64 = bVar9;
    }
    iVar13 = FUN_0284da58(*(long *)(lVar18 + 0xe6bb0) + *plVar28,2,1);
    if (iVar13 == 6) {
      bVar9 = bVar9 | 4;
      local_64 = bVar9;
    }
    iVar13 = FUN_0284da58(*(long *)(lVar18 + 0xe6bb0) + *plVar28,3,1);
    if (iVar13 == 6) {
      bVar9 = bVar9 | 8;
      local_64 = bVar9;
    }
    iVar13 = FUN_0284da58(*(long *)(lVar18 + 0xe6bb0) + *plVar28,4,1);
    if (iVar13 == 6) {
      bVar9 = bVar9 | 0x10;
      local_64 = bVar9;
    }
    iVar13 = FUN_0284da58(*(long *)(lVar18 + 0xe6bb0) + *plVar28,5,1);
    if (iVar13 == 6) {
      bVar9 = bVar9 | 0x20;
      local_64 = bVar9;
    }
    iVar13 = FUN_0284da58(*(long *)(lVar18 + 0xe6bb0) + *plVar28,6,1);
    if (iVar13 == 6) {
      bVar9 = bVar9 | 0x40;
      local_64 = bVar9;
    }
    iVar13 = FUN_0284da58(*(long *)(lVar18 + 0xe6bb0) + *plVar28,7,1);
    if (iVar13 == 6) {
      local_64 = bVar9 | 0x80;
    }
    iVar13 = FUN_0284da58(*(long *)(lVar18 + 0xe6bb0) + *plVar28,8,1);
    if (iVar13 == 6) {
      uStack_63 = 1;
      uVar11 = 3;
    }
    else {
      uVar11 = 2;
    }
    iVar13 = FUN_0284da58(*(long *)(lVar18 + 0xe6bb0) + *plVar28,9,1);
    if (iVar13 == 6) {
      uStack_63 = uVar11;
    }
    if ((((uVar16 & 1) != 0) && (*(long *)(lVar18 + 0xe6bc8) != 0)) &&
       (puVar19 = *(undefined8 **)(*(long *)(lVar18 + 0xe6bc8) + 8), puVar19 != (undefined8 *)0x0))
    {
      (**(code **)*puVar19)();
    }
    uVar29 = 0;
    iVar13 = 0;
    ppuVar1 = (undefined **)(PTR_DAT_04bb2020 + 0x10);
    do {
      lVar27 = lVar18 + 0x118 + (long)iVar13 * 0x10798;
      local_68 = 0x23;
      local_66 = 8;
      if ((*(long **)(lVar27 + 0x28) == (long *)0x0) ||
         (puVar19 = (undefined8 *)**(long **)(lVar27 + 0x28), puVar19 == (undefined8 *)0x0)) {
        uVar16 = 0;
      }
      else {
        uVar16 = (**(code **)*puVar19)();
        uVar16 = uVar16 & 0xffffffff;
      }
      local_68 = *(undefined2 *)(*(long *)(lVar27 + 0x10) + *(long *)(lVar27 + 8));
      local_66 = FUN_020fd7d8();
      uVar20 = (ulong)(byte)local_68;
      if (((uVar20 < 0x23) && (local_68._1_1_ <= (byte)PTR_DAT_04bc27f0[uVar20])) &&
         ((*(uint *)(PTR_DAT_04bc2a20 + uVar20 * 4) >> (ulong)(local_68._1_1_ & 0x1f) & 1) != 0)) {
        lVar30 = *(long *)(lVar27 + 0x10) + *(long *)(lVar27 + 8);
        cVar6 = *(char *)(lVar30 + 0x1267a);
        if (cVar6 == '\x01') {
          bVar10 = true;
        }
        else {
          local_90 = (undefined **)(PTR_DAT_04bb2020 + 0x10);
          local_88 = (long *)0x40c483e;
          iVar12 = FUN_02749340(lVar30 + 0x1267c,&local_90);
          bVar10 = iVar12 == 0;
        }
        if ((((uVar16 & 1) != 0) && (*(long *)(lVar27 + 0x28) != 0)) &&
           (puVar19 = *(undefined8 **)(*(long *)(lVar27 + 0x28) + 8), puVar19 != (undefined8 *)0x0))
        {
          (**(code **)*puVar19)();
        }
        iVar12 = 0;
LAB_01b294fc:
        lVar30 = lVar27 + 0x70 + (long)iVar12 * 0x700;
        if ((*(long *)(lVar30 + 0x28) == 0) ||
           (puVar19 = *(undefined8 **)(*(long *)(lVar30 + 0x28) + 0x10),
           puVar19 == (undefined8 *)0x0)) {
          local_94 = 0;
        }
        else {
          local_94 = (**(code **)*puVar19)();
        }
        if (0 < (int)param_1[3]) {
          iVar15 = 0;
          do {
            iVar3 = *(int *)((long)param_1 + 0x14);
            lVar23 = param_1[1];
            iVar4 = 0;
            if ((int)param_1[2] <= iVar15 + iVar3) {
              iVar4 = (int)param_1[2];
            }
            if ((*(long *)(lVar30 + 0x28) != 0) &&
               (plVar28 = *(long **)(*(long *)(lVar30 + 0x28) + 0x20), plVar28 != (long *)0x0)) {
              local_90 = *(undefined ***)(lVar30 + 8);
              local_88 = *(long **)(lVar30 + 0x10);
              local_80 = (undefined2 *)0x5f0;
              (**(code **)(*plVar28 + 0x20))(plVar28,&local_90);
            }
            lVar23 = lVar23 + (long)(iVar15 + (iVar3 - iVar4)) * 0x1f8;
            piVar2 = (int *)(*(long *)(lVar30 + 0x10) + *(long *)(lVar30 + 8));
            if ((*(int *)(lVar23 + 0x24) == piVar2[7]) &&
               ((*(long *)(piVar2 + 8) == *(long *)(lVar23 + 0x28) &&
                *(long *)(piVar2 + 10) == *(long *)(lVar23 + 0x30)) &&
                piVar2[0xc] == *(int *)(lVar23 + 0x38))) {
              if ((*(short *)(lVar23 + 0xc) == 0) || ((short)piVar2[1] == 0)) {
                if (*(int *)(lVar23 + 8) == *piVar2) goto LAB_01b29640;
              }
              else if ((*(int *)(lVar23 + 8) == *piVar2) &&
                      ((*(long *)(piVar2 + 1) == *(long *)(lVar23 + 0xc) &&
                       *(long *)(piVar2 + 3) == *(long *)(lVar23 + 0x14)) &&
                       piVar2[5] == *(int *)(lVar23 + 0x1c))) {
LAB_01b29640:
                local_70 = lVar23;
                if ((*(long *)(lVar30 + 0x28) != 0) &&
                   (plVar28 = *(long **)(*(long *)(lVar30 + 0x28) + 0x20), plVar28 != (long *)0x0))
                {
                  local_90 = *(undefined ***)(lVar30 + 8);
                  local_88 = *(long **)(lVar30 + 0x10);
                  local_80 = (undefined2 *)0x5f0;
                  (**(code **)(*plVar28 + 0x20))(plVar28,&local_90);
                }
                lVar23 = *(long *)(lVar30 + 0x10) + *(long *)(lVar30 + 8);
                uVar16 = nn::time::IsValidDate
                                   ((uint)*(ushort *)(lVar23 + 0x5b0),
                                    (uint)*(byte *)(lVar23 + 0x5b2),(uint)*(byte *)(lVar23 + 0x5b3))
                ;
                if ((uVar16 & 1) == 0) {
LAB_01b296cc:
                  local_b8 = 0;
                }
                else {
                  lVar26 = *param_1;
                  uVar22 = FUN_0272eca4(lVar23 + 0x5b0,1);
                  if ((uint)*(ushort *)(lVar26 + 0x10) != ((uint)uVar22 & 0xffff)) {
                    if ((short)*(ushort *)(lVar26 + 0x10) <= (short)uVar22) goto LAB_01b29904;
                    goto LAB_01b296cc;
                  }
                  if ((uint)*(byte *)(lVar26 + 0x12) == ((uint)((ulong)uVar22 >> 0x10) & 0xff)) {
                    if ((int)(uint)uVar22 >> 0x18 <= (int)*(char *)(lVar26 + 0x13))
                    goto LAB_01b296cc;
                  }
                  else if ((char)((ulong)uVar22 >> 0x10) < (char)*(byte *)(lVar26 + 0x12))
                  goto LAB_01b296cc;
LAB_01b29904:
                  if ((*(long *)(lVar30 + 0x28) != 0) &&
                     (plVar28 = *(long **)(*(long *)(lVar30 + 0x28) + 0x20), plVar28 != (long *)0x0)
                     ) {
                    local_90 = *(undefined ***)(lVar30 + 8);
                    local_88 = *(long **)(lVar30 + 0x10);
                    local_80 = (undefined2 *)0x5f0;
                    (**(code **)(*plVar28 + 0x20))(plVar28,&local_90);
                  }
                  lVar26 = *(long *)(lVar30 + 8);
                  lVar23 = *(long *)(lVar30 + 0x10);
                  lVar21 = *param_1;
                  uVar7 = *(ushort *)(lVar21 + 0x10);
                  bVar9 = *(byte *)(lVar21 + 0x13);
                  bVar5 = *(byte *)(lVar21 + 0x12);
                  uVar16 = nn::time::IsValidDate((uint)uVar7,(uint)bVar5,(uint)bVar9);
                  if ((uVar16 & 1) == 0) {
                    local_b8 = 1;
                  }
                  else {
                    local_b8 = 1;
                    lVar23 = lVar23 + lVar26;
                    *(ushort *)(lVar23 + 0x5b0) = uVar7;
                    *(byte *)(lVar23 + 0x5b2) = bVar5;
                    *(byte *)(lVar23 + 0x5b3) = bVar9;
                  }
                }
                iVar15 = *(int *)(local_70 + 0x58);
                iVar4 = *(int *)(local_70 + 0x50);
                if (iVar15 < iVar4) {
                  *(int *)(local_70 + 0x58) = iVar15 + 1;
                  iVar15 = *(int *)(local_70 + 0x54) + iVar15;
                  iVar3 = 0;
                  if (iVar4 <= iVar15) {
                    iVar3 = iVar4;
                  }
                  plVar28 = (long *)(*(long *)(local_70 + 0x48) + (long)(iVar15 - iVar3) * 0x28);
                  *plVar28 = 0;
                  plVar28[1] = 0;
                  plVar28[2] = 0;
                  *(undefined1 *)(plVar28 + 2) = 0x23;
                  plVar28[3] = 0;
                  plVar28[4] = 0;
                  *(undefined1 *)((long)plVar28 + 0x12) = 8;
                }
                else {
                  plVar28 = (long *)0x0;
                }
                *plVar28 = lVar27;
                plVar28[1] = lVar30;
                *(undefined2 *)(plVar28 + 2) = local_68;
                uVar11 = FUN_020fd7d8(&local_68);
                *(undefined1 *)((long)plVar28 + 0x12) = uVar11;
                *(uint *)((long)plVar28 + 0x14) = uVar29;
                if ((*(long *)(lVar30 + 0x28) != 0) &&
                   (plVar17 = *(long **)(*(long *)(lVar30 + 0x28) + 0x20), plVar17 != (long *)0x0))
                {
                  local_90 = *(undefined ***)(lVar30 + 8);
                  local_88 = *(long **)(lVar30 + 0x10);
                  local_80 = (undefined2 *)0x5f0;
                  (**(code **)(*plVar17 + 0x20))(plVar17,&local_90);
                }
                local_88 = (long *)0x40962f1;
                local_90 = ppuVar1;
                uVar14 = FUN_02746e10(*(long *)(lVar30 + 0x10) + *(long *)(lVar30 + 8) + 0x38,
                                      &local_90);
                *(undefined4 *)(plVar28 + 3) = uVar14;
                if ((*(long *)(lVar30 + 0x28) != 0) &&
                   (plVar17 = *(long **)(*(long *)(lVar30 + 0x28) + 0x20), plVar17 != (long *)0x0))
                {
                  local_90 = *(undefined ***)(lVar30 + 8);
                  local_88 = *(long **)(lVar30 + 0x10);
                  local_80 = (undefined2 *)0x5f0;
                  (**(code **)(*plVar17 + 0x20))(plVar17,&local_90);
                }
                local_90 = (undefined **)(PTR_DAT_04bb2020 + 0x10);
                local_88 = (long *)0x40f92c9;
                iVar15 = FUN_02746e10(*(long *)(lVar30 + 0x10) + *(long *)(lVar30 + 8) + 0x38,
                                      &local_90);
                *(bool *)((long)plVar28 + 0x1c) = iVar15 != 0;
                *(bool *)((long)plVar28 + 0x1d) = cVar6 == '\x02';
                *(bool *)((long)plVar28 + 0x1e) = bVar10;
                *(bool *)((long)plVar28 + 0x1f) =
                     (1 << (ulong)(uVar29 & 7) &
                     (uint)*(byte *)((ulong)&local_64 | (ulong)(7 < uVar29))) != 0;
                local_88 = &local_70;
                local_90 = &PTR_FUN_04a37a78;
                local_80 = &local_68;
                if (*(long *)(lVar25 + 8) == lVar25) {
                  bVar9 = 0;
                  goto LAB_01b298b4;
                }
                lVar26 = (long)*(int *)(lVar25 + 0x14);
                lVar23 = *(long *)(lVar25 + 8) - lVar26;
                goto LAB_01b29880;
              }
            }
            iVar15 = iVar15 + 1;
          } while (iVar15 < (int)param_1[3]);
        }
        goto LAB_01b298d0;
      }
      if ((((uVar16 & 1) != 0) && (*(long *)(lVar27 + 0x28) != 0)) &&
         (puVar19 = *(undefined8 **)(*(long *)(lVar27 + 0x28) + 8), puVar19 != (undefined8 *)0x0)) {
        (**(code **)*puVar19)();
      }
LAB_01b29340:
      uVar29 = uVar29 + 1;
      iVar13 = iVar13 + 1;
    } while (uVar29 != 10);
  }
  return;
  while (lVar23 = *(long *)(lVar23 + lVar26 + 8) - lVar26, lVar23 != lVar25 - lVar26) {
LAB_01b29880:
    bVar9 = (*(code *)*local_90)(&local_90,lVar23);
    if ((bVar9 & 1) != 0) break;
  }
LAB_01b298b4:
  *(undefined2 *)((long)plVar28 + 0x22) = 0;
  *(byte *)(plVar28 + 4) = bVar9 & 1;
  *(undefined1 *)((long)plVar28 + 0x21) = local_b8;
LAB_01b298d0:
  if ((((local_94 & 1) != 0) && (*(long *)(lVar30 + 0x28) != 0)) &&
     (puVar19 = *(undefined8 **)(*(long *)(lVar30 + 0x28) + 0x18), puVar19 != (undefined8 *)0x0)) {
    (**(code **)*puVar19)();
  }
  iVar12 = iVar12 + 1;
  if (iVar12 == 8) goto LAB_01b29340;
  goto LAB_01b294fc;
}

