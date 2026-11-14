
/* WARNING: Removing unreachable block (ram,0x018c32a8) */
/* WARNING: Removing unreachable block (ram,0x018c3148) */
/* WARNING: Removing unreachable block (ram,0x018c3630) */
/* WARNING: Removing unreachable block (ram,0x018c32f0) */
/* WARNING: Removing unreachable block (ram,0x018c3318) */

undefined8 FUN_018c30e0(undefined8 param_1,undefined4 *param_2,long param_3)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  short sVar5;
  int iVar6;
  bool bVar7;
  undefined *puVar8;
  undefined4 uVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  ulong uVar15;
  uint *puVar16;
  long lVar17;
  long lVar18;
  int iVar19;
  int iVar20;
  uint uVar21;
  int iVar22;
  uint uVar23;
  int iVar24;
  int iVar25;
  int iVar26;
  int iVar27;
  long *plVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float local_dc [2];
  float local_d4;
  undefined **local_d0;
  int local_c8;
  int iStack_c4;
  int local_c0;
  int iStack_bc;
  long *local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  int local_a0;
  int iStack_9c;
  undefined1 auStack_98 [8];
  
  puVar8 = PTR_DAT_04bb2200;
  local_b8 = (long *)0x0;
  if ((*(long *)PTR_DAT_04bb2200 == 0) ||
     (lVar17 = *(long *)(*(long *)PTR_DAT_04bb2200 + 0x50), lVar17 == 0)) {
LAB_018c3178:
    plVar28 = (long *)0x0;
  }
  else {
    local_b0 = (undefined *)((ulong)local_b0 & 0xffffffff00000000);
    plVar28 = *(long **)(lVar17 + 0x118);
    if (plVar28 != (long *)0x0) {
      if (((char)plVar28[7] == '\0') ||
         (uVar15 = (**(code **)(*plVar28 + 0xc0))(plVar28), (uVar15 & 1) == 0)) goto LAB_018c3178;
      local_b8 = plVar28;
    }
  }
  uVar9 = FUN_01a1159c(DAT_052d2598,*param_2);
  lVar17 = DAT_052d3e18;
  sVar5 = *(short *)PTR_DAT_04bb6298;
  if (sVar5 != -1) {
    local_b0 = (undefined *)CONCAT44(local_b0._4_4_,0x1a);
    puVar16 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar5 * 8);
    if (0xff < (uint)(int)sVar5) {
      puVar16 = (uint *)PTR_DAT_04bc39f8;
    }
    if (((*puVar16 >> 0x1a & 1) != 0) &&
       (local_b0 = (undefined *)CONCAT44(local_b0._4_4_,1), (*puVar16 >> 1 & 1) != 0)) {
      if (DAT_052d3e18 == 0) {
        return 0;
      }
      local_b0 = PTR_DAT_04bb2018 + 0x10;
      local_a8 = 0;
      uVar15 = FUN_01a23d74(DAT_052d3e18,&local_b0);
      if (((uVar15 & 1) == 0) || (uVar15 = FUN_018c39b0(param_3,uVar9,&local_b0), (uVar15 & 1) == 0)
         ) {
        uVar15 = FUN_01a24160(lVar17,&local_b0);
        if ((uVar15 & 1) == 0) {
          return 0;
        }
        uVar15 = FUN_018c39b0(param_3,uVar9,&local_b0);
        if ((uVar15 & 1) == 0) {
          return 0;
        }
      }
      return 1;
    }
  }
  if (plVar28 == (long *)0x0) {
    iVar25 = 0;
    iVar14 = 0;
    uVar23 = 0;
  }
  else {
    lVar17 = *(long *)puVar8;
    if (lVar17 == 0) {
      uVar23 = *(int *)(plVar28[0x164] + (long)(int)plVar28[0x166] * 0x10) - 1;
LAB_018c336c:
      if (*(int *)(plVar28[0x164] + (long)(int)plVar28[0x166] * 0x10) + -1 < (int)uVar23) {
LAB_018c3334:
        iVar25 = 0;
        iVar14 = 0;
        goto LAB_018c3420;
      }
    }
    else {
      if (*(long *)(lVar17 + 0x50) == 0) {
LAB_018c32bc:
        uVar23 = *(int *)(plVar28[0x164] + (long)(int)plVar28[0x166] * 0x10) - 1;
        lVar17 = *(long *)(lVar17 + 0x50);
      }
      else {
        local_b0 = (undefined *)((ulong)local_b0 & 0xffffffff00000000);
        lVar18 = *(long *)(*(long *)(lVar17 + 0x50) + 0x118);
        if ((lVar18 == 0) || (*(char *)(lVar18 + 0xe0b) != '\0')) goto LAB_018c32bc;
        uVar23 = 0;
        lVar17 = *(long *)(lVar17 + 0x50);
      }
      if (lVar17 == 0) goto LAB_018c336c;
      uVar15 = (ulong)local_b0 >> 0x20;
      local_b0 = (undefined *)(uVar15 << 0x20);
      if ((*(long *)(lVar17 + 0x118) != 0) && (*(char *)(*(long *)(lVar17 + 0x118) + 0xe0b) == '\0')
         ) goto LAB_018c3334;
      local_b0 = (undefined *)(uVar15 << 0x20);
      if ((*(long *)(lVar17 + 0x118) == 0) || (*(char *)(*(long *)(lVar17 + 0x118) + 0xe0b) != '\0')
         ) goto LAB_018c336c;
      if (0 < (int)uVar23) goto LAB_018c3334;
    }
    puVar16 = (uint *)(plVar28[0x164] + (long)(int)*(uint *)(plVar28 + 0x166) * 0x10);
    if (*(uint *)(plVar28 + 0x163) <= *(uint *)(plVar28 + 0x166)) {
      puVar16 = (uint *)0x0;
    }
    piVar1 = (int *)(*(long *)(puVar16 + 2) + (long)(int)uVar23 * 0x10);
    if (*puVar16 <= uVar23) {
      piVar1 = (int *)0x0;
    }
    iVar14 = *piVar1;
    iVar25 = piVar1[1];
    if (0 < iVar14) {
      if (iVar25 < 1) {
        uVar21 = 0;
        bVar7 = true;
      }
      else {
        uVar21 = 0;
        iVar22 = 0;
        do {
          iVar24 = 0;
          do {
            local_b0 = (undefined *)CONCAT44(iVar24,iVar22);
            iVar10 = FUN_015aff78(&local_b8,&local_b0,uVar23);
            iVar24 = iVar24 + 1;
            uVar21 = iVar10 + uVar21;
          } while (iVar25 != iVar24);
          iVar22 = iVar22 + 1;
        } while (iVar22 != iVar14);
        bVar7 = true;
      }
      goto LAB_018c3424;
    }
  }
LAB_018c3420:
  bVar7 = false;
  uVar21 = 0;
LAB_018c3424:
  puVar16 = (uint *)nn::os::GetTlsValue(DAT_05ae7880);
  uVar3 = *puVar16 ^ *puVar16 << 0xb;
  uVar4 = puVar16[3];
  *puVar16 = puVar16[1];
  puVar16[1] = puVar16[2];
  uVar3 = uVar3 >> 8 ^ uVar4 >> 0x13 ^ uVar3 ^ uVar4;
  puVar16[2] = uVar4;
  puVar16[3] = uVar3;
  if ((!bVar7) || (iVar25 < 1)) {
    return 0;
  }
  iVar22 = 0;
  if (iVar14 < 2) {
    iVar14 = 1;
  }
  iVar24 = 0;
  do {
    iVar10 = iVar24 + 1;
    if (0 < iVar25) {
      iVar20 = iVar10 << (ulong)(uVar23 & 0x1f);
      iVar27 = iVar24 << (ulong)(uVar23 & 0x1f);
      iVar26 = (int)((ulong)uVar3 * (ulong)uVar21 >> 0x20);
      if (iVar27 < iVar20) {
        iVar19 = 0;
        iVar13 = iVar22;
        do {
          local_b0 = (undefined *)CONCAT44(iVar19,iVar24);
          iVar11 = FUN_015aff78(&local_b8,&local_b0,uVar23);
          iVar2 = iVar19 + 1;
          iVar22 = iVar11 + iVar13;
          if (iVar26 <= iVar11 + iVar13) {
            iVar6 = iVar2 << (ulong)(uVar23 & 0x1f);
            iVar19 = iVar19 << (ulong)(uVar23 & 0x1f);
            iVar22 = iVar13;
            iVar11 = iVar27;
            if (iVar19 < iVar6) {
              do {
                iVar22 = iVar19;
                do {
                  local_c0 = iVar11;
                  iStack_bc = iVar22;
                  iVar12 = FUN_015aff78(&local_b8,&local_c0,0);
                  if ((0 < iVar12) && (iVar13 = iVar13 + 1, iVar26 <= iVar13)) {
                    local_d0 = &PTR_FUN_048f9730;
                    local_c8 = DAT_051a3950;
                    iStack_c4 = DAT_051a3954;
                    if (plVar28 != (long *)0x0) {
                      if ((DAT_05231900 != 0) && (*(long *)(DAT_05231900 + 0x50) != 0)) {
                        local_b0 = (undefined *)((ulong)local_b0 & 0xffffffff00000000);
                        lVar17 = *(long *)(*(long *)(DAT_05231900 + 0x50) + 0x118);
                        if ((lVar17 != 0) && (*(char *)(lVar17 + 0xe0b) == '\0')) goto LAB_018c3660;
                      }
                      local_c8 = *(int *)(plVar28[0x168] + 0x10) + iVar11;
                      iStack_c4 = *(int *)(plVar28[0x168] + 0x14) + iVar22;
                    }
LAB_018c3660:
                    fVar34 = (float)local_c8 * 10.0 + 5.0;
                    fVar29 = (float)local_c8 * 10.0;
                    fVar33 = (float)iStack_c4 * 10.0 + 5.0;
                    fVar30 = (float)iStack_c4 * 10.0;
                    fVar32 = fVar29 + 2.5;
                    fVar31 = fVar30 + 2.5;
                    fVar29 = fVar29 + 10.0 + -2.5;
                    fVar30 = fVar30 + 10.0 + -2.5;
                    iVar22 = (int)((float)(int)fVar32 / 5.0) - (uint)(fVar32 < 0.0);
                    iVar14 = (int)((float)(int)fVar31 / 5.0) - (uint)(fVar31 < 0.0);
                    iVar24 = (int)((float)(int)fVar29 / 5.0) - (uint)(fVar29 < 0.0);
                    iVar25 = iVar22;
                    if (iVar24 <= iVar22) {
                      iVar25 = iVar24;
                    }
                    if (iVar22 <= iVar24) {
                      iVar22 = iVar24;
                    }
                    iVar10 = (int)((float)(int)fVar30 / 5.0) - (uint)(fVar30 < 0.0);
                    iVar24 = iVar14;
                    if (iVar14 <= iVar10) {
                      iVar24 = iVar10;
                    }
                    if (iVar10 <= iVar14) {
                      iVar14 = iVar10;
                    }
                    local_dc[0] = fVar34;
                    local_d4 = fVar33;
                    if (iVar24 + 1 != iVar14) {
                      iVar10 = iVar25;
                      do {
                        local_b0 = (undefined *)(((ulong)local_b0 >> 8 & 0xffffff) << 8);
                        uVar15 = FUN_01a1bea0(0x7f7fffff,iVar10,iVar14,&local_b0);
                        if ((uVar15 & 1) == 0) {
                          return 0;
                        }
                        if (iVar10 < iVar22) {
                          iVar10 = iVar10 + 1;
                        }
                        else {
                          iVar14 = iVar14 + 1;
                          iVar10 = iVar25;
                        }
                      } while ((iVar25 != iVar10) || (iVar24 + 1 != iVar14));
                    }
                    if (DAT_052ae7b0 == 0) {
                      return 0;
                    }
                    iVar14 = (int)((float)(int)fVar34 / 10.0) - (uint)(fVar34 < 0.0);
                    iVar25 = (int)((float)(int)fVar33 / 10.0) - (uint)(fVar33 < 0.0);
                    if (((iVar14 < DAT_052ae7c8 || DAT_052ae7d8 < iVar14) || iVar25 < DAT_052ae7cc)
                        || DAT_052ae7dc < iVar25) {
                      return 0;
                    }
                    lVar17 = (long)(int)((iVar14 - DAT_052ae7c8) +
                                        DAT_052ae7a8 * (iVar25 - DAT_052ae7cc));
                    if (DAT_052ae7ac <= (uint)(iVar25 - DAT_052ae7cc) ||
                        DAT_052ae7a8 <= (uint)(iVar14 - DAT_052ae7c8)) {
                      lVar17 = 0;
                    }
                    if (*(char *)(DAT_052ae7b0 + lVar17 * 8 + 4) != '\0') {
                      return 0;
                    }
                    if ((*(char *)(DAT_052cc470 + 0x638) == '\0') &&
                       (uVar15 = FUN_035a2340(local_dc,&DAT_0418f444), (uVar15 & 1) != 0)) {
                      return 0;
                    }
                    local_b0 = (undefined *)0x200000002;
                    uVar15 = FUN_0189fe80(&local_d0,&local_b0,uVar9,1);
                    if ((uVar15 & 1) != 0) {
                      return 0;
                    }
                    FUN_015af378(auStack_98);
                    local_b0 = PTR_DAT_04bb2010 + 0x10;
                    local_a8 = CONCAT44((int)((float)(int)fVar33 / 5.0) - (uint)(fVar33 < 0.0),
                                        (int)((float)(int)fVar34 / 5.0) - (uint)(fVar34 < 0.0));
                    FUN_015af3fc(auStack_98,&local_a0,&local_b0,0);
                    local_b0 = (undefined *)CONCAT44(iStack_9c,local_a0 + -1);
                    iVar14 = FUN_015af618(auStack_98,&local_b0,0);
                    if (iVar14 == 0) {
                      fVar34 = fVar34 + 4.0;
                      local_dc[0] = fVar34;
                    }
                    local_b0 = (undefined *)CONCAT44(iStack_9c,local_a0 + 1);
                    iVar14 = FUN_015af618(auStack_98,&local_b0,0);
                    if (iVar14 == 0) {
                      local_dc[0] = fVar34 + -4.0;
                    }
                    local_b0 = (undefined *)CONCAT44(iStack_9c + -1,local_a0);
                    iVar14 = FUN_015af618(auStack_98,&local_b0,0);
                    if (iVar14 == 0) {
                      fVar33 = fVar33 + 4.0;
                      local_d4 = fVar33;
                    }
                    local_b0 = (undefined *)CONCAT44(iStack_9c + 1,local_a0);
                    iVar14 = FUN_015af618(auStack_98,&local_b0,0);
                    if (iVar14 == 0) {
                      local_d4 = fVar33 + -4.0;
                    }
                    uVar9 = FUN_015cb8d4(local_dc,0);
                    *(undefined4 *)(param_3 + 0x18) = 0;
                    *(float *)(param_3 + 8) = local_dc[0];
                    *(undefined4 *)(param_3 + 0xc) = uVar9;
                    *(float *)(param_3 + 0x10) = local_d4;
                    return 1;
                  }
                  iVar22 = iVar22 + 1;
                } while (iVar6 != iVar22);
                iVar11 = iVar11 + 1;
                iVar22 = iVar13;
              } while (iVar11 < iVar20);
            }
          }
          iVar19 = iVar2;
          iVar13 = iVar22;
        } while (iVar2 != iVar25);
      }
      else {
        iVar20 = 0;
        iVar27 = iVar22;
        do {
          local_b0 = (undefined *)CONCAT44(iVar20,iVar24);
          iVar13 = FUN_015aff78(&local_b8,&local_b0,uVar23);
          iVar20 = iVar20 + 1;
          iVar22 = iVar13 + iVar27;
          if (iVar26 <= iVar13 + iVar27) {
            iVar22 = iVar27;
          }
          iVar27 = iVar22;
        } while (iVar25 != iVar20);
      }
    }
    iVar24 = iVar10;
    if (iVar10 == iVar14) {
      return 0;
    }
  } while( true );
}

