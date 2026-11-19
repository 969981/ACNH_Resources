
void FUN_03b00260(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  char cVar4;
  uint uVar5;
  uint uVar6;
  undefined1 *puVar7;
  byte bVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  ushort uVar12;
  int iVar13;
  ulong uVar14;
  long lVar15;
  int iVar16;
  uint uVar17;
  uint uVar18;
  long lVar19;
  undefined8 uVar20;
  char *pcVar21;
  uint uVar22;
  undefined8 *puVar23;
  long lVar24;
  long *plVar25;
  undefined4 *puVar26;
  long lVar27;
  float fVar28;
  float fVar29;
  undefined *local_80;
  char *pcStack_78;
  undefined8 local_70;
  ulong uStack_68;
  
  puVar9 = PTR_DAT_04bd16d0;
  lVar15 = *(long *)PTR_DAT_04bd16d0;
  local_80 = PTR_DAT_04bb2020 + 0x10;
  pcStack_78 = "gsys::SystemTask::preCalc_";
  if (*(char *)(lVar15 + 0x94) == '\0' || *(int *)(lVar15 + 0x90) == 0) {
    lVar27 = *(long *)PTR_DAT_04bbdb78;
LAB_03b00328:
    if (*(int *)(lVar15 + 0x90) != 1) {
      if (*(char *)(lVar15 + 0x95) != '\0') {
        *(undefined4 *)(lVar15 + 0x6c) = 0;
        uVar17 = *(uint *)(lVar15 + 0x68);
        if (0 < (int)uVar17) {
          uVar18 = 0;
          do {
            uVar5 = uVar18;
            if (*(uint *)(lVar15 + 0x48) <= uVar18) {
              uVar5 = 0;
            }
            pcVar21 = *(char **)(*(long *)(lVar15 + 0x50) + (ulong)uVar5 * 8);
            uVar5 = *(uint *)(lVar15 + 0x6c);
            if (0 < (int)uVar5) {
              uVar22 = 0;
              do {
                uVar6 = uVar22;
                if (*(uint *)(lVar15 + 0x58) <= uVar22) {
                  uVar6 = 0;
                }
                if (pcVar21 == *(char **)(*(long *)(lVar15 + 0x60) + (ulong)uVar6 * 8))
                goto LAB_03b00354;
                uVar22 = uVar22 + 1;
              } while (uVar5 != uVar22);
            }
            if ((pcVar21 != (char *)0x0) && (*pcVar21 != '\0')) {
              *(uint *)(lVar15 + 0x6c) = uVar5 + 1;
              if (*(uint *)(lVar15 + 0x58) <= uVar5) {
                uVar5 = 0;
              }
              *(char **)(*(long *)(lVar15 + 0x60) + (long)(int)uVar5 * 8) = pcVar21;
            }
LAB_03b00354:
            uVar18 = uVar18 + 1;
          } while (uVar18 != uVar17);
        }
        *(undefined1 *)(lVar15 + 0x95) = 0;
      }
      *(undefined4 *)(lVar15 + 0x68) = 0;
    }
  }
  else {
    bVar8 = *(byte *)(lVar15 + 0x78);
    *(byte *)(lVar15 + 0x78) = '\x01' - bVar8;
    lVar27 = (ulong)bVar8 * 0x10;
    local_70 = *(undefined8 *)(&DAT_04c4bd38 + lVar27);
    uStack_68 = *(ulong *)(&DAT_04c4bd40 + lVar27);
    if (*(long *)(lVar15 + 0x70) != 0) {
      uStack_68 = uStack_68 & 0xffffffff;
    }
    (**(code **)(**(long **)(lVar15 + 0x98) + 0x10))(*(long **)(lVar15 + 0x98),&local_80,&local_70);
    lVar15 = *(long *)puVar9;
    lVar27 = *(long *)PTR_DAT_04bbdb78;
    if (lVar15 != 0) goto LAB_03b00328;
  }
  lVar15 = *(long *)PTR_DAT_04bbd510;
  if ((lVar15 != 0) &&
     (*(uint *)(lVar15 + 8) = *(uint *)(lVar15 + 8) | 0x1000, *(short *)(lVar15 + 0xb20) != 0)) {
    FUN_038fb9b0(*(undefined8 *)PTR_DAT_04bc1010);
    uVar17 = *(uint *)(lVar15 + 0xb10);
    if ((uint)*(ushort *)(lVar15 + 0xb20) <= *(uint *)(lVar15 + 0xb10)) {
      uVar17 = (uint)*(ushort *)(lVar15 + 0xb20);
    }
    if (uVar17 != 0) {
      lVar24 = *(long *)(lVar15 + 0xb18);
      uVar18 = 0;
      do {
        puVar26 = (undefined4 *)(lVar24 + (long)(int)uVar18 * 0x18);
        if (*(long **)(puVar26 + 4) != (long *)0x0) {
          (**(code **)(**(long **)(puVar26 + 4) + 8))();
        }
        uVar18 = uVar18 + 1;
        *puVar26 = 0;
        *(undefined8 *)(puVar26 + 2) = 0;
        *(undefined8 *)(puVar26 + 4) = 0;
      } while (uVar17 != uVar18);
    }
    *(undefined2 *)(lVar15 + 0xb20) = 0;
  }
  *(uint *)(param_1 + 0x46c) = *(uint *)(param_1 + 0x46c) & 0xfffff3ff | 0x1c;
  puVar23 = *(undefined8 **)(*(long *)(param_1 + 0xb0) + 0x40);
  if (((*PTR_DAT_04bd0c28 & 1) == 0) &&
     (iVar13 = __cxa_guard_acquire(PTR_DAT_04bd0c28), iVar13 != 0)) {
    *(undefined **)PTR_DAT_04bd0c20 = PTR_DAT_04bd0c30 + 0x10;
    __cxa_guard_release(PTR_DAT_04bd0c28);
  }
  if ((puVar23 != (undefined8 *)0x0) &&
     (uVar14 = (**(code **)*puVar23)(puVar23,PTR_DAT_04bd0c20), (uVar14 & 1) != 0)) {
    if ((*(byte *)((long)puVar23 + 0x242) & 1) == 0) {
      *(byte *)((long)puVar23 + 0x242) =
           *(byte *)((long)puVar23 + 0x242) & 0xfe | (byte)*(undefined4 *)(param_1 + 0x468) & 1;
    }
    else {
      uVar17 = *(uint *)(param_1 + 0x46c);
      *(uint *)(param_1 + 0x46c) = uVar17 | 0x400;
      if ((*(byte *)((long)puVar23 + 0x242) >> 1 & 1) == 0) {
        *(uint *)(param_1 + 0x46c) = uVar17 & 0xfffffff7 | 0x400;
        *(byte *)((long)puVar23 + 0x242) =
             *(byte *)((long)puVar23 + 0x242) & 0xfe | *(byte *)(param_1 + 0x468) & 1;
      }
      else {
        *(uint *)(param_1 + 0x46c) = uVar17 & 0xfffffffb | 0x400;
      }
    }
    puVar7 = (undefined1 *)0x0;
    if ((*(uint *)(param_1 + 0x468) & 2) != 0) {
      puVar7 = &LAB_03b04390;
    }
    puVar23[0x2c] = puVar7;
    puVar7 = (undefined1 *)0x0;
    if ((*(uint *)(param_1 + 0x468) & 2) != 0) {
      puVar7 = &LAB_03b043b0;
    }
    puVar23[0x2d] = puVar7;
  }
  if ((*(byte *)(param_1 + 0x46b) & 1) != 0) {
    iVar13 = *(int *)(param_1 + 0x5d0);
    fVar28 = (float)iVar13 / (float)*(int *)(param_1 + 0x3a8);
    *(float *)(param_1 + 0x4c8) = fVar28;
    fVar29 = (float)*(int *)(param_1 + 0x5d4) / (float)*(int *)(param_1 + 0x3ac);
    *(float *)(param_1 + 0x4cc) = fVar29;
    if (*(char *)(param_1 + 0x465) == '\0') {
      iVar13 = *(int *)(param_1 + 0x368);
      if (fVar29 <= fVar28) {
        iVar16 = *(int *)(param_1 + 0x36c);
        iVar13 = (int)((fVar28 / fVar29) * (float)iVar13);
      }
      else {
        iVar16 = (int)((fVar29 / fVar28) * (float)*(int *)(param_1 + 0x36c));
      }
      lVar15 = **(long **)(lVar27 + 0x18);
      *(int *)(lVar15 + 0x660) = iVar13;
    }
    else {
      *(int *)(param_1 + 0x368) = iVar13;
      *(int *)(param_1 + 0x36c) = *(int *)(param_1 + 0x5d4);
      lVar15 = **(long **)(lVar27 + 0x18);
      *(int *)(lVar15 + 0x660) = iVar13;
      iVar16 = *(int *)(param_1 + 0x5d4);
    }
    *(int *)(lVar15 + 0x664) = iVar16;
    *(uint *)(lVar15 + 0x6b0) = *(uint *)(lVar15 + 0x6b0) | 0x200;
    *(uint *)(param_1 + 0x468) = *(uint *)(param_1 + 0x468) & 0xfeffffff;
  }
  local_70 = 0xffffffffffffffff;
  iVar13 = *(int *)(param_1 + 0x480);
  if (iVar13 != *(int *)(param_1 + 0x484)) {
    *(undefined4 *)(param_1 + 0x488) = 0;
    if (iVar13 == 2) {
LAB_03b0062c:
      iVar13 = *(int *)(lVar27 + 0x10);
      if (0 < iVar13) {
        lVar15 = 0;
        do {
          lVar24 = *(long *)(param_1 + 0x340 + lVar15 * 8);
          if (lVar24 != 0) {
            *(ushort *)(lVar24 + 0xa74) = *(ushort *)(lVar24 + 0xa74) | 8;
            *(undefined8 *)(param_1 + 0x340 + lVar15 * 8) = 0;
            iVar13 = *(int *)(lVar27 + 0x10);
          }
          lVar15 = lVar15 + 1;
        } while (lVar15 < iVar13);
      }
    }
    else if (iVar13 == 1) {
      if (((*(byte *)(param_1 + 0x470) >> 4 & 1) == 0) && (0 < *(int *)(lVar27 + 0x10))) {
        lVar15 = 0;
        do {
          lVar24 = param_1 + lVar15 * 8;
          lVar19 = *(long *)(lVar24 + 0x338);
          uVar20 = 0;
          if (lVar19 != 0) {
            *(ushort *)(lVar19 + 0xa74) = *(ushort *)(lVar19 + 0xa74) | 4;
            uVar20 = *(undefined8 *)(lVar24 + 0x338);
          }
          *(undefined8 *)(lVar24 + 0x340) = uVar20;
          lVar15 = lVar15 + 1;
        } while (lVar15 < *(int *)(lVar27 + 0x10));
      }
    }
    else if (iVar13 == 0) goto LAB_03b0062c;
    iVar13 = *(int *)(param_1 + 0x480);
    *(int *)(param_1 + 0x484) = iVar13;
    *(uint *)(param_1 + 0x46c) = *(uint *)(param_1 + 0x46c) & 0xffffffdf;
  }
  puVar10 = PTR_DAT_04bbdb10;
  puVar9 = PTR_DAT_04bbdb08;
  if (iVar13 == 2) {
    if (*(char *)(param_1 + 0x48c) != '\0') {
      *(uint *)(param_1 + 0x490) = *(uint *)(param_1 + 0x490) & 0xfffffffe;
    }
  }
  else {
    if (iVar13 != 1) {
      if ((iVar13 == 0) && (*(char *)(param_1 + 0x48c) != '\0')) {
        *(undefined1 *)(param_1 + 0x48c) = 0;
        *(uint *)(param_1 + 0x490) = *(uint *)(param_1 + 0x490) | 1;
      }
      goto LAB_03b00828;
    }
    if ((*(byte *)(param_1 + 0x470) >> 4 & 1) == 0) {
      uVar17 = *(uint *)(param_1 + 0x46c);
      if (((uVar17 >> 5 & 1) != 0) && (uVar18 = *(uint *)(lVar27 + 0x20), 0 < (int)uVar18)) {
        uVar17 = 0;
        puVar1 = PTR_DAT_04bbdb18 + 0x10;
        do {
          uVar5 = uVar17;
          if (uVar18 <= uVar17) {
            uVar5 = 0;
          }
          plVar25 = *(long **)(*(long *)(lVar27 + 0x28) + (ulong)uVar5 * 8);
          if (((*puVar10 & 1) == 0) && (iVar13 = __cxa_guard_acquire(puVar10), iVar13 != 0)) {
            *(undefined **)puVar9 = puVar1;
            __cxa_guard_release(puVar10);
          }
          if ((plVar25 != (long *)0x0) &&
             (uVar14 = (**(code **)(*plVar25 + 0x10))(plVar25,puVar9), (uVar14 & 1) != 0)) {
            cVar4 = (char)plVar25[0x12];
            if (*(char *)((long)plVar25 + 0x91) != -1) {
              cVar4 = *(char *)((long)plVar25 + 0x91);
            }
            if (((int)cVar4 < *(int *)(lVar27 + 0x10)) &&
               (*(long **)(param_1 + 0x340 + (long)cVar4 * 8) == plVar25)) {
              *(uint *)((long)&local_70 + (long)cVar4 * 4) = uVar17;
            }
          }
          uVar18 = *(uint *)(lVar27 + 0x20);
          uVar17 = uVar17 + 1;
        } while ((int)uVar17 < (int)uVar18);
        uVar17 = *(uint *)(param_1 + 0x46c);
      }
      if ((uVar17 >> 2 & 1) != 0) {
        *(uint *)(param_1 + 0x46c) = uVar17 | 0x20;
      }
    }
    if ((*(byte *)(param_1 + 0x46a) >> 4 & 1) != 0) goto LAB_03b00828;
  }
  *(uint *)(param_1 + 0x46c) = *(uint *)(param_1 + 0x46c) & 0xffffffef;
LAB_03b00828:
  puVar11 = PTR_DAT_04bbdb50;
  puVar1 = PTR_DAT_04bbdb48;
  puVar10 = PTR_DAT_04bbdb10;
  puVar9 = PTR_DAT_04bbdb08;
  uVar17 = *(uint *)(lVar27 + 0x20);
  if (0 < (int)uVar17) {
    uVar18 = 0;
    puVar2 = PTR_DAT_04bbdb18 + 0x10;
    puVar3 = PTR_DAT_04bbdb58 + 0x10;
    do {
      uVar5 = uVar18;
      if (uVar17 <= uVar18) {
        uVar5 = 0;
      }
      plVar25 = *(long **)(*(long *)(lVar27 + 0x28) + (ulong)uVar5 * 8);
      if (((*puVar10 & 1) == 0) && (iVar13 = __cxa_guard_acquire(puVar10), iVar13 != 0)) {
        *(undefined **)puVar9 = puVar2;
        __cxa_guard_release(puVar10);
      }
      if (((plVar25 != (long *)0x0) &&
          (uVar14 = (**(code **)(*plVar25 + 0x10))(plVar25,puVar9), (uVar14 & 1) != 0)) &&
         (uVar12 = *(ushort *)((long)plVar25 + 0xa74), (uVar12 >> 6 & 1) != 0)) {
        *(ushort *)((long)plVar25 + 0xa74) = uVar12 & 0xfffe;
        uVar12 = (ushort)(*(uint *)(param_1 + 0x470) >> 5) & 0x20 | uVar12 & 0xffde;
        *(ushort *)((long)plVar25 + 0xa74) = uVar12;
        cVar4 = (char)plVar25[0x12];
        if (*(char *)((long)plVar25 + 0x91) != -1) {
          cVar4 = *(char *)((long)plVar25 + 0x91);
        }
        iVar13 = *(int *)((long)&local_70 + (long)cVar4 * 4);
        if (iVar13 != -1 && (int)uVar18 < iVar13) {
          *(ushort *)((long)plVar25 + 0xa74) = uVar12 | 1;
        }
        if (((*puVar11 & 1) == 0) && (iVar13 = __cxa_guard_acquire(puVar11), iVar13 != 0)) {
          *(undefined **)puVar1 = puVar3;
          __cxa_guard_release(puVar11);
        }
        uVar14 = (**(code **)(*plVar25 + 0x10))(plVar25,puVar1);
        if ((uVar14 & 1) == 0) {
          uVar12 = (**(code **)(*plVar25 + 0x88))(plVar25);
          *(ushort *)((long)plVar25 + 0xa74) =
               *(ushort *)((long)plVar25 + 0xa74) & 0xfffe |
               uVar12 & 1 | (ushort)((*(uint *)(param_1 + 0x468) & 0x40) == 0);
        }
      }
      uVar17 = *(uint *)(lVar27 + 0x20);
      uVar18 = uVar18 + 1;
    } while ((int)uVar18 < (int)uVar17);
  }
  *(int *)(param_1 + 0x488) = *(int *)(param_1 + 0x488) + 1;
  if (*(long *)PTR_DAT_04bbdcb8 != 0) {
    FUN_039cb920(*(long *)PTR_DAT_04bbdcb8,*(int *)(param_1 + 0x484) != 0);
  }
  if (*(long *)PTR_DAT_04bd1770 != 0) {
    FUN_039fee60(*(long *)PTR_DAT_04bd1770,*(undefined8 *)(*(long *)PTR_DAT_04bb4e50 + 0x58));
  }
  *(uint *)(param_1 + 0x490) = *(uint *)(param_1 + 0x490) & 0xfffffffd;
  *(uint *)(lVar27 + 400) = *(uint *)(lVar27 + 400) | 4;
  if (*(int *)(lVar27 + 0x518) == 1) {
    *(uint *)(param_1 + 0x490) = *(uint *)(param_1 + 0x490) | 2;
  }
  puVar9 = PTR_DAT_04bd16d0;
  if (((*(long *)PTR_DAT_04bbd8a0 != 0) && (*(long *)PTR_DAT_04bd16a0 != 0)) &&
     (((*PTR_DAT_04bd16a8 & 1) == 0 && (iVar13 = __cxa_guard_acquire(PTR_DAT_04bd16a8), iVar13 != 0)
      ))) {
    __cxa_guard_release(PTR_DAT_04bd16a8);
  }
  *(uint *)(param_1 + 0x46c) = *(uint *)(param_1 + 0x46c) | 1;
  lVar15 = *(long *)puVar9;
  if ((*(char *)(lVar15 + 0x94) != '\0') && (*(int *)(lVar15 + 0x90) != 0)) {
    (**(code **)(**(long **)(lVar15 + 0x98) + 0x18))();
  }
  return;
}

