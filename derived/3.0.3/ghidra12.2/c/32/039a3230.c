
void FUN_039a3230(long param_1,long param_2,undefined8 *param_3,uint param_4)

{
  uint *puVar1;
  long *plVar2;
  uint *puVar3;
  ushort uVar4;
  uint uVar5;
  ushort uVar6;
  ushort uVar7;
  char cVar8;
  bool bVar9;
  float fVar10;
  undefined *puVar11;
  undefined *puVar12;
  int iVar13;
  undefined8 uVar14;
  long lVar15;
  undefined8 uVar16;
  uint uVar17;
  undefined4 uVar18;
  undefined8 uVar19;
  long lVar20;
  undefined4 *puVar21;
  ulong uVar22;
  undefined8 *puVar23;
  ulong uVar24;
  undefined4 *puVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  undefined4 uVar30;
  undefined8 local_a8;
  undefined1 *puStack_a0;
  undefined *local_98;
  undefined8 local_90;
  undefined8 local_88;
  uint local_80;
  undefined8 local_7c;
  
  puVar21 = (undefined4 *)param_3[1];
  puVar25 = puVar21;
  if (puVar21 == (undefined4 *)0x0) {
    puVar25 = (undefined4 *)*param_3;
  }
  uVar6 = *(ushort *)((long)puVar25 + 0x32);
  uVar17 = (uint)*(ushort *)(puVar25 + 0xc);
  if (*(ushort *)(puVar25 + 0xc) < 2) {
    uVar17 = 1;
  }
  uVar17 = uVar17 >> (ulong)(param_4 & 0x1f);
  if ((int)uVar17 < 2) {
    uVar17 = 1;
  }
  uVar5 = (uint)uVar6;
  if (*(short *)((long)puVar25 + 0x3a) != 3) {
    uVar5 = 1;
  }
  if (uVar5 == uVar6 || uVar5 < uVar6) {
    uVar5 = (uint)uVar6;
  }
  local_98 = PTR_DAT_04bb2020 + 0x10;
  uVar5 = uVar5 >> (ulong)(param_4 & 0x1f);
  local_90 = "MultiFilterReduce";
  if ((int)uVar5 < 2) {
    uVar5 = 1;
  }
  uVar14 = FUN_039a6304(param_3 + 0x49,param_2,&local_98,*(undefined4 *)(param_3 + 2),uVar17,uVar5,1
                        ,0,0,1);
  param_3[1] = uVar14;
  FUN_01560750(param_3 + 0x2c,uVar14,*(undefined1 *)((long)param_3 + 0x21e),
               *(undefined2 *)((long)param_3 + 0x21c));
  param_3[0x21] = 0;
  *(float *)(param_3 + 0x22) = (float)(int)uVar17;
  *(float *)((long)param_3 + 0x114) = (float)(int)uVar5;
  *(float *)(param_3 + 0x20) = (float)(int)uVar17;
  *(float *)((long)param_3 + 0x104) = (float)(int)uVar5;
  *(undefined4 *)(param_3 + 3) = *puVar25;
  *(undefined4 *)((long)param_3 + 0x1c) = puVar25[1];
  param_3[4] = *(undefined8 *)(puVar25 + 2);
  param_3[5] = *(undefined8 *)(puVar25 + 4);
  *(undefined4 *)(param_3 + 6) = puVar25[6];
  *(undefined4 *)((long)param_3 + 0x34) = puVar25[7];
  param_3[7] = *(undefined8 *)(puVar25 + 8);
  param_3[8] = *(undefined8 *)(puVar25 + 10);
  uVar14 = *(undefined8 *)(puVar25 + 0xc);
  uVar16 = *(undefined8 *)(puVar25 + 0xe);
  uVar19 = *(undefined8 *)(puVar25 + 0x10);
  *(undefined8 *)((long)param_3 + 0x5f) = *(undefined8 *)((long)puVar25 + 0x47);
  param_3[10] = uVar16;
  param_3[0xb] = uVar19;
  param_3[9] = uVar14;
  FUN_038fd1e0(param_3 + 0xd);
  FUN_038fd2f0(param_3 + 0xd,puVar25 + 0x14);
  uVar14 = *(undefined8 *)(puVar25 + 0x24);
  puVar1 = (uint *)((long)param_3 + 0xec);
  *(undefined4 *)(param_3 + 0x16) = puVar25[0x26];
  param_3[0x15] = uVar14;
  do {
    cVar8 = '\x01';
    bVar9 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar9) {
      *puVar1 = *puVar1 | 1;
      cVar8 = ExclusiveMonitorsStatus();
    }
    puVar23 = (undefined8 *)PTR_DAT_04bbd510;
  } while (cVar8 != '\0');
  lVar20 = *(long *)PTR_DAT_04bbd510;
  lVar15 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04bb3508);
  if (lVar15 == 0) {
    iVar13 = nn::os::GetCurrentCoreNumber();
  }
  else {
    iVar13 = (int)lVar15 + -1;
  }
  local_98 = (undefined *)CONCAT44(local_98._4_4_,iVar13);
  if ((*(uint *)(lVar20 + (long)iVar13 * 0x290 + 0x298) & 1) == 0) {
    plVar2 = param_3 + 0x1f;
    (**(code **)(*plVar2 + 0x38))(plVar2,param_2);
    local_88 = 0xff7fffffff7fffff;
    local_98 = PTR_DAT_04bd0f08 + 0x10;
    local_90 = (char *)0x7f7fffff7f7fffff;
    local_80 = *(uint *)PTR_DAT_04bd0ea8;
    local_7c = 0x3f80000000000000;
    if (local_80 < 6) {
      if ((1 << (ulong)(local_80 & 0x1f) & 0x39U) == 0) {
        fVar26 = *(float *)((long)param_3 + 0x104);
        fVar27 = *(float *)(param_3 + 0x20);
      }
      else {
        fVar26 = *(float *)(param_3 + 0x20);
        fVar27 = *(float *)((long)param_3 + 0x104);
      }
      fVar29 = fVar26;
      fVar10 = 0.0;
      if (fVar26 <= 0.0) {
        fVar29 = 0.0;
        fVar10 = fVar26;
      }
      fVar28 = fVar27;
      fVar26 = 0.0;
      if (fVar27 <= 0.0) {
        fVar28 = 0.0;
        fVar26 = fVar27;
      }
      local_90 = (char *)CONCAT44(fVar26,fVar10);
      local_88 = CONCAT44(fVar28,fVar29);
    }
    FUN_038e77e4(&local_98,param_2,plVar2);
    lVar15 = *(long *)(*(long *)(*(long *)(*(long *)PTR_DAT_04bbdd18 + 0x10) + 800) + 8);
    if ((int)param_4 < 1) {
      lVar15 = *(long *)(lVar15 + 0x18);
    }
    else {
      param_4 = param_4 - 1;
      if (*(uint *)(lVar15 + 0x20) <= param_4) {
        param_4 = 0;
      }
      lVar15 = *(long *)(lVar15 + 0x28) + (ulong)param_4 * 0x150;
    }
    FUN_03907810(lVar15,param_2);
    uVar30 = *(undefined4 *)(param_1 + 0x128);
    puVar3 = (uint *)(lVar15 + 0x14);
    do {
      uVar17 = *puVar3;
      cVar8 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(puVar3,0x10);
      if (bVar9) {
        *puVar3 = uVar17 | 0x80000000;
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
    if ((uVar17 & 0x7fffffff) != 0) {
      if ((int)uVar17 < 0) {
        if ((int)*puVar3 < 0) {
          lVar20 = *(long *)PTR_DAT_04bb29d0;
          do {
            nn::os::ConvertToTimeSpan(lVar20 / 1000000);
            nn::os::SleepThread();
          } while ((int)*puVar3 < 0);
        }
      }
      else {
        FUN_03907b80(lVar15);
      }
    }
    do {
      cVar8 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(puVar3,0x10);
      if (bVar9) {
        *puVar3 = 0;
        cVar8 = ExclusiveMonitorsStatus();
      }
      puVar12 = PTR_DAT_04bd0fc8;
      puVar11 = PTR_DAT_04bcf2e0;
    } while (cVar8 != '\0');
    local_a8 = CONCAT44(local_a8._4_4_,uVar30);
    lVar20 = 0x30;
    if (*(uint *)(lVar15 + 0x30) < 3) {
      lVar20 = 0;
    }
    iVar13 = *(int *)(*(long *)(lVar15 + 0x38) + lVar20);
    if (iVar13 != -1) {
      (**(code **)PTR_DAT_04bcf2e0)
                (*(undefined8 *)(param_2 + 0xb8),*(undefined8 *)(*(long *)PTR_DAT_04bd0fc8 + 0x70),
                 *(undefined8 *)(*(long *)PTR_DAT_04bd0fc8 + 0x18),(long)iVar13,4,&local_a8);
    }
    uVar6 = *(ushort *)(puVar25 + 0xc);
    uVar7 = *(ushort *)((long)puVar25 + 0x32);
    if (uVar6 < 2) {
      uVar6 = 1;
    }
    uVar4 = uVar7;
    if (*(short *)((long)puVar25 + 0x3a) != 3) {
      uVar4 = 1;
    }
    if (uVar4 <= uVar7) {
      uVar4 = uVar7;
    }
    local_a8 = CONCAT44(1.0 / (float)uVar4,1.0 / (float)uVar6);
    do {
      uVar17 = *puVar3;
      cVar8 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(puVar3,0x10);
      if (bVar9) {
        *puVar3 = uVar17 | 0x80000000;
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
    if ((uVar17 & 0x7fffffff) != 0) {
      if ((int)uVar17 < 0) {
        if ((int)*puVar3 < 0) {
          lVar20 = *(long *)PTR_DAT_04bb29d0;
          do {
            nn::os::ConvertToTimeSpan(lVar20 / 1000000);
            nn::os::SleepThread();
          } while ((int)*puVar3 < 0);
        }
      }
      else {
        FUN_03907b80(lVar15);
      }
    }
    do {
      cVar8 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(puVar3,0x10);
      if (bVar9) {
        *puVar3 = 0;
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
    iVar13 = *(int *)(*(long *)(lVar15 + 0x38) + (ulong)(1 < *(uint *)(lVar15 + 0x30)) * 0x18);
    if (iVar13 != -1) {
      lVar20 = *(long *)puVar12;
      (**(code **)puVar11)
                (*(undefined8 *)(param_2 + 0xb8),*(undefined8 *)(lVar20 + 0x70),
                 *(undefined8 *)(lVar20 + 0x18),(long)iVar13,8,&local_a8);
    }
    local_a8 = 0;
    puStack_a0 = &DAT_3f8000003f800000;
    do {
      uVar17 = *puVar3;
      cVar8 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(puVar3,0x10);
      if (bVar9) {
        *puVar3 = uVar17 | 0x80000000;
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
    if ((uVar17 & 0x7fffffff) != 0) {
      if ((int)uVar17 < 0) {
        if ((int)*puVar3 < 0) {
          lVar20 = *(long *)PTR_DAT_04bb29d0;
          do {
            nn::os::ConvertToTimeSpan(lVar20 / 1000000);
            nn::os::SleepThread();
          } while ((int)*puVar3 < 0);
        }
      }
      else {
        FUN_03907b80(lVar15);
      }
    }
    do {
      cVar8 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(puVar3,0x10);
      if (bVar9) {
        *puVar3 = 0;
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
    if (**(int **)(lVar15 + 0x38) != -1) {
      lVar20 = *(long *)puVar12;
      (**(code **)puVar11)
                (*(undefined8 *)(param_2 + 0xb8),*(undefined8 *)(lVar20 + 0x70),
                 *(undefined8 *)(lVar20 + 0x18),(long)**(int **)(lVar15 + 0x38),0x10,&local_a8);
    }
    do {
      uVar17 = *puVar3;
      cVar8 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(puVar3,0x10);
      if (bVar9) {
        *puVar3 = uVar17 | 0x80000000;
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
    if ((uVar17 & 0x7fffffff) != 0) {
      if ((int)uVar17 < 0) {
        if ((int)*puVar3 < 0) {
          lVar20 = *(long *)PTR_DAT_04bb29d0;
          do {
            nn::os::ConvertToTimeSpan(lVar20 / 1000000);
            nn::os::SleepThread();
          } while ((int)*puVar3 < 0);
        }
      }
      else {
        FUN_03907b80(lVar15);
      }
    }
    do {
      cVar8 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(puVar3,0x10);
      if (bVar9) {
        *puVar3 = 0;
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
    FUN_0390d290(param_3 + 3,param_2,*(undefined8 *)(lVar15 + 0x68),0xffffffff,0);
    uVar14 = *(undefined8 *)(param_2 + 0xb8);
    lVar15 = *(long *)PTR_DAT_04bbd7e0;
    (**(code **)PTR_DAT_04bcf1a8)(uVar14,0x10,lVar15 + 0xe44);
    (**(code **)PTR_DAT_04bcf1b0)(uVar14,0x10,lVar15 + 0xe88);
    puVar12 = PTR_DAT_04bcf1e8;
    puVar11 = PTR_DAT_04bbd560;
    iVar13 = *(int *)(lVar15 + 0xe30);
    if (iVar13 != 0) {
      lVar15 = *(long *)(lVar15 + 0xe38);
      uVar22 = 0;
      uVar24 = 0;
      do {
        lVar20 = *(long *)(lVar15 + (-(uVar24 >> 0x1f) & 0xfffffff800000000 | uVar24 << 3));
        if (lVar20 != 0) {
          uVar16 = (**(code **)puVar11)(lVar20 + 8);
          (**(code **)puVar12)(uVar14,uVar22 & 0xffffffff,uVar16,*(undefined4 *)(lVar20 + 0x118));
        }
        uVar22 = uVar24 + 1;
        uVar24 = uVar22 & 0xffffffff;
      } while (iVar13 != (int)uVar22);
    }
    lVar15 = *(long *)PTR_DAT_04bbd7e8;
    iVar13 = *(int *)(lVar15 + 0x1f8);
    if (iVar13 != 0) {
      uVar30 = *(undefined4 *)(lVar15 + 0x1dc);
      uVar16 = *(undefined8 *)(param_2 + 0xb8);
      uVar14 = (**(code **)puVar11)(lVar15 + 0x200);
      (**(code **)PTR_DAT_04bbd568)(uVar16,uVar30,*(undefined4 *)(lVar15 + 0x1d8),iVar13,uVar14);
    }
    puVar23 = (undefined8 *)PTR_DAT_04bbd510;
    uVar17 = *(uint *)(param_3 + 0x37);
    if (uVar17 != 0xffffffff) {
      lVar15 = *(long *)PTR_DAT_04bc1010;
      if ((*(uint *)(lVar15 + 0x5c8) >> 3 & 1) == 0) {
        uVar5 = uVar17 - *(ushort *)(lVar15 + 0x3da);
        if (*(uint *)(lVar15 + 0x368) <= uVar5) {
          uVar5 = 0;
        }
        if ((*(uint *)(*(long *)(lVar15 + 0x370) + (long)(int)uVar5 * 0x20 + 4) >> 2 & 1) == 0) {
          *(ulong *)(param_2 + 0x100) = *(ulong *)(param_2 + 0x100) | 1L << ((ulong)uVar17 & 0x3f);
          goto LAB_039a3a04;
        }
      }
      if ((*(uint *)(lVar15 + 0x5c8) >> 5 & 1) == 0) {
        uVar18 = 0x112;
        uVar30 = 0x12;
      }
      else {
        uVar18 = 0x111;
        uVar30 = 0x11;
      }
      if ((*(uint *)(lVar15 + 800) & 2) != 0) {
        uVar30 = uVar18;
      }
      (**(code **)PTR_DAT_04bcf2a8)(*(undefined8 *)(param_2 + 0xb8),uVar30);
      *(undefined8 *)(param_2 + 0x100) = 0;
    }
  }
LAB_039a3a04:
  if ((puVar21 != (undefined4 *)0x0) && ((*(byte *)(param_3 + 0x4a) & 1) == 0)) {
    FUN_039499cc(*puVar23,puVar21);
  }
  if (*(char *)((long)param_3 + 0x244) != '\0') {
    *(undefined2 *)(param_3 + 0x1d) = 0x302;
    *(undefined1 *)((long)param_3 + 0xea) = 4;
    *(char *)((long)param_3 + 0xeb) = (char)*(undefined4 *)(param_3 + 0x48);
    *(byte *)(param_3 + 0x1e) = *(byte *)(param_3 + 0x1e) | 2;
    do {
      cVar8 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar9) {
        *puVar1 = *puVar1 | 1;
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
    *(undefined1 *)((long)param_3 + 0x244) = 0;
  }
  return;
}

