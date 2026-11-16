
/* WARNING: Heritage AFTER dead removal. Example location: s0xffffffffffffe7bc : 0x028811c0 */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_02880620(short *param_1,undefined8 param_2,long *param_3)

{
  short *psVar1;
  int *piVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  int *piVar9;
  short *psVar10;
  uint uVar11;
  long lVar12;
  undefined *puVar13;
  bool bVar14;
  bool bVar15;
  uint uVar16;
  int iVar17;
  uint uVar18;
  uint uVar19;
  ulong uVar20;
  void *pvVar21;
  long lVar22;
  uint *puVar23;
  undefined8 *puVar24;
  int iVar25;
  long lVar26;
  undefined8 *puVar27;
  long *plVar28;
  short *psVar29;
  int iVar30;
  undefined **local_1fc8;
  undefined **appuStack_1fc0 [234];
  uint local_186c;
  uint local_1868;
  uint local_1864;
  int local_1860;
  undefined8 local_1858;
  undefined2 local_1850;
  undefined4 local_1844;
  undefined *local_1840;
  undefined1 auStack_1838 [1876];
  uint local_10e4;
  uint local_10e0;
  uint local_10dc;
  int local_10d8;
  undefined4 local_10d0;
  undefined4 local_10cc;
  uint local_10c8;
  uint local_10c4;
  uint local_10c0;
  int local_10bc;
  undefined4 local_10b8 [64];
  undefined *local_fb8;
  undefined4 local_fb0;
  undefined4 local_fac;
  uint *local_fa8;
  uint local_85c;
  uint local_858;
  uint local_854;
  int local_850;
  undefined8 local_848;
  undefined **local_840;
  undefined4 local_838;
  undefined1 local_834 [31];
  undefined1 local_815;
  uint local_ec;
  uint local_e8;
  uint local_e4;
  int local_e0;
  uint local_d4;
  uint local_d0 [4];
  undefined8 local_c0;
  undefined4 local_b8;
  undefined4 uStack_b4;
  uint *local_b0;
  uint local_a4;
  undefined8 local_a0;
  undefined8 local_98;
  undefined4 local_90;
  undefined1 local_8c [31];
  undefined1 local_6d;
  
  lVar26 = *(long *)PTR_DAT_04bb46b0;
  if (lVar26 == 0) {
LAB_028806cc:
    bVar15 = false;
    bVar14 = false;
  }
  else {
    puVar27 = *(undefined8 **)(lVar26 + 0x10);
    if ((*(byte *)(lVar26 + 0x453) & 1) == 0) {
      lVar26 = (**(code **)(*(long *)*puVar27 + 0x38))();
      if (lVar26 == 0) goto LAB_028806cc;
      lVar26 = lVar26 + 0x70;
    }
    else if (((puVar27 == (undefined8 *)0x0) || ((long *)puVar27[0x26] == (long *)0x0)) ||
            (lVar26 = (**(code **)(*(long *)puVar27[0x26] + 0x38))(), lVar26 == 0))
    goto LAB_028806cc;
    if ((*(long **)(lVar26 + 0xe7610) == (long *)0x0) ||
       (puVar27 = (undefined8 *)**(long **)(lVar26 + 0xe7610), puVar27 == (undefined8 *)0x0)) {
      uVar20 = 0;
    }
    else {
      uVar20 = (**(code **)*puVar27)();
      uVar20 = uVar20 & 0xffffffff;
    }
    puVar3 = PTR_DAT_04bb2020;
    local_1fc8 = (undefined **)(PTR_DAT_04bb2020 + 0x10);
    appuStack_1fc0[0] = (undefined **)0x40829fb;
    iVar17 = FUN_0273ec70(*(long *)(lVar26 + 0xe75f8) + *(long *)(lVar26 + 0xe75f0),&local_1fc8);
    plVar28 = *(long **)(lVar26 + 0xe7610);
    bVar14 = iVar17 != 0;
    if ((uVar20 & 1) == 0) {
LAB_02880e84:
      if (plVar28 == (long *)0x0) goto LAB_02880ea4;
LAB_02880e88:
      if ((undefined8 *)*plVar28 == (undefined8 *)0x0) goto LAB_02880ea4;
      uVar20 = (*(code *)**(undefined8 **)*plVar28)();
      uVar20 = uVar20 & 0xffffffff;
    }
    else {
      if (plVar28 != (long *)0x0) {
        if ((undefined8 *)plVar28[1] != (undefined8 *)0x0) {
          (*(code *)**(undefined8 **)plVar28[1])();
          plVar28 = *(long **)(lVar26 + 0xe7610);
          goto LAB_02880e84;
        }
        goto LAB_02880e88;
      }
LAB_02880ea4:
      uVar20 = 0;
    }
    local_1fc8 = (undefined **)(puVar3 + 0x10);
    appuStack_1fc0[0] = (undefined **)0x40b0938;
    iVar17 = FUN_0273ec70(*(long *)(lVar26 + 0xe75f8) + *(long *)(lVar26 + 0xe75f0),&local_1fc8);
    bVar15 = iVar17 != 0;
    if ((((uVar20 & 1) != 0) && (*(long *)(lVar26 + 0xe7610) != 0)) &&
       (puVar27 = *(undefined8 **)(*(long *)(lVar26 + 0xe7610) + 8), puVar27 != (undefined8 *)0x0))
    {
      (**(code **)*puVar27)();
    }
  }
  puVar3 = PTR_DAT_04bbfe60;
  local_1840 = PTR_DAT_04bbfe60 + 0x10;
  memset(auStack_1838,0,0x754);
  uVar16 = nn::os::GetSystemTick();
  local_10e4 = (uVar16 ^ uVar16 >> 0x1e) * 0x6c078965 + 1;
  local_10e0 = (local_10e4 ^ local_10e4 >> 0x1e) * 0x6c078965 + 2;
  local_10dc = (local_10e0 ^ local_10e0 >> 0x1e) * 0x6c078965 + 3;
  local_10d8 = (local_10dc ^ local_10dc >> 0x1e) * 0x6c078965 + 4;
  pvVar21 = (void *)(**(code **)(local_1840 + 0x18))(&local_1840);
  memset(pvVar21,0,0x754);
  pvVar21 = (void *)(**(code **)(local_1840 + 0x18))(&local_1840);
  memset(pvVar21,0,0x754);
  if ((bVar15) || (!bVar14)) {
    if (!bVar15) {
      local_848 = (undefined **)CONCAT44(local_848._4_4_,0x137);
      appuStack_1fc0[0] = (undefined **)&local_848;
      local_1fc8 = &PTR_FUN_049ff4e8;
      FUN_008a1ba0(&local_1840,&local_1fc8);
      goto LAB_0288116c;
    }
    iVar17 = FUN_016c8e48();
    local_1fc8 = (undefined **)CONCAT44(local_1fc8._4_4_,iVar17);
    if (iVar17 == 2) {
      local_fb8 = (undefined *)CONCAT44(local_fb8._4_4_,0x13a);
      uVar20 = FUN_016c905c(0x13a);
      if ((uVar20 & 1) == 0) goto LAB_0288116c;
      local_1fc8 = (undefined **)(puVar3 + 0x10);
      memset(appuStack_1fc0,0,0x754);
      uVar16 = nn::os::GetSystemTick();
      local_186c = (uVar16 ^ uVar16 >> 0x1e) * 0x6c078965 + 1;
      local_1868 = (local_186c ^ local_186c >> 0x1e) * 0x6c078965 + 2;
      local_1864 = (local_1868 ^ local_1868 >> 0x1e) * 0x6c078965 + 3;
      local_1860 = (local_1864 ^ local_1864 >> 0x1e) * 0x6c078965 + 4;
      pvVar21 = (void *)(*(code *)local_1fc8[3])(&local_1fc8);
      memset(pvVar21,0,0x754);
      local_848 = &PTR_FUN_049ff4e8;
      local_840 = &local_fb8;
      FUN_008a1ba0(&local_1fc8,&local_848);
      pvVar21 = (void *)(**(code **)(local_1840 + 0x18))(&local_1840);
      lVar22 = (*(code *)local_1fc8[4])(&local_1fc8);
      for (lVar26 = 0;
          *(uint *)(local_834 + lVar26 + -0x14) =
               *(uint *)(lVar22 + lVar26) | *(uint *)((long)pvVar21 + lVar26), lVar26 != 0x750;
          lVar26 = lVar26 + 8) {
        *(uint *)(local_834 + lVar26 + -0x10) =
             *(uint *)(lVar22 + lVar26 + 4) | *(uint *)((long)pvVar21 + lVar26 + 4);
      }
    }
    else if (iVar17 == 1) {
      local_fb8 = (undefined *)CONCAT44(local_fb8._4_4_,0x139);
      uVar20 = FUN_016c905c(0x139);
      if ((uVar20 & 1) == 0) goto LAB_0288116c;
      local_1fc8 = (undefined **)(puVar3 + 0x10);
      memset(appuStack_1fc0,0,0x754);
      uVar16 = nn::os::GetSystemTick();
      local_186c = (uVar16 ^ uVar16 >> 0x1e) * 0x6c078965 + 1;
      local_1868 = (local_186c ^ local_186c >> 0x1e) * 0x6c078965 + 2;
      local_1864 = (local_1868 ^ local_1868 >> 0x1e) * 0x6c078965 + 3;
      local_1860 = (local_1864 ^ local_1864 >> 0x1e) * 0x6c078965 + 4;
      pvVar21 = (void *)(*(code *)local_1fc8[3])(&local_1fc8);
      memset(pvVar21,0,0x754);
      local_848 = &PTR_FUN_049ff4e8;
      local_840 = &local_fb8;
      FUN_008a1ba0(&local_1fc8,&local_848);
      pvVar21 = (void *)(**(code **)(local_1840 + 0x18))(&local_1840);
      lVar22 = (*(code *)local_1fc8[4])(&local_1fc8);
      for (lVar26 = 0;
          *(uint *)(local_834 + lVar26 + -0x14) =
               *(uint *)(lVar22 + lVar26) | *(uint *)((long)pvVar21 + lVar26), lVar26 != 0x750;
          lVar26 = lVar26 + 8) {
        *(uint *)(local_834 + lVar26 + -0x10) =
             *(uint *)(lVar22 + lVar26 + 4) | *(uint *)((long)pvVar21 + lVar26 + 4);
      }
    }
    else {
      if (iVar17 != 0) goto LAB_0288116c;
      local_fb8 = (undefined *)CONCAT44(local_fb8._4_4_,0x138);
      uVar20 = FUN_016c905c(0x138);
      if ((uVar20 & 1) == 0) goto LAB_0288116c;
      local_1fc8 = (undefined **)(puVar3 + 0x10);
      memset(appuStack_1fc0,0,0x754);
      uVar16 = nn::os::GetSystemTick();
      local_186c = (uVar16 ^ uVar16 >> 0x1e) * 0x6c078965 + 1;
      local_1868 = (local_186c ^ local_186c >> 0x1e) * 0x6c078965 + 2;
      local_1864 = (local_1868 ^ local_1868 >> 0x1e) * 0x6c078965 + 3;
      local_1860 = (local_1864 ^ local_1864 >> 0x1e) * 0x6c078965 + 4;
      pvVar21 = (void *)(*(code *)local_1fc8[3])(&local_1fc8);
      memset(pvVar21,0,0x754);
      local_848 = &PTR_FUN_049ff4e8;
      local_840 = &local_fb8;
      FUN_008a1ba0(&local_1fc8,&local_848);
      pvVar21 = (void *)(**(code **)(local_1840 + 0x18))(&local_1840);
      lVar22 = (*(code *)local_1fc8[4])(&local_1fc8);
      for (lVar26 = 0;
          *(uint *)(local_834 + lVar26 + -0x14) =
               *(uint *)(lVar22 + lVar26) | *(uint *)((long)pvVar21 + lVar26), lVar26 != 0x750;
          lVar26 = lVar26 + 8) {
        *(uint *)(local_834 + lVar26 + -0x10) =
             *(uint *)(lVar22 + lVar26 + 4) | *(uint *)((long)pvVar21 + lVar26 + 4);
      }
    }
  }
  else {
    local_fb8 = (undefined *)CONCAT44(local_fb8._4_4_,0x137);
    uVar20 = FUN_016c905c(0x137);
    if ((uVar20 & 1) != 0) {
      local_1fc8 = (undefined **)(puVar3 + 0x10);
      memset(appuStack_1fc0,0,0x754);
      uVar16 = nn::os::GetSystemTick();
      local_186c = (uVar16 ^ uVar16 >> 0x1e) * 0x6c078965 + 1;
      local_1868 = (local_186c ^ local_186c >> 0x1e) * 0x6c078965 + 2;
      local_1864 = (local_1868 ^ local_1868 >> 0x1e) * 0x6c078965 + 3;
      local_1860 = (local_1864 ^ local_1864 >> 0x1e) * 0x6c078965 + 4;
      pvVar21 = (void *)(*(code *)local_1fc8[3])(&local_1fc8);
      memset(pvVar21,0,0x754);
      local_848 = &PTR_FUN_049ff4e8;
      local_840 = &local_fb8;
      FUN_008a1ba0(&local_1fc8,&local_848);
      pvVar21 = (void *)(**(code **)(local_1840 + 0x18))(&local_1840);
      lVar22 = (*(code *)local_1fc8[4])(&local_1fc8);
      for (lVar26 = 0;
          *(uint *)(local_834 + lVar26 + -0x14) =
               *(uint *)(lVar22 + lVar26) | *(uint *)((long)pvVar21 + lVar26), lVar26 != 0x750;
          lVar26 = lVar26 + 8) {
        *(uint *)(local_834 + lVar26 + -0x10) =
             *(uint *)(lVar22 + lVar26 + 4) | *(uint *)((long)pvVar21 + lVar26 + 4);
      }
      memcpy(pvVar21,&local_848,0x754);
      *(uint *)((long)pvVar21 + 0x750) = *(uint *)((long)pvVar21 + 0x750) & 0xffffff;
    }
    local_fb8 = (undefined *)CONCAT44(local_fb8._4_4_,0x138);
    uVar20 = FUN_016c905c(0x138);
    if ((uVar20 & 1) != 0) {
      local_1fc8 = (undefined **)(puVar3 + 0x10);
      memset(appuStack_1fc0,0,0x754);
      uVar16 = nn::os::GetSystemTick();
      local_186c = (uVar16 ^ uVar16 >> 0x1e) * 0x6c078965 + 1;
      local_1868 = (local_186c ^ local_186c >> 0x1e) * 0x6c078965 + 2;
      local_1864 = (local_1868 ^ local_1868 >> 0x1e) * 0x6c078965 + 3;
      local_1860 = (local_1864 ^ local_1864 >> 0x1e) * 0x6c078965 + 4;
      pvVar21 = (void *)(*(code *)local_1fc8[3])(&local_1fc8);
      memset(pvVar21,0,0x754);
      local_848 = &PTR_FUN_049ff4e8;
      local_840 = &local_fb8;
      FUN_008a1ba0(&local_1fc8,&local_848);
      pvVar21 = (void *)(**(code **)(local_1840 + 0x18))(&local_1840);
      lVar22 = (*(code *)local_1fc8[4])(&local_1fc8);
      for (lVar26 = 0;
          *(uint *)(local_834 + lVar26 + -0x14) =
               *(uint *)(lVar22 + lVar26) | *(uint *)((long)pvVar21 + lVar26), lVar26 != 0x750;
          lVar26 = lVar26 + 8) {
        *(uint *)(local_834 + lVar26 + -0x10) =
             *(uint *)(lVar22 + lVar26 + 4) | *(uint *)((long)pvVar21 + lVar26 + 4);
      }
      memcpy(pvVar21,&local_848,0x754);
      *(uint *)((long)pvVar21 + 0x750) = *(uint *)((long)pvVar21 + 0x750) & 0xffffff;
    }
    local_fb8 = (undefined *)CONCAT44(local_fb8._4_4_,0x139);
    uVar20 = FUN_016c905c(0x139);
    if ((uVar20 & 1) != 0) {
      local_1fc8 = (undefined **)(puVar3 + 0x10);
      memset(appuStack_1fc0,0,0x754);
      uVar16 = nn::os::GetSystemTick();
      local_186c = (uVar16 ^ uVar16 >> 0x1e) * 0x6c078965 + 1;
      local_1868 = (local_186c ^ local_186c >> 0x1e) * 0x6c078965 + 2;
      local_1864 = (local_1868 ^ local_1868 >> 0x1e) * 0x6c078965 + 3;
      local_1860 = (local_1864 ^ local_1864 >> 0x1e) * 0x6c078965 + 4;
      pvVar21 = (void *)(*(code *)local_1fc8[3])(&local_1fc8);
      memset(pvVar21,0,0x754);
      local_848 = &PTR_FUN_049ff4e8;
      local_840 = &local_fb8;
      FUN_008a1ba0(&local_1fc8,&local_848);
      pvVar21 = (void *)(**(code **)(local_1840 + 0x18))(&local_1840);
      lVar22 = (*(code *)local_1fc8[4])(&local_1fc8);
      for (lVar26 = 0;
          *(uint *)(local_834 + lVar26 + -0x14) =
               *(uint *)(lVar22 + lVar26) | *(uint *)((long)pvVar21 + lVar26), lVar26 != 0x750;
          lVar26 = lVar26 + 8) {
        *(uint *)(local_834 + lVar26 + -0x10) =
             *(uint *)(lVar22 + lVar26 + 4) | *(uint *)((long)pvVar21 + lVar26 + 4);
      }
      memcpy(pvVar21,&local_848,0x754);
      *(uint *)((long)pvVar21 + 0x750) = *(uint *)((long)pvVar21 + 0x750) & 0xffffff;
    }
    local_fb8 = (undefined *)CONCAT44(local_fb8._4_4_,0x13a);
    uVar20 = FUN_016c905c(0x13a);
    if ((uVar20 & 1) == 0) goto LAB_0288116c;
    local_1fc8 = (undefined **)(puVar3 + 0x10);
    memset(appuStack_1fc0,0,0x754);
    uVar16 = nn::os::GetSystemTick();
    local_186c = (uVar16 ^ uVar16 >> 0x1e) * 0x6c078965 + 1;
    local_1868 = (local_186c ^ local_186c >> 0x1e) * 0x6c078965 + 2;
    local_1864 = (local_1868 ^ local_1868 >> 0x1e) * 0x6c078965 + 3;
    local_1860 = (local_1864 ^ local_1864 >> 0x1e) * 0x6c078965 + 4;
    pvVar21 = (void *)(*(code *)local_1fc8[3])(&local_1fc8);
    memset(pvVar21,0,0x754);
    local_848 = &PTR_FUN_049ff4e8;
    local_840 = &local_fb8;
    FUN_008a1ba0(&local_1fc8,&local_848);
    pvVar21 = (void *)(**(code **)(local_1840 + 0x18))(&local_1840);
    lVar22 = (*(code *)local_1fc8[4])(&local_1fc8);
    for (lVar26 = 0;
        *(uint *)(local_834 + lVar26 + -0x14) =
             *(uint *)(lVar22 + lVar26) | *(uint *)((long)pvVar21 + lVar26), lVar26 != 0x750;
        lVar26 = lVar26 + 8) {
      *(uint *)(local_834 + lVar26 + -0x10) =
           *(uint *)(lVar22 + lVar26 + 4) | *(uint *)((long)pvVar21 + lVar26 + 4);
    }
  }
  memcpy(pvVar21,&local_848,0x754);
  *(uint *)((long)pvVar21 + 0x750) = *(uint *)((long)pvVar21 + 0x750) & 0xffffff;
LAB_0288116c:
  local_1844 = 0xffffffff;
  local_848._0_4_ = 3;
  local_848._0_4_ = 4;
  local_848._0_4_ = 5;
  local_848._0_4_ = 8;
  local_848._0_4_ = 0x15;
  local_848._0_4_ = 0x16;
  local_848._0_4_ = 0x17;
  local_848._0_4_ = 0x18;
  local_848._0_4_ = 0x19;
  local_848 = (undefined **)CONCAT44(local_848._4_4_,0x1a);
  local_1844 = 0;
  uVar16 = 0;
  appuStack_1fc0[0] = (undefined **)&local_1844;
  local_1fc8 = &PTR_FUN_049ff420;
  do {
    (**(code **)(local_1840 + 0x10))(&local_848,&local_1840,uVar16);
    lVar26 = (**(code **)(local_1840 + 0x20))(&local_1840);
    puVar6 = PTR_DAT_04bb43c0;
    uVar19 = 1 << (ulong)(uVar16 & 0x1f);
    if ((*(uint *)(lVar26 + (ulong)(uVar16 >> 5) * 4) & uVar19) != 0) {
      lVar26 = *(long *)PTR_DAT_04bb43c0;
      uVar18 = FUN_0277d6c4(&local_848);
      if (*(long *)puVar6 != 0) {
        lVar26 = *(long *)(lVar26 + 0x57e58);
        uVar18 = (uVar18 & 0xffff) - (uint)*(ushort *)(lVar26 + 0x1f8);
        if (((uVar18 < *(uint *)(lVar26 + 0x1d8)) &&
            (*(long *)(*(long *)(lVar26 + 0x1e0) + (long)(int)uVar18 * 8) != 0)) &&
           (uVar20 = (*(code *)*local_1fc8)(&local_1fc8,&local_848), (uVar20 & 1) != 0))
        goto LAB_02881530;
      }
      lVar26 = (**(code **)(local_1840 + 0x18))(&local_1840);
      lVar22 = (ulong)(uVar16 >> 5) * 4;
      *(uint *)(lVar26 + lVar22) = *(uint *)(lVar26 + lVar22) & (uVar19 ^ 0xffffffff);
    }
LAB_02881530:
    uVar16 = uVar16 + 1;
  } while (uVar16 != 15000);
  uVar16 = 0;
  local_fb8 = (undefined *)((ulong)local_fb8 & 0xffffffff00000000);
  appuStack_1fc0[0] = &local_fb8;
  local_1fc8 = &PTR_FUN_049ff448;
  do {
    (**(code **)(local_1840 + 0x10))(&local_848,&local_1840,uVar16);
    lVar26 = (**(code **)(local_1840 + 0x20))(&local_1840);
    puVar6 = PTR_DAT_04bb43c0;
    uVar19 = 1 << (ulong)(uVar16 & 0x1f);
    if ((*(uint *)(lVar26 + (ulong)(uVar16 >> 5) * 4) & uVar19) != 0) {
      lVar26 = *(long *)PTR_DAT_04bb43c0;
      uVar18 = FUN_0277d6c4(&local_848);
      if (*(long *)puVar6 != 0) {
        lVar26 = *(long *)(lVar26 + 0x57e58);
        uVar18 = (uVar18 & 0xffff) - (uint)*(ushort *)(lVar26 + 0x1f8);
        if (((uVar18 < *(uint *)(lVar26 + 0x1d8)) &&
            (*(long *)(*(long *)(lVar26 + 0x1e0) + (long)(int)uVar18 * 8) != 0)) &&
           (uVar20 = (*(code *)*local_1fc8)(&local_1fc8,&local_848), (uVar20 & 1) != 0))
        goto LAB_02881634;
      }
      lVar26 = (**(code **)(local_1840 + 0x18))(&local_1840);
      lVar22 = (ulong)(uVar16 >> 5) * 4;
      *(uint *)(lVar26 + lVar22) = *(uint *)(lVar26 + lVar22) & (uVar19 ^ 0xffffffff);
    }
LAB_02881634:
    uVar16 = uVar16 + 1;
  } while (uVar16 != 15000);
  local_1fc8 = (undefined **)(puVar3 + 0x10);
  memset(appuStack_1fc0,0,0x754);
  uVar16 = nn::os::GetSystemTick();
  local_186c = (uVar16 ^ uVar16 >> 0x1e) * 0x6c078965 + 1;
  local_1868 = (local_186c ^ local_186c >> 0x1e) * 0x6c078965 + 2;
  local_1864 = (local_1868 ^ local_1868 >> 0x1e) * 0x6c078965 + 3;
  local_1860 = (local_1864 ^ local_1864 >> 0x1e) * 0x6c078965 + 4;
  pvVar21 = (void *)(*(code *)local_1fc8[3])(&local_1fc8);
  memset(pvVar21,0,0x754);
  memcpy(appuStack_1fc0,auStack_1838,0x754);
  local_1858 = 0x100000002;
  local_1850 = 1;
  lVar22 = (*(code *)local_1fc8[4])(&local_1fc8);
  puVar6 = PTR_DAT_04bb39d8;
  lVar26 = 0;
  uVar16 = 0;
  do {
    puVar23 = (uint *)(lVar22 + lVar26);
    lVar26 = lVar26 + 4;
    uVar19 = *puVar23 - (*puVar23 >> 1 & 0x55555555);
    uVar19 = (uVar19 >> 2 & 0x33333333) + (uVar19 & 0x33333333);
    uVar19 = uVar19 + (uVar19 >> 4) & 0xf0f0f0f;
    uVar19 = uVar19 + (uVar19 >> 8);
    uVar16 = (uVar19 + (uVar19 >> 0x10) & 0x3f) + uVar16;
  } while (lVar26 != 0x754);
  if ((uint)local_1858 <= uVar16) {
    local_848 = (undefined **)(puVar3 + 0x10);
    memset(&local_840,0,0x754);
    uVar16 = nn::os::GetSystemTick();
    local_ec = (uVar16 ^ uVar16 >> 0x1e) * 0x6c078965 + 1;
    local_e8 = (local_ec ^ local_ec >> 0x1e) * 0x6c078965 + 2;
    local_e4 = (local_e8 ^ local_e8 >> 0x1e) * 0x6c078965 + 3;
    local_e0 = (local_e4 ^ local_e4 >> 0x1e) * 0x6c078965 + 4;
    pvVar21 = (void *)FUN_01a451fc(&local_848);
    memset(pvVar21,0,0x754);
    pvVar21 = (void *)(**(code **)((long)local_848 + 0x18))(&local_848);
    memset(pvVar21,0,0x754);
    uVar16 = 0;
    piVar2 = (int *)(param_1 + 0x38);
    psVar1 = param_1 + 0x54;
    ppuVar5 = (undefined **)(PTR_DAT_04bb2028 + 0x10);
    puVar6 = PTR_DAT_04bc0510 + 0x10;
    do {
      local_fb8 = puVar3 + 0x10;
      memset(&local_fb0,0,0x754);
      uVar19 = nn::os::GetSystemTick();
      local_85c = (uVar19 ^ uVar19 >> 0x1e) * 0x6c078965 + 1;
      local_858 = (local_85c ^ local_85c >> 0x1e) * 0x6c078965 + 2;
      local_854 = (local_858 ^ local_858 >> 0x1e) * 0x6c078965 + 3;
      local_850 = (local_854 ^ local_854 >> 0x1e) * 0x6c078965 + 4;
      memcpy(&local_fb0,appuStack_1fc0,0x754);
      if (uVar16 == 1) {
        lVar26 = (**(code **)(*param_3 + 0x20))(param_3);
        uVar20 = 0;
        do {
          uVar19 = (uint)uVar20;
          if ((*(uint *)(lVar26 + (uVar20 >> 5) * 4) >> (ulong)(uVar19 & 0x1f) & 1) != 0)
          goto LAB_028823d4;
          uVar18 = uVar19 + 1;
          if (((*(uint *)(lVar26 + (ulong)(uVar18 >> 5) * 4) >> (ulong)(uVar18 & 0x1f) & 1) != 0) ||
             (uVar18 = uVar19 + 2,
             (*(uint *)(lVar26 + (ulong)(uVar18 >> 5) * 4) >> (ulong)(uVar18 & 0x1f) & 1) != 0)) {
            uVar20 = (ulong)uVar18;
            goto LAB_028823d4;
          }
          uVar20 = (ulong)(uVar19 + 3);
        } while (uVar19 + 3 != 15000);
        uVar20 = 0;
LAB_028823d4:
        lVar22 = (**(code **)(*param_3 + 0x20))(param_3);
        uVar19 = 0x3a95;
        do {
          uVar18 = uVar19 + 2;
          if ((((*(uint *)(lVar22 + (ulong)(uVar18 >> 5) * 4) >> (ulong)(uVar18 & 0x1f) & 1) != 0)
              || (uVar18 = uVar19 + 1,
                 (*(uint *)(lVar22 + (ulong)(uVar18 >> 5) * 4) >> (ulong)(uVar18 & 0x1f) & 1) != 0))
             || (uVar18 = uVar19,
                (*(uint *)(lVar22 + (ulong)(uVar19 >> 5) * 4) >> (ulong)(uVar19 & 0x1f) & 1) != 0))
          {
            uVar18 = uVar18 + 1;
            goto LAB_02882458;
          }
          uVar19 = uVar19 - 3;
        } while (uVar19 != 0xfffffffd);
        uVar18 = 0;
LAB_02882458:
        while (uVar19 = (uint)uVar20, uVar18 != uVar19) {
          puVar7 = (undefined4 *)(PTR_DAT_04bbfe58 + uVar20 * 8);
          if (0x752 < uVar19 >> 3) {
            puVar7 = (undefined4 *)PTR_DAT_04bbfe58;
          }
          puVar8 = (undefined4 *)PTR_DAT_04bb37e0;
          if (uVar19 < 0x3a99) {
            puVar8 = puVar7;
          }
          local_10b8[0] = *puVar8;
          local_10b8[1] = puVar8[1];
          lVar22 = (**(code **)(local_fb8 + 0x18))(&local_fb8);
          uVar19 = FUN_0277d6c4(local_10b8);
          if ((uVar19 >> 3 & 0x1fff) < 0x753) {
            lVar12 = (ulong)((uVar19 & 0xffff) >> 5) * 4;
            *(uint *)(lVar22 + lVar12) =
                 *(uint *)(lVar22 + lVar12) & (1 << (ulong)(uVar19 & 0x1f) ^ 0xffffffffU);
          }
          do {
            uVar19 = (int)uVar20 + 1;
            uVar20 = (ulong)uVar19;
            if (0x752 < uVar19 >> 3) {
              uVar19 = 0x3a95;
              goto LAB_02882510;
            }
          } while ((*(uint *)(lVar26 + (ulong)(uVar19 >> 5) * 4) >> (ulong)(uVar19 & 0x1f) & 1) == 0
                  );
        }
      }
      lVar26 = (**(code **)((long)local_848 + 0x20))(&local_848);
      uVar20 = 0;
      do {
        uVar19 = (uint)uVar20;
        if ((*(uint *)(lVar26 + (uVar20 >> 5) * 4) >> (ulong)(uVar19 & 0x1f) & 1) != 0)
        goto LAB_028825d4;
        uVar18 = uVar19 + 1;
        if (((*(uint *)(lVar26 + (ulong)(uVar18 >> 5) * 4) >> (ulong)(uVar18 & 0x1f) & 1) != 0) ||
           (uVar18 = uVar19 + 2,
           (*(uint *)(lVar26 + (ulong)(uVar18 >> 5) * 4) >> (ulong)(uVar18 & 0x1f) & 1) != 0)) {
          uVar20 = (ulong)uVar18;
          goto LAB_028825d4;
        }
        uVar20 = (ulong)(uVar19 + 3);
      } while (uVar19 + 3 != 15000);
      uVar20 = 0;
LAB_028825d4:
      lVar22 = (**(code **)((long)local_848 + 0x20))(&local_848);
      uVar19 = 0x3a95;
      do {
        uVar18 = uVar19 + 2;
        if ((((*(uint *)(lVar22 + (ulong)(uVar18 >> 5) * 4) >> (ulong)(uVar18 & 0x1f) & 1) != 0) ||
            (uVar18 = uVar19 + 1,
            (*(uint *)(lVar22 + (ulong)(uVar18 >> 5) * 4) >> (ulong)(uVar18 & 0x1f) & 1) != 0)) ||
           (uVar18 = uVar19,
           (*(uint *)(lVar22 + (ulong)(uVar19 >> 5) * 4) >> (ulong)(uVar19 & 0x1f) & 1) != 0)) {
          uVar18 = uVar18 + 1;
          goto LAB_02882658;
        }
        uVar19 = uVar19 - 3;
      } while (uVar19 != 0xfffffffd);
      uVar18 = 0;
LAB_02882658:
      while (uVar19 = (uint)uVar20, uVar18 != uVar19) {
        puVar7 = (undefined4 *)(PTR_DAT_04bbfe58 + uVar20 * 8);
        if (0x752 < uVar19 >> 3) {
          puVar7 = (undefined4 *)PTR_DAT_04bbfe58;
        }
        puVar8 = (undefined4 *)PTR_DAT_04bb37e0;
        if (uVar19 < 0x3a99) {
          puVar8 = puVar7;
        }
        local_10b8[0] = *puVar8;
        local_10b8[1] = puVar8[1];
        lVar22 = (**(code **)(local_fb8 + 0x18))(&local_fb8);
        uVar19 = FUN_0277d6c4(local_10b8);
        if ((uVar19 >> 3 & 0x1fff) < 0x753) {
          lVar12 = (ulong)((uVar19 & 0xffff) >> 5) * 4;
          *(uint *)(lVar22 + lVar12) =
               *(uint *)(lVar22 + lVar12) & (1 << (ulong)(uVar19 & 0x1f) ^ 0xffffffffU);
        }
        do {
          uVar19 = (int)uVar20 + 1;
          uVar20 = (ulong)uVar19;
          if (0x752 < uVar19 >> 3) {
            uVar19 = 0x3a95;
            goto LAB_02882710;
          }
        } while ((*(uint *)(lVar26 + (ulong)(uVar19 >> 5) * 4) >> (ulong)(uVar19 & 0x1f) & 1) == 0);
      }
      pvVar21 = (void *)(**(code **)((long)local_848 + 0x18))(&local_848);
      memset(pvVar21,0,0x754);
      FUN_02690004(local_10b8);
      puVar23 = (uint *)nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04bb39d8);
      uVar19 = *puVar23 ^ *puVar23 << 0xb;
      uVar11 = puVar23[3];
      *puVar23 = puVar23[1];
      puVar23[1] = puVar23[2];
      uVar18 = uVar19 ^ uVar11;
      uVar19 = uVar19 >> 8 ^ uVar11 >> 0x13 ^ uVar18;
      puVar23[2] = uVar11;
      puVar23[3] = uVar19;
      local_10c8 = (uVar19 ^ uVar18 >> 0x1e) * 0x6c078965 + 1;
      local_10c4 = (local_10c8 ^ local_10c8 >> 0x1e) * 0x6c078965 + 2;
      local_10c0 = (local_10c4 ^ local_10c4 >> 0x1e) * 0x6c078965 + 3;
      local_10bc = (local_10c0 ^ local_10c0 >> 0x1e) * 0x6c078965 + 4;
      lVar22 = (**(code **)(local_fb8 + 0x20))(&local_fb8);
      lVar26 = 0;
      uVar19 = 0;
      do {
        puVar23 = (uint *)(lVar22 + lVar26);
        lVar26 = lVar26 + 4;
        uVar18 = *puVar23 - (*puVar23 >> 1 & 0x55555555);
        uVar18 = (uVar18 >> 2 & 0x33333333) + (uVar18 & 0x33333333);
        uVar18 = uVar18 + (uVar18 >> 4) & 0xf0f0f0f;
        uVar18 = uVar18 + (uVar18 >> 8);
        uVar19 = (uVar18 + (uVar18 >> 0x10) & 0x3f) + uVar19;
      } while (lVar26 != 0x754);
      if (uVar19 < (uint)local_1858) {
        memcpy(&local_fb0,appuStack_1fc0,0x754);
        lVar22 = (**(code **)(local_fb8 + 0x20))(&local_fb8);
        lVar26 = 0;
        uVar19 = 0;
        do {
          puVar23 = (uint *)(lVar22 + lVar26);
          lVar26 = lVar26 + 4;
          uVar18 = *puVar23 - (*puVar23 >> 1 & 0x55555555);
          uVar18 = (uVar18 >> 2 & 0x33333333) + (uVar18 & 0x33333333);
          uVar18 = uVar18 + (uVar18 >> 4) & 0xf0f0f0f;
          uVar18 = uVar18 + (uVar18 >> 8);
          uVar19 = (uVar18 + (uVar18 >> 0x10) & 0x3f) + uVar19;
        } while (lVar26 != 0x754);
        if (uVar19 < 2) {
          local_c0 = (undefined *)CONCAT44(local_c0._4_4_,0x137);
          local_98 = &local_c0;
          local_a0 = &PTR_FUN_049ff4e8;
          FUN_008a1ba0(&local_fb8,&local_a0);
        }
      }
      iVar17 = FUN_01a4cc70(&local_10c8,local_10b8,&local_fb8,local_1858 & 0xffffffff,0,0,
                            PTR_FUN_04bb67e0,0);
      uVar19 = iVar17 - 1;
      if (iVar17 < 1) {
        iVar25 = 0;
      }
      else {
        iVar25 = 0;
        if (0x1e < uVar19) {
          uVar19 = 0x1f;
        }
        uVar18 = 0;
        iVar30 = uVar19 + 1;
        lVar26 = *(long *)PTR_DAT_04bb43c0;
        do {
          lVar22 = (long)((ulong)uVar18 << 0x20) >> 0x1d;
          local_10d0 = *(undefined4 *)((long)local_10b8 + lVar22);
          local_10cc = *(undefined4 *)((long)local_10b8 + lVar22 + 4);
          uVar19 = FUN_0277d6c4(&local_10d0);
          lVar22 = *(long *)PTR_DAT_04bb43c0;
          if (lVar22 != 0) {
            lVar26 = *(long *)(lVar26 + 0x57e58);
            uVar19 = (uVar19 & 0xffff) - (uint)*(ushort *)(lVar26 + 0x1f8);
            if ((uVar19 < *(uint *)(lVar26 + 0x1d8)) &&
               (*(long *)(*(long *)(lVar26 + 0x1e0) + (long)(int)uVar19 * 8) != 0)) {
              psVar29 = param_1 + (ulong)uVar16 * 8;
              if (6 < uVar16) {
                psVar29 = param_1;
              }
              local_a4 = uVar16;
              if (*psVar29 == -2) {
                piVar9 = piVar2 + (ulong)uVar16 * 2;
                if (6 < uVar16) {
                  piVar9 = piVar2;
                }
                if (-1 < *piVar9) goto LAB_02882a28;
                lVar26 = 0;
LAB_02882a74:
                psVar29 = psVar29 + lVar26 * 4;
                *(undefined4 *)psVar29 = local_10d0;
                *(undefined4 *)(psVar29 + 2) = local_10cc;
                piVar9 = piVar2 + (ulong)uVar16 * 2;
                if (6 < uVar16) {
                  piVar9 = piVar2;
                }
                piVar9[lVar26] = local_1858._4_4_;
                local_b0 = (uint *)0x0;
                psVar10 = psVar1 + uVar16;
                if (6 < uVar16) {
                  psVar10 = psVar1;
                }
                *(undefined1 *)((long)psVar10 + lVar26) = (undefined1)local_1850;
                puVar4 = PTR_DAT_04bb43c0;
                local_b8 = *(undefined4 *)psVar29;
                uStack_b4 = *(undefined4 *)(psVar29 + 2);
                lVar26 = *(long *)PTR_DAT_04bb43c0;
                local_c0 = puVar6;
                uVar19 = FUN_0277d6c4(&local_b8);
                if (*(long *)puVar4 != 0) {
                  lVar26 = *(long *)(lVar26 + 0x57e58);
                  uVar19 = (uVar19 & 0xffff) - (uint)*(ushort *)(lVar26 + 0x1f8);
                  if ((uVar19 < *(uint *)(lVar26 + 0x1d8)) &&
                     (*(long *)(*(long *)(lVar26 + 0x1e0) + (long)(int)uVar19 * 8) != 0)) {
                    lVar26 = *(long *)PTR_DAT_04bc0428;
                    uVar19 = FUN_0277d6c4(psVar29);
                    uVar19 = (uVar19 & 0xffff) - (uint)*(ushort *)(lVar26 + 0x1f8);
                    if (uVar19 < *(uint *)(lVar26 + 0x1d8)) {
                      puVar23 = *(uint **)(*(long *)(lVar26 + 0x1e0) + (long)(int)uVar19 * 8);
                      if (puVar23 != (uint *)0x0) {
                        local_b0 = puVar23;
                      }
                    }
                  }
                }
                FUN_01afb1a0(&local_c0,local_d0);
                puVar27 = &DAT_0407ebb1;
                local_90 = 0x20;
                local_6d = 0;
                local_8c[0] = 0;
                local_a0 = (undefined **)(PTR_DAT_04bb2028 + 0x10);
                if (local_a4 < 7) {
                  puVar27 = *(undefined8 **)(PTR_s_Sunday_04bc3898 + (ulong)local_a4 * 8 + 0x40);
                }
                if (local_b0 == (uint *)0x0) {
                  local_d4 = 0xbc;
                }
                else {
                  uVar19 = *local_b0;
                  local_d4 = 0;
                  if ((uVar19 != 0) && (local_b0 != (uint *)(ulong)uVar19)) {
                    puVar23 = (uint *)((long)local_b0 - (long)(ulong)uVar19);
                    local_d4 = 0;
                    if (*puVar23 != 0) {
                      uVar19 = puVar23[1];
                      if ((uVar19 != 0) && ((ulong)(ushort)puVar23[2] != 0)) {
                        lVar26 = 0xc;
                        if (*(char *)((long)puVar23 + 10) != '\0') {
                          lVar26 = 0x1c;
                        }
                        lVar26 = (long)puVar23 + lVar26 + (ulong)(ushort)puVar23[2] * 8;
                        if (lVar26 != 0) {
                          uVar11 = 0;
                          if ((ulong)uVar19 != 0) {
                            uVar11 = (uint)((ulong)((long)local_b0 - lVar26) / (ulong)uVar19);
                          }
                          if (*puVar23 <= uVar11) {
                            uVar11 = 0xffffffff;
                          }
                          if ((uVar11 < *(uint *)PTR_DAT_04bc00c8) &&
                             (local_d4 = (uint)*(ushort *)
                                                (*(long *)(PTR_DAT_04bc00c8 + 8) +
                                                (long)(int)uVar11 * 2), local_d4 < 0xbd))
                          goto LAB_02882c48;
                        }
                      }
                      local_d4 = 0;
                    }
                  }
                }
LAB_02882c48:
                puVar24 = &DAT_0407ebb1;
                if (local_d4 < 0xbd) {
                  puVar24 = *(undefined8 **)(PTR_DAT_04bb8f90 + (ulong)local_d4 * 8 + 0x830);
                }
                local_98 = (undefined8 *)local_8c;
                FUN_038d1270(&local_a0,"Shop.Hotel.%s.%s",puVar27,puVar24);
              }
              else {
LAB_02882a28:
                psVar29 = param_1 + (ulong)uVar16 * 8;
                if (6 < uVar16) {
                  psVar29 = param_1;
                }
                if (psVar29[4] == -2) {
                  piVar9 = piVar2 + (ulong)uVar16 * 2;
                  if (6 < uVar16) {
                    piVar9 = piVar2;
                  }
                  if (piVar9[1] < 0) {
                    lVar26 = 1;
                    goto LAB_02882a74;
                  }
                }
              }
              FUN_0277dedc(&local_10d0);
              lVar26 = (**(code **)((long)local_848 + 0x18))(&local_848);
              uVar19 = FUN_0277d6c4(&local_10d0);
              lVar22 = *(long *)PTR_DAT_04bb43c0;
              if ((uVar19 >> 3 & 0x1fff) < 0x753) {
                lVar12 = (ulong)((uVar19 & 0xffff) >> 5) * 4;
                *(uint *)(lVar26 + lVar12) =
                     *(uint *)(lVar26 + lVar12) | 1 << (ulong)(uVar19 & 0x1f);
              }
              iVar25 = iVar25 + 1;
            }
          }
          uVar18 = uVar18 + 1;
          iVar30 = iVar30 + -1;
          lVar26 = lVar22;
        } while (iVar30 != 0);
      }
      FUN_02885b80(param_1,uVar16,iVar25);
      iVar25 = (uint)local_1858;
      if (iVar17 < (int)(uint)local_1858) {
        do {
          puVar4 = PTR_DAT_04bb37e0;
          if (local_1850._1_1_ != '\0') {
            local_c0 = (undefined *)CONCAT44(local_c0._4_4_,uVar16);
            psVar29 = param_1 + (ulong)uVar16 * 8;
            if (6 < uVar16) {
              psVar29 = param_1;
            }
            if (*psVar29 == -2) {
              piVar9 = piVar2 + (ulong)uVar16 * 2;
              if (6 < uVar16) {
                piVar9 = piVar2;
              }
              if (-1 < *piVar9) goto LAB_02882d64;
              lVar26 = 0;
LAB_02882da8:
              psVar29 = psVar29 + lVar26 * 4;
              puVar27 = &DAT_0407ebb1;
              *psVar29 = *(short *)PTR_DAT_04bb37e0;
              *(undefined *)(psVar29 + 1) = puVar4[2];
              *(undefined *)((long)psVar29 + 3) = puVar4[3];
              *(undefined4 *)(psVar29 + 2) = *(undefined4 *)(puVar4 + 4);
              piVar9 = piVar2 + (ulong)uVar16 * 2;
              if (6 < uVar16) {
                piVar9 = piVar2;
              }
              piVar9[lVar26] = 0;
              psVar29 = psVar1 + uVar16;
              if (6 < uVar16) {
                psVar29 = psVar1;
              }
              *(undefined1 *)((long)psVar29 + lVar26) = 0;
              local_90 = 0x20;
              local_6d = 0;
              local_8c[0] = 0;
              if (uVar16 < 7) {
                puVar27 = *(undefined8 **)(PTR_s_Sunday_04bc3898 + (ulong)uVar16 * 8 + 0x40);
              }
              local_a0 = ppuVar5;
              local_98 = (undefined8 *)local_8c;
              FUN_038d1270(&local_a0,"Shop.Hotel.%s.None",puVar27);
              iVar25 = (uint)local_1858;
            }
            else {
LAB_02882d64:
              psVar29 = param_1 + (ulong)uVar16 * 8;
              if (6 < uVar16) {
                psVar29 = param_1;
              }
              if (psVar29[4] == -2) {
                piVar9 = piVar2 + (ulong)uVar16 * 2;
                if (6 < uVar16) {
                  piVar9 = piVar2;
                }
                if (piVar9[1] < 0) {
                  lVar26 = 1;
                  goto LAB_02882da8;
                }
              }
            }
          }
          iVar17 = iVar17 + 1;
        } while (iVar17 < iVar25);
      }
      uVar16 = uVar16 + 1;
      if (uVar16 == 7) {
        return;
      }
    } while( true );
  }
  psVar1 = param_1 + 0x54;
  uVar16 = 0;
  piVar2 = (int *)(param_1 + 0x38);
  puVar3 = PTR_DAT_04bc0510 + 0x10;
  puVar4 = PTR_DAT_04bb2028 + 0x10;
  do {
    puVar23 = (uint *)nn::os::GetTlsValue(*(undefined4 *)puVar6);
    uVar19 = *puVar23 ^ *puVar23 << 0xb;
    uVar11 = puVar23[3];
    *puVar23 = puVar23[1];
    puVar23[1] = puVar23[2];
    uVar18 = uVar19 ^ uVar11;
    uVar19 = uVar19 >> 8 ^ uVar11 >> 0x13 ^ uVar18;
    puVar23[2] = uVar11;
    puVar23[3] = uVar19;
    uVar11 = (uint)local_1858;
    local_a0._0_4_ = (uVar19 ^ uVar18 >> 0x1e) * 0x6c078965 + 1;
    local_a0._4_4_ = ((uint)local_a0 ^ (uint)local_a0 >> 0x1e) * 0x6c078965 + 2;
    local_98._0_4_ = (local_a0._4_4_ ^ local_a0._4_4_ >> 0x1e) * 0x6c078965 + 3;
    local_98._4_4_ = ((uint)local_98 ^ (uint)local_98 >> 0x1e) * 0x6c078965 + 4;
    lVar22 = (*(code *)local_1fc8[4])(&local_1fc8);
    lVar26 = 0;
    iVar17 = 0;
    do {
      puVar23 = (uint *)(lVar22 + lVar26);
      lVar26 = lVar26 + 4;
      uVar19 = *puVar23 - (*puVar23 >> 1 & 0x55555555);
      uVar19 = (uVar19 >> 2 & 0x33333333) + (uVar19 & 0x33333333);
      uVar19 = uVar19 + (uVar19 >> 4) & 0xf0f0f0f;
      uVar19 = uVar19 + (uVar19 >> 8);
      iVar17 = (uVar19 + (uVar19 >> 0x10) & 0x3f) + iVar17;
    } while (lVar26 != 0x754);
    if (iVar17 == 0) {
      local_c0 = *(undefined **)PTR_DAT_04bb37e0;
    }
    else {
      if (uVar11 != 0) {
        local_a0._0_4_ = (uVar11 ^ uVar11 >> 0x1e) * 0x6c078965 + 1;
        local_a0._4_4_ = ((uint)local_a0 ^ (uint)local_a0 >> 0x1e) * 0x6c078965 + 2;
        local_98._0_4_ = (local_a0._4_4_ ^ local_a0._4_4_ >> 0x1e) * 0x6c078965 + 3;
        local_98._4_4_ = ((uint)local_98 ^ (uint)local_98 >> 0x1e) * 0x6c078965 + 4;
      }
      lVar22 = (*(code *)local_1fc8[4])(&local_1fc8);
      lVar26 = 0;
      uVar19 = 0;
      do {
        puVar23 = (uint *)(lVar22 + lVar26);
        lVar26 = lVar26 + 4;
        uVar18 = *puVar23 - (*puVar23 >> 1 & 0x55555555);
        uVar18 = (uVar18 >> 2 & 0x33333333) + (uVar18 & 0x33333333);
        uVar18 = uVar18 + (uVar18 >> 4) & 0xf0f0f0f;
        uVar18 = uVar18 + (uVar18 >> 8);
        uVar19 = (uVar18 + (uVar18 >> 0x10) & 0x3f) + uVar19;
      } while (lVar26 != 0x754);
      uVar18 = (uint)local_a0 ^ (uint)local_a0 << 0xb;
      local_a0._0_4_ = local_a0._4_4_;
      local_a0._4_4_ = (uint)local_98;
      uVar18 = uVar18 >> 8 ^ local_98._4_4_ >> 0x13 ^ uVar18 ^ local_98._4_4_;
      local_98._0_4_ = local_98._4_4_;
      local_98._4_4_ = uVar18;
      FUN_00889f80(&local_c0,&local_1fc8,(int)((ulong)uVar18 * (ulong)uVar19 >> 0x20) + 1);
      FUN_01a4c66c(&local_a0,&local_c0);
    }
    puVar13 = PTR_DAT_04bb43c0;
    lVar26 = *(long *)PTR_DAT_04bb43c0;
    uVar19 = FUN_0277d6c4(&local_c0);
    if (*(long *)puVar13 == 0) {
LAB_02881b00:
      iVar17 = 0;
    }
    else {
      lVar26 = *(long *)(lVar26 + 0x57e58);
      uVar19 = (uVar19 & 0xffff) - (uint)*(ushort *)(lVar26 + 0x1f8);
      if ((*(uint *)(lVar26 + 0x1d8) <= uVar19) ||
         (*(long *)(*(long *)(lVar26 + 0x1e0) + (long)(int)uVar19 * 8) == 0)) goto LAB_02881b00;
      psVar29 = param_1 + (ulong)uVar16 * 8;
      if (6 < uVar16) {
        psVar29 = param_1;
      }
      if (*psVar29 == -2) {
        piVar9 = piVar2 + (ulong)uVar16 * 2;
        if (6 < uVar16) {
          piVar9 = piVar2;
        }
        if (-1 < *piVar9) goto LAB_02881ac0;
        lVar26 = 0;
LAB_02881d98:
        psVar29 = psVar29 + lVar26 * 4;
        *(undefined4 *)psVar29 = (undefined4)local_c0;
        *(undefined4 *)(psVar29 + 2) = local_c0._4_4_;
        piVar9 = piVar2 + (ulong)uVar16 * 2;
        if (6 < uVar16) {
          piVar9 = piVar2;
        }
        piVar9[lVar26] = local_1858._4_4_;
        psVar10 = psVar1 + uVar16;
        if (6 < uVar16) {
          psVar10 = psVar1;
        }
        *(undefined1 *)((long)psVar10 + lVar26) = (undefined1)local_1850;
        local_fb0 = *(undefined4 *)psVar29;
        local_fac = *(undefined4 *)(psVar29 + 2);
        lVar26 = *(long *)puVar13;
        local_fa8 = (uint *)0x0;
        local_fb8 = PTR_DAT_04bc0510 + 0x10;
        local_d0[0] = uVar16;
        uVar19 = FUN_0277d6c4(&local_fb0);
        if (*(long *)puVar13 != 0) {
          lVar26 = *(long *)(lVar26 + 0x57e58);
          uVar19 = (uVar19 & 0xffff) - (uint)*(ushort *)(lVar26 + 0x1f8);
          if ((uVar19 < *(uint *)(lVar26 + 0x1d8)) &&
             (*(long *)(*(long *)(lVar26 + 0x1e0) + (long)(int)uVar19 * 8) != 0)) {
            lVar26 = *(long *)PTR_DAT_04bc0428;
            uVar19 = FUN_0277d6c4(psVar29);
            uVar19 = (uVar19 & 0xffff) - (uint)*(ushort *)(lVar26 + 0x1f8);
            if (uVar19 < *(uint *)(lVar26 + 0x1d8)) {
              puVar23 = *(uint **)(*(long *)(lVar26 + 0x1e0) + (long)(int)uVar19 * 8);
              if (puVar23 != (uint *)0x0) {
                local_fa8 = puVar23;
              }
            }
          }
        }
        FUN_01afb1a0(&local_fb8,local_10b8);
        puVar27 = &DAT_0407ebb1;
        local_838 = 0x20;
        local_815 = 0;
        local_834[0] = 0;
        local_848 = (undefined **)(PTR_DAT_04bb2028 + 0x10);
        if (local_d0[0] < 7) {
          puVar27 = *(undefined8 **)(PTR_s_Sunday_04bc3898 + (ulong)local_d0[0] * 8 + 0x40);
        }
        if (local_fa8 == (uint *)0x0) {
          local_10c8 = 0xbc;
        }
        else {
          uVar19 = *local_fa8;
          local_10c8 = 0;
          if ((uVar19 != 0) && (local_fa8 != (uint *)(ulong)uVar19)) {
            puVar23 = (uint *)((long)local_fa8 - (long)(ulong)uVar19);
            local_10c8 = 0;
            if (*puVar23 != 0) {
              uVar19 = puVar23[1];
              if ((uVar19 != 0) && ((ulong)(ushort)puVar23[2] != 0)) {
                lVar26 = 0xc;
                if (*(char *)((long)puVar23 + 10) != '\0') {
                  lVar26 = 0x1c;
                }
                lVar26 = (long)puVar23 + lVar26 + (ulong)(ushort)puVar23[2] * 8;
                if (lVar26 != 0) {
                  uVar18 = 0;
                  if ((ulong)uVar19 != 0) {
                    uVar18 = (uint)((ulong)((long)local_fa8 - lVar26) / (ulong)uVar19);
                  }
                  if (*puVar23 <= uVar18) {
                    uVar18 = 0xffffffff;
                  }
                  if ((uVar18 < *(uint *)PTR_DAT_04bc00c8) &&
                     (local_10c8 = (uint)*(ushort *)
                                          (*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar18 * 2),
                     local_10c8 < 0xbd)) goto LAB_02882144;
                }
              }
              local_10c8 = 0;
            }
          }
        }
LAB_02882144:
        puVar24 = &DAT_0407ebb1;
        if (local_10c8 < 0xbd) {
          puVar24 = *(undefined8 **)(PTR_DAT_04bb8f90 + (ulong)local_10c8 * 8 + 0x830);
        }
        local_840 = (undefined **)local_834;
        FUN_038d1270(&local_848,"Shop.Hotel.%s.%s",puVar27,puVar24);
      }
      else {
LAB_02881ac0:
        psVar29 = param_1 + (ulong)uVar16 * 8;
        if (6 < uVar16) {
          psVar29 = param_1;
        }
        local_d0[0] = uVar16;
        if (psVar29[4] == -2) {
          piVar9 = piVar2 + (ulong)uVar16 * 2;
          if (6 < uVar16) {
            piVar9 = piVar2;
          }
          if (piVar9[1] < 0) {
            lVar26 = 1;
            goto LAB_02881d98;
          }
        }
      }
      iVar17 = 1;
    }
    puVar23 = (uint *)nn::os::GetTlsValue(*(undefined4 *)puVar6);
    uVar19 = *puVar23 ^ *puVar23 << 0xb;
    uVar11 = puVar23[3];
    *puVar23 = puVar23[1];
    puVar23[1] = puVar23[2];
    uVar18 = uVar19 ^ uVar11;
    uVar19 = uVar19 >> 8 ^ uVar11 >> 0x13 ^ uVar18;
    puVar23[2] = uVar11;
    puVar23[3] = uVar19;
    uVar11 = (uint)local_1858;
    uVar19 = (uVar19 ^ uVar18 >> 0x1e) * 0x6c078965 + 1;
    uVar18 = (uVar19 ^ uVar19 >> 0x1e) * 0x6c078965 + 2;
    local_a0 = (undefined **)CONCAT44(uVar18,uVar19);
    uVar19 = (uVar18 ^ uVar18 >> 0x1e) * 0x6c078965 + 3;
    local_98 = (undefined8 *)CONCAT44((uVar19 ^ uVar19 >> 0x1e) * 0x6c078965 + 4,uVar19);
    lVar22 = (*(code *)local_1fc8[4])(&local_1fc8);
    lVar26 = 0;
    iVar25 = 0;
    do {
      puVar23 = (uint *)(lVar22 + lVar26);
      lVar26 = lVar26 + 4;
      uVar19 = *puVar23 - (*puVar23 >> 1 & 0x55555555);
      uVar19 = (uVar19 >> 2 & 0x33333333) + (uVar19 & 0x33333333);
      uVar19 = uVar19 + (uVar19 >> 4) & 0xf0f0f0f;
      uVar19 = uVar19 + (uVar19 >> 8);
      iVar25 = (uVar19 + (uVar19 >> 0x10) & 0x3f) + iVar25;
    } while (lVar26 != 0x754);
    if (iVar25 == 0) {
      local_c0 = *(undefined **)PTR_DAT_04bb37e0;
    }
    else {
      if (uVar11 != 0) {
        uVar19 = (uVar11 ^ uVar11 >> 0x1e) * 0x6c078965 + 1;
        uVar18 = (uVar19 ^ uVar19 >> 0x1e) * 0x6c078965 + 2;
        local_a0 = (undefined **)CONCAT44(uVar18,uVar19);
        uVar19 = (uVar18 ^ uVar18 >> 0x1e) * 0x6c078965 + 3;
        local_98 = (undefined8 *)CONCAT44((uVar19 ^ uVar19 >> 0x1e) * 0x6c078965 + 4,uVar19);
      }
      lVar22 = (*(code *)local_1fc8[4])(&local_1fc8);
      lVar26 = 0;
      uVar19 = 0;
      do {
        puVar23 = (uint *)(lVar22 + lVar26);
        lVar26 = lVar26 + 4;
        uVar18 = *puVar23 - (*puVar23 >> 1 & 0x55555555);
        uVar18 = (uVar18 >> 2 & 0x33333333) + (uVar18 & 0x33333333);
        uVar18 = uVar18 + (uVar18 >> 4) & 0xf0f0f0f;
        uVar18 = uVar18 + (uVar18 >> 8);
        uVar19 = (uVar18 + (uVar18 >> 0x10) & 0x3f) + uVar19;
      } while (lVar26 != 0x754);
      uVar18 = (uint)local_a0 ^ (uint)local_a0 << 0xb;
      local_a0 = (undefined **)CONCAT44((uint)local_98,local_a0._4_4_);
      uVar18 = uVar18 >> 8 ^ local_98._4_4_ >> 0x13 ^ uVar18 ^ local_98._4_4_;
      local_98 = (undefined8 *)CONCAT44(uVar18,local_98._4_4_);
      FUN_00889f80(&local_c0,&local_1fc8,(int)((ulong)uVar18 * (ulong)uVar19 >> 0x20) + 1);
      FUN_01a4c66c(&local_a0,&local_c0);
    }
    puVar13 = PTR_DAT_04bb43c0;
    lVar26 = *(long *)PTR_DAT_04bb43c0;
    uVar19 = FUN_0277d6c4(&local_c0);
    if (*(long *)puVar13 != 0) {
      lVar26 = *(long *)(lVar26 + 0x57e58);
      uVar19 = (uVar19 & 0xffff) - (uint)*(ushort *)(lVar26 + 0x1f8);
      if ((uVar19 < *(uint *)(lVar26 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar26 + 0x1e0) + (long)(int)uVar19 * 8) != 0)) {
        psVar29 = param_1 + (ulong)uVar16 * 8;
        if (6 < uVar16) {
          psVar29 = param_1;
        }
        if (*psVar29 == -2) {
          piVar9 = piVar2 + (ulong)uVar16 * 2;
          if (6 < uVar16) {
            piVar9 = piVar2;
          }
          if (-1 < *piVar9) goto LAB_02881d44;
          lVar26 = 0;
LAB_02881f70:
          psVar29 = psVar29 + lVar26 * 4;
          *(undefined4 *)psVar29 = (undefined4)local_c0;
          *(undefined4 *)(psVar29 + 2) = local_c0._4_4_;
          piVar9 = piVar2 + (ulong)uVar16 * 2;
          if (6 < uVar16) {
            piVar9 = piVar2;
          }
          piVar9[lVar26] = local_1858._4_4_;
          local_fa8 = (uint *)0x0;
          psVar10 = psVar1 + uVar16;
          if (6 < uVar16) {
            psVar10 = psVar1;
          }
          *(undefined1 *)((long)psVar10 + lVar26) = (undefined1)local_1850;
          local_fb0 = *(undefined4 *)psVar29;
          local_fac = *(undefined4 *)(psVar29 + 2);
          lVar26 = *(long *)puVar13;
          local_fb8 = puVar3;
          local_d0[0] = uVar16;
          uVar19 = FUN_0277d6c4(&local_fb0);
          if (*(long *)puVar13 != 0) {
            lVar26 = *(long *)(lVar26 + 0x57e58);
            uVar19 = (uVar19 & 0xffff) - (uint)*(ushort *)(lVar26 + 0x1f8);
            if ((uVar19 < *(uint *)(lVar26 + 0x1d8)) &&
               (*(long *)(*(long *)(lVar26 + 0x1e0) + (long)(int)uVar19 * 8) != 0)) {
              lVar26 = *(long *)PTR_DAT_04bc0428;
              uVar19 = FUN_0277d6c4(psVar29);
              uVar19 = (uVar19 & 0xffff) - (uint)*(ushort *)(lVar26 + 0x1f8);
              if (uVar19 < *(uint *)(lVar26 + 0x1d8)) {
                puVar23 = *(uint **)(*(long *)(lVar26 + 0x1e0) + (long)(int)uVar19 * 8);
                if (puVar23 != (uint *)0x0) {
                  local_fa8 = puVar23;
                }
              }
            }
          }
          FUN_01afb1a0(&local_fb8,local_10b8);
          puVar27 = &DAT_0407ebb1;
          local_838 = 0x20;
          local_815 = 0;
          local_834[0] = 0;
          if (local_d0[0] < 7) {
            puVar27 = *(undefined8 **)(PTR_s_Sunday_04bc3898 + (ulong)local_d0[0] * 8 + 0x40);
          }
          if (local_fa8 == (uint *)0x0) {
            local_10c8 = 0xbc;
          }
          else {
            uVar19 = *local_fa8;
            local_10c8 = 0;
            if ((uVar19 != 0) && (local_fa8 != (uint *)(ulong)uVar19)) {
              puVar23 = (uint *)((long)local_fa8 - (long)(ulong)uVar19);
              local_10c8 = 0;
              if (*puVar23 != 0) {
                uVar19 = puVar23[1];
                if ((uVar19 != 0) && ((ulong)(ushort)puVar23[2] != 0)) {
                  lVar26 = 0xc;
                  if (*(char *)((long)puVar23 + 10) != '\0') {
                    lVar26 = 0x1c;
                  }
                  lVar26 = (long)puVar23 + lVar26 + (ulong)(ushort)puVar23[2] * 8;
                  if (lVar26 != 0) {
                    uVar18 = 0;
                    if ((ulong)uVar19 != 0) {
                      uVar18 = (uint)((ulong)((long)local_fa8 - lVar26) / (ulong)uVar19);
                    }
                    if (*puVar23 <= uVar18) {
                      uVar18 = 0xffffffff;
                    }
                    if ((uVar18 < *(uint *)PTR_DAT_04bc00c8) &&
                       (local_10c8 = (uint)*(ushort *)
                                            (*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar18 * 2
                                            ), local_10c8 < 0xbd)) goto LAB_0288218c;
                  }
                }
                local_10c8 = 0;
              }
            }
          }
LAB_0288218c:
          puVar24 = &DAT_0407ebb1;
          if (local_10c8 < 0xbd) {
            puVar24 = *(undefined8 **)(PTR_DAT_04bb8f90 + (ulong)local_10c8 * 8 + 0x830);
          }
          local_848 = (undefined **)puVar4;
          local_840 = (undefined **)local_834;
          FUN_038d1270(&local_848,"Shop.Hotel.%s.%s",puVar27,puVar24);
        }
        else {
LAB_02881d44:
          psVar29 = param_1 + (ulong)uVar16 * 8;
          if (6 < uVar16) {
            psVar29 = param_1;
          }
          local_d0[0] = uVar16;
          if (psVar29[4] == -2) {
            piVar9 = piVar2 + (ulong)uVar16 * 2;
            if (6 < uVar16) {
              piVar9 = piVar2;
            }
            if (piVar9[1] < 0) {
              lVar26 = 1;
              goto LAB_02881f70;
            }
          }
        }
        iVar17 = iVar17 + 1;
      }
    }
    FUN_02885b80(param_1,uVar16,iVar17);
    uVar16 = uVar16 + 1;
    if (uVar16 == 7) {
      return;
    }
  } while( true );
  while( true ) {
    uVar11 = uVar19 + 1;
    if ((*(uint *)(lVar26 + (ulong)(uVar11 >> 5) * 4) >> (ulong)(uVar11 & 0x1f) & 1) != 0)
    goto LAB_02882450;
    if ((*(uint *)(lVar26 + (ulong)(uVar19 >> 5) * 4) >> (ulong)(uVar19 & 0x1f) & 1) != 0)
    goto LAB_02882454;
    uVar19 = uVar19 - 3;
    if (uVar19 == 0xfffffffd) break;
LAB_02882510:
    uVar11 = uVar19 + 2;
    if ((*(uint *)(lVar26 + (ulong)(uVar11 >> 5) * 4) >> (ulong)(uVar11 & 0x1f) & 1) != 0) {
LAB_02882450:
      uVar19 = uVar11;
LAB_02882454:
      uVar20 = (ulong)(uVar19 + 1);
      goto LAB_02882458;
    }
  }
  uVar20 = 0;
  goto LAB_02882458;
  while( true ) {
    uVar11 = uVar19 + 1;
    if ((*(uint *)(lVar26 + (ulong)(uVar11 >> 5) * 4) >> (ulong)(uVar11 & 0x1f) & 1) != 0)
    goto LAB_02882650;
    if ((*(uint *)(lVar26 + (ulong)(uVar19 >> 5) * 4) >> (ulong)(uVar19 & 0x1f) & 1) != 0)
    goto LAB_02882654;
    uVar19 = uVar19 - 3;
    if (uVar19 == 0xfffffffd) break;
LAB_02882710:
    uVar11 = uVar19 + 2;
    if ((*(uint *)(lVar26 + (ulong)(uVar11 >> 5) * 4) >> (ulong)(uVar11 & 0x1f) & 1) != 0) {
LAB_02882650:
      uVar19 = uVar11;
LAB_02882654:
      uVar20 = (ulong)(uVar19 + 1);
      goto LAB_02882658;
    }
  }
  uVar20 = 0;
  goto LAB_02882658;
}

