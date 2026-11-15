
void FUN_02084f10(undefined8 *param_1,undefined8 param_2)

{
  undefined *puVar1;
  uint *puVar2;
  short sVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  ulong uVar7;
  undefined4 uVar8;
  long lVar9;
  undefined1 *puVar10;
  ushort uVar11;
  uint uVar12;
  uint uVar13;
  undefined8 *puVar14;
  long *plVar15;
  char *pcVar16;
  undefined8 *puVar17;
  undefined4 local_e8 [3];
  undefined8 local_dc;
  undefined4 local_d4;
  undefined *local_d0;
  char *pcStack_c8;
  undefined4 local_c0;
  char local_bc [63];
  undefined1 local_7d;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 local_70;
  undefined1 local_6c;
  undefined1 local_6b;
  undefined1 local_6a;
  undefined4 local_64;
  
  *(undefined8 *)((long)param_1 + 0x14) = 0;
  *param_1 = &PTR_LAB_04a71948;
  param_1[1] = param_2;
  puVar14 = param_1 + 2;
  *(undefined4 *)puVar14 = 6;
  *(undefined1 *)((long)param_1 + 0x3c) = 0;
  *(undefined8 *)((long)param_1 + 0x1c) = 0;
  *(undefined4 *)((long)param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 7) = 0x40;
  puVar4 = PTR_DAT_04bb2bc0;
  puVar1 = PTR_DAT_04bb2bc0 + 0x10;
  *(undefined1 *)((long)param_1 + 0x7b) = 0;
  puVar5 = PTR_DAT_04bb6298;
  param_1[0x10] = 0;
  *(undefined8 *)((long)param_1 + 0x87) = 0;
  param_1[5] = puVar1;
  param_1[6] = (undefined1 *)((long)param_1 + 0x3c);
  sVar3 = *(short *)puVar5;
  if (sVar3 != -1) {
    local_e8[0] = 1;
    puVar2 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar3 * 8);
    if (0xff < (uint)(int)sVar3) {
      puVar2 = (uint *)PTR_DAT_04bc39f8;
    }
    if ((*puVar2 >> 1 & 1) != 0) {
      *(undefined4 *)puVar14 = 1;
    }
  }
  uVar12 = (uint)sVar3;
  *(undefined1 *)((long)param_1 + 0xbc) = 0;
  *(undefined4 *)(param_1 + 0x12) = 6;
  *(undefined8 *)((long)param_1 + 0x94) = 0;
  *(undefined8 *)((long)param_1 + 0x9c) = 0;
  *(undefined4 *)((long)param_1 + 0xa4) = 0;
  param_1[0x16] = (undefined1 *)((long)param_1 + 0xbc);
  *(undefined4 *)(param_1 + 0x17) = 0x40;
  *(undefined1 *)((long)param_1 + 0xfb) = 0;
  param_1[0x15] = puVar1;
  param_1[0x20] = 0;
  *(undefined8 *)((long)param_1 + 0x107) = 0;
  uVar13 = (uint)sVar3;
  if (uVar12 != 0xffffffff) {
    local_e8[0] = 1;
    puVar2 = (uint *)(PTR_DAT_04bc39f8 + (ulong)uVar13 * 8);
    if (0xff < uVar12) {
      puVar2 = (uint *)PTR_DAT_04bc39f8;
    }
    if ((*puVar2 >> 1 & 1) != 0) {
      *(undefined4 *)(param_1 + 0x12) = 1;
    }
  }
  param_1[0x30] = 0;
  *(undefined8 *)((long)param_1 + 0x114) = 0;
  *(undefined8 *)((long)param_1 + 0x11c) = 0;
  *(undefined8 *)((long)param_1 + 0x187) = 0;
  *(undefined4 *)(param_1 + 0x22) = 6;
  *(undefined4 *)((long)param_1 + 0x124) = 0;
  *(undefined1 *)((long)param_1 + 0x13c) = 0;
  *(undefined4 *)(param_1 + 0x27) = 0x40;
  *(undefined1 *)((long)param_1 + 0x17b) = 0;
  param_1[0x25] = puVar4 + 0x10;
  param_1[0x26] = (undefined1 *)((long)param_1 + 0x13c);
  if (uVar13 != 0xffffffff) {
    local_e8[0] = 1;
    puVar2 = (uint *)(PTR_DAT_04bc39f8 + (ulong)uVar12 * 8);
    if (0xff < uVar12) {
      puVar2 = (uint *)PTR_DAT_04bc39f8;
    }
    if ((*puVar2 >> 1 & 1) != 0) {
      *(undefined4 *)(param_1 + 0x22) = 1;
    }
  }
  param_1[0x40] = 0;
  *(undefined8 *)((long)param_1 + 0x194) = 0;
  *(undefined8 *)((long)param_1 + 0x19c) = 0;
  *(undefined8 *)((long)param_1 + 0x207) = 0;
  *(undefined1 *)((long)param_1 + 0x1bc) = 0;
  *(undefined4 *)(param_1 + 0x32) = 6;
  *(undefined4 *)((long)param_1 + 0x1a4) = 0;
  *(undefined4 *)(param_1 + 0x37) = 0x40;
  *(undefined1 *)((long)param_1 + 0x1fb) = 0;
  param_1[0x35] = puVar4 + 0x10;
  param_1[0x36] = (undefined1 *)((long)param_1 + 0x1bc);
  if (uVar13 != 0xffffffff) {
    local_e8[0] = 1;
    puVar2 = (uint *)(PTR_DAT_04bc39f8 + (ulong)uVar13 * 8);
    if (0xff < uVar13) {
      puVar2 = (uint *)PTR_DAT_04bc39f8;
    }
    if ((*puVar2 >> 1 & 1) != 0) {
      *(undefined4 *)(param_1 + 0x32) = 1;
    }
  }
  param_1[0x50] = 0;
  *(undefined8 *)((long)param_1 + 0x214) = 0;
  *(undefined8 *)((long)param_1 + 0x21c) = 0;
  *(undefined8 *)((long)param_1 + 0x287) = 0;
  *(undefined4 *)(param_1 + 0x42) = 6;
  *(undefined4 *)((long)param_1 + 0x224) = 0;
  *(undefined1 *)((long)param_1 + 0x23c) = 0;
  param_1[0x46] = (undefined1 *)((long)param_1 + 0x23c);
  *(undefined4 *)(param_1 + 0x47) = 0x40;
  *(undefined1 *)((long)param_1 + 0x27b) = 0;
  param_1[0x45] = puVar4 + 0x10;
  if (uVar13 != 0xffffffff) {
    local_e8[0] = 1;
    puVar2 = (uint *)(PTR_DAT_04bc39f8 + (ulong)uVar13 * 8);
    if (0xff < uVar13) {
      puVar2 = (uint *)PTR_DAT_04bc39f8;
    }
    if ((*puVar2 >> 1 & 1) != 0) {
      *(undefined4 *)(param_1 + 0x42) = 1;
    }
  }
  *(undefined4 *)((long)param_1 + 0x294) = 0;
  *(undefined4 *)((long)param_1 + 0x29c) = 0x41f00000;
  uVar8 = DAT_053d7e4c;
  puVar1 = PTR_DAT_04bb5978;
  *(undefined1 *)(param_1 + 0x58) = 0;
  *(undefined4 *)(param_1 + 0x5b) = 0;
  *(undefined4 *)(param_1 + 0x53) = uVar8;
  *(undefined1 *)(param_1 + 0x52) = 1;
  param_1[0xa7] = 0;
  param_1[0xab] = 0;
  param_1[0xac] = 0;
  param_1[0xad] = 0;
  param_1[0xec] = 0;
  param_1[0x54] = puVar1 + 0x10;
  param_1[0x5a] = param_1 + 0x59;
  param_1[0x59] = param_1 + 0x59;
  param_1[0x5f] = param_1 + 99;
  param_1[0x5c] = param_1 + 0x5f;
  param_1[99] = param_1 + 0x67;
  param_1[0x5d] = param_1 + 0x5f;
  param_1[0x67] = param_1 + 0x6b;
  *(undefined4 *)(param_1 + 0x5e) = 0x13;
  param_1[0x6b] = param_1 + 0x6f;
  param_1[0xb0] = param_1 + 0xb4;
  param_1[0x6f] = param_1 + 0x73;
  param_1[0xb4] = param_1 + 0xb8;
  param_1[0x73] = param_1 + 0x77;
  param_1[0xb8] = param_1 + 0xbc;
  param_1[0x77] = param_1 + 0x7b;
  param_1[0xbc] = param_1 + 0xc0;
  param_1[0x7b] = param_1 + 0x7f;
  param_1[0xc0] = param_1 + 0xc4;
  param_1[0x7f] = param_1 + 0x83;
  param_1[0xc4] = param_1 + 200;
  param_1[0x83] = param_1 + 0x87;
  param_1[200] = param_1 + 0xcc;
  param_1[0x87] = param_1 + 0x8b;
  param_1[0xcc] = param_1 + 0xd0;
  param_1[0x8b] = param_1 + 0x8f;
  param_1[0xd0] = param_1 + 0xd4;
  param_1[0x8f] = param_1 + 0x93;
  param_1[0xd4] = param_1 + 0xd8;
  param_1[0x93] = param_1 + 0x97;
  param_1[0xd8] = param_1 + 0xdc;
  param_1[0x97] = param_1 + 0x9b;
  param_1[0xdc] = param_1 + 0xe0;
  param_1[0x9b] = param_1 + 0x9f;
  param_1[0xe0] = param_1 + 0xe4;
  param_1[0x9f] = param_1 + 0xa3;
  param_1[0xe4] = param_1 + 0xe8;
  param_1[0xa3] = param_1 + 0xa7;
  param_1[0xe8] = param_1 + 0xec;
  param_1[0xae] = param_1 + 0xb0;
  param_1[0xaf] = param_1 + 0xb0;
  if (param_1 + 0xf0 != (undefined8 *)0x0) {
    param_1[0xad] = param_1 + 0xf0;
    param_1[0xac] = 0x1000000000;
  }
  *(undefined1 *)((long)param_1 + 0x804) = 0;
  *(undefined4 *)(param_1 + 0x100) = 0x1010001;
  puVar17 = (undefined8 *)((ulong)local_e8 | 4);
  uVar11 = *(ushort *)PTR_DAT_04bb6298;
  uVar12 = 0;
  do {
    *(undefined4 *)(puVar17 + 2) = 0;
    local_bc[0] = '\0';
    local_c0 = 0x40;
    local_78 = 0;
    uStack_74 = 0;
    local_70 = 0;
    local_6c = 0;
    local_6b = 0;
    local_6a = 0;
    *puVar17 = 0;
    puVar17[1] = 0;
    if (uVar11 == 0xffff) {
LAB_020854b0:
      uVar8 = 6;
    }
    else {
      local_64 = 1;
      puVar2 = (uint *)(PTR_DAT_04bc39f8 + ((long)(short)uVar11 & 0xffffffffU) * 8);
      if ((uVar11 & 0xff00) != 0) {
        puVar2 = (uint *)PTR_DAT_04bc39f8;
      }
      if ((*puVar2 >> 1 & 1) == 0) goto LAB_020854b0;
      uVar8 = 1;
      local_e8[0] = 1;
    }
    *(undefined4 *)((long)puVar14 + ((long)((ulong)uVar12 << 0x20) >> 0x19)) = uVar8;
    pcVar16 = (char *)puVar14[(long)(int)uVar12 * 0x10 + 4];
    *(undefined8 *)((long)puVar14 + (long)(int)uVar12 * 0x80 + 4) = 0;
    *(undefined8 *)((long)puVar14 + (long)(int)uVar12 * 0x80 + 0xc) = local_dc;
    *(undefined4 *)((long)puVar14 + (long)(int)uVar12 * 0x80 + 0x14) = local_d4;
    local_d0 = puVar4 + 0x10;
    pcStack_c8 = local_bc;
    if (pcVar16 != local_bc) {
      lVar9 = 0;
      local_7d = 0;
      do {
        if (local_bc[lVar9] == '\0') goto LAB_020853c4;
        if (local_bc[lVar9 + 1] == '\0') {
          lVar9 = lVar9 + 1;
          goto LAB_020853c4;
        }
        if (local_bc[lVar9 + 2] == '\0') {
          lVar9 = lVar9 + 2;
          goto LAB_020853c4;
        }
        lVar9 = lVar9 + 3;
      } while (lVar9 != 0x80001);
      lVar9 = 0;
LAB_020853c4:
      iVar6 = (int)lVar9;
      if (*(int *)(puVar14 + (long)(int)uVar12 * 0x10 + 5) <= (int)lVar9) {
        iVar6 = *(int *)(puVar14 + (long)(int)uVar12 * 0x10 + 5) + -1;
      }
      memcpy(pcVar16,local_bc,(long)iVar6);
      pcVar16[iVar6] = '\0';
      uVar11 = *(ushort *)PTR_DAT_04bb6298;
    }
    uVar13 = uVar12 + 1;
    *(undefined4 *)(puVar14 + (long)(int)uVar12 * 0x10 + 0xe) = local_78;
    *(undefined4 *)((long)puVar14 + (long)(int)uVar12 * 0x80 + 0x74) = uStack_74;
    *(undefined4 *)(puVar14 + (long)(int)uVar12 * 0x10 + 0xf) = local_70;
    *(undefined1 *)((long)puVar14 + (long)(int)uVar12 * 0x80 + 0x7c) = local_6c;
    *(undefined1 *)((long)puVar14 + (long)(int)uVar12 * 0x80 + 0x7d) = local_6b;
    *(undefined1 *)((long)puVar14 + (long)(int)uVar12 * 0x80 + 0x7e) = local_6a;
    uVar12 = uVar13;
  } while (uVar13 != 5);
  plVar15 = *(long **)(param_1[1] + 0x48);
  if (((*PTR_DAT_04bb37d8 & 1) == 0) && (iVar6 = __cxa_guard_acquire(PTR_DAT_04bb37d8), iVar6 != 0))
  {
    *(undefined **)PTR_DAT_04bb37d0 = PTR_DAT_04bb3750 + 0x10;
    __cxa_guard_release(PTR_DAT_04bb37d8);
  }
  if (((plVar15 != (long *)0x0) &&
      (uVar7 = (**(code **)(*plVar15 + 0x20))(plVar15,PTR_DAT_04bb37d0), (uVar7 & 1) != 0)) &&
     (*(int *)(PTR_DAT_04bc3a80 + 0x38) == -0x10e0fba8)) {
    pcVar16 = (char *)plVar15[0x7d];
    if (*pcVar16 == 's') {
      if ((pcVar16[1] != 'l') || (pcVar16[2] != 'o')) goto LAB_02085614;
      puVar10 = &LAB_02085718;
    }
    else {
      if (((*pcVar16 != 'f') || (pcVar16[1] != 'o')) || (pcVar16[2] != 'x')) goto LAB_02085614;
      puVar10 = &LAB_020856b8;
    }
    param_1[0x56] = puVar10;
    param_1[0x55] = param_1;
    param_1[0x57] = 0;
    param_1[0x54] = &PTR_LAB_04a71968;
  }
LAB_02085614:
  if (0 < *(int *)(param_1 + 0xac)) {
    lVar9 = 0;
    puVar14 = (undefined8 *)param_1[0xae];
    do {
      puVar17 = *(undefined8 **)(param_1[0xad] + lVar9 * 8);
      lVar9 = lVar9 + 1;
      *puVar17 = puVar14;
      param_1[0xae] = puVar17;
      puVar14 = puVar17;
    } while (lVar9 < *(int *)(param_1 + 0xac));
  }
  *(undefined4 *)(param_1 + 0xac) = 0;
  *(undefined1 *)((long)param_1 + 0x801) = 1;
  return;
}

