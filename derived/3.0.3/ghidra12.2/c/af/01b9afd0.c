
void FUN_01b9afd0(long *param_1,byte *param_2)

{
  undefined *puVar1;
  long lVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  undefined *puVar9;
  uint uVar10;
  uint uVar11;
  undefined8 *puVar12;
  byte bVar13;
  byte bVar14;
  long lVar15;
  long lVar16;
  long *plVar17;
  int iVar18;
  long lVar19;
  long lVar20;
  char *pcVar21;
  long lVar22;
  long *plVar23;
  int iVar24;
  ulong uVar25;
  uint local_84;
  byte local_80 [4];
  byte local_7c [4];
  undefined8 local_78;
  undefined4 local_70;
  undefined2 local_6c;
  
  if (0 < (int)param_1[2]) {
    lVar19 = 0;
    puVar1 = PTR_DAT_04bb2df8 + 0x10;
    do {
      iVar24 = 0;
      if ((int)param_1[1] <= (int)lVar19 + *(int *)((long)param_1 + 0xc)) {
        iVar24 = (int)param_1[1];
      }
      plVar23 = (long *)(*param_1 +
                        ((lVar19 - iVar24) + (long)*(int *)((long)param_1 + 0xc)) * 0x5b0);
      FUN_03f45838(plVar23 + 0xb2);
      FUN_03f45838(plVar23 + 0xb2);
      plVar17 = (long *)plVar23[0xb5];
      if (plVar17 != (long *)0x0) {
        (**(code **)(*plVar17 + 0x20))(plVar17);
        iVar24 = *(int *)((long)plVar23 + 0x59c) + -1;
        if (((*(int *)((long)plVar23 + 0x59c) < 1) ||
            (*(int *)((long)plVar23 + 0x59c) = iVar24, iVar24 == 0)) && (plVar23[0xb4] != 0)) {
          FUN_03f44508();
          plVar23[0xb4] = 0;
        }
        (**(code **)(*plVar17 + 0x28))(plVar17);
      }
      plVar23[0x80] = (long)puVar1;
      lVar19 = lVar19 + 1;
      plVar23[0x28] = (long)puVar1;
      *plVar23 = (long)puVar1;
    } while ((int)lVar19 < (int)param_1[2]);
  }
  puVar1 = PTR_DAT_04bb38d0;
  *(undefined8 *)((long)param_1 + 0xc) = 0;
  puVar9 = PTR_DAT_04bb4f78;
  bVar13 = *(byte *)(*(long *)puVar1 + 2);
  local_80[0] = bVar13;
  if (7 < bVar13) {
    local_80[0] = 0xff;
  }
  local_7c[0] = local_80[0];
  lVar19 = FUN_025830c0(*(undefined8 *)PTR_DAT_04bb4f78,local_80,1);
  if (lVar19 == 0) {
    return;
  }
  if ((*(long **)(lVar19 + 0x28) == (long *)0x0) ||
     (puVar12 = (undefined8 *)**(long **)(lVar19 + 0x28), puVar12 == (undefined8 *)0x0)) {
    uVar10 = 0;
  }
  else {
    uVar10 = (**(code **)*puVar12)();
  }
  bVar14 = *param_2;
  if (7 < bVar13) {
    bVar13 = 0xff;
  }
  if (7 < bVar14) {
    bVar14 = 0xff;
  }
  lVar2 = *(long *)(lVar19 + 0x10) + *(long *)(lVar19 + 8);
  if (bVar13 == bVar14) {
    FUN_02645730(&local_78,param_2);
    iVar24 = 0;
    iVar18 = 0;
    lVar20 = lVar2 + 0x36910;
    do {
      pcVar21 = (char *)(lVar20 + (long)iVar18 * 0x230);
      if (*pcVar21 != '\0') {
        lVar15 = lVar20 + (long)iVar18 * 0x230;
        iVar5 = *(int *)(lVar15 + 0x1e4);
        if (*(int *)(lVar15 + 0x200) != 0 && iVar5 != 0) {
          iVar6 = *(int *)(lVar2 + 0xc138);
          if (*(short *)(lVar15 + 0x1e8) == 0 || *(short *)(lVar2 + 0xc13c) == 0) {
            if (iVar5 == iVar6) goto LAB_01b9b260;
LAB_01b9b248:
            uVar11 = FUN_026472d0(&local_78,lVar20 + (long)iVar18 * 0x230 + 0x220);
            uVar11 = uVar11 ^ 1;
          }
          else {
            if ((iVar5 != iVar6) ||
               (!((*(long *)(lVar2 + 0xc13c) == *(long *)(lVar15 + 0x1e8) &&
                  *(long *)(lVar2 + 0xc144) == *(long *)(lVar15 + 0x1f0)) &&
                 *(int *)(lVar2 + 0xc14c) == *(int *)(lVar15 + 0x1f8)))) goto LAB_01b9b248;
LAB_01b9b260:
            uVar11 = 0;
          }
          iVar5 = (int)param_1[2];
          iVar24 = iVar24 + 1;
          iVar6 = (int)param_1[1];
          if (iVar5 < iVar6) {
            *(int *)(param_1 + 2) = iVar5 + 1;
            lVar15 = *param_1;
            iVar5 = *(int *)((long)param_1 + 0xc) + iVar5;
            iVar4 = 0;
            if (iVar6 <= iVar5) {
              iVar4 = iVar6;
            }
            lVar22 = lVar15 + (long)(iVar5 - iVar4) * 0x5b0;
            FUN_01b9a8e4(lVar22);
            if (lVar15 != 0) {
              FUN_01b9abdc(lVar22,(int *)(lVar2 + 0xc138),uVar11 & 1,pcVar21);
            }
          }
        }
      }
      iVar18 = iVar18 + 1;
    } while (iVar18 != 8);
  }
  else {
    local_78 = CONCAT71(local_78._1_7_,bVar14);
    lVar20 = FUN_025830c0(*(undefined8 *)puVar9,&local_78,1);
    if (lVar20 == 0) {
      iVar24 = 0;
    }
    else {
      if ((*(long **)(lVar20 + 0x17bb0) == (long *)0x0) ||
         (puVar12 = (undefined8 *)**(long **)(lVar20 + 0x17bb0), puVar12 == (undefined8 *)0x0)) {
        uVar11 = 1;
      }
      else {
        uVar11 = (**(code **)*puVar12)();
        uVar11 = uVar11 ^ 1;
      }
      iVar24 = 0;
      iVar18 = 0;
      lVar15 = lVar2 + 0x36910;
      do {
        pcVar21 = (char *)(lVar15 + (long)iVar18 * 0x230);
        if (*pcVar21 != '\0') {
          lVar22 = lVar15 + (long)iVar18 * 0x230;
          iVar5 = *(int *)(lVar22 + 0x1e4);
          if (*(int *)(lVar22 + 0x200) != 0 && iVar5 != 0) {
            iVar24 = iVar24 + 1;
            piVar3 = (int *)(*(long *)(lVar20 + 0x17b98) + *(long *)(lVar20 + 0x17b90));
            if ((*(int *)(lVar22 + 0x200) == piVar3[7]) &&
               (lVar16 = lVar15 + (long)iVar18 * 0x230,
               (*(long *)(piVar3 + 8) == *(long *)(lVar16 + 0x204) &&
               *(long *)(piVar3 + 10) == *(long *)(lVar16 + 0x20c)) &&
               piVar3[0xc] == *(int *)(lVar16 + 0x214))) {
              if ((*(short *)(lVar22 + 0x1e8) == 0) || ((short)piVar3[1] == 0)) {
                if (iVar5 == *piVar3) goto LAB_01b9b42c;
              }
              else if ((iVar5 == *piVar3) &&
                      ((*(long *)(piVar3 + 1) == *(long *)(lVar22 + 0x1e8) &&
                       *(long *)(piVar3 + 3) == *(long *)(lVar22 + 0x1f0)) &&
                       piVar3[5] == *(int *)(lVar22 + 0x1f8))) {
LAB_01b9b42c:
                iVar5 = (int)param_1[2];
                iVar6 = (int)param_1[1];
                if (iVar5 < iVar6) {
                  lVar22 = *param_1;
                  *(int *)(param_1 + 2) = iVar5 + 1;
                  iVar5 = *(int *)((long)param_1 + 0xc) + iVar5;
                  iVar4 = 0;
                  if (iVar6 <= iVar5) {
                    iVar4 = iVar6;
                  }
                  lVar16 = lVar22 + (long)(iVar5 - iVar4) * 0x5b0;
                  FUN_01b9a8e4(lVar16);
                  if (lVar22 != 0) {
                    FUN_01b9abdc(lVar16,lVar2 + 0xc138,0,pcVar21);
                  }
                }
              }
            }
          }
        }
        iVar18 = iVar18 + 1;
      } while (iVar18 != 8);
      if ((((uVar11 & 1) == 0) && (*(long *)(lVar20 + 0x17bb0) != 0)) &&
         (puVar12 = *(undefined8 **)(*(long *)(lVar20 + 0x17bb0) + 8), puVar12 != (undefined8 *)0x0)
         ) {
        (**(code **)*puVar12)();
      }
    }
  }
  if (3 < iVar24) goto LAB_01b9b71c;
  local_78 = 0;
  local_70 = 0x23080023;
  local_6c = 0x800;
  FUN_020b78f8(local_7c,&local_78,&local_84);
  uVar7 = (local_84 ^ local_84 >> 0x1e) * 0x6c078965 + 1;
  uVar11 = uVar7 ^ uVar7 * 0x800;
  uVar8 = (uVar7 ^ uVar7 >> 0x1e) * 0x6c078965 + 2;
  uVar7 = uVar8 ^ uVar8 * 0x800;
  uVar8 = (uVar8 ^ uVar8 >> 0x1e) * 0x6c078965 + 3;
  uVar8 = (uVar8 ^ uVar8 >> 0x1e) * 0x6c078965 + 4;
  uVar11 = uVar11 >> 8 ^ uVar8 >> 0x13 ^ uVar11 ^ uVar8;
  lVar2 = *(long *)(lVar19 + 0x10) + *(long *)(lVar19 + 8) + 0xc138;
  if (iVar24 < 1) {
    iVar24 = local_78._4_4_;
    if (local_78._4_4_ != 0) {
      iVar18 = (int)param_1[1];
      if ((int)param_1[2] < iVar18) {
        lVar20 = *param_1;
        iVar5 = iVar18;
        if (0 < *(int *)((long)param_1 + 0xc)) {
          iVar5 = *(int *)((long)param_1 + 0xc);
        }
        if (iVar5 <= iVar18) {
          iVar18 = 0;
        }
        *(int *)((long)param_1 + 0xc) = iVar5 + -1;
        *(int *)(param_1 + 2) = (int)param_1[2] + 1;
        lVar15 = lVar20 + (long)((iVar5 + -1) - iVar18) * 0x5b0;
        FUN_01b9a8e4(lVar15);
        if (((lVar20 != 0) && (uVar25 = FUN_01b9ad8c(lVar15,lVar2,iVar24), (uVar25 & 1) == 0)) &&
           (0 < (int)param_1[2])) {
          iVar24 = 0;
          if ((int)param_1[1] <= *(int *)((long)param_1 + 0xc)) {
            iVar24 = (int)param_1[1];
          }
          FUN_01b9ab48(*param_1 + (long)(*(int *)((long)param_1 + 0xc) - iVar24) * 0x5b0);
          iVar24 = 0;
          if (*(int *)((long)param_1 + 0xc) + 1 < (int)param_1[1]) {
            iVar24 = *(int *)((long)param_1 + 0xc) + 1;
          }
          *(int *)((long)param_1 + 0xc) = iVar24;
          *(int *)(param_1 + 2) = (int)param_1[2] + -1;
        }
      }
    }
LAB_01b9b640:
    uVar25 = local_78 & 0xffffffff;
    if ((int)local_78 != 0) {
      iVar24 = (int)param_1[1];
      if ((int)param_1[2] < iVar24) {
        lVar20 = *param_1;
        iVar18 = iVar24;
        if (0 < *(int *)((long)param_1 + 0xc)) {
          iVar18 = *(int *)((long)param_1 + 0xc);
        }
        if (iVar18 <= iVar24) {
          iVar24 = 0;
        }
        *(int *)((long)param_1 + 0xc) = iVar18 + -1;
        *(int *)(param_1 + 2) = (int)param_1[2] + 1;
        lVar15 = lVar20 + (long)((iVar18 + -1) - iVar24) * 0x5b0;
        FUN_01b9a8e4(lVar15);
        if (((lVar20 != 0) && (uVar25 = FUN_01b9ad8c(lVar15,lVar2,uVar25), (uVar25 & 1) == 0)) &&
           (0 < (int)param_1[2])) {
          iVar24 = 0;
          if ((int)param_1[1] <= *(int *)((long)param_1 + 0xc)) {
            iVar24 = (int)param_1[1];
          }
          FUN_01b9ab48(*param_1 + (long)(*(int *)((long)param_1 + 0xc) - iVar24) * 0x5b0);
          iVar24 = 0;
          if (*(int *)((long)param_1 + 0xc) + 1 < (int)param_1[1]) {
            iVar24 = *(int *)((long)param_1 + 0xc) + 1;
          }
          *(int *)((long)param_1 + 0xc) = iVar24;
          *(int *)(param_1 + 2) = (int)param_1[2] + -1;
        }
      }
    }
    FUN_01b9b810(param_1,lVar2,(long)&local_70 + 3,
                 (int)((ulong)(uVar7 >> 8 ^ uVar11 >> 0x13 ^ uVar7 ^ uVar11) * 3 >> 0x20) + 1);
  }
  else if (iVar24 == 2) {
    uVar25 = local_78 & 0xffffffff;
    if ((int)local_78 != 0) {
      iVar24 = (int)param_1[1];
      if ((int)param_1[2] < iVar24) {
        lVar20 = *param_1;
        iVar18 = iVar24;
        if (0 < *(int *)((long)param_1 + 0xc)) {
          iVar18 = *(int *)((long)param_1 + 0xc);
        }
        if (iVar18 <= iVar24) {
          iVar24 = 0;
        }
        *(int *)((long)param_1 + 0xc) = iVar18 + -1;
        *(int *)(param_1 + 2) = (int)param_1[2] + 1;
        lVar15 = lVar20 + (long)((iVar18 + -1) - iVar24) * 0x5b0;
        FUN_01b9a8e4(lVar15);
        if (((lVar20 != 0) && (uVar25 = FUN_01b9ad8c(lVar15,lVar2,uVar25), (uVar25 & 1) == 0)) &&
           (0 < (int)param_1[2])) {
          iVar24 = 0;
          if ((int)param_1[1] <= *(int *)((long)param_1 + 0xc)) {
            iVar24 = (int)param_1[1];
          }
          FUN_01b9ab48(*param_1 + (long)(*(int *)((long)param_1 + 0xc) - iVar24) * 0x5b0);
          iVar24 = 0;
          if (*(int *)((long)param_1 + 0xc) + 1 < (int)param_1[1]) {
            iVar24 = *(int *)((long)param_1 + 0xc) + 1;
          }
          *(int *)((long)param_1 + 0xc) = iVar24;
          *(int *)(param_1 + 2) = (int)param_1[2] + -1;
        }
      }
    }
  }
  else if (iVar24 == 1) goto LAB_01b9b640;
  FUN_01b9b810(param_1,lVar2,&local_70,(int)((ulong)uVar11 * 3 >> 0x20) + 1);
LAB_01b9b71c:
  if ((((uVar10 & 1) != 0) && (*(long *)(lVar19 + 0x28) != 0)) &&
     (puVar12 = *(undefined8 **)(*(long *)(lVar19 + 0x28) + 8), puVar12 != (undefined8 *)0x0)) {
    (**(code **)*puVar12)();
  }
  return;
}

