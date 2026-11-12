
/* WARNING: Removing unreachable block (ram,0x00a8a260) */
/* WARNING: Removing unreachable block (ram,0x00a897b0) */
/* WARNING: Removing unreachable block (ram,0x00a89610) */
/* WARNING: Removing unreachable block (ram,0x00a89c54) */

void FUN_00a88608(long param_1,ulong param_2)

{
  float *pfVar1;
  ulong *puVar2;
  CalendarTime *pCVar3;
  undefined *puVar4;
  char cVar5;
  char cVar6;
  char cVar7;
  short sVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  undefined *puVar15;
  byte bVar16;
  byte bVar17;
  int iVar18;
  undefined4 uVar19;
  int iVar20;
  uint uVar21;
  uint uVar22;
  ulong uVar23;
  long lVar24;
  undefined8 uVar25;
  ulong uVar26;
  long lVar27;
  long *plVar28;
  long *plVar29;
  int *piVar30;
  int iVar31;
  int iVar32;
  uint *puVar33;
  int iVar34;
  float *pfVar35;
  int *piVar36;
  uint *puVar37;
  CalendarTime *pCVar38;
  ulong *puVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  undefined8 local_e4;
  undefined4 local_dc;
  undefined8 local_d8;
  float local_d0;
  undefined4 local_c8;
  byte bStack_c4;
  undefined1 uStack_c3;
  undefined1 uStack_c2;
  undefined1 uStack_c1;
  float local_c0;
  undefined8 local_b8;
  float local_b0;
  
  if (((param_2 & 1) == 0) && (uVar23 = FUN_02640eb0(), (uVar23 & 1) == 0)) {
    return;
  }
  pfVar1 = (float *)(param_1 + 0x653a4);
  iVar18 = *(int *)(param_1 + 0x65410);
  plVar29 = (long *)(param_1 + 0x64f90);
  switch(iVar18) {
  case 0:
    goto switchD_00a88678_caseD_0;
  case 1:
    *(undefined4 *)(param_1 + 0x653fc) = 0;
    *(undefined8 *)(param_1 + 0x65430) = 0;
    *(undefined4 *)(param_1 + 0x65404) = 0;
    break;
  case 2:
  case 3:
  case 4:
  case 5:
  case 6:
  case 7:
    iVar20 = *(int *)(param_1 + 0x65430) + 1;
    iVar31 = *(int *)(param_1 + 0x65434) + 1;
    *(int *)(param_1 + 0x65430) = iVar20;
    *(int *)(param_1 + 0x65434) = iVar31;
    uVar23 = (ulong)*(uint *)(param_1 + 0x6542c);
    if (5 < *(uint *)(param_1 + 0x6542c)) {
      uVar23 = 0;
    }
    fVar45 = (float)iVar20 / (float)*(int *)(param_1 + 0x65414 + uVar23 * 4);
    *(float *)(param_1 + 0x653fc) = fVar45;
    if (iVar18 == 7) {
      pfVar35 = (float *)(param_1 + 0x65408);
LAB_00a88720:
      *pfVar35 = fVar45;
    }
    else if (iVar18 == 5) {
      pfVar35 = (float *)(param_1 + 0x65400);
      goto LAB_00a88720;
    }
    uVar23 = (ulong)*(uint *)(param_1 + 0x6542c);
    if (5 < *(uint *)(param_1 + 0x6542c)) {
      uVar23 = 0;
    }
    if (*(int *)(param_1 + 0x65414 + uVar23 * 4) <= iVar20) {
      FUN_00a88244(param_1,*(int *)(param_1 + 0x65410) + 1);
      iVar31 = *(int *)(param_1 + 0x65434);
    }
    if ((0 < *(int *)(param_1 + 0x65440)) && (*(int *)(param_1 + 0x65440) <= iVar31))
    goto LAB_00a887f4;
LAB_00a887b4:
    *(undefined4 *)(param_1 + 0x65404) = 0;
    break;
  case 8:
    *(undefined4 *)(param_1 + 0x653fc) = 0;
    *(int *)(param_1 + 0x65430) = *(int *)(param_1 + 0x65430) + 1;
    *(int *)(param_1 + 0x65434) = *(int *)(param_1 + 0x65434) + 1;
    goto LAB_00a887f4;
  case 9:
    *(undefined4 *)(param_1 + 0x653fc) = 0;
    *(undefined8 *)(param_1 + 0x65430) = 0;
    goto LAB_00a887f4;
  case 10:
  case 0xb:
  case 0xc:
  case 0xd:
  case 0xe:
  case 0xf:
    iVar20 = *(int *)(param_1 + 0x65430) + 1;
    iVar31 = *(int *)(param_1 + 0x65434) + 1;
    *(int *)(param_1 + 0x65430) = iVar20;
    *(int *)(param_1 + 0x65434) = iVar31;
    uVar23 = (ulong)*(uint *)(param_1 + 0x6542c);
    if (5 < *(uint *)(param_1 + 0x6542c)) {
      uVar23 = 0;
    }
    fVar45 = (float)iVar20 / (float)*(int *)(param_1 + 0x65414 + uVar23 * 4);
    *(float *)(param_1 + 0x653fc) = fVar45;
    if (iVar18 == 0xb) {
      *(float *)(param_1 + 0x65408) = 1.0 - fVar45;
    }
    else if (iVar18 == 0xd) {
      *(float *)(param_1 + 0x65400) = 1.0 - fVar45;
    }
    uVar23 = (ulong)*(uint *)(param_1 + 0x6542c);
    if (5 < *(uint *)(param_1 + 0x6542c)) {
      uVar23 = 0;
    }
    if (*(int *)(param_1 + 0x65414 + uVar23 * 4) <= iVar20) {
      FUN_00a88244(param_1,*(int *)(param_1 + 0x65410) + 1);
      iVar31 = *(int *)(param_1 + 0x65434);
    }
    if ((0 < *(int *)(param_1 + 0x65440)) && (*(int *)(param_1 + 0x65440) <= iVar31))
    goto LAB_00a887b4;
LAB_00a887f4:
    *(undefined4 *)(param_1 + 0x65404) = 0x3f800000;
    break;
  case 0x10:
    *(undefined4 *)(param_1 + 0x653fc) = 0;
    *(undefined4 *)(param_1 + 0x65404) = 0;
    *(int *)(param_1 + 0x65430) = *(int *)(param_1 + 0x65430) + 1;
    *(int *)(param_1 + 0x65434) = *(int *)(param_1 + 0x65434) + 1;
    break;
  default:
    *(undefined4 *)(param_1 + 0x653fc) = 0;
  }
  fVar45 = 0.0;
  if (*(char *)(param_1 + 0x65444) == '\0') goto switchD_00a88830_caseD_8;
  fVar45 = 1.0;
  switch(*(undefined4 *)(param_1 + 0x65410)) {
  case 5:
    fVar45 = (float)*(int *)(param_1 + 0x65430) /
             (float)(*(int *)(param_1 + 0x65424) + *(int *)(param_1 + 0x65420) +
                    *(int *)(param_1 + 0x65428));
    break;
  case 6:
    iVar18 = *(int *)(param_1 + 0x65420);
    iVar20 = *(int *)(param_1 + 0x65424) + iVar18 + *(int *)(param_1 + 0x65428);
    goto LAB_00a888a0;
  case 7:
    iVar18 = *(int *)(param_1 + 0x65424) + *(int *)(param_1 + 0x65420);
    iVar20 = iVar18 + *(int *)(param_1 + 0x65428);
LAB_00a888a0:
    fVar45 = (float)(*(int *)(param_1 + 0x65430) + iVar18) / (float)iVar20;
    break;
  case 8:
    break;
  default:
    goto switchD_00a88678_caseD_0;
  case 0xb:
    iVar18 = *(int *)(param_1 + 0x65430);
    iVar20 = *(int *)(param_1 + 0x6541c) + *(int *)(param_1 + 0x65418);
    iVar31 = *(int *)(param_1 + 0x65420);
    goto LAB_00a88908;
  case 0xc:
    iVar18 = *(int *)(param_1 + 0x65430) + *(int *)(param_1 + 0x65418);
    iVar20 = *(int *)(param_1 + 0x6541c) + *(int *)(param_1 + 0x65418) + *(int *)(param_1 + 0x65420)
    ;
    goto LAB_00a8890c;
  case 0xd:
    iVar20 = *(int *)(param_1 + 0x6541c) + *(int *)(param_1 + 0x65418);
    iVar31 = *(int *)(param_1 + 0x65420);
    iVar18 = *(int *)(param_1 + 0x65430) + iVar20;
LAB_00a88908:
    iVar20 = iVar20 + iVar31;
LAB_00a8890c:
    fVar45 = 1.0 - (float)iVar18 / (float)iVar20;
    break;
  case 0xe:
  case 0xf:
  case 0x10:
    fVar45 = 0.0;
  }
switchD_00a88830_caseD_8:
  *(float *)(param_1 + 0x6540c) = fVar45;
switchD_00a88678_caseD_0:
  puVar15 = PTR_DAT_04bb6298;
  sVar8 = *(short *)PTR_DAT_04bb6298;
  if (sVar8 == -1) {
LAB_00a88b08:
    uVar25 = *(undefined8 *)(*(long *)PTR_DAT_04bb32e8 + 0x4060);
LAB_00a88b18:
    *(undefined8 *)(param_1 + 0x651c8) = uVar25;
  }
  else {
    local_b8 = CONCAT44(local_b8._4_4_,0x1e);
    puVar33 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar8 * 8);
    if (0xff < (uint)(int)sVar8) {
      puVar33 = (uint *)PTR_DAT_04bc39f8;
    }
    if (((((*puVar33 >> 0x1e & 1) == 0) ||
         (uVar21 = (uint)*(ushort *)(*(long *)PTR_DAT_04bb4928 + 10) - (uint)DAT_0534e320,
         DAT_0534e300 <= uVar21)) ||
        (puVar33 = *(uint **)(DAT_0534e308 + (long)(int)uVar21 * 8), puVar33 == (uint *)0x0)) ||
       (uVar21 = *puVar33, uVar21 == 0 || puVar33 == (uint *)(ulong)uVar21)) goto LAB_00a88b08;
    puVar37 = (uint *)((long)puVar33 - (long)(ulong)uVar21);
    if (((*puVar37 == 0) || (uVar21 = puVar37[1], uVar21 == 0)) || ((ulong)(ushort)puVar37[2] == 0))
    goto LAB_00a88b08;
    lVar24 = 0xc;
    if (*(char *)((long)puVar37 + 10) != '\0') {
      lVar24 = 0x1c;
    }
    lVar24 = (long)puVar37 + lVar24 + (ulong)(ushort)puVar37[2] * 8;
    if (lVar24 == 0) goto LAB_00a88b08;
    uVar22 = 0;
    if ((ulong)uVar21 != 0) {
      uVar22 = (uint)((ulong)((long)puVar33 - lVar24) / (ulong)uVar21);
    }
    if (*puVar37 <= uVar22) {
      uVar22 = 0xffffffff;
    }
    if ((*(uint *)PTR_DAT_04bc0e58 <= uVar22) ||
       (*(short *)(*(long *)(PTR_DAT_04bc0e58 + 8) + (long)(int)uVar22 * 2) != 3))
    goto LAB_00a88b08;
    pCVar38 = (CalendarTime *)(param_1 + 0x65438);
    if (*(short *)pCVar38 != 0) {
      *(undefined8 *)(param_1 + 0x651c8) = *(undefined8 *)pCVar38;
    }
    if (*(char *)(param_1 + 0x65444) == '\0') goto switchD_00a88a6c_default;
    switch(*(undefined4 *)(param_1 + 0x65410)) {
    case 5:
    case 6:
    case 7:
      local_d8 = *(undefined8 *)(param_1 + 0x65438);
      local_c8._0_2_ = (short)local_d8;
      local_c8._2_2_ = (undefined2)((ulong)local_d8 >> 0x10);
      uStack_c1 = (undefined1)((ulong)local_d8 >> 0x38);
      bStack_c4 = 4;
      uStack_c3 = 0x1e;
      uStack_c2 = 0;
      lVar24 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_d8);
      local_b8 = lVar24 + 0x15180;
      uVar25 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_b8);
      local_d8._0_4_ = (float)uVar25;
      local_d8._7_1_ = (undefined1)((ulong)uVar25 >> 0x38);
      local_d8._0_7_ = (uint7)(uint)(float)local_d8;
      local_b8 = FUN_00a829b0(*(undefined4 *)(param_1 + 0x6540c),*(undefined8 *)PTR_DAT_04bb32e8,
                              &local_c8,&local_d8);
      lVar24 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_b8);
      lVar27 = nn::time::ToPosixTimeFromUtc(pCVar38);
      if ((lVar27 < lVar24) || (lVar27 = nn::time::ToPosixTimeFromUtc(pCVar38), lVar27 == lVar24)) {
        pCVar38 = (CalendarTime *)&local_b8;
      }
      uVar25 = *(undefined8 *)pCVar38;
      goto LAB_00a88b18;
    case 8:
      FUN_00a80e9c(param_1 + 0x651c8,1);
      *(undefined2 *)(param_1 + 0x651cc) = 0;
      *(undefined1 *)(param_1 + 0x651ce) = 0;
      break;
    case 9:
    case 10:
      *(undefined1 *)(param_1 + 0x651ce) = 0;
      *(undefined2 *)(param_1 + 0x651cc) = 5;
      break;
    case 0xb:
    case 0xc:
    case 0xd:
      local_b8 = *(long *)(param_1 + 0x65438);
      local_c8._0_2_ = (short)local_b8;
      local_c8._2_2_ = (undefined2)(local_b8 >> 0x10);
      uStack_c1 = (undefined1)(local_b8 >> 0x38);
      bStack_c4 = 5;
      uStack_c3 = 0;
      uStack_c2 = 0;
      uVar25 = FUN_00a829b0(*(undefined4 *)(param_1 + 0x6540c),*(undefined8 *)PTR_DAT_04bb32e8,
                            &local_b8,&local_c8);
      *(undefined8 *)(param_1 + 0x651c8) = uVar25;
    }
  }
switchD_00a88a6c_default:
  if (*(char *)(param_1 + 0x65449) != '\0') {
    *(undefined8 *)(param_1 + 0x6544a) = *(undefined8 *)(param_1 + 0x651c8);
  }
  puVar2 = (ulong *)(param_1 + 0x651f0);
  if (((-1 < *(char *)(param_1 + 0x65446)) && (-1 < *(char *)(param_1 + 0x65447))) &&
     (-1 < *(char *)(param_1 + 0x65448))) {
    pCVar38 = (CalendarTime *)(param_1 + 0x651c8);
    iVar18 = FUN_00a8255c(pCVar38,param_1 + 0x6544a);
    *(undefined2 *)(param_1 + 0x651cc) = *(undefined2 *)(param_1 + 0x65446);
    *(undefined1 *)(param_1 + 0x651ce) = *(undefined1 *)(param_1 + 0x65448);
    if (*(short *)(param_1 + 0x651c8) != 0) {
      lVar24 = nn::time::ToPosixTimeFromUtc(pCVar38);
      local_b8 = lVar24 + iVar18;
      uVar25 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_b8);
      *(undefined8 *)pCVar38 = uVar25;
    }
  }
  if (((-1 < *(char *)(param_1 + 0x65ad4)) && (-1 < *(char *)(param_1 + 0x65ad5))) &&
     (-1 < *(char *)(param_1 + 0x65ad6))) {
    *(char *)(param_1 + 0x651cc) = *(char *)(param_1 + 0x65ad4);
    *(char *)(param_1 + 0x651cd) = *(char *)(param_1 + 0x65ad5);
    *(char *)(param_1 + 0x651ce) = *(char *)(param_1 + 0x65ad6);
  }
  uVar23 = *puVar2;
  if (((uVar23 & 0xffff) == 0) ||
     (uVar26 = nn::time::IsValidDate
                         ((int)(short)uVar23,((int)uVar23 << 8) >> 0x18,(int)uVar23 >> 0x18),
     (uVar26 & 1) == 0)) {
    FUN_028da85c(puVar2,3,1);
    uVar23 = *puVar2;
    uVar21 = (uint)uVar23 & 0xffff;
  }
  else {
    uVar21 = 1;
  }
  pCVar38 = (CalendarTime *)(param_1 + 0x651e0);
  pCVar3 = (CalendarTime *)(param_1 + 0x651e8);
  *(ulong *)(param_1 + 0x651d8) = uVar23;
  *(ulong *)(param_1 + 0x651e0) = uVar23;
  *(ulong *)(param_1 + 0x651e8) = uVar23;
  if (uVar21 != 0) {
    cVar5 = *(char *)(param_1 + 0x651cc);
    cVar6 = *(char *)(param_1 + 0x651ce);
    cVar7 = *(char *)(param_1 + 0x651cd);
    lVar24 = 0x12;
    if (5 < (long)cVar5) {
      lVar24 = -6;
    }
    lVar27 = nn::time::ToPosixTimeFromUtc((CalendarTime *)(param_1 + 0x651d8));
    local_b8 = lVar27 + (lVar24 + cVar5) * 0xe10 + (long)(int)cVar7 * 0x3c + (long)cVar6;
    uVar25 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_b8);
    *(undefined8 *)(param_1 + 0x651d8) = uVar25;
    if (*(short *)(param_1 + 0x651e0) != 0) {
      cVar5 = *(char *)(param_1 + 0x651cc);
      cVar6 = *(char *)(param_1 + 0x651ce);
      cVar7 = *(char *)(param_1 + 0x651cd);
      lVar24 = 0x13;
      if (4 < (long)cVar5) {
        lVar24 = -5;
      }
      lVar27 = nn::time::ToPosixTimeFromUtc(pCVar38);
      local_b8 = lVar27 + (lVar24 + cVar5) * 0xe10 + (long)(int)cVar7 * 0x3c + (long)cVar6;
      uVar25 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_b8);
      *(undefined8 *)(param_1 + 0x651e0) = uVar25;
    }
  }
  if (*(short *)pCVar3 != 0) {
    cVar5 = *(char *)(param_1 + 0x651cc);
    cVar6 = *(char *)(param_1 + 0x651ce);
    cVar7 = *(char *)(param_1 + 0x651cd);
    lVar24 = 0x14;
    if (3 < (long)cVar5) {
      lVar24 = -4;
    }
    lVar27 = nn::time::ToPosixTimeFromUtc(pCVar3);
    local_b8 = lVar27 + (lVar24 + cVar5) * 0xe10 + (long)(int)cVar7 * 0x3c + (long)cVar6;
    uVar25 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_b8);
    *(undefined8 *)(param_1 + 0x651e8) = uVar25;
  }
  if (*(char *)(param_1 + 0x65449) != '\0') {
    *(undefined1 *)(param_1 + 0x65449) = 0;
  }
  if ((((*(short *)(param_1 + 0x651d0) == 0) ||
       (*(char *)(param_1 + 0x651d4) != *(char *)(param_1 + 0x651e4))) ||
      (*(short *)(param_1 + 0x651d0) != *(short *)(param_1 + 0x651e0))) ||
     ((*(char *)(param_1 + 0x651d2) != *(char *)(param_1 + 0x651e2) ||
      (*(char *)(param_1 + 0x651d3) != *(char *)(param_1 + 0x651e3))))) {
    uVar19 = FUN_00a86d64(param_1,pCVar38);
    *(undefined4 *)(param_1 + 0x653e0) = uVar19;
    *(undefined8 *)(param_1 + 0x651d0) = *(undefined8 *)(*(long *)PTR_DAT_04bb32e8 + 0x4060);
  }
  uVar19 = FUN_00a8656c(param_1);
  *(undefined4 *)(param_1 + 0x6533c) = uVar19;
  iVar18 = FUN_00a86724(param_1);
  if ((*(int *)(param_1 + 0x65410) == 0) || (0xf < *(int *)(param_1 + 0x65410) - 1U)) {
    uVar23 = (ulong)*(byte *)(param_1 + 0x651dc);
  }
  else {
    uVar23 = *(ulong *)(param_1 + 0x65438);
    local_c8._0_2_ = (short)uVar23;
    local_c8._2_2_ = (undefined2)(uVar23 >> 0x10);
    bStack_c4 = (byte)(uVar23 >> 0x20);
    uStack_c3 = (undefined1)(uVar23 >> 0x28);
    uStack_c2 = (undefined1)(uVar23 >> 0x30);
    uStack_c1 = (undefined1)(uVar23 >> 0x38);
    if ((uVar23 & 0xffff) != 0) {
      lVar24 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_c8);
      local_b8 = lVar24 + -0xe10;
      uVar23 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_b8);
      local_c8._0_2_ = (short)uVar23;
      local_c8._2_2_ = (undefined2)(uVar23 >> 0x10);
      bStack_c4 = (byte)(uVar23 >> 0x20);
      uStack_c3 = (undefined1)(uVar23 >> 0x28);
      uStack_c2 = (undefined1)(uVar23 >> 0x30);
      uStack_c1 = (undefined1)(uVar23 >> 0x38);
    }
    uVar23 = uVar23 >> 0x20;
  }
  iVar20 = FUN_00a868d0(param_1,uVar23);
  uVar21 = FUN_00a867c8(param_1);
  local_b8 = CONCAT44(local_b8._4_4_,iVar18);
  cVar5 = *(char *)(param_1 + 0x651e5);
  cVar6 = *(char *)(param_1 + 0x651e6);
  if (iVar18 != 7) {
    plVar28 = plVar29;
    if (iVar18 == 6) goto LAB_00a88e40;
    iVar18 = 0;
    goto LAB_00a88f18;
  }
  plVar28 = (long *)(param_1 + 0x64fc0);
LAB_00a88e40:
  piVar30 = (int *)(**(code **)(*plVar28 + 0xf0))();
  iVar18 = *piVar30;
  iVar32 = (int)cVar6 + cVar5 * 0x3c;
  iVar31 = *(int *)(param_1 + 0x65ae8);
  if (iVar32 < iVar31) {
    local_c8._0_2_ = (short)iVar20;
    local_c8._2_2_ = (undefined2)((uint)iVar20 >> 0x10);
    if (iVar20 == 7) {
      plVar29 = (long *)(param_1 + 0x64fc0);
LAB_00a88edc:
      piVar30 = (int *)(**(code **)(*plVar29 + 0xf0))();
      iVar31 = *(int *)(param_1 + 0x65ae8);
      fVar45 = (float)*piVar30;
    }
    else {
      if (iVar20 == 6) goto LAB_00a88edc;
      fVar45 = 0.0;
    }
    fVar45 = fVar45 * (1.0 - (float)iVar32 / (float)iVar31) +
             ((float)iVar32 / (float)iVar31) * (float)iVar18;
LAB_00a88f14:
    iVar18 = (int)fVar45;
  }
  else if (0xe10 - *(int *)(param_1 + 0x65aec) <= iVar32) {
    local_c8._0_2_ = (short)uVar21;
    local_c8._2_2_ = (undefined2)(uVar21 >> 0x10);
    if ((uVar21 & 0xfffffffe) != 6) {
      fVar45 = ((float)(0xe10 - iVar32) / (float)*(int *)(param_1 + 0x65aec)) * (float)iVar18;
      goto LAB_00a88f14;
    }
  }
LAB_00a88f18:
  *(int *)(param_1 + 0x65340) = iVar18;
  if (*(int *)(param_1 + 0x65410) == 0) {
    iVar18 = FUN_00a86724(param_1);
    if ((*(int *)(param_1 + 0x65410) == 0) || (0xf < *(int *)(param_1 + 0x65410) - 1U)) {
      uVar23 = (ulong)*(byte *)(param_1 + 0x651dc);
    }
    else {
      uVar23 = *(ulong *)(param_1 + 0x65438);
      local_c8._0_2_ = (short)uVar23;
      local_c8._2_2_ = (undefined2)(uVar23 >> 0x10);
      bStack_c4 = (byte)(uVar23 >> 0x20);
      uStack_c3 = (undefined1)(uVar23 >> 0x28);
      uStack_c2 = (undefined1)(uVar23 >> 0x30);
      uStack_c1 = (undefined1)(uVar23 >> 0x38);
      if ((uVar23 & 0xffff) != 0) {
        lVar24 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_c8);
        local_b8 = lVar24 - 0xe10;
        uVar23 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_b8);
        local_c8._0_2_ = (short)uVar23;
        local_c8._2_2_ = (undefined2)(uVar23 >> 0x10);
        bStack_c4 = (byte)(uVar23 >> 0x20);
        uStack_c3 = (undefined1)(uVar23 >> 0x28);
        uStack_c2 = (undefined1)(uVar23 >> 0x30);
        uStack_c1 = (undefined1)(uVar23 >> 0x38);
      }
      uVar23 = uVar23 >> 0x20;
    }
    uVar21 = FUN_00a868d0(param_1,uVar23);
    uVar22 = FUN_00a867c8(param_1);
    sVar8 = *(short *)puVar15;
    local_c8._0_2_ = (short)iVar18;
    local_c8._2_2_ = (undefined2)((uint)iVar18 >> 0x10);
    local_d8 = CONCAT44(local_d8._4_4_,uVar21);
    cVar5 = *(char *)(param_1 + 0x651e5);
    local_e4 = CONCAT44(local_e4._4_4_,uVar22);
    if (sVar8 == -1) {
LAB_00a8906c:
      if ((*(long *)PTR_DAT_04bb38d0 == 0) ||
         (fVar45 = 0.0, *(char *)(*(long *)PTR_DAT_04bb38d0 + 0xb4) == '\0')) {
        if (iVar18 == 5) {
          piVar30 = (int *)(param_1 + 0x65af8);
          piVar36 = (int *)(param_1 + 0x65afc);
        }
        else {
          fVar45 = 0.0;
          if (iVar18 != 4) goto LAB_00a89368;
          piVar30 = (int *)(param_1 + 0x65af0);
          piVar36 = (int *)(param_1 + 0x65af4);
        }
        fVar45 = *(float *)(param_1 + 0x65b10);
        if (cVar5 < '\x1e') {
          iVar18 = *piVar30;
          if (((uVar21 & 0xfffffffc) != 4) &&
             (iVar20 = (int)*(char *)(param_1 + 0x651e6) + cVar5 * 0x3c, iVar20 < iVar18))
          goto LAB_00a8a450;
        }
        else {
          iVar18 = *piVar36;
          if (((uVar22 & 0xfffffffc) != 4) &&
             (iVar20 = (int)*(char *)(param_1 + 0x651e6) + cVar5 * 0x3c, 0xe10 - iVar18 <= iVar20))
          {
            iVar20 = 0xe10 - iVar20;
LAB_00a8a450:
            fVar45 = (fVar45 * (float)iVar20) / (float)iVar18;
          }
        }
      }
    }
    else {
      local_b8 = local_b8 & 0xffffffff00000000;
      fVar45 = 0.0;
      puVar33 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar8 * 8);
      if (0xff < (uint)(int)sVar8) {
        puVar33 = (uint *)PTR_DAT_04bc39f8;
      }
      if ((*puVar33 & 1) == 0) goto LAB_00a8906c;
    }
  }
  else {
    puVar39 = (ulong *)(param_1 + 0x65438);
    uVar23 = *puVar39;
    local_c8._0_2_ = (short)uVar23;
    local_c8._2_2_ = (undefined2)(uVar23 >> 0x10);
    bStack_c4 = (byte)(uVar23 >> 0x20);
    uStack_c3 = (undefined1)(uVar23 >> 0x28);
    uStack_c2 = (undefined1)(uVar23 >> 0x30);
    uStack_c1 = (undefined1)(uVar23 >> 0x38);
    if ((uVar23 & 0xffff) != 0) {
      lVar24 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_c8);
      local_b8 = lVar24 - 0xe10;
      uVar23 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_b8);
      local_c8._0_2_ = (short)uVar23;
      local_c8._2_2_ = (undefined2)(uVar23 >> 0x10);
      bStack_c4 = (byte)(uVar23 >> 0x20);
      uStack_c3 = (undefined1)(uVar23 >> 0x28);
      uStack_c2 = (undefined1)(uVar23 >> 0x30);
      uStack_c1 = (undefined1)(uVar23 >> 0x38);
    }
    iVar18 = FUN_00a868d0(param_1,uVar23 >> 0x20);
    if ((short)local_c8 == 0) {
      uVar23 = (ulong)bStack_c4;
    }
    else {
      lVar24 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_c8);
      local_b8 = lVar24 + 0xe10;
      uVar26 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_b8);
      uVar23 = uVar26 >> 0x20;
      local_c8._0_2_ = (short)uVar26;
      local_c8._2_2_ = (undefined2)(uVar26 >> 0x10);
      bStack_c4 = (byte)(uVar26 >> 0x20);
      uStack_c3 = (undefined1)(uVar26 >> 0x28);
      uStack_c2 = (undefined1)(uVar26 >> 0x30);
      uStack_c1 = (undefined1)(uVar26 >> 0x38);
    }
    uVar21 = FUN_00a868d0(param_1,uVar23);
    if ((short)local_c8 == 0) {
      uVar23 = (ulong)bStack_c4;
    }
    else {
      lVar24 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_c8);
      local_b8 = lVar24 + 0xe10;
      uVar26 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_b8);
      uVar23 = uVar26 >> 0x20;
      local_c8._0_2_ = (short)uVar26;
      local_c8._2_2_ = (undefined2)(uVar26 >> 0x10);
      bStack_c4 = (byte)(uVar26 >> 0x20);
      uStack_c3 = (undefined1)(uVar26 >> 0x28);
      uStack_c2 = (undefined1)(uVar26 >> 0x30);
      uStack_c1 = (undefined1)(uVar26 >> 0x38);
    }
    uVar22 = FUN_00a868d0(param_1,uVar23);
    puVar15 = PTR_DAT_04bb38d0;
    sVar8 = *(short *)PTR_DAT_04bb6298;
    iVar31 = (int)*(char *)(param_1 + 0x6543d);
    iVar20 = (int)*(char *)(param_1 + 0x6543e);
    if (sVar8 == -1) {
LAB_00a89160:
      if ((*(long *)PTR_DAT_04bb38d0 == 0) ||
         (fVar45 = 0.0, *(char *)(*(long *)PTR_DAT_04bb38d0 + 0xb4) == '\0')) {
        if (iVar18 == 5) {
          piVar30 = (int *)(param_1 + 0x65af8);
          piVar36 = (int *)(param_1 + 0x65afc);
        }
        else {
          fVar45 = 0.0;
          if (iVar18 != 4) goto LAB_00a89214;
          piVar30 = (int *)(param_1 + 0x65af0);
          piVar36 = (int *)(param_1 + 0x65af4);
        }
        fVar45 = *(float *)(param_1 + 0x65b10);
        if (*(char *)(param_1 + 0x6543d) < '\x1e') {
          iVar32 = *piVar30;
          if (((uVar21 & 0xfffffffc) != 4) && (iVar34 = iVar20 + iVar31 * 0x3c, iVar34 < iVar32))
          goto LAB_00a89204;
        }
        else {
          iVar32 = *piVar36;
          if (((uVar22 & 0xfffffffc) != 4) &&
             (iVar34 = iVar20 + iVar31 * 0x3c, 0xe10 - iVar32 <= iVar34)) {
            iVar34 = 0xe10 - iVar34;
LAB_00a89204:
            fVar45 = (fVar45 * (float)iVar34) / (float)iVar32;
          }
        }
      }
    }
    else {
      local_b8 = local_b8 & 0xffffffff00000000;
      fVar45 = 0.0;
      puVar33 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar8 * 8);
      if (0xff < (uint)(int)sVar8) {
        puVar33 = (uint *)PTR_DAT_04bc39f8;
      }
      if ((*puVar33 & 1) == 0) goto LAB_00a89160;
    }
LAB_00a89214:
    local_d8._0_4_ = (float)iVar18;
    local_e4._0_4_ = uVar21;
    iVar18 = FUN_00a86ba4(param_1,puVar39);
    uVar21 = FUN_00a86ba4(param_1,puVar39);
    uVar22 = FUN_00a86ba4(param_1,puVar39);
    local_d8 = CONCAT44(local_d8._4_4_,iVar18);
    local_e4 = CONCAT44(local_e4._4_4_,uVar21);
    sVar8 = *(short *)PTR_DAT_04bb6298;
    if (sVar8 == -1) {
LAB_00a892a0:
      if ((*(long *)puVar15 == 0) || (fVar40 = 0.0, *(char *)(*(long *)puVar15 + 0xb4) == '\0')) {
        if (iVar18 == 5) {
          piVar30 = (int *)(param_1 + 0x65af8);
          piVar36 = (int *)(param_1 + 0x65afc);
        }
        else {
          fVar40 = 0.0;
          if (iVar18 != 4) goto LAB_00a89354;
          piVar30 = (int *)(param_1 + 0x65af0);
          piVar36 = (int *)(param_1 + 0x65af4);
        }
        fVar40 = *(float *)(param_1 + 0x65b10);
        if (iVar31 < 0x1e) {
          iVar18 = *piVar30;
          if (((uVar21 & 0xfffffffc) != 4) && (iVar20 = iVar20 + iVar31 * 0x3c, iVar20 < iVar18))
          goto LAB_00a89344;
        }
        else {
          iVar18 = *piVar36;
          if (((uVar22 & 0xfffffffc) != 4) &&
             (iVar20 = iVar20 + iVar31 * 0x3c, 0xe10 - iVar18 <= iVar20)) {
            iVar20 = 0xe10 - iVar20;
LAB_00a89344:
            fVar40 = (fVar40 * (float)iVar20) / (float)iVar18;
          }
        }
      }
    }
    else {
      local_b8 = local_b8 & 0xffffffff00000000;
      fVar40 = 0.0;
      puVar33 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar8 * 8);
      if (0xff < (uint)(int)sVar8) {
        puVar33 = (uint *)PTR_DAT_04bc39f8;
      }
      if ((*puVar33 & 1) == 0) goto LAB_00a892a0;
    }
LAB_00a89354:
    fVar45 = fVar45 * (1.0 - *(float *)(param_1 + 0x65400)) + *(float *)(param_1 + 0x65400) * fVar40
    ;
  }
LAB_00a89368:
  *(float *)(param_1 + 0x65344) = fVar45;
  if (*(int *)(param_1 + 0x653f4) == 0) {
    *(undefined4 *)(param_1 + 0x653f8) = 0;
  }
  else {
    local_b8 = *(ulong *)(*(long *)PTR_DAT_04bb32e8 + 0x4060);
    iVar18 = FUN_00a8255c(&local_b8,param_1 + 0x653ec);
    if (iVar18 < 900) {
      fVar40 = (float)(900 - iVar18) / 900.0;
      fVar45 = 1.0;
      if (fVar40 <= 1.0) {
        fVar45 = fVar40;
      }
      fVar42 = 0.0;
      if (0.0 <= fVar40) {
        fVar42 = fVar45;
      }
    }
    else {
      *(undefined4 *)(param_1 + 0x653f4) = 0;
      fVar42 = 0.0;
    }
    *(float *)(param_1 + 0x653f8) = fVar42;
  }
  uVar21 = *(int *)(param_1 + 0x65208) + (int)*(char *)(param_1 + 0x651e4) +
           (*(char *)(param_1 + 0x651e2) * 0x20 + (uint)*(ushort *)(param_1 + 0x651e0) * 0x200 +
           (int)*(char *)(param_1 + 0x651e3)) * 0x10000;
  uVar22 = *(int *)(param_1 + 0x65208) + (int)*(char *)(param_1 + 0x651ec) +
           (*(char *)(param_1 + 0x651ea) * 0x20 + (uint)*(ushort *)(param_1 + 0x651e8) * 0x200 +
           (int)*(char *)(param_1 + 0x651eb)) * 0x10000;
  uVar9 = (uVar21 ^ uVar21 >> 0x1e) * 0x6c078965 + 1;
  uVar10 = (uVar22 ^ uVar22 >> 0x1e) * 0x6c078965 + 1;
  uVar21 = uVar9 ^ uVar9 * 0x800;
  uVar22 = uVar10 ^ uVar10 * 0x800;
  uVar11 = (uVar9 ^ uVar9 >> 0x1e) * 0x6c078965 + 2;
  uVar12 = (uVar10 ^ uVar10 >> 0x1e) * 0x6c078965 + 2;
  uVar9 = uVar11 ^ uVar11 * 0x800;
  uVar10 = uVar12 ^ uVar12 * 0x800;
  uVar13 = (uVar11 ^ uVar11 >> 0x1e) * 0x6c078965 + 3;
  uVar14 = (uVar12 ^ uVar12 >> 0x1e) * 0x6c078965 + 3;
  uVar11 = uVar13 ^ uVar13 * 0x800;
  uVar12 = (uVar13 ^ uVar13 >> 0x1e) * 0x6c078965 + 4;
  uVar13 = (uVar14 ^ uVar14 >> 0x1e) * 0x6c078965 + 4;
  uVar12 = uVar21 >> 8 ^ uVar12 >> 0x13 ^ uVar21 ^ uVar12;
  uVar22 = uVar22 >> 8 ^ uVar13 >> 0x13 ^ uVar22 ^ uVar13;
  uVar19 = FUN_00a8e054(param_1);
  iVar18 = FUN_00a8d9f0(param_1,puVar2,pCVar38);
  cVar5 = *(char *)(param_1 + 0x651e4);
  local_c8._0_2_ = (short)iVar18;
  local_c8._2_2_ = (undefined2)((uint)iVar18 >> 0x10);
  uVar21 = (int)cVar5 + 0x18;
  if (-1 < cVar5) {
    uVar21 = (int)cVar5;
  }
  if ((iVar18 < 0) || (iVar20 = 0, *(int *)(param_1 + 0x653a0) <= iVar18)) {
    iVar20 = 0;
  }
  else if (uVar21 < 0x18) {
    local_b8 = CONCAT44(local_b8._4_4_,iVar18);
    piVar30 = (int *)(**(code **)(**(long **)(*(long *)(*(long *)(*(long *)(param_1 + 0x108) +
                                                                 (long)iVar18 * 8) + 0x670) +
                                             (ulong)uVar21 * 8) + 0xf0))();
    iVar20 = *piVar30;
  }
  puVar15 = PTR_DAT_04bb6298;
  local_c8._0_2_ = (short)iVar20;
  local_c8._2_2_ = (undefined2)((uint)iVar20 >> 0x10);
  uVar14 = uVar14 ^ uVar14 * 0x800;
  uVar21 = uVar9 >> 8 ^ uVar12 >> 0x13 ^ uVar9 ^ uVar12;
  if (iVar20 - 4U < 3) {
    local_b8 = CONCAT44(local_b8._4_4_,1);
    fVar45 = -0.70710677;
    fVar40 = 0.70710677;
  }
  else if (iVar20 - 1U < 3) {
    local_b8 = (ulong)(uint)local_b8._4_4_ << 0x20;
    fVar45 = 0.70710677;
    fVar40 = fVar45;
  }
  else {
    fVar45 = 0.0;
    fVar40 = 0.0;
  }
  sVar8 = *(short *)PTR_DAT_04bb6298;
  uVar22 = uVar10 >> 8 ^ uVar22 >> 0x13 ^ uVar10 ^ uVar22;
  if (sVar8 == -1) {
LAB_00a89684:
    uVar23 = FUN_01384680();
  }
  else {
    local_b8 = CONCAT44(local_b8._4_4_,0x20);
    puVar4 = PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar8 * 8;
    if (0xff < (uint)(int)sVar8) {
      puVar4 = PTR_DAT_04bc39f8;
    }
    if ((*(uint *)(puVar4 + 4) & 1) == 0) goto LAB_00a89684;
    uVar23 = FUN_0092decc();
  }
  if ((uVar23 & 1) == 0) {
    fVar45 = -fVar45;
  }
  local_b8._4_4_ = 0.0;
  local_b0 = fVar40;
  local_b8._0_4_ = fVar45;
  iVar18 = FUN_00a8d9f0(param_1,puVar2,pCVar3);
  cVar5 = *(char *)(param_1 + 0x651ec);
  uVar9 = (int)cVar5 + 0x18;
  if (-1 < cVar5) {
    uVar9 = (int)cVar5;
  }
  if (iVar18 < 0) {
    iVar20 = 0;
  }
  else {
    iVar20 = 0;
    if ((iVar18 < *(int *)(param_1 + 0x653a0)) && (uVar9 < 0x18)) {
      local_c8._0_2_ = (short)iVar18;
      local_c8._2_2_ = (undefined2)((uint)iVar18 >> 0x10);
      local_d8._0_4_ = (float)iVar18;
      piVar30 = (int *)(**(code **)(**(long **)(*(long *)(*(long *)(*(long *)(param_1 + 0x108) +
                                                                   (long)iVar18 * 8) + 0x670) +
                                               (ulong)uVar9 * 8) + 0xf0))();
      iVar20 = *piVar30;
    }
  }
  local_d8 = CONCAT44(local_d8._4_4_,iVar20);
  if (iVar20 - 4U < 3) {
    local_c8._0_2_ = 1;
    local_c8._2_2_ = 0;
    fVar41 = -0.70710677;
    fVar42 = 0.70710677;
  }
  else if (iVar20 - 1U < 3) {
    local_c8._0_2_ = 0;
    local_c8._2_2_ = 0;
    fVar42 = 0.70710677;
    fVar41 = 0.70710677;
  }
  else {
    fVar41 = 0.0;
    fVar42 = 0.0;
  }
  sVar8 = *(short *)puVar15;
  if (sVar8 == -1) {
LAB_00a89820:
    uVar23 = FUN_01384680();
  }
  else {
    local_c8._0_2_ = 0x20;
    local_c8._2_2_ = 0;
    puVar4 = PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar8 * 8;
    if (0xff < (uint)(int)sVar8) {
      puVar4 = PTR_DAT_04bc39f8;
    }
    if ((*(uint *)(puVar4 + 4) & 1) == 0) goto LAB_00a89820;
    uVar23 = FUN_0092decc();
  }
  fVar47 = (float)((uVar11 >> 8 ^ uVar21 >> 0x13 ^ uVar11 ^ uVar21) >> 9 | 0x3f800000) + -1.0;
  bStack_c4 = 0;
  uStack_c3 = 0;
  uStack_c2 = 0;
  uStack_c1 = 0;
  local_c8 = fVar41;
  if ((uVar23 & 1) == 0) {
    local_c8 = -fVar41;
  }
  if ((fVar40 == 0.0) && (fVar41 = 0.0, fVar45 == 0.0)) {
  }
  else {
    fVar41 = -(fVar47 * 45.0);
    if (0.0 <= fVar45) {
      fVar41 = fVar47 * 45.0;
    }
    pfVar35 = (float *)(PTR_DAT_04bb2d00 +
                       ((ulong)(long)(fVar41 * 11930465.0) >> 0x19 & 0x7f) * 0x10);
    fVar41 = (float)((uint)(long)(fVar41 * 11930465.0) >> 1 & 0xffffff) * 5.9604645e-08;
    fVar43 = *pfVar35 + fVar41 * pfVar35[1];
    fVar41 = pfVar35[2] + fVar41 * pfVar35[3];
    fVar46 = fVar43 * 0.0;
    fVar41 = fVar41 + fVar41;
    fVar48 = fVar43 * (fVar43 + fVar43);
    fVar44 = (fVar43 + fVar43) * fVar46;
    fVar52 = fVar46 * (fVar46 + fVar46);
    fVar49 = fVar46 * fVar41;
    fVar50 = fVar43 * (fVar46 + fVar46);
    fVar43 = fVar43 * fVar41;
    fVar41 = fVar45 * (fVar50 + fVar49);
    fVar46 = fVar45 * (fVar52 - fVar43);
    fVar45 = (fVar50 - fVar49) * 0.0 + fVar45 * ((1.0 - fVar48) - fVar52) +
             fVar40 * (fVar52 + fVar43);
    fVar41 = ((1.0 - fVar52) - fVar52) * 0.0 + fVar41 + fVar40 * (fVar44 - fVar49);
    fVar40 = (fVar44 + fVar49) * 0.0 + fVar46 + fVar40 * ((1.0 - fVar52) - fVar48);
    fVar46 = SQRT(fVar41 * fVar41 + fVar45 * fVar45 + fVar40 * fVar40);
    local_b0 = fVar40;
    local_b8._0_4_ = fVar45;
    local_b8._4_4_ = fVar41;
    if (0.0 < fVar46) {
      fVar46 = 1.0 / fVar46;
      fVar45 = fVar45 * fVar46;
      fVar41 = fVar41 * fVar46;
      fVar40 = fVar40 * fVar46;
      local_b0 = fVar40;
      local_b8._0_4_ = fVar45;
      local_b8._4_4_ = fVar41;
    }
  }
  fVar46 = (float)((uVar14 >> 8 ^ uVar22 >> 0x13 ^ uVar14 ^ uVar22) >> 9 | 0x3f800000) + -1.0;
  if ((fVar42 == 0.0) && (fVar43 = 0.0, local_c8 == 0.0)) {
    local_c0 = fVar42;
  }
  else {
    fVar43 = -(fVar46 * 45.0);
    if (0.0 <= local_c8) {
      fVar43 = fVar46 * 45.0;
    }
    pfVar35 = (float *)(PTR_DAT_04bb2d00 +
                       ((ulong)(long)(fVar43 * 11930465.0) >> 0x19 & 0x7f) * 0x10);
    fVar43 = (float)((uint)(long)(fVar43 * 11930465.0) >> 1 & 0xffffff) * 5.9604645e-08;
    fVar48 = *pfVar35 + fVar43 * pfVar35[1];
    fVar43 = pfVar35[2] + fVar43 * pfVar35[3];
    fVar44 = fVar48 * 0.0;
    fVar43 = fVar43 + fVar43;
    fVar52 = fVar48 * (fVar48 + fVar48);
    fVar50 = (fVar48 + fVar48) * fVar44;
    fVar51 = fVar44 * (fVar44 + fVar44);
    fVar53 = fVar44 * fVar43;
    fVar49 = fVar48 * (fVar44 + fVar44);
    fVar48 = fVar48 * fVar43;
    fVar43 = local_c8 * (fVar49 + fVar53);
    fVar44 = local_c8 * (fVar51 - fVar48);
    local_c8 = (fVar49 - fVar53) * 0.0 + local_c8 * ((1.0 - fVar52) - fVar51) +
               fVar42 * (fVar51 + fVar48);
    fVar43 = ((1.0 - fVar51) - fVar51) * 0.0 + fVar43 + fVar42 * (fVar50 - fVar53);
    local_c0 = (fVar50 + fVar53) * 0.0 + fVar44 + fVar42 * ((1.0 - fVar51) - fVar52);
    bStack_c4 = SUB41(fVar43,0);
    uStack_c3 = (undefined1)((uint)fVar43 >> 8);
    uStack_c2 = (undefined1)((uint)fVar43 >> 0x10);
    uStack_c1 = (undefined1)((uint)fVar43 >> 0x18);
    fVar42 = SQRT(fVar43 * fVar43 + local_c8 * local_c8 + local_c0 * local_c0);
    if (0.0 < fVar42) {
      fVar42 = 1.0 / fVar42;
      local_c8 = local_c8 * fVar42;
      fVar43 = fVar43 * fVar42;
      local_c0 = local_c0 * fVar42;
      bStack_c4 = SUB41(fVar43,0);
      uStack_c3 = (undefined1)((uint)fVar43 >> 8);
      uStack_c2 = (undefined1)((uint)fVar43 >> 0x10);
      uStack_c1 = (undefined1)((uint)fVar43 >> 0x18);
    }
  }
  if ((fVar45 == 0.0) && (fVar40 == 0.0)) {
    if (local_c0 != 0.0 || local_c8 != 0.0) {
      *pfVar1 = local_c8;
      *(float *)(param_1 + 0x653a8) = fVar43;
      *(float *)(param_1 + 0x653ac) = local_c0;
    }
    else {
      pfVar1[0] = 0.0;
      pfVar1[1] = 0.0;
      *(undefined4 *)(param_1 + 0x653ac) = 0x3f800000;
    }
  }
  else if (local_c0 != 0.0 || local_c8 != 0.0) {
    local_e4 = 0x3f80000000000000;
    local_dc = 0;
    FUN_03eb5390(uVar19,&local_d8,&local_b8,&local_c8,&local_e4);
    fVar41 = SQRT(local_d8._4_4_ * local_d8._4_4_ + (float)local_d8 * (float)local_d8 +
                  local_d0 * local_d0);
    fVar45 = local_d8._4_4_;
    fVar40 = (float)local_d8;
    fVar42 = local_d0;
    if (0.0 < fVar41) {
      fVar41 = 1.0 / fVar41;
      fVar40 = (float)local_d8 * fVar41;
      fVar45 = local_d8._4_4_ * fVar41;
      fVar42 = local_d0 * fVar41;
    }
    *pfVar1 = fVar40;
    *(float *)(param_1 + 0x653a8) = fVar45;
    *(float *)(param_1 + 0x653ac) = fVar42;
  }
  else {
    *pfVar1 = fVar45;
    *(float *)(param_1 + 0x653a8) = fVar41;
    *(float *)(param_1 + 0x653ac) = fVar40;
  }
  fVar45 = (float)FUN_00a8d9f0(param_1,puVar2,pCVar38);
  cVar5 = *(char *)(param_1 + 0x651e4);
  local_c8._0_2_ = SUB42(fVar45,0);
  local_c8._2_2_ = (undefined2)((uint)fVar45 >> 0x10);
  uVar21 = (int)cVar5 + 0x18;
  if (-1 < cVar5) {
    uVar21 = (int)cVar5;
  }
  if ((int)fVar45 < 0) {
    iVar18 = 0;
  }
  else {
    iVar18 = 0;
    if (((int)fVar45 < *(int *)(param_1 + 0x653a0)) && (uVar21 < 0x18)) {
      local_b8._0_4_ = fVar45;
      piVar30 = (int *)(**(code **)(**(long **)(*(long *)(*(long *)(*(long *)(param_1 + 0x108) +
                                                                   (long)(int)fVar45 * 8) + 0x670) +
                                               (ulong)uVar21 * 8) + 0xf0))();
      iVar18 = *piVar30;
    }
  }
  local_c8._0_2_ = (short)iVar18;
  local_c8._2_2_ = (undefined2)((uint)iVar18 >> 0x10);
  if (iVar18 - 4U < 3) {
    local_b8._0_4_ = 1.4013e-45;
    fVar45 = -0.70710677;
    fVar40 = 0.70710677;
  }
  else if (iVar18 - 1U < 3) {
    local_b8._0_4_ = 0.0;
    fVar45 = 0.70710677;
    fVar40 = fVar45;
  }
  else {
    fVar45 = 0.0;
    fVar40 = 0.0;
  }
  sVar8 = *(short *)puVar15;
  if (sVar8 == -1) {
LAB_00a89cb8:
    uVar23 = FUN_01384680();
  }
  else {
    local_b8._0_4_ = 4.48416e-44;
    puVar4 = PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar8 * 8;
    if (0xff < (uint)(int)sVar8) {
      puVar4 = PTR_DAT_04bc39f8;
    }
    if ((*(uint *)(puVar4 + 4) & 1) == 0) goto LAB_00a89cb8;
    uVar23 = FUN_0092decc();
  }
  if ((uVar23 & 1) == 0) {
    fVar45 = -fVar45;
  }
  local_b8 = (ulong)(uint)fVar45;
  local_b0 = fVar40;
  iVar18 = FUN_00a8d9f0(param_1,puVar2,pCVar3);
  cVar5 = *(char *)(param_1 + 0x651ec);
  uVar21 = (int)cVar5 + 0x18;
  if (-1 < cVar5) {
    uVar21 = (int)cVar5;
  }
  if (iVar18 < 0) {
    iVar20 = 0;
  }
  else {
    iVar20 = 0;
    if ((iVar18 < *(int *)(param_1 + 0x653a0)) && (uVar21 < 0x18)) {
      local_c8._0_2_ = (short)iVar18;
      local_c8._2_2_ = (undefined2)((uint)iVar18 >> 0x10);
      local_d8._0_4_ = (float)iVar18;
      piVar30 = (int *)(**(code **)(**(long **)(*(long *)(*(long *)(*(long *)(param_1 + 0x108) +
                                                                   (long)iVar18 * 8) + 0x670) +
                                               (ulong)uVar21 * 8) + 0xf0))();
      iVar20 = *piVar30;
    }
  }
  local_d8 = CONCAT44(local_d8._4_4_,iVar20);
  if (iVar20 - 4U < 3) {
    local_c8._0_2_ = 1;
LAB_00a89d7c:
    local_c8._2_2_ = 0;
    fVar40 = -0.70710677;
    if ((short)local_c8 != 1) {
      fVar40 = 0.0;
    }
    fVar42 = 0.70710677;
    if ((short)local_c8 != 0) {
      fVar42 = fVar40;
    }
  }
  else {
    if (iVar20 - 1U < 3) {
      local_c8._0_2_ = 0;
      goto LAB_00a89d7c;
    }
    fVar42 = 0.0;
  }
  sVar8 = *(short *)puVar15;
  if (sVar8 != -1) {
    local_c8._0_2_ = 0x20;
    local_c8._2_2_ = 0;
    puVar4 = PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar8 * 8;
    if (0xff < (uint)(int)sVar8) {
      puVar4 = PTR_DAT_04bc39f8;
    }
    if ((*(uint *)(puVar4 + 4) & 1) != 0) {
      uVar23 = FUN_0092decc();
      goto LAB_00a89e00;
    }
  }
  uVar23 = FUN_01384680();
LAB_00a89e00:
  fVar40 = 0.0;
  fVar41 = 0.0;
  bStack_c4 = 0;
  uStack_c3 = 0;
  uStack_c2 = 0;
  uStack_c1 = 0;
  local_c0 = 0.0;
  local_b0 = 0.0;
  local_c8 = fVar42;
  if ((uVar23 & 1) == 0) {
    local_c8 = -fVar42;
  }
  if (fVar45 != 0.0) {
    fVar42 = SQRT(fVar45 * fVar45 + 0.0);
    if (fVar42 <= 0.0) {
      fVar42 = 0.0;
    }
    else {
      fVar42 = 1.0 / fVar42;
      fVar45 = fVar45 * fVar42;
      fVar42 = fVar42 * 0.0;
    }
    fVar41 = -(fVar47 * 30.0) - -15.0;
    if (0.0 <= fVar45) {
      fVar41 = fVar47 * 30.0 + -15.0;
    }
    pfVar1 = (float *)(PTR_DAT_04bb2d00 + ((ulong)(long)(fVar41 * 11930465.0) >> 0x19 & 0x7f) * 0x10
                      );
    fVar41 = (float)((uint)(long)(fVar41 * 11930465.0) >> 1 & 0xffffff) * 5.9604645e-08;
    fVar44 = *pfVar1 + fVar41 * pfVar1[1];
    fVar41 = pfVar1[2] + fVar41 * pfVar1[3];
    fVar43 = fVar44 * 0.0;
    fVar41 = fVar41 + fVar41;
    fVar50 = fVar44 * (fVar44 + fVar44);
    fVar48 = (fVar44 + fVar44) * fVar43;
    fVar49 = fVar43 * (fVar43 + fVar43);
    fVar52 = fVar44 * (fVar43 + fVar43);
    fVar43 = fVar41 * fVar43;
    fVar44 = fVar44 * fVar41;
    fVar47 = fVar45 * (fVar49 - fVar44);
    fVar41 = fVar45 * (fVar43 + fVar52);
    fVar45 = fVar42 * (fVar52 - fVar43) + fVar45 * ((1.0 - fVar50) - fVar49) +
             fVar42 * (fVar44 + fVar49);
    fVar41 = fVar42 * ((1.0 - fVar49) - fVar49) + fVar41 + fVar42 * (fVar48 - fVar43);
    local_b0 = fVar42 * (fVar43 + fVar48) + fVar47 + fVar42 * ((1.0 - fVar49) - fVar50);
    local_b8 = CONCAT44(fVar41,fVar45);
    fVar42 = SQRT(fVar41 * fVar41 + fVar45 * fVar45 + local_b0 * local_b0);
    if (0.0 < fVar42) {
      fVar42 = 1.0 / fVar42;
      fVar45 = fVar45 * fVar42;
      fVar41 = fVar41 * fVar42;
      local_b0 = local_b0 * fVar42;
      local_b8 = CONCAT44(fVar41,fVar45);
    }
  }
  if (local_c8 != 0.0) {
    fVar42 = SQRT(local_c8 * local_c8 + 0.0);
    if (fVar42 <= 0.0) {
      fVar42 = 0.0;
    }
    else {
      fVar42 = 1.0 / fVar42;
      local_c8 = local_c8 * fVar42;
      fVar42 = fVar42 * 0.0;
    }
    fVar40 = -(fVar46 * 30.0) - -15.0;
    if (0.0 <= local_c8) {
      fVar40 = fVar46 * 30.0 + -15.0;
    }
    pfVar1 = (float *)(PTR_DAT_04bb2d00 + ((ulong)(long)(fVar40 * 11930465.0) >> 0x19 & 0x7f) * 0x10
                      );
    fVar40 = (float)((uint)(long)(fVar40 * 11930465.0) >> 1 & 0xffffff) * 5.9604645e-08;
    fVar43 = *pfVar1 + fVar40 * pfVar1[1];
    fVar40 = pfVar1[2] + fVar40 * pfVar1[3];
    fVar46 = fVar43 * 0.0;
    fVar40 = fVar40 + fVar40;
    fVar48 = fVar43 * (fVar43 + fVar43);
    fVar44 = (fVar43 + fVar43) * fVar46;
    fVar52 = fVar46 * (fVar46 + fVar46);
    fVar50 = fVar43 * (fVar46 + fVar46);
    fVar46 = fVar40 * fVar46;
    fVar43 = fVar43 * fVar40;
    fVar47 = local_c8 * (fVar52 - fVar43);
    fVar40 = local_c8 * (fVar46 + fVar50);
    local_c8 = fVar42 * (fVar50 - fVar46) + local_c8 * ((1.0 - fVar48) - fVar52) +
               fVar42 * (fVar43 + fVar52);
    fVar40 = fVar42 * ((1.0 - fVar52) - fVar52) + fVar40 + fVar42 * (fVar44 - fVar46);
    local_c0 = fVar42 * (fVar46 + fVar44) + fVar47 + fVar42 * ((1.0 - fVar52) - fVar48);
    bStack_c4 = SUB41(fVar40,0);
    uStack_c3 = (undefined1)((uint)fVar40 >> 8);
    uStack_c2 = (undefined1)((uint)fVar40 >> 0x10);
    uStack_c1 = (undefined1)((uint)fVar40 >> 0x18);
    fVar42 = SQRT(fVar40 * fVar40 + local_c8 * local_c8 + local_c0 * local_c0);
    if (0.0 < fVar42) {
      fVar42 = 1.0 / fVar42;
      local_c8 = local_c8 * fVar42;
      fVar40 = fVar40 * fVar42;
      local_c0 = local_c0 * fVar42;
      bStack_c4 = SUB41(fVar40,0);
      uStack_c3 = (undefined1)((uint)fVar40 >> 8);
      uStack_c2 = (undefined1)((uint)fVar40 >> 0x10);
      uStack_c1 = (undefined1)((uint)fVar40 >> 0x18);
    }
  }
  if ((fVar45 == 0.0) && (local_b0 == 0.0)) {
    if (local_c0 != 0.0 || local_c8 != 0.0) {
      *(float *)(param_1 + 0x653b0) = local_c8;
      *(float *)(param_1 + 0x653b4) = fVar40;
      *(float *)(param_1 + 0x653b8) = local_c0;
    }
    else {
      *(undefined8 *)(param_1 + 0x653b0) = 0;
      *(undefined4 *)(param_1 + 0x653b8) = 0x3f800000;
    }
  }
  else if (local_c0 != 0.0 || local_c8 != 0.0) {
    local_e4 = 0x3f80000000000000;
    local_dc = 0;
    FUN_03eb5390(uVar19,&local_d8,&local_b8,&local_c8,&local_e4);
    fVar42 = SQRT(local_d8._4_4_ * local_d8._4_4_ + (float)local_d8 * (float)local_d8 +
                  local_d0 * local_d0);
    fVar45 = local_d8._4_4_;
    fVar40 = (float)local_d8;
    if (0.0 < fVar42) {
      fVar42 = 1.0 / fVar42;
      fVar40 = (float)local_d8 * fVar42;
      fVar45 = local_d8._4_4_ * fVar42;
      local_d0 = local_d0 * fVar42;
    }
    *(float *)(param_1 + 0x653b0) = fVar40;
    *(float *)(param_1 + 0x653b4) = fVar45;
    *(float *)(param_1 + 0x653b8) = local_d0;
  }
  else {
    *(float *)(param_1 + 0x653b0) = fVar45;
    *(float *)(param_1 + 0x653b4) = fVar41;
    *(float *)(param_1 + 0x653b8) = local_b0;
  }
  uVar19 = FUN_00a8d9f0(param_1,puVar2,pCVar38);
  local_b8._0_4_ = (float)uVar19;
  bVar16 = FUN_028de310(puVar2,pCVar38,&local_b8);
  uVar19 = FUN_00a8d9f0(param_1,puVar2,pCVar3);
  local_b8 = CONCAT44(local_b8._4_4_,uVar19);
  bVar17 = FUN_028de310(puVar2,pCVar3,&local_b8);
  if (bVar16 == bVar17) {
    fVar45 = (float)bVar16;
  }
  else {
    fVar45 = (float)FUN_00a8e054(param_1);
    fVar45 = fVar45 * (float)bVar17 + (1.0 - fVar45) * (float)bVar16;
  }
  *(float *)(param_1 + 0x653bc) = fVar45;
  sVar8 = *(short *)puVar15;
  fVar40 = fVar45;
  if (sVar8 != -1) {
    puVar33 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar8 * 8);
    if (0xff < (uint)(int)sVar8) {
      puVar33 = (uint *)PTR_DAT_04bc39f8;
    }
    if ((*puVar33 & 1) != 0) {
      fVar40 = 0.0;
    }
  }
  uVar21 = (uint)fVar45;
  *(undefined1 *)(param_1 + 0x653dc) = 1;
  *(float *)(param_1 + 0x653c0) = fVar40;
  if (7 < (int)uVar21) {
    uVar21 = 8;
  }
  uVar21 = uVar21 & ((int)uVar21 >> 0x1f ^ 0xffffffffU);
  fVar42 = *(float *)(&DAT_04057d00 + (ulong)uVar21 * 4);
  if (uVar21 < 8) {
    fVar42 = fVar42 + (fVar45 - (float)(int)uVar21) *
                      (*(float *)(&DAT_04057d00 + (ulong)(uVar21 + 1) * 4) - fVar42);
  }
  uVar21 = (uint)fVar40;
  *(float *)(param_1 + 0x653c4) = fVar42;
  if (7 < (int)uVar21) {
    uVar21 = 8;
  }
  uVar21 = uVar21 & ((int)uVar21 >> 0x1f ^ 0xffffffffU);
  fVar45 = *(float *)(&DAT_04057d00 + (ulong)uVar21 * 4);
  if (uVar21 < 8) {
    fVar45 = fVar45 + (fVar40 - (float)(int)uVar21) *
                      (*(float *)(&DAT_04057d00 + (ulong)(uVar21 + 1) * 4) - fVar45);
  }
  *(float *)(param_1 + 0x653c8) = fVar45;
  fVar42 = *(float *)(*(long *)PTR_DAT_04bb26a8 + 0x19df78);
  fVar45 = *(float *)(*(long *)PTR_DAT_04bb26a8 + 0x19df5c);
  uVar21 = (uint)fVar42;
  if (7 < (int)uVar21) {
    uVar21 = 8;
  }
  uVar21 = uVar21 & ((int)uVar21 >> 0x1f ^ 0xffffffffU);
  fVar41 = *(float *)(&DAT_04057d00 + (ulong)uVar21 * 4);
  if (uVar21 < 8) {
    fVar41 = fVar41 + (fVar42 - (float)(int)uVar21) *
                      (*(float *)(&DAT_04057d00 + (ulong)(uVar21 + 1) * 4) - fVar41);
  }
  uVar21 = (uint)fVar45;
  *(float *)(param_1 + 0x653cc) = fVar41;
  if (7 < (int)uVar21) {
    uVar21 = 8;
  }
  uVar21 = uVar21 & ((int)uVar21 >> 0x1f ^ 0xffffffffU);
  fVar42 = *(float *)(&DAT_04057d00 + (ulong)uVar21 * 4);
  if (uVar21 < 8) {
    fVar42 = fVar42 + (fVar45 - (float)(int)uVar21) *
                      (*(float *)(&DAT_04057d00 + (ulong)(uVar21 + 1) * 4) - fVar42);
  }
  *(undefined1 *)(param_1 + 0x65b1c) = 0;
  fVar45 = 0.0;
  if (fVar40 < -1.1920929e-07 || 1.1920929e-07 < fVar40) {
    fVar45 = fVar41;
  }
  fVar41 = 0.0;
  if (fVar40 < -1.1920929e-07 || 1.1920929e-07 < fVar40) {
    fVar41 = fVar42;
  }
  *(float *)(param_1 + 0x653d0) = fVar45;
  *(float *)(param_1 + 0x653d4) = fVar42;
  *(float *)(param_1 + 0x653d8) = fVar41;
  return;
}

