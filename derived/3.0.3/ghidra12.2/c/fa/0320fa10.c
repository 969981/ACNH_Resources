
/* WARNING: Type propagation algorithm not settling */

void FUN_0320fa10(long param_1)

{
  long *plVar1;
  uint uVar2;
  undefined4 uVar3;
  char cVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  short sVar7;
  long lVar8;
  undefined *puVar9;
  undefined *puVar10;
  uint uVar11;
  uint uVar12;
  void *pvVar13;
  int *piVar14;
  undefined8 uVar15;
  undefined4 *puVar16;
  long lVar17;
  uint *puVar18;
  short *psVar19;
  undefined8 *puVar20;
  undefined8 *puVar21;
  uint *puVar22;
  long lVar23;
  undefined *local_800;
  undefined8 local_7f8;
  uint *local_7f0;
  undefined *local_7e0;
  undefined1 auStack_7d8 [1876];
  uint local_84;
  uint local_80;
  uint local_7c;
  int local_78;
  uint local_70;
  undefined4 local_6c;
  
  plVar1 = (long *)(param_1 + 0x1c6f8);
  local_7e0 = PTR_DAT_04bbfe60 + 0x10;
  memset(auStack_7d8,0,0x754);
  uVar11 = nn::os::GetSystemTick();
  local_84 = (uVar11 ^ uVar11 >> 0x1e) * 0x6c078965 + 1;
  local_80 = (local_84 ^ local_84 >> 0x1e) * 0x6c078965 + 2;
  local_7c = (local_80 ^ local_80 >> 0x1e) * 0x6c078965 + 3;
  local_78 = (local_7c ^ local_7c >> 0x1e) * 0x6c078965 + 4;
  pvVar13 = (void *)FUN_01a451fc(&local_7e0);
  memset(pvVar13,0,0x754);
  pvVar13 = (void *)(**(code **)(local_7e0 + 0x18))(&local_7e0);
  memset(pvVar13,0,0x754);
  piVar14 = (int *)(**(code **)(*plVar1 + 0x10))(plVar1);
  if (0 < *piVar14) {
    lVar17 = 0;
    puVar20 = *(undefined8 **)(piVar14 + 4);
    do {
      puVar21 = *(undefined8 **)(*(long *)(piVar14 + 2) + lVar17 * 8);
      lVar17 = lVar17 + 1;
      *puVar21 = puVar20;
      *(undefined8 **)(piVar14 + 4) = puVar21;
      puVar20 = puVar21;
    } while (lVar17 < *piVar14);
  }
  puVar10 = PTR_DAT_04bc0510;
  puVar9 = PTR_DAT_04bb43c0;
  uVar11 = 0;
  *piVar14 = 0;
  do {
    lVar17 = *(long *)puVar9;
    psVar19 = (short *)(param_1 + 0x1c2f8 + ((long)((ulong)uVar11 << 0x20) >> 0x1d));
    uVar12 = FUN_0277d6c4(psVar19);
    lVar23 = *(long *)puVar9;
    if (lVar23 != 0) {
      lVar17 = *(long *)(lVar17 + 0x57e58);
      uVar12 = (uVar12 & 0xffff) - (uint)*(ushort *)(lVar17 + 0x1f8);
      if (((uVar12 < *(uint *)(lVar17 + 0x1d8)) &&
          (*(long *)(*(long *)(lVar17 + 0x1e0) + (long)(int)uVar12 * 8) != 0)) && (*psVar19 != -2))
      {
        lVar17 = param_1 + 0x1c2f8 + (long)(int)uVar11 * 8;
        local_7f0 = (uint *)0x0;
        local_7f8 = (undefined *)
                    CONCAT44(*(undefined4 *)(lVar17 + 4),
                             CONCAT22(*(undefined2 *)(lVar17 + 2),*psVar19));
        local_800 = puVar10 + 0x10;
        uVar12 = FUN_0277d6c4(&local_7f8);
        puVar18 = (uint *)0x0;
        if (*(long *)puVar9 == 0) {
LAB_0320fc7c:
          cVar4 = *(char *)(param_1 + 0x1cf21);
        }
        else {
          lVar23 = *(long *)(lVar23 + 0x57e58);
          uVar12 = (uVar12 & 0xffff) - (uint)*(ushort *)(lVar23 + 0x1f8);
          if (*(uint *)(lVar23 + 0x1d8) <= uVar12) {
            puVar18 = (uint *)0x0;
            goto LAB_0320fc7c;
          }
          puVar18 = (uint *)0x0;
          if (*(long *)(*(long *)(lVar23 + 0x1e0) + (long)(int)uVar12 * 8) == 0) goto LAB_0320fc7c;
          lVar23 = *(long *)PTR_DAT_04bc0428;
          uVar12 = FUN_0277d6c4(psVar19);
          uVar12 = (uVar12 & 0xffff) - (uint)*(ushort *)(lVar23 + 0x1f8);
          if (uVar12 < *(uint *)(lVar23 + 0x1d8)) {
            puVar18 = *(uint **)(*(long *)(lVar23 + 0x1e0) + (long)(int)uVar12 * 8);
            if (puVar18 == (uint *)0x0) goto LAB_0320fc7c;
            cVar4 = *(char *)(param_1 + 0x1cf21);
            local_7f0 = puVar18;
          }
          else {
            puVar18 = (uint *)0x0;
            cVar4 = *(char *)(param_1 + 0x1cf21);
          }
        }
        if (cVar4 != '\0') {
          local_6c = 0;
          if (puVar18 == (uint *)0x0) {
            local_70 = 0xbc;
          }
          else {
            uVar12 = *puVar18;
            local_70 = 0;
            if ((uVar12 != 0) && (puVar18 != (uint *)(ulong)uVar12)) {
              puVar22 = (uint *)((long)puVar18 - (long)(ulong)uVar12);
              local_70 = 0;
              if (*puVar22 != 0) {
                uVar12 = puVar22[1];
                if ((uVar12 != 0) && ((ulong)(ushort)puVar22[2] != 0)) {
                  lVar23 = 0xc;
                  if (*(char *)((long)puVar22 + 10) != '\0') {
                    lVar23 = 0x1c;
                  }
                  lVar23 = (long)puVar22 + lVar23 + (ulong)(ushort)puVar22[2] * 8;
                  if (lVar23 != 0) {
                    uVar2 = 0;
                    if ((ulong)uVar12 != 0) {
                      uVar2 = (uint)((ulong)((long)puVar18 - lVar23) / (ulong)uVar12);
                    }
                    if (*puVar22 <= uVar2) {
                      uVar2 = 0xffffffff;
                    }
                    if ((uVar2 < *(uint *)PTR_DAT_04bc00c8) &&
                       (local_70 = (uint)*(ushort *)
                                          (*(long *)((long)PTR_DAT_04bc00c8 + 8) +
                                          (long)(int)uVar2 * 2), local_70 < 0xbd))
                    goto LAB_0320fd20;
                  }
                }
                local_70 = 0;
              }
            }
          }
LAB_0320fd20:
          if (local_70 == 0) goto LAB_0320fb70;
        }
        local_6c = 4;
        if (puVar18 == (uint *)0x0) {
          local_70 = 0xbc;
        }
        else {
          uVar12 = *puVar18;
          local_70 = 0;
          if ((uVar12 != 0) && (puVar18 != (uint *)(ulong)uVar12)) {
            puVar22 = (uint *)((long)puVar18 - (long)(ulong)uVar12);
            local_70 = 0;
            if (*puVar22 != 0) {
              uVar12 = puVar22[1];
              if ((uVar12 != 0) && ((ulong)(ushort)puVar22[2] != 0)) {
                lVar23 = 0xc;
                if (*(char *)((long)puVar22 + 10) != '\0') {
                  lVar23 = 0x1c;
                }
                lVar23 = (long)puVar22 + lVar23 + (ulong)(ushort)puVar22[2] * 8;
                if (lVar23 != 0) {
                  uVar2 = 0;
                  if ((ulong)uVar12 != 0) {
                    uVar2 = (uint)((ulong)((long)puVar18 - lVar23) / (ulong)uVar12);
                  }
                  if (*puVar22 <= uVar2) {
                    uVar2 = 0xffffffff;
                  }
                  if ((uVar2 < *(uint *)PTR_DAT_04bc00c8) &&
                     (local_70 = (uint)*(ushort *)
                                        (*(long *)((long)PTR_DAT_04bc00c8 + 8) +
                                        (long)(int)uVar2 * 2), local_70 < 0xbd)) goto LAB_0320fdcc;
                }
              }
              local_70 = 0;
            }
          }
LAB_0320fdcc:
          if (local_70 == 4) goto LAB_0320fb70;
          local_70 = 0;
          uVar12 = *puVar18;
          if ((uVar12 != 0) && (puVar18 != (uint *)(ulong)uVar12)) {
            puVar22 = (uint *)((long)puVar18 - (long)(ulong)uVar12);
            local_70 = 0;
            if (*puVar22 != 0) {
              uVar12 = puVar22[1];
              if ((uVar12 != 0) && ((ulong)(ushort)puVar22[2] != 0)) {
                lVar23 = 0xc;
                if (*(char *)((long)puVar22 + 10) != '\0') {
                  lVar23 = 0x1c;
                }
                lVar23 = (long)puVar22 + lVar23 + (ulong)(ushort)puVar22[2] * 8;
                if (lVar23 != 0) {
                  uVar2 = 0;
                  if ((ulong)uVar12 != 0) {
                    uVar2 = (uint)((ulong)((long)puVar18 - lVar23) / (ulong)uVar12);
                  }
                  if (*puVar22 <= uVar2) {
                    uVar2 = 0xffffffff;
                  }
                  if ((uVar2 < *(uint *)PTR_DAT_04bc00c8) &&
                     (local_70 = (uint)*(ushort *)
                                        (*(long *)((long)PTR_DAT_04bc00c8 + 8) +
                                        (long)(int)uVar2 * 2), local_70 < 0xbd)) goto LAB_0320fe9c;
                }
              }
              local_70 = 0;
            }
          }
        }
LAB_0320fe9c:
        local_6c = 5;
        if (local_70 != 5) {
          FUN_0277dedc(psVar19);
          lVar23 = (**(code **)(local_7e0 + 0x18))(&local_7e0);
          uVar12 = FUN_0277d6c4(psVar19);
          if ((uVar12 >> 3 & 0x1fff) < 0x753) {
            lVar8 = (ulong)((uVar12 & 0xffff) >> 5) * 4;
            *(uint *)(lVar23 + lVar8) = *(uint *)(lVar23 + lVar8) | 1 << (ulong)(uVar12 & 0x1f);
          }
          uVar5 = *(undefined1 *)(lVar17 + 2);
          uVar6 = *(undefined1 *)(lVar17 + 3);
          sVar7 = *psVar19;
          uVar3 = *(undefined4 *)(lVar17 + 4);
          piVar14 = (int *)(**(code **)(*plVar1 + 0x10))(plVar1);
          if (*piVar14 < piVar14[1]) {
            psVar19 = *(short **)(piVar14 + 4);
            if (psVar19 != (short *)0x0) {
              *(undefined8 *)(piVar14 + 4) = *(undefined8 *)psVar19;
            }
            *psVar19 = sVar7;
            *(undefined1 *)(psVar19 + 1) = uVar5;
            *(undefined1 *)((long)psVar19 + 3) = uVar6;
            *(undefined4 *)(psVar19 + 2) = uVar3;
            if (*piVar14 < piVar14[1]) {
              *(short **)(*(long *)(piVar14 + 2) + (long)*piVar14 * 8) = psVar19;
              *piVar14 = *piVar14 + 1;
            }
          }
        }
      }
    }
LAB_0320fb70:
    uVar11 = uVar11 + 1;
    if (uVar11 == 0x80) {
      local_800 = PTR_DAT_04bc5a40 + 0x10;
      local_7f8 = PTR_LAB_04bc89e8;
      (**(code **)(*plVar1 + 0x20))(plVar1);
      uVar15 = (**(code **)(*plVar1 + 0x10))(plVar1);
      FUN_02c5ef70(uVar15,&local_800);
      puVar16 = (undefined4 *)(**(code **)(*plVar1 + 0x18))(plVar1);
      *(undefined4 *)(param_1 + 0x218) = *puVar16;
      return;
    }
  } while( true );
}

