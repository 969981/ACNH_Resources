
void FUN_03af9610(long param_1,long param_2,uint param_3)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  char cVar4;
  bool bVar5;
  uint uVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long lVar12;
  undefined4 uVar13;
  ulong uVar14;
  undefined4 uVar15;
  undefined8 uVar16;
  undefined4 *puVar17;
  long lVar18;
  ulong uVar19;
  long lVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  undefined *local_e0;
  char *pcStack_d8;
  int local_6c;
  
  lVar20 = *(long *)(param_1 + 0x10);
  if (*(uint *)(param_1 + 8) <= param_3) {
    param_3 = 0;
  }
  lVar12 = lVar20 + (long)(int)param_3 * 0x23c0;
  if (*(long *)(lVar12 + 0xeb0) == 0) {
    fVar21 = *(float *)(lVar12 + 0xae0);
    fVar23 = *(float *)(lVar12 + 0xad8);
    lVar18 = *(long *)PTR_DAT_04bbd510;
    fVar24 = *(float *)(lVar12 + 0xadc);
    fVar22 = *(float *)(lVar12 + 0xae4);
    local_e0 = PTR_DAT_04bb2020 + 0x10;
    pcStack_d8 = "gsys::RenderBuffer::color(half)";
    uVar15 = *(undefined4 *)(param_1 + 0x28);
    lVar9 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04bb3508);
    if (lVar9 == 0) {
      local_6c = nn::os::GetCurrentCoreNumber();
    }
    else {
      local_6c = (int)lVar9 + -1;
    }
    uVar10 = FUN_03948e10(lVar18,param_2,lVar18 + (long)local_6c * 0x290 + 0x10,&local_e0,uVar15,1,
                          (int)(fVar21 - fVar23),(int)(fVar22 - fVar24),1,0,1,0,1,0,0,0);
    *(undefined8 *)(lVar12 + 0xeb0) = uVar10;
    FUN_01560750(lVar12 + 0xb30,*(undefined8 *)(lVar12 + 0xeb0),*(undefined1 *)(lVar12 + 0xbee),
                 *(undefined2 *)(lVar12 + 0xbec));
    puVar17 = *(undefined4 **)(lVar12 + 0xeb0);
    *(undefined4 *)(lVar12 + 0xec8) = *puVar17;
    *(undefined4 *)(lVar12 + 0xecc) = puVar17[1];
    *(undefined8 *)(lVar12 + 0xed0) = *(undefined8 *)(puVar17 + 2);
    *(undefined8 *)(lVar12 + 0xed8) = *(undefined8 *)(puVar17 + 4);
    *(undefined4 *)(lVar12 + 0xee0) = puVar17[6];
    *(undefined4 *)(lVar12 + 0xee4) = puVar17[7];
    *(undefined8 *)(lVar12 + 0xee8) = *(undefined8 *)(puVar17 + 8);
    *(undefined8 *)(lVar12 + 0xef0) = *(undefined8 *)(puVar17 + 10);
    uVar10 = *(undefined8 *)(puVar17 + 0xc);
    uVar11 = *(undefined8 *)(puVar17 + 0xe);
    uVar16 = *(undefined8 *)(puVar17 + 0x10);
    *(undefined8 *)(lVar12 + 0xf0f) = *(undefined8 *)((long)puVar17 + 0x47);
    *(undefined8 *)(lVar12 + 0xf08) = uVar16;
    *(undefined8 *)(lVar12 + 0xf00) = uVar11;
    *(undefined8 *)(lVar12 + 0xef8) = uVar10;
    FUN_038fd1e0(lVar12 + 0xf18);
    FUN_038fd2f0(lVar12 + 0xf18,puVar17 + 0x14);
    uVar15 = puVar17[0x26];
    *(undefined8 *)(lVar12 + 0xf58) = *(undefined8 *)(puVar17 + 0x24);
    puVar1 = (uint *)(lVar12 + 0xf9c);
    *(undefined4 *)(lVar12 + 0xf60) = uVar15;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar5) {
        *puVar1 = *puVar1 | 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    *(undefined8 *)(lVar12 + 0xb28) = 0;
  }
  uVar2 = *(uint *)(lVar12 + 0x3c8);
  if (uVar2 != 0xffffffff) {
    lVar9 = *(long *)PTR_DAT_04bc1010;
    if ((*(uint *)(lVar9 + 0x5c8) >> 3 & 1) == 0) {
      uVar6 = uVar2 - *(ushort *)(lVar9 + 0x3da);
      if (*(uint *)(lVar9 + 0x368) <= uVar6) {
        uVar6 = 0;
      }
      if ((*(uint *)(*(long *)(lVar9 + 0x370) + (long)(int)uVar6 * 0x20 + 4) >> 2 & 1) == 0) {
        *(ulong *)(param_2 + 0x100) = *(ulong *)(param_2 + 0x100) | 1L << ((ulong)uVar2 & 0x3f);
        goto LAB_03af9884;
      }
    }
    if ((*(uint *)(lVar9 + 0x5c8) >> 5 & 1) == 0) {
      uVar13 = 0x112;
      uVar15 = 0x12;
    }
    else {
      uVar13 = 0x111;
      uVar15 = 0x11;
    }
    if ((*(uint *)(lVar9 + 800) & 2) != 0) {
      uVar15 = uVar13;
    }
    (**(code **)PTR_DAT_04bcf2a8)(*(undefined8 *)(param_2 + 0xb8),uVar15);
    *(undefined8 *)(param_2 + 0x100) = 0;
  }
LAB_03af9884:
  FUN_038e4cec(&local_e0);
  local_e0 = (undefined *)(((ulong)local_e0 >> 0x10 & 0xffff) << 0x10);
  FUN_038e4d90(&local_e0,param_2);
  (**(code **)(*(long *)(lVar12 + 0xac8) + 0x38))(lVar12 + 0xac8,param_2);
  FUN_038e77e4(lVar12 + 0x1260,param_2,lVar12 + 0xac8);
  lVar9 = *(long *)(*(long *)PTR_DAT_04bd1650 + 0x40) + 0x540;
  if (*(uint *)(*(long *)PTR_DAT_04bd1650 + 0x38) < 5) {
    lVar9 = 0;
  }
  lVar18 = *(long *)(*(long *)(lVar9 + 8) + 0x28);
  uVar14 = (ulong)(2 < *(uint *)(*(long *)(lVar9 + 8) + 0x20));
  lVar9 = lVar18 + uVar14 * 0x2a0;
  FUN_03907810(lVar9,param_2);
  FUN_01557430(lVar9,param_2,0,lVar20 + (long)(int)param_3 * 0x23c0 + 0x1fb0,0);
  puVar1 = (uint *)(lVar9 + 0x14);
  do {
    uVar2 = *puVar1;
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar5) {
      *puVar1 = uVar2 | 0x80000000;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  if ((uVar2 & 0x7fffffff) != 0) {
    if ((int)uVar2 < 0) {
      if ((int)*puVar1 < 0) {
        lVar20 = *(long *)PTR_DAT_04bb29d0;
        do {
          nn::os::ConvertToTimeSpan(lVar20 / 1000000);
          nn::os::SleepThread();
        } while ((int)*puVar1 < 0);
      }
    }
    else {
      FUN_03907b80(lVar9);
    }
  }
  do {
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar5) {
      *puVar1 = 0;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  lVar18 = lVar18 + uVar14 * 0x2a0;
  FUN_0390d290(lVar12 + 0x708,param_2,
               *(long *)(lVar18 + 0x68) + (ulong)(1 < *(uint *)(lVar18 + 0x60)) * 0x18,0xffffffff,0)
  ;
  uVar10 = *(undefined8 *)(param_2 + 0xb8);
  lVar20 = *(long *)PTR_DAT_04bbd7e0;
  (**(code **)PTR_DAT_04bcf1a8)(uVar10,0x10,lVar20 + 0x1024);
  (**(code **)PTR_DAT_04bcf1b0)(uVar10,0x10,lVar20 + 0x1068);
  puVar8 = PTR_DAT_04bcf1e8;
  puVar7 = PTR_DAT_04bbd560;
  iVar3 = *(int *)(lVar20 + 0x1010);
  if (iVar3 != 0) {
    lVar20 = *(long *)(lVar20 + 0x1018);
    uVar14 = 0;
    uVar19 = 0;
    do {
      lVar9 = *(long *)(lVar20 + (-(uVar19 >> 0x1f) & 0xfffffff800000000 | uVar19 << 3));
      if (lVar9 != 0) {
        uVar11 = (**(code **)puVar7)(lVar9 + 8);
        (**(code **)puVar8)(uVar10,uVar14 & 0xffffffff,uVar11,*(undefined4 *)(lVar9 + 0x118));
      }
      uVar14 = uVar19 + 1;
      uVar19 = uVar14 & 0xffffffff;
    } while (iVar3 != (int)uVar14);
  }
  if ((*(byte *)(param_1 + 0x1d) >> 2 & 1) == 0) {
    lVar20 = *(long *)PTR_DAT_04bbd7e8;
    iVar3 = *(int *)(lVar20 + 0x480);
    if (iVar3 != 0) {
      uVar15 = *(undefined4 *)(lVar20 + 0x464);
      uVar11 = *(undefined8 *)(param_2 + 0xb8);
      uVar10 = (**(code **)PTR_DAT_04bbd560)(lVar20 + 0x488);
      (**(code **)PTR_DAT_04bbd568)(uVar11,uVar15,*(undefined4 *)(lVar20 + 0x460),iVar3,uVar10);
    }
  }
  uVar2 = *(uint *)(lVar12 + 0xb88);
  if (uVar2 != 0xffffffff) {
    lVar20 = *(long *)PTR_DAT_04bc1010;
    if ((*(uint *)(lVar20 + 0x5c8) >> 3 & 1) == 0) {
      uVar6 = uVar2 - *(ushort *)(lVar20 + 0x3da);
      if (*(uint *)(lVar20 + 0x368) <= uVar6) {
        uVar6 = 0;
      }
      if ((*(uint *)(*(long *)(lVar20 + 0x370) + (long)(int)uVar6 * 0x20 + 4) >> 2 & 1) == 0) {
        *(ulong *)(param_2 + 0x100) = *(ulong *)(param_2 + 0x100) | 1L << ((ulong)uVar2 & 0x3f);
        return;
      }
    }
    if ((*(uint *)(lVar20 + 0x5c8) >> 5 & 1) == 0) {
      uVar13 = 0x112;
      uVar15 = 0x12;
    }
    else {
      uVar13 = 0x111;
      uVar15 = 0x11;
    }
    if ((*(uint *)(lVar20 + 800) & 2) != 0) {
      uVar15 = uVar13;
    }
    (**(code **)PTR_DAT_04bcf2a8)(*(undefined8 *)(param_2 + 0xb8),uVar15);
    *(undefined8 *)(param_2 + 0x100) = 0;
  }
  return;
}

