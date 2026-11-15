
void FUN_01fb33b4(long *param_1)

{
  long *plVar1;
  int iVar2;
  char cVar3;
  undefined *puVar4;
  undefined4 uVar5;
  ulong uVar6;
  long lVar7;
  float *pfVar8;
  undefined2 *puVar9;
  int *piVar10;
  int iVar11;
  uint uVar12;
  code *pcVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  float fVar17;
  float fVar18;
  long local_208;
  char local_200;
  char local_1ff;
  undefined8 local_1f8;
  undefined8 local_1f0;
  int local_1e4;
  undefined8 local_1d8;
  undefined4 local_194;
  undefined2 local_190;
  undefined1 local_18e;
  undefined2 local_18c;
  undefined1 local_18a;
  undefined1 local_189;
  undefined4 local_188;
  undefined4 uStack_184;
  int local_17c;
  int local_10c;
  
  if ((*(byte *)((long)param_1 + 0xafb1) >> 5 & 1) != 0) {
    uVar6 = (**(code **)(*param_1 + 0x560))
                      (param_1,(*(uint *)(&DAT_00001230 + *(long *)PTR_DAT_04bb4e28) & 0xc) != 0);
    if ((uVar6 & 1) == 0) {
      return;
    }
    *(uint *)(param_1 + 0x15f6) = *(uint *)(param_1 + 0x15f6) & 0xffffdfff;
  }
  uVar6 = FUN_01fa5be4(param_1);
  lVar7 = DAT_05abbc58;
  cVar3 = (char)param_1[0x15f2];
  if ((uVar6 & 1) == 0) {
    if ((cVar3 == '\0') && (*(char *)((long)param_1 + 0xaf9c) == '\0')) {
      return;
    }
    goto switchD_01fb34a4_caseD_5;
  }
  if (cVar3 != '\0') {
    if (*(int *)((long)param_1 + 0xaf94) != 1) {
      if (*(int *)((long)param_1 + 0xaf94) == 0) {
        (**(code **)(*param_1 + 0x5f0))(param_1,(char)param_1[0x15f3],1);
      }
      goto switchD_01fb34a4_caseD_5;
    }
    pcVar13 = *(code **)(*param_1 + 0x5f8);
    goto LAB_01fb34c4;
  }
  if ((*(char *)((long)param_1 + 0xaf9c) == '\0') || (0xf < *(uint *)(param_1 + 0x15f4)))
  goto switchD_01fb34a4_caseD_5;
  plVar1 = param_1 + 0xf0f;
  switch(*(uint *)(param_1 + 0x15f4)) {
  case 0:
    FUN_01fb9090(param_1,(long)param_1 + 0xafa4);
    break;
  case 1:
    uVar6 = FUN_03738210(DAT_05abbc58,*(undefined2 *)((long)param_1 + 0x12184));
    if ((uVar6 & 1) == 0) {
      FUN_01fb91f0(param_1,(long)param_1 + 0xafa4);
    }
    break;
  case 2:
    FUN_01fb5cac(param_1,param_1 + 0x15f5,*(undefined4 *)(*(long *)PTR_DAT_04bb4e28 + 0x1228),0);
    *(int *)(param_1 + 0x23f9) = (int)param_1[0x15f5];
    *(undefined4 *)((long)param_1 + 0x11fcc) = *(undefined4 *)((long)param_1 + 0xafac);
    if (DAT_05292338 == 0) {
      iVar14 = 0;
      iVar11 = 0;
      iVar15 = 0x10;
      iVar16 = 0x10;
    }
    else {
      iVar14 = *(int *)(DAT_05292338 + 0xd88);
      iVar11 = *(int *)(DAT_05292338 + 0xd8c);
      iVar16 = *(int *)(DAT_05292338 + 0xd98);
      iVar15 = *(int *)(DAT_05292338 + 0xd9c);
    }
    iVar2 = iVar14;
    if (iVar16 <= iVar14) {
      iVar2 = iVar16;
    }
    if (iVar14 <= iVar16) {
      iVar14 = iVar16;
    }
    iVar16 = iVar11;
    if (iVar15 <= iVar11) {
      iVar16 = iVar15;
    }
    if (iVar11 <= iVar15) {
      iVar11 = iVar15;
    }
    *(int *)(param_1 + 0x23fe) = iVar14;
    *(int *)((long)param_1 + 0x11ff4) = iVar11;
    *(int *)(param_1 + 0x23fc) = iVar2;
    *(int *)((long)param_1 + 0x11fe4) = iVar16;
    *(uint *)(param_1 + 0x15f6) = *(uint *)(param_1 + 0x15f6) | 0x8000;
    break;
  case 3:
    uVar5 = FUN_01fa5220(*(long *)(param_1[1] + 0x68) + 0x2b4,*(long *)(param_1[1] + 0x68) + 0x278,
                         (long)param_1 + 0x11ffc,param_1 + 0x23ff);
    uVar6 = FUN_01f9d6fc(param_1,param_1 + 0x23f9,param_1 + 0x23fa,uVar5,0);
    if ((uVar6 & 1) != 0) {
      FUN_02085d90(param_1[3],0,(long)param_1 + 0x11ffc,0);
      FUN_01fb5c30(param_1);
    }
    break;
  case 4:
    FUN_02085d90(param_1[3],0,*(long *)PTR_DAT_04bb4e28 + 0x121c,0);
    *(uint *)(param_1 + 0x15f6) = *(uint *)(param_1 + 0x15f6) | 0x8000;
    FUN_01fb98b0(param_1);
    break;
  case 7:
    if ((*(int *)((long)param_1 + 0xaf8c) == 0xb) &&
       ((*(uint *)(param_1 + 0x15f6) >> 0x12 & 1) == 0)) {
      *(uint *)(param_1 + 0x15f6) = *(uint *)(param_1 + 0x15f6) & 0xfffbffff;
    }
    else {
      FUN_02085d90(param_1[3],0,*(long *)PTR_DAT_04bb4e28 + 0x121c,0);
      *(uint *)(param_1 + 0x15f6) = *(uint *)(param_1 + 0x15f6) | 0x8000;
      FUN_01e7b7bc(&local_1f8);
      lVar7 = FUN_0146d638(0x5d);
      pfVar8 = (float *)(**(code **)(*(long *)(lVar7 + 0xf0) + 0xf0))();
      local_17c = (int)(*pfVar8 + 0.0);
      puVar9 = (undefined2 *)FUN_01e57b44(param_1[2]);
      local_18c = *puVar9;
      uStack_184 = *(undefined4 *)(param_1[1] + 0x750);
      local_18a = *(undefined1 *)(puVar9 + 1);
      local_189 = *(undefined1 *)((long)puVar9 + 3);
      local_188 = *(undefined4 *)(puVar9 + 2);
      (**(code **)(*param_1 + 0x38))(param_1,0x44,&local_1f8,1);
    }
    break;
  case 8:
    *(uint *)(param_1 + 0x15f6) = *(uint *)(param_1 + 0x15f6) | 0x8000;
    FUN_01fb9e94(param_1);
    break;
  case 9:
    uVar5 = FUN_01fa5220(*(long *)(param_1[1] + 0x68) + 0x2b4,*(long *)(param_1[1] + 0x68) + 0x278,
                         (long)param_1 + 0x11ffc,param_1 + 0x23ff);
    FUN_01fb63c4(param_1,param_1 + 0x23f9,param_1 + 0x23fa,uVar5);
    break;
  case 10:
    uVar6 = FUN_03738210(DAT_05abbc58,*(undefined2 *)((long)param_1 + 0x12184));
    if ((uVar6 & 1) != 0) {
      lVar7 = FUN_029156e0();
      uVar6 = FUN_03777260(*(undefined4 *)(lVar7 + 0x38));
      if ((uVar6 & 1) == 0) break;
      lVar7 = DAT_05abbc58;
    }
    if ((*(uint *)(&DAT_00001230 + lVar7) >> 2 & 1) == 0) {
      if ((*(uint *)(&DAT_00001230 + lVar7) >> 3 & 1) == 0) {
        pfVar8 = (float *)FUN_0252d9bc(0);
        if (pfVar8 == (float *)0x0) goto LAB_01fb371c;
      }
      else {
        pfVar8 = (float *)(lVar7 + 0x1170);
      }
      fVar17 = *(float *)(*(long *)(param_1[1] + 0x68) + 0x278) - *pfVar8;
      fVar18 = *(float *)(*(long *)(param_1[1] + 0x68) + 0x280) - pfVar8[2];
      piVar10 = (int *)(**(code **)(*(long *)(DAT_053e0208 + 0x17a30) + 0xf0))();
      uVar12 = (uint)((float)*piVar10 + SQRT(fVar18 * fVar18 + fVar17 * fVar17) / -10.0);
      uVar12 = uVar12 & ((int)uVar12 >> 0x1f ^ 0xffffffffU);
    }
    else {
LAB_01fb371c:
      uVar12 = 0;
    }
    FUN_01fba0b8(param_1,uVar12);
    break;
  case 0xb:
    uVar6 = FUN_03738210(DAT_05abbc58,*(undefined2 *)((long)param_1 + 0x12184));
    if ((uVar6 & 1) != 0) {
      lVar7 = FUN_029156e0();
      uVar6 = FUN_03777260(*(undefined4 *)(lVar7 + 0x38));
      if ((uVar6 & 1) == 0) break;
    }
    lVar7 = FUN_0252d9bc(0);
    if (lVar7 == 0) {
      uVar12 = 0;
    }
    else {
      local_1e4 = 0;
      local_1d8 = (long *)((ulong)local_1d8 & 0xffffffff);
      FUN_01faa590(&local_1f8);
      uVar12 = (uint)(*(float *)(lVar7 + 8) <
                     ((float)local_1e4 * 5.0 + (float)local_1d8._4_4_ * 5.0 + 5.0) * 0.5);
    }
    *(uint *)(param_1 + 0x2457) = uVar12;
    local_1f8 = 0;
    local_1f0 = (long *)((ulong)local_1f0._4_4_ << 0x20);
    FUN_01fba3a0(param_1,&local_1f8,0);
    break;
  case 0xc:
    if (*(int *)(param_1[1] + 0x750) == 3) break;
    *(undefined1 *)plVar1 = 1;
    FUN_02194660(param_1 + 0x1617);
    *(undefined1 *)((long)param_1 + 0xe724) = 0;
    FUN_01f9c324(param_1);
    pcVar13 = *(code **)(*param_1 + 0x5e0);
    goto LAB_01fb34c4;
  case 0xd:
    if ((*(byte *)((long)param_1 + 0xafb2) >> 1 & 1) == 0) break;
    *(undefined1 *)plVar1 = 1;
    pcVar13 = *(code **)(*param_1 + 0x5e8);
LAB_01fb34c4:
    (*pcVar13)(param_1);
    break;
  case 0xe:
    if (*(int *)((long)param_1 + 0xaf8c) != 0xb) {
      FUN_02085d90(param_1[3],0,*(long *)PTR_DAT_04bb4e28 + 0x121c,0);
      *(uint *)(param_1 + 0x15f6) = *(uint *)(param_1 + 0x15f6) | 0x8000;
      FUN_01fb9bc0(param_1);
    }
    break;
  case 0xf:
    uVar6 = (**(code **)(*param_1 + 0x540))(param_1);
    if (((uVar6 & 1) != 0) || (uVar6 = FUN_01e5a8c0(param_1[2]), (uVar6 & 1) != 0)) {
      *(undefined1 *)plVar1 = 1;
      *(undefined4 *)((long)param_1 + 0xaf8c) = 6;
      FUN_01e63f1c(&local_1f8);
      local_1f8 = CONCAT44(local_1f8._4_4_,1);
      local_194 = 1;
      local_18e = 1;
      local_190 = 0x101;
      pfVar8 = (float *)(**(code **)(*(long *)(*(long *)PTR_DAT_04bb3968 + 0x17730) + 0xf0))();
      fVar17 = *pfVar8 * 30.0;
      uVar12 = 0;
      if (fVar17 != (float)(int)fVar17) {
        uVar12 = (uint)(fVar17 < 0.0);
      }
      local_10c = (int)fVar17 - uVar12;
      FUN_00adda18(&local_208,(long)param_1 + 0xafa4,0);
      if (((local_208 != 0) && (local_200 != '\0')) && (local_1ff != '\0')) {
        FUN_007612f0(param_1 + 0x2401,local_208 + 0x3e0);
      }
      param_1[0x2444] = (long)param_1;
      param_1[0x2445] = (long)FUN_01fba690;
      local_1f0 = param_1 + 0x2443;
      local_1d8 = param_1 + 0x243f;
      param_1[0x2446] = 0;
      param_1[0x2440] = (long)param_1;
      param_1[0x2441] = (long)FUN_01fa1410;
      param_1[0x2442] = 0;
      FUN_01fb1020(param_1,&local_1f8,0x1e);
    }
  }
switchD_01fb34a4_caseD_5:
  *(undefined1 *)(param_1 + 0x15f2) = 0;
  *(undefined1 *)(param_1 + 0x15f3) = 0;
  *(undefined1 *)((long)param_1 + 0xaf9c) = 0;
  *(undefined4 *)((long)param_1 + 0xafa4) = 0;
  puVar4 = PTR_DAT_04bb37e0;
  *(undefined2 *)(param_1 + 0x15f5) = *(undefined2 *)PTR_DAT_04bb37e0;
  *(undefined *)((long)param_1 + 0xafaa) = puVar4[2];
  *(undefined *)((long)param_1 + 0xafab) = puVar4[3];
  *(undefined4 *)((long)param_1 + 0xafac) = *(undefined4 *)(puVar4 + 4);
  if ((*(uint *)(param_1 + 0x15f6) >> 0xd & 1) != 0) {
    *(uint *)(param_1 + 0x15f6) = *(uint *)(param_1 + 0x15f6) & 0xffffdfff;
  }
  return;
}

