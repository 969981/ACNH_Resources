
/* WARNING: Removing unreachable block (ram,0x032bb53c) */
/* WARNING: Removing unreachable block (ram,0x032baf40) */
/* WARNING: Removing unreachable block (ram,0x032bae68) */
/* WARNING: Removing unreachable block (ram,0x032bb4a4) */
/* WARNING: Removing unreachable block (ram,0x032bb5d8) */
/* WARNING: Removing unreachable block (ram,0x032bb18c) */
/* WARNING: Removing unreachable block (ram,0x032bb008) */
/* WARNING: Removing unreachable block (ram,0x032bb698) */

void FUN_032bae10(long param_1,undefined8 *param_2)

{
  byte *pbVar1;
  undefined *puVar2;
  undefined4 uVar3;
  long lVar4;
  undefined *puVar5;
  uint uVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined8 uVar9;
  size_t sVar10;
  long *plVar11;
  char cVar12;
  uint uVar13;
  undefined8 *puVar14;
  uint uVar15;
  long *plVar16;
  undefined8 *puVar17;
  void *pvVar18;
  byte *__s;
  undefined8 local_140;
  undefined ***local_138;
  undefined **local_130;
  long lStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined *puStack_108;
  undefined *local_100;
  undefined *puStack_f8;
  undefined *local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined *puStack_b8;
  long *local_b0;
  undefined *local_88;
  undefined *puStack_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined1 local_6c;
  undefined4 local_68;
  undefined8 local_60;
  undefined4 local_58;
  
  cVar12 = *(char *)(param_2 + 9);
  if (cVar12 != '\0' && param_2[0xc] != 0) {
    if (param_2[10] == 0) {
      cVar12 = '\x01';
    }
    else {
      local_140 = (undefined *)((ulong)local_140 & 0xffffffff00000000);
      puVar7 = (undefined8 *)(**(code **)(**(long **)*param_2 + 0x30))(*(long **)*param_2,0x40,8);
      *puVar7 = 0;
      puVar7[1] = 0;
      puVar7[2] = 0;
      puVar7[3] = 0;
      puVar7[4] = 0;
      puVar7[5] = 0;
      puVar7[6] = 0;
      puVar7[7] = 0;
      puVar5 = PTR_DAT_04bb2698;
      puVar17 = *(undefined8 **)(param_1 + 0x98);
      *(undefined8 **)(param_1 + 0x98) = puVar7;
      if (puVar17 != (undefined8 *)0x0) {
        plVar16 = (long *)*puVar17;
        puVar17[6] = 0;
        puVar17[7] = 0;
        puVar17[3] = 0;
        puVar17[4] = 0;
        puVar17[5] = 0;
        if (plVar16 != (long *)0x0) {
          lVar8 = puVar17[1];
          lVar4 = puVar17[2];
          puVar17[2] = 0;
          *puVar17 = 0;
          puVar17[1] = 0;
          if ((undefined8 *)*plVar16 == puVar17) {
            *plVar16 = lVar4;
          }
          if (lVar4 != 0) {
            *(long *)(lVar4 + 8) = lVar8;
          }
          if (lVar8 != 0) {
            *(long *)(lVar8 + 0x10) = lVar4;
          }
        }
        lVar8 = *(long *)puVar5;
        if (lVar8 == 0) {
          free(puVar17);
        }
        else {
          plVar16 = (long *)FUN_038cb610(lVar8,puVar17);
          if (plVar16 != (long *)0x0) {
            (**(code **)(*plVar16 + 0x38))(plVar16,puVar17);
          }
        }
        puVar7 = *(undefined8 **)(param_1 + 0x98);
      }
      local_140 = (undefined *)((ulong)local_140 & 0xffffffff00000000);
      puVar7[3] = *(undefined8 *)(param_2[0xc] + 0x428);
      puVar7 = (undefined8 *)(**(code **)(**(long **)*param_2 + 0x30))(*(long **)*param_2,8,8);
      *puVar7 = 0;
      pvVar18 = *(void **)(param_1 + 0xa0);
      *(undefined8 **)(param_1 + 0xa0) = puVar7;
      if (pvVar18 != (void *)0x0) {
        lVar8 = *(long *)puVar5;
        if (lVar8 == 0) {
          free(pvVar18);
        }
        else {
          plVar16 = (long *)FUN_038cb610(lVar8,pvVar18);
          if (plVar16 != (long *)0x0) {
            (**(code **)(*plVar16 + 0x38))(plVar16,pvVar18);
          }
        }
        puVar7 = *(undefined8 **)(param_1 + 0xa0);
      }
      puVar14 = *(undefined8 **)(param_1 + 0x98);
      puVar17 = (undefined8 *)*puVar7;
      if ((undefined8 *)*puVar7 == (undefined8 *)0x0) {
        *puVar7 = puVar14;
      }
      else {
        do {
          puVar7 = puVar17;
          puVar17 = (undefined8 *)puVar7[2];
        } while ((undefined8 *)puVar7[2] != (undefined8 *)0x0);
        puVar7[2] = puVar14;
        puVar14[1] = puVar7;
        puVar7 = (undefined8 *)*puVar7;
      }
      *puVar14 = puVar7;
      *(undefined8 *)(*(long *)(param_2[10] + 0x18) + 0x20) = *(undefined8 *)(param_1 + 0xa0);
      cVar12 = *(char *)(param_2 + 9);
    }
  }
  *(char *)(param_1 + 0x88) = cVar12;
  puVar5 = PTR_DAT_04bc9078;
  if (*(char *)(param_2 + 0xb) == '\0') {
    if (*(char *)(param_2 + 9) != '\0') {
      local_140 = (undefined *)((ulong)local_140._4_4_ << 0x20);
      plVar16 = *(long **)*param_2;
      plVar11 = (long *)(**(code **)(*plVar16 + 0x30))(plVar16,0x668,8);
      puVar2 = PTR_DAT_04bc8fe8;
      plVar11[4] = 0;
      plVar11[2] = 0;
      plVar11[3] = 0;
      puVar2 = puVar2 + 0x10;
      plVar11[0xb] = 0;
      plVar11[0xc] = 0;
      plVar11[0x13] = 0;
      plVar11[0x20] = 0;
      plVar11[0x2d] = 0;
      plVar11[0x3a] = 0;
      plVar11[0x45] = 0;
      plVar11[0x44] = 0;
      plVar11[0x43] = 0;
      plVar11[0x42] = 0;
      plVar11[0x41] = 0;
      plVar11[0x47] = 0;
      plVar11[0x46] = (long)puVar2;
      plVar11[0x53] = (long)puVar2;
      plVar11[0x60] = (long)puVar2;
      plVar11[0x6d] = (long)puVar2;
      plVar11[0x7a] = (long)puVar2;
      plVar11[0x87] = (long)puVar2;
      plVar11[0x94] = (long)puVar2;
      plVar11[0xa1] = (long)puVar2;
      plVar11[0xae] = (long)puVar2;
      plVar11[0xbb] = (long)puVar2;
      plVar11[0x52] = 0;
      plVar11[0x51] = 0;
      plVar11[0x50] = 0;
      plVar11[0x4f] = 0;
      plVar11[0x4e] = 0;
      plVar11[0x4d] = 0;
      plVar11[0x4c] = 0;
      plVar11[0x54] = 0;
      plVar11[0x5f] = 0;
      plVar11[0x5e] = 0;
      plVar11[0x5d] = 0;
      plVar11[0x5c] = 0;
      plVar11[0x5b] = 0;
      plVar11[0x5a] = 0;
      plVar11[0x59] = 0;
      plVar11[0x61] = 0;
      plVar11[0x6c] = 0;
      plVar11[0x6b] = 0;
      plVar11[0x6a] = 0;
      plVar11[0x69] = 0;
      plVar11[0x68] = 0;
      plVar11[0x67] = 0;
      plVar11[0x66] = 0;
      plVar11[0x6e] = 0;
      plVar11[0x79] = 0;
      plVar11[0x78] = 0;
      plVar11[0x77] = 0;
      plVar11[0x76] = 0;
      plVar11[0x75] = 0;
      plVar11[0x74] = 0;
      plVar11[0x73] = 0;
      plVar11[0x7b] = 0;
      plVar11[0x86] = 0;
      plVar11[0x85] = 0;
      plVar11[0x84] = 0;
      plVar11[0x83] = 0;
      plVar11[0x82] = 0;
      plVar11[0x81] = 0;
      plVar11[0x80] = 0;
      plVar11[0x88] = 0;
      plVar11[0x93] = 0;
      plVar11[0x92] = 0;
      plVar11[0x91] = 0;
      plVar11[0x90] = 0;
      plVar11[0x8f] = 0;
      plVar11[0x8e] = 0;
      plVar11[0x8d] = 0;
      plVar11[0x95] = 0;
      plVar11[0xa0] = 0;
      plVar11[0x9f] = 0;
      plVar11[0x9e] = 0;
      plVar11[0x9d] = 0;
      plVar11[0x9c] = 0;
      plVar11[0x9b] = 0;
      plVar11[0x9a] = 0;
      plVar11[0xa2] = 0;
      plVar11[0xad] = 0;
      plVar11[0xac] = 0;
      plVar11[0xab] = 0;
      plVar11[0xaa] = 0;
      plVar11[0xa9] = 0;
      plVar11[0xa8] = 0;
      plVar11[0xa7] = 0;
      plVar11[0xaf] = 0;
      plVar11[0xba] = 0;
      plVar11[0xb9] = 0;
      plVar11[0xb8] = 0;
      plVar11[0xb7] = 0;
      plVar11[0xb6] = 0;
      plVar11[0xb5] = 0;
      plVar11[0xb4] = 0;
      plVar11[0xbc] = 0;
      plVar11[0xc3] = 0;
      plVar11[0xc2] = 0;
      plVar11[0xc1] = 0;
      plVar11[0xc5] = 0;
      *(undefined4 *)(plVar11 + 0xcc) = 0;
      plVar11[0xcb] = 0;
      plVar11[5] = (long)puVar2;
      plVar11[6] = 0;
      plVar11[0x11] = 0;
      plVar11[0x12] = (long)puVar2;
      plVar11[0x1e] = 0;
      plVar11[0x1f] = (long)puVar2;
      plVar11[0x2b] = 0;
      plVar11[0x2c] = (long)puVar2;
      plVar11[0x38] = 0;
      plVar11[0x39] = (long)puVar2;
      plVar11[0xc4] = (long)(puVar5 + 0x10);
      plVar11[0xd] = 0;
      plVar11[0xe] = 0;
      plVar11[0xf] = 0;
      plVar11[0x10] = 0;
      plVar11[0x18] = 0;
      plVar11[0x19] = 0;
      plVar11[0x1a] = 0;
      plVar11[0x1b] = 0;
      plVar11[0x1c] = 0;
      plVar11[0x1d] = 0;
      plVar11[0x25] = 0;
      plVar11[0x26] = 0;
      plVar11[0x27] = 0;
      plVar11[0x28] = 0;
      plVar11[0x29] = 0;
      plVar11[0x2a] = 0;
      plVar11[0x32] = 0;
      plVar11[0x33] = 0;
      plVar11[0x34] = 0;
      plVar11[0x35] = 0;
      plVar11[0x36] = 0;
      plVar11[0x37] = 0;
      plVar11[0x3f] = 0;
      plVar11[0x40] = 0;
      puVar2 = PTR_DAT_04bc9318 + 0x10;
      plVar11[0xca] = 0;
      *plVar11 = (long)puVar2;
      plVar11[1] = 0;
      plVar16 = *(long **)(param_1 + 0x68);
      *(long **)(param_1 + 0x68) = plVar11;
      goto joined_r0x032bb3a8;
    }
    local_140 = (undefined *)((ulong)local_140._4_4_ << 0x20);
    plVar16 = *(long **)*param_2;
    uVar9 = (**(code **)(*plVar16 + 0x30))(plVar16,0x6b8,8);
    FUN_032b8e1c();
  }
  else {
    local_140 = (undefined *)((ulong)local_140._4_4_ << 0x20);
    uVar9 = (**(code **)(**(long **)*param_2 + 0x30))(*(long **)*param_2,0x6b8,8);
    FUN_032b9994();
  }
  plVar16 = *(long **)(param_1 + 0x68);
  *(undefined8 *)(param_1 + 0x68) = uVar9;
joined_r0x032bb3a8:
  if (plVar16 != (long *)0x0) {
    (**(code **)(*plVar16 + 8))(plVar16);
  }
  puVar2 = PTR_DAT_04bb2120;
  local_e0 = 0;
  local_d8 = 0;
  local_d0 = 0;
  local_c8 = 0;
  local_140 = puVar5 + 0x10;
  local_f0 = PTR_DAT_04bb2120;
  local_e8 = 0;
  puStack_108 = PTR_DAT_04bc8e68 + 0x10;
  local_100 = PTR_DAT_04bb2120;
  puStack_80 = PTR_DAT_04bb2120;
  puStack_b8 = PTR_DAT_04bc8e70 + 0x10;
  local_b0 = (long *)0x0;
  local_70 = 0;
  local_68 = 0xffffffff;
  local_138 = &local_130;
  local_60 = 0;
  local_58 = 0;
  local_130 = &PTR_LAB_04b1a898;
  local_c0 = 0;
  local_78 = 0x100000000;
  local_6c = 1;
  local_120 = 0;
  uStack_118 = 1;
  local_110 = param_2[8];
  lStack_128 = param_1;
  puStack_f8 = puStack_108;
  local_88 = puStack_108;
  (**(code **)(param_2[4] + 0x18))();
  local_100 = puVar2;
  if ((undefined *)param_2[5] != (undefined *)0x0) {
    local_100 = (undefined *)param_2[5];
  }
  (**(code **)(param_2[2] + 0x18))();
  local_e8 = *param_2;
  local_f0 = puVar2;
  if ((undefined *)param_2[3] != (undefined *)0x0) {
    local_f0 = (undefined *)param_2[3];
  }
  local_c8 = param_2[6];
  local_c0 = param_2[7];
  local_60 = *(undefined8 *)(param_1 + 0x98);
  local_58 = *(undefined4 *)(param_2 + 0xd);
  (**(code **)(**(long **)(param_1 + 0x68) + 0x10))(*(long **)(param_1 + 0x68),&local_140);
  puVar5 = PTR_s_FocusKey_04bc8f48;
  lVar8 = *(long *)(*(long *)(param_1 + 0x68) + 8);
  __s = PTR_s_FocusKey_04bc8f48 + 0x58;
  sVar10 = strlen((char *)__s);
  uVar6 = (uint)sVar10;
  if (uVar6 == 0) {
    uVar15 = 0;
  }
  else {
    uVar13 = uVar6 & 3;
    if (uVar6 < 4) {
      uVar15 = 0xffffffff;
    }
    else {
      __s = puVar5 + 0x58;
      uVar6 = uVar6 & 0xfffffffc;
      uVar15 = 0xffffffff;
      do {
        uVar6 = uVar6 - 4;
        uVar3 = crc32b(uVar15,(uint)*__s,0x4c11db7);
        uVar3 = crc32b(uVar3,(uint)__s[1],0x4c11db7);
        uVar3 = crc32b(uVar3,(uint)__s[2],0x4c11db7);
        pbVar1 = __s + 3;
        __s = __s + 4;
        uVar15 = crc32b(uVar3,(uint)*pbVar1,0x4c11db7);
      } while (uVar6 != 0);
    }
    if ((sVar10 & 3) != 0) {
      do {
        uVar13 = uVar13 - 1;
        uVar15 = crc32b(uVar15,(uint)*__s,0x4c11db7);
        __s = __s + 1;
      } while (uVar13 != 0);
    }
    uVar15 = ~uVar15;
  }
  plVar16 = (long *)(lVar8 + 0x450);
  while (lVar8 = *plVar16, *(uint *)(lVar8 + 0x68) != uVar15) {
    plVar16 = (long *)(lVar8 + 0x10);
  }
  do {
    plVar16 = (long *)(lVar8 + 0x28);
    lVar8 = *(long *)(lVar8 + 0x18);
  } while (lVar8 != 0 && *plVar16 == 0);
  uVar6 = FUN_0035d97c();
  local_60 = 0;
  *(uint *)(param_1 + 0xac) = uVar6 & 0xffff;
  if (local_b0 != (long *)0x0) {
    (**(code **)(*local_b0 + 8))();
  }
  local_c8 = 0;
  local_c0 = 0;
  local_110 = 0;
  local_d8 = 0;
  local_d0 = 0;
  local_e8 = 0;
  local_e0 = 0;
  if (local_138 != (undefined ***)0x0) {
    (*(code *)(*local_138)[1])();
  }
  local_140 = (undefined *)((ulong)local_140 & 0xffffffff00000000);
  puVar7 = (undefined8 *)(**(code **)(**(long **)*param_2 + 0x30))(*(long **)*param_2,0x38,8);
  *puVar7 = 0;
  puVar7[1] = 0;
  *(undefined4 *)(puVar7 + 2) = 0;
  *(undefined4 *)(puVar7 + 5) = 0;
  *(undefined4 *)(puVar7 + 6) = 0;
  puVar7[3] = 0;
  puVar7[4] = 0;
  pvVar18 = *(void **)(param_1 + 0x78);
  *(undefined8 **)(param_1 + 0x78) = puVar7;
  if (pvVar18 != (void *)0x0) {
    if (*(long *)PTR_DAT_04bb2698 == 0) {
      free(pvVar18);
    }
    else {
      plVar16 = (long *)FUN_038cb610(*(long *)PTR_DAT_04bb2698,pvVar18);
      if (plVar16 != (long *)0x0) {
        (**(code **)(*plVar16 + 0x38))(plVar16,pvVar18);
      }
    }
    puVar7 = *(undefined8 **)(param_1 + 0x78);
  }
  FUN_032c11a0(puVar7,*param_2,*(undefined4 *)(param_2 + 1),*(undefined1 *)(param_2 + 0xb));
  local_140 = (undefined *)((ulong)local_140 & 0xffffffff00000000);
  puVar7 = (undefined8 *)(**(code **)(**(long **)*param_2 + 0x30))(*(long **)*param_2,0x30,8);
  *puVar7 = 0;
  puVar7[1] = 0;
  *(undefined4 *)(puVar7 + 2) = 0;
  *(undefined4 *)(puVar7 + 5) = 0;
  puVar7[3] = 0;
  puVar7[4] = 0;
  pvVar18 = *(void **)(param_1 + 0x70);
  *(undefined8 **)(param_1 + 0x70) = puVar7;
  if (pvVar18 != (void *)0x0) {
    if (*(long *)PTR_DAT_04bb2698 == 0) {
      free(pvVar18);
    }
    else {
      plVar16 = (long *)FUN_038cb610(*(long *)PTR_DAT_04bb2698,pvVar18);
      if (plVar16 != (long *)0x0) {
        (**(code **)(*plVar16 + 0x38))(plVar16,pvVar18);
      }
    }
    puVar7 = *(undefined8 **)(param_1 + 0x70);
  }
  FUN_032c0eb0(puVar7,*param_2,0xf,*(undefined4 *)(param_2 + 1));
  if (*(char *)(param_2 + 9) != '\0') {
    local_140 = (undefined *)((ulong)local_140 & 0xffffffff00000000);
    puVar7 = (undefined8 *)(**(code **)(**(long **)*param_2 + 0x30))(*(long **)*param_2,0x38,8);
    *puVar7 = 0;
    puVar7[1] = 0;
    *(undefined4 *)(puVar7 + 2) = 0;
    *(undefined4 *)(puVar7 + 5) = 0;
    *(undefined4 *)(puVar7 + 6) = 0;
    puVar7[3] = 0;
    puVar7[4] = 0;
    pvVar18 = *(void **)(param_1 + 0x80);
    *(undefined8 **)(param_1 + 0x80) = puVar7;
    if (pvVar18 != (void *)0x0) {
      if (*(long *)PTR_DAT_04bb2698 == 0) {
        free(pvVar18);
      }
      else {
        plVar16 = (long *)FUN_038cb610(*(long *)PTR_DAT_04bb2698,pvVar18);
        if (plVar16 != (long *)0x0) {
          (**(code **)(*plVar16 + 0x38))(plVar16,pvVar18);
        }
      }
      puVar7 = *(undefined8 **)(param_1 + 0x80);
    }
    FUN_032c11a0(puVar7,*param_2,*(undefined4 *)(param_2 + 1),0);
  }
  *(undefined8 *)(param_1 + 0x90) = param_2[10];
  *(undefined1 *)(param_1 + 0x89) = *(undefined1 *)(param_2 + 0xb);
  return;
}

