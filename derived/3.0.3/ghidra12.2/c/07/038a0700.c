
/* WARNING: Removing unreachable block (ram,0x038a1084) */
/* WARNING: Removing unreachable block (ram,0x038a0eec) */
/* WARNING: Removing unreachable block (ram,0x038a0fbc) */
/* WARNING: Removing unreachable block (ram,0x038a114c) */

void FUN_038a0700(undefined8 *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  long *plVar8;
  void *__s;
  undefined8 uVar9;
  long *plVar10;
  long lVar11;
  long *plVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  long lVar15;
  undefined **local_80;
  long *plStack_78;
  undefined1 *local_70;
  undefined8 uStack_68;
  
  param_1[0x7a] = 0;
  plVar10 = param_1 + 3;
  *plVar10 = 0;
  param_1[0x1c] = param_1 + 0x23;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[0x15] = param_1 + 0x1c;
  param_1[0xee] = 0;
  param_1[0x162] = 0;
  param_1[0xe] = param_1 + 0x15;
  *param_1 = &PTR_FUN_04b62328;
  *(undefined4 *)((long)param_1 + 0x34) = 0x10;
  *(undefined4 *)((long)param_1 + 0x3d4) = 0x10;
  puVar14 = param_1 + 7;
  *puVar14 = param_1 + 0xe;
  param_1[4] = puVar14;
  param_1[5] = puVar14;
  param_1[0x7b] = param_1 + 0x82;
  param_1[0x82] = param_1 + 0x89;
  param_1[0x89] = param_1 + 0x90;
  param_1[0x90] = param_1 + 0x97;
  param_1[0x97] = param_1 + 0x9e;
  param_1[0x9e] = param_1 + 0xa5;
  param_1[0xa5] = param_1 + 0xac;
  param_1[0xac] = param_1 + 0xb3;
  param_1[0xb3] = param_1 + 0xba;
  param_1[0xba] = param_1 + 0xc1;
  param_1[0xc1] = param_1 + 200;
  param_1[200] = param_1 + 0xcf;
  param_1[0xcf] = param_1 + 0xd6;
  param_1[0xd6] = param_1 + 0xdd;
  param_1[0xdd] = param_1 + 0xe4;
  param_1[0xef] = param_1 + 0xf6;
  param_1[0xf6] = param_1 + 0xfd;
  *(undefined4 *)((long)param_1 + 0x774) = 0x10;
  param_1[0xfd] = param_1 + 0x104;
  *(undefined4 *)((long)param_1 + 0xb14) = 0x10;
  param_1[0x104] = param_1 + 0x10b;
  param_1[0x1d6] = 0;
  param_1[0x10b] = param_1 + 0x112;
  *(undefined4 *)((long)param_1 + 0xeb4) = 0x10;
  param_1[0x112] = param_1 + 0x119;
  param_1[0x1d7] = param_1 + 0x1de;
  param_1[0x119] = param_1 + 0x120;
  param_1[0x1de] = param_1 + 0x1e5;
  param_1[0x120] = param_1 + 0x127;
  param_1[0x1e5] = param_1 + 0x1ec;
  param_1[0x127] = param_1 + 0x12e;
  param_1[0x1ec] = param_1 + 499;
  param_1[0x12e] = param_1 + 0x135;
  param_1[499] = param_1 + 0x1fa;
  param_1[0x135] = param_1 + 0x13c;
  param_1[0x13c] = param_1 + 0x143;
  param_1[0x1fa] = param_1 + 0x201;
  param_1[0x143] = param_1 + 0x14a;
  param_1[0x14a] = param_1 + 0x151;
  param_1[0x201] = param_1 + 0x208;
  param_1[0x151] = param_1 + 0x158;
  param_1[0x23] = param_1 + 0x2a;
  param_1[0x163] = param_1 + 0x16a;
  param_1[0x208] = param_1 + 0x20f;
  param_1[0x2a] = param_1 + 0x31;
  param_1[0x16a] = param_1 + 0x171;
  param_1[0x31] = param_1 + 0x38;
  param_1[0x171] = param_1 + 0x178;
  param_1[0x20f] = param_1 + 0x216;
  param_1[0x38] = param_1 + 0x3f;
  param_1[0x178] = param_1 + 0x17f;
  param_1[0x3f] = param_1 + 0x46;
  param_1[0x17f] = param_1 + 0x186;
  param_1[0x216] = param_1 + 0x21d;
  param_1[0x46] = param_1 + 0x4d;
  param_1[0x186] = param_1 + 0x18d;
  param_1[0x4d] = param_1 + 0x54;
  param_1[0x18d] = param_1 + 0x194;
  param_1[0x21d] = param_1 + 0x224;
  param_1[0x54] = param_1 + 0x5b;
  param_1[0x194] = param_1 + 0x19b;
  param_1[0x5b] = param_1 + 0x62;
  param_1[0x19b] = param_1 + 0x1a2;
  param_1[0x224] = param_1 + 0x22b;
  param_1[0x62] = param_1 + 0x69;
  param_1[0x1a2] = param_1 + 0x1a9;
  param_1[0x69] = param_1 + 0x70;
  param_1[0x1a9] = param_1 + 0x1b0;
  param_1[0x22b] = param_1 + 0x232;
  param_1[0x79] = 0;
  param_1[0x78] = param_1 + 0x7b;
  param_1[0x79] = param_1 + 0x7b;
  param_1[0x1b0] = param_1 + 0x1b7;
  param_1[0xed] = 0;
  param_1[0xec] = param_1 + 0xef;
  param_1[0xed] = param_1 + 0xef;
  param_1[0x1b7] = param_1 + 0x1be;
  param_1[0x232] = param_1 + 0x239;
  param_1[0x161] = 0;
  param_1[0x160] = param_1 + 0x163;
  param_1[0x1be] = param_1 + 0x1c5;
  param_1[0x161] = param_1 + 0x163;
  *(undefined4 *)(param_1 + 1) = 0;
  param_1[2] = 0;
  param_1[0x70] = 0;
  param_1[0x77] = 0;
  param_1[0xe4] = 0;
  param_1[0xeb] = 0;
  param_1[0x158] = 0;
  param_1[0x15f] = 0;
  param_1[0x1c5] = param_1 + 0x1cc;
  param_1[0x1cc] = 0;
  param_1[0x1d5] = 0;
  param_1[0x1d3] = 0;
  param_1[0x1d4] = param_1 + 0x1d7;
  param_1[0x239] = param_1 + 0x240;
  puVar14 = param_1 + 0x247;
  param_1[0x240] = 0;
  param_1[0x1d5] = param_1 + 0x1d7;
  puVar6 = PTR_DAT_04bd0d40;
  puVar1 = PTR_DAT_04bd0d40 + 0x10;
  param_1[0x247] = puVar1;
  param_1[0x248] = 0;
  puVar5 = PTR_DAT_04bb2698;
  param_1[0x249] = 0;
  lVar7 = *(long *)puVar5;
  param_1[0x24a] = 0;
  if (lVar7 != 0) {
    lVar7 = FUN_038cb610(lVar7,puVar14);
    param_1[0x248] = lVar7;
    if (lVar7 != 0) {
      if ((*(uint *)(lVar7 + 0xd0) & 1) == 0) {
        lVar15 = 0;
      }
      else {
        lVar15 = lVar7 + 0x90;
        nn::os::LockMutex((MutexType *)(lVar7 + 0xb0));
      }
      plVar12 = (long *)(lVar7 + 0x70);
      lVar11 = *plVar12;
      plVar8 = (long *)((long)*(int *)(lVar7 + 0x84) + (long)puVar14);
      *plVar12 = (long)plVar8;
      *plVar8 = lVar11;
      plVar8[1] = (long)plVar12;
      if (lVar11 != 0) {
        *(long **)(lVar11 + 8) = plVar8;
      }
      *(int *)(lVar7 + 0x80) = *(int *)(lVar7 + 0x80) + 1;
      if (lVar15 != 0) {
        nn::os::UnlockMutex((MutexType *)(lVar15 + 0x20));
      }
    }
  }
  param_1[0x24b] = 0;
  puVar3 = PTR_DAT_04bcbba0;
  param_1[0x24c] = 0;
  puVar4 = PTR_DAT_04bcbba8;
  lVar7 = *(long *)puVar5;
  param_1[0x24d] = puVar14;
  puVar14 = param_1 + 0x253;
  param_1[0x24e] = 0;
  puVar2 = puVar3 + 0x10;
  param_1[0x253] = puVar1;
  param_1[0x254] = 0;
  puVar1 = puVar4 + 0x10;
  param_1[0x247] = puVar2;
  param_1[0x255] = 0;
  param_1[0x256] = 0;
  param_1[0x24f] = puVar1;
  if (lVar7 != 0) {
    lVar7 = FUN_038cb610(lVar7,puVar14);
    param_1[0x254] = lVar7;
    if (lVar7 != 0) {
      if ((*(uint *)(lVar7 + 0xd0) & 1) == 0) {
        lVar15 = 0;
      }
      else {
        lVar15 = lVar7 + 0x90;
        nn::os::LockMutex((MutexType *)(lVar7 + 0xb0));
      }
      plVar12 = (long *)(lVar7 + 0x70);
      lVar11 = *plVar12;
      plVar8 = (long *)((long)*(int *)(lVar7 + 0x84) + (long)puVar14);
      *plVar12 = (long)plVar8;
      *plVar8 = lVar11;
      plVar8[1] = (long)plVar12;
      if (lVar11 != 0) {
        *(long **)(lVar11 + 8) = plVar8;
      }
      *(int *)(lVar7 + 0x80) = *(int *)(lVar7 + 0x80) + 1;
      if (lVar15 != 0) {
        nn::os::UnlockMutex((MutexType *)(lVar15 + 0x20));
      }
    }
  }
  lVar7 = *(long *)puVar5;
  param_1[0x259] = puVar14;
  puVar14 = param_1 + 0x25f;
  param_1[0x253] = puVar2;
  param_1[599] = 0;
  param_1[600] = 0;
  param_1[0x25a] = 0;
  param_1[0x25b] = puVar1;
  param_1[0x25f] = puVar6 + 0x10;
  param_1[0x260] = 0;
  param_1[0x261] = 0;
  param_1[0x262] = 0;
  if (lVar7 != 0) {
    lVar7 = FUN_038cb610(lVar7,puVar14);
    param_1[0x260] = lVar7;
    if (lVar7 != 0) {
      if ((*(uint *)(lVar7 + 0xd0) & 1) == 0) {
        lVar15 = 0;
      }
      else {
        lVar15 = lVar7 + 0x90;
        nn::os::LockMutex((MutexType *)(lVar7 + 0xb0));
      }
      plVar12 = (long *)(lVar7 + 0x70);
      lVar11 = *plVar12;
      plVar8 = (long *)((long)*(int *)(lVar7 + 0x84) + (long)puVar14);
      *plVar12 = (long)plVar8;
      *plVar8 = lVar11;
      plVar8[1] = (long)plVar12;
      if (lVar11 != 0) {
        *(long **)(lVar11 + 8) = plVar8;
      }
      *(int *)(lVar7 + 0x80) = *(int *)(lVar7 + 0x80) + 1;
      if (lVar15 != 0) {
        nn::os::UnlockMutex((MutexType *)(lVar15 + 0x20));
      }
    }
  }
  lVar7 = *(long *)puVar5;
  puVar3 = puVar3 + 0x10;
  param_1[0x265] = puVar14;
  puVar4 = puVar4 + 0x10;
  puVar14 = param_1 + 0x26b;
  param_1[0x263] = 0;
  param_1[0x25f] = puVar3;
  param_1[0x264] = 0;
  param_1[0x266] = 0;
  param_1[0x267] = puVar4;
  param_1[0x26b] = puVar6 + 0x10;
  param_1[0x26c] = 0;
  param_1[0x26d] = 0;
  param_1[0x26e] = 0;
  if (lVar7 != 0) {
    lVar7 = FUN_038cb610(lVar7,puVar14);
    param_1[0x26c] = lVar7;
    if (lVar7 != 0) {
      if ((*(uint *)(lVar7 + 0xd0) & 1) == 0) {
        lVar15 = 0;
      }
      else {
        lVar15 = lVar7 + 0x90;
        nn::os::LockMutex((MutexType *)(lVar7 + 0xb0));
      }
      plVar12 = (long *)(lVar7 + 0x70);
      lVar11 = *plVar12;
      plVar8 = (long *)((long)*(int *)(lVar7 + 0x84) + (long)puVar14);
      *plVar12 = (long)plVar8;
      *plVar8 = lVar11;
      plVar8[1] = (long)plVar12;
      if (lVar11 != 0) {
        *(long **)(lVar11 + 8) = plVar8;
      }
      *(int *)(lVar7 + 0x80) = *(int *)(lVar7 + 0x80) + 1;
      if (lVar15 != 0) {
        nn::os::UnlockMutex((MutexType *)(lVar15 + 0x20));
      }
    }
  }
  param_1[0x271] = puVar14;
  lVar7 = *(long *)puVar5;
  puVar14 = param_1 + 0x24b;
  param_1[0x26b] = puVar3;
  param_1[0x26f] = 0;
  param_1[0x270] = 0;
  param_1[0x272] = 0;
  param_1[0x273] = puVar4;
  *(undefined2 *)(param_1 + 0x277) = 0;
  if (lVar7 == 0) {
    __s = malloc(400);
joined_r0x038a126c:
    if (__s != (void *)0x0) {
      *(undefined4 *)((long)__s + 0x140) = 0;
      uVar9 = nn::os::GetSystemTick();
      *(undefined8 *)((long)__s + 0x148) = uVar9;
      memset(__s,0,0x144);
      *(undefined8 *)((long)__s + 0x160) = 0;
      *(undefined8 *)((long)__s + 0x168) = 0;
      *(undefined8 *)((long)__s + 0x180) = 0;
      *(undefined4 *)((long)__s + 0x188) = 0;
      *(undefined8 *)((long)__s + 0x150) = 0xffffffffffffffff;
      *(undefined8 *)((long)__s + 0x158) = 0;
      *(undefined8 *)((long)__s + 0x170) = 0;
      *(undefined8 *)((long)__s + 0x178) = 0;
      *(undefined4 *)(param_1 + 1) = 1;
      param_1[2] = __s;
    }
  }
  else {
    lVar15 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    plVar8 = (long *)(lVar7 + 8);
    if (lVar15 != 0) {
      plVar8 = (long *)(lVar15 + 0xa8);
    }
    plVar8 = (long *)*plVar8;
    if (plVar8 != (long *)0x0) {
      __s = (void *)(**(code **)(*plVar8 + 0x30))(plVar8,400,8);
      goto joined_r0x038a126c;
    }
  }
  param_1[0x250] = param_1;
  param_1[0x251] = &LAB_038a1280;
  param_1[0x25d] = &LAB_038a1690;
  param_1[0x24f] = &PTR_LAB_04b623c8;
  param_1[0x252] = 0;
  param_1[0x25b] = &PTR_LAB_04b623c8;
  param_1[0x25c] = param_1;
  param_1[0x25e] = 0;
  param_1[0x267] = &PTR_LAB_04b623c8;
  param_1[0x268] = param_1;
  param_1[0x269] = &LAB_038a1a20;
  lVar7 = *(long *)PTR_DAT_04bcb7d8;
  param_1[0x26a] = 0;
  param_1[0x273] = &PTR_LAB_04b623c8;
  param_1[0x274] = param_1;
  param_1[0x275] = &LAB_038a1aa0;
  param_1[0x276] = 0;
  lVar7 = *(long *)(lVar7 + 8);
  puVar13 = (undefined8 *)param_1[0x24c];
  lVar11 = param_1[0x24b];
  lVar15 = param_1[0x24e];
  if (puVar13 == (undefined8 *)0x0 && lVar11 == 0) {
LAB_038a0ea4:
    if (lVar15 != 0) {
      param_1[0x24e] = 0;
      puVar13 = (undefined8 *)param_1[0x24c];
      if (param_1[0x24b] != 0) {
        *(undefined8 **)(param_1[0x24b] + 8) = puVar13;
        puVar13 = (undefined8 *)param_1[0x24c];
      }
      if (puVar13 != (undefined8 *)0x0) {
        *puVar13 = *puVar14;
      }
      *puVar14 = 0;
      param_1[0x24c] = 0;
      *(int *)(lVar15 + 0x10) = *(int *)(lVar15 + 0x10) + -1;
    }
  }
  else if (lVar15 != 0) {
    param_1[0x24e] = 0;
    if (lVar11 != 0) {
      *(undefined8 **)(lVar11 + 8) = puVar13;
      puVar13 = (undefined8 *)param_1[0x24c];
    }
    if (puVar13 != (undefined8 *)0x0) {
      *puVar13 = *puVar14;
    }
    *puVar14 = 0;
    param_1[0x24c] = 0;
    *(int *)(lVar15 + 0x10) = *(int *)(lVar15 + 0x10) + -1;
    lVar15 = param_1[0x24e];
    goto LAB_038a0ea4;
  }
  puVar13 = param_1 + 599;
  param_1[0x24e] = lVar7 + 0x170;
  lVar15 = *(long *)(lVar7 + 0x170);
  *(undefined8 **)(lVar7 + 0x170) = puVar14;
  param_1[0x24c] = lVar7 + 0x170;
  param_1[0x24b] = lVar15;
  if (lVar15 != 0) {
    *(undefined8 **)(lVar15 + 8) = puVar14;
  }
  *(int *)(lVar7 + 0x180) = *(int *)(lVar7 + 0x180) + 1;
  puVar14 = (undefined8 *)param_1[600];
  lVar15 = param_1[599];
  if (puVar14 == (undefined8 *)0x0 && lVar15 == 0) {
LAB_038a0f70:
    lVar15 = param_1[0x25a];
    if (lVar15 != 0) {
      param_1[0x25a] = 0;
      puVar14 = (undefined8 *)param_1[600];
      if (param_1[599] != 0) {
        *(undefined8 **)(param_1[599] + 8) = puVar14;
        puVar14 = (undefined8 *)param_1[600];
      }
      if (puVar14 != (undefined8 *)0x0) {
        *puVar14 = *puVar13;
      }
      *puVar13 = 0;
      param_1[600] = 0;
      *(int *)(lVar15 + 0x10) = *(int *)(lVar15 + 0x10) + -1;
    }
  }
  else {
    lVar11 = param_1[0x25a];
    if (lVar11 != 0) {
      param_1[0x25a] = 0;
      if (lVar15 != 0) {
        *(undefined8 **)(lVar15 + 8) = puVar14;
        puVar14 = (undefined8 *)param_1[600];
      }
      if (puVar14 != (undefined8 *)0x0) {
        *puVar14 = *puVar13;
      }
      *puVar13 = 0;
      param_1[600] = 0;
      *(int *)(lVar11 + 0x10) = *(int *)(lVar11 + 0x10) + -1;
      goto LAB_038a0f70;
    }
  }
  puVar14 = param_1 + 0x263;
  param_1[0x25a] = lVar7 + 0x1f0;
  lVar15 = *(long *)(lVar7 + 0x1f0);
  *(undefined8 **)(lVar7 + 0x1f0) = puVar13;
  param_1[600] = lVar7 + 0x1f0;
  param_1[599] = lVar15;
  if (lVar15 != 0) {
    *(undefined8 **)(lVar15 + 8) = puVar13;
  }
  *(int *)(lVar7 + 0x200) = *(int *)(lVar7 + 0x200) + 1;
  puVar13 = (undefined8 *)param_1[0x264];
  lVar15 = param_1[0x263];
  if (puVar13 == (undefined8 *)0x0 && lVar15 == 0) {
LAB_038a103c:
    lVar15 = param_1[0x266];
    if (lVar15 != 0) {
      param_1[0x266] = 0;
      puVar13 = (undefined8 *)param_1[0x264];
      if (param_1[0x263] != 0) {
        *(undefined8 **)(param_1[0x263] + 8) = puVar13;
        puVar13 = (undefined8 *)param_1[0x264];
      }
      if (puVar13 != (undefined8 *)0x0) {
        *puVar13 = *puVar14;
      }
      *puVar14 = 0;
      param_1[0x264] = 0;
      *(int *)(lVar15 + 0x10) = *(int *)(lVar15 + 0x10) + -1;
    }
  }
  else {
    lVar11 = param_1[0x266];
    if (lVar11 != 0) {
      param_1[0x266] = 0;
      if (lVar15 != 0) {
        *(undefined8 **)(lVar15 + 8) = puVar13;
        puVar13 = (undefined8 *)param_1[0x264];
      }
      if (puVar13 != (undefined8 *)0x0) {
        *puVar13 = *puVar14;
      }
      *puVar14 = 0;
      param_1[0x264] = 0;
      *(int *)(lVar11 + 0x10) = *(int *)(lVar11 + 0x10) + -1;
      goto LAB_038a103c;
    }
  }
  puVar13 = param_1 + 0x26f;
  param_1[0x266] = lVar7 + 0x1b0;
  lVar15 = *(long *)(lVar7 + 0x1b0);
  *(undefined8 **)(lVar7 + 0x1b0) = puVar14;
  param_1[0x264] = lVar7 + 0x1b0;
  param_1[0x263] = lVar15;
  if (lVar15 != 0) {
    *(undefined8 **)(lVar15 + 8) = puVar14;
  }
  *(int *)(lVar7 + 0x1c0) = *(int *)(lVar7 + 0x1c0) + 1;
  puVar14 = (undefined8 *)param_1[0x270];
  lVar15 = param_1[0x26f];
  if (puVar14 != (undefined8 *)0x0 || lVar15 != 0) {
    lVar11 = param_1[0x272];
    if (lVar11 == 0) goto LAB_038a1140;
    param_1[0x272] = 0;
    if (lVar15 != 0) {
      *(undefined8 **)(lVar15 + 8) = puVar14;
      puVar14 = (undefined8 *)param_1[0x270];
    }
    if (puVar14 != (undefined8 *)0x0) {
      *puVar14 = *puVar13;
    }
    *puVar13 = 0;
    param_1[0x270] = 0;
    *(int *)(lVar11 + 0x10) = *(int *)(lVar11 + 0x10) + -1;
  }
  lVar15 = param_1[0x272];
  if (lVar15 != 0) {
    param_1[0x272] = 0;
    puVar14 = (undefined8 *)param_1[0x270];
    if (param_1[0x26f] != 0) {
      *(undefined8 **)(param_1[0x26f] + 8) = puVar14;
      puVar14 = (undefined8 *)param_1[0x270];
    }
    if (puVar14 != (undefined8 *)0x0) {
      *puVar14 = *puVar13;
    }
    *puVar13 = 0;
    param_1[0x270] = 0;
    *(int *)(lVar15 + 0x10) = *(int *)(lVar15 + 0x10) + -1;
  }
LAB_038a1140:
  param_1[0x272] = lVar7 + 0x1d0;
  lVar15 = *(long *)(lVar7 + 0x1d0);
  *(undefined8 **)(lVar7 + 0x1d0) = puVar13;
  param_1[0x270] = lVar7 + 0x1d0;
  param_1[0x26f] = lVar15;
  if (lVar15 != 0) {
    *(undefined8 **)(lVar15 + 8) = puVar13;
  }
  local_80 = &PTR_LAB_04b623f0;
  *(int *)(lVar7 + 0x1e0) = *(int *)(lVar7 + 0x1e0) + 1;
  local_70 = &LAB_038a38c4;
  uStack_68 = 0;
  if (*plVar10 != 0) {
    plStack_78 = plVar10;
    FUN_038a38e0(*plVar10,&local_80);
  }
  *(undefined4 *)(param_1 + 6) = 0;
  param_1[3] = 0;
  local_70 = &LAB_038a38c4;
  uStack_68 = 0;
  local_80 = &PTR_LAB_04b623f0;
  if (param_1[0x77] != 0) {
    plStack_78 = param_1 + 0x77;
    FUN_038a38e0(param_1[0x77],&local_80);
  }
  *(undefined4 *)(param_1 + 0x7a) = 0;
  param_1[0x77] = 0;
  local_70 = &LAB_038a38c4;
  uStack_68 = 0;
  local_80 = &PTR_LAB_04b623f0;
  if (param_1[0xeb] != 0) {
    plStack_78 = param_1 + 0xeb;
    FUN_038a38e0(param_1[0xeb],&local_80);
  }
  *(undefined4 *)(param_1 + 0xee) = 0;
  param_1[0xeb] = 0;
  local_70 = &LAB_038a38c4;
  uStack_68 = 0;
  local_80 = &PTR_LAB_04b623f0;
  if (param_1[0x15f] != 0) {
    plStack_78 = param_1 + 0x15f;
    FUN_038a38e0(param_1[0x15f],&local_80);
  }
  *(undefined4 *)(param_1 + 0x162) = 0;
  param_1[0x15f] = 0;
  local_70 = &LAB_038a38c4;
  uStack_68 = 0;
  local_80 = &PTR_LAB_04b623f0;
  if (param_1[0x1d3] != 0) {
    plStack_78 = param_1 + 0x1d3;
    FUN_038a38e0(param_1[0x1d3],&local_80);
  }
  *(undefined4 *)(param_1 + 0x1d6) = 0;
  param_1[0x1d3] = 0;
  *(undefined2 *)(param_1 + 0x277) = 0;
  return;
}

