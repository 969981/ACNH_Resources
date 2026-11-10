
/* WARNING: Removing unreachable block (ram,0x00170794) */

ulong FUN_0016f5e4(long param_1,void *param_2,ulong param_3)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  ulong *puVar4;
  long lVar5;
  void *pvVar6;
  size_t __n;
  byte bVar7;
  bool bVar8;
  bool bVar9;
  undefined2 uVar10;
  ushort uVar11;
  int iVar12;
  int iVar13;
  undefined8 uVar14;
  ulong uVar15;
  int *piVar16;
  char *pcVar17;
  uint uVar18;
  undefined4 uVar19;
  ulong uVar20;
  long *plVar21;
  long lVar22;
  long lVar23;
  ulong uVar24;
  ulong uVar25;
  uint *puVar26;
  long lVar27;
  long *plVar28;
  int *piVar29;
  ulong uVar30;
  void *pvVar31;
  void *pvVar32;
  long local_98;
  undefined8 local_90;
  undefined8 local_88;
  long local_80;
  undefined8 uStack_78;
  uint local_6c [3];
  
  iVar12 = FUN_0016cf28();
  if (iVar12 < -900) {
LAB_00170eb8:
    param_3 = (ulong)iVar12;
switchD_0016f694_caseD_f:
    return param_3;
  }
  iVar12 = FUN_00170ee0(param_1);
  if (iVar12 == 0) {
    return param_3;
  }
  lVar1 = param_1 + 0x890;
  lVar2 = param_1 + 0x230;
  pvVar6 = (void *)((long)param_2 + param_3);
  plVar3 = (long *)(param_1 + 0x260);
  puVar4 = (ulong *)(param_1 + 0x1a0);
  lVar5 = param_1 + 0x208;
  local_98 = 0;
  local_90 = 0;
  pvVar32 = param_2;
LAB_0016f67c:
  pvVar31 = pvVar32;
  switch(*(undefined4 *)(param_1 + 0x280)) {
  case 0:
    uVar20 = *(ulong *)(param_1 + 0x270);
    __n = uVar20;
    if (param_3 <= uVar20) {
      __n = param_3;
    }
    iVar12 = memcmp("PRI * HTTP/2.0\r\n\r\nSM\r\n\r\n" + (0x18 - uVar20),pvVar32,__n);
    if (iVar12 != 0) {
      return 0xfffffffffffffc79;
    }
    pvVar31 = (void *)((long)pvVar32 + __n);
    *(ulong *)(param_1 + 0x270) = uVar20 - __n;
    if (uVar20 <= param_3) {
      FUN_0016c430(param_1);
      uVar19 = 1;
LAB_0016f7f8:
      bVar9 = false;
      goto LAB_00170838;
    }
    break;
  case 1:
    uVar25 = *(long *)(param_1 + 0x228) - *(long *)(param_1 + 0x220);
    uVar20 = (long)pvVar6 - (long)pvVar32;
    if (uVar25 <= (ulong)((long)pvVar6 - (long)pvVar32)) {
      uVar20 = uVar25;
    }
    lVar22 = FUN_00168980(*(long *)(param_1 + 0x220),pvVar32,uVar20);
    pvVar32 = (void *)((long)pvVar32 + uVar20);
    *(long *)(param_1 + 0x220) = lVar22;
    if (*(long *)(param_1 + 0x228) != lVar22) goto LAB_00170d64;
    if ((*(char *)(*(long *)(param_1 + 0x218) + 3) == '\x04') &&
       ((*(byte *)(*(long *)(param_1 + 0x218) + 4) & 1) == 0)) {
      *(undefined4 *)(param_1 + 0x280) = 2;
      lVar23 = lVar22;
      goto LAB_0016f868;
    }
    iVar12 = FUN_00170f38(param_1,0xfffffde8,
                          "Remote peer returned unexpected data while we expected SETTINGS frame.  Perhaps, peer does not support HTTP/2 properly."
                         );
    if (-0x385 < iVar12) {
      uVar19 = *(undefined4 *)(param_1 + 0x93c);
      pcVar17 = "SETTINGS expected";
      goto LAB_00170d78;
    }
    goto LAB_00170eb8;
  case 2:
    lVar22 = *(long *)(param_1 + 0x220);
    lVar23 = *(long *)(param_1 + 0x228);
LAB_0016f868:
    uVar20 = (long)pvVar6 - (long)pvVar32;
    if ((ulong)(lVar23 - lVar22) <= (ulong)((long)pvVar6 - (long)pvVar32)) {
      uVar20 = lVar23 - lVar22;
    }
    lVar23 = FUN_00168980(lVar22,pvVar32,uVar20);
    pvVar32 = (void *)((long)pvVar32 + uVar20);
    *(long *)(param_1 + 0x220) = lVar23;
    if (*(long *)(param_1 + 0x228) != lVar23) {
LAB_00170d64:
      return (long)pvVar32 - (long)param_2;
    }
    FUN_00167540(puVar4,*(undefined8 *)(param_1 + 0x218));
    uVar20 = *(ulong *)(param_1 + 0x1a0);
    *(ulong *)(param_1 + 0x270) = uVar20;
    if (*(uint *)(param_1 + 0x990) < uVar20) {
      uVar19 = *(undefined4 *)(param_1 + 0x93c);
      pcVar17 = "too large frame size";
      uVar14 = 6;
      goto LAB_00170de0;
    }
    bVar7 = *(byte *)(param_1 + 0x1ac);
    switch(bVar7) {
    case 0:
      *(byte *)(param_1 + 0x1ad) = *(byte *)(param_1 + 0x1ad) & 9;
      iVar12 = FUN_001710b4(param_1);
      if (*(int *)(param_1 + 0x280) == 0xf) {
        return param_3;
      }
      if (iVar12 == -0x68) goto LAB_00170384;
      if (-0x385 < iVar12) {
        if ((*(byte *)(param_1 + 0x1ad) >> 3 & 1) == 0) {
          bVar9 = true;
          uVar19 = 0xd;
        }
        else {
          if (*puVar4 == 0) {
            uVar19 = *(undefined4 *)(param_1 + 0x93c);
            pcVar17 = "DATA: insufficient padding space";
            goto LAB_00170d78;
          }
          FUN_0016b29c(lVar5);
          bVar9 = true;
          *(long *)(param_1 + 0x228) = *(long *)(param_1 + 0x228) + 1;
          uVar19 = 0xc;
        }
LAB_00170638:
        *(undefined4 *)(param_1 + 0x280) = uVar19;
LAB_0017063c:
        if ((*(code **)(param_1 + 0x858) != (code *)0x0) &&
           (iVar12 = (**(code **)(param_1 + 0x858))(param_1,puVar4,*(undefined8 *)(param_1 + 0x8b8))
           , iVar12 != 0)) {
          return 0xfffffffffffffc7a;
        }
        goto joined_r0x0016feb8;
      }
      goto LAB_00170eb8;
    case 1:
      bVar7 = *(byte *)(param_1 + 0x1ad);
      *(byte *)(param_1 + 0x1ad) = bVar7 & 0x2d;
      if ((bVar7 >> 3 & 1) == 0) {
        uVar20 = FUN_001677c4();
        if (uVar20 == 0) {
          if ((*(code **)(param_1 + 0x858) != (code *)0x0) &&
             (iVar12 = (**(code **)(param_1 + 0x858))
                                 (param_1,puVar4,*(undefined8 *)(param_1 + 0x8b8)), iVar12 != 0)) {
            return 0xfffffffffffffc7a;
          }
          goto LAB_00170c10;
        }
        if (*(ulong *)(param_1 + 0x270) < uVar20) break;
        *(undefined4 *)(param_1 + 0x280) = 3;
        FUN_0016b29c(lVar5);
        bVar9 = false;
        lVar23 = *(long *)(param_1 + 0x228) + uVar20;
LAB_001704dc:
        *(long *)(param_1 + 0x228) = lVar23;
LAB_001704e0:
        if ((*(uint *)(param_1 + 0x280) < 0x10) &&
           ((1 << (ulong)(*(uint *)(param_1 + 0x280) & 0x1f) & 0xc0e0U) != 0))
        goto joined_r0x0016feb8;
        goto LAB_0017063c;
      }
      if (uVar20 != 0) {
LAB_0017061c:
        FUN_0016b29c(lVar5);
        bVar9 = false;
        *(long *)(param_1 + 0x228) = *(long *)(param_1 + 0x228) + 1;
        uVar19 = 3;
        goto LAB_00170638;
      }
      uVar19 = *(undefined4 *)(param_1 + 0x93c);
      pcVar17 = "HEADERS: insufficient padding space";
      goto LAB_00170d78;
    case 2:
      *(undefined1 *)(param_1 + 0x1ad) = 0;
      if (uVar20 == 5) {
        *(undefined4 *)(param_1 + 0x280) = 3;
        FUN_0016b29c(lVar5);
        bVar9 = false;
        lVar23 = *(long *)(param_1 + 0x228) + 5;
        goto LAB_001704dc;
      }
      break;
    case 3:
    case 8:
      *(undefined1 *)(param_1 + 0x1ad) = 0;
      if (uVar20 == 4) {
LAB_0016f8e8:
        *(undefined4 *)(param_1 + 0x280) = 3;
        FUN_0016b29c(lVar5);
        bVar9 = false;
        lVar23 = *(long *)(param_1 + 0x228) + 4;
        goto LAB_001704dc;
      }
      break;
    case 4:
      bVar7 = *(byte *)(param_1 + 0x1ad);
      *(byte *)(param_1 + 0x1ad) = bVar7 & 1;
      if (uVar20 % 6 == 0) {
        if ((bVar7 & 1) == 0) {
          *(undefined4 *)(param_1 + 0x280) = 8;
          if (uVar20 != 0) {
            lVar23 = uVar20 / 6 + 1;
            *(long *)(param_1 + 0x268) = lVar23;
            lVar23 = FUN_001689e8(lVar1,lVar23 * 8);
            *(long *)(param_1 + 0x200) = lVar23;
            if (lVar23 == 0) {
              return 0xfffffffffffffc7b;
            }
            *(undefined8 *)(lVar23 + *(long *)(param_1 + 0x268) * 8 + -8) = 0xffffffff00000001;
            FUN_0016b29c(lVar5);
            bVar9 = false;
            lVar23 = *(long *)(param_1 + 0x228) + 6;
            goto LAB_001704dc;
          }
        }
        else {
          if (uVar20 != 0) break;
          *(undefined4 *)(param_1 + 0x280) = 8;
        }
        FUN_0016b29c(lVar5);
        bVar9 = true;
        goto LAB_001704e0;
      }
      break;
    case 5:
      bVar7 = *(byte *)(param_1 + 0x1ad);
      *(byte *)(param_1 + 0x1ad) = bVar7 & 0xc;
      if ((bVar7 >> 3 & 1) == 0) {
        if (3 < uVar20) goto LAB_0016f8e8;
        break;
      }
      if (uVar20 != 0) goto LAB_0017061c;
      uVar19 = *(undefined4 *)(param_1 + 0x93c);
      pcVar17 = "PUSH_PROMISE: insufficient padding space";
      goto LAB_00170d78;
    case 6:
      *(byte *)(param_1 + 0x1ad) = *(byte *)(param_1 + 0x1ad) & 1;
      if (uVar20 == 8) {
LAB_001704c0:
        *(undefined4 *)(param_1 + 0x280) = 3;
        FUN_0016b29c(lVar5);
        bVar9 = false;
        lVar23 = *(long *)(param_1 + 0x228) + 8;
        goto LAB_001704dc;
      }
      break;
    case 7:
      *(undefined1 *)(param_1 + 0x1ad) = 0;
      if (7 < uVar20) goto LAB_001704c0;
      break;
    case 9:
      uVar19 = *(undefined4 *)(param_1 + 0x93c);
      pcVar17 = "CONTINUATION: unexpected";
LAB_00170d78:
      uVar14 = 1;
LAB_00170de0:
      iVar12 = FUN_0016bcd4(param_1,uVar19,uVar14,pcVar17);
      if (iVar12 < -900) {
        param_3 = (long)iVar12;
      }
      return param_3;
    default:
      uVar18 = (uint)bVar7;
      if ((*(byte *)(param_1 + 0x9ad + (ulong)(bVar7 >> 3)) >> (ulong)(uVar18 & 7) & 1) == 0) {
        if (uVar18 == 0xc) {
          if ((*(byte *)(param_1 + 0x9a4) >> 1 & 1) != 0) {
            *(long *)(param_1 + 0x1b0) = param_1 + 0x1e0;
            if (((*(char *)(param_1 + 0x9aa) == '\0') && (*(int *)(param_1 + 0x1a8) == 0)) &&
               (*(byte *)(param_1 + 0x1ad) < 0x10)) {
              *(undefined1 *)(param_1 + 0x1ad) = 0;
              if (uVar20 == 0) {
                bVar9 = true;
              }
              else {
                lVar23 = FUN_001689e8(lVar1);
                *(long *)(param_1 + 600) = lVar23;
                if (lVar23 == 0) {
                  return 0xfffffffffffffc7b;
                }
                FUN_0016b2ac(lVar2,lVar23,*(undefined8 *)(param_1 + 0x270));
                bVar9 = false;
              }
              uVar19 = 0x11;
              goto LAB_00170638;
            }
          }
        }
        else if ((uVar18 == 10) && ((*(byte *)(param_1 + 0x9a4) & 1) != 0)) {
          *(undefined1 *)(param_1 + 0x1ad) = 0;
          *(long *)(param_1 + 0x1b0) = param_1 + 0x1e0;
          if (*(char *)(param_1 + 0x9aa) == '\0') {
            if (uVar20 < 2) break;
            *(undefined4 *)(param_1 + 0x280) = 3;
            FUN_0016b29c(lVar5);
            bVar9 = true;
            lVar23 = *(long *)(param_1 + 0x228) + 2;
            goto LAB_001704dc;
          }
        }
      }
      else if (*(long *)(param_1 + 0x870) != 0) {
        bVar9 = true;
        uVar19 = 0x12;
        goto LAB_00170638;
      }
LAB_00170b04:
      *(undefined4 *)(param_1 + 0x280) = 6;
      goto LAB_0016f67c;
    }
LAB_00170bcc:
    uVar19 = 7;
    goto LAB_00170bd0;
  case 3:
    uVar25 = *(long *)(param_1 + 0x228) - *(long *)(param_1 + 0x220);
    uVar20 = (long)pvVar6 - (long)pvVar32;
    if (uVar25 <= (ulong)((long)pvVar6 - (long)pvVar32)) {
      uVar20 = uVar25;
    }
    lVar23 = FUN_00168980(*(long *)(param_1 + 0x220),pvVar32,uVar20);
    pvVar32 = (void *)((long)pvVar32 + uVar20);
    *(long *)(param_1 + 0x220) = lVar23;
    uVar20 = *(long *)(param_1 + 0x270) - uVar20;
    *(ulong *)(param_1 + 0x270) = uVar20;
    if (*(long *)(param_1 + 0x228) != lVar23) goto LAB_00170d64;
    pvVar31 = pvVar32;
    switch(*(undefined1 *)(param_1 + 0x1ac)) {
    case 1:
      if ((*(long *)(param_1 + 0x278) == 0) && ((*(byte *)(param_1 + 0x1ad) >> 3 & 1) != 0)) {
        uVar20 = FUN_001677c4();
        uVar25 = *(ulong *)(param_1 + 0x270);
        if (**(byte **)(param_1 + 0x218) <= uVar25) {
          lVar23 = (ulong)**(byte **)(param_1 + 0x218) + 1;
          *(long *)(param_1 + 0x278) = lVar23;
          if (lVar23 + uVar20 <= uVar25 + 1) {
            *(long *)(param_1 + 0x1b0) = lVar23;
            if (uVar20 != 0) {
              if (uVar20 <= uVar25) {
                *(undefined4 *)(param_1 + 0x280) = 3;
                FUN_0016b29c(lVar5);
                lVar23 = *(long *)(param_1 + 0x228) + uVar20;
                goto LAB_0017078c;
              }
              goto LAB_00170bcc;
            }
            FUN_0016b29c(lVar5);
            goto LAB_00170c10;
          }
        }
        uVar19 = *(undefined4 *)(param_1 + 0x93c);
        pcVar17 = "HEADERS: invalid padding";
        goto LAB_00170d78;
      }
LAB_00170c10:
      iVar12 = FUN_001711fc(param_1);
      if (-0x385 < iVar12) {
        if (*(int *)(param_1 + 0x280) == 0xf) {
          return param_3;
        }
        if (iVar12 == -0x67) goto LAB_00170314;
        if (iVar12 == -0x209) {
          uVar19 = *(undefined4 *)(param_1 + 0x1a8);
          goto LAB_00170c40;
        }
LAB_00170c58:
        uVar19 = 4;
        goto LAB_00170bd0;
      }
      goto LAB_00170eb8;
    case 2:
      iVar12 = FUN_00171300(param_1);
      break;
    case 3:
      iVar12 = FUN_00171334(param_1);
      break;
    default:
      goto switchD_0016f970_caseD_4;
    case 5:
      if ((*(long *)(param_1 + 0x278) == 0) && ((*(byte *)(param_1 + 0x1ad) >> 3 & 1) != 0)) {
        uVar25 = (ulong)**(byte **)(param_1 + 0x218);
        if (uVar25 <= uVar20) {
          *(ulong *)(param_1 + 0x278) = uVar25 + 1;
          if (uVar25 + 5 <= uVar20 + 1) {
            *(ulong *)(param_1 + 0x1b0) = uVar25 + 1;
            if (3 < uVar20) {
              *(undefined4 *)(param_1 + 0x280) = 3;
              FUN_0016b29c(lVar5);
              lVar23 = *(long *)(param_1 + 0x228) + 4;
              goto LAB_0017078c;
            }
            goto LAB_00170bcc;
          }
        }
        uVar19 = *(undefined4 *)(param_1 + 0x93c);
        pcVar17 = "PUSH_PROMISE: invalid padding";
        goto LAB_00170d78;
      }
      iVar12 = FUN_00171368(param_1);
      if (-0x385 < iVar12) {
        if (*(int *)(param_1 + 0x280) == 0xf) {
          return param_3;
        }
        if (iVar12 == -0x67) goto LAB_00170314;
        if (iVar12 != -0x209) goto LAB_00170c58;
        uVar19 = *(undefined4 *)(param_1 + 0x1c8);
LAB_00170c40:
        iVar12 = FUN_0016cb78(param_1,uVar19,2);
        if (-0x385 < iVar12) goto LAB_00170314;
      }
      goto LAB_00170eb8;
    case 6:
      iVar12 = FUN_001713c0(param_1);
      break;
    case 7:
      lVar23 = *puVar4 - 8;
      if (lVar23 != 0) {
        lVar22 = FUN_001689e8(lVar1,lVar23);
        *(long *)(param_1 + 600) = lVar22;
        if (lVar22 == 0) {
          return 0xfffffffffffffc7b;
        }
        FUN_0016b2ac(lVar2,lVar22,lVar23);
      }
      uVar19 = 9;
      goto LAB_00170bd0;
    case 8:
      iVar12 = FUN_001713f4(param_1);
      break;
    case 10:
      uVar11 = FUN_0016852c(*(undefined8 *)(param_1 + 0x218));
      if (*(ulong *)(param_1 + 0x270) < (ulong)uVar11) goto LAB_00170bcc;
      if (2 < *puVar4) {
        lVar23 = FUN_001689e8(lVar1,*puVar4 - 2);
        *(long *)(param_1 + 600) = lVar23;
        if (lVar23 == 0) {
          return 0xfffffffffffffc7b;
        }
        FUN_0016b2ac(lVar2,lVar23,*puVar4);
      }
      uVar19 = 0x10;
LAB_00170bd0:
      *(undefined4 *)(param_1 + 0x280) = uVar19;
      goto LAB_0016f67c;
    }
LAB_00170b70:
    if (iVar12 < -900) goto LAB_00170eb8;
LAB_00170b78:
    pvVar31 = pvVar32;
    if (*(int *)(param_1 + 0x280) == 0xf) {
      return param_3;
    }
    goto switchD_0016f970_caseD_4;
  case 4:
  case 5:
    uVar25 = *(ulong *)(param_1 + 0x270);
    uVar20 = (long)pvVar6 - (long)pvVar32;
    if (uVar25 <= (ulong)((long)pvVar6 - (long)pvVar32)) {
      uVar20 = uVar25;
    }
    uVar30 = FUN_0016774c(puVar4,*(undefined8 *)(param_1 + 0x278));
    uVar15 = uVar30 - (uVar25 - uVar20);
    uVar24 = uVar20 - uVar15;
    if (uVar20 < uVar15) {
      uVar24 = 0xffffffffffffffff;
    }
    if (uVar30 <= uVar25 - uVar20) {
      uVar24 = uVar20;
    }
    uVar25 = 0;
    if (uVar24 != 0xffffffffffffffff) {
      uVar25 = uVar24;
    }
    lVar23 = FUN_0016774c(puVar4,*(undefined8 *)(param_1 + 0x278));
    if ((*(byte *)(param_1 + 0x1ad) >> 2 & 1) == 0) {
      bVar9 = false;
    }
    else {
      bVar9 = *(long *)(param_1 + 0x270) - uVar25 == lVar23;
    }
    bVar8 = false;
    if (uVar25 == 0) {
      bVar8 = bVar9;
    }
    if (0 < (long)uVar25 || bVar8 != false) {
      iVar12 = *(int *)(param_1 + 0x280);
      lVar23 = FUN_001726f0(param_1,*(undefined4 *)(param_1 + 0x1a8));
      if ((lVar23 == 0) || ((*(byte *)(lVar23 + 0xe4) >> 1 & 1) != 0)) {
        lVar22 = 0;
      }
      else {
        lVar22 = 0;
        if (*(int *)(lVar23 + 0xdc) != 5) {
          lVar22 = lVar23;
        }
      }
      if (*(char *)(param_1 + 0x1ac) == '\x05') {
        lVar23 = FUN_001726f0(param_1,*(undefined4 *)(param_1 + 0x1c8));
        if ((lVar23 == 0) || ((*(byte *)(lVar23 + 0xe4) >> 1 & 1) != 0)) {
          lVar22 = 0;
          bVar8 = false;
        }
        else {
          bVar8 = false;
          lVar22 = 0;
          if (*(int *)(lVar23 + 0xdc) != 5) {
            lVar22 = lVar23;
          }
        }
      }
      else {
        bVar8 = false;
        if ((lVar22 != 0) && (*(char *)(param_1 + 0x1ac) == '\x01')) {
          bVar8 = *(char *)(param_1 + 0x9aa) != '\0' && *(int *)(param_1 + 0x1d8) == 3;
          if ((*(char *)(param_1 + 0x9aa) == '\0') && (*(int *)(param_1 + 0x1d8) == 3)) {
            bVar8 = (*(ushort *)(lVar22 + 0xe2) & 0x4000) == 0;
          }
        }
      }
      lVar23 = 0;
      local_88 = 0;
      local_80 = 0;
      uStack_78 = 0;
      do {
        local_6c[0] = 0;
        uVar24 = FUN_001694dc(param_1 + 0x6e8,&local_88,local_6c,pvVar31,uVar25,bVar9);
        if ((int)uVar24 < -900) goto LAB_00170e38;
        if ((long)uVar24 < 0) {
          if ((((*(int *)(param_1 + 0x280) == 4) && (lVar22 != 0)) && (*(int *)(lVar22 + 0xdc) != 3)
              ) && (uVar15 = FUN_0016cb78(param_1,*(undefined4 *)(lVar22 + 0xb8),9),
                   (int)uVar15 < -900)) {
LAB_00170e34:
            uVar24 = uVar15 & 0xffffffff;
            goto LAB_00170e38;
          }
          uVar24 = FUN_0016bcd4(param_1,*(undefined4 *)(param_1 + 0x93c),9,0);
          iVar12 = (int)uVar24;
          iVar13 = -0x20b;
LAB_001701e0:
          uVar24 = uVar24 & 0xffffffff;
          if (iVar12 < -900) goto LAB_00170e38;
          goto LAB_00170290;
        }
        lVar23 = uVar24 + lVar23;
        if (((iVar12 == 4) && (((byte)local_6c[0] >> 1 & 1) != 0)) && (lVar22 != 0)) {
          if ((*(byte *)(param_1 + 0x99c) >> 2 & 1) == 0) {
            iVar13 = FUN_001734e8(param_1,lVar22,puVar4,&local_88,bVar8);
            if (iVar13 == -0x69) {
              if (*(code **)(param_1 + 0x840) == (code *)0x0) {
                if (*(code **)(param_1 + 0x838) == (code *)0x0) goto LAB_00170a40;
                iVar13 = (**(code **)(param_1 + 0x838))
                                   (param_1,puVar4,*(undefined8 *)(local_88 + 0x10),
                                    *(undefined8 *)(local_88 + 0x18),
                                    *(undefined8 *)(local_80 + 0x10),
                                    *(undefined8 *)(local_80 + 0x18),uStack_78._4_1_,
                                    *(undefined8 *)(param_1 + 0x8b8));
              }
              else {
                iVar13 = (**(code **)(param_1 + 0x840))
                                   (param_1,puVar4,local_88,local_80,uStack_78._4_1_,
                                    *(undefined8 *)(param_1 + 0x8b8));
              }
              if (iVar13 != 0) {
                if (iVar13 != -0x20e) {
                  uVar24 = 0xfffffc7a;
                  if (iVar13 != -0x209) goto LAB_00170e38;
LAB_00170a40:
                  uVar15 = FUN_00170f38(param_1,0xfffffded,
                                        "Invalid HTTP header field was received: frame type: %u, stream: %d, name: [%.*s], value: [%.*s]"
                                        ,*(undefined1 *)(param_1 + 0x1ac),
                                        *(undefined4 *)(param_1 + 0x1a8),
                                        *(undefined4 *)(local_88 + 0x18),
                                        *(undefined8 *)(local_88 + 0x10),
                                        *(undefined4 *)(local_80 + 0x18),
                                        *(undefined8 *)(local_80 + 0x10));
                  if ((int)uVar15 < -900) goto LAB_00170e34;
                  uVar24 = FUN_0017211c(param_1,*(undefined4 *)(lVar22 + 0xb8),puVar4,0xfffffded);
                  iVar12 = (int)uVar24;
                  iVar13 = -0x209;
                  goto LAB_001701e0;
                }
                goto LAB_00170290;
              }
              uVar15 = FUN_00170f38(param_1,0xfffffded,
                                    "Ignoring received invalid HTTP header field: frame type: %u, stream: %d, name: [%.*s], value: [%.*s]"
                                    ,*(undefined1 *)(param_1 + 0x1ac),
                                    *(undefined4 *)(param_1 + 0x1a8),
                                    *(undefined4 *)(local_88 + 0x18),
                                    *(undefined8 *)(local_88 + 0x10),
                                    *(undefined4 *)(local_80 + 0x18),
                                    *(undefined8 *)(local_80 + 0x10));
              if ((int)uVar15 < -900) goto LAB_00170e34;
            }
            else {
              if (iVar13 == 0) goto LAB_00170088;
              if (iVar13 == -0x213) goto LAB_00170a40;
            }
          }
          else {
LAB_00170088:
            if (*(code **)(param_1 + 0x830) == (code *)0x0) {
              if (*(code **)(param_1 + 0x828) == (code *)0x0) goto LAB_0017016c;
              iVar13 = (**(code **)(param_1 + 0x828))
                                 (param_1,puVar4,*(undefined8 *)(local_88 + 0x10),
                                  *(undefined8 *)(local_88 + 0x18),*(undefined8 *)(local_80 + 0x10),
                                  *(undefined8 *)(local_80 + 0x18),uStack_78._4_1_,
                                  *(undefined8 *)(param_1 + 0x8b8));
            }
            else {
              iVar13 = (**(code **)(param_1 + 0x830))
                                 (param_1,puVar4,local_88,local_80,uStack_78._4_1_,
                                  *(undefined8 *)(param_1 + 0x8b8));
            }
            if (iVar13 != 0) {
              if ((iVar13 != -0x20e) && (iVar13 != -0x209)) {
                uVar24 = 0xfffffc7a;
LAB_00170e38:
                return (long)(int)uVar24;
              }
              goto LAB_00170290;
            }
          }
        }
LAB_0017016c:
        if ((local_6c[0] & 1) != 0) {
          FUN_00169d5c(param_1 + 0x6e8);
          break;
        }
        pvVar31 = (void *)((long)pvVar31 + uVar24);
        uVar25 = uVar25 - uVar24;
      } while ((uVar25 != 0) || ((local_6c[0] >> 1 & 1) != 0));
      iVar13 = 0;
LAB_00170290:
      if (*(int *)(param_1 + 0x280) == 0xf) {
        return param_3;
      }
      if (iVar13 != -0x209) {
        if (iVar13 == -0x20e) {
          *(long *)(param_1 + 0x270) = *(long *)(param_1 + 0x270) - lVar23;
          return (long)pvVar32 + (lVar23 - (long)param_2);
        }
        uVar25 = *(ulong *)(param_1 + 0x270);
        pvVar31 = (void *)((long)pvVar32 + uVar20);
        lVar23 = uVar25 - uVar20;
        *(long *)(param_1 + 0x270) = lVar23;
        if (iVar13 != -0x20b) {
          if (lVar23 == 0) goto LAB_0016ff30;
          break;
        }
        pvVar32 = pvVar31;
        if (uVar25 == uVar20) goto switchD_0016f970_caseD_4;
        goto LAB_00170b04;
      }
      *(long *)(param_1 + 0x270) = *(long *)(param_1 + 0x270) - lVar23;
      lVar22 = 0x1c8;
      if (*(char *)(param_1 + 0x1ac) != '\x05') {
        lVar22 = 0x1a8;
      }
      iVar12 = FUN_0016cb78(param_1,*(undefined4 *)(param_1 + lVar22),2);
      if (-0x385 < iVar12) {
        pvVar32 = (void *)((long)pvVar32 + lVar23);
LAB_00170314:
        uVar19 = 5;
        goto LAB_00170bd0;
      }
      goto LAB_00170eb8;
    }
    pvVar31 = (void *)((long)pvVar32 + uVar20);
    lVar23 = *(long *)(param_1 + 0x270) - uVar20;
    *(long *)(param_1 + 0x270) = lVar23;
    if (lVar23 != 0) break;
LAB_0016ff30:
    pvVar31 = (void *)((long)pvVar32 + uVar20);
    if ((*(byte *)(param_1 + 0x1ad) >> 2 & 1) == 0) {
      FUN_0016b29c(lVar5);
      *(undefined8 *)(param_1 + 0x278) = 0;
      *(long *)(param_1 + 0x228) = *(long *)(param_1 + 0x228) + 9;
      if (*(int *)(param_1 + 0x280) == 4) {
        uVar19 = 10;
      }
      else {
        uVar19 = 0xb;
      }
      goto LAB_0016f7f8;
    }
    if (*(int *)(param_1 + 0x280) == 4) {
      lVar23 = FUN_001726f0(param_1,*(undefined4 *)(param_1 + 0x1a8));
      if ((lVar23 != 0) && ((*(byte *)(lVar23 + 0xe4) >> 1 & 1) == 0)) {
        if ((*(int *)(lVar23 + 0xdc) != 3) && (*(int *)(lVar23 + 0xdc) != 5)) {
          if ((*(byte *)(param_1 + 0x99c) >> 2 & 1) == 0) {
            if (*(char *)(param_1 + 0x1ac) == '\x05') {
              lVar22 = FUN_001726f0(param_1,*(undefined4 *)(param_1 + 0x1c8));
              if (((lVar22 == 0) || ((*(byte *)(lVar22 + 0xe4) >> 1 & 1) != 0)) ||
                 (*(int *)(lVar22 + 0xdc) == 5)) goto LAB_00170cf8;
              iVar12 = FUN_00173c00(lVar22,puVar4);
LAB_00170cc0:
              if (iVar12 == 0) goto LAB_00170cf8;
            }
            else {
              iVar12 = *(int *)(param_1 + 0x1d8);
              if (1 < iVar12 - 1U) {
                if (iVar12 == 3) {
                  if ((*(ushort *)(lVar23 + 0xe2) >> 0xe & 1) != 0) goto LAB_00170ca4;
                  iVar12 = FUN_00173d5c(lVar23,puVar4);
                  goto LAB_00170cac;
                }
                if (iVar12 == 0) {
                  iVar12 = FUN_00173c00(lVar23,puVar4);
                  goto LAB_00170cac;
                }
LAB_00170cb0:
                if ((*(byte *)(param_1 + 0x1ad) & 1) == 0) goto LAB_00170cf8;
                iVar12 = FUN_00173d6c(lVar23);
                goto LAB_00170cc0;
              }
LAB_00170ca4:
              iVar12 = FUN_00173cb0(lVar23);
LAB_00170cac:
              if (iVar12 == 0) goto LAB_00170cb0;
            }
            lVar22 = 0x1c8;
            if (*(char *)(param_1 + 0x1ac) != '\x05') {
              lVar22 = 0x1a8;
            }
            iVar12 = FUN_0017211c(param_1,*(undefined4 *)(param_1 + lVar22),puVar4,0xfffffdec);
            if (iVar12 < -900) goto LAB_00170eb8;
          }
          else {
LAB_00170cf8:
            if ((*(code **)(param_1 + 0x7e8) != (code *)0x0) &&
               (iVar12 = (**(code **)(param_1 + 0x7e8))
                                   (param_1,puVar4,*(undefined8 *)(param_1 + 0x8b8)), iVar12 != 0))
            {
              iVar12 = -0x386;
              goto LAB_00170eb8;
            }
          }
          if ((*(char *)(param_1 + 0x1ac) == '\x01') && ((*(byte *)(param_1 + 0x1ad) & 1) != 0)) {
            FUN_001728a4(lVar23,1);
            if (((*(byte *)(lVar23 + 0xe5) ^ 0xff) & 3) == 0) {
              iVar12 = FUN_0016cc94(param_1,*(undefined4 *)(lVar23 + 0xb8),0);
              goto LAB_0016fd88;
            }
          }
        }
      }
    }
switchD_0016f970_caseD_4:
    FUN_0016c430(param_1);
    break;
  case 6:
    uVar24 = *(ulong *)(param_1 + 0x270);
    uVar25 = (long)pvVar6 - (long)pvVar32;
    uVar20 = uVar25;
    if (uVar24 <= uVar25) {
      uVar20 = uVar24;
    }
    pvVar31 = (void *)((long)pvVar32 + uVar20);
    *(ulong *)(param_1 + 0x270) = uVar24 - uVar20;
    if (uVar24 <= uVar25) {
      if ((*(byte *)(param_1 + 0x1ac) < 10) &&
         ((1 << (ulong)(*(byte *)(param_1 + 0x1ac) & 0x1f) & 0x222U) != 0)) {
        *(undefined1 *)(param_1 + 0x724) = 1;
      }
      goto switchD_0016f970_caseD_4;
    }
    break;
  case 7:
    uVar19 = *(undefined4 *)(param_1 + 0x93c);
    uVar14 = 6;
    pcVar17 = (char *)0x0;
    goto LAB_00170de0;
  case 8:
    uVar25 = *(long *)(param_1 + 0x228) - *(long *)(param_1 + 0x220);
    uVar20 = (long)pvVar6 - (long)pvVar32;
    if (uVar25 <= (ulong)((long)pvVar6 - (long)pvVar32)) {
      uVar20 = uVar25;
    }
    lVar23 = FUN_00168980(*(long *)(param_1 + 0x220),pvVar32,uVar20);
    pvVar31 = (void *)((long)pvVar32 + uVar20);
    *(long *)(param_1 + 0x220) = lVar23;
    lVar22 = *(long *)(param_1 + 0x270) - uVar20;
    *(long *)(param_1 + 0x270) = lVar22;
    if (*(long *)(param_1 + 0x228) != lVar23) break;
    if (uVar20 != 0) {
      local_88 = 0;
      FUN_00167bfc(&local_88,*(undefined8 *)(param_1 + 0x218));
      if (((int)local_88 - 1U < 6) || ((int)local_88 == 8)) {
        lVar22 = *(long *)(param_1 + 0x260);
        lVar23 = 0;
        plVar21 = *(long **)(param_1 + 0x200);
        if (lVar22 != 0) {
          plVar28 = plVar21;
          do {
            if ((int)*plVar28 == (int)local_88) {
              *plVar28 = local_88;
              if (*plVar3 != lVar23) goto LAB_00170720;
              plVar21 = *(long **)(param_1 + 0x200);
              goto LAB_0017070c;
            }
            lVar23 = lVar23 + 1;
            plVar28 = plVar28 + 1;
          } while (lVar22 != lVar23);
          lVar23 = lVar22;
        }
LAB_0017070c:
        *plVar3 = lVar23 + 1;
        plVar21[lVar23] = local_88;
LAB_00170720:
        if ((int)local_88 == 1) {
          puVar26 = (uint *)(*(long *)(param_1 + 0x200) + *(long *)(param_1 + 0x268) * 8 + -4);
          if (local_88._4_4_ < *puVar26) {
            *puVar26 = local_88._4_4_;
          }
        }
      }
      else {
        lVar23 = *(long *)(param_1 + 0x260);
        *(long *)(param_1 + 0x260) = lVar23 + 1;
        *(long *)(*(long *)(param_1 + 0x200) + lVar23 * 8) = local_88;
      }
      lVar22 = *(long *)(param_1 + 0x270);
    }
    pvVar32 = pvVar31;
    if (lVar22 == 0) {
      lVar23 = *(long *)(param_1 + 0x268);
      piVar16 = *(int **)(param_1 + 0x200);
      if ((lVar23 != 0) && (iVar12 = piVar16[lVar23 * 2 + -1], iVar12 != -1)) {
        lVar22 = *plVar3;
        if (lVar22 == 0) {
          lVar27 = 0;
        }
        else {
          lVar27 = 0;
          piVar29 = piVar16;
          do {
            if (*piVar29 == 1) goto LAB_00170b14;
            lVar27 = lVar27 + 1;
            piVar29 = piVar29 + 2;
          } while (lVar22 != lVar27);
          lVar27 = lVar22;
        }
LAB_00170b14:
        if (iVar12 != piVar16[lVar27 * 2 + 1]) {
          iVar13 = piVar16[lVar23 * 2 + -2];
          *(long *)(param_1 + 0x260) = lVar22 + 1;
          *(undefined8 *)(piVar16 + lVar22 * 2) = *(undefined8 *)(piVar16 + lVar27 * 2);
          piVar16 = (int *)(*(long *)(param_1 + 0x200) + lVar27 * 8);
          *piVar16 = iVar13;
          piVar16[1] = iVar12;
          piVar16 = *(int **)(param_1 + 0x200);
        }
      }
      FUN_00167bf4(puVar4,piVar16,*(undefined8 *)(param_1 + 0x260));
      *(undefined8 *)(param_1 + 0x200) = 0;
      *plVar3 = 0;
      *(undefined8 *)(param_1 + 0x268) = 0;
      iVar12 = FUN_0016e824(param_1,puVar4,0);
      goto LAB_00170b70;
    }
    FUN_0016b29c(lVar5);
    lVar23 = *(long *)(param_1 + 0x228) + 6;
LAB_0017078c:
    *(long *)(param_1 + 0x228) = lVar23;
    goto LAB_00170bdc;
  case 9:
    uVar25 = *(ulong *)(param_1 + 0x270);
    uVar20 = (long)pvVar6 - (long)pvVar32;
    if (uVar25 <= (ulong)((long)pvVar6 - (long)pvVar32)) {
      uVar20 = uVar25;
    }
    if (uVar20 != 0) {
      uVar14 = FUN_00168980(*(undefined8 *)(param_1 + 0x248),pvVar32,uVar20);
      pvVar31 = (void *)((long)pvVar32 + uVar20);
      *(undefined8 *)(param_1 + 0x248) = uVar14;
      uVar25 = *(long *)(param_1 + 0x270) - uVar20;
      *(ulong *)(param_1 + 0x270) = uVar25;
    }
    if (uVar25 == 0) {
      FUN_00167e98(puVar4,*(undefined8 *)(param_1 + 0x218),*(long *)(param_1 + 0x240),
                   *(long *)(param_1 + 0x248) - *(long *)(param_1 + 0x240));
      FUN_0016b2ac(lVar2,0,0);
      iVar12 = FUN_0016f130(param_1,puVar4);
      pvVar32 = pvVar31;
      goto LAB_00170b70;
    }
    break;
  case 10:
  case 0xb:
    uVar25 = *(long *)(param_1 + 0x228) - *(long *)(param_1 + 0x220);
    uVar20 = (long)pvVar6 - (long)pvVar32;
    if (uVar25 <= (ulong)((long)pvVar6 - (long)pvVar32)) {
      uVar20 = uVar25;
    }
    lVar23 = FUN_00168980(*(long *)(param_1 + 0x220),pvVar32,uVar20);
    pvVar32 = (void *)((long)pvVar32 + uVar20);
    *(long *)(param_1 + 0x220) = lVar23;
    if (*(long *)(param_1 + 0x228) != lVar23) goto LAB_00170d64;
    FUN_00167540(&local_98,*(undefined8 *)(param_1 + 0x218));
    *(long *)(param_1 + 0x270) = local_98;
    if ((local_90._4_1_ != '\t') || ((int)local_90 != *(int *)(param_1 + 0x1a8))) {
      uVar19 = *(undefined4 *)(param_1 + 0x93c);
      pcVar17 = "unexpected non-CONTINUATION frame or stream_id is invalid";
      goto LAB_00170d78;
    }
    *(long *)(param_1 + 0x1a0) = *(long *)(param_1 + 0x1a0) + local_98;
    *(byte *)(param_1 + 0x1ad) = local_90._5_1_ & 4 | *(byte *)(param_1 + 0x1ad);
    if (*(int *)(param_1 + 0x280) != 10) goto LAB_00170314;
    *(undefined4 *)(param_1 + 0x280) = 4;
    if ((*(code **)(param_1 + 0x858) != (code *)0x0) &&
       (iVar12 = (**(code **)(param_1 + 0x858))(param_1,&local_98,*(undefined8 *)(param_1 + 0x8b8)),
       iVar12 != 0)) {
      return 0xfffffffffffffc7a;
    }
    goto LAB_0016f67c;
  case 0xc:
    uVar25 = *(long *)(param_1 + 0x228) - *(long *)(param_1 + 0x220);
    uVar20 = (long)pvVar6 - (long)pvVar32;
    if (uVar25 <= (ulong)((long)pvVar6 - (long)pvVar32)) {
      uVar20 = uVar25;
    }
    lVar23 = FUN_00168980(*(long *)(param_1 + 0x220),pvVar32,uVar20);
    pvVar32 = (void *)((long)pvVar32 + uVar20);
    *(long *)(param_1 + 0x220) = lVar23;
    *(ulong *)(param_1 + 0x270) = *(long *)(param_1 + 0x270) - uVar20;
    if (*(long *)(param_1 + 0x228) != lVar23) goto LAB_00170d64;
    iVar12 = FUN_00171428(param_1,uVar20);
    if (-0x385 < iVar12) {
      if (*(int *)(param_1 + 0x280) == 0xf) {
        return param_3;
      }
      iVar12 = FUN_001714c0(param_1,*(undefined4 *)(param_1 + 0x1a8),uVar20);
      if (-0x385 < iVar12) {
        if (*(int *)(param_1 + 0x280) == 0xf) {
          return param_3;
        }
        lVar23 = FUN_001726f0(param_1,*(undefined4 *)(param_1 + 0x1a8));
        if (((lVar23 != 0) && ((*(byte *)(lVar23 + 0xe4) >> 1 & 1) == 0)) &&
           (*(int *)(lVar23 + 0xdc) != 5)) {
          if (*(long *)(param_1 + 0x270) == 0) {
            bVar9 = (*(byte *)(param_1 + 0x1ad) & 1) == 0;
          }
          else {
            bVar9 = true;
          }
          iVar12 = FUN_00171584(param_1,lVar23,uVar20,bVar9);
          if (iVar12 < -900) goto LAB_00170eb8;
        }
        if (*(ulong *)(param_1 + 0x270) < (ulong)**(byte **)(param_1 + 0x218)) {
          uVar19 = *(undefined4 *)(param_1 + 0x93c);
          pcVar17 = "DATA: invalid padding";
          goto LAB_00170d78;
        }
        lVar23 = (ulong)**(byte **)(param_1 + 0x218) + 1;
        bVar9 = true;
        *(long *)(param_1 + 0x278) = lVar23;
        *(long *)(param_1 + 0x1b0) = lVar23;
        uVar19 = 0xd;
        pvVar31 = pvVar32;
LAB_00170838:
        *(undefined4 *)(param_1 + 0x280) = uVar19;
        pvVar32 = pvVar31;
        goto joined_r0x0016feb8;
      }
    }
    goto LAB_00170eb8;
  case 0xd:
    lVar23 = FUN_001726f0(param_1,*(undefined4 *)(param_1 + 0x1a8));
    if (((lVar23 == 0) || ((*(byte *)(lVar23 + 0xe4) >> 1 & 1) != 0)) ||
       (*(int *)(lVar23 + 0xdc) == 5)) {
LAB_00170384:
      uVar19 = 0xe;
      goto LAB_00170bd0;
    }
    uVar25 = *(ulong *)(param_1 + 0x270);
    uVar20 = (long)pvVar6 - (long)pvVar32;
    if (uVar25 <= (ulong)((long)pvVar6 - (long)pvVar32)) {
      uVar20 = uVar25;
    }
    lVar22 = uVar25 - uVar20;
    pvVar31 = (void *)((long)pvVar32 + uVar20);
    *(long *)(param_1 + 0x270) = lVar22;
    if (uVar20 != 0) {
      iVar12 = FUN_00171428(param_1,uVar20);
      if (iVar12 < -900) goto LAB_00170eb8;
      if (*(int *)(param_1 + 0x280) == 0xf) {
        return param_3;
      }
      if (*(long *)(param_1 + 0x270) == 0) {
        bVar9 = (*(byte *)(param_1 + 0x1ad) & 1) == 0;
      }
      else {
        bVar9 = true;
      }
      iVar12 = FUN_00171584(param_1,lVar23,uVar20,bVar9);
      if (iVar12 < -900) goto LAB_00170eb8;
      uVar30 = *(ulong *)(param_1 + 0x270);
      uVar15 = FUN_0016774c(puVar4,*(undefined8 *)(param_1 + 0x278));
      uVar24 = uVar15 - uVar30;
      uVar25 = uVar20 - uVar24;
      if (uVar20 < uVar24) {
        uVar25 = 0xffffffffffffffff;
      }
      if (uVar15 <= uVar30) {
        uVar25 = uVar20;
      }
      uVar24 = 0;
      if (uVar25 != 0xffffffffffffffff) {
        uVar24 = uVar25;
      }
      if (0 < (long)(uVar20 - uVar24)) {
        iVar12 = FUN_001714c0(param_1,*(undefined4 *)(param_1 + 0x1a8));
        if (iVar12 < -900) goto LAB_00170eb8;
        if (*(int *)(param_1 + 0x280) == 0xf) {
          return param_3;
        }
      }
      if (0 < (long)uVar24) {
        if (((*(byte *)(param_1 + 0x99c) >> 2 & 1) == 0) &&
           (iVar12 = FUN_00173d9c(lVar23,uVar24), iVar12 != 0)) {
          if ((*(byte *)(param_1 + 0x99c) & 1) != 0) {
            iVar12 = FUN_00172374(param_1,param_1 + 0x954,param_1 + 0x950,
                                  *(undefined1 *)(param_1 + 0x9ac),0,uVar24,
                                  *(undefined4 *)(param_1 + 0x95c));
            if (iVar12 < -900) goto LAB_00170eb8;
            if (*(int *)(param_1 + 0x280) == 0xe) {
              return param_3;
            }
          }
          iVar12 = FUN_0016cb78(param_1,*(undefined4 *)(param_1 + 0x1a8),1);
          if (iVar12 < -900) goto LAB_00170eb8;
          *(undefined4 *)(param_1 + 0x280) = 0xe;
          pvVar32 = pvVar31;
          goto LAB_0016f67c;
        }
        if (*(code **)(param_1 + 0x7f8) != (code *)0x0) {
          iVar12 = (**(code **)(param_1 + 0x7f8))
                             (param_1,*(undefined1 *)(param_1 + 0x1ad),
                              *(undefined4 *)(param_1 + 0x1a8),pvVar32,uVar24,
                              *(undefined8 *)(param_1 + 0x8b8));
          if (iVar12 == -0x20e) {
            return (long)pvVar31 - (long)param_2;
          }
          if (iVar12 < -900) {
            return 0xfffffffffffffc7a;
          }
        }
      }
      lVar22 = *(long *)(param_1 + 0x270);
    }
    if (lVar22 == 0) {
      iVar12 = FUN_0016f4f4(param_1,puVar4);
      if (iVar12 < -900) goto LAB_00170eb8;
      FUN_0016c430(param_1);
    }
    break;
  case 0xe:
    uVar25 = *(ulong *)(param_1 + 0x270);
    uVar20 = (long)pvVar6 - (long)pvVar32;
    if (uVar25 <= (ulong)((long)pvVar6 - (long)pvVar32)) {
      uVar20 = uVar25;
    }
    lVar23 = uVar25 - uVar20;
    *(long *)(param_1 + 0x270) = lVar23;
    if (uVar20 != 0) {
      iVar12 = FUN_00171428(param_1,uVar20);
      if (iVar12 < -900) goto LAB_00170eb8;
      if (*(int *)(param_1 + 0x280) == 0xf) {
        return param_3;
      }
      if ((*(byte *)(param_1 + 0x99c) & 1) != 0) {
        iVar12 = FUN_00172374(param_1,param_1 + 0x954,param_1 + 0x950,
                              *(undefined1 *)(param_1 + 0x9ac),0,uVar20,
                              *(undefined4 *)(param_1 + 0x95c));
        if (iVar12 < -900) goto LAB_00170eb8;
        if (*(int *)(param_1 + 0x280) == 0xf) {
          return param_3;
        }
      }
      lVar23 = *(long *)(param_1 + 0x270);
    }
    pvVar31 = (void *)((long)pvVar32 + uVar20);
    if (lVar23 == 0) goto switchD_0016f970_caseD_4;
    break;
  case 0xf:
    goto switchD_0016f694_caseD_f;
  case 0x10:
    uVar25 = *(ulong *)(param_1 + 0x270);
    uVar20 = (long)pvVar6 - (long)pvVar32;
    if (uVar25 <= (ulong)((long)pvVar6 - (long)pvVar32)) {
      uVar20 = uVar25;
    }
    if (uVar20 != 0) {
      uVar14 = FUN_00168980(*(undefined8 *)(param_1 + 0x248),pvVar32,uVar20);
      pvVar31 = (void *)((long)pvVar32 + uVar20);
      *(undefined8 *)(param_1 + 0x248) = uVar14;
      uVar25 = *(long *)(param_1 + 0x270) - uVar20;
      *(ulong *)(param_1 + 0x270) = uVar25;
    }
    if (uVar25 == 0) {
      uVar10 = FUN_0016852c(*(undefined8 *)(param_1 + 0x218));
      FUN_00167fd0(puVar4,uVar10,*(long *)(param_1 + 0x240),
                   *(long *)(param_1 + 0x248) - *(long *)(param_1 + 0x240));
      FUN_0016b2ac(lVar2,0,0);
      iVar12 = FUN_0016f42c(param_1,puVar4);
LAB_0016fd88:
      if (-0x385 < iVar12) goto switchD_0016f970_caseD_4;
      goto LAB_00170eb8;
    }
    break;
  case 0x11:
    uVar25 = *(ulong *)(param_1 + 0x270);
    uVar20 = (long)pvVar6 - (long)pvVar32;
    if (uVar25 <= (ulong)((long)pvVar6 - (long)pvVar32)) {
      uVar20 = uVar25;
    }
    if (uVar20 != 0) {
      uVar14 = FUN_00168980(*(undefined8 *)(param_1 + 0x248),pvVar32,uVar20);
      pvVar31 = (void *)((long)pvVar32 + uVar20);
      *(undefined8 *)(param_1 + 0x248) = uVar14;
      uVar25 = *(long *)(param_1 + 0x270) - uVar20;
      *(ulong *)(param_1 + 0x270) = uVar25;
    }
    if (uVar25 != 0) break;
    iVar12 = FUN_001680a0(puVar4,*(long *)(param_1 + 0x240),
                          *(long *)(param_1 + 0x248) - *(long *)(param_1 + 0x240),lVar1);
    pvVar32 = pvVar31;
    if (iVar12 != 0) goto LAB_00170b70;
    if ((*(code **)(param_1 + 0x7e8) != (code *)0x0) &&
       (iVar12 = (**(code **)(param_1 + 0x7e8))(param_1,puVar4,*(undefined8 *)(param_1 + 0x8b8)),
       iVar12 != 0)) {
      return 0xfffffffffffffc7a;
    }
    goto LAB_00170b78;
  case 0x12:
    uVar25 = *(ulong *)(param_1 + 0x270);
    uVar20 = (long)pvVar6 - (long)pvVar32;
    if (uVar25 <= (ulong)((long)pvVar6 - (long)pvVar32)) {
      uVar20 = uVar25;
    }
    lVar23 = uVar25 - uVar20;
    *(long *)(param_1 + 0x270) = lVar23;
    if ((uVar20 == 0) || (*(code **)(param_1 + 0x878) == (code *)0x0)) {
LAB_0016fe58:
      if (lVar23 == 0) {
        local_88 = 0;
        iVar12 = (**(code **)(param_1 + 0x870))
                           (param_1,&local_88,puVar4,*(undefined8 *)(param_1 + 0x8b8));
        if (iVar12 != -0x217) {
          if (iVar12 != 0) {
            return 0xfffffffffffffc7a;
          }
          *(long *)(param_1 + 0x1b0) = local_88;
          if ((*(code **)(param_1 + 0x7e8) != (code *)0x0) &&
             (iVar12 = (**(code **)(param_1 + 0x7e8))
                                 (param_1,puVar4,*(undefined8 *)(param_1 + 0x8b8)), iVar12 != 0)) {
            return 0xfffffffffffffc7a;
          }
        }
        FUN_0016c430(param_1);
      }
      bVar9 = false;
      pvVar32 = (void *)((long)pvVar32 + uVar20);
    }
    else {
      iVar12 = (**(code **)(param_1 + 0x878))
                         (param_1,puVar4,pvVar32,uVar20,*(undefined8 *)(param_1 + 0x8b8));
      if (iVar12 != -0x217) {
        if (iVar12 != 0) {
          return 0xfffffffffffffc7a;
        }
        lVar23 = *(long *)(param_1 + 0x270);
        goto LAB_0016fe58;
      }
      bVar9 = true;
      *(undefined4 *)(param_1 + 0x280) = 6;
      pvVar32 = (void *)((long)pvVar32 + uVar20);
    }
    goto joined_r0x0016feb8;
  }
  bVar9 = false;
  pvVar32 = pvVar31;
joined_r0x0016feb8:
  if (!bVar9) {
LAB_00170bdc:
    if (pvVar32 == pvVar6) {
      return param_3;
    }
  }
  goto LAB_0016f67c;
}

