
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_03bd735c(long *param_1)

{
  long *plVar1;
  MutexType *pMVar2;
  long *plVar3;
  uint *puVar4;
  long lVar5;
  char cVar6;
  ushort uVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined2 uVar10;
  undefined2 uVar11;
  int iVar12;
  uint uVar13;
  ulong uVar14;
  char *__s1;
  long lVar15;
  long *plVar16;
  undefined8 uVar17;
  long *plVar18;
  long lVar19;
  long *plVar20;
  long lVar21;
  long *plVar22;
  undefined4 uVar23;
  undefined4 local_124;
  undefined1 auStack_120 [16];
  long local_110;
  long lStack_108;
  long *local_100;
  long *plStack_f8;
  long local_f0;
  undefined1 auStack_e8 [16];
  long local_d8;
  long lStack_d0;
  long *local_c8;
  long *plStack_c0;
  long local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  
  puVar8 = PTR_DAT_04bb2918;
  lVar19 = param_1[4];
  lVar5 = param_1[5];
  plVar16 = *(long **)(*(long *)PTR_DAT_04bb2918 + 0x9a0);
  if (plVar16 != (long *)0x0) {
    local_b8 = param_1[3];
    local_c8 = (long *)0x0;
    local_d8 = lVar5;
    lStack_d0 = lVar19;
    plStack_c0 = param_1;
    uVar14 = (**(code **)(*plVar16 + 0x28))(plVar16,auStack_e8);
    if ((uVar14 & 1) != 0) {
      return 0;
    }
  }
  plVar18 = *(long **)(lVar19 + 0xf8);
  if (plVar18 != (long *)0x0) {
    local_f0 = param_1[3];
    local_100 = (long *)0x0;
    local_110 = lVar5;
    lStack_108 = lVar19;
    plStack_f8 = param_1;
    uVar14 = (**(code **)(*plVar18 + 0x28))(plVar18,auStack_120);
    if ((uVar14 & 1) != 0) {
      return 0;
    }
  }
  lVar21 = *(long *)(*(long *)puVar8 + 0x990);
  lVar19 = *(long *)(*(long *)(param_1[4] + 0x30) + 0x18);
  plVar1 = (long *)(lVar19 + 0x28);
  __s1 = (char *)FUN_03bd3f74(plVar1,param_1[5]);
  if ((*__s1 == '\0') || (iVar12 = strncmp(__s1,"@Blank",6), iVar12 == 0)) {
    return 0;
  }
  plVar22 = *(long **)PTR_DAT_04bd23a8;
  (**(code **)(*plVar22 + 0x10))(plVar22);
  lVar15 = *(long *)(lVar19 + 0x38);
  plVar20 = (long *)(lVar15 + 0x18);
  plVar3 = plVar20 + *(uint *)(lVar15 + 0x10);
  if (1 < *(uint *)(lVar15 + 0x10)) {
    plVar3 = plVar20;
  }
  if ((*plVar3 == 0) || (DataMemoryBarrier(2,1), *(char *)(*plVar3 + 0xb0) == '\0')) {
LAB_03bd74c0:
    cVar6 = *(char *)(param_1[3] + 0x94);
  }
  else {
    DataMemoryBarrier(2,1);
    uVar7 = *(ushort *)(lVar5 + 4);
    if ((short)uVar7 < 0) goto LAB_03bd74c0;
    plVar3 = plVar20 + *(uint *)(lVar15 + 0x10);
    if (1 < *(uint *)(lVar15 + 0x10)) {
      plVar3 = plVar20;
    }
    lVar15 = *(long *)(*plVar3 + 0xc0);
    if (lVar15 == 0) goto LAB_03bd74c0;
    uVar13 = (uint)uVar7;
    if (*(uint *)(*plVar3 + 0xb8) <= (uint)uVar7) {
      uVar13 = 0;
    }
    cVar6 = *(char *)(lVar15 + (ulong)uVar13 * 8 + 4);
    if (cVar6 == -1) goto LAB_03bd74c0;
  }
  lVar19 = *(long *)(lVar19 + 0x38);
  plVar20 = (long *)(lVar19 + 0x18);
  plVar3 = plVar20 + *(uint *)(lVar19 + 0x10);
  if (1 < *(uint *)(lVar19 + 0x10)) {
    plVar3 = plVar20;
  }
  if ((*plVar3 == 0) || (DataMemoryBarrier(2,1), *(char *)(*plVar3 + 0xb0) == '\0')) {
LAB_03bd756c:
    local_124 = 0xffff;
  }
  else {
    DataMemoryBarrier(2,1);
    uVar7 = *(ushort *)(lVar5 + 4);
    if ((short)uVar7 < 0) goto LAB_03bd756c;
    plVar3 = plVar20 + *(uint *)(lVar19 + 0x10);
    if (1 < *(uint *)(lVar19 + 0x10)) {
      plVar3 = plVar20;
    }
    lVar19 = *(long *)(*plVar3 + 0xc0);
    if (lVar19 == 0) goto LAB_03bd756c;
    uVar13 = (uint)uVar7;
    if (*(uint *)(*plVar3 + 0xb8) <= (uint)uVar7) {
      uVar13 = 0;
    }
    local_124 = *(uint *)(lVar19 + (ulong)uVar13 * 8);
  }
  if (plVar16 != (long *)0x0) {
    (**(code **)(*plVar16 + 0x50))(plVar16,&local_124,lVar5,plVar1,__s1);
  }
  if ((local_124 & 0xffff) != 0xffff) {
    uVar13 = (**(code **)(*plVar1 + 0x58))(plVar1,param_1[5]);
    if ((uVar13 >> 2 & 1) == 0) {
      uVar11 = local_124._2_2_;
      uVar10 = (undefined2)local_124;
      pMVar2 = (MutexType *)(lVar21 + 0x2c10);
      plVar20 = param_1 + 0x15;
      nn::os::LockMutex(pMVar2);
      uVar14 = FUN_0033cdc8(lVar21,plVar20,uVar11,uVar10,cVar6,0,0);
      if ((((uVar14 & 1) != 0) && (*plVar20 != 0)) &&
         ((int)param_1[0x16] == *(int *)(*plVar20 + 0x34))) {
        local_80 = 0;
        uStack_78 = 0;
        uStack_a8 = _UNK_04102208;
        local_b0 = _DAT_04102200;
        uStack_98 = _UNK_04102888;
        local_a0 = _DAT_04102880;
        uStack_88 = _UNK_041023d8;
        uStack_90 = _DAT_041023d0;
        uVar17 = FUN_00322a20(plVar20);
        FUN_00322694(uVar17,&local_b0);
      }
      nn::os::UnlockMutex(pMVar2);
    }
    iVar12 = FUN_03bd433c(plVar1,lVar5);
    *(byte *)(param_1 + 0x13) = *(byte *)(param_1 + 0x13) & 0xee | iVar12 != 0 | 6;
    uVar14 = (**(code **)(*param_1 + 0x18))(param_1);
    if ((uVar14 & 1) != 0) {
      uVar23 = FUN_03bdaa08(param_1,0xc,0);
      *(undefined4 *)((long)param_1 + 0xbc) = uVar23;
      uVar23 = FUN_03bdaa08(param_1,0xd,1);
      *(undefined4 *)(param_1 + 0x18) = uVar23;
      uVar23 = FUN_03bdaa08(param_1,0xe,2);
      *(undefined4 *)((long)param_1 + 0xc4) = uVar23;
      uVar23 = FUN_03bdaa08(param_1,0xf,3);
      *(undefined4 *)(param_1 + 0x19) = uVar23;
      uVar23 = FUN_03bdaa08(param_1,0x10,4);
      *(undefined4 *)((long)param_1 + 0xcc) = uVar23;
      uVar23 = FUN_03bdaa08(param_1,0x11,5);
      *(undefined4 *)(param_1 + 0x1a) = uVar23;
      uVar23 = FUN_03bdaa08(param_1,0x12,6);
      *(undefined4 *)((long)param_1 + 0xd4) = uVar23;
      uVar14 = (ulong)*(uint *)(param_1 + 7);
      plVar20 = (long *)(*(long *)(*(long *)(param_1[4] + 0x30) + 0x18) + 0x28);
      uVar13 = (**(code **)(*plVar20 + 0x50))(plVar20,0xc);
      puVar9 = PTR_DAT_04bb38c8;
      puVar8 = PTR_DAT_04bb38c0;
      if ((uVar14 == 0) || ((int)uVar13 < 0)) {
LAB_03bd783c:
        uVar14 = FUN_03bea160(plVar20,2,param_1[5],0xc);
        if ((uVar14 & 1) != 0) {
LAB_03bd7854:
          *(byte *)(param_1 + 0x13) = *(byte *)(param_1 + 0x13) | 0x40;
        }
      }
      else {
        puVar4 = (uint *)(*(ulong *)PTR_DAT_04bb38c8 | uVar14) + 0x40000000;
        if (*(ulong *)PTR_DAT_04bb38c0 <= uVar14) {
          puVar4 = (uint *)(*(ulong *)PTR_DAT_04bb38c8 | uVar14);
        }
        if ((*puVar4 >> (ulong)(uVar13 & 0x1f) & 1) == 0) goto LAB_03bd783c;
        uVar14 = param_1[7];
        uVar13 = (**(code **)(*plVar20 + 0x50))(plVar20,0xc);
        uVar14 = uVar14 & 0xfffffffc;
        if ((uVar14 != 0) && (-1 < (int)uVar13)) {
          puVar4 = (uint *)(*(ulong *)puVar9 | uVar14) + 0x40000000;
          if (*(ulong *)puVar8 <= uVar14) {
            puVar4 = (uint *)(*(ulong *)puVar9 | uVar14);
          }
          if (((*puVar4 >> (ulong)(uVar13 & 0x1f) & 1) == 0) ||
             (uVar13 = *puVar4 & 0xffffffffU >> (ulong)(~uVar13 & 0x1f),
             uVar13 = uVar13 - (uVar13 >> 1 & 0x55555555),
             uVar13 = (uVar13 >> 2 & 0x33333333) + (uVar13 & 0x33333333),
             uVar13 = uVar13 + (uVar13 >> 4) & 0xf0f0f0f, uVar13 = uVar13 + (uVar13 >> 8),
             *(char *)((long)puVar4 + (long)(int)((uVar13 + (uVar13 >> 0x10) & 0x3f) - 1) * 4 + 7)
             != '\x02')) goto LAB_03bd7860;
          goto LAB_03bd7854;
        }
      }
LAB_03bd7860:
      uVar14 = (ulong)*(uint *)(param_1 + 7);
      plVar20 = (long *)(*(long *)(*(long *)(param_1[4] + 0x30) + 0x18) + 0x28);
      uVar13 = (**(code **)(*plVar20 + 0x50))(plVar20,0xd);
      puVar9 = PTR_DAT_04bb38c8;
      puVar8 = PTR_DAT_04bb38c0;
      if ((uVar14 == 0) || ((int)uVar13 < 0)) {
LAB_03bd7968:
        uVar14 = FUN_03bea160(plVar20,2,param_1[5],0xd);
        if ((uVar14 & 1) != 0) {
LAB_03bd7980:
          *(byte *)(param_1 + 0x13) = *(byte *)(param_1 + 0x13) | 0x40;
        }
      }
      else {
        puVar4 = (uint *)(*(ulong *)PTR_DAT_04bb38c8 | uVar14) + 0x40000000;
        if (*(ulong *)PTR_DAT_04bb38c0 <= uVar14) {
          puVar4 = (uint *)(*(ulong *)PTR_DAT_04bb38c8 | uVar14);
        }
        if ((*puVar4 >> (ulong)(uVar13 & 0x1f) & 1) == 0) goto LAB_03bd7968;
        uVar14 = param_1[7];
        uVar13 = (**(code **)(*plVar20 + 0x50))(plVar20,0xd);
        uVar14 = uVar14 & 0xfffffffc;
        if ((uVar14 != 0) && (-1 < (int)uVar13)) {
          puVar4 = (uint *)(*(ulong *)puVar9 | uVar14) + 0x40000000;
          if (*(ulong *)puVar8 <= uVar14) {
            puVar4 = (uint *)(*(ulong *)puVar9 | uVar14);
          }
          if (((*puVar4 >> (ulong)(uVar13 & 0x1f) & 1) == 0) ||
             (uVar13 = *puVar4 & 0xffffffffU >> (ulong)(~uVar13 & 0x1f),
             uVar13 = uVar13 - (uVar13 >> 1 & 0x55555555),
             uVar13 = (uVar13 >> 2 & 0x33333333) + (uVar13 & 0x33333333),
             uVar13 = uVar13 + (uVar13 >> 4) & 0xf0f0f0f, uVar13 = uVar13 + (uVar13 >> 8),
             *(char *)((long)puVar4 + (long)(int)((uVar13 + (uVar13 >> 0x10) & 0x3f) - 1) * 4 + 7)
             != '\x02')) goto LAB_03bd798c;
          goto LAB_03bd7980;
        }
      }
LAB_03bd798c:
      uVar14 = (ulong)*(uint *)(param_1 + 7);
      plVar20 = (long *)(*(long *)(*(long *)(param_1[4] + 0x30) + 0x18) + 0x28);
      uVar13 = (**(code **)(*plVar20 + 0x50))(plVar20,0xe);
      puVar9 = PTR_DAT_04bb38c8;
      puVar8 = PTR_DAT_04bb38c0;
      if ((uVar14 == 0) || ((int)uVar13 < 0)) {
LAB_03bd7a94:
        uVar14 = FUN_03bea160(plVar20,2,param_1[5],0xe);
        if ((uVar14 & 1) != 0) {
LAB_03bd7aac:
          *(byte *)(param_1 + 0x13) = *(byte *)(param_1 + 0x13) | 0x40;
        }
      }
      else {
        puVar4 = (uint *)(*(ulong *)PTR_DAT_04bb38c8 | uVar14) + 0x40000000;
        if (*(ulong *)PTR_DAT_04bb38c0 <= uVar14) {
          puVar4 = (uint *)(*(ulong *)PTR_DAT_04bb38c8 | uVar14);
        }
        if ((*puVar4 >> (ulong)(uVar13 & 0x1f) & 1) == 0) goto LAB_03bd7a94;
        uVar14 = param_1[7];
        uVar13 = (**(code **)(*plVar20 + 0x50))(plVar20,0xe);
        uVar14 = uVar14 & 0xfffffffc;
        if ((uVar14 != 0) && (-1 < (int)uVar13)) {
          puVar4 = (uint *)(*(ulong *)puVar9 | uVar14) + 0x40000000;
          if (*(ulong *)puVar8 <= uVar14) {
            puVar4 = (uint *)(*(ulong *)puVar9 | uVar14);
          }
          if (((*puVar4 >> (ulong)(uVar13 & 0x1f) & 1) == 0) ||
             (uVar13 = *puVar4 & 0xffffffffU >> (ulong)(~uVar13 & 0x1f),
             uVar13 = uVar13 - (uVar13 >> 1 & 0x55555555),
             uVar13 = (uVar13 >> 2 & 0x33333333) + (uVar13 & 0x33333333),
             uVar13 = uVar13 + (uVar13 >> 4) & 0xf0f0f0f, uVar13 = uVar13 + (uVar13 >> 8),
             *(char *)((long)puVar4 + (long)(int)((uVar13 + (uVar13 >> 0x10) & 0x3f) - 1) * 4 + 7)
             != '\x02')) goto LAB_03bd7ab8;
          goto LAB_03bd7aac;
        }
      }
LAB_03bd7ab8:
      uVar14 = (ulong)*(uint *)(param_1 + 7);
      plVar20 = (long *)(*(long *)(*(long *)(param_1[4] + 0x30) + 0x18) + 0x28);
      uVar13 = (**(code **)(*plVar20 + 0x50))(plVar20,0xf);
      puVar9 = PTR_DAT_04bb38c8;
      puVar8 = PTR_DAT_04bb38c0;
      if ((uVar14 == 0) || ((int)uVar13 < 0)) {
LAB_03bd7bc0:
        uVar14 = FUN_03bea160(plVar20,2,param_1[5],0xf);
        if ((uVar14 & 1) != 0) {
LAB_03bd7bd8:
          *(byte *)(param_1 + 0x13) = *(byte *)(param_1 + 0x13) | 0x40;
        }
      }
      else {
        puVar4 = (uint *)(*(ulong *)PTR_DAT_04bb38c8 | uVar14) + 0x40000000;
        if (*(ulong *)PTR_DAT_04bb38c0 <= uVar14) {
          puVar4 = (uint *)(*(ulong *)PTR_DAT_04bb38c8 | uVar14);
        }
        if ((*puVar4 >> (ulong)(uVar13 & 0x1f) & 1) == 0) goto LAB_03bd7bc0;
        uVar14 = param_1[7];
        uVar13 = (**(code **)(*plVar20 + 0x50))(plVar20,0xf);
        uVar14 = uVar14 & 0xfffffffc;
        if ((uVar14 != 0) && (-1 < (int)uVar13)) {
          puVar4 = (uint *)(*(ulong *)puVar9 | uVar14) + 0x40000000;
          if (*(ulong *)puVar8 <= uVar14) {
            puVar4 = (uint *)(*(ulong *)puVar9 | uVar14);
          }
          if (((*puVar4 >> (ulong)(uVar13 & 0x1f) & 1) == 0) ||
             (uVar13 = *puVar4 & 0xffffffffU >> (ulong)(~uVar13 & 0x1f),
             uVar13 = uVar13 - (uVar13 >> 1 & 0x55555555),
             uVar13 = (uVar13 >> 2 & 0x33333333) + (uVar13 & 0x33333333),
             uVar13 = uVar13 + (uVar13 >> 4) & 0xf0f0f0f, uVar13 = uVar13 + (uVar13 >> 8),
             *(char *)((long)puVar4 + (long)(int)((uVar13 + (uVar13 >> 0x10) & 0x3f) - 1) * 4 + 7)
             != '\x02')) goto LAB_03bd7be4;
          goto LAB_03bd7bd8;
        }
      }
LAB_03bd7be4:
      uVar14 = (ulong)*(uint *)(param_1 + 7);
      plVar20 = (long *)(*(long *)(*(long *)(param_1[4] + 0x30) + 0x18) + 0x28);
      uVar13 = (**(code **)(*plVar20 + 0x50))(plVar20,0x10);
      puVar9 = PTR_DAT_04bb38c8;
      puVar8 = PTR_DAT_04bb38c0;
      if ((uVar14 == 0) || ((int)uVar13 < 0)) {
LAB_03bd7cec:
        uVar14 = FUN_03bea160(plVar20,2,param_1[5],0x10);
        if ((uVar14 & 1) != 0) {
LAB_03bd7d04:
          *(byte *)(param_1 + 0x13) = *(byte *)(param_1 + 0x13) | 0x40;
        }
      }
      else {
        puVar4 = (uint *)(*(ulong *)PTR_DAT_04bb38c8 | uVar14) + 0x40000000;
        if (*(ulong *)PTR_DAT_04bb38c0 <= uVar14) {
          puVar4 = (uint *)(*(ulong *)PTR_DAT_04bb38c8 | uVar14);
        }
        if ((*puVar4 >> (ulong)(uVar13 & 0x1f) & 1) == 0) goto LAB_03bd7cec;
        uVar14 = param_1[7];
        uVar13 = (**(code **)(*plVar20 + 0x50))(plVar20,0x10);
        uVar14 = uVar14 & 0xfffffffc;
        if ((uVar14 != 0) && (-1 < (int)uVar13)) {
          puVar4 = (uint *)(*(ulong *)puVar9 | uVar14) + 0x40000000;
          if (*(ulong *)puVar8 <= uVar14) {
            puVar4 = (uint *)(*(ulong *)puVar9 | uVar14);
          }
          if (((*puVar4 >> (ulong)(uVar13 & 0x1f) & 1) == 0) ||
             (uVar13 = *puVar4 & 0xffffffffU >> (ulong)(~uVar13 & 0x1f),
             uVar13 = uVar13 - (uVar13 >> 1 & 0x55555555),
             uVar13 = (uVar13 >> 2 & 0x33333333) + (uVar13 & 0x33333333),
             uVar13 = uVar13 + (uVar13 >> 4) & 0xf0f0f0f, uVar13 = uVar13 + (uVar13 >> 8),
             *(char *)((long)puVar4 + (long)(int)((uVar13 + (uVar13 >> 0x10) & 0x3f) - 1) * 4 + 7)
             != '\x02')) goto LAB_03bd7d10;
          goto LAB_03bd7d04;
        }
      }
LAB_03bd7d10:
      uVar14 = (ulong)*(uint *)(param_1 + 7);
      plVar20 = (long *)(*(long *)(*(long *)(param_1[4] + 0x30) + 0x18) + 0x28);
      uVar13 = (**(code **)(*plVar20 + 0x50))(plVar20,0x11);
      puVar9 = PTR_DAT_04bb38c8;
      puVar8 = PTR_DAT_04bb38c0;
      if ((uVar14 == 0) || ((int)uVar13 < 0)) {
LAB_03bd7e18:
        uVar14 = FUN_03bea160(plVar20,2,param_1[5],0x11);
        if ((uVar14 & 1) != 0) {
LAB_03bd7e30:
          *(byte *)(param_1 + 0x13) = *(byte *)(param_1 + 0x13) | 0x40;
        }
      }
      else {
        puVar4 = (uint *)(*(ulong *)PTR_DAT_04bb38c8 | uVar14) + 0x40000000;
        if (*(ulong *)PTR_DAT_04bb38c0 <= uVar14) {
          puVar4 = (uint *)(*(ulong *)PTR_DAT_04bb38c8 | uVar14);
        }
        if ((*puVar4 >> (ulong)(uVar13 & 0x1f) & 1) == 0) goto LAB_03bd7e18;
        uVar14 = param_1[7];
        uVar13 = (**(code **)(*plVar20 + 0x50))(plVar20,0x11);
        uVar14 = uVar14 & 0xfffffffc;
        if ((uVar14 != 0) && (-1 < (int)uVar13)) {
          puVar4 = (uint *)(*(ulong *)puVar9 | uVar14) + 0x40000000;
          if (*(ulong *)puVar8 <= uVar14) {
            puVar4 = (uint *)(*(ulong *)puVar9 | uVar14);
          }
          if (((*puVar4 >> (ulong)(uVar13 & 0x1f) & 1) == 0) ||
             (uVar13 = *puVar4 & 0xffffffffU >> (ulong)(~uVar13 & 0x1f),
             uVar13 = uVar13 - (uVar13 >> 1 & 0x55555555),
             uVar13 = (uVar13 >> 2 & 0x33333333) + (uVar13 & 0x33333333),
             uVar13 = uVar13 + (uVar13 >> 4) & 0xf0f0f0f, uVar13 = uVar13 + (uVar13 >> 8),
             *(char *)((long)puVar4 + (long)(int)((uVar13 + (uVar13 >> 0x10) & 0x3f) - 1) * 4 + 7)
             != '\x02')) goto LAB_03bd7e3c;
          goto LAB_03bd7e30;
        }
      }
LAB_03bd7e3c:
      uVar14 = (ulong)*(uint *)(param_1 + 7);
      plVar20 = (long *)(*(long *)(*(long *)(param_1[4] + 0x30) + 0x18) + 0x28);
      uVar13 = (**(code **)(*plVar20 + 0x50))(plVar20,0x12);
      puVar9 = PTR_DAT_04bb38c8;
      puVar8 = PTR_DAT_04bb38c0;
      if ((uVar14 == 0) || ((int)uVar13 < 0)) {
LAB_03bd7f44:
        uVar14 = FUN_03bea160(plVar20,2,param_1[5],0x12);
        if ((uVar14 & 1) != 0) {
LAB_03bd7f5c:
          *(byte *)(param_1 + 0x13) = *(byte *)(param_1 + 0x13) | 0x40;
        }
      }
      else {
        puVar4 = (uint *)(*(ulong *)PTR_DAT_04bb38c8 | uVar14) + 0x40000000;
        if (*(ulong *)PTR_DAT_04bb38c0 <= uVar14) {
          puVar4 = (uint *)(*(ulong *)PTR_DAT_04bb38c8 | uVar14);
        }
        if ((*puVar4 >> (ulong)(uVar13 & 0x1f) & 1) == 0) goto LAB_03bd7f44;
        uVar14 = param_1[7];
        uVar13 = (**(code **)(*plVar20 + 0x50))(plVar20,0x12);
        uVar14 = uVar14 & 0xfffffffc;
        if ((uVar14 != 0) && (-1 < (int)uVar13)) {
          puVar4 = (uint *)(*(ulong *)puVar9 | uVar14) + 0x40000000;
          if (*(ulong *)puVar8 <= uVar14) {
            puVar4 = (uint *)(*(ulong *)puVar9 | uVar14);
          }
          if (((*puVar4 >> (ulong)(uVar13 & 0x1f) & 1) == 0) ||
             (uVar13 = *puVar4 & 0xffffffffU >> (ulong)(~uVar13 & 0x1f),
             uVar13 = uVar13 - (uVar13 >> 1 & 0x55555555),
             uVar13 = (uVar13 >> 2 & 0x33333333) + (uVar13 & 0x33333333),
             uVar13 = uVar13 + (uVar13 >> 4) & 0xf0f0f0f, uVar13 = uVar13 + (uVar13 >> 8),
             *(char *)((long)puVar4 + (long)(int)((uVar13 + (uVar13 >> 0x10) & 0x3f) - 1) * 4 + 7)
             != '\x02')) goto LAB_03bd7f68;
          goto LAB_03bd7f5c;
        }
      }
LAB_03bd7f68:
      lVar19 = param_1[3];
      FUN_03bd8a3c(param_1,lVar19 + 0x98,*(uint *)(lVar19 + 0x184) | *(uint *)(lVar19 + 0x188));
      FUN_03bd8020(param_1);
    }
    if (plVar16 != (long *)0x0) {
      local_c8 = param_1 + 0x15;
      (**(code **)(*plVar16 + 0x30))(plVar16,auStack_e8);
    }
    if (plVar18 != (long *)0x0) {
      local_100 = param_1 + 0x15;
      (**(code **)(*plVar18 + 0x30))(plVar18,auStack_120);
    }
    uVar14 = (**(code **)(*param_1 + 0x18))(param_1);
    if (((uVar14 & 1) != 0) ||
       (uVar13 = (**(code **)(*plVar1 + 0x58))(plVar1,param_1[5]), (uVar13 >> 2 & 1) != 0)) {
      uVar17 = 1;
      *(undefined1 *)(param_1 + 0x14) = 1;
      goto LAB_03bd8004;
    }
  }
  uVar17 = 0;
LAB_03bd8004:
  (**(code **)(*plVar22 + 0x18))(plVar22);
  return uVar17;
}

