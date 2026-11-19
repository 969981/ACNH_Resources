
void FUN_03922d50(long param_1,long param_2,long *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  void *__src;
  byte *__dest;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  undefined4 uVar8;
  uint uVar9;
  undefined8 *puVar10;
  long *plVar11;
  ushort uVar12;
  undefined *puVar13;
  long lVar14;
  ulong *puVar15;
  ulong *puVar16;
  undefined8 uVar17;
  byte *pbVar18;
  uint uVar19;
  int iVar20;
  uint uVar21;
  uint uVar22;
  long lVar23;
  uint uVar24;
  void *__dest_00;
  ulong __size;
  long lVar25;
  undefined1 *__src_00;
  byte *pbVar26;
  ulong uVar27;
  undefined1 *__dest_01;
  undefined *local_490;
  byte *local_488;
  undefined8 local_480;
  undefined2 local_478;
  undefined1 local_476;
  undefined1 local_45d;
  undefined *local_78;
  byte *local_70;
  
  FUN_03921dd0();
  uVar22 = *(uint *)(param_2 + 0x208);
  uVar27 = (ulong)uVar22;
  if (0 < (int)uVar22) {
    __size = uVar27 << 8 | 8;
    lVar25 = *(long *)PTR_DAT_04bb2698;
    if (lVar25 == 0) {
      puVar15 = malloc(__size);
    }
    else {
      if (param_3 == (long *)0x0) {
        lVar14 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
        puVar10 = (undefined8 *)(lVar25 + 8);
        if (lVar14 != 0) {
          puVar10 = (undefined8 *)(lVar14 + 0xa8);
        }
        param_3 = (long *)*puVar10;
        if (param_3 == (long *)0x0) goto LAB_03922ff0;
      }
      puVar15 = (ulong *)(**(code **)(*param_3 + 0x30))(param_3,__size,8);
    }
    if (puVar15 != (ulong *)0x0) {
      uVar8 = crc32b(0xffffffff,100,0x4c11db7);
      uVar8 = crc32b(uVar8,0x65,0x4c11db7);
      puVar16 = puVar15 + 1;
      *puVar15 = uVar27;
      puVar13 = PTR_PTR_04bb2238;
      uVar8 = crc32b(uVar8,0x66,0x4c11db7);
      uVar8 = crc32b(uVar8,0x61,0x4c11db7);
      uVar8 = crc32b(uVar8,0x75,0x4c11db7);
      uVar8 = crc32b(uVar8,0x6c,0x4c11db7);
      uVar24 = crc32b(uVar8,0x74,0x4c11db7);
      puVar1 = PTR_DAT_04bb2028 + 0x10;
      puVar3 = PTR_DAT_04bd12f8 + 0x10;
      puVar4 = PTR_DAT_04bd11f0 + 0x10;
      puVar5 = PTR_DAT_04bd11d0 + 0x10;
      puVar15 = puVar16;
      do {
        *(uint *)(puVar15 + 7) = ~uVar24;
        *puVar15 = (ulong)&PTR_LAB_04b66b70;
        puVar15[1] = 0;
        __dest_01 = (undefined1 *)((long)puVar15 + 0x5c);
        *__dest_01 = 0;
        puVar15[4] = 0;
        puVar15[5] = 0;
        *(undefined4 *)(puVar15 + 0xb) = 0x20;
        *(undefined1 *)((long)puVar15 + 0x7b) = 0;
        puVar15[8] = 0;
        *(undefined4 *)(puVar15 + 0x10) = 0xffffffff;
        puVar15[9] = (ulong)puVar1;
        puVar15[10] = (ulong)__dest_01;
        puVar15[6] = (ulong)puVar3;
        lVar25 = *(long *)puVar13;
        puVar15[2] = 0;
        puVar15[3] = 0;
        puVar15[0x11] = 0;
        puVar15[0x12] = 0;
        puVar15[0x13] = 0;
        puVar15[0x14] = 0;
        (**(code **)(lVar25 + 0x18))(puVar13);
        __src_00 = *(undefined1 **)(puVar13 + 8);
        if (__dest_01 != __src_00) {
          (**(code **)(*(long *)puVar13 + 0x18))(puVar13);
          lVar25 = 0;
          do {
            if (*(char *)(*(long *)(puVar13 + 8) + lVar25) == '\0') goto LAB_03922ea8;
            lVar14 = *(long *)(puVar13 + 8) + lVar25;
            if (*(char *)(lVar14 + 1) == '\0') {
              lVar25 = lVar25 + 1;
              goto LAB_03922ea8;
            }
            if (*(char *)(lVar14 + 2) == '\0') {
              lVar25 = lVar25 + 2;
              goto LAB_03922ea8;
            }
            lVar25 = lVar25 + 3;
          } while (lVar25 != 0x80001);
          lVar25 = 0;
LAB_03922ea8:
          iVar20 = (int)lVar25;
          if ((int)puVar15[0xb] <= (int)lVar25) {
            iVar20 = (int)puVar15[0xb] + -1;
          }
          memcpy(__dest_01,__src_00,(long)iVar20);
          __dest_01[iVar20] = 0;
        }
        *(undefined1 *)((long)puVar15 + 0xdc) = 0;
        *(undefined4 *)(puVar15 + 0x15) = 0;
        puVar15[0x18] = 0;
        *(uint *)(puVar15 + 0x17) = ~uVar24;
        puVar15[0x16] = (ulong)puVar5;
        puVar15[0x1a] = (ulong)((long)puVar15 + 0xdc);
        *(undefined4 *)(puVar15 + 0x1b) = 0x20;
        puVar15[6] = (ulong)puVar4;
        puVar2 = PTR_DAT_04bb2028 + 0x10;
        *(undefined1 *)((long)puVar15 + 0xfb) = 0;
        puVar15[0x19] = (ulong)puVar2;
        puVar15 = puVar15 + 0x20;
      } while (puVar15 != puVar16 + uVar27 * 0x20);
      *(uint *)(param_1 + 0x158) = uVar22;
      *(ulong **)(param_1 + 0x160) = puVar16;
    }
  }
LAB_03922ff0:
  uVar22 = *(uint *)PTR_DAT_04bd11d8;
  if (0 < (int)uVar22) {
    uVar19 = *(uint *)(param_1 + 0x18);
    iVar20 = 0;
    uVar24 = 0;
    lVar25 = *(long *)(param_1 + 0x20);
    do {
      uVar21 = uVar24;
      if (uVar19 <= uVar24) {
        uVar21 = 0;
      }
      if (*(short *)(lVar25 + (ulong)uVar21 * 4 + 2) != 0) {
        uVar21 = 0;
        do {
          uVar19 = iVar20 + uVar21;
          uVar21 = uVar21 + 1;
          if (*(uint *)(param_1 + 0x158) <= uVar19) {
            uVar19 = 0;
          }
          lVar25 = *(long *)(param_1 + 0x160) + (long)(int)uVar19 * 0x100;
          *(uint *)(lVar25 + 0xa8) = uVar24;
          *(long *)(lVar25 + 0x98) = param_1 + 0x38;
          uVar19 = *(uint *)(param_1 + 0x18);
          lVar25 = *(long *)(param_1 + 0x20);
          uVar9 = uVar24;
          if (uVar19 <= uVar24) {
            uVar9 = 0;
          }
        } while (uVar21 < *(ushort *)(lVar25 + (ulong)uVar9 * 4 + 2));
        iVar20 = iVar20 + uVar21;
      }
      uVar24 = uVar24 + 1;
    } while (uVar24 != uVar22);
  }
  puVar1 = PTR_DAT_04bb2028;
  local_476 = 0;
  local_480 = 0x53766e4500000020;
  __src = (void *)((long)&local_480 + 4);
  local_478 = 0x7465;
  *(undefined8 *)(param_1 + 0x98) = 0;
  local_490 = puVar1 + 0x10;
  uVar8 = crc32b(0xffffffff,0x6e,0x4c11db7);
  uVar8 = crc32b(uVar8,0x61,0x4c11db7);
  uVar8 = crc32b(uVar8,0x6d,0x4c11db7);
  uVar22 = crc32b(uVar8,0x65,0x4c11db7);
  *(uint *)(param_1 + 0x90) = ~uVar22;
  plVar11 = (long *)(param_1 + 0x130);
  if (*(long *)(param_1 + 0x138) != 0) {
    plVar11 = (long *)(*(long *)(param_1 + 0x138) + 0x10);
  }
  *plVar11 = param_1 + 0x88;
  *(long *)(param_1 + 0x138) = param_1 + 0x88;
  __dest_00 = *(void **)(param_1 + 0xa8);
  *(int *)(param_1 + 0x140) = *(int *)(param_1 + 0x140) + 1;
  local_45d = 0;
  if (__dest_00 != __src) {
    local_488 = __src;
    (**(code **)(puVar1 + 0x28))(&local_490);
    lVar25 = 0;
    do {
      if (*(char *)((long)local_488 + lVar25) == '\0') goto LAB_03923190;
      if (*(char *)((long)local_488 + lVar25 + 1) == '\0') {
        lVar25 = lVar25 + 1;
        goto LAB_03923190;
      }
      if (*(char *)((long)local_488 + lVar25 + 2) == '\0') {
        lVar25 = lVar25 + 2;
        goto LAB_03923190;
      }
      lVar25 = lVar25 + 3;
    } while (lVar25 != 0x80001);
    lVar25 = 0;
LAB_03923190:
    iVar20 = (int)lVar25;
    if (*(int *)(param_1 + 0xb0) <= (int)lVar25) {
      iVar20 = *(int *)(param_1 + 0xb0) + -1;
    }
    memcpy(__dest_00,__src,(long)iVar20);
    *(undefined1 *)((long)__dest_00 + (long)iVar20) = 0;
  }
  puVar1 = PTR_DAT_04bb2020;
  uVar22 = *(uint *)(param_1 + 0x158);
  if (uVar22 != 0) {
    lVar25 = *(long *)(param_1 + 0x160);
    __dest = (byte *)((long)&local_480 + 4);
    uVar24 = 0;
    puVar3 = PTR_DAT_04bb2a08 + 0x10;
    puVar4 = PTR_DAT_04bb2028 + 0x10;
    puVar5 = PTR_DAT_04bb2020 + 0x10;
    do {
      if (0 < (int)*(uint *)PTR_DAT_04bd11d8) {
        uVar19 = 0;
        do {
          uVar21 = uVar19;
          if (*(uint *)(param_1 + 0x18) <= uVar19) {
            uVar21 = 0;
          }
          uVar12 = *(ushort *)(*(long *)(param_1 + 0x20) + (ulong)uVar21 * 4);
          if (((int)(uint)uVar12 <= (int)uVar24) &&
             ((int)uVar24 <
              (int)((uint)*(ushort *)(*(long *)(param_1 + 0x20) + (ulong)uVar21 * 4 + 2) +
                   (uint)uVar12))) goto LAB_039232b4;
          uVar19 = uVar19 + 1;
        } while (*(uint *)PTR_DAT_04bd11d8 != uVar19);
      }
      uVar19 = 0xffffffff;
LAB_039232b4:
      local_480 = CONCAT44(local_480._4_4_,0x20);
      local_45d = 0;
      pbVar18 = *(byte **)(PTR_DAT_04bd11e0 + (long)(int)uVar19 * 0x28);
      local_488 = __dest;
      if (__dest != pbVar18) {
        lVar14 = 0;
        do {
          if (pbVar18[lVar14] == 0) {
LAB_03923324:
            iVar20 = (int)lVar14;
joined_r0x03923328:
            if (0x1f < iVar20) {
              iVar20 = 0x1f;
            }
            goto LAB_03923330;
          }
          if (pbVar18[lVar14 + 1] == 0) {
            lVar14 = lVar14 + 1;
            goto LAB_03923324;
          }
          if (pbVar18[lVar14 + 2] == 0) {
            iVar20 = (int)lVar14 + 2;
            goto joined_r0x03923328;
          }
          lVar14 = lVar14 + 3;
        } while (lVar14 != 0x80001);
        iVar20 = 0;
LAB_03923330:
        local_490 = puVar3;
        memcpy(__dest,pbVar18,(long)iVar20);
        __dest[iVar20] = 0;
      }
      lVar14 = lVar25 + ((long)((ulong)uVar24 << 0x20) >> 0x18);
      local_70 = &DAT_040dd778;
      *(undefined8 *)(lVar14 + 0xc0) = 0;
      local_490 = puVar4;
      local_78 = puVar5;
      (**(code **)(puVar1 + 0x28))(&local_78);
      uVar19 = (uint)*local_70;
      if (*local_70 != 0) {
        uVar21 = 0xffffffff;
        pbVar18 = local_70;
        do {
          pbVar18 = pbVar18 + 1;
          uVar21 = crc32b(uVar21,uVar19,0x4c11db7);
          uVar19 = (uint)*pbVar18;
        } while (uVar19 != 0);
        uVar19 = ~uVar21;
      }
      *(uint *)(lVar14 + 0xb8) = uVar19;
      lVar6 = lVar25 + (long)(int)uVar24 * 0x100;
      plVar11 = (long *)(lVar14 + 8);
      if (*(long *)(lVar14 + 0x10) != 0) {
        plVar11 = (long *)(*(long *)(lVar14 + 0x10) + 0x10);
      }
      *plVar11 = lVar14 + 0xb0;
      *(long *)(lVar14 + 0x10) = lVar14 + 0xb0;
      pbVar26 = *(byte **)(lVar6 + 0xd0);
      *(int *)(lVar14 + 0x18) = *(int *)(lVar14 + 0x18) + 1;
      (**(code **)(local_490 + 0x18))(&local_490);
      pbVar18 = local_488;
      if (pbVar26 != local_488) {
        (**(code **)(local_490 + 0x18))(&local_490);
        lVar23 = 0;
        do {
          if (local_488[lVar23] == 0) goto LAB_0392345c;
          if (local_488[lVar23 + 1] == 0) {
            lVar23 = lVar23 + 1;
            goto LAB_0392345c;
          }
          if (local_488[lVar23 + 2] == 0) {
            lVar23 = lVar23 + 2;
            goto LAB_0392345c;
          }
          lVar23 = lVar23 + 3;
        } while (lVar23 != 0x80001);
        lVar23 = 0;
LAB_0392345c:
        iVar20 = (int)lVar23;
        if (*(int *)(lVar6 + 0xd8) <= (int)lVar23) {
          iVar20 = *(int *)(lVar6 + 0xd8) + -1;
        }
        memcpy(pbVar26,pbVar18,(long)iVar20);
        pbVar26[iVar20] = 0;
      }
      puVar13 = PTR_PTR_04bb2238;
      local_45d = 0;
      local_480 = CONCAT44(local_480._4_4_,0x20);
      local_490 = PTR_DAT_04bb2a08 + 0x10;
      local_488 = __dest;
      (**(code **)(*(long *)PTR_PTR_04bb2238 + 0x18))(PTR_PTR_04bb2238);
      puVar2 = PTR_PTR_04bb2238;
      pbVar18 = *(byte **)(puVar13 + 8);
      if (__dest != pbVar18) {
        (**(code **)(*(long *)PTR_PTR_04bb2238 + 0x18))(PTR_PTR_04bb2238);
        lVar23 = 0;
        do {
          if (*(char *)(*(long *)(puVar2 + 8) + lVar23) == '\0') goto LAB_03923520;
          lVar7 = *(long *)(puVar2 + 8) + lVar23;
          if (*(char *)(lVar7 + 1) == '\0') {
            lVar23 = lVar23 + 1;
            goto LAB_03923520;
          }
          if (*(char *)(lVar7 + 2) == '\0') {
            lVar23 = lVar23 + 2;
            goto LAB_03923520;
          }
          lVar23 = lVar23 + 3;
        } while (lVar23 != 0x80001);
        lVar23 = 0;
LAB_03923520:
        iVar20 = (int)lVar23;
        if ((int)local_480 <= (int)lVar23) {
          iVar20 = (int)local_480 + -1;
        }
        memcpy(__dest,pbVar18,(long)iVar20);
        __dest[iVar20] = 0;
      }
      puVar13 = PTR_DAT_04bb2020;
      local_490 = PTR_DAT_04bb2028 + 0x10;
      local_78 = PTR_DAT_04bb2020 + 0x10;
      local_70 = &DAT_040d7f5b;
      *(undefined8 *)(lVar6 + 0x40) = 0;
      (**(code **)(puVar13 + 0x28))(&local_78);
      uVar19 = (uint)*local_70;
      if (*local_70 != 0) {
        uVar21 = 0xffffffff;
        pbVar18 = local_70;
        do {
          pbVar18 = pbVar18 + 1;
          uVar21 = crc32b(uVar21,uVar19,0x4c11db7);
          uVar19 = (uint)*pbVar18;
        } while (uVar19 != 0);
        uVar19 = ~uVar21;
      }
      *(uint *)(lVar6 + 0x38) = uVar19;
      plVar11 = (long *)(lVar14 + 8);
      if (*(long *)(lVar14 + 0x10) != 0) {
        plVar11 = (long *)(*(long *)(lVar14 + 0x10) + 0x10);
      }
      *plVar11 = lVar6 + 0x30;
      *(long *)(lVar14 + 0x10) = lVar6 + 0x30;
      pbVar26 = *(byte **)(lVar6 + 0x50);
      *(int *)(lVar14 + 0x18) = *(int *)(lVar14 + 0x18) + 1;
      (**(code **)(local_490 + 0x18))(&local_490);
      pbVar18 = local_488;
      if (pbVar26 != local_488) {
        (**(code **)(local_490 + 0x18))(&local_490);
        lVar23 = 0;
        do {
          if (local_488[lVar23] == 0) goto LAB_0392364c;
          if (local_488[lVar23 + 1] == 0) {
            lVar23 = lVar23 + 1;
            goto LAB_0392364c;
          }
          if (local_488[lVar23 + 2] == 0) {
            lVar23 = lVar23 + 2;
            goto LAB_0392364c;
          }
          lVar23 = lVar23 + 3;
        } while (lVar23 != 0x80001);
        lVar23 = 0;
LAB_0392364c:
        iVar20 = (int)lVar23;
        if (*(int *)(lVar6 + 0x58) <= (int)lVar23) {
          iVar20 = *(int *)(lVar6 + 0x58) + -1;
        }
        memcpy(pbVar26,pbVar18,(long)iVar20);
        pbVar26[iVar20] = 0;
      }
      FUN_006e9454(&local_490,&DAT_040c7be9,uVar24);
      uVar17 = 0;
      if (*(long *)PTR_DAT_04bd1140 != 0) {
        uVar17 = FUN_03954f70(*(long *)PTR_DAT_04bd1140,&local_490);
      }
      *(undefined8 *)(lVar14 + 0x28) = uVar17;
      (**(code **)(local_490 + 0x18))(&local_490);
      uVar21 = (uint)*local_488;
      uVar19 = 0;
      if (*local_488 != 0) {
        uVar19 = 0xffffffff;
        do {
          local_488 = local_488 + 1;
          uVar19 = crc32b(uVar19,uVar21,0x4c11db7);
          uVar21 = (uint)*local_488;
        } while (uVar21 != 0);
        uVar19 = ~uVar19;
      }
      *(uint *)(lVar14 + 0x1c) = uVar19;
      uVar24 = uVar24 + 1;
      plVar11 = (long *)(param_1 + 0xe0);
      if (*(long *)(param_1 + 0xe8) != 0) {
        plVar11 = (long *)(*(long *)(param_1 + 0xe8) + 0x20);
      }
      *plVar11 = lVar14;
      *(long *)(param_1 + 0xe8) = lVar14;
    } while (uVar22 != uVar24);
  }
  local_490 = PTR_DAT_04bb2020 + 0x10;
  local_488 = (byte *)0x4098cf5;
  uVar17 = 0;
  if (*(long *)PTR_DAT_04bd1140 != 0) {
    uVar17 = FUN_03954f70(*(long *)PTR_DAT_04bd1140,&local_490);
  }
  *(undefined8 *)(param_1 + 0x150) = uVar17;
  (**(code **)(local_490 + 0x18))(&local_490);
  uVar22 = (uint)*local_488;
  if (*local_488 != 0) {
    uVar24 = 0xffffffff;
    do {
      local_488 = local_488 + 1;
      uVar24 = crc32b(uVar24,uVar22,0x4c11db7);
      uVar22 = (uint)*local_488;
    } while (uVar22 != 0);
    uVar22 = ~uVar24;
  }
  *(uint *)(param_1 + 0x144) = uVar22;
  local_490 = PTR_DAT_04bb2020 + 0x10;
  plVar11 = (long *)(param_1 + 0x48);
  if (*(long *)(param_1 + 0x50) != 0) {
    plVar11 = (long *)(*(long *)(param_1 + 0x50) + 0x20);
  }
  *plVar11 = param_1 + 0x128;
  *(long *)(param_1 + 0x50) = param_1 + 0x128;
  local_488 = (byte *)0x4069bd9;
  uVar17 = 0;
  if (*(long *)PTR_DAT_04bd1140 != 0) {
    uVar17 = FUN_03954f70(*(long *)PTR_DAT_04bd1140,&local_490);
  }
  *(undefined8 *)(param_1 + 0x118) = uVar17;
  (**(code **)(local_490 + 0x18))(&local_490);
  uVar22 = (uint)*local_488;
  if (*local_488 != 0) {
    uVar24 = 0xffffffff;
    do {
      local_488 = local_488 + 1;
      uVar24 = crc32b(uVar24,uVar22,0x4c11db7);
      uVar22 = (uint)*local_488;
    } while (uVar22 != 0);
    uVar22 = ~uVar24;
  }
  *(uint *)(param_1 + 0x100) = uVar22;
  plVar11 = (long *)(param_1 + 0x58);
  if (*(long *)(param_1 + 0x60) != 0) {
    plVar11 = (long *)(*(long *)(param_1 + 0x60) + 0x30);
  }
  *plVar11 = param_1 + 0xd8;
  *(long *)(param_1 + 0x60) = param_1 + 0xd8;
  *(long *)(param_1 + 0x110) = param_1 + 0x40;
  return;
}

