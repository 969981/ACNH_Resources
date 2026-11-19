
void FUN_039e8810(ulong param_1,long *param_2,long param_3,uint param_4,ulong param_5,long *param_6)

{
  size_t __size;
  undefined4 uVar1;
  int iVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  long *plVar6;
  ulong *puVar7;
  ulong uVar8;
  uint uVar9;
  uint uVar10;
  long lVar11;
  uint uVar12;
  ulong uVar13;
  byte *pbVar14;
  long lVar15;
  undefined1 *puVar16;
  byte *__dest;
  ulong *puVar17;
  undefined *local_480;
  byte *local_478;
  int local_470;
  undefined1 local_46c [31];
  undefined1 local_44d;
  
  memcpy((void *)(param_1 + 0xd0),(void *)(param_3 + 8),0x204);
  local_470 = 0x20;
  local_44d = 0;
  local_480 = PTR_DAT_04bb2a08 + 0x10;
  local_478 = local_46c;
  (**(code **)(*param_2 + 0x18))(param_2);
  puVar16 = (undefined1 *)param_2[1];
  if (local_46c != puVar16) {
    (**(code **)(*param_2 + 0x18))(param_2);
    lVar11 = 0;
    do {
      if (*(char *)(param_2[1] + lVar11) == '\0') goto LAB_039e88fc;
      lVar5 = param_2[1] + lVar11;
      if (*(char *)(lVar5 + 1) == '\0') {
        lVar11 = lVar11 + 1;
        goto LAB_039e88fc;
      }
      if (*(char *)(lVar5 + 2) == '\0') {
        lVar11 = lVar11 + 2;
        goto LAB_039e88fc;
      }
      lVar11 = lVar11 + 3;
    } while (lVar11 != 0x80001);
    lVar11 = 0;
LAB_039e88fc:
    iVar2 = (int)lVar11;
    if (local_470 <= (int)lVar11) {
      iVar2 = local_470 + -1;
    }
    memcpy(local_46c,puVar16,(long)iVar2);
    local_46c[iVar2] = 0;
  }
  pbVar14 = local_478;
  puVar3 = PTR_DAT_04bb2028;
  *(undefined8 *)(param_1 + 0x88) = 0;
  puVar16 = *(undefined1 **)(param_1 + 0x98);
  local_480 = puVar3 + 0x10;
  uVar1 = crc32b(0xffffffff,0x74,0x4c11db7);
  uVar1 = crc32b(uVar1,0x79,0x4c11db7);
  uVar1 = crc32b(uVar1,0x70,0x4c11db7);
  uVar9 = crc32b(uVar1,0x65,0x4c11db7);
  *(uint *)(param_1 + 0x80) = ~uVar9;
  local_478[(long)local_470 + -1] = 0;
  if (puVar16 != local_478) {
    (**(code **)(puVar3 + 0x28))(&local_480);
    lVar11 = 0;
    do {
      if (local_478[lVar11] == '\0') goto LAB_039e89e0;
      if (local_478[lVar11 + 1] == '\0') {
        lVar11 = lVar11 + 1;
        goto LAB_039e89e0;
      }
      if (local_478[lVar11 + 2] == '\0') {
        lVar11 = lVar11 + 2;
        goto LAB_039e89e0;
      }
      lVar11 = lVar11 + 3;
    } while (lVar11 != 0x80001);
    lVar11 = 0;
LAB_039e89e0:
    iVar2 = (int)lVar11;
    if (*(int *)(param_1 + 0xa0) <= (int)lVar11) {
      iVar2 = *(int *)(param_1 + 0xa0) + -1;
    }
    memcpy(puVar16,pbVar14,(long)iVar2);
    puVar16[iVar2] = 0;
  }
  local_480 = PTR_DAT_04bb2020 + 0x10;
  local_478 = (byte *)0x40fbd14;
  uVar4 = 0;
  if (*(long *)PTR_DAT_04bd1140 != 0) {
    uVar4 = FUN_03954f70(*(long *)PTR_DAT_04bd1140,&local_480);
  }
  *(undefined8 *)(param_1 + 0x70) = uVar4;
  (**(code **)(local_480 + 0x18))(&local_480);
  uVar9 = (uint)*local_478;
  if (*local_478 != 0) {
    uVar12 = 0xffffffff;
    pbVar14 = local_478;
    do {
      pbVar14 = pbVar14 + 1;
      uVar12 = crc32b(uVar12,uVar9,0x4c11db7);
      uVar9 = (uint)*pbVar14;
    } while (uVar9 != 0);
    uVar9 = ~uVar12;
  }
  *(uint *)(param_1 + 100) = uVar9;
  plVar6 = (long *)(param_1 + 8);
  if (*(long *)(param_1 + 0x10) != 0) {
    plVar6 = (long *)(*(long *)(param_1 + 0x10) + 0x20);
  }
  *plVar6 = param_1 + 0x48;
  *(ulong *)(param_1 + 0x10) = param_1 + 0x48;
  if (0 < (int)param_4) {
    __size = (ulong)param_4 * 0x168 + 8;
    lVar11 = *(long *)PTR_DAT_04bb2698;
    if (lVar11 == 0) {
      puVar7 = malloc(__size);
    }
    else {
      plVar6 = param_6;
      if (param_6 == (long *)0x0) {
        lVar5 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
        plVar6 = (long *)(lVar11 + 8);
        if (lVar5 != 0) {
          plVar6 = (long *)(lVar5 + 0xa8);
        }
        plVar6 = (long *)*plVar6;
        if (plVar6 == (long *)0x0) goto LAB_039e8b54;
      }
      puVar7 = (ulong *)(**(code **)(*plVar6 + 0x30))(plVar6,__size,8);
    }
    if (puVar7 != (ulong *)0x0) {
      lVar11 = (ulong)param_4 * 0x168;
      puVar17 = puVar7 + 1;
      *puVar7 = (ulong)param_4;
      puVar7 = puVar17;
      do {
        FUN_03922810(puVar7);
        puVar7 = puVar7 + 0x2d;
        lVar11 = lVar11 + -0x168;
      } while (lVar11 != 0);
      *(uint *)(param_1 + 0x2d8) = param_4;
      *(ulong **)(param_1 + 0x2e0) = puVar17;
      goto joined_r0x039e8b5c;
    }
  }
LAB_039e8b54:
  param_4 = *(uint *)(param_1 + 0x2d8);
  puVar17 = *(ulong **)(param_1 + 0x2e0);
joined_r0x039e8b5c:
  if (param_4 != 0) {
    uVar9 = 0;
    lVar11 = 0;
    if (param_5 != 0) {
      lVar11 = param_5 + 0x38;
    }
    do {
      puVar7 = puVar17 + (long)(int)uVar9 * 0x2d;
      (**(code **)(*puVar7 + 0x10))(puVar7,param_3,param_6);
      (**(code **)(*param_2 + 0x18))(param_2);
      FUN_006e9454(&local_480,&DAT_040ec793,param_2[1],uVar9);
      __dest = (byte *)puVar7[0x15];
      (**(code **)(local_480 + 0x18))(&local_480);
      pbVar14 = local_478;
      if (__dest != local_478) {
        (**(code **)(local_480 + 0x18))(&local_480);
        lVar5 = 0;
        do {
          if (local_478[lVar5] == 0) goto LAB_039e8ca0;
          if (local_478[lVar5 + 1] == 0) {
            lVar5 = lVar5 + 1;
            goto LAB_039e8ca0;
          }
          if (local_478[lVar5 + 2] == 0) {
            lVar5 = lVar5 + 2;
            goto LAB_039e8ca0;
          }
          lVar5 = lVar5 + 3;
        } while (lVar5 != 0x80001);
        lVar5 = 0;
LAB_039e8ca0:
        iVar2 = (int)lVar5;
        if ((int)puVar17[(long)(int)uVar9 * 0x2d + 0x16] <= (int)lVar5) {
          iVar2 = (int)puVar17[(long)(int)uVar9 * 0x2d + 0x16] + -1;
        }
        memcpy(__dest,pbVar14,(long)iVar2);
        __dest[iVar2] = 0;
      }
      uVar8 = puVar7[0x2b];
      puVar7[0x24] = param_5;
      if ((uint)uVar8 != 0) {
        uVar13 = puVar7[0x2c];
        uVar12 = 0;
        do {
          lVar5 = uVar13 + ((long)((ulong)uVar12 << 0x20) >> 0x18);
          lVar15 = *(long *)(lVar5 + 0xa0);
          if (lVar15 != lVar11) {
            if (lVar15 != 0) {
              plVar6 = (long *)((long)*(int *)(lVar15 + 0x4c) + lVar5 + 0x30);
              if (*plVar6 != 0) {
                *(long *)(*plVar6 + 8) = plVar6[1];
              }
              if ((long *)plVar6[1] != (long *)0x0) {
                *(long *)plVar6[1] = *plVar6;
              }
              *plVar6 = 0;
              plVar6[1] = 0;
              *(int *)(lVar15 + 0x48) = *(int *)(lVar15 + 0x48) + -1;
            }
            *(long *)(lVar5 + 0xa0) = lVar11;
            if (param_5 != 0) {
              plVar6 = (long *)((long)*(int *)(param_5 + 0x84) + lVar5 + 0x30);
              lVar5 = *(long *)(param_5 + 0x70);
              *(long **)(param_5 + 0x70) = plVar6;
              *plVar6 = lVar5;
              plVar6[1] = param_5 + 0x70;
              if (lVar5 != 0) {
                *(long **)(lVar5 + 8) = plVar6;
              }
              *(int *)(param_5 + 0x80) = *(int *)(param_5 + 0x80) + 1;
            }
          }
          uVar12 = uVar12 + 1;
        } while ((uint)uVar8 != uVar12);
      }
      FUN_006e9454(&local_480,&DAT_040c7be9,uVar9);
      uVar8 = 0;
      if (*(long *)PTR_DAT_04bd1140 != 0) {
        uVar8 = FUN_03954f70(*(long *)PTR_DAT_04bd1140,&local_480);
      }
      puVar7[0x10] = uVar8;
      (**(code **)(local_480 + 0x18))(&local_480);
      uVar10 = (uint)*local_478;
      uVar12 = 0;
      if (*local_478 != 0) {
        uVar12 = 0xffffffff;
        pbVar14 = local_478;
        do {
          pbVar14 = pbVar14 + 1;
          uVar12 = crc32b(uVar12,uVar10,0x4c11db7);
          uVar10 = (uint)*pbVar14;
        } while (uVar10 != 0);
        uVar12 = ~uVar12;
      }
      *(uint *)(puVar7 + 0xd) = uVar12;
      uVar9 = uVar9 + 1;
      plVar6 = (long *)(param_1 + 0x18);
      if (*(long *)(param_1 + 0x20) != 0) {
        plVar6 = (long *)(*(long *)(param_1 + 0x20) + 0x30);
      }
      *plVar6 = (long)(puVar7 + 8);
      *(ulong **)(param_1 + 0x20) = puVar7 + 8;
      puVar7[0xf] = param_1;
    } while (param_4 != uVar9);
  }
  return;
}

