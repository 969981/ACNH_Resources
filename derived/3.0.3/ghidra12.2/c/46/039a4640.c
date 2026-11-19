
void FUN_039a4640(long param_1,undefined8 *param_2,int param_3,int param_4)

{
  uint *puVar1;
  long *plVar2;
  ushort uVar3;
  undefined8 uVar4;
  ushort uVar5;
  ushort uVar6;
  char cVar7;
  bool bVar8;
  uint uVar9;
  float fVar10;
  undefined *puVar11;
  int iVar12;
  undefined8 uVar13;
  long lVar14;
  uint uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined8 uVar18;
  undefined4 *puVar19;
  undefined8 *puVar20;
  long lVar21;
  undefined4 *puVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  undefined *local_88;
  undefined8 local_80;
  undefined8 local_78;
  uint local_70;
  undefined8 local_6c;
  
  puVar19 = (undefined4 *)param_2[1];
  puVar22 = puVar19;
  if (puVar19 == (undefined4 *)0x0) {
    puVar22 = (undefined4 *)*param_2;
  }
  uVar5 = *(ushort *)(puVar22 + 0xc);
  uVar6 = *(ushort *)((long)puVar22 + 0x32);
  if (uVar5 < 2) {
    uVar5 = 1;
  }
  local_88 = PTR_DAT_04bb2020 + 0x10;
  uVar3 = uVar6;
  if (*(short *)((long)puVar22 + 0x3a) != 3) {
    uVar3 = 1;
  }
  if (uVar3 <= uVar6) {
    uVar3 = uVar6;
  }
  local_80 = "MultiFilterBlur";
  uVar13 = FUN_039a6304(param_2 + 0x49,param_1,&local_88,*(undefined4 *)(param_2 + 2),uVar5,uVar3,1,
                        0,0,1);
  param_2[1] = uVar13;
  FUN_01560750(param_2 + 0x2c,uVar13,*(undefined1 *)((long)param_2 + 0x21e),
               *(undefined2 *)((long)param_2 + 0x21c));
  param_2[0x21] = 0;
  *(float *)(param_2 + 0x22) = (float)uVar5;
  *(float *)((long)param_2 + 0x114) = (float)uVar3;
  *(float *)(param_2 + 0x20) = (float)uVar5;
  *(float *)((long)param_2 + 0x104) = (float)uVar3;
  puVar20 = param_2 + 3;
  *(undefined4 *)puVar20 = *puVar22;
  *(undefined4 *)((long)param_2 + 0x1c) = puVar22[1];
  param_2[4] = *(undefined8 *)(puVar22 + 2);
  param_2[5] = *(undefined8 *)(puVar22 + 4);
  *(undefined4 *)(param_2 + 6) = puVar22[6];
  *(undefined4 *)((long)param_2 + 0x34) = puVar22[7];
  param_2[7] = *(undefined8 *)(puVar22 + 8);
  param_2[8] = *(undefined8 *)(puVar22 + 10);
  uVar13 = *(undefined8 *)(puVar22 + 0xc);
  uVar4 = *(undefined8 *)(puVar22 + 0xe);
  uVar18 = *(undefined8 *)(puVar22 + 0x10);
  *(undefined8 *)((long)param_2 + 0x5f) = *(undefined8 *)((long)puVar22 + 0x47);
  param_2[10] = uVar4;
  param_2[0xb] = uVar18;
  param_2[9] = uVar13;
  FUN_038fd1e0(param_2 + 0xd);
  FUN_038fd2f0(param_2 + 0xd,puVar22 + 0x14);
  uVar13 = *(undefined8 *)(puVar22 + 0x24);
  puVar1 = (uint *)((long)param_2 + 0xec);
  *(undefined4 *)(param_2 + 0x16) = puVar22[0x26];
  param_2[0x15] = uVar13;
  do {
    cVar7 = '\x01';
    bVar8 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar8) {
      *puVar1 = *puVar1 | 1;
      cVar7 = ExclusiveMonitorsStatus();
    }
    puVar11 = PTR_DAT_04bbd510;
  } while (cVar7 != '\0');
  lVar21 = *(long *)PTR_DAT_04bbd510;
  lVar14 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04bb3508);
  if (lVar14 == 0) {
    iVar12 = nn::os::GetCurrentCoreNumber();
  }
  else {
    iVar12 = (int)lVar14 + -1;
  }
  local_88 = (undefined *)CONCAT44(local_88._4_4_,iVar12);
  if ((*(uint *)(lVar21 + (long)iVar12 * 0x290 + 0x298) & 1) != 0) goto LAB_039a4a3c;
  plVar2 = param_2 + 0x1f;
  (**(code **)(*plVar2 + 0x38))(plVar2,param_1);
  local_78 = 0xff7fffffff7fffff;
  local_88 = PTR_DAT_04bd0f08 + 0x10;
  local_80 = (char *)0x7f7fffff7f7fffff;
  local_70 = *(uint *)PTR_DAT_04bd0ea8;
  local_6c = 0x3f80000000000000;
  if (local_70 < 6) {
    if ((1 << (ulong)(local_70 & 0x1f) & 0x39U) == 0) {
      fVar23 = *(float *)((long)param_2 + 0x104);
      fVar24 = *(float *)(param_2 + 0x20);
    }
    else {
      fVar23 = *(float *)(param_2 + 0x20);
      fVar24 = *(float *)((long)param_2 + 0x104);
    }
    fVar26 = fVar23;
    fVar10 = 0.0;
    if (fVar23 <= 0.0) {
      fVar26 = 0.0;
      fVar10 = fVar23;
    }
    fVar25 = fVar24;
    fVar23 = 0.0;
    if (fVar24 <= 0.0) {
      fVar25 = 0.0;
      fVar23 = fVar24;
    }
    local_80 = (char *)CONCAT44(fVar23,fVar10);
    local_78 = CONCAT44(fVar25,fVar26);
  }
  FUN_038e77e4(&local_88,param_1,plVar2);
  switch(param_3) {
  case 1:
    FUN_0394ada0(param_1,puVar20,&local_88,1,PTR_DAT_04bb2f48,PTR_DAT_04bbdc38,PTR_DAT_04bb2f48);
    break;
  case 2:
  case 4:
    lVar14 = *(long *)(*(long *)(*(long *)(*(long *)PTR_DAT_04bbdd18 + 0x10) + 0x60) + 8);
    if (param_4 < 0) goto LAB_039a496c;
    uVar15 = param_4 << 2 | 2;
LAB_039a4950:
    if (*(uint *)(lVar14 + 0x20) <= uVar15) {
      uVar15 = 0;
    }
    lVar14 = *(long *)(lVar14 + 0x28) + (ulong)uVar15 * 0x150;
    goto LAB_039a4970;
  case 3:
    lVar14 = *(long *)(*(long *)(*(long *)(*(long *)PTR_DAT_04bbdd18 + 0x10) + 0x60) + 8);
    if (-1 < param_4) {
      uVar15 = param_4 << 2;
      goto LAB_039a4950;
    }
LAB_039a496c:
    lVar14 = *(long *)(lVar14 + 0x18);
LAB_039a4970:
    FUN_03907810(lVar14,param_1);
    FUN_03949e90(param_1,lVar14,puVar20,&local_88,PTR_DAT_04bbdc38,PTR_DAT_04bb2f48);
  }
  uVar15 = *(uint *)(param_2 + 0x37);
  if (uVar15 != 0xffffffff) {
    lVar14 = *(long *)PTR_DAT_04bc1010;
    if ((*(uint *)(lVar14 + 0x5c8) >> 3 & 1) == 0) {
      uVar9 = uVar15 - *(ushort *)(lVar14 + 0x3da);
      if (*(uint *)(lVar14 + 0x368) <= uVar9) {
        uVar9 = 0;
      }
      if ((*(uint *)(*(long *)(lVar14 + 0x370) + (long)(int)uVar9 * 0x20 + 4) >> 2 & 1) == 0) {
        *(ulong *)(param_1 + 0x100) = *(ulong *)(param_1 + 0x100) | 1L << ((ulong)uVar15 & 0x3f);
        goto LAB_039a4a3c;
      }
    }
    if ((*(uint *)(lVar14 + 0x5c8) >> 5 & 1) == 0) {
      uVar16 = 0x112;
      uVar17 = 0x12;
    }
    else {
      uVar16 = 0x111;
      uVar17 = 0x11;
    }
    if ((*(uint *)(lVar14 + 800) & 2) != 0) {
      uVar17 = uVar16;
    }
    (**(code **)PTR_DAT_04bcf2a8)(*(undefined8 *)(param_1 + 0xb8),uVar17);
    *(undefined8 *)(param_1 + 0x100) = 0;
  }
LAB_039a4a3c:
  if ((puVar19 != (undefined4 *)0x0) && ((*(byte *)(param_2 + 0x4a) & 1) == 0)) {
    FUN_039499cc(*(undefined8 *)puVar11,puVar19);
  }
  if (*(char *)((long)param_2 + 0x244) != '\0') {
    *(undefined2 *)(param_2 + 0x1d) = 0x302;
    *(undefined1 *)((long)param_2 + 0xea) = 4;
    *(char *)((long)param_2 + 0xeb) = (char)*(undefined4 *)(param_2 + 0x48);
    *(byte *)(param_2 + 0x1e) = *(byte *)(param_2 + 0x1e) | 2;
    do {
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar8) {
        *puVar1 = *puVar1 | 1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    *(undefined1 *)((long)param_2 + 0x244) = 0;
  }
  if (param_3 == 4) {
    FUN_039a4640(param_1,param_2,3,param_4);
  }
  return;
}

