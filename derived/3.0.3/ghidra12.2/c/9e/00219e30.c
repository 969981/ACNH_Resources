
void FUN_00219e30(long *param_1)

{
  long *plVar1;
  char cVar2;
  ushort uVar3;
  ushort uVar4;
  short sVar5;
  uint uVar6;
  bool bVar7;
  short sVar8;
  undefined *puVar9;
  byte bVar10;
  byte bVar11;
  ushort uVar12;
  undefined2 uVar13;
  undefined4 uVar14;
  uint uVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  long lVar19;
  long *plVar20;
  ulong uVar21;
  ulong uVar22;
  undefined8 uVar23;
  uint uVar24;
  char *pcVar25;
  ushort *puVar26;
  uint uVar27;
  uint uVar28;
  int *piVar29;
  long lVar30;
  uint uVar31;
  uint uVar32;
  uint uVar33;
  uint uVar34;
  undefined2 *puVar35;
  ushort uVar36;
  undefined8 uVar37;
  long lVar38;
  ulong local_118c;
  undefined4 local_1184;
  undefined8 local_1180;
  undefined4 local_1178;
  undefined **local_be0;
  undefined **local_bd8;
  byte local_bd0;
  ushort local_bce;
  ushort local_bcc;
  ushort local_bca;
  int local_bc8;
  undefined4 local_bc4 [361];
  byte local_620 [12];
  int local_614;
  undefined8 local_610;
  undefined4 local_608;
  undefined1 auStack_5fd [1421];
  int local_70;
  undefined4 auStack_6c [3];
  
  lVar19 = FUN_002aaa64();
  if (lVar19 == 0) {
    local_bd8 = (undefined **)((ulong)local_bd8 & 0xffffffff00000000);
    local_be0 = (undefined **)0x800000000000000;
    (**(code **)(*param_1 + 0x10))(param_1,&local_be0);
  }
  uVar14 = (**(code **)(*param_1 + 0x18))(param_1);
  local_be0 = (undefined **)CONCAT44(local_be0._4_4_,uVar14);
  plVar20 = (long *)FUN_002a8480(lVar19,&local_be0);
  (**(code **)(*(long *)*plVar20 + 0x78))();
  uVar21 = (**(code **)(*(long *)*plVar20 + 0x80))();
  puVar9 = PTR_DAT_04bc1510;
  if ((uVar21 & 1) == 0) {
    do {
      uVar37 = *(undefined8 *)puVar9;
      plVar1 = (long *)0x0;
      if (*(long *)(*plVar20 + 0x38) != 0) {
        plVar1 = (long *)(*plVar20 + 0x38);
      }
      uVar23 = FUN_002abe54(plVar1);
      FUN_002ba1c4(&local_be0,uVar37,local_620,uVar23);
      if ((int)local_be0 == 0) {
        if (*(ushort *)(param_1 + 0xc) == 0) {
          local_610 = 0x800000000000000;
          local_608 = 0;
          (**(code **)(*param_1 + 0x10))(param_1,&local_610);
          if (local_620[0] < *(byte *)(param_1 + 0xc)) goto LAB_0021ad10;
        }
        else if ((ushort)local_620[0] < (*(ushort *)(param_1 + 0xc) & 0xff)) {
LAB_0021ad10:
          bVar10 = local_620[0];
          bVar11 = FUN_002aaa44(param_1);
          if ((bVar10 != bVar11) && (local_620[0] != 0xfd)) {
            uVar37 = FUN_002abe54(plVar1);
            uVar21 = FUN_0021dde0(param_1,uVar37);
            if ((uVar21 & 1) != 0) {
              lVar19 = param_1[0xb];
              if (lVar19 == 0) {
                local_610 = 0x800000000000000;
                local_608 = 0;
                (**(code **)(*param_1 + 0x10))(param_1,&local_610);
                lVar19 = param_1[0xb];
              }
              FUN_002aef44(&local_610,lVar19,plVar1);
              if ((int)local_610 != 0) {
                local_1180 = CONCAT44(local_1180._4_4_,0x2c03);
                local_118c = local_118c & 0xffffffff00000000;
                nn::err::ErrorResultVariant::ErrorResultVariant
                          ((ErrorResultVariant *)((long)&local_1180 + 4),(Result *)&local_118c);
                if ((int)local_610 != (int)local_1180) {
                  local_70 = 0x4c0d;
                  local_118c = local_118c & 0xffffffff00000000;
                  nn::err::ErrorResultVariant::ErrorResultVariant
                            ((ErrorResultVariant *)auStack_6c,(Result *)&local_118c);
                  if ((int)local_610 != local_70) {
                    local_1180 = 0x800000000000000;
                    local_1178 = 0;
                    (**(code **)(*param_1 + 0x10))(param_1,&local_1180);
                  }
                }
              }
            }
          }
        }
      }
      (**(code **)(*(long *)*plVar20 + 0x88))();
      uVar21 = (**(code **)(*(long *)*plVar20 + 0x80))();
    } while ((uVar21 & 1) == 0);
  }
  uVar3 = *(ushort *)((long)param_1 + 0xa4);
  uVar12 = FUN_002b2830(param_1[0xb]);
  if (uVar3 < uVar12) {
    uVar13 = FUN_002b2830(param_1[0xb]);
    *(undefined2 *)((long)param_1 + 0xa4) = uVar13;
  }
  do {
    lVar19 = param_1[0xb];
    if (lVar19 == 0) {
      local_be0 = (undefined **)0x800000000000000;
      local_bd8 = (undefined **)((ulong)local_bd8 & 0xffffffff00000000);
      (**(code **)(*param_1 + 0x10))(param_1,&local_be0);
      lVar19 = param_1[0xb];
    }
    lVar19 = FUN_002b19b0(lVar19);
    if (lVar19 == 0) {
      if (param_1[0xb] == 0) {
        local_bd8 = (undefined **)((ulong)local_bd8 & 0xffffffff00000000);
        local_be0 = (undefined **)0x800000000000000;
        (**(code **)(*param_1 + 0x10))(param_1,&local_be0);
        uVar21 = FUN_002b2900(param_1[0xb]);
      }
      else {
        uVar21 = FUN_002b2900();
      }
      if ((uVar21 & 1) == 0) {
        iVar17 = *(int *)((long)param_1 + 0x7c);
      }
      else {
        local_bd8 = (undefined **)((ulong)local_bd8 & 0xffffffff00000000);
        local_be0 = (undefined **)0x800000000000000;
        (**(code **)(*param_1 + 0x10))(param_1,&local_be0);
        iVar17 = *(int *)((long)param_1 + 0x7c);
      }
      if (iVar17 == 0) {
        return;
      }
      uVar15 = (uint)*(ushort *)(param_1 + 0xc);
      if (*(ushort *)(param_1 + 0xc) < 2) {
        return;
      }
      lVar19 = 0;
      do {
        if (*(char *)(param_1[10] + lVar19 * 0x30 + 1) != '\0') {
          FUN_0021e650(param_1,*(undefined8 *)(param_1[10] + lVar19 * 0x30 + 0x10));
          uVar15 = (uint)*(ushort *)(param_1 + 0xc);
        }
        lVar19 = lVar19 + 1;
      } while ((int)((uint)lVar19 & 0xffff) < (int)(uVar15 - 1));
      return;
    }
    uVar15 = FUN_0021e1b0(param_1,lVar19);
    if (uVar15 == 0xffffffff) {
      FUN_002b0940(&local_be0,param_1[0xb],&local_70,&local_610,&local_614,0x5a0);
      if (CONCAT44(auStack_6c[0],local_70) != lVar19) {
        local_1180 = 0x800000000000000;
        local_1178 = 0;
        (**(code **)(*param_1 + 0x10))(param_1,&local_1180);
      }
      if ((int)local_be0 != 0) {
        local_1180 = 0x800000000000000;
        local_1178 = 0;
        (**(code **)(*param_1 + 0x10))(param_1,&local_1180);
      }
      iVar17 = 5;
      goto LAB_00219f80;
    }
    uVar21 = (ulong)uVar15;
    if ((int)uVar15 < (int)(*(ushort *)(param_1 + 0xc) - 1)) {
      lVar19 = param_1[10];
      if (lVar19 != 0) goto LAB_00219fec;
LAB_0021a0b8:
      local_be0 = (undefined **)0x800000000000000;
      local_bd8 = (undefined **)((ulong)local_bd8 & 0xffffffff00000000);
      (**(code **)(*param_1 + 0x10))(param_1,&local_be0);
      if (*(long *)(param_1[10] + uVar21 * 0x30 + 0x10) == 0) goto LAB_0021a0f0;
LAB_0021a004:
      uVar22 = FUN_0021dde0(param_1);
    }
    else {
      local_be0 = (undefined **)0x800000000000000;
      local_bd8 = (undefined **)((ulong)local_bd8 & 0xffffffff00000000);
      (**(code **)(*param_1 + 0x10))(param_1,&local_be0);
      lVar19 = param_1[10];
      if (lVar19 == 0) goto LAB_0021a0b8;
LAB_00219fec:
      if (*(long *)(lVar19 + uVar21 * 0x30 + 0x10) != 0) goto LAB_0021a004;
LAB_0021a0f0:
      local_be0 = (undefined **)0x800000000000000;
      local_bd8 = (undefined **)((ulong)local_bd8 & 0xffffffff00000000);
      (**(code **)(*param_1 + 0x10))(param_1,&local_be0);
      uVar22 = FUN_0021dde0(param_1,*(undefined8 *)(param_1[10] + uVar21 * 0x30 + 0x10));
    }
    if ((uVar22 & 1) != 0) {
      plVar20 = (long *)FUN_002aaa64(param_1);
      uVar22 = (**(code **)(*plVar20 + 0x68))
                         (plVar20,*(undefined8 *)(param_1[10] + uVar21 * 0x30 + 0x10));
      if ((uVar22 & 1) == 0) {
        return;
      }
    }
    if (1 < *(ushort *)(param_1 + 0xc)) {
      lVar38 = 0;
      lVar19 = 0;
      do {
        uVar22 = (**(code **)(*param_1 + 0x68))(param_1,param_1[10] + lVar38);
        if ((((uVar22 & 1) != 0) && (lVar30 = param_1[10] + lVar38, *(long *)(lVar30 + 0x10) != 0))
           && (uVar31 = (uint)*(ushort *)(lVar30 + 0x20),
              *(ushort *)(lVar30 + 0x24) != 0 && uVar31 <= *(ushort *)(lVar30 + 0x24))) {
          uVar34 = 0;
          if (uVar31 != 0) {
            uVar34 = *(ushort *)(lVar30 + 0x22) / uVar31;
          }
          if (*(char *)(*(long *)(lVar30 + 0x28) +
                        (ulong)((uint)*(ushort *)(lVar30 + 0x22) - uVar34 * uVar31) * 0x5ac + 0x5a9)
              == '\0') {
            return;
          }
        }
        lVar19 = lVar19 + 1;
        lVar38 = lVar38 + 0x30;
      } while (lVar19 < (long)((ulong)*(ushort *)(param_1 + 0xc) - 1));
    }
    FUN_002b0940(&local_70,param_1[0xb],local_620,&local_610,&local_614,0x5a0);
    if (local_70 != 0) {
      local_be0 = (undefined **)0x800000000000000;
      local_bd8 = (undefined **)((ulong)local_bd8 & 0xffffffff00000000);
      (**(code **)(*param_1 + 0x10))(param_1,&local_be0);
      iVar17 = 1;
      goto LAB_00219f80;
    }
    local_be0 = &PTR_LAB_048402e8;
    local_bd8 = &PTR_LAB_04840338;
    memset(local_bc4,0,4);
    FUN_0021edd4(&local_1180,&local_bd8,&local_610,0x5a0);
    FUN_00229780(&local_70,&local_1180);
    iVar18 = local_bc8;
    if (local_70 != 0) {
      local_1178 = 0;
      local_1180 = 0x800000000000000;
      (**(code **)(*param_1 + 0x10))(param_1,&local_1180);
      iVar17 = 1;
      goto switchD_0021a944_caseD_0;
    }
    switch(local_bd0) {
    case 0:
      lVar19 = param_1[10];
      bVar7 = true;
      goto LAB_0021a3d0;
    case 2:
      lVar19 = param_1[10];
      piVar29 = (int *)(lVar19 + uVar21 * 0x30 + 0x1c);
      if (*piVar29 != 2) {
        *piVar29 = 2;
      }
      lVar38 = lVar19 + uVar21 * 0x30;
      pcVar25 = (char *)(lVar38 + 0x26);
      *(undefined1 *)(lVar38 + 4) = 1;
      if (*pcVar25 == '\0') {
        lVar19 = lVar19 + uVar21 * 0x30;
        uVar3 = *(ushort *)(lVar19 + 0x20);
        iVar18 = (uint)*(ushort *)(lVar19 + 0x22) + (uint)*(ushort *)(lVar19 + 0x24) + (uint)uVar3 +
                 -1;
        iVar17 = 0;
        if (uVar3 != 0) {
          iVar17 = iVar18 / (int)(uint)uVar3;
        }
        *(ushort *)(*(long *)(lVar19 + 0x28) + (ulong)(iVar18 - iVar17 * (uint)uVar3) * 0x5ac) =
             (short)(local_bcc + 0xfffd) + ((ushort)((local_bcc + 0xfffd) / 0x7fff) & 6);
        *pcVar25 = '\x01';
      }
      break;
    case 3:
      iVar16 = FUN_002aaa3c(param_1);
      iVar17 = 5;
      if (iVar18 == iVar16) {
        lVar38 = param_1[10];
        lVar19 = lVar38 + uVar21 * 0x30;
        pcVar25 = (char *)(lVar19 + 0x26);
        *(undefined1 *)(lVar19 + 3) = 1;
        if (*pcVar25 == '\0') {
          lVar38 = lVar38 + uVar21 * 0x30;
          uVar3 = *(ushort *)(lVar38 + 0x20);
          iVar16 = (uint)*(ushort *)(lVar38 + 0x22) + (uint)*(ushort *)(lVar38 + 0x24) + (uint)uVar3
                   + -1;
          iVar18 = 0;
          if (uVar3 != 0) {
            iVar18 = iVar16 / (int)(uint)uVar3;
          }
          iVar17 = 5;
          *(ushort *)(*(long *)(lVar38 + 0x28) + (ulong)(iVar16 - iVar18 * (uint)uVar3) * 0x5ac) =
               (short)(local_bcc + 0xfffd) + ((ushort)((local_bcc + 0xfffd) / 0x7fff) & 6);
          *pcVar25 = '\x01';
        }
      }
      goto switchD_0021a944_caseD_0;
    case 4:
      lVar19 = param_1[10];
      piVar29 = (int *)(lVar19 + uVar21 * 0x30 + 0x1c);
      bVar7 = false;
      if (*piVar29 != 0) {
        bVar7 = false;
        *piVar29 = 0;
      }
LAB_0021a3d0:
      cVar2 = *(char *)(lVar19 + uVar21 * 0x30 + 0x26);
      if (cVar2 == '\0') {
        uVar3 = *(ushort *)(lVar19 + uVar21 * 0x30 + 0x24);
        uVar31 = (uint)uVar3;
        if (uVar3 != 0) {
LAB_0021a45c:
          lVar38 = lVar19 + uVar21 * 0x30;
          uVar3 = *(ushort *)(lVar38 + 0x20);
          uVar34 = 0;
          uVar32 = (uint)*(ushort *)(lVar38 + 0x22);
          if (uVar3 != 0) {
            uVar34 = uVar32 / uVar3;
          }
          uVar24 = (uint)uVar3;
          if (*(ushort *)(*(long *)(lVar38 + 0x28) + (ulong)(uVar32 - uVar34 * uVar24) * 0x5ac) !=
              local_bce) {
            uVar34 = 1;
            do {
              uVar27 = uVar34;
              if (uVar31 == uVar27) break;
              uVar28 = 0;
              if (uVar24 != 0) {
                uVar28 = (uVar32 + uVar27) / uVar24;
              }
              uVar34 = uVar27 + 1;
            } while (*(ushort *)
                      (*(long *)(lVar38 + 0x28) +
                      (ulong)((uVar32 + uVar27) - uVar28 * uVar24) * 0x5ac) != local_bce);
            if ((local_bce != local_bcc && uVar31 <= uVar27) || (uVar31 == 0))
            goto joined_r0x0021a5b8;
          }
          lVar38 = lVar19 + uVar21 * 0x30;
          uVar34 = 0;
          uVar32 = 0;
          uVar3 = *(ushort *)(lVar38 + 0x20);
          do {
            uVar24 = *(ushort *)(lVar38 + 0x22) + uVar34;
            uVar27 = 0;
            if (uVar3 != 0) {
              uVar27 = uVar24 / uVar3;
            }
            uVar24 = uVar24 - uVar27 * uVar3;
            if (local_bce == *(ushort *)(*(long *)(lVar38 + 0x28) + (ulong)uVar24 * 0x5ac)) break;
            uVar34 = uVar34 + 1;
            uVar24 = (uint)*(byte *)(*(long *)(lVar38 + 0x28) + (ulong)uVar24 * 0x5ac + 0x5a9);
            uVar32 = uVar32 + uVar24;
          } while (uVar24 != 0 && uVar34 < uVar31);
          if (0 < (int)uVar32) {
            lVar38 = lVar19 + uVar21 * 0x30;
            uVar34 = (uint)*(ushort *)(lVar38 + 0x22);
            lVar30 = *(long *)(lVar38 + 0x28);
            uVar3 = *(ushort *)(lVar38 + 0x20);
            uVar24 = (uint)uVar3;
            if (uVar32 != 1) {
              uVar27 = uVar32 & 0xfffffffe;
              do {
                uVar28 = (uVar34 & 0xffff) + 1;
                uVar33 = 0;
                if (uVar3 != 0) {
                  uVar33 = uVar28 / uVar3;
                }
                *(undefined1 *)(lVar30 + (ulong)(uVar34 & 0xffff) * 0x5ac + 0x5a8) = 0;
                uVar28 = uVar28 - uVar33 * uVar24;
                uVar34 = 0;
                if (uVar28 + 1 != uVar24) {
                  uVar34 = uVar28 + 1;
                }
                uVar27 = uVar27 - 2;
                *(undefined1 *)(lVar30 + (ulong)uVar28 * 0x5ac + 0x5a8) = 0;
              } while (uVar27 != 0);
            }
            uVar12 = (ushort)uVar34;
            if ((uVar32 & 1) != 0) {
              *(undefined1 *)(lVar30 + (ulong)(uVar34 & 0xffff) * 0x5ac + 0x5a8) = 0;
              uVar34 = (uVar34 & 0xffff) + 1;
              sVar5 = 0;
              if (uVar24 != 0) {
                sVar5 = (short)(uVar34 / uVar24);
              }
              uVar12 = (short)uVar34 - sVar5 * uVar3;
            }
            uVar31 = uVar31 - uVar32;
            *(ushort *)(lVar38 + 0x22) = uVar12;
            *(short *)(lVar19 + uVar21 * 0x30 + 0x24) = (short)uVar31;
          }
        }
joined_r0x0021a5b8:
        if (bVar7) {
          if (cVar2 != '\0') {
            lVar19 = lVar19 + uVar21 * 0x30;
            uVar3 = *(ushort *)(lVar19 + 0x20);
            iVar18 = (uint)*(ushort *)(lVar19 + 0x22) + (uVar31 & 0xffff) + (uint)uVar3 + -1;
            iVar17 = 0;
            if (uVar3 != 0) {
              iVar17 = iVar18 / (int)(uint)uVar3;
            }
            uVar36 = *(ushort *)
                      (*(long *)(lVar19 + 0x28) + (ulong)(iVar18 - iVar17 * (uint)uVar3) * 0x5ac);
            sVar5 = uVar36 - local_bcc;
            uVar3 = local_bcc;
            uVar12 = uVar36;
            sVar8 = -sVar5;
            if (-1 < sVar5) {
              uVar3 = uVar36;
              uVar12 = local_bcc;
              sVar8 = sVar5;
            }
            if (-1 < sVar8) {
              uVar12 = uVar3;
            }
            if (uVar12 == uVar36) {
              local_1178 = 0;
              local_1180 = 0x800000000000000;
              (**(code **)(*param_1 + 0x10))(param_1,&local_1180);
            }
          }
          memcpy(&local_1180,auStack_5fd,(ulong)local_bca);
          uVar36 = local_bca;
          uVar12 = local_bcc;
          uVar22 = (ulong)local_bca;
          lVar19 = param_1[10] + uVar21 * 0x30;
          uVar31 = (uint)*(ushort *)(lVar19 + 0x24) + (uint)*(ushort *)(lVar19 + 0x22);
          uVar3 = *(ushort *)(lVar19 + 0x20);
          uVar34 = 0;
          if (uVar3 != 0) {
            uVar34 = uVar31 / uVar3;
          }
          uVar31 = uVar31 - uVar34 * uVar3;
          puVar35 = (undefined2 *)(*(long *)(lVar19 + 0x28) + (ulong)uVar31 * 0x5ac);
          *puVar35 = 0;
          memset(puVar35 + 1,0,0x5a0);
          *(undefined4 *)(puVar35 + 0x2d2) = 0;
          puVar35[0x2d4] = 0;
          *(undefined1 *)(puVar35 + 0x2d5) = 0;
          memcpy((void *)(*(long *)(lVar19 + 0x28) + (ulong)uVar31 * 0x5ac + 2),&local_1180,uVar22);
          lVar38 = *(long *)(lVar19 + 0x28);
          puVar26 = (ushort *)(lVar38 + (ulong)uVar31 * 0x5ac);
          *puVar26 = uVar12;
          *(uint *)(puVar26 + 0x2d2) = (uint)uVar36;
          *(undefined1 *)(puVar26 + 0x2d4) = 1;
          *(undefined1 *)(lVar19 + 0x26) = 1;
          *(short *)(lVar19 + 0x24) = *(short *)(lVar19 + 0x24) + 1;
          uVar3 = *(ushort *)(param_1[10] + uVar21 * 0x30 + 0x24);
          if (uVar3 == 0) {
LAB_0021a7a0:
            iVar17 = 5;
            *(undefined2 *)(lVar38 + (ulong)uVar31 * 0x5ac + 0x5a9) = 0x101;
            goto switchD_0021a944_caseD_0;
          }
          lVar19 = param_1[10] + uVar21 * 0x30;
          uVar12 = *(ushort *)(lVar19 + 0x20);
          lVar30 = *(long *)(lVar19 + 0x28);
          uVar34 = 0;
          uVar32 = (uint)*(ushort *)(lVar19 + 0x22);
          if (uVar12 != 0) {
            uVar34 = uVar32 / uVar12;
          }
          uVar27 = (uint)uVar12;
          uVar24 = (uint)uVar3;
          uVar28 = (uint)uVar12;
          if (*(ushort *)(lVar30 + (ulong)(uVar32 - uVar34 * uVar27) * 0x5ac) != local_bce) {
            uVar34 = 1;
            do {
              uVar33 = uVar34;
              if (uVar3 == uVar33) break;
              uVar6 = 0;
              if (uVar27 != 0) {
                uVar6 = (uVar32 + uVar33) / uVar28;
              }
              uVar34 = uVar33 + 1;
            } while (*(ushort *)(lVar30 + (ulong)((uVar32 + uVar33) - uVar6 * uVar28) * 0x5ac) !=
                     local_bce);
            if (uVar24 <= uVar33) goto LAB_0021a7a0;
          }
          if (*(int *)((long)param_1 + 0x6c) != 2) {
            *(undefined1 *)(lVar38 + (ulong)uVar31 * 0x5ac + 0x5a9) = 1;
          }
          if (uVar24 == 1) {
            uVar31 = 0;
          }
          else {
            uVar31 = 0;
            do {
              uVar34 = uVar32 + uVar31;
              uVar31 = uVar31 + 2;
              uVar33 = 0;
              if (uVar27 != 0) {
                uVar33 = uVar34 / uVar27;
              }
              *(undefined1 *)(lVar30 + (ulong)(uVar34 - uVar33 * uVar28) * 0x5ac + 0x5aa) = 0;
              uVar33 = 0;
              if (uVar28 != 0) {
                uVar33 = (uVar34 + 1) / uVar28;
              }
              *(undefined1 *)(lVar30 + (ulong)((uVar34 + 1) - uVar33 * uVar28) * 0x5ac + 0x5aa) = 0;
            } while ((uVar24 & 0xfffe) != uVar31);
          }
          if ((uVar3 & 1) != 0) {
            uVar34 = 0;
            if (uVar28 != 0) {
              uVar34 = (uVar31 + uVar32) / uVar28;
            }
            *(undefined1 *)(lVar30 + (ulong)((uVar31 + uVar32) - uVar34 * uVar28) * 0x5ac + 0x5aa) =
                 0;
          }
        }
        break;
      }
      lVar38 = lVar19 + uVar21 * 0x30;
      uVar3 = *(ushort *)(lVar38 + 0x24);
      uVar31 = (uint)uVar3;
      uVar12 = *(ushort *)(lVar38 + 0x20);
      iVar18 = (uint)*(ushort *)(lVar38 + 0x22) + (uint)uVar3 + (uint)uVar12 + -1;
      iVar17 = 0;
      if (uVar12 != 0) {
        iVar17 = iVar18 / (int)(uint)uVar12;
      }
      uVar4 = *(ushort *)
               (*(long *)(lVar38 + 0x28) + (ulong)(iVar18 - iVar17 * (uint)uVar12) * 0x5ac);
      sVar5 = uVar4 - local_bcc;
      uVar12 = local_bcc;
      uVar36 = uVar4;
      sVar8 = -sVar5;
      if (-1 < sVar5) {
        uVar12 = uVar4;
        uVar36 = local_bcc;
        sVar8 = sVar5;
      }
      if (-1 < sVar8) {
        uVar36 = uVar12;
      }
      iVar17 = 5;
      if (uVar36 != uVar4) {
        if (uVar3 != 0) goto LAB_0021a45c;
        goto joined_r0x0021a5b8;
      }
      goto switchD_0021a944_caseD_0;
    }
    iVar18 = local_614;
    uVar3 = local_bca;
    if ((*(int *)((long)param_1 + 0x6c) != 2) &&
       ((iVar17 = 5, *(int *)((long)param_1 + 0x6c) != 1 || ((local_bd0 != 8 && (local_bd0 != 1)))))
       ) goto switchD_0021a944_caseD_0;
    iVar17 = (*(code *)local_bd8[4])();
    if (iVar18 != iVar17 + (uint)uVar3) {
      local_1178 = 0;
      local_1180 = 0x800000000000000;
      (**(code **)(*param_1 + 0x10))(param_1,&local_1180);
    }
    iVar17 = local_bc8;
    if (local_bd0 - 5 < 3) {
      if (local_bc8 == 0) {
        uVar15 = 0xffffffff;
        goto LAB_0021a920;
      }
      iVar18 = FUN_002aaa3c(param_1);
      if (iVar17 != iVar18) {
        uVar15 = FUN_0021e380(param_1,local_bc8);
        if (0xff < (int)uVar15) {
          local_1178 = 0;
          local_1180 = 0x800000000000000;
          (**(code **)(*param_1 + 0x10))(param_1,&local_1180);
        }
        goto LAB_0021a920;
      }
LAB_0021a8b4:
      local_1178 = 0;
      local_1180 = 0x800000000000000;
      (**(code **)(*param_1 + 0x10))(param_1,&local_1180);
      iVar17 = 5;
      goto switchD_0021a944_caseD_0;
    }
LAB_0021a920:
    uVar3 = local_bcc;
    iVar17 = 0;
    switch(local_bd0) {
    case 0:
    case 2:
      break;
    case 1:
      if (local_bce != local_bcc) {
        local_1178 = 0;
        local_1180 = 0x800000000000000;
        (**(code **)(*param_1 + 0x10))(param_1,&local_1180);
      }
      *(undefined1 *)(param_1[10] + uVar21 * 0x30 + 2) = 1;
      FUN_0021e530(&local_1180,param_1);
      iVar17 = 0;
      *(int *)(param_1[10] + uVar21 * 0x30 + 8) = (int)local_1180;
      *(undefined1 *)((long)param_1 + 0x75) = 1;
      break;
    default:
      local_1178 = 0;
      local_1180 = 0x800000000000000;
      (**(code **)(*param_1 + 0x10))(param_1,&local_1180);
LAB_0021aba0:
      iVar17 = 0;
      break;
    case 4:
      if (local_bce != local_bcc) {
        local_1178 = 0;
        local_1180 = 0x800000000000000;
        (**(code **)(*param_1 + 0x10))(param_1,&local_1180);
      }
      piVar29 = (int *)(param_1[10] + uVar21 * 0x30 + 0x1c);
      if (*piVar29 == 0) goto LAB_0021aba0;
      iVar17 = 0;
      *piVar29 = 0;
      break;
    case 5:
      *(undefined4 *)(param_1[10] + uVar21 * 0x30 + 8) = local_bc4[0];
      if ((int)uVar15 < 0) {
LAB_0021ac3c:
        iVar17 = 5;
      }
      else {
        lVar19 = param_1[10];
        uVar21 = (ulong)uVar15;
        lVar38 = lVar19 + (ulong)uVar15 * 0x30;
        uVar12 = *(ushort *)(lVar38 + 0x24);
        if (uVar12 == 0) {
LAB_0021aac8:
          if (*(char *)(lVar19 + uVar21 * 0x30 + 0x26) == '\0') goto LAB_0021ac3c;
          uVar22 = FUN_00219610(lVar38,local_bcc);
          iVar17 = 5;
          if ((uVar22 & 1) == 0) {
            uVar22 = FUN_00219738(lVar38,uVar3);
            if ((uVar22 & 1) == 0) goto LAB_0021a8b4;
            memcpy(&local_1180,auStack_5fd,(ulong)local_bca);
            uVar36 = local_bcc;
            lVar38 = param_1[10];
            lVar19 = lVar38 + uVar21 * 0x30;
            uVar3 = *(ushort *)(lVar19 + 0x20);
            uVar12 = *(ushort *)(lVar19 + 0x24);
            if (uVar3 <= uVar12) {
              lVar30 = lVar38 + uVar21 * 0x30;
              uVar4 = *(ushort *)(lVar30 + 0x22);
              *(undefined1 *)(*(long *)(lVar30 + 0x28) + (ulong)uVar4 * 0x5ac + 0x5a8) = 0;
              uVar15 = uVar4 + 1;
              *(ushort *)(lVar19 + 0x24) = uVar12 - 1;
              sVar5 = 0;
              if (uVar3 != 0) {
                sVar5 = (short)(uVar15 / uVar3);
              }
              *(ushort *)(lVar30 + 0x22) = (short)uVar15 - sVar5 * uVar3;
            }
            uVar22 = FUN_00219738(lVar19,local_bcc);
            if ((uVar22 & 1) == 0) {
              local_1184 = 0;
              local_118c = 0x800000000000000;
              (**(code **)(*param_1 + 0x10))(param_1,&local_118c);
              lVar38 = param_1[10];
              uVar36 = local_bcc;
            }
            FUN_00219680(lVar38 + uVar21 * 0x30,&local_1180,local_bca,uVar36);
            goto LAB_0021aba0;
          }
        }
        else {
          lVar30 = lVar19 + uVar21 * 0x30;
          uVar36 = *(ushort *)(lVar30 + 0x20);
          uVar15 = 0;
          uVar31 = (uint)*(ushort *)(lVar30 + 0x22);
          if (uVar36 != 0) {
            uVar15 = uVar31 / uVar36;
          }
          uVar34 = (uint)uVar36;
          iVar17 = 5;
          if (*(ushort *)(*(long *)(lVar30 + 0x28) + (ulong)(uVar31 - uVar15 * uVar34) * 0x5ac) !=
              local_bcc) {
            uVar15 = 1;
            do {
              uVar32 = uVar15;
              if (uVar12 == uVar32) break;
              uVar24 = 0;
              if (uVar34 != 0) {
                uVar24 = (uVar31 + uVar32) / uVar34;
              }
              uVar15 = uVar32 + 1;
            } while (*(ushort *)
                      (*(long *)(lVar30 + 0x28) +
                      (ulong)((uVar31 + uVar32) - uVar24 * uVar34) * 0x5ac) != local_bcc);
            iVar17 = 5;
            if (uVar12 <= uVar32) goto LAB_0021aac8;
          }
        }
      }
      break;
    case 6:
      *(undefined1 *)((long)param_1 + 0x74) = 1;
      lVar19 = param_1[10] + uVar21 * 0x30;
      *(undefined1 *)(lVar19 + 2) = 1;
      goto LAB_0021ac24;
    case 7:
      *(undefined4 *)(param_1[10] + uVar21 * 0x30 + 8) = local_bc4[0];
      FUN_0021e530(&local_1180,param_1);
      if ((int)local_1180 == *(int *)(param_1[10] + uVar21 * 0x30 + 8)) {
        iVar17 = 0;
        *(undefined1 *)(param_1[10] + uVar21 * 0x30 + 2) = 1;
      }
      else {
        iVar17 = 0;
      }
      break;
    case 8:
      lVar19 = param_1[10] + uVar21 * 0x30;
LAB_0021ac24:
      iVar17 = 0;
      *(undefined4 *)(lVar19 + 8) = local_bc4[0];
    }
switchD_0021a944_caseD_0:
LAB_00219f80:
    if (iVar17 == 1) {
      return;
    }
  } while( true );
}

