
undefined8 FUN_02209030(uint *param_1,uint *param_2)

{
  undefined *puVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  bool bVar7;
  int iVar8;
  uint uVar9;
  long lVar10;
  undefined8 uVar11;
  long lVar12;
  uint *puVar13;
  undefined8 *puVar14;
  byte *pbVar15;
  byte *pbVar16;
  ulong uVar17;
  byte bVar18;
  long *plVar19;
  ulong uVar20;
  undefined *puVar21;
  long lVar22;
  uint local_9c;
  uint local_88;
  uint local_84;
  undefined *local_80;
  char *pcStack_78;
  undefined *local_70;
  char *pcStack_68;
  
  lVar12 = **(long **)PTR_DAT_04bb27d0;
  bVar18 = *(byte *)(lVar12 + 0x473);
  if ((long)(char)bVar18 == 0xffffffffffffffff) {
LAB_0220909c:
    puVar13 = &DAT_05407614;
  }
  else {
    pbVar16 = (byte *)(lVar12 + 0x48) + ((long)(char)bVar18 & 0xffffffffU) * 0x80;
    if (7 < bVar18) {
      pbVar16 = (byte *)(lVar12 + 0x48);
    }
    if (((*pbVar16 >> 3 & 1) == 0) || (*(byte *)(lVar12 + 0x472) == bVar18)) goto LAB_0220909c;
    puVar13 = &DAT_05407620;
  }
  lVar12 = *(long *)PTR_DAT_04bb46b0;
  if (lVar12 == 0) {
LAB_0220912c:
    uVar11 = 0;
  }
  else {
    uVar3 = *puVar13;
    uVar4 = puVar13[1];
    uVar5 = puVar13[2];
    puVar14 = *(undefined8 **)(lVar12 + 0x10);
    if ((*(byte *)(lVar12 + 0x453) & 1) == 0) {
      lVar12 = (**(code **)(*(long *)*puVar14 + 0x38))();
      if (lVar12 == 0) {
        return 0;
      }
      lVar12 = lVar12 + 0x70;
    }
    else {
      if (puVar14 == (undefined8 *)0x0) goto LAB_0220912c;
      if ((long *)puVar14[0x26] == (long *)0x0) {
        return 0;
      }
      lVar12 = (**(code **)(*(long *)puVar14[0x26] + 0x38))();
      if (lVar12 == 0) {
        return 0;
      }
    }
    if ((*(long **)(lVar12 + 0xd0) == (long *)0x0) ||
       (puVar14 = (undefined8 *)**(long **)(lVar12 + 0xd0), puVar14 == (undefined8 *)0x0)) {
      local_9c = 0;
    }
    else {
      local_9c = (**(code **)*puVar14)();
    }
    local_88 = 0;
    local_84 = 0;
    lVar22 = 0;
    uVar20 = 0;
    plVar19 = &DAT_053fede8;
    puVar1 = PTR_DAT_04bb2020 + 0x10;
    puVar21 = PTR_DAT_04bc2a20;
    do {
      lVar10 = FUN_0265c2a0(uVar20 & 0xffffffff);
      if ((((lVar10 != 0) && ((ulong)uVar3 * 0x13230 != lVar22)) &&
          ((ulong)uVar4 * 0x13230 != lVar22)) && ((ulong)uVar5 * 0x13230 != lVar22)) {
        lVar10 = *(long *)(lVar12 + 0xb8) + *(long *)(lVar12 + 0xb0);
        lVar2 = lVar10 + lVar22;
        local_70 = (undefined *)CONCAT44(local_70._4_4_,(int)*(char *)(lVar2 + 0x1267a));
        if ((*(char *)(lVar2 + 0x1267a) == 0) &&
           ((*plVar19 == 0 || (*(int *)(*plVar19 + 4) != 0x1a)))) {
          uVar17 = (ulong)*(byte *)(lVar10 + lVar22);
          if (uVar17 < 0x23) {
            if ((*(byte *)(lVar2 + 1) <= (byte)PTR_DAT_04bc27f0[uVar17]) &&
               ((*(uint *)(puVar21 + uVar17 * 4) >> (ulong)(*(byte *)(lVar2 + 1) & 0x1f) & 1) != 0))
            {
              pcStack_78 = "AbandonedHouse";
              local_80 = puVar1;
              iVar8 = FUN_02749340(lVar2 + 0x1267c,&local_80);
              if (iVar8 < 2) {
                local_70 = PTR_DAT_04bb2020 + 0x10;
                pcStack_68 = "MoveInCompletion";
                iVar8 = FUN_02749340(lVar2 + 0x1267c,&local_70);
                if (iVar8 != 0) {
                  lVar10 = *(long *)PTR_DAT_04bb39b0;
                  pbVar16 = PTR_DAT_04bb32e0;
                  if (lVar10 == 0) {
                    if (7 < (byte)*PTR_DAT_04bb32e0) goto LAB_0220932c;
LAB_022093b0:
                    bVar18 = *pbVar16;
                    if (7 < bVar18) {
                      bVar18 = 0xff;
                    }
                    local_80 = (undefined *)CONCAT71(local_80._1_7_,bVar18);
                  }
                  else {
                    if (*(int *)(lVar10 + 0x15c) != 0) {
                      pbVar16 = (byte *)(lVar10 + 0x158);
                    }
                    if ((*pbVar16 < 8) ||
                       (((*(int *)(lVar10 + 0x15c) != 0 && (*(long *)PTR_DAT_04bb4718 != 0)) &&
                        (pbVar16 = (byte *)(*(long *)PTR_DAT_04bb4718 + 0x11a5), *pbVar16 < 8))))
                    goto LAB_022093b0;
LAB_0220932c:
                    pbVar16 = PTR_DAT_04bb5038;
                    if (*(long **)PTR_DAT_04bb27d0 == (long *)0x0) goto LAB_022093b0;
                    lVar10 = **(long **)PTR_DAT_04bb27d0;
                    bVar18 = *(byte *)(lVar10 + 0x473);
                    pbVar15 = PTR_DAT_04bb5038;
                    if ((long)(char)bVar18 != 0xffffffffffffffff) {
                      puVar13 = (uint *)(lVar10 + 0x48) + ((long)(char)bVar18 & 0xffffffffU) * 0x20;
                      if (7 < bVar18) {
                        puVar13 = (uint *)(lVar10 + 0x48);
                      }
                      if ((*puVar13 & 8) != 0) {
                        pbVar15 = (byte *)(lVar10 + 0x471);
                      }
                    }
                    bVar18 = *pbVar15;
                    bVar7 = 7 < bVar18;
                    if (bVar7) {
                      bVar18 = 0xff;
                    }
                    local_80 = (undefined *)CONCAT71(local_80._1_7_,bVar18);
                    if (bVar7) goto LAB_022093b0;
                  }
                  uVar6 = 1 << (ulong)((uint)uVar20 & 0x1f);
                  local_70 = PTR_DAT_04bb2020 + 0x10;
                  pcStack_68 = "ChristmasSantaPresentsFlag";
                  lVar10 = FUN_0265cf70(uVar20 & 0xffffffff,&local_80);
                  if (lVar10 == 0) {
                    uVar9 = 0;
                  }
                  else {
                    if ((*(long **)(lVar10 + 0x28) == (long *)0x0) ||
                       (puVar14 = (undefined8 *)**(long **)(lVar10 + 0x28),
                       puVar14 == (undefined8 *)0x0)) {
                      uVar9 = 1;
                    }
                    else {
                      uVar9 = (**(code **)*puVar14)();
                      uVar9 = uVar9 ^ 1;
                    }
                    iVar8 = FUN_02746e10(*(long *)(lVar10 + 0x10) + *(long *)(lVar10 + 8),&local_70)
                    ;
                    if ((((uVar9 & 1) == 0) && (*(long *)(lVar10 + 0x28) != 0)) &&
                       (puVar14 = *(undefined8 **)(*(long *)(lVar10 + 0x28) + 8),
                       puVar14 != (undefined8 *)0x0)) {
                      (**(code **)*puVar14)();
                    }
                    uVar9 = uVar6;
                    if (iVar8 != 1) {
                      uVar9 = 0;
                    }
                  }
                  local_88 = uVar6 | local_88;
                  local_84 = uVar9 | local_84;
                }
              }
              puVar21 = PTR_DAT_04bc2a20;
            }
          }
        }
      }
      uVar20 = uVar20 + 1;
      lVar22 = lVar22 + 0x13230;
      plVar19 = plVar19 + 0x174;
    } while (uVar20 != 10);
    *param_1 = local_88;
    *param_2 = local_84;
    if ((((local_9c & 1) != 0) && (*(long *)(lVar12 + 0xd0) != 0)) &&
       (puVar14 = *(undefined8 **)(*(long *)(lVar12 + 0xd0) + 8), puVar14 != (undefined8 *)0x0)) {
      (**(code **)*puVar14)();
    }
    uVar11 = 1;
  }
  return uVar11;
}

