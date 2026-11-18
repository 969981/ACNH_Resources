
/* WARNING: Removing unreachable block (ram,0x0359c9e4) */
/* WARNING: Removing unreachable block (ram,0x0359c9f4) */

void FUN_0359c3d4(uint *param_1,ulong *param_2)

{
  byte bVar1;
  uint *puVar2;
  short sVar3;
  undefined *puVar4;
  undefined *puVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  char cVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  undefined8 uVar14;
  long lVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  long lVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  undefined8 *puVar24;
  float fVar25;
  float fVar26;
  undefined8 local_b0;
  undefined4 local_a8;
  undefined4 uStack_a4;
  long local_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined *local_90;
  undefined4 local_88;
  undefined4 local_84;
  byte local_80;
  undefined *local_78;
  int local_70;
  int iStack_6c;
  int local_64;
  ulong local_60;
  float local_58;
  int local_54;
  
  puVar5 = PTR_DAT_04bb46c8;
  uVar18 = *param_2;
  local_54 = (int)param_2[3];
  fVar26 = *(float *)(param_2 + 1);
  local_64 = 7;
  local_60 = uVar18;
  local_58 = fVar26;
  if (local_54 == 7) {
    if (*(char *)((long)param_2 + 0x1c) == '\0') {
      local_60._0_4_ = (float)uVar18;
      fVar25 = (float)local_60;
      local_78 = PTR_DAT_04bb2010 + 0x10;
      local_88 = 0;
      local_90 = PTR_DAT_04bbfe68 + 0x10;
      local_70 = (int)((float)(int)(float)local_60 / 5.0) - (uint)((float)local_60 < 0.0);
      iStack_6c = (int)((float)(int)fVar26 / 5.0) - (uint)(fVar26 < 0.0);
      lVar19 = *(long *)PTR_DAT_04bb2720;
      if (lVar19 == 0) {
        puVar24 = &DAT_055c04a0;
      }
      else {
        puVar24 = &DAT_055c04a0;
        if (*(long *)(lVar19 + 0x330) != 0) {
          puVar24 = (undefined8 *)
                    (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                              (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar19 + 0x338));
          iVar11 = FUN_006bd550(*puVar24,0);
          puVar24 = (undefined8 *)PTR_DAT_04bc3a80;
          if (iVar11 != 0x758f7eaf) {
            puVar24 = &DAT_055c04a0;
          }
        }
      }
      local_84 = *(undefined4 *)(puVar24 + 7);
      local_80 = FUN_017baf44();
      local_80 = local_80 & 1;
      FUN_01a5033c(&local_98,&local_90,0,&local_78,0);
      if ((short)local_98 != -2) {
        lVar19 = *(long *)PTR_DAT_04bbbc68;
        if ((((((lVar19 == 0) || (*(long *)(lVar19 + 0xb0) == 0)) ||
              (*(long *)(*(long *)(lVar19 + 0xb0) + 8) == 0)) ||
             ((*(long *)(lVar19 + 0x488) == 0 || (*(long *)(*(long *)(lVar19 + 0x488) + 8) == 0))))
            || (*(long *)(lVar19 + 0x2b0) == 0)) || (*(long *)(*(long *)(lVar19 + 0x2b0) + 8) == 0))
        {
LAB_0359c66c:
          puVar4 = PTR_DAT_04bb43c0;
          lVar15 = *(long *)PTR_DAT_04bb43c0;
          uVar12 = FUN_0277d6c4(&local_98);
          lVar19 = *(long *)puVar4;
          if (lVar19 != 0) {
            lVar15 = *(long *)(lVar15 + 0x57e58);
            uVar12 = (uVar12 & 0xffff) - (uint)*(ushort *)(lVar15 + 0x1f8);
            if ((uVar12 < *(uint *)(lVar15 + 0x1d8)) &&
               (*(long *)(*(long *)(lVar15 + 0x1e0) + (long)(int)uVar12 * 8) != 0)) {
              local_a0 = 0;
              local_b0 = PTR_DAT_04bc0510 + 0x10;
              local_a8 = local_98;
              uStack_a4 = uStack_94;
              uVar12 = FUN_0277d6c4(&local_a8);
              if (*(long *)puVar4 != 0) {
                lVar19 = *(long *)(lVar19 + 0x57e58);
                uVar12 = (uVar12 & 0xffff) - (uint)*(ushort *)(lVar19 + 0x1f8);
                if ((uVar12 < *(uint *)(lVar19 + 0x1d8)) &&
                   (*(long *)(*(long *)(lVar19 + 0x1e0) + (long)(int)uVar12 * 8) != 0)) {
                  lVar19 = *(long *)PTR_DAT_04bc0428;
                  uVar12 = FUN_0277d6c4(&local_98);
                  uVar12 = (uVar12 & 0xffff) - (uint)*(ushort *)(lVar19 + 0x1f8);
                  if (uVar12 < *(uint *)(lVar19 + 0x1d8)) {
                    lVar19 = *(long *)(*(long *)(lVar19 + 0x1e0) + (long)(int)uVar12 * 8);
                    if (lVar19 != 0) {
                      local_a0 = lVar19;
                    }
                  }
                }
              }
              uVar18 = FUN_01ae5f4c(&local_b0);
              if ((uVar18 & 1) == 0) {
                uVar18 = FUN_01ae59b0(&local_b0);
                bVar1 = local_a8._2_1_ >> 2 & 1;
                if ((uVar18 & 1) == 0) {
                  bVar1 = local_a8._2_1_ & 4;
                }
                if (bVar1 == 0) {
                  local_64 = FUN_01b022d0(&local_b0);
                  goto LAB_0359cac8;
                }
              }
            }
          }
        }
        else {
          uVar12 = FUN_0277d6c4(&local_98);
          uVar12 = (uVar12 & 0xffff) - (uint)*(ushort *)(lVar19 + 0x1f8);
          if ((*(uint *)(lVar19 + 0x1d8) <= uVar12) ||
             (*(long *)(*(long *)(lVar19 + 0x1e0) + (long)(int)uVar12 * 8) == 0)) goto LAB_0359c66c;
          FUN_0124c030(&local_b0,&local_98);
          if (((*(long *)puVar5 == 0) ||
              (iVar11 = FUN_0123db50(&local_a8,local_a0), 5 < iVar11 - 0x12U)) ||
             (uVar14 = FUN_0359cae0(uVar18 & 0xffffffff,fVar26),
             fVar25 = ((float)(int)uVar14 * 10.0 + 5.0) - fVar25,
             fVar26 = ((float)(int)((ulong)uVar14 >> 0x20) * 10.0 + 5.0) - fVar26,
             12.5 <= fVar26 * fVar26 + fVar25 * fVar25)) goto LAB_0359c78c;
          local_64 = 0x42;
LAB_0359cac8:
          if (local_64 != 7) goto LAB_0359c7c0;
        }
      }
LAB_0359c78c:
      lVar19 = *(long *)PTR_DAT_04bb27c8;
      if (((lVar19 != 0) && (*(long *)(lVar19 + 0xa8) != 0)) && (*(char *)(lVar19 + 0x11c8) == '\0')
         ) {
        FUN_0093a950(lVar19 + 0x28,&local_60,&local_64);
      }
    }
    else {
      lVar19 = *(long *)PTR_DAT_04bb27c8;
      if (((lVar19 != 0) && (*(long *)(lVar19 + 0xa8) != 0)) && (*(char *)(lVar19 + 0x11c8) == '\0')
         ) {
        FUN_0093b024(lVar19 + 0x28,&local_60,&local_64);
      }
    }
LAB_0359c7c0:
    if (local_64 != 0x1c) goto LAB_0359c7cc;
LAB_0359c7d4:
    lVar19 = *(long *)PTR_DAT_04bb27c8;
    if (((lVar19 != 0) && (*(long *)(lVar19 + 0xa8) != 0)) && (*(char *)(lVar19 + 0x11c8) == '\0'))
    {
      FUN_0093b024(lVar19 + 0x28,&local_60,&local_64);
    }
  }
  else {
    local_64 = local_54;
    if (local_54 == 0x1c) goto LAB_0359c7d4;
LAB_0359c7cc:
    if (local_64 == 8) goto LAB_0359c7d4;
  }
  sVar3 = *(short *)PTR_DAT_04bb6298;
  if (sVar3 == -1) {
LAB_0359c858:
    lVar19 = *(long *)PTR_DAT_04bb30a0;
    if (lVar19 == 0) {
      fVar26 = 0.0;
    }
    else {
      fVar26 = *(float *)(lVar19 + 0x65344);
      local_b0 = (undefined *)FUN_00a8c31c(lVar19);
      if ((char)((ulong)local_b0 >> 0x20) < '\x05') {
        lVar15 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_b0);
        local_90 = (undefined *)(lVar15 + -0x15180);
        local_b0 = (undefined *)nn::time::ToCalendarTimeInUtc((PosixTime *)&local_90);
      }
      uVar16 = (ulong)local_b0 >> 0x10;
      uVar18 = (ulong)local_b0 >> 0x30;
      uVar17 = (ulong)local_b0 >> 0x18;
      local_b0._0_6_ = CONCAT24(5,(undefined4)local_b0);
      local_b0 = (undefined *)(CONCAT26((short)uVar18,(undefined6)local_b0) & 0xff00ffffffffffff);
      cVar10 = FUN_00a8ae20(lVar19,uVar16,uVar17,4);
      if ((cVar10 == '\x02') && (local_64 == 0)) {
        local_64 = 0x15;
      }
    }
  }
  else {
    local_90 = (undefined *)((ulong)local_90 & 0xffffffff00000000);
    fVar26 = 0.0;
    puVar2 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar3 * 8);
    if (0xff < (uint)(int)sVar3) {
      puVar2 = (uint *)PTR_DAT_04bc39f8;
    }
    if ((*puVar2 & 1) == 0) goto LAB_0359c858;
  }
  if (((*(long *)PTR_DAT_04bb2200 != 0) && (*(long *)(*(long *)PTR_DAT_04bb2200 + 0x70) != 0)) &&
     ((*(char *)(*(long *)PTR_DAT_04bb28b0 + 0x961) != '\0' && (local_64 == 0)))) {
    local_64 = 0x14;
  }
  lVar19 = *(long *)puVar5;
  if (lVar19 == 0) {
    uVar13 = 0xffffffff;
    uVar12 = 0xffffffff;
  }
  else {
    uVar12 = FUN_009813f0(lVar19,local_64);
    uVar12 = uVar12 & 0xffff;
    uVar13 = FUN_00981240(lVar19,local_64);
    uVar13 = uVar13 & 0xffff;
    if ((0.1 < fVar26) && ((uVar12 == 4 || (uVar12 == 7)))) {
      uVar12 = 8;
    }
  }
  uVar20 = (uint)(0.0 < fVar26);
  uVar21 = 0;
  uVar22 = uVar20;
  uVar23 = 4;
  switch(local_64) {
  case 0x1d:
    fVar26 = 0.0;
    if ((*(long *)(*(long *)PTR_DAT_04bb27a8 + 0x1f8) != 0) &&
       (lVar19 = *(long *)(*(long *)(*(long *)PTR_DAT_04bb27a8 + 0x1f8) + 0xb8), lVar19 != 0)) {
      fVar26 = *(float *)(lVar19 + 0x6d0);
    }
    fVar25 = fVar26 / 100.0;
    uVar22 = 0;
    if (fVar25 != (float)(int)fVar25) {
      uVar22 = (uint)(fVar25 < 0.0);
    }
    fVar26 = fVar26 - (float)(int)((int)fVar25 - uVar22) * 100.0;
    bVar6 = true;
    bVar9 = false;
    if (fVar26 <= 100.0) {
      bVar6 = false;
      bVar9 = true;
      if (!NAN(fVar26)) {
        bVar6 = fVar26 < 70.0;
        bVar9 = false;
      }
    }
    bVar7 = false;
    bVar8 = false;
    if (bVar6 != bVar9) {
      bVar7 = false;
      bVar8 = true;
      if (!NAN(fVar26)) {
        bVar7 = fVar26 == 30.0;
        bVar8 = 30.0 <= fVar26;
      }
    }
    uVar22 = 2;
    if (bVar8 && !bVar7) {
      uVar22 = uVar20;
    }
  default:
    uVar21 = 0;
    uVar20 = uVar22;
    break;
  case 0x27:
    uVar21 = 1;
    break;
  case 0x32:
    goto switchD_0359c9bc_caseD_32;
  case 0x35:
  case 0x3c:
  case 0x3d:
  case 0x3e:
    uVar21 = 0;
    uVar23 = 3;
    goto switchD_0359c9bc_caseD_32;
  case 0x43:
    uVar21 = 2;
    break;
  case 0x45:
    uVar21 = 3;
    break;
  case 0x48:
    uVar21 = 0;
    uVar23 = 5;
    goto switchD_0359c9bc_caseD_32;
  }
  uVar23 = uVar20;
switchD_0359c9bc_caseD_32:
  *param_1 = uVar13;
  param_1[1] = uVar12;
  param_1[2] = uVar23;
  param_1[3] = uVar21;
  return;
}

