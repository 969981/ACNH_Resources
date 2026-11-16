
undefined8 FUN_02951700(long param_1,byte *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  uint uVar3;
  undefined4 *puVar4;
  byte *pbVar5;
  uint *puVar6;
  undefined4 uVar7;
  uint uVar8;
  byte bVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  bool bVar13;
  int iVar14;
  uint uVar15;
  long *plVar16;
  ulong uVar17;
  long *plVar18;
  long lVar19;
  uint *puVar20;
  long *plVar21;
  uint uVar22;
  ulong uVar23;
  undefined *local_78;
  undefined1 local_70;
  undefined1 local_6f;
  byte local_6e;
  undefined4 local_6c;
  undefined4 local_68;
  undefined2 local_64;
  undefined1 local_62;
  
  lVar19 = *(long *)PTR_DAT_04bb27c0;
  if (lVar19 != 0) {
    uVar22 = *(uint *)PTR_DAT_04bc3ab8;
    if ((((uVar22 == 0) ||
         (plVar21 = *(long **)(*(long *)(*(long *)(lVar19 + 0x1c0) + 8) +
                              ((ulong)(uVar22 >> 0x11) & 0x7ff8)), plVar21 == (long *)0x0)) ||
        ((*(uint *)(plVar21 + 0x49) >> 1 & 1) != 0)) || (*(uint *)(plVar21 + 0x46) != uVar22)) {
      plVar21 = (long *)0x0;
    }
    if (*(int *)(lVar19 + 0x288) == 1 || *(int *)(lVar19 + 0x288) == -1) {
      plVar16 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      lVar19 = *(long *)PTR_DAT_04bb27c0;
      iVar14 = (**(code **)(*plVar16 + 0x60))();
      if (iVar14 < 0x11) {
        uVar22 = 1;
      }
      else {
        uVar22 = 0;
        if (*(uint *)(lVar19 + 0x5e8) < 5) {
          uVar22 = 0x1aU >> (ulong)(*(uint *)(lVar19 + 0x5e8) & 0x1f) & 1;
        }
      }
    }
    else {
      uVar22 = 0;
    }
    if (plVar21 != (long *)0x0) {
      lVar19 = plVar21[0x2a];
      uVar8 = *(uint *)(plVar21 + 0x49);
      if (((*PTR_DAT_04bc3a98 & 1) == 0) &&
         (iVar14 = __cxa_guard_acquire(PTR_DAT_04bc3a98), iVar14 != 0)) {
        *(undefined **)PTR_DAT_04bc3a90 = PTR_DAT_04bb2e50 + 0x10;
        __cxa_guard_release(PTR_DAT_04bc3a98);
      }
      uVar15 = (**(code **)(*plVar21 + 0x20))(plVar21,PTR_DAT_04bc3a90);
      puVar12 = PTR_DAT_04bc3b60;
      puVar11 = PTR_DAT_04bc3b58;
      puVar10 = PTR_DAT_04bb3238;
      if ((((int)lVar19 == 1) && ((uVar15 & uVar22) != 0)) && ((uVar8 >> 4 & 1) != 0)) {
        uVar23 = 0;
        puVar1 = PTR_DAT_04bb2e50 + 0x10;
        puVar2 = PTR_DAT_04bbca00 + 0x10;
        do {
          uVar22 = (uint)uVar23;
          puVar20 = (uint *)puVar10;
          if ((long *)plVar21[0x16] != plVar21 + 0x15) {
            lVar19 = (long)*(int *)((long)plVar21 + 0xbc);
            plVar16 = (long *)(plVar21[0x16] - lVar19);
            do {
              if (((*puVar12 & 1) == 0) && (iVar14 = __cxa_guard_acquire(puVar12), iVar14 != 0)) {
                *(undefined **)puVar11 = puVar2;
                __cxa_guard_release(puVar12);
              }
              if ((plVar16 != (long *)0x0) &&
                 (uVar17 = (**(code **)(*plVar16 + 0x10))(plVar16,puVar11), (uVar17 & 1) != 0)) {
                if (((int)uVar22 < (int)(uint)*(byte *)((long)plVar16 + 0x59a)) ||
                   ((int)uVar22 <
                    (int)((uint)*(byte *)((long)plVar16 + 0x59b) +
                         (uint)*(byte *)((long)plVar16 + 0x59a)))) {
                  puVar20 = (uint *)(plVar16 + uVar23 + 0x9f);
                }
                break;
              }
              plVar16 = (long *)(*(long *)((long)plVar16 + lVar19 + 8) - lVar19);
            } while (plVar16 != (long *)((long)(plVar21 + 0x15) - lVar19));
          }
          uVar8 = *puVar20;
          if ((uVar8 != 0) && (lVar19 = *(long *)PTR_DAT_04bb27c0, lVar19 != 0)) {
            plVar16 = *(long **)(*(long *)(*(long *)(lVar19 + 0x1c0) + 8) +
                                ((ulong)(uVar8 >> 0x11) & 0x7ff8));
            if ((plVar16 == (long *)0x0) ||
               (((*(uint *)(plVar16 + 0x49) >> 1 & 1) != 0 || (*(uint *)(plVar16 + 0x46) != uVar8)))
               ) {
              plVar16 = (long *)0x0;
            }
            if (*(int *)(lVar19 + 0x288) == 1 || *(int *)(lVar19 + 0x288) == -1) {
              plVar18 = (long *)nn::os::GetTlsValue(*(undefined4 *)
                                                     (*(long *)PTR_DAT_04bb3350 + 0x68));
              lVar19 = *(long *)PTR_DAT_04bb27c0;
              iVar14 = (**(code **)(*plVar18 + 0x60))();
              if (iVar14 < 0x11) {
                uVar15 = 1;
              }
              else {
                if (4 < *(uint *)(lVar19 + 0x5e8)) goto LAB_02951a0c;
                uVar15 = 0x1aU >> (ulong)(*(uint *)(lVar19 + 0x5e8) & 0x1f) & 1;
              }
            }
            else {
LAB_02951a0c:
              uVar15 = 0;
            }
            if (plVar16 != (long *)0x0) {
              lVar19 = plVar16[0x2a];
              if (((*PTR_DAT_04bc3ab0 & 1) == 0) &&
                 (iVar14 = __cxa_guard_acquire(PTR_DAT_04bc3ab0), iVar14 != 0)) {
                *(undefined **)PTR_DAT_04bc3aa8 = puVar1;
                __cxa_guard_release(PTR_DAT_04bc3ab0);
              }
              uVar17 = (**(code **)(*plVar16 + 0x20))(plVar16,PTR_DAT_04bc3aa8);
              uVar3 = 0;
              if ((int)lVar19 == 1) {
                uVar3 = uVar15;
              }
              if ((((uVar17 & 1) != 0) && (uVar3 != 0)) &&
                 (uVar17 = FUN_029466d8(plVar16,param_2 + 4,param_2 + 0x10,param_2[0x14]),
                 (uVar17 & 1) != 0)) {
                lVar19 = **(long **)PTR_DAT_04bb27d0;
                if (*(byte *)(lVar19 + 0x476) < 2) goto LAB_02951c84;
                bVar9 = *(byte *)(lVar19 + 0x473);
                local_70 = (undefined1)uVar23;
                if ((long)(char)bVar9 == 0xffffffffffffffff) {
LAB_02951b74:
                  uVar23 = uVar23 & 0xff;
                  if (0x13 < (uVar22 & 0xff)) {
                    uVar23 = 0;
                  }
                  if ((&DAT_055cf258)[uVar23] != '\0') {
                    return 0;
                  }
                  (&DAT_055cf258)[uVar23] = 1;
                  local_6f = 4;
                  local_6e = *param_2;
                  local_78 = PTR_DAT_04bc3aa0 + 0x10;
                  local_6c = (undefined4)plVar16[0x78];
                  if (7 < local_6e) {
                    local_6e = 0xff;
                  }
                  FUN_029376fc(*(undefined8 *)PTR_DAT_04bb47b8,&local_78);
                }
                else {
                  pbVar5 = (byte *)(lVar19 + 0x48) + ((long)(char)bVar9 & 0xffffffffU) * 0x80;
                  if (7 < bVar9) {
                    pbVar5 = (byte *)(lVar19 + 0x48);
                  }
                  if (((*pbVar5 >> 3 & 1) == 0) || (*(byte *)(lVar19 + 0x472) == bVar9))
                  goto LAB_02951b74;
                  local_78 = PTR_DAT_04bc3aa0 + 0x10;
                  local_6f = 1;
                  local_6e = *param_2;
                  if (7 < local_6e) {
                    local_6e = 0xff;
                  }
                  local_6c = (undefined4)plVar16[0x78];
                  local_68 = 0;
                  local_62 = 0;
                  local_64 = 0xff01;
                  if (-1 < *(int *)(*(long *)PTR_DAT_04bb47b8 + 0x38)) {
                    FUN_01db1df0(**(long **)PTR_DAT_04bb27d0 + 0x480,
                                 *(int *)(*(long *)PTR_DAT_04bb47b8 + 0x38),&local_68,&local_78,0x10
                                 ,0);
                  }
                }
                *(byte *)((long)plVar16 + 0x275) = *(byte *)((long)plVar16 + 0x275) & 0xf3 | 2;
LAB_02951c84:
                puVar20 = (uint *)(param_1 + 0x148);
                bVar9 = *param_2;
                uVar15 = *(uint *)(plVar16 + 0x77);
                bVar13 = 7 < bVar9;
                if (bVar13) {
                  bVar9 = 0xff;
                }
                puVar6 = puVar20 + (ulong)(uint)(int)(char)bVar9 * 5;
                if (bVar13) {
                  puVar6 = puVar20;
                }
                puVar6[3] = *(uint *)((long)plVar16 + 0x3b4);
                puVar6[4] = uVar15;
                bVar9 = *param_2;
                bVar13 = 7 < bVar9;
                if (bVar13) {
                  bVar9 = 0xff;
                }
                puVar6 = puVar20 + (ulong)(uint)(int)(char)bVar9 * 5;
                if (bVar13) {
                  puVar6 = puVar20;
                }
                *puVar6 = uVar8;
                bVar9 = *param_2;
                bVar13 = 7 < bVar9;
                if (bVar13) {
                  bVar9 = 0xff;
                }
                puVar6 = puVar20 + (ulong)(uint)(int)(char)bVar9 * 5;
                if (bVar13) {
                  puVar6 = puVar20;
                }
                puVar6[1] = uVar22 & 0xff;
                bVar9 = *param_2;
                bVar13 = 7 < bVar9;
                if (bVar13) {
                  bVar9 = 0xff;
                }
                puVar6 = puVar20 + (ulong)(uint)(int)(char)bVar9 * 5;
                if (bVar13) {
                  puVar6 = puVar20;
                }
                *(undefined1 *)(puVar6 + 2) = 1;
                return 1;
              }
            }
          }
          uVar23 = uVar23 + 1;
        } while (uVar23 != 0x14);
      }
    }
  }
  puVar10 = PTR_DAT_04bb3238;
  bVar9 = *param_2;
  bVar13 = 7 < bVar9;
  if (bVar13) {
    bVar9 = 0xff;
  }
  puVar4 = (undefined4 *)(param_1 + 0x148) + (ulong)(uint)(int)(char)bVar9 * 5;
  if (bVar13) {
    puVar4 = (undefined4 *)(param_1 + 0x148);
  }
  *(undefined2 *)(puVar4 + 2) = 0;
  *puVar4 = *(undefined4 *)puVar10;
  puVar4[1] = 0xffffffff;
  uVar7 = *(undefined4 *)(PTR_DAT_04bb37e0 + 4);
  puVar4[3] = *(undefined4 *)PTR_DAT_04bb37e0;
  puVar4[4] = uVar7;
  return 0;
}

