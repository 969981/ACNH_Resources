
/* WARNING: Removing unreachable block (ram,0x021fcc80) */
/* WARNING: Removing unreachable block (ram,0x021fcc70) */
/* WARNING: Removing unreachable block (ram,0x021fcc8c) */
/* WARNING: Removing unreachable block (ram,0x021fcdc0) */

undefined8 FUN_021fc850(uint *param_1,undefined8 param_2,float *param_3)

{
  uint *puVar1;
  int iVar2;
  byte bVar3;
  ushort uVar4;
  uint uVar5;
  int iVar6;
  undefined *puVar7;
  undefined *puVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  long lVar12;
  undefined2 uVar13;
  ulong uVar14;
  undefined1 uVar15;
  undefined1 uVar16;
  undefined4 uVar17;
  ulong uVar18;
  int iVar19;
  long lVar20;
  long lVar21;
  float fVar22;
  undefined8 local_100;
  float local_f8;
  int local_f4;
  undefined8 local_f0;
  undefined **local_d8;
  undefined **local_d0;
  undefined *local_c8;
  int local_c0;
  int local_bc;
  undefined *local_b8;
  undefined *puStack_b0;
  int local_a8;
  int iStack_a4;
  undefined *local_a0;
  int local_98;
  int iStack_94;
  undefined8 local_8c;
  float local_84;
  
  lVar20 = *(long *)PTR_DAT_04bb30a0;
  lVar21 = *(long *)PTR_DAT_04bb32e8;
  if (lVar20 == 0 || lVar21 == 0) {
    return 0;
  }
  uVar9 = FUN_00a86724(lVar20);
  if (2 < uVar9) {
    return 0;
  }
  uVar9 = FUN_00a867c8(lVar20);
  if (2 < uVar9) {
    return 0;
  }
  if ((*(short *)(lVar21 + 0x4068) == 0) &&
     (local_100 = *(undefined8 *)(lVar21 + 0x4060), (char)(local_100 >> 0x20) < '\x05')) {
    lVar12 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_100);
    local_b8 = (undefined *)(lVar12 + -0x15180);
    nn::time::ToCalendarTimeInUtc((PosixTime *)&local_b8);
  }
  uVar4 = *(ushort *)PTR_DAT_04bb6298;
  uVar14 = (ulong)(short)uVar4;
  if (uVar14 == 0xffffffffffffffff) {
LAB_021fc9a0:
    lVar12 = lVar20 + 0x6526c;
    uVar18 = (long)(char)*(byte *)(lVar20 + 0x651e4) & 0xffffffff;
    if (0x17 < *(byte *)(lVar20 + 0x651e4)) {
      uVar18 = 0;
    }
    uVar9 = *(uint *)(lVar12 + uVar18 * 4);
    if (6 < uVar9) {
      uVar9 = 0;
    }
    local_b8 = (undefined *)CONCAT44(local_b8._4_4_,uVar9);
    if (uVar9 - 1 < 6) {
      if (uVar4 != 0xffff) {
        local_b8 = (undefined *)CONCAT44(local_b8._4_4_,0x17);
        puVar1 = (uint *)(PTR_DAT_04bc39f8 + (uVar14 & 0xffffffff) * 8);
        if (0xff < uVar4) {
          puVar1 = (uint *)PTR_DAT_04bc39f8;
        }
        if ((*puVar1 >> 0x17 & 1) != 0) goto LAB_021fcb50;
      }
      uVar9 = *(uint *)(lVar12 + uVar18 * 4);
      if (6 < uVar9) {
        uVar9 = 0;
      }
      local_b8 = (undefined *)CONCAT44(local_b8._4_4_,uVar9);
      bVar3 = *(byte *)(lVar20 + 0x651e5);
      if (uVar9 < 7) {
        uVar5 = 1 << (ulong)(uVar9 & 0x1f);
        if ((uVar5 & 6) == 0) {
          if ((uVar5 & 0x18) == 0) {
            if ((1 << (ulong)(uVar9 & 0x1f) & 0x60U) != 0) goto LAB_021fcac8;
          }
          else if ('1' < (char)bVar3) {
            fVar22 = 600.0;
            iVar10 = (int)*(char *)(lVar20 + 0x651e6) + (uint)bVar3 * 0x3c + -3000;
            goto LAB_021fcab0;
          }
        }
        else if ((char)bVar3 < '-') {
          iVar10 = (0x2d - (char)bVar3) * 0x3c - (int)*(char *)(lVar20 + 0x651e6);
          fVar22 = 2700.0;
LAB_021fcab0:
          if (0.5 < (float)iVar10 / fVar22) {
LAB_021fcac8:
            if (uVar4 == 0xffff) {
LAB_021fcc04:
              uVar9 = *(uint *)(lVar12 + uVar18 * 4);
              iVar10 = 0;
              if (6 < uVar9) {
                uVar9 = 0;
              }
              if (uVar9 - 1 < 6) {
                iVar10 = *(int *)(&DAT_04179e5c + (long)(int)(uVar9 - 1) * 4);
              }
            }
            else {
              puVar1 = (uint *)(PTR_DAT_04bc39f8 + (uVar14 & 0xffffffff) * 8);
              if (0xff < uVar4) {
                puVar1 = (uint *)PTR_DAT_04bc39f8;
              }
              if ((*puVar1 >> 0x1e & 1) == 0) {
                puVar1 = (uint *)(PTR_DAT_04bc39f8 + (uVar14 & 0xffffffff) * 8);
                if (0xff < uVar4) {
                  puVar1 = (uint *)PTR_DAT_04bc39f8;
                }
                if ((*puVar1 >> 0x17 & 1) == 0) goto LAB_021fcc04;
              }
              iVar10 = 0;
            }
            uVar9 = (uint)(iVar10 != 1);
            goto LAB_021fcc3c;
          }
        }
      }
    }
  }
  else {
    local_b8 = (undefined *)CONCAT44(local_b8._4_4_,0x1e);
    puVar1 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)(short)uVar4 * 8);
    if (0xff < (uint)(int)(short)uVar4) {
      puVar1 = (uint *)PTR_DAT_04bc39f8;
    }
    if ((*puVar1 >> 0x1e & 1) == 0) {
      local_b8 = (undefined *)CONCAT44(local_b8._4_4_,0x17);
      puVar1 = (uint *)(PTR_DAT_04bc39f8 + (uVar14 & 0xffffffff) * 8);
      if (0xff < uVar4) {
        puVar1 = (uint *)PTR_DAT_04bc39f8;
      }
      if ((*puVar1 >> 0x17 & 1) == 0) goto LAB_021fc9a0;
    }
  }
LAB_021fcb50:
  iVar10 = FUN_00a90a00(lVar20);
  if (iVar10 == 0xf) {
    if (*(char *)(lVar21 + 0x4064) < '\x16') {
      if ((*(char *)(lVar21 + 0x4064) < '\x02') && (*(char *)(lVar21 + 0x4065) < '\x1f'))
      goto LAB_021fcb90;
    }
    else if ('\x1d' < *(char *)(lVar21 + 0x4065)) {
LAB_021fcb90:
      uVar9 = 4;
      goto LAB_021fcc3c;
    }
  }
  uVar14 = FUN_00a8eef0(lVar20,(undefined8 *)(lVar21 + 0x4060));
  if (((uVar14 & 1) != 0) || (fVar22 = (float)FUN_00a8f088(lVar20), fVar22 <= 0.5)) {
    uVar14 = FUN_00a8f1d0(lVar20);
    if ((uVar14 & 1) == 0) {
      local_b8 = (undefined *)CONCAT44(local_b8._4_4_,*(int *)(lVar20 + 0x653f4));
      if (*(int *)(lVar20 + 0x653f4) == 0) {
        return 0;
      }
      fVar22 = (float)FUN_00a8ee7c(lVar20);
      if (fVar22 <= 0.5) {
        return 0;
      }
      uVar9 = 5;
    }
    else {
      uVar9 = 3;
    }
  }
  else {
    uVar9 = 2;
  }
LAB_021fcc3c:
  *param_1 = uVar9;
  puVar8 = PTR_DAT_04bbbc68;
  puVar7 = PTR_DAT_04bb37e0;
  lVar20 = *(long *)(*(long *)PTR_DAT_04bb27a8 + 0x1f8);
  if (lVar20 == 0) {
    return 0;
  }
  iVar10 = (int)((float)(int)*param_3 / 5.0) - (uint)(*param_3 < 0.0);
  iVar6 = (int)((float)(int)param_3[2] / 5.0) - (uint)(param_3[2] < 0.0);
  local_98 = *(int *)(lVar20 + 0x20);
  if (iVar10 + -2 < local_98) {
    iVar19 = local_98 + 5;
  }
  else {
    iVar2 = *(int *)(lVar20 + 0x30);
    iVar11 = iVar10 + 2;
    iVar19 = iVar11;
    if (iVar2 <= iVar11) {
      iVar19 = iVar2;
    }
    local_98 = iVar2 + -5;
    if (iVar11 <= iVar2) {
      local_98 = iVar10 + -2;
    }
  }
  iStack_94 = *(int *)(lVar20 + 0x24);
  if (iVar6 + -0xd < iStack_94) {
    iVar11 = iStack_94 + 0xd;
  }
  else {
    iVar2 = *(int *)(lVar20 + 0x34);
    iVar11 = iVar6;
    if (iVar2 <= iVar6) {
      iVar11 = iVar2;
    }
    iStack_94 = iVar2 + -0xd;
    if (iVar6 <= iVar2) {
      iStack_94 = iVar6 + -0xd;
    }
  }
  iVar2 = local_98;
  if (iVar19 <= local_98) {
    iVar2 = iVar19;
  }
  if (local_98 <= iVar19) {
    local_98 = iVar19;
  }
  local_bc = iStack_94;
  if (iVar11 <= iStack_94) {
    local_bc = iVar11;
  }
  if (iStack_94 <= iVar11) {
    iStack_94 = iVar11;
  }
  iVar19 = iStack_94 + 1;
  local_b8 = PTR_DAT_04bbc1a0 + 0x10;
  local_c8 = PTR_DAT_04bb2010 + 0x10;
  local_d8 = &puStack_b0;
  local_d0 = &local_a0;
  if (iVar19 != local_bc) {
    local_c0 = iVar2;
    puStack_b0 = local_c8;
    local_a8 = iVar2;
    iStack_a4 = local_bc;
    local_a0 = local_c8;
    do {
      local_100 = (ulong)(uint)((float)iVar10 * 5.0 + 2.5);
      local_84 = (float)local_bc * 5.0 + 2.5;
      local_8c = (ulong)(uint)((float)local_c0 * 5.0 + 2.5);
      local_f8 = (float)iVar6 * 5.0 + 2.5;
      iVar11 = FUN_01318f40(&local_100,&local_8c);
      if (0 < iVar11) {
        return 0;
      }
      local_8c = 0xfffe;
      FUN_0277d4ac(&local_8c);
      if (*(long *)(lVar20 + 0xd0) == 0) {
        uVar13 = *(undefined2 *)puVar7;
        uVar15 = puVar7[2];
        uVar16 = puVar7[3];
        uVar17 = *(undefined4 *)(puVar7 + 4);
      }
      else {
        FUN_012e4d78(&local_100,*(long *)(lVar20 + 0xd0),&local_c8);
        uVar13 = (undefined2)local_100;
        uVar15 = local_100._2_1_;
        uVar16 = local_100._3_1_;
        uVar17 = local_100._4_4_;
      }
      lVar21 = *(long *)puVar8;
      local_8c = CONCAT44(uVar17,CONCAT13(uVar16,CONCAT12(uVar15,uVar13)));
      if ((((lVar21 != 0) && (*(long *)(lVar21 + 0xb0) != 0)) &&
          (*(long *)(*(long *)(lVar21 + 0xb0) + 8) != 0)) &&
         (((*(long *)(lVar21 + 0x488) != 0 && (*(long *)(*(long *)(lVar21 + 0x488) + 8) != 0)) &&
          ((*(long *)(lVar21 + 0x2b0) != 0 && (*(long *)(*(long *)(lVar21 + 0x2b0) + 8) != 0)))))) {
        uVar9 = FUN_0277d6c4(&local_8c);
        uVar9 = (uVar9 & 0xffff) - (uint)*(ushort *)(lVar21 + 0x1f8);
        if ((uVar9 < *(uint *)(lVar21 + 0x1d8)) &&
           (*(long *)(*(long *)(lVar21 + 0x1e0) + (long)(int)uVar9 * 8) != 0)) {
          FUN_0124c030(&local_100,&local_8c);
          uVar14 = FUN_0123d890(local_f0,4);
          if ((uVar14 & 1) != 0) {
            return 0;
          }
        }
      }
      FUN_02a58f80(&local_100,lVar20 + 0x148,&local_c8);
      if ((local_f4 != 0) &&
         (((local_f4 == 0 || (local_f4 != 0x1a)) || (((uint)local_f8 & 1) != 0)))) {
        if (local_f4 == 0) {
          return 0;
        }
        if (local_f4 != 0x1b) {
          return 0;
        }
        if (((uint)local_f8 & 1) != 0) {
          return 0;
        }
      }
      if (local_c0 < *(int *)(local_d0 + 1)) {
        local_c0 = local_c0 + 1;
      }
      else {
        local_bc = local_bc + 1;
        local_c0 = *(int *)(local_d8 + 1);
      }
    } while ((iVar2 != local_c0) || (iVar19 != local_bc));
  }
  return 1;
}

