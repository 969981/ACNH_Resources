
void FUN_03a29d50(long param_1,long param_2,uint param_3,long param_4)

{
  long *plVar1;
  uint *puVar2;
  int iVar3;
  uint uVar4;
  char cVar5;
  bool bVar6;
  uint uVar7;
  float fVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined8 uVar11;
  undefined4 uVar12;
  ulong uVar13;
  undefined4 uVar14;
  undefined8 uVar15;
  int iVar16;
  undefined8 uVar17;
  long lVar18;
  ulong uVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  long local_c8;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined **local_88;
  undefined8 local_80;
  undefined8 local_78;
  uint local_70;
  undefined8 local_6c;
  
  if (*(char *)(param_1 + 0x338) != '\0') {
    if (*(uint *)(*(long *)PTR_DAT_04bbdd18 + 8) < 0x7c) {
      local_c8 = 0;
    }
    else {
      local_c8 = *(long *)(*(long *)(*(long *)PTR_DAT_04bbdd18 + 0x10) + 0x3d8);
    }
    lVar22 = *(long *)(param_1 + 0x10);
    if (*(uint *)(param_1 + 8) <= param_3) {
      param_3 = 0;
    }
    lVar20 = lVar22 + (long)(int)param_3 * 0x548;
    FUN_038e4d90(param_1 + 0x18,param_2);
    plVar1 = (long *)(lVar20 + 0x4d0);
    (**(code **)(*(long *)(lVar20 + 0x4d0) + 0x38))(plVar1,param_2);
    FUN_038e77e4(lVar20 + 0x4a8,param_2,plVar1);
    local_78 = 0xff7fffffff7fffff;
    local_98 = 0;
    uStack_90 = 0x3f80000000000000;
    local_6c = 0x3f80000000000000;
    local_88 = &PTR_LAB_04b65888;
    local_80 = 0x7f7fffff7f7fffff;
    local_70 = DAT_05ae77d0;
    if (DAT_05ae77d0 < 6) {
      if ((1 << (ulong)(DAT_05ae77d0 & 0x1f) & 0x39U) == 0) {
        fVar24 = *(float *)(lVar20 + 0x4d8);
        fVar23 = *(float *)(lVar20 + 0x4dc);
      }
      else {
        fVar23 = *(float *)(lVar20 + 0x4d8);
        fVar24 = *(float *)(lVar20 + 0x4dc);
      }
      fVar26 = fVar23;
      fVar8 = 0.0;
      if (fVar23 <= 0.0) {
        fVar26 = 0.0;
        fVar8 = fVar23;
      }
      fVar25 = fVar24;
      fVar23 = 0.0;
      if (fVar24 <= 0.0) {
        fVar25 = 0.0;
        fVar23 = fVar24;
      }
      local_80 = CONCAT44(fVar23,fVar8);
      local_78 = CONCAT44(fVar25,fVar26);
    }
    FUN_039025b0(0,plVar1,param_2,0,1,&local_98,0,&local_88,1);
    if (*(char *)(param_1 + 0x33a) != '\0') {
      local_6c = 0x3f80000000000000;
      local_80 = 0x7f7fffff7f7fffff;
      local_78 = 0xff7fffffff7fffff;
      local_88 = &PTR_LAB_04b65888;
      local_98 = 0;
      uStack_90 = 0x3f80000000000000;
      local_70 = DAT_05ae77d0;
      if (DAT_05ae77d0 < 6) {
        if ((1 << (ulong)(DAT_05ae77d0 & 0x1f) & 0x39U) == 0) {
          fVar24 = *(float *)(lVar20 + 0x4d8);
          fVar23 = *(float *)(lVar20 + 0x4dc);
        }
        else {
          fVar23 = *(float *)(lVar20 + 0x4d8);
          fVar24 = *(float *)(lVar20 + 0x4dc);
        }
        fVar26 = fVar23;
        fVar8 = 0.0;
        if (fVar23 <= 0.0) {
          fVar26 = 0.0;
          fVar8 = fVar23;
        }
        fVar25 = fVar24;
        fVar23 = 0.0;
        if (fVar24 <= 0.0) {
          fVar25 = 0.0;
          fVar23 = fVar24;
        }
        local_80 = CONCAT44(fVar23,fVar8);
        local_78 = CONCAT44(fVar25,fVar26);
      }
      FUN_039025b0(0,plVar1,param_2,1,1,&local_98,0,&local_88,1);
    }
    puVar9 = PTR_DAT_04bcf2a8;
    lVar18 = lVar22 + (long)(int)param_3 * 0x548;
    iVar3 = *(int *)(lVar18 + 0x538);
    if (iVar3 != 0) {
      lVar21 = *(long *)(lVar18 + 0x540);
      iVar16 = 0;
      do {
        uVar4 = *(uint *)(lVar21 + (long)iVar16 * 0x1e0 + 0x158);
        if (uVar4 != 0xffffffff) {
          if ((*(uint *)(DAT_05ae78f0 + 0x5c8) >> 3 & 1) == 0) {
            uVar7 = uVar4 - *(ushort *)(DAT_05ae78f0 + 0x3da);
            if (*(uint *)(DAT_05ae78f0 + 0x368) <= uVar7) {
              uVar7 = 0;
            }
            if ((*(uint *)(*(long *)(DAT_05ae78f0 + 0x370) + (long)(int)uVar7 * 0x20 + 4) >> 2 & 1)
                != 0) goto LAB_03a2a020;
            uVar13 = *(ulong *)(param_2 + 0x100) | 1L << ((ulong)uVar4 & 0x3f);
          }
          else {
LAB_03a2a020:
            if ((*(uint *)(DAT_05ae78f0 + 0x5c8) >> 5 & 1) == 0) {
              uVar14 = 0x112;
              uVar12 = 0x12;
            }
            else {
              uVar14 = 0x111;
              uVar12 = 0x11;
            }
            if ((*(uint *)(DAT_05ae78f0 + 800) & 2) != 0) {
              uVar12 = uVar14;
            }
            (**(code **)puVar9)(*(undefined8 *)(param_2 + 0xb8),uVar12);
            uVar13 = 0;
          }
          *(ulong *)(param_2 + 0x100) = uVar13;
        }
        iVar16 = iVar16 + 1;
      } while (iVar3 != iVar16);
    }
    FUN_038e4d90(param_1 + 0x8c,param_2);
    lVar21 = lVar22 + (long)(int)param_3 * 0x548;
    *(undefined4 *)(lVar21 + 0x3c8) = *(undefined4 *)(param_4 + 8);
    *(undefined4 *)(lVar21 + 0x3cc) = *(undefined4 *)(param_4 + 0xc);
    *(undefined8 *)(lVar21 + 0x3d0) = *(undefined8 *)(param_4 + 0x10);
    *(undefined8 *)(lVar21 + 0x3d8) = *(undefined8 *)(param_4 + 0x18);
    *(undefined4 *)(lVar21 + 0x3e0) = *(undefined4 *)(param_4 + 0x20);
    *(undefined4 *)(lVar21 + 0x3e4) = *(undefined4 *)(param_4 + 0x24);
    *(undefined8 *)(lVar21 + 1000) = *(undefined8 *)(param_4 + 0x28);
    *(undefined8 *)(lVar21 + 0x3f0) = *(undefined8 *)(param_4 + 0x30);
    uVar17 = *(undefined8 *)(param_4 + 0x38);
    uVar11 = *(undefined8 *)(param_4 + 0x40);
    uVar15 = *(undefined8 *)(param_4 + 0x48);
    *(undefined8 *)(lVar21 + 0x40f) = *(undefined8 *)(param_4 + 0x4f);
    *(undefined8 *)(lVar21 + 0x408) = uVar15;
    *(undefined8 *)(lVar21 + 0x400) = uVar11;
    *(undefined8 *)(lVar21 + 0x3f8) = uVar17;
    FUN_038fd1e0(lVar21 + 0x418);
    FUN_038fd2f0(lVar21 + 0x418,param_4 + 0x58);
    uVar12 = *(undefined4 *)(param_4 + 0xa0);
    *(undefined8 *)(lVar21 + 0x458) = *(undefined8 *)(param_4 + 0x98);
    puVar2 = (uint *)(lVar21 + 0x49c);
    *(undefined4 *)(lVar21 + 0x460) = uVar12;
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(puVar2,0x10);
      if (bVar6) {
        *puVar2 = *puVar2 | 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    lVar22 = lVar22 + (long)(int)param_3 * 0x548;
    if (*(char *)(param_1 + 0x339) == '\0') {
      *(undefined8 *)(lVar22 + 0x470) = &DAT_3f8000003f800000;
      *(undefined1 **)(lVar22 + 0x478) = &DAT_3f8000003f800000;
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(puVar2,0x10);
        if (bVar6) {
          *puVar2 = *puVar2 & 0xffffffdf | 0x20;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
    }
    else {
      *(undefined8 *)(lVar22 + 0x470) = 0;
      *(undefined8 *)(lVar22 + 0x478) = 0x3f80000000000000;
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(puVar2,0x10);
        if (bVar6) {
          *puVar2 = *puVar2 & 0xffffffdf | 0x20;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
    }
    (**(code **)(*plVar1 + 0x38))(plVar1,param_2);
    FUN_038e77e4(lVar20 + 0x4a8,param_2,plVar1);
    uVar4 = (uint)*(byte *)(param_1 + 0x33a) | (uint)*(byte *)(param_1 + 0x33b) << 1;
    lVar22 = *(long *)(local_c8 + 8);
    if (uVar4 == 0) {
      lVar22 = *(long *)(lVar22 + 0x18);
    }
    else {
      uVar4 = uVar4 - 1;
      if (*(uint *)(lVar22 + 0x20) <= uVar4) {
        uVar4 = 0;
      }
      lVar22 = *(long *)(lVar22 + 0x28) + (ulong)uVar4 * 0x150;
    }
    FUN_03907810(lVar22,param_2);
    FUN_01557430(lVar22,param_2,0,lVar20,0);
    puVar2 = (uint *)(lVar22 + 0x14);
    do {
      uVar4 = *puVar2;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(puVar2,0x10);
      if (bVar6) {
        *puVar2 = uVar4 | 0x80000000;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if ((uVar4 & 0x7fffffff) != 0) {
      if ((int)uVar4 < 0) {
        if ((int)*puVar2 < 0) {
          lVar20 = *(long *)PTR_DAT_04bb29d0;
          do {
            nn::os::ConvertToTimeSpan(lVar20 / 1000000);
            nn::os::SleepThread();
          } while ((int)*puVar2 < 0);
        }
      }
      else {
        FUN_03907b80(lVar22);
      }
    }
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(puVar2,0x10);
      if (bVar6) {
        *puVar2 = 0;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    FUN_0390d290(lVar21 + 0x3c8,param_2,*(undefined8 *)(lVar22 + 0x68),0xffffffff,0);
    uVar17 = *(undefined8 *)(param_2 + 0xb8);
    (**(code **)PTR_DAT_04bcf1a8)(uVar17,0x10,param_1 + 0x494);
    (**(code **)PTR_DAT_04bcf1b0)(uVar17,0x10,param_1 + 0x4d8);
    puVar10 = PTR_DAT_04bcf1e8;
    puVar9 = PTR_DAT_04bbd560;
    iVar3 = *(int *)(param_1 + 0x480);
    if (iVar3 != 0) {
      lVar22 = *(long *)(param_1 + 0x488);
      uVar13 = 0;
      uVar19 = 0;
      do {
        lVar20 = *(long *)(lVar22 + (-(uVar19 >> 0x1f) & 0xfffffff800000000 | uVar19 << 3));
        if (lVar20 != 0) {
          uVar11 = (**(code **)puVar9)(lVar20 + 8);
          (**(code **)puVar10)(uVar17,uVar13 & 0xffffffff,uVar11,*(undefined4 *)(lVar20 + 0x118));
        }
        uVar13 = uVar19 + 1;
        uVar19 = uVar13 & 0xffffffff;
      } while (iVar3 != (int)uVar13);
    }
    iVar3 = *(int *)(param_1 + 0x710);
    if (iVar3 != 0) {
      uVar12 = *(undefined4 *)(param_1 + 0x6f4);
      uVar11 = *(undefined8 *)(param_2 + 0xb8);
      uVar17 = (**(code **)puVar9)(param_1 + 0x718);
      (**(code **)PTR_DAT_04bbd568)(uVar11,uVar12,*(undefined4 *)(param_1 + 0x6f0),iVar3,uVar17);
    }
    puVar9 = PTR_DAT_04bcf2a8;
    iVar3 = *(int *)(lVar18 + 0x538);
    if (iVar3 != 0) {
      iVar16 = 0;
      lVar22 = *(long *)(lVar18 + 0x540);
      do {
        uVar4 = *(uint *)(lVar22 + (long)iVar16 * 0x1e0 + 0x158);
        if (uVar4 != 0xffffffff) {
          if ((*(uint *)(DAT_05ae78f0 + 0x5c8) >> 3 & 1) == 0) {
            uVar7 = uVar4 - *(ushort *)(DAT_05ae78f0 + 0x3da);
            if (*(uint *)(DAT_05ae78f0 + 0x368) <= uVar7) {
              uVar7 = 0;
            }
            if ((*(uint *)(*(long *)(DAT_05ae78f0 + 0x370) + (long)(int)uVar7 * 0x20 + 4) >> 2 & 1)
                != 0) goto LAB_03a2a444;
            uVar13 = *(ulong *)(param_2 + 0x100) | 1L << ((ulong)uVar4 & 0x3f);
          }
          else {
LAB_03a2a444:
            if ((*(uint *)(DAT_05ae78f0 + 0x5c8) >> 5 & 1) == 0) {
              uVar14 = 0x112;
              uVar12 = 0x12;
            }
            else {
              uVar14 = 0x111;
              uVar12 = 0x11;
            }
            if ((*(uint *)(DAT_05ae78f0 + 800) & 2) != 0) {
              uVar12 = uVar14;
            }
            (**(code **)puVar9)(*(undefined8 *)(param_2 + 0xb8),uVar12);
            uVar13 = 0;
          }
          *(ulong *)(param_2 + 0x100) = uVar13;
        }
        iVar16 = iVar16 + 1;
      } while (iVar3 != iVar16);
    }
    uVar12 = 0x11;
    if ((*(uint *)(*(long *)PTR_DAT_04bc1010 + 800) & 2) != 0) {
      uVar12 = 0x111;
    }
    (**(code **)puVar9)(*(undefined8 *)(param_2 + 0xb8),uVar12);
    *(undefined8 *)(param_2 + 0x100) = 0;
  }
  return;
}

