
void FUN_03210010(long param_1)

{
  long *plVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  short sVar6;
  long lVar7;
  undefined *puVar8;
  undefined *puVar9;
  uint uVar10;
  uint uVar11;
  void *pvVar12;
  int *piVar13;
  undefined8 uVar14;
  undefined4 *puVar15;
  long lVar16;
  uint *puVar17;
  short *psVar18;
  undefined8 *puVar19;
  undefined8 *puVar20;
  uint *puVar21;
  long lVar22;
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
  
  local_7e0 = PTR_DAT_04bbfe60 + 0x10;
  memset(auStack_7d8,0,0x754);
  uVar10 = nn::os::GetSystemTick();
  local_84 = (uVar10 ^ uVar10 >> 0x1e) * 0x6c078965 + 1;
  local_80 = (local_84 ^ local_84 >> 0x1e) * 0x6c078965 + 2;
  local_7c = (local_80 ^ local_80 >> 0x1e) * 0x6c078965 + 3;
  local_78 = (local_7c ^ local_7c >> 0x1e) * 0x6c078965 + 4;
  pvVar12 = (void *)FUN_01a451fc(&local_7e0);
  memset(pvVar12,0,0x754);
  pvVar12 = (void *)(**(code **)(local_7e0 + 0x18))(&local_7e0);
  memset(pvVar12,0,0x754);
  plVar1 = (long *)(param_1 + 0x1c6f8);
  piVar13 = (int *)(**(code **)(*plVar1 + 0x10))(plVar1);
  if (0 < *piVar13) {
    lVar16 = 0;
    puVar19 = *(undefined8 **)(piVar13 + 4);
    do {
      puVar20 = *(undefined8 **)(*(long *)(piVar13 + 2) + lVar16 * 8);
      lVar16 = lVar16 + 1;
      *puVar20 = puVar19;
      *(undefined8 **)(piVar13 + 4) = puVar20;
      puVar19 = puVar20;
    } while (lVar16 < *piVar13);
  }
  puVar9 = PTR_DAT_04bc0510;
  puVar8 = PTR_DAT_04bb43c0;
  uVar10 = 0;
  *piVar13 = 0;
  do {
    lVar16 = *(long *)puVar8;
    psVar18 = (short *)(param_1 + 0x1c2f8 + ((long)((ulong)uVar10 << 0x20) >> 0x1d));
    uVar11 = FUN_0277d6c4(psVar18);
    lVar22 = *(long *)puVar8;
    if (lVar22 != 0) {
      lVar16 = *(long *)(lVar16 + 0x57e58);
      uVar11 = (uVar11 & 0xffff) - (uint)*(ushort *)(lVar16 + 0x1f8);
      if (((uVar11 < *(uint *)(lVar16 + 0x1d8)) &&
          (*(long *)(*(long *)(lVar16 + 0x1e0) + (long)(int)uVar11 * 8) != 0)) && (*psVar18 != -2))
      {
        lVar16 = param_1 + 0x1c2f8 + (long)(int)uVar10 * 8;
        local_7f0 = (uint *)0x0;
        local_7f8 = (undefined *)
                    CONCAT44(*(undefined4 *)(lVar16 + 4),
                             CONCAT22(*(undefined2 *)(lVar16 + 2),*psVar18));
        local_800 = puVar9 + 0x10;
        uVar11 = FUN_0277d6c4(&local_7f8);
        if (*(long *)puVar8 == 0) {
LAB_032103ac:
          local_70 = 0xbc;
LAB_032103d4:
          local_6c = 5;
          if (local_70 != 5) goto LAB_03210170;
        }
        else {
          lVar22 = *(long *)(lVar22 + 0x57e58);
          uVar11 = (uVar11 & 0xffff) - (uint)*(ushort *)(lVar22 + 0x1f8);
          if ((*(uint *)(lVar22 + 0x1d8) <= uVar11) ||
             (*(long *)(*(long *)(lVar22 + 0x1e0) + (long)(int)uVar11 * 8) == 0)) goto LAB_032103ac;
          lVar22 = *(long *)PTR_DAT_04bc0428;
          uVar11 = FUN_0277d6c4(psVar18);
          uVar11 = (uVar11 & 0xffff) - (uint)*(ushort *)(lVar22 + 0x1f8);
          if ((*(uint *)(lVar22 + 0x1d8) <= uVar11) ||
             (puVar17 = *(uint **)(*(long *)(lVar22 + 0x1e0) + (long)(int)uVar11 * 8),
             puVar17 == (uint *)0x0)) goto LAB_032103ac;
          local_70 = 0;
          local_6c = 4;
          uVar11 = *puVar17;
          if ((uVar11 != 0) && (puVar17 != (uint *)(ulong)uVar11)) {
            puVar21 = (uint *)((long)puVar17 - (long)(ulong)uVar11);
            local_70 = 0;
            if (*puVar21 != 0) {
              uVar11 = puVar21[1];
              if ((uVar11 != 0) && ((ulong)(ushort)puVar21[2] != 0)) {
                lVar22 = 0xc;
                if (*(char *)((long)puVar21 + 10) != '\0') {
                  lVar22 = 0x1c;
                }
                lVar22 = (long)puVar21 + lVar22 + (ulong)(ushort)puVar21[2] * 8;
                if (lVar22 != 0) {
                  uVar2 = 0;
                  if ((ulong)uVar11 != 0) {
                    uVar2 = (uint)((ulong)((long)puVar17 - lVar22) / (ulong)uVar11);
                  }
                  if (*puVar21 <= uVar2) {
                    uVar2 = 0xffffffff;
                  }
                  if ((uVar2 < *(uint *)PTR_DAT_04bc00c8) &&
                     (local_70 = (uint)*(ushort *)
                                        (*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar2 * 2),
                     local_70 < 0xbd)) goto LAB_03210300;
                }
              }
              local_70 = 0;
            }
          }
LAB_03210300:
          local_7f0 = puVar17;
          if (local_70 != 4) {
            local_70 = 0;
            uVar11 = *puVar17;
            if ((uVar11 != 0) && (puVar17 != (uint *)(ulong)uVar11)) {
              puVar21 = (uint *)((long)puVar17 - (long)(ulong)uVar11);
              local_70 = 0;
              if (*puVar21 != 0) {
                uVar11 = puVar21[1];
                if ((uVar11 != 0) && ((ulong)(ushort)puVar21[2] != 0)) {
                  lVar22 = 0xc;
                  if (*(char *)((long)puVar21 + 10) != '\0') {
                    lVar22 = 0x1c;
                  }
                  lVar22 = (long)puVar21 + lVar22 + (ulong)(ushort)puVar21[2] * 8;
                  if (lVar22 != 0) {
                    uVar2 = 0;
                    if ((ulong)uVar11 != 0) {
                      uVar2 = (uint)((ulong)((long)puVar17 - lVar22) / (ulong)uVar11);
                    }
                    if (*puVar21 <= uVar2) {
                      uVar2 = 0xffffffff;
                    }
                    if ((uVar2 < *(uint *)PTR_DAT_04bc00c8) &&
                       (local_70 = (uint)*(ushort *)
                                          (*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar2 * 2),
                       local_70 < 0xbd)) goto LAB_032103d4;
                  }
                }
                local_70 = 0;
              }
            }
            goto LAB_032103d4;
          }
        }
        FUN_0277dedc(psVar18);
        lVar22 = (**(code **)(local_7e0 + 0x18))(&local_7e0);
        uVar11 = FUN_0277d6c4(psVar18);
        if ((uVar11 >> 3 & 0x1fff) < 0x753) {
          lVar7 = (ulong)((uVar11 & 0xffff) >> 5) * 4;
          *(uint *)(lVar22 + lVar7) = *(uint *)(lVar22 + lVar7) | 1 << (ulong)(uVar11 & 0x1f);
        }
        uVar4 = *(undefined1 *)(lVar16 + 2);
        uVar5 = *(undefined1 *)(lVar16 + 3);
        sVar6 = *psVar18;
        uVar3 = *(undefined4 *)(lVar16 + 4);
        piVar13 = (int *)(**(code **)(*plVar1 + 0x10))(plVar1);
        if (*piVar13 < piVar13[1]) {
          psVar18 = *(short **)(piVar13 + 4);
          if (psVar18 != (short *)0x0) {
            *(undefined8 *)(piVar13 + 4) = *(undefined8 *)psVar18;
          }
          *psVar18 = sVar6;
          *(undefined1 *)(psVar18 + 1) = uVar4;
          *(undefined1 *)((long)psVar18 + 3) = uVar5;
          *(undefined4 *)(psVar18 + 2) = uVar3;
          if (*piVar13 < piVar13[1]) {
            *(short **)(*(long *)(piVar13 + 2) + (long)*piVar13 * 8) = psVar18;
            *piVar13 = *piVar13 + 1;
          }
        }
      }
    }
LAB_03210170:
    uVar10 = uVar10 + 1;
    if (uVar10 == 0x80) {
      local_800 = PTR_DAT_04bc5a40 + 0x10;
      local_7f8 = PTR_LAB_04bc89f0;
      (**(code **)(*plVar1 + 0x20))(plVar1);
      uVar14 = (**(code **)(*plVar1 + 0x10))(plVar1);
      FUN_02c5ef70(uVar14,&local_800);
      puVar15 = (undefined4 *)(**(code **)(*plVar1 + 0x18))(plVar1);
      *(undefined4 *)(param_1 + 0x218) = *puVar15;
      return;
    }
  } while( true );
}

