
void FUN_0303a190(int *param_1,char *param_2)

{
  long *plVar1;
  long *plVar2;
  undefined8 uVar3;
  int iVar4;
  uint uVar5;
  char cVar6;
  undefined2 uVar7;
  undefined *puVar8;
  bool bVar9;
  undefined ***pppuVar10;
  int iVar11;
  int iVar12;
  ulong uVar13;
  long *plVar14;
  byte bVar15;
  byte *pbVar16;
  int *piVar17;
  ulong uVar18;
  int iVar19;
  long lVar20;
  uint *puVar21;
  undefined8 *puVar22;
  long lVar23;
  undefined **local_1770 [4];
  undefined4 local_1750;
  undefined3 uStack_174c;
  undefined8 local_1748;
  int local_1740;
  undefined1 uStack_173c;
  char cStack_173b;
  undefined2 uStack_173a;
  long local_1738;
  undefined **local_a8 [4];
  undefined **local_88 [5];
  
  uVar3 = *(undefined8 *)param_2;
  *(undefined8 *)(param_1 + 4) = *(undefined8 *)(param_2 + 8);
  piVar17 = param_1 + 2;
  *(undefined8 *)piVar17 = uVar3;
  param_1[7] = *(int *)(param_2 + 0x14);
  param_1[6] = *(int *)(param_2 + 0x10);
  bVar15 = param_2[0x18];
  if (7 < bVar15) {
    bVar15 = 0xff;
  }
  pbVar16 = (byte *)(param_1 + 8);
  *pbVar16 = bVar15;
  plVar1 = (long *)(param_1 + 10);
  (**(code **)(*(long *)(param_2 + 0x20) + 0x10))();
  if (((((char)*piVar17 == '\0' && *(long *)(param_1 + 4) != 0) || ((char)*piVar17 != '\0')) &&
      (param_2[0x40] != '\0')) && (*DAT_04cb54f0 != 0)) {
    uStack_173c = *(int *)(param_2 + 0x10) == 0;
    cStack_173b = *param_2;
    local_1748 = *(undefined ***)(param_2 + 8);
    local_1740 = param_1[7];
    if (cStack_173b != '\0') {
      local_1748 = (undefined **)0x0;
    }
    FUN_01dd2480(*(undefined8 *)PTR_DAT_04bb4ca8,&local_1748);
  }
  iVar11 = *param_1;
  if (0 < iVar11) {
    iVar19 = 0;
    do {
      iVar12 = param_1[6];
      iVar11 = iVar19 + param_1[7] * iVar11;
      cVar6 = (char)param_1[2];
      uVar18 = *(ulong *)(param_1 + 4);
      lVar20 = *(long *)(param_1 + 0x12);
      local_1750._0_3_ = (undefined3)*(undefined4 *)((long)param_1 + 9);
      local_1750._3_1_ = (undefined1)param_1[3];
      uStack_174c = (undefined3)((uint)param_1[3] >> 8);
      if (lVar20 == 0) {
        if (param_1[0x18] < param_1[0x19]) {
LAB_0303a69c:
          puVar22 = *(undefined8 **)(param_1 + 0x14);
          if (puVar22 != (undefined8 *)0x0) {
            *(undefined8 *)(param_1 + 0x14) = *puVar22;
          }
          puVar22[6] = 0;
          puVar22[4] = 1;
          puVar22[5] = 0;
          puVar22[2] = 0;
          puVar22[3] = 0;
          *puVar22 = &PTR_LAB_04af5510;
          puVar22[1] = 0;
          iVar4 = param_1[6];
          local_88[0] = &PTR_LAB_04af54e8;
          (**(code **)(*(long *)(param_1 + 10) + 0x10))(plVar1,local_88);
          *(undefined1 *)(puVar22 + 0xc) = 0;
          puVar22[7] = 0xffffffff00000000;
          puVar22[8] = 0;
          puVar22[9] = 0;
          puVar22[10] = 0;
          puVar22[0xb] = 0;
          puVar8 = PTR_DAT_04bb3170;
          FUN_007ef010(puVar22 + 0xd,PTR_DAT_04bb3170);
          uVar7 = *(undefined2 *)puVar8;
          *(undefined4 *)((long)puVar22 + 0x6c) = 0;
          puVar22[0xe] = 0;
          puVar22[0x10] = 0;
          *(undefined2 *)(puVar22 + 0x11) = 0;
          *(undefined1 *)(puVar22 + 0x14) = 0;
          puVar22[0x15] = &PTR_LAB_04af54e8;
          *(undefined4 *)(puVar22 + 0x19) = 0;
          local_1748 = &PTR_LAB_04af54e8;
          *(undefined2 *)(puVar22 + 0xf) = uVar7;
          puVar22[0x12] = 0;
          puVar22[0x13] = 0;
          (*(code *)local_88[0][2])(local_88,&local_1748);
          FUN_03039954(puVar22 + 7,pbVar16,piVar17,iVar4,iVar11,&local_1748);
          puVar22[5] = uVar18;
          *(int *)(puVar22 + 6) = iVar12;
          *(int *)((long)puVar22 + 0x34) = iVar11;
          puVar22[0x1a] = param_1 + 0x12;
          *(char *)(puVar22 + 4) = cVar6;
          *(undefined4 *)((long)puVar22 + 0x21) = local_1750;
          *(uint *)((long)puVar22 + 0x24) = CONCAT31(uStack_174c,local_1750._3_1_);
          param_1[0x18] = param_1[0x18] + 1;
          lVar20 = FUN_0303bd7c(*(undefined8 *)(param_1 + 0x12),puVar22);
          *(long *)(param_1 + 0x12) = lVar20;
          *(undefined8 *)(lVar20 + 0x18) = 1;
        }
      }
      else {
        lVar23 = lVar20;
        if (cVar6 == '\0') {
LAB_0303a41c:
          if (*(char *)(lVar23 + 0x20) != '\0') {
LAB_0303a410:
            lVar23 = *(long *)(lVar23 + 8);
joined_r0x0303a418:
            if (lVar23 == 0) goto LAB_0303a480;
            goto LAB_0303a41c;
          }
          uVar13 = *(ulong *)(lVar23 + 0x28);
          if (uVar18 == uVar13) {
            iVar4 = *(int *)(lVar23 + 0x30);
            if (iVar12 == iVar4) {
              if (iVar11 < *(int *)(lVar23 + 0x34)) goto LAB_0303a410;
              if (iVar11 <= *(int *)(lVar23 + 0x34)) goto LAB_0303a55c;
            }
            else {
              if (iVar12 < iVar4) goto LAB_0303a410;
              if (iVar12 <= iVar4) goto LAB_0303a55c;
            }
LAB_0303a470:
            lVar23 = *(long *)(lVar23 + 0x10);
            goto joined_r0x0303a418;
          }
          if (uVar18 < uVar13) goto LAB_0303a410;
          if (uVar13 < uVar18) goto LAB_0303a470;
LAB_0303a55c:
          puVar21 = (uint *)(lVar23 + 0x38);
          iVar12 = *(int *)(lVar23 + 200);
          if (*(int *)(lVar23 + 200) == 5) {
            if ((*(ushort *)(lVar23 + 0x88) >> 6 & 1) == 0) {
              if ((*(ushort *)(lVar23 + 0x88) >> 2 & 1) != 0) {
                if (*(long *)(lVar23 + 0x80) != 0) goto LAB_0303a6bc;
                goto LAB_0303a6cc;
              }
              if (*(short *)(lVar23 + 0x78) == *(short *)PTR_DAT_04bb3170) goto LAB_0303a6cc;
LAB_0303a6bc:
              if (*(long *)(lVar23 + 0x90) == 0) goto LAB_0303a6cc;
              local_1748 = (undefined **)CONCAT44(local_1748._4_4_,3);
            }
            else {
LAB_0303a6cc:
              FUN_007ef010(local_88,lVar23 + 0x68);
              FUN_007e4920(&local_1748,local_88);
              if (((short)local_1748 == *(short *)PTR_DAT_04bb3170) ||
                 ((local_1738 == 0 &&
                  (CONCAT26(uStack_173a,CONCAT15(cStack_173b,CONCAT14(uStack_173c,local_1740))) == 0
                  )))) {
                uVar5 = *puVar21;
                if (uVar5 - 4 < 2) {
LAB_0303a71c:
                  plVar14 = *(long **)(lVar23 + 0x48);
                  if (plVar14 != (long *)0x0) {
LAB_0303a724:
                    plVar2 = &DAT_04178a58;
                    if ((char)plVar14[0xd7] != '\0') {
                      plVar2 = plVar14;
                    }
                    if (*plVar2 == *(long *)(lVar23 + 0x40)) goto LAB_0303a7c0;
                  }
                }
                else if (uVar5 != 0) {
                  if (uVar5 == 1) goto LAB_0303a71c;
                  if (((uVar5 & 0xfffffffe) == 8) &&
                     (plVar14 = *(long **)(lVar23 + 0x48), plVar14 != (long *)0x0))
                  goto LAB_0303a724;
LAB_0303a7c0:
                  local_1748 = (undefined **)CONCAT44(local_1748._4_4_,1);
                  goto LAB_0303a7c8;
                }
                local_1748 = (undefined **)((ulong)local_1748._4_4_ << 0x20);
              }
              else {
                if ((((*(ushort *)(lVar23 + 0x88) & 0x28) == 0) &&
                    ((*(ushort *)(lVar23 + 0x88) >> 3 & 1) == 0)) &&
                   (*(long *)(DAT_05231900 + 0x100) != 0)) {
                  FUN_015a2df4(*(long *)(DAT_05231900 + 0x100),(short *)(lVar23 + 0x78),
                               lVar23 + 0x68,lVar23 + 0x70,0,1);
                }
                local_1748 = (undefined **)CONCAT44(local_1748._4_4_,2);
              }
            }
LAB_0303a7c8:
            iVar12 = *(int *)(lVar23 + 200);
            if (*(int *)(lVar23 + 200) != (int)local_1748) {
              *(int *)(lVar23 + 200) = (int)local_1748;
              iVar12 = (int)local_1748;
            }
          }
          if (iVar12 != 0) goto LAB_0303a3c4;
          local_1770[0] = &PTR_LAB_04af54e8;
          iVar12 = param_1[6];
          (**(code **)(*(long *)(param_1 + 10) + 0x10))(plVar1,local_1770);
          pppuVar10 = local_1770;
        }
        else {
          do {
            while (*(char *)(lVar23 + 0x20) == '\0') {
LAB_0303a50c:
              lVar23 = *(long *)(lVar23 + 0x10);
              if (lVar23 == 0) goto LAB_0303a480;
            }
            iVar4 = *(int *)(lVar23 + 0x30);
            if (iVar12 != iVar4) {
              if (iVar12 < iVar4) goto LAB_0303a544;
              if (iVar4 < iVar12) goto LAB_0303a50c;
              goto LAB_0303a55c;
            }
            if (*(int *)(lVar23 + 0x34) <= iVar11) {
              if (*(int *)(lVar23 + 0x34) < iVar11) goto LAB_0303a50c;
              goto LAB_0303a55c;
            }
LAB_0303a544:
            lVar23 = *(long *)(lVar23 + 8);
          } while (lVar23 != 0);
LAB_0303a480:
          if (param_1[0x18] < param_1[0x19]) goto LAB_0303a69c;
          if (cVar6 != '\0') {
            do {
              while (*(char *)(lVar20 + 0x20) == '\0') {
LAB_0303a5a4:
                lVar20 = *(long *)(lVar20 + 0x10);
                if (lVar20 == 0) goto LAB_0303a3c4;
              }
              iVar4 = *(int *)(lVar20 + 0x30);
              if (iVar12 != iVar4) {
                if (iVar12 < iVar4) goto LAB_0303a5d8;
                if (iVar4 < iVar12) goto LAB_0303a5a4;
                goto LAB_0303a5f0;
              }
              if (*(int *)(lVar20 + 0x34) <= iVar11) {
                if (*(int *)(lVar20 + 0x34) < iVar11) goto LAB_0303a5a4;
                goto LAB_0303a5f0;
              }
LAB_0303a5d8:
              lVar20 = *(long *)(lVar20 + 8);
            } while (lVar20 != 0);
            goto LAB_0303a3c4;
          }
LAB_0303a4a0:
          if (*(char *)(lVar20 + 0x20) != '\0') {
LAB_0303a494:
            lVar20 = *(long *)(lVar20 + 8);
joined_r0x0303a49c:
            if (lVar20 == 0) goto LAB_0303a3c4;
            goto LAB_0303a4a0;
          }
          uVar13 = *(ulong *)(lVar20 + 0x28);
          if (uVar18 == uVar13) {
            iVar4 = *(int *)(lVar20 + 0x30);
            if (iVar12 == iVar4) {
              if (iVar11 < *(int *)(lVar20 + 0x34)) goto LAB_0303a494;
              if (iVar11 <= *(int *)(lVar20 + 0x34)) goto LAB_0303a5f0;
            }
            else {
              if (iVar12 < iVar4) goto LAB_0303a494;
              if (iVar12 <= iVar4) goto LAB_0303a5f0;
            }
LAB_0303a4f4:
            lVar20 = *(long *)(lVar20 + 0x10);
            goto joined_r0x0303a49c;
          }
          if (uVar18 < uVar13) goto LAB_0303a494;
          if (uVar13 < uVar18) goto LAB_0303a4f4;
LAB_0303a5f0:
          local_a8[0] = &PTR_LAB_04af54e8;
          (**(code **)(*plVar1 + 0x10))(plVar1,local_a8);
          puVar21 = (uint *)(lVar20 + 0x38);
          puVar21[0] = 0;
          puVar21[1] = 0xffffffff;
          *(undefined8 *)(lVar20 + 0x40) = 0;
          *(undefined8 *)(lVar20 + 0x48) = 0;
          *(undefined8 *)(lVar20 + 0x50) = 0;
          *(undefined8 *)(lVar20 + 0x58) = 0;
          *(undefined1 *)(lVar20 + 0x60) = 0;
          puVar8 = PTR_DAT_04bb3170;
          FUN_007ef010(lVar20 + 0x68,PTR_DAT_04bb3170);
          uVar7 = *(undefined2 *)puVar8;
          *(undefined4 *)(lVar20 + 0x6c) = 0;
          *(undefined8 *)(lVar20 + 0x70) = 0;
          *(undefined8 *)(lVar20 + 0x80) = 0;
          *(undefined2 *)(lVar20 + 0x88) = 0;
          *(undefined1 *)(lVar20 + 0xa0) = 0;
          *(undefined ***)(lVar20 + 0xa8) = &PTR_LAB_04af54e8;
          *(undefined4 *)(lVar20 + 200) = 0;
          local_1748 = &PTR_LAB_04af54e8;
          *(undefined2 *)(lVar20 + 0x78) = uVar7;
          *(undefined8 *)(lVar20 + 0x90) = 0;
          *(undefined8 *)(lVar20 + 0x98) = 0;
          (*(code *)local_a8[0][2])(local_a8,&local_1748);
          pppuVar10 = (undefined ***)&local_1748;
        }
        FUN_03039954(puVar21,pbVar16,piVar17,iVar12,iVar11,pppuVar10);
      }
LAB_0303a3c4:
      iVar11 = *param_1;
      iVar19 = iVar19 + 1;
    } while (iVar19 < iVar11);
  }
  uVar18 = *(ulong *)(param_1 + 0x12);
  if (uVar18 == 0) {
LAB_0303a82c:
    FUN_0303a970(param_1);
    return;
  }
  for (; lVar20 = *(long *)(uVar18 + 8), lVar20 != 0; uVar18 = *(ulong *)(uVar18 + 8)) {
    *(ulong *)(lVar20 + 0x18) = *(ulong *)(lVar20 + 0x18) & 1 | uVar18;
  }
  do {
    if (*(char *)(uVar18 + 0x20) == '\0' && (char)*piVar17 == '\0') {
      if (*(long *)(uVar18 + 0x28) == *(long *)(param_1 + 4)) goto LAB_0303a8c4;
LAB_0303a8f0:
      FUN_0303a000(uVar18 + 0x38,0);
    }
    else {
      if ((*(char *)(uVar18 + 0x20) != '\0') == ((char)*piVar17 == '\0')) goto LAB_0303a8f0;
LAB_0303a8c4:
      if (*(int *)(uVar18 + 0x30) != param_1[6]) goto LAB_0303a8f0;
      iVar11 = 0;
      if (*param_1 != 0) {
        iVar11 = *(int *)(uVar18 + 0x34) / *param_1;
      }
      if (iVar11 != param_1[7]) goto LAB_0303a8f0;
    }
    lVar20 = *(long *)(uVar18 + 0x10);
    if (lVar20 == 0) {
      uVar13 = uVar18;
      do {
        uVar18 = *(ulong *)(uVar13 + 0x18) & 0xfffffffffffffffe;
        if (uVar18 == 0) goto LAB_0303a82c;
        bVar9 = *(ulong *)(uVar18 + 8) != uVar13;
        uVar13 = uVar18;
      } while (bVar9);
    }
    else {
      *(ulong *)(lVar20 + 0x18) = *(ulong *)(lVar20 + 0x18) & 1 | uVar18;
      uVar18 = *(ulong *)(uVar18 + 0x10);
      lVar20 = *(long *)(uVar18 + 8);
      while (lVar20 != 0) {
        *(ulong *)(lVar20 + 0x18) = *(ulong *)(lVar20 + 0x18) & 1 | uVar18;
        uVar18 = *(ulong *)(uVar18 + 8);
        lVar20 = *(long *)(uVar18 + 8);
      }
    }
  } while( true );
}

