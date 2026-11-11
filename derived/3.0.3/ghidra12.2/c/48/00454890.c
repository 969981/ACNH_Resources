
/* WARNING: Type propagation algorithm not settling */

void FUN_00454890(ulong *param_1,uint *param_2)

{
  byte bVar1;
  int iVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  ulong uVar12;
  short *psVar13;
  uint *puVar14;
  undefined8 *puVar15;
  ulong *puVar16;
  undefined8 uVar17;
  long *plVar18;
  ulong *puVar19;
  byte *pbVar20;
  byte *pbVar21;
  ulong uVar22;
  long lVar23;
  uint local_288;
  ulong local_280 [2];
  long *local_270;
  long *plStack_268;
  
  uVar12 = FUN_00428440();
  if ((param_1 != (ulong *)0x0) && ((uVar12 & 0x1f) == 1)) {
    return;
  }
  uVar12 = FUN_00428440(param_1);
  if ((param_1 != (ulong *)0x0) && ((uVar12 & 0x1f) == 0)) {
    return;
  }
  while ((*(byte *)((long)param_1 + 2) >> 4 & 1) == 0) {
    param_1 = (ulong *)param_1[1];
  }
  psVar13 = (short *)FUN_00426db0(param_1,0x100000);
  if ((psVar13 != (short *)0x0) && (*psVar13 != 0)) {
    return;
  }
  if (param_1[1] == 0) {
    pbVar20 = (byte *)0x0;
    uVar12 = *param_1;
    uVar5 = (uint)uVar12;
  }
  else {
    FUN_00454890(param_1[1],param_2);
    uVar12 = *param_1;
    uVar5 = (uint)uVar12;
    pbVar20 = (byte *)param_1[1];
  }
  if ((uVar12 & 1) == 0) {
    puVar14 = (uint *)FUN_00426e90(pbVar20,0x100000);
    if (puVar14 == (uint *)0x0) {
      uVar5 = 0;
      bVar1 = *(byte *)((long)param_1 + 2);
    }
    else {
      uVar5 = *puVar14;
      bVar1 = *(byte *)((long)param_1 + 2);
    }
    if (((bVar1 >> 4 & 1) == 0) ||
       (puVar14 = (uint *)FUN_00426db0(param_1,0x100000), puVar14 == (uint *)0x0)) {
      uVar7 = 0;
    }
    else {
      uVar7 = *puVar14 >> 0x1c;
    }
    uVar9 = uVar5 >> 0x1c;
    if (uVar5 >> 0x1c <= uVar7) {
      uVar9 = uVar7;
    }
    local_270 = (long *)(ulong)(uVar5 & 0xfffffff | uVar9 << 0x1c);
    iVar6 = FUN_0044df70(&local_270,param_2[1]);
    uVar12 = (ulong)local_270 & 0xf000ffff | (ulong)(uint)(iVar6 << 0x10) & 0xfff0000;
    local_270 = (long *)CONCAT44(local_270._4_4_,(int)uVar12);
    puVar16 = (ulong *)FUN_00426d40(param_1,0x100000);
    *puVar16 = uVar12;
    return;
  }
  if (pbVar20 == (byte *)0x0) {
    if ((uVar5 >> 0x17 & 1) == 0) {
      uVar12 = FUN_00428440(param_1);
      if ((uVar12 & 0x1f) != 8) {
        do {
                    /* WARNING: Do nothing block with infinite loop */
        } while( true );
      }
      puVar15 = (undefined8 *)FUN_00426e90(param_1,1);
      if (puVar15 == (undefined8 *)0x0) {
        iVar6 = 0;
      }
      else {
        iVar6 = (int)((ulong)*puVar15 >> 8);
      }
      uVar17 = FUN_00426d90(param_1);
      FUN_00454890(uVar17,param_2);
      puVar14 = (uint *)FUN_00426e90(param_1,0x100000);
      if (puVar14 == (uint *)0x0) {
        uVar5 = 0;
      }
      else {
        uVar5 = *puVar14;
      }
      local_270 = (long *)(ulong)uVar5;
      puVar14 = (uint *)FUN_00426e90(uVar17,0x100000);
      if (puVar14 == (uint *)0x0) {
        uVar5 = 0;
      }
      else {
        uVar5 = *puVar14;
      }
      uVar7 = (uVar5 & 0xffff) * iVar6;
      uVar5 = uVar5 >> 0x10 & 0xfff;
      if ((int)uVar7 <= (int)param_2[3]) {
        uVar7 = param_2[3];
      }
      uVar9 = FUN_0044df70(&local_270,param_2[1]);
      if ((int)uVar5 <= (int)uVar9) {
        uVar5 = uVar9;
      }
      goto LAB_00454f68;
    }
    bVar3 = false;
    local_288 = 0;
    uVar7 = 0;
    uVar9 = 1;
    uVar10 = param_2[1];
    bVar1 = *(byte *)((long)param_1 + 2);
    uVar5 = local_288;
  }
  else {
    uVar4 = FUN_00426fc0(pbVar20);
    uVar5 = FUN_00427030(pbVar20);
    if ((uVar4 == 1) && (*(char *)((long)param_2 + 10) != '\0')) {
      pbVar21 = pbVar20;
      do {
        if (((((char)pbVar21[2] < '\0') &&
             (puVar15 = (undefined8 *)FUN_00426db0(pbVar21,0x800000), puVar15 != (undefined8 *)0x0))
            && ((short *)*puVar15 != (short *)0x0)) && (*(short *)*puVar15 != 0)) {
          uVar4 = 1;
          goto LAB_00454aa0;
        }
        pbVar21 = *(byte **)(pbVar21 + 8);
      } while (pbVar21 != (byte *)0x0);
      uVar4 = 0;
LAB_00454a64:
      uVar10 = param_2[1];
      bVar1 = *(byte *)((long)param_1 + 2);
    }
    else {
      if (uVar4 == 0) goto LAB_00454a64;
LAB_00454aa0:
      if ((char)param_2[2] == '\0') {
        bVar3 = true;
        if (*(char *)((long)param_2 + 9) == '\0') {
          local_288 = 0;
          uVar10 = param_2[1];
          bVar1 = *(byte *)((long)param_1 + 2);
          uVar9 = uVar5;
          uVar7 = uVar4;
          uVar5 = local_288;
          goto joined_r0x00454acc;
        }
        uVar7 = param_2[1];
        uVar9 = 0;
        pbVar21 = pbVar20;
        do {
          if ((pbVar21[2] >> 4 & 1) != 0) {
            puVar16 = (ulong *)FUN_00426db0(pbVar21,0x100000);
            if (puVar16 != (ulong *)0x0) {
              if (*puVar16 != 0) {
                uVar12 = *puVar16 >> 0x1c & 0xf;
                iVar6 = (int)uVar12;
                uVar10 = 1 << uVar12;
                if (iVar6 == 0xf) {
                  uVar10 = uVar7 << 2;
                }
                uVar8 = 0;
                if (iVar6 != 0) {
                  uVar8 = uVar10;
                }
                if ((int)uVar8 <= (int)uVar9) {
                  uVar8 = uVar9;
                }
                uVar9 = uVar8;
              }
            }
          }
        } while (((*pbVar21 & 1) == 0) &&
                (pbVar21 = *(byte **)(pbVar21 + 8), pbVar21 != (byte *)0x0));
        if (uVar5 == uVar9) {
          uVar7 = *param_2;
          uVar10 = param_2[1];
          FUN_00427c30(&local_270,pbVar20,0);
          uVar9 = 1;
LAB_00454b94:
          if (local_270 + 1 < plStack_268) {
            local_270 = local_270 + 1;
            uVar8 = FUN_004290b0();
          }
          else {
            uVar12 = FUN_00427c40(&local_270);
            if ((uVar12 & 1) == 0) goto LAB_00454c9c;
            uVar8 = FUN_004290b0(local_270);
          }
          if ((uVar8 >> 5 & 1) != 0) {
            if (((*(byte *)(*local_270 + 2) >> 4 & 1) == 0) ||
               (puVar14 = (uint *)FUN_00426db0(*local_270,0x100000), puVar14 == (uint *)0x0)) {
              uVar8 = 0;
            }
            else {
              uVar8 = *puVar14;
            }
            local_280[0] = (ulong)uVar8;
            uVar8 = FUN_0044df70(local_280,uVar10);
            if ((int)uVar8 <= (int)uVar9) {
              uVar8 = uVar9;
            }
            uVar9 = uVar8;
          }
          goto LAB_00454b94;
        }
        goto LAB_00454a64;
      }
      uVar7 = FUN_00455020(pbVar20,*param_2);
      if ((int)uVar4 <= (int)uVar7) {
        uVar7 = uVar4;
      }
      uVar10 = param_2[1];
      bVar1 = *(byte *)((long)param_1 + 2);
      uVar4 = uVar7;
    }
    bVar3 = true;
    uVar9 = uVar5;
    uVar7 = uVar4;
    uVar5 = 0;
  }
  goto joined_r0x00454acc;
LAB_00454c9c:
  pbVar21 = pbVar20;
  do {
    uVar10 = FUN_004274f0(pbVar21);
    if ((uVar10 >> 7 & 1) != 0) {
      if ((int)uVar9 <= (int)uVar7) {
        uVar9 = uVar7;
      }
      break;
    }
    pbVar21 = *(byte **)(pbVar21 + 8);
  } while (pbVar21 != (byte *)0x0);
  if ((int)uVar5 <= (int)uVar9) goto LAB_00454a64;
  uVar7 = FUN_00455020(pbVar20,*param_2);
  if ((int)uVar4 <= (int)uVar7) {
    uVar7 = uVar4;
  }
  bVar3 = true;
  uVar10 = param_2[1];
  bVar1 = *(byte *)((long)param_1 + 2);
joined_r0x00454acc:
  if (((bVar1 >> 4 & 1) == 0) ||
     (puVar14 = (uint *)FUN_00426db0(param_1,0x100000), puVar14 == (uint *)0x0)) {
    uVar4 = 0;
  }
  else {
    uVar4 = *puVar14;
  }
  local_270 = (long *)(ulong)uVar4;
  uVar10 = FUN_0044df70(&local_270,uVar10);
  if ((int)uVar10 <= (int)uVar9) {
    uVar10 = uVar9;
  }
  uVar4 = FUN_004274f0(param_1);
  uVar9 = uVar10;
  if ((uVar4 >> 7 & 1) != 0) {
    uVar4 = *param_2;
    uVar9 = uVar4;
    if ((int)uVar4 <= (int)uVar10) {
      uVar9 = uVar10;
    }
    iVar6 = 0;
    if (uVar9 != 0) {
      iVar6 = (int)uVar7 / (int)uVar9;
    }
    iVar11 = uVar7 - iVar6 * uVar9;
    iVar6 = 0;
    if (iVar11 != 0) {
      iVar6 = uVar9 - iVar11;
    }
    uVar7 = uVar4 + uVar7 + iVar6;
  }
  if (((((*(byte *)((long)param_1 + 1) >> 6 & 1) != 0) &&
       (plVar18 = (long *)FUN_00426db0(param_1,0x4000), plVar18 != (long *)0x0)) &&
      (puVar16 = (ulong *)*plVar18, puVar16 != (ulong *)0x0)) && (0 < (int)*puVar16)) {
    uVar12 = *puVar16 & 0xffffffff;
    uVar10 = uVar9;
    do {
      uVar22 = puVar16[1];
      iVar11 = FUN_00426fc0(uVar22);
      uVar4 = FUN_00427030(uVar22);
      iVar6 = 0;
      if (uVar4 != 0) {
        iVar6 = (int)uVar7 / (int)uVar4;
      }
      uVar9 = uVar4;
      if ((int)uVar4 <= (int)uVar10) {
        uVar9 = uVar10;
      }
      iVar2 = uVar7 - iVar6 * uVar4;
      iVar6 = 0;
      if (iVar2 != 0) {
        iVar6 = uVar4 - iVar2;
      }
      uVar12 = uVar12 - 1;
      iVar6 = iVar6 + uVar7;
      uVar7 = iVar6 + iVar11;
      puVar16[2] = (long)iVar6;
      uVar10 = uVar9;
      puVar16 = puVar16 + 2;
    } while (uVar12 != 0);
  }
  if (((*(char *)((long)param_1 + 2) < '\0') &&
      (puVar15 = (undefined8 *)FUN_00426db0(param_1,0x800000), puVar15 != (undefined8 *)0x0)) &&
     ((puVar16 = (ulong *)*puVar15, puVar16 != (ulong *)0x0 && ((long)(short)*puVar16 != 0)))) {
    lVar23 = (long)(short)*puVar16 << 3;
    do {
      puVar16 = puVar16 + 1;
      uVar12 = *puVar16;
      FUN_00454890(uVar12,param_2);
      uVar4 = FUN_00427030(uVar12);
      uVar10 = param_2[1];
      if (((*(byte *)(uVar12 + 2) >> 4 & 1) == 0) ||
         (puVar14 = (uint *)FUN_00426db0(uVar12,0x100000), puVar14 == (uint *)0x0)) {
        uVar8 = 0;
      }
      else {
        uVar8 = *puVar14;
      }
      local_270 = (long *)(ulong)uVar8;
      uVar10 = FUN_0044df70(&local_270,uVar10);
      if ((int)uVar10 <= (int)uVar4) {
        uVar10 = uVar4;
      }
      uVar4 = uVar10;
      if ((int)uVar10 <= (int)uVar9) {
        uVar4 = uVar9;
      }
      if (uVar10 != 0) {
        uVar9 = uVar4;
        uVar7 = (uVar7 + uVar10) - 1 & -uVar10;
      }
      local_270 = (long *)*puVar16;
      iVar6 = FUN_004290b0(&local_270);
      puVar19 = (ulong *)FUN_00426d40(local_270,0x20000);
      *puVar19 = (ulong)(uVar7 & 0xffff | iVar6 << 0x10);
      iVar6 = FUN_00426fc0(uVar12);
      uVar7 = iVar6 + uVar7;
      lVar23 = lVar23 + -8;
    } while (lVar23 != 0);
  }
  if ((int)uVar7 <= (int)param_2[3]) {
    uVar7 = param_2[3];
  }
  if ((int)uVar5 <= (int)uVar9) {
    uVar5 = uVar9;
  }
  if (uVar5 != 0) {
    iVar6 = 0;
    if (uVar5 != 0) {
      iVar6 = (int)uVar7 / (int)uVar5;
    }
    iVar11 = uVar7 - iVar6 * uVar5;
    iVar6 = 0;
    if (iVar11 != 0) {
      iVar6 = uVar5 - iVar11;
    }
    uVar7 = iVar6 + uVar7;
  }
  if ((int)uVar7 < 2) {
    uVar7 = 1;
  }
  if ((bVar3) && (iVar6 = FUN_00426fc0(pbVar20), (int)uVar7 < iVar6)) {
    FUN_004426d0(local_280,&local_270,0x200);
    FUN_0043ac90(local_280,
                 "Child\'s final size is less than parent\'s! (Do you have a trailing unreflected field?)"
                );
    iVar6 = FUN_00422320(0x71544192,&local_270,
                         "E:/Havok/Build/.tmp/d20190725-23496-zzy48q/105_hk2019_1_0_Park/Source/Common/Base/Reflect/Builder/hkRecordLayout.cpp"
                         ,0x130);
    if (iVar6 != 0) {
      CallSupervisor(0x26);
    }
    FUN_00442760(local_280);
  }
LAB_00454f68:
  FUN_0044e030(param_1,uVar7,uVar5);
  return;
}

