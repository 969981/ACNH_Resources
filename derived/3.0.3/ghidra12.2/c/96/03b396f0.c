
void FUN_03b396f0(long param_1)

{
  long *plVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  byte bVar5;
  char cVar6;
  undefined *puVar7;
  undefined *puVar8;
  uint uVar9;
  char *pcVar10;
  long lVar11;
  long lVar12;
  byte *pbVar13;
  long lVar14;
  long lVar15;
  long *plVar16;
  int iVar17;
  int *piVar18;
  undefined1 *puVar19;
  undefined1 *__dest;
  long lVar20;
  long *plVar21;
  void *__dest_00;
  char *pcVar22;
  undefined1 *puVar23;
  void *__src;
  uint uVar24;
  byte *pbVar25;
  undefined1 auStack_f4 [127];
  undefined1 local_75;
  int local_6c;
  
  piVar18 = *(int **)(param_1 + 0x1b8);
  if ((piVar18 != (int *)0x0) && (0 < *piVar18)) {
    lVar20 = 0;
    lVar11 = param_1 + 0x1c0;
    do {
      plVar16 = *(long **)(*(long *)(piVar18 + 2) + lVar20 * 8);
      (**(code **)(*plVar16 + 0x18))(plVar16);
      (**(code **)(*plVar16 + 0x18))(plVar16);
      pcVar22 = (char *)plVar16[1];
      (**(code **)(*(long *)(param_1 + 0x1c0) + 0x18))(lVar11);
      pcVar10 = *(char **)(param_1 + 0x1c8);
      if (pcVar22 == pcVar10) {
LAB_03b397fc:
        lVar20 = *(long *)(*(long *)(piVar18 + 2) + lVar20 * 8);
        if (lVar20 != 0) {
          __dest = auStack_f4;
          local_75 = 0;
          (**(code **)(*(long *)(param_1 + 0x1c0) + 0x18))(lVar11);
          puVar23 = *(undefined1 **)(param_1 + 0x1c8);
          if (__dest == puVar23) goto LAB_03b398dc;
          (**(code **)(*(long *)(param_1 + 0x1c0) + 0x18))(lVar11);
          puVar19 = *(undefined1 **)(param_1 + 0x1c8);
          lVar11 = 0;
          goto LAB_03b39870;
        }
        break;
      }
      cVar6 = *(char *)plVar16[1];
      if (cVar6 == *pcVar10) {
        if (cVar6 == '\0') goto LAB_03b397fc;
        lVar14 = 0x7fffe;
        pcVar22 = (char *)plVar16[1];
        while( true ) {
          if (pcVar22[1] != pcVar10[1]) break;
          if (pcVar22[1] == '\0') goto LAB_03b397fc;
          if (pcVar22[2] != pcVar10[2]) break;
          if (pcVar22[2] == '\0') goto LAB_03b397fc;
          if ((lVar14 == 0) || (cVar6 = pcVar22[3], cVar6 != pcVar10[3])) break;
          lVar14 = lVar14 + -3;
          pcVar10 = pcVar10 + 3;
          pcVar22 = pcVar22 + 3;
          if (cVar6 == '\0') goto LAB_03b397fc;
        }
      }
      lVar20 = lVar20 + 1;
    } while (lVar20 < *piVar18);
  }
  goto LAB_03b39d6c;
  while( true ) {
    if (puVar19[lVar11 + 1] == '\0') {
      lVar11 = lVar11 + 1;
      goto LAB_03b398b4;
    }
    if (puVar19[lVar11 + 2] == '\0') {
      lVar11 = lVar11 + 2;
      goto LAB_03b398b4;
    }
    lVar11 = lVar11 + 3;
    if (lVar11 == 0x80001) break;
LAB_03b39870:
    if (puVar19[lVar11] == '\0') goto LAB_03b398b4;
  }
  lVar11 = 0;
LAB_03b398b4:
  iVar17 = (int)lVar11;
  if (0x7f < (int)lVar11) {
    iVar17 = 0x7f;
  }
  memcpy(__dest,puVar23,(long)iVar17);
  __dest[iVar17] = 0;
  __dest = puVar19;
LAB_03b398dc:
  puVar7 = PTR_PTR_04bb2238;
  (**(code **)(*(long *)PTR_PTR_04bb2238 + 0x18))(PTR_PTR_04bb2238);
  puVar23 = *(undefined1 **)(puVar7 + 8);
  if (__dest != puVar23) {
    (**(code **)(*(long *)puVar7 + 0x18))(puVar7);
    lVar11 = 0;
    do {
      if (*(char *)(*(long *)(puVar7 + 8) + lVar11) == '\0') goto LAB_03b3996c;
      lVar14 = *(long *)(puVar7 + 8) + lVar11;
      if (*(char *)(lVar14 + 1) == '\0') {
        lVar11 = lVar11 + 1;
        goto LAB_03b3996c;
      }
      if (*(char *)(lVar14 + 2) == '\0') {
        lVar11 = lVar11 + 2;
        goto LAB_03b3996c;
      }
      lVar11 = lVar11 + 3;
    } while (lVar11 != 0x80001);
    lVar11 = 0;
LAB_03b3996c:
    iVar17 = (int)lVar11;
    if (*(int *)(param_1 + 0x1d0) <= (int)lVar11) {
      iVar17 = *(int *)(param_1 + 0x1d0) + -1;
    }
    memcpy(__dest,puVar23,(long)iVar17);
    __dest[iVar17] = 0;
  }
  if (*(undefined8 **)(param_1 + 0x220) != (undefined8 *)0x0) {
    (**(code **)**(undefined8 **)(param_1 + 0x220))();
  }
  FUN_03b80e20(*(undefined8 *)(*(long *)PTR_DAT_04bc3ee8 + 0x98),*(undefined1 *)(param_1 + 0x218));
  plVar16 = (long *)PTR_DAT_04bd1e70;
  if (*(int *)(param_1 + 0x188) != 0) {
    lVar11 = *(long *)(param_1 + 400);
    iVar17 = *(int *)(param_1 + 0x188) + -1;
    plVar1 = (long *)(param_1 + 0x198);
    do {
      uVar9 = *(uint *)(lVar11 + (long)iVar17 * 0x180);
      uVar24 = uVar9 & 0xffff;
      if (uVar9 != 0xffff && uVar24 != 0xffff) {
        lVar14 = *plVar16;
        if (*(long *)(lVar14 + 0x178) != 0) {
          lVar12 = *(long *)(lVar14 + 0x178);
          if (lVar12 != 0) {
            if ((uint)*(ushort *)(lVar12 + 0x1f0) == (uVar9 & 0xffff)) {
              plVar21 = (long *)(lVar12 + 0x60);
            }
            else if (((*(char *)(lVar12 + 0x28) == '\0') ||
                     (*(long *)(lVar12 + 0x30) == 0 || *(int *)(lVar12 + 0x48) <= (int)uVar24)) ||
                    (plVar21 = (long *)(*(long *)(lVar12 + 0x30) + (ulong)uVar24 * 0xe8),
                    (uint)*(ushort *)(plVar21 + 0x1c) != (uVar9 & 0xffff))) goto LAB_03b39a24;
            local_6c = (**(code **)(*plVar21 + 0x50))(plVar21);
            plVar16 = (long *)PTR_DAT_04bd1e70;
            if (local_6c == *(int *)PTR_DAT_04bd1ec0) {
              if ((*(long *)(lVar14 + 0x178) != 0) && (*(long *)(lVar14 + 0x1a0) != 0)) {
                FUN_03b68a80(*(long *)(lVar14 + 0x1a0),plVar21);
                lVar14 = *(long *)(lVar14 + 0x178);
                if (*(char *)((long)plVar21 + 0x7c) != '\0') {
                  *(undefined8 *)((long)plVar21 + 0x75) = 0;
                  plVar21[0xe] = 0;
                }
                uVar9 = (**(code **)(*plVar21 + 0x48))(plVar21);
                lVar14 = lVar14 + (ulong)(uVar9 >> 5 & 0x7ff) * 4;
                *(uint *)(lVar14 + 0x10) =
                     *(uint *)(lVar14 + 0x10) & (1 << (ulong)(uVar9 & 0x1f) ^ 0xffffffffU);
              }
              lVar14 = *(long *)(param_1 + 0x198);
              uVar9 = uVar24;
              if (*(uint *)(param_1 + 0x188) <= uVar24) {
                uVar9 = 0;
              }
              if (lVar14 != 0) {
                lVar12 = *(long *)(param_1 + 400) + (ulong)uVar9 * 0x180;
                plVar16 = (long *)(lVar12 + 8);
                do {
                  (**(code **)(*plVar16 + 0x18))(plVar16);
                  (**(code **)(*plVar16 + 0x18))(plVar16);
                  pbVar25 = *(byte **)(lVar12 + 0x10);
                  (**(code **)(*(long *)(lVar14 + 0x20) + 0x18))((long *)(lVar14 + 0x20));
                  if (pbVar25 == *(byte **)(lVar14 + 0x28)) {
LAB_03b39be4:
                    lVar14 = FUN_03b3c5c0(plVar1,*plVar1,plVar16);
                    *plVar1 = lVar14;
                    if (lVar14 != 0) {
                      *(undefined8 *)(lVar14 + 0x18) = 1;
                    }
                    break;
                  }
                  pbVar25 = *(byte **)(lVar14 + 0x28);
                  pbVar13 = *(byte **)(lVar12 + 0x10);
                  lVar15 = 0x7ffff;
                  while( true ) {
                    bVar5 = *pbVar13;
                    if (bVar5 != *pbVar25) break;
                    if (bVar5 == 0) goto LAB_03b39be4;
                    bVar2 = lVar15 == 0;
                    pbVar25 = pbVar25 + 1;
                    pbVar13 = pbVar13 + 1;
                    lVar15 = lVar15 + -1;
                    if (bVar2) goto LAB_03b39be4;
                  }
                  lVar15 = 8;
                  if (*pbVar25 <= bVar5) {
                    lVar15 = 0x10;
                  }
                  lVar14 = *(long *)(lVar14 + lVar15);
                } while (lVar14 != 0);
              }
              uVar9 = uVar24;
              if (*(uint *)(param_1 + 0x188) <= uVar24) {
                uVar9 = 0;
              }
              *(undefined4 *)(*(long *)(param_1 + 400) + (ulong)uVar9 * 0x180) = 0xffff;
              puVar7 = PTR_PTR_04bb2238;
              if (*(uint *)(param_1 + 0x188) <= uVar24) {
                uVar24 = 0;
              }
              lVar14 = *(long *)(param_1 + 400) + (ulong)uVar24 * 0x180;
              __dest_00 = *(void **)(lVar14 + 0x10);
              (**(code **)(*(long *)PTR_PTR_04bb2238 + 0x18))(PTR_PTR_04bb2238);
              puVar8 = PTR_PTR_04bb2238;
              __src = *(void **)(puVar7 + 8);
              plVar16 = (long *)PTR_DAT_04bd1e70;
              if (__dest_00 != __src) {
                (**(code **)(*(long *)PTR_PTR_04bb2238 + 0x18))(PTR_PTR_04bb2238);
                lVar12 = 0;
                do {
                  if (*(char *)(*(long *)(puVar8 + 8) + lVar12) == '\0') goto LAB_03b399f0;
                  lVar15 = *(long *)(puVar8 + 8) + lVar12;
                  if (*(char *)(lVar15 + 1) == '\0') {
                    lVar12 = lVar12 + 1;
                    goto LAB_03b399f0;
                  }
                  if (*(char *)(lVar15 + 2) == '\0') {
                    lVar12 = lVar12 + 2;
                    goto LAB_03b399f0;
                  }
                  lVar12 = lVar12 + 3;
                } while (lVar12 != 0x80001);
                lVar12 = 0;
LAB_03b399f0:
                iVar4 = *(int *)(lVar14 + 0x18);
                iVar3 = (int)lVar12;
                if (iVar4 <= (int)lVar12) {
                  iVar3 = iVar4 + -1;
                }
                memcpy(__dest_00,__src,(long)iVar3);
                *(undefined1 *)((long)__dest_00 + (long)iVar3) = 0;
                plVar16 = (long *)PTR_DAT_04bd1e70;
              }
            }
          }
        }
      }
LAB_03b39a24:
      iVar17 = iVar17 + -1;
    } while (iVar17 != -1);
  }
  lVar14 = *plVar16;
  FUN_03b510b0(lVar14);
  lVar11 = *(long *)(lVar14 + 0x178);
  if (lVar11 != 0) {
    lVar12 = *(long *)PTR_DAT_04bb29d0;
    do {
      if (*(int *)(lVar11 + 0x48) <= *(int *)(lVar11 + 0x38)) break;
      nn::os::ConvertToTimeSpan(lVar12 / 200);
      nn::os::SleepThread();
      lVar11 = *(long *)(lVar14 + 0x178);
    } while (lVar11 != 0);
  }
  FUN_03b39da0(param_1,lVar20,*(undefined1 *)(param_1 + 0x218));
  if (*(undefined8 **)(param_1 + 0x228) != (undefined8 *)0x0) {
    (**(code **)**(undefined8 **)(param_1 + 0x228))();
  }
LAB_03b39d6c:
  **(undefined1 **)(param_1 + 0x1c8) = 0;
  return;
}

