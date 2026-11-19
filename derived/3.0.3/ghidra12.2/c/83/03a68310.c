
void FUN_03a68310(long param_1,long param_2,undefined8 param_3,long param_4,undefined8 param_5,
                 undefined8 *param_6,undefined4 *param_7)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  byte bVar5;
  ushort uVar6;
  ushort uVar7;
  ushort uVar8;
  ushort uVar9;
  char cVar10;
  uint uVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined8 uVar14;
  bool bVar15;
  long lVar16;
  uint uVar17;
  uint uVar18;
  undefined4 uVar19;
  uint uVar20;
  undefined4 uVar21;
  undefined8 uVar22;
  long lVar23;
  long lVar24;
  undefined8 uVar25;
  ulong uVar26;
  ulong uVar27;
  float fVar28;
  float fVar29;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined4 uStack_ac;
  undefined *local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  uint local_90;
  undefined8 local_8c;
  
  uVar8 = *(ushort *)(param_7 + 0xc);
  uVar9 = *(ushort *)(param_1 + 0x80);
  if (uVar8 < 2) {
    uVar8 = 1;
  }
  lVar16 = *(long *)(param_1 + 0x30);
  uVar6 = *(ushort *)(lVar16 + 0x32);
  uVar20 = (uint)*(ushort *)(lVar16 + 0x30);
  if (*(ushort *)(lVar16 + 0x30) < 2) {
    uVar20 = 1;
  }
  uVar17 = (uint)(*(float *)(param_4 + 0x6c) * (float)uVar8);
  uVar3 = uVar17;
  if ((int)uVar20 <= (int)uVar17) {
    uVar3 = uVar20;
  }
  if ((int)uVar17 < 1) {
    uVar3 = 1;
  }
  uVar7 = *(ushort *)((long)param_7 + 0x32);
  uVar8 = uVar7;
  if (*(short *)((long)param_7 + 0x3a) != 3) {
    uVar8 = 1;
  }
  if (uVar8 <= uVar7) {
    uVar8 = uVar7;
  }
  uVar20 = (uint)uVar6;
  if (*(short *)(lVar16 + 0x3a) != 3) {
    uVar20 = 1;
  }
  if (uVar20 == uVar6 || uVar20 < uVar6) {
    uVar20 = (uint)uVar6;
  }
  uVar18 = (uint)(*(float *)(param_4 + 0x6c) * (float)uVar8);
  uVar17 = uVar18;
  if ((int)uVar20 <= (int)uVar18) {
    uVar17 = uVar20;
  }
  if ((int)uVar18 < 1) {
    uVar17 = 1;
  }
  uVar20 = (uint)uVar9;
  if (uVar9 < 2) {
    uVar20 = 1;
  }
  if (uVar20 == uVar3) {
    uVar8 = *(ushort *)(param_1 + 0x82);
    uVar20 = (uint)uVar8;
    if (*(short *)(param_1 + 0x8a) != 3) {
      uVar20 = 1;
    }
    if (uVar20 == uVar8 || uVar20 < uVar8) {
      uVar20 = (uint)uVar8;
    }
    if (((uVar20 == uVar17) && (*(short *)(param_1 + 0xe8) == *(short *)(param_7 + 0x26))) &&
       (bVar5 = *(byte *)(param_1 + 0x9e), bVar5 == *(byte *)(lVar16 + 0x4e))) goto LAB_03a68468;
  }
  FUN_0390a734(param_1 + 0x50,1,*(undefined2 *)(param_7 + 0x26),uVar3,uVar17,1,1,
               *(undefined1 *)(lVar16 + 0x4e),0,1);
  bVar5 = *(byte *)(param_1 + 0x9e);
LAB_03a68468:
  local_a8 = *(undefined **)(param_1 + 0x38);
  *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(param_1 + 0x38);
  *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(param_1 + 0x3c);
  local_a0 = *(undefined8 *)(param_1 + 0x40);
  local_98 = *(undefined8 *)(param_1 + 0x48);
  *(undefined8 *)(param_1 + 0x58) = local_a0;
  *(undefined8 *)(param_1 + 0x60) = local_98;
  if ((bVar5 >> 1 & 1) == 0) {
    bVar15 = false;
  }
  else {
    bVar15 = 0x11 < *(ushort *)(param_1 + 0xe8) && *(ushort *)(param_1 + 0xe8) - 0x59 < 0xffffffd6;
  }
  FUN_038fd3e0(param_1 + 0xa0,&local_a8,(ushort *)(param_1 + 0x80),0,*(undefined8 *)(param_1 + 0xe0)
               ,bVar15,1);
  iVar4 = *(int *)(param_4 + 0x70);
  iVar2 = iVar4;
  if (iVar4 < 0) {
    iVar2 = iVar4 + 1;
  }
  uVar20 = (iVar2 >> 1) - 1;
  lVar16 = *(long *)(*(long *)(*(long *)(*(long *)PTR_DAT_04bbdd18 + 0x10) + 0x408) + 8);
  uVar18 = *(uint *)(lVar16 + 0x20);
  if ((int)uVar18 <= (int)uVar20) {
    uVar20 = uVar18;
  }
  uVar11 = 0;
  if (1 < iVar4) {
    uVar11 = uVar20;
  }
  if ((int)uVar11 < 1) {
    lVar16 = *(long *)(lVar16 + 0x18);
  }
  else {
    uVar11 = uVar11 - 1;
    if (uVar18 <= uVar11) {
      uVar11 = 0;
    }
    lVar16 = *(long *)(lVar16 + 0x28) + (ulong)uVar11 * 0x150;
  }
  fVar28 = (float)(int)uVar17;
  FUN_01560750(param_1 + 0x158,param_1 + 0x50,*(undefined1 *)(param_1 + 0x216),
               *(undefined2 *)(param_1 + 0x214));
  *(float *)(param_1 + 0xf8) = (float)(int)uVar3;
  *(float *)(param_1 + 0xfc) = fVar28;
  *(long *)(param_1 + 0x110) = param_1 + 0x158;
  local_98 = 0xff7fffffff7fffff;
  local_a8 = PTR_DAT_04bd0f08 + 0x10;
  local_90 = *(uint *)PTR_DAT_04bd0ea8;
  local_a0 = 0x7f7fffff7f7fffff;
  *(float *)(param_1 + 0x100) = (float)(int)(uVar3 & (int)uVar3 >> 0x1f);
  *(float *)(param_1 + 0x108) = (float)(int)(uVar3 & ((int)uVar3 >> 0x1f ^ 0xffffffffU));
  *(float *)(param_1 + 0x104) = (float)(int)(uVar17 & (int)uVar17 >> 0x1f);
  local_8c = 0x3f80000000000000;
  *(float *)(param_1 + 0x10c) = (float)(int)(uVar17 & ((int)uVar17 >> 0x1f ^ 0xffffffffU));
  if (local_90 < 6) {
    if ((1 << (ulong)(local_90 & 0x1f) & 0x39U) == 0) {
      uVar20 = uVar3;
    }
    else {
      uVar20 = uVar17;
      uVar17 = uVar3;
    }
    local_98 = CONCAT44((float)(int)(uVar20 & ((int)uVar20 >> 0x1f ^ 0xffffffffU)),
                        (float)(int)(uVar17 & ((int)uVar17 >> 0x1f ^ 0xffffffffU)));
    local_a0 = CONCAT44((float)(int)(uVar20 & (int)uVar20 >> 0x1f),
                        (float)(int)(uVar17 & (int)uVar17 >> 0x1f));
  }
  FUN_038e77e4(&local_a8,param_2,param_1 + 0xf0);
  (**(code **)(*(long *)(param_1 + 0xf0) + 0x38))(param_1 + 0xf0,param_2);
  *(undefined4 *)(param_1 + 0x238) = *param_7;
  *(undefined4 *)(param_1 + 0x23c) = param_7[1];
  *(undefined8 *)(param_1 + 0x240) = *(undefined8 *)(param_7 + 2);
  *(undefined8 *)(param_1 + 0x248) = *(undefined8 *)(param_7 + 4);
  *(undefined4 *)(param_1 + 0x250) = param_7[6];
  *(undefined4 *)(param_1 + 0x254) = param_7[7];
  *(undefined8 *)(param_1 + 600) = *(undefined8 *)(param_7 + 8);
  *(undefined8 *)(param_1 + 0x260) = *(undefined8 *)(param_7 + 10);
  uVar25 = *(undefined8 *)(param_7 + 0xc);
  uVar14 = *(undefined8 *)(param_7 + 0xe);
  uVar22 = *(undefined8 *)(param_7 + 0x10);
  *(undefined8 *)(param_1 + 0x27f) = *(undefined8 *)((long)param_7 + 0x47);
  *(undefined8 *)(param_1 + 0x278) = uVar22;
  *(undefined8 *)(param_1 + 0x270) = uVar14;
  *(undefined8 *)(param_1 + 0x268) = uVar25;
  FUN_038fd1e0(param_1 + 0x288);
  FUN_038fd2f0(param_1 + 0x288,param_7 + 0x14);
  uVar21 = param_7[0x26];
  *(undefined8 *)(param_1 + 0x2c8) = *(undefined8 *)(param_7 + 0x24);
  puVar1 = (uint *)(param_1 + 0x30c);
  *(undefined4 *)(param_1 + 0x2d0) = uVar21;
  do {
    cVar10 = '\x01';
    bVar15 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar15) {
      *puVar1 = *puVar1 | 1;
      cVar10 = ExclusiveMonitorsStatus();
    }
  } while (cVar10 != '\0');
  *(undefined4 *)(param_1 + 0x2f8) = 0;
  *(undefined8 *)(param_1 + 0x2f0) = 0x3f80000000000000;
  do {
    cVar10 = '\x01';
    bVar15 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar15) {
      *puVar1 = *puVar1 & 0xfffffff7 | 8;
      cVar10 = ExclusiveMonitorsStatus();
    }
  } while (cVar10 != '\0');
  *(undefined1 *)(param_1 + 0x2fe) = 0;
  *(undefined2 *)(param_1 + 0x2fc) = 0x101;
  do {
    cVar10 = '\x01';
    bVar15 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar15) {
      *puVar1 = *puVar1 & 0xfffffffb | 4;
      cVar10 = ExclusiveMonitorsStatus();
    }
  } while (cVar10 != '\0');
  fVar29 = *(float *)((long)param_6 + 0xc);
  FUN_03907810(lVar16,param_2);
  local_b0 = *(undefined4 *)(param_6 + 1);
  puVar1 = (uint *)(lVar16 + 0x14);
  uStack_ac = *(undefined4 *)(param_4 + 0x10);
  local_b8 = *param_6;
  do {
    uVar20 = *puVar1;
    cVar10 = '\x01';
    bVar15 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar15) {
      *puVar1 = uVar20 | 0x80000000;
      cVar10 = ExclusiveMonitorsStatus();
    }
  } while (cVar10 != '\0');
  if ((uVar20 & 0x7fffffff) != 0) {
    if ((int)uVar20 < 0) {
      if ((int)*puVar1 < 0) {
        lVar23 = *(long *)PTR_DAT_04bb29d0;
        do {
          nn::os::ConvertToTimeSpan(lVar23 / 1000000);
          nn::os::SleepThread();
        } while ((int)*puVar1 < 0);
      }
    }
    else {
      FUN_03907b80(lVar16);
    }
  }
  fVar29 = 2.83 / fVar28 + fVar29;
  do {
    cVar10 = '\x01';
    bVar15 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar15) {
      *puVar1 = 0;
      cVar10 = ExclusiveMonitorsStatus();
    }
    puVar13 = PTR_DAT_04bd0fc8;
    puVar12 = PTR_DAT_04bcf2e0;
  } while (cVar10 != '\0');
  iVar2 = *(int *)(*(long *)(lVar16 + 0x38) + (ulong)(1 < *(uint *)(lVar16 + 0x30)) * 0x18);
  if (iVar2 != -1) {
    (**(code **)PTR_DAT_04bcf2e0)
              (*(undefined8 *)(param_2 + 0xb8),*(undefined8 *)(*(long *)PTR_DAT_04bd0fc8 + 0x70),
               *(undefined8 *)(*(long *)PTR_DAT_04bd0fc8 + 0x18),(long)iVar2,0x10,&local_b8);
  }
  local_b8 = CONCAT44((fVar29 * (float)(int)uVar3) / fVar28,fVar29);
  do {
    uVar20 = *puVar1;
    cVar10 = '\x01';
    bVar15 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar15) {
      *puVar1 = uVar20 | 0x80000000;
      cVar10 = ExclusiveMonitorsStatus();
    }
  } while (cVar10 != '\0');
  if ((uVar20 & 0x7fffffff) != 0) {
    if ((int)uVar20 < 0) {
      if ((int)*puVar1 < 0) {
        lVar23 = *(long *)PTR_DAT_04bb29d0;
        do {
          nn::os::ConvertToTimeSpan(lVar23 / 1000000);
          nn::os::SleepThread();
        } while ((int)*puVar1 < 0);
      }
    }
    else {
      FUN_03907b80(lVar16);
    }
  }
  do {
    cVar10 = '\x01';
    bVar15 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar15) {
      *puVar1 = 0;
      cVar10 = ExclusiveMonitorsStatus();
    }
  } while (cVar10 != '\0');
  if (**(int **)(lVar16 + 0x38) != -1) {
    (**(code **)puVar12)
              (*(undefined8 *)(param_2 + 0xb8),*(undefined8 *)(*(long *)puVar13 + 0x70),
               *(undefined8 *)(*(long *)puVar13 + 0x18),(long)**(int **)(lVar16 + 0x38),8,&local_b8)
    ;
  }
  uVar25 = *(undefined8 *)(param_2 + 0xb8);
  lVar23 = *(long *)PTR_DAT_04bbd7e0;
  (**(code **)PTR_DAT_04bcf1a8)(uVar25,0x10,lVar23 + 0x1204);
  (**(code **)PTR_DAT_04bcf1b0)(uVar25,0x10,lVar23 + 0x1248);
  puVar13 = PTR_DAT_04bcf1e8;
  puVar12 = PTR_DAT_04bbd560;
  iVar2 = *(int *)(lVar23 + 0x11f0);
  if (iVar2 != 0) {
    lVar23 = *(long *)(lVar23 + 0x11f8);
    uVar26 = 0;
    uVar27 = 0;
    do {
      lVar24 = *(long *)(lVar23 + (-(uVar27 >> 0x1f) & 0xfffffff800000000 | uVar27 << 3));
      if (lVar24 != 0) {
        uVar14 = (**(code **)puVar12)(lVar24 + 8);
        (**(code **)puVar13)(uVar25,uVar26 & 0xffffffff,uVar14,*(undefined4 *)(lVar24 + 0x118));
      }
      uVar26 = uVar27 + 1;
      uVar27 = uVar26 & 0xffffffff;
    } while (iVar2 != (int)uVar26);
  }
  do {
    uVar20 = *puVar1;
    cVar10 = '\x01';
    bVar15 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar15) {
      *puVar1 = uVar20 | 0x80000000;
      cVar10 = ExclusiveMonitorsStatus();
    }
  } while (cVar10 != '\0');
  if ((uVar20 & 0x7fffffff) != 0) {
    if ((int)uVar20 < 0) {
      if ((int)*puVar1 < 0) {
        lVar23 = *(long *)PTR_DAT_04bb29d0;
        do {
          nn::os::ConvertToTimeSpan(lVar23 / 1000000);
          nn::os::SleepThread();
        } while ((int)*puVar1 < 0);
      }
    }
    else {
      FUN_03907b80(lVar16);
    }
  }
  do {
    cVar10 = '\x01';
    bVar15 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar15) {
      *puVar1 = 0;
      cVar10 = ExclusiveMonitorsStatus();
    }
  } while (cVar10 != '\0');
  FUN_0390d290(param_1 + 0x238,param_2,*(undefined8 *)(lVar16 + 0x68),0xffffffff,0);
  lVar16 = *(long *)PTR_DAT_04bbd7e8;
  iVar2 = *(int *)(lVar16 + 0xda0);
  if (iVar2 != 0) {
    uVar21 = *(undefined4 *)(lVar16 + 0xd84);
    uVar14 = *(undefined8 *)(param_2 + 0xb8);
    uVar25 = (**(code **)puVar12)(lVar16 + 0xda8);
    (**(code **)PTR_DAT_04bbd568)(uVar14,uVar21,*(undefined4 *)(lVar16 + 0xd80),iVar2,uVar25);
  }
  uVar20 = *(uint *)(param_1 + 0x1b0);
  if (uVar20 != 0xffffffff) {
    lVar16 = *(long *)PTR_DAT_04bc1010;
    if ((*(uint *)(lVar16 + 0x5c8) >> 3 & 1) == 0) {
      uVar3 = uVar20 - *(ushort *)(lVar16 + 0x3da);
      if (*(uint *)(lVar16 + 0x368) <= uVar3) {
        uVar3 = 0;
      }
      if ((*(uint *)(*(long *)(lVar16 + 0x370) + (long)(int)uVar3 * 0x20 + 4) >> 2 & 1) == 0) {
        *(ulong *)(param_2 + 0x100) = *(ulong *)(param_2 + 0x100) | 1L << ((ulong)uVar20 & 0x3f);
        return;
      }
    }
    if ((*(uint *)(lVar16 + 0x5c8) >> 5 & 1) == 0) {
      uVar19 = 0x112;
      uVar21 = 0x12;
    }
    else {
      uVar19 = 0x111;
      uVar21 = 0x11;
    }
    if ((*(uint *)(lVar16 + 800) & 2) != 0) {
      uVar21 = uVar19;
    }
    (**(code **)PTR_DAT_04bcf2a8)(*(undefined8 *)(param_2 + 0xb8),uVar21);
    *(undefined8 *)(param_2 + 0x100) = 0;
  }
  return;
}

