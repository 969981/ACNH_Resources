
undefined8
FUN_039da2d0(long *param_1,long *param_2,void *param_3,void *param_4,uint *param_5,long param_6)

{
  MutexType *pMVar1;
  char *pcVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  uint uVar10;
  undefined *puVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  size_t sVar15;
  void *pvVar16;
  undefined8 *puVar17;
  undefined8 uVar18;
  long lVar19;
  byte *pbVar20;
  undefined8 *puVar21;
  ulong uVar22;
  long *plVar23;
  long *plVar24;
  byte *pbVar25;
  long lVar26;
  ulong uVar27;
  long lVar28;
  undefined8 uVar29;
  void *__dest;
  uint uVar30;
  uint uVar31;
  short *psVar32;
  long *plVar33;
  undefined2 *puVar34;
  undefined2 *puVar35;
  uint local_78 [2];
  undefined *local_70;
  byte *pbStack_68;
  
  psVar32 = (short *)*param_2;
  if (*(long *)(psVar32 + 0xac) == 0) {
    plVar33 = (long *)(psVar32 + 4);
    pMVar1 = (MutexType *)(param_1 + 0x70);
    do {
      lVar28 = param_1[8];
      uVar13 = *(uint *)((long)param_3 + 0x50);
      iVar14 = *(int *)((long)param_3 + 0x54);
      if (*plVar33 != 0) {
        FUN_039dd4a0(plVar33,1);
      }
      iVar12 = DAT_05ae9b9c;
      lVar19 = (long)DAT_05ae9b9c;
      iVar14 = iVar14 + DAT_05ae9b98;
      uVar30 = -DAT_05ae9b98;
      *(ulong *)(psVar32 + 8) = *(ulong *)(psVar32 + 8) | 1;
      uVar27 = FUN_039dcda4(lVar28,plVar33,(lVar19 + (ulong)uVar13) - 1 & (long)-iVar12,
                            iVar14 - 1U & uVar30,0x10);
      if ((uVar27 & 1) != 0) break;
      if (*plVar33 != 0) {
        FUN_039dd4a0(plVar33,0);
      }
      *(ulong *)(psVar32 + 8) = *(ulong *)(psVar32 + 8) & 0xfffffffffffffffe;
      *(byte *)(psVar32 + 1) = *(byte *)(psVar32 + 1) & 0xfe;
      nn::os::LockMutex(pMVar1);
      if ((int)param_1[6] == 0) {
        FUN_039d9660(param_1,psVar32);
        nn::os::UnlockMutex(pMVar1);
        return 0xfffffffe;
      }
      if ((int)param_1[6] < 1) {
        plVar23 = (long *)0x0;
      }
      else {
        plVar23 = (long *)param_1[5];
        if (*plVar23 != 0) {
          *(long *)(*plVar23 + 8) = plVar23[1];
        }
        if ((long *)plVar23[1] != (long *)0x0) {
          *(long *)plVar23[1] = *plVar23;
        }
        *plVar23 = 0;
        plVar23[1] = 0;
        *(int *)(param_1 + 6) = (int)param_1[6] + -1;
      }
      lVar28 = 0;
      if (plVar23 != (long *)0x0) {
        lVar28 = (long)plVar23 - (long)*(int *)((long)param_1 + 0x34);
      }
      FUN_039d9660(param_1,lVar28);
      nn::os::UnlockMutex(pMVar1);
    } while (*(long *)(psVar32 + 0xac) == 0);
  }
  *(byte *)(psVar32 + 1) = *(byte *)(psVar32 + 1) | 1;
  (**(code **)(*(long *)(param_5 + 2) + 0x18))(param_5 + 2);
  uVar27 = 0;
  do {
    if (*(char *)(*(long *)(param_5 + 4) + uVar27) == '\0') goto LAB_039da4b4;
    lVar28 = *(long *)(param_5 + 4) + uVar27;
    if (*(char *)(lVar28 + 1) == '\0') {
      uVar27 = uVar27 + 1;
      goto LAB_039da4b4;
    }
    if (*(char *)(lVar28 + 2) == '\0') {
      uVar27 = uVar27 + 2;
      goto LAB_039da4b4;
    }
    uVar27 = uVar27 + 3;
  } while (uVar27 != 0x80001);
  uVar27 = 0;
LAB_039da4b4:
  (**(code **)(*(long *)(param_5 + 2) + 0x18))(param_5 + 2);
  pvVar16 = *(void **)(param_5 + 4);
  uVar13 = (uint)uVar27;
  psVar32[0x74] = (short)uVar27;
  if (uVar13 != 0) {
    memmove(psVar32 + 0x75,pvVar16,uVar27 & 0xffffffff);
  }
  if (0 < (int)(((uVar13 & 0xfffffffe) - (uVar13 & 0xffff)) + 2)) {
    memset((void *)((long)(psVar32 + 0x75) + (uVar27 & 0xffff)),0,
           (ulong)((uVar13 | 1) - (uVar13 & 0xffff)) + 1);
  }
  lVar28 = *(long *)(psVar32 + 0xa4);
  puVar17 = *(undefined8 **)(*(long *)((long)param_3 + 0x68) + 0x18);
  uVar29 = *puVar17;
  uVar18 = puVar17[1];
  *(undefined **)(psVar32 + 0xc4) = &DAT_05ae9cc0;
  *(undefined8 *)(psVar32 + 0xbc) = uVar29;
  *(undefined8 *)(psVar32 + 0xc0) = uVar18;
  psVar32[0xbe] = 1;
  psVar32[0xbf] = 0;
  memcpy(psVar32 + 0x24,param_3,0xa0);
  *(long *)(psVar32 + 0x58) = lVar28;
  *(long *)(psVar32 + 0x5c) = lVar28 + 0x38;
  *(long *)(psVar32 + 100) = lVar28 + 0xb0;
  *(long *)(psVar32 + 0x68) = lVar28 + 0x188;
  *(undefined8 *)(lVar28 + 0x180) = 0;
  *(undefined8 *)(lVar28 + 0xb0) = 0;
  *(undefined8 *)(lVar28 + 0xb8) = 0;
  *(undefined8 *)(lVar28 + 0xc0) = 0;
  *(undefined8 *)(lVar28 + 200) = 0;
  *(undefined8 *)(lVar28 + 0xd0) = 0;
  *(undefined8 *)(lVar28 + 0xd8) = 0;
  *(undefined8 *)(lVar28 + 0xe0) = 0;
  *(undefined8 *)(lVar28 + 0xe8) = 0;
  *(undefined8 *)(lVar28 + 0xf0) = 0;
  *(undefined8 *)(lVar28 + 0xf8) = 0;
  *(undefined8 *)(lVar28 + 0x100) = 0;
  *(undefined8 *)(lVar28 + 0x108) = 0;
  *(undefined8 *)(lVar28 + 0x110) = 0;
  *(undefined8 *)(lVar28 + 0x118) = 0;
  *(undefined8 *)(lVar28 + 0x120) = 0;
  *(undefined8 *)(lVar28 + 0x128) = 0;
  *(undefined8 *)(lVar28 + 0x130) = 0;
  *(undefined8 *)(lVar28 + 0x138) = 0;
  *(undefined8 *)(lVar28 + 0x140) = 0;
  *(undefined8 *)(lVar28 + 0x148) = 0;
  *(undefined8 *)(lVar28 + 0x150) = 0;
  *(undefined8 *)(lVar28 + 0x158) = 0;
  *(undefined8 *)(lVar28 + 0x160) = 0;
  *(undefined8 *)(lVar28 + 0x168) = 0;
  *(undefined8 *)(lVar28 + 0x170) = 0;
  *(undefined8 *)(lVar28 + 0x178) = 0;
  puVar17 = *(undefined8 **)(psVar32 + 0x68);
  *puVar17 = 0;
  puVar17[7] = 0;
  puVar17[8] = 0;
  puVar17[5] = 0;
  puVar17[6] = 0;
  puVar17[3] = 0;
  puVar17[4] = 0;
  puVar17[1] = 0;
  puVar17[2] = 0;
  puVar17 = *(undefined8 **)((long)param_3 + 0x68);
  puVar21 = *(undefined8 **)(psVar32 + 0x58);
  uVar18 = puVar17[6];
  uVar29 = puVar17[3];
  uVar5 = puVar17[4];
  puVar21[5] = puVar17[5];
  puVar21[6] = uVar18;
  puVar21[3] = uVar29;
  puVar21[4] = uVar5;
  uVar29 = puVar17[1];
  uVar18 = puVar17[2];
  *puVar21 = *puVar17;
  puVar21[1] = uVar29;
  puVar21[2] = uVar18;
  if (*(long *)((long)param_3 + 0x98) != 0) {
    uVar13 = *(uint *)(*(long *)((long)param_3 + 0x98) + 4);
    if (uVar13 != 0) {
      pvVar16 = (void *)(lVar28 + 0x1d7U + (ulong)uVar13 * 0x40 & 0xfffffffffffffff8);
      *(ulong *)(psVar32 + 0x60) = lVar28 + 0x1d7U & 0xfffffffffffffff8;
      *(void **)(psVar32 + 0x70) = pvVar16;
      uVar27 = (ulong)(*(int *)((long)*(void **)((long)param_3 + 0x98) + 4) * 0x10 + 0x18);
      puVar34 = (undefined2 *)((long)pvVar16 + uVar27);
      memcpy(pvVar16,*(void **)((long)param_3 + 0x98),uVar27);
      lVar28 = *(long *)(psVar32 + 0x70);
      uVar27 = 0;
      do {
        uVar22 = -(uVar27 >> 0x1f) & 0xffffffc000000000 | uVar27 << 6;
        puVar35 = (undefined2 *)((long)puVar34 + 7U & 0xfffffffffffffff8);
        lVar19 = 0;
        plVar33 = (long *)(*(long *)((long)param_3 + 0x78) + uVar22);
        lVar6 = plVar33[1];
        plVar23 = (long *)(*(long *)(psVar32 + 0x60) + uVar22);
        lVar26 = plVar33[2];
        lVar7 = plVar33[3];
        *plVar23 = *plVar33;
        lVar3 = plVar33[4];
        lVar8 = plVar33[5];
        lVar4 = plVar33[6];
        lVar9 = plVar33[7];
        *plVar23 = (long)puVar35;
        plVar23[1] = lVar6;
        plVar23[2] = lVar26;
        plVar23[3] = lVar7;
        plVar23[6] = lVar4;
        plVar23[7] = lVar9;
        plVar23[4] = lVar3;
        plVar23[5] = lVar8;
        pcVar2 = (char *)(*plVar33 + 2);
        do {
          lVar26 = *plVar33 + lVar19;
          if (*(char *)(lVar26 + 2) == '\0') {
LAB_039da6f4:
            iVar14 = (int)lVar19 + 3;
            goto LAB_039da6f8;
          }
          if (*(char *)(lVar26 + 3) == '\0') {
            lVar19 = lVar19 + 1;
            goto LAB_039da6f4;
          }
          if (*(char *)(lVar26 + 4) == '\0') {
            lVar19 = lVar19 + 2;
            goto LAB_039da6f4;
          }
          lVar19 = lVar19 + 3;
        } while (lVar19 != 0x80001);
        iVar14 = 3;
LAB_039da6f8:
        sVar15 = strlen(pcVar2);
        uVar30 = (uint)sVar15;
        *puVar35 = (short)sVar15;
        if (sVar15 != 0) {
          memmove(puVar35 + 1,pcVar2,sVar15);
        }
        if (0 < (int)(((uVar30 & 0xfffffffe) - (uVar30 & 0xffff)) + 2)) {
          memset((void *)((long)(puVar35 + 1) + (sVar15 & 0xffff)),0,
                 (ulong)((uVar30 | 1) - (uVar30 & 0xffff)) + 1);
        }
        uVar30 = (int)uVar27 + 1;
        uVar27 = (ulong)uVar30;
        puVar35 = (undefined2 *)
                  (((ulong)(iVar14 + 7) & 0xfffffff8) + (long)puVar34 + 7U & 0xfffffffffffffff8);
        *(long *)(lVar28 + uVar27 * 0x10 + 0x10) = *plVar23;
        uVar10 = *(uint *)(plVar33 + 2);
        plVar23[1] = (long)puVar35;
        switch(*(undefined1 *)((long)plVar33 + 0x14)) {
        case 0:
        case 1:
          sVar15 = (long)(int)uVar10 * 4;
          goto LAB_039da64c;
        case 2:
          puVar34 = puVar35 + (long)(int)uVar10 * 4;
          if (0 < (int)uVar10) {
            uVar22 = 0;
            do {
              lVar19 = 0;
              *(undefined2 **)(plVar23[1] + uVar22 * 8) = puVar34;
              lVar26 = *(long *)(plVar33[1] + uVar22 * 8);
              pcVar2 = (char *)(lVar26 + 2);
              do {
                lVar3 = lVar26 + lVar19;
                if (*(char *)(lVar3 + 2) == '\0') {
LAB_039da864:
                  iVar14 = (int)lVar19 + 3;
                  goto LAB_039da868;
                }
                if (*(char *)(lVar3 + 3) == '\0') {
                  lVar19 = lVar19 + 1;
                  goto LAB_039da864;
                }
                if (*(char *)(lVar3 + 4) == '\0') {
                  lVar19 = lVar19 + 2;
                  goto LAB_039da864;
                }
                lVar19 = lVar19 + 3;
              } while (lVar19 != 0x80001);
              iVar14 = 3;
LAB_039da868:
              sVar15 = strlen(pcVar2);
              uVar31 = (uint)sVar15;
              *puVar34 = (short)sVar15;
              if (sVar15 != 0) {
                memmove(puVar34 + 1,pcVar2,sVar15);
              }
              if (0 < (int)(((uVar31 & 0xfffffffe) - (uVar31 & 0xffff)) + 2)) {
                memset((void *)((long)(puVar34 + 1) + (sVar15 & 0xffff)),0,
                       (ulong)((uVar31 | 1) - (uVar31 & 0xffff)) + 1);
              }
              uVar22 = uVar22 + 1;
              puVar34 = (undefined2 *)(((ulong)(iVar14 + 7) & 0xfffffff8) + (long)puVar34);
            } while (uVar22 != uVar10);
          }
          break;
        case 3:
          sVar15 = (size_t)*(uint *)(plVar33 + 2);
LAB_039da64c:
          puVar34 = (undefined2 *)((long)puVar35 + sVar15);
          memcpy(puVar35,(void *)plVar33[1],sVar15);
          break;
        default:
          puVar34 = puVar35;
        }
      } while (uVar30 != uVar13);
      nn::util::ResDic::Build();
    }
  }
  lVar28 = *(long *)(psVar32 + 0x58);
  *(short **)(psVar32 + 0x54) = psVar32 + 0x74;
  *(undefined4 *)(lVar28 + 4) = 1;
  *(short **)(lVar28 + 0x18) = psVar32 + 0xbc;
  *(short **)(lVar28 + 8) = psVar32 + 0xb8;
  nn::util::ResDic::Build();
  plVar33 = (long *)(psVar32 + 4);
  lVar28 = *plVar33;
  if (*(short *)((long)param_3 + 0x16) != 0) {
    plVar23 = *(long **)((long)param_3 + 0x70);
    lVar19 = *(long *)(psVar32 + 0x5c);
    lVar26 = *plVar23;
    uVar27 = 0;
    do {
      uVar22 = uVar27 + 1;
      *(long *)(lVar19 + uVar27 * 8) = (lVar28 - lVar26) + 0x10 + plVar23[uVar27];
      uVar27 = uVar22;
    } while (uVar22 < *(ushort *)((long)param_3 + 0x16));
  }
  *(long *)(*(long *)(psVar32 + 0x58) + 0x10) = lVar28;
  lVar28 = *(long *)(psVar32 + 0x58);
  *(long **)(lVar28 + 0x20) = param_1 + 9;
  *(long **)(lVar28 + 0x28) = param_1 + 9;
  *(ulong *)(lVar28 + 0x30) = (ulong)(uint)(**(int **)(psVar32 + 0x5c) - (int)param_1[0x56]);
  if (param_4 != (void *)0x0) {
    pvVar16 = (void *)(*plVar33 + 0x10);
    lVar28 = param_1[0x30];
    if (param_1[0x31] == 0) {
      iVar14 = 0;
    }
    else {
      iVar14 = (int)param_1[0x2e] - *(int *)(param_1[0x31] + 0x10);
    }
    __dest = (void *)(ulong)(uint)(iVar14 + ((int)pvVar16 - (int)param_1[0x56]));
    sVar15 = (long)*(int *)(psVar32 + 0xe) - 0x10;
    memcpy(pvVar16,param_4,sVar15);
    puVar11 = PTR_DAT_04bb2cd8;
    if (lVar28 == 0) {
      if (__dest != pvVar16) {
        memcpy(__dest,param_4,sVar15);
      }
    }
    else {
      lVar19 = (**(code **)PTR_DAT_04bb2cd8)(lVar28);
      if ((void *)(lVar19 + (long)__dest) != pvVar16) {
        lVar19 = (**(code **)puVar11)(lVar28);
        memcpy((void *)(lVar19 + (long)__dest),pvVar16,sVar15);
      }
      uVar13 = (**(code **)PTR_DAT_04bcf030)(lVar28);
      if ((uVar13 >> 2 & 1) != 0) {
        (**(code **)PTR_DAT_04bcf350)(lVar28,__dest,sVar15);
      }
    }
  }
  FUN_038fdf04(psVar32 + 0x24);
  *(byte *)(psVar32 + 1) = *(byte *)(psVar32 + 1) & 0xfd | (*(long *)(psVar32 + 0x6c) != -1) << 1;
  nn::os::LockMutex((MutexType *)(param_1 + 0x70));
  puVar11 = PTR_DAT_04bb2020;
  local_78[0] = *param_5;
  pbStack_68 = *(byte **)(param_5 + 4);
  local_70 = PTR_DAT_04bb2020 + 0x10;
  for (lVar28 = *param_1; lVar28 != 0; lVar28 = *(long *)(lVar28 + 8)) {
    while (iVar14 = FUN_039dace0(local_78,lVar28 + 0x20), -1 < iVar14) {
      if (iVar14 == 0) {
        lVar28 = *(long *)(lVar28 + 0x38);
        if (lVar28 == 0) goto LAB_039dab24;
        FUN_039d9b80(param_1,lVar28,param_6);
        FUN_039d9660(param_1,psVar32);
        uVar29 = 2;
        *param_2 = lVar28;
        goto LAB_039dacac;
      }
      lVar28 = *(long *)(lVar28 + 0x10);
      if (lVar28 == 0) goto LAB_039dab24;
    }
  }
LAB_039dab24:
  pbVar20 = (byte *)(*(long *)(psVar32 + 0x54) + 2);
  uVar13 = (uint)*pbVar20;
  if (*pbVar20 != 0) {
    uVar30 = 0xffffffff;
    pbVar25 = (byte *)(*(long *)(psVar32 + 0x54) + 3);
    do {
      uVar30 = crc32b(uVar30,uVar13,0x4c11db7);
      uVar13 = (uint)*pbVar25;
      pbVar25 = pbVar25 + 1;
    } while (uVar13 != 0);
    uVar13 = ~uVar30;
  }
  if ((int)param_1[3] < *(int *)((long)param_1 + 0x1c)) {
    plVar23 = (long *)param_1[1];
    if (plVar23 != (long *)0x0) {
      param_1[1] = *plVar23;
    }
    plVar23[2] = 0;
    plVar23[3] = 0;
    *(uint *)(plVar23 + 4) = uVar13;
    *plVar23 = (long)&PTR_LAB_04b6b390;
    plVar23[1] = 0;
    plVar23[7] = (long)psVar32;
    plVar23[8] = (long)param_1;
    plVar23[5] = (long)(puVar11 + 0x10);
    plVar23[6] = (long)pbVar20;
    *(int *)(param_1 + 3) = (int)param_1[3] + 1;
    lVar28 = FUN_039db410(*param_1);
    *param_1 = lVar28;
    *(undefined8 *)(lVar28 + 0x18) = 1;
  }
  else {
    local_70 = puVar11 + 0x10;
    lVar28 = *param_1;
    pbStack_68 = pbVar20;
    local_78[0] = uVar13;
    while (lVar28 != 0) {
      iVar14 = FUN_039dace0(local_78,lVar28 + 0x20);
      if (iVar14 < 0) {
        plVar23 = (long *)(lVar28 + 8);
      }
      else {
        if (iVar14 == 0) {
          *(short **)(lVar28 + 0x38) = psVar32;
          break;
        }
        plVar23 = (long *)(lVar28 + 0x10);
      }
      lVar28 = *plVar23;
    }
  }
  *psVar32 = *psVar32 + 1;
  if (param_6 != 0) {
    plVar24 = (long *)(psVar32 + 0x10);
    lVar28 = *plVar24;
    plVar23 = (long *)(*(int *)(psVar32 + 0x1a) + param_6);
    *plVar24 = (long)plVar23;
    *plVar23 = lVar28;
    plVar23[1] = (long)plVar24;
    if (lVar28 != 0) {
      *(long **)(lVar28 + 8) = plVar23;
    }
    *(int *)(psVar32 + 0x18) = *(int *)(psVar32 + 0x18) + 1;
  }
  if (param_4 == (void *)0x0) {
    lVar28 = *(long *)(psVar32 + 0xb0);
    if (*(long *)(psVar32 + 0xac) == 0 && lVar28 == 0) goto LAB_039daca8;
  }
  else {
    lVar28 = *(long *)(psVar32 + 0xb0);
  }
  if (*(long *)(psVar32 + 0xac) == 0 && lVar28 == 0) {
    if (*plVar33 != 0) {
      FUN_039dd4a0(plVar33,0);
    }
    *(ulong *)(psVar32 + 8) = *(ulong *)(psVar32 + 8) & 0xfffffffffffffffe;
  }
  *(byte *)(psVar32 + 1) = *(byte *)(psVar32 + 1) | 4;
LAB_039daca8:
  uVar29 = 1;
LAB_039dacac:
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x70));
  return uVar29;
}

