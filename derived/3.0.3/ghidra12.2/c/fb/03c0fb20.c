
/* WARNING: Removing unreachable block (ram,0x03c10290) */
/* WARNING: Removing unreachable block (ram,0x03c0fdfc) */
/* WARNING: Removing unreachable block (ram,0x03c0ff74) */
/* WARNING: Removing unreachable block (ram,0x03c102d0) */

void FUN_03c0fb20(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined1 auVar4 [16];
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long *plVar8;
  bool bVar9;
  int iVar10;
  long lVar11;
  long *plVar12;
  void *__ptr;
  undefined4 *puVar13;
  undefined8 *puVar14;
  long *plVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  undefined1 *puVar19;
  long *plVar20;
  long lVar21;
  undefined4 local_148;
  undefined4 local_144;
  undefined *local_140;
  char *local_138;
  undefined8 local_130;
  undefined4 local_128;
  undefined1 uStack_124;
  undefined2 uStack_123;
  undefined1 uStack_121;
  uint uStack_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 local_114;
  undefined7 local_110;
  undefined1 uStack_109;
  undefined1 auStack_108 [6];
  undefined1 local_102;
  undefined1 uStack_101;
  undefined8 local_100;
  undefined7 uStack_f8;
  uint local_f1;
  uint uStack_ed;
  undefined8 local_e8;
  undefined7 uStack_e0;
  undefined1 local_d9;
  undefined7 uStack_d8;
  undefined4 local_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  long local_80 [2];
  undefined4 local_6c;
  
  local_80[0] = 0;
  FUN_038e9970(local_80);
  local_130 = 0;
  local_128 = 0;
  local_140 = (undefined *)0x1000007b2;
  local_138 = (char *)0x400000001;
  FUN_038e96b0(local_80,&local_140);
  DAT_05aec778 = nn::os::GetSystemTick();
  lVar21 = (long)DAT_05aec6b0;
  if (DAT_05aec6a0 == (long *)0x0 && DAT_05aec698 == 0) {
LAB_03c0fbd4:
    if (DAT_05aec6b0 != (long *)0x0) {
      if (DAT_05aec698 != 0) {
        *(long **)(DAT_05aec698 + 8) = DAT_05aec6a0;
      }
      if (DAT_05aec6a0 != (long *)0x0) {
        *DAT_05aec6a0 = DAT_05aec698;
      }
      *(int *)((long)DAT_05aec6b0 + 0x10) = *(int *)((long)DAT_05aec6b0 + 0x10) + -1;
    }
  }
  else if (DAT_05aec6b0 != (long *)0x0) {
    DAT_05aec6b0 = (long *)0x0;
    if (DAT_05aec698 != 0) {
      *(long **)(DAT_05aec698 + 8) = DAT_05aec6a0;
    }
    if (DAT_05aec6a0 != (long *)0x0) {
      *DAT_05aec6a0 = DAT_05aec698;
    }
    DAT_05aec698 = 0;
    DAT_05aec6a0 = (long *)0x0;
    *(int *)(lVar21 + 0x10) = *(int *)(lVar21 + 0x10) + -1;
    goto LAB_03c0fbd4;
  }
  puVar5 = PTR_DAT_04bd0b50;
  DAT_05aec6a0 = (long *)(PTR_DAT_04bd0b50 + 8);
  DAT_05aec698 = *DAT_05aec6a0;
  DAT_05aec6b0 = DAT_05aec6a0;
  *DAT_05aec6a0 = (long)&DAT_05aec698;
  if (DAT_05aec698 != 0) {
    *(long **)(DAT_05aec698 + 8) = &DAT_05aec698;
  }
  *(int *)(puVar5 + 0x18) = *(int *)(puVar5 + 0x18) + 1;
  plVar8 = DAT_05aec788;
  (**(code **)(*DAT_05aec788 + 0x10))(DAT_05aec788);
  local_80[1] = 0;
  nn::os::QueryMemoryInfo((MemoryInfo *)&local_140);
  local_80[0] = local_130 - CONCAT17(uStack_121,CONCAT25(uStack_123,CONCAT14(uStack_124,local_128)))
  ;
  FUN_038bb2c4(local_80);
  nn::oe::Initialize();
  nn::os::QueryMemoryInfo((MemoryInfo *)&local_140);
  if (*(int *)PTR_DAT_04bd0ca0 == 0) {
    plVar20 = (long *)0x0;
  }
  else {
    plVar20 = (long *)**(undefined8 **)(PTR_DAT_04bd0ca0 + 8);
  }
  FUN_03c0f76c(plVar20);
  iVar10 = (**(code **)(*plVar8 + 0x20))(plVar8);
  puVar6 = PTR_DAT_04bb2698;
  puVar5 = PTR_DAT_04bb2628;
  lVar21 = *(long *)PTR_DAT_04bb2698;
  if (lVar21 == 0) {
    __ptr = malloc((long)(iVar10 + 0x19000));
LAB_03c0fd34:
    FUN_03c0f888(*(undefined8 *)puVar5,plVar20);
    if (__ptr != (void *)0x0) {
      lVar21 = *(long *)puVar6;
      if (lVar21 == 0) {
        free(__ptr);
      }
      else {
        plVar12 = (long *)FUN_038cb610(lVar21,__ptr);
        if (plVar12 != (long *)0x0) {
          (**(code **)(*plVar12 + 0x38))(plVar12,__ptr);
        }
      }
    }
  }
  else {
    plVar12 = plVar20;
    if (plVar20 != (long *)0x0) {
LAB_03c0fd14:
      __ptr = (void *)(**(code **)(*plVar12 + 0x30))(plVar12,(long)(iVar10 + 0x19000),8);
      goto LAB_03c0fd34;
    }
    lVar11 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    plVar12 = (long *)(lVar21 + 8);
    if (lVar11 != 0) {
      plVar12 = (long *)(lVar11 + 0xa8);
    }
    plVar12 = (long *)*plVar12;
    if (plVar12 != (long *)0x0) goto LAB_03c0fd14;
    FUN_03c0f888(*(undefined8 *)puVar5,0);
  }
  lVar21 = *(long *)puVar5;
  puVar13 = (undefined4 *)(**(code **)(*plVar8 + 0x38))(plVar8);
  uVar1 = *puVar13;
  uVar2 = puVar13[1];
  puVar14 = (undefined8 *)(**(code **)(*plVar8 + 0x40))(plVar8);
  puVar5 = PTR_DAT_04bb2020;
  local_88 = *puVar14;
  puVar14 = (undefined8 *)(lVar21 + 0x100);
  local_148 = 0;
  local_140 = PTR_DAT_04bb2020 + 0x10;
  local_138 = "Framework";
  plVar12 = (long *)FUN_038c6d48(0,&local_140,*puVar14,8,1,0);
  uStack_123 = 1;
  uStack_121 = 0;
  uStack_120 = uStack_120 & 0xffffff00;
  uStack_124 = 0;
  local_140 = (undefined *)0x3f00000000000001;
  local_138 = (char *)0x3f0000003f000000;
  local_114 = 0x1000;
  local_100 = 0xffffffff;
  uStack_f8 = 0x20000212c;
  local_f1 = local_f1 & 0xffffff00;
  local_130 = CONCAT44(uVar1,0x3f800000);
  uStack_11c = 0x100000;
  uStack_118 = 0x100000;
  local_110 = 0x1000000;
  uStack_109 = 0;
  _auStack_108 = 0xffffffffffffff;
  uStack_101 = 0xff;
  local_128 = uVar2;
  (**(code **)(*plVar8 + 0x18))(plVar8,&local_140);
  lVar21 = *(long *)puVar6;
  if (lVar21 == 0) {
    plVar15 = malloc(0x298);
  }
  else {
    plVar15 = plVar12;
    if (plVar12 == (long *)0x0) {
      lVar11 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar15 = (long *)(lVar21 + 8);
      if (lVar11 != 0) {
        plVar15 = (long *)(lVar11 + 0xa8);
      }
      plVar15 = (long *)*plVar15;
      if (plVar15 == (long *)0x0) {
        plVar15 = (long *)0x0;
        goto LAB_03c0fed0;
      }
    }
    plVar15 = (long *)(**(code **)(*plVar15 + 0x30))(plVar15,0x298,8);
  }
LAB_03c0fed0:
  puVar7 = PTR_DAT_04bd0ca0;
  FUN_038b7c1c(plVar15,&local_140);
  puVar6 = PTR_DAT_04bd2d78;
  *(undefined4 *)(plVar15 + 0x50) = 0;
  *plVar15 = (long)(puVar6 + 0x10);
  puVar6 = PTR_DAT_04bd0c98;
  plVar15[0x51] = 0;
  plVar15[0x4d] = (long)(puVar6 + 0x10);
  plVar15[0x4f] = (long)(plVar15 + 0x4e);
  plVar15[0x4e] = (long)(plVar15 + 0x4e);
  lVar21 = nn::os::GetSystemTick();
  plVar15[0x52] = lVar21;
  puVar6 = PTR_DAT_04bbd758;
  plVar15[0x51] = 0;
  *(long **)puVar6 = plVar15;
  (**(code **)(*plVar12 + 0x28))(plVar12);
  local_148 = 0;
  local_140 = puVar5 + 0x10;
  local_138 = "FWGfxSystem";
  plVar12 = (long *)FUN_038c6d48(0,&local_140,*puVar14,8,1,0);
  FUN_038b7edc(plVar15,plVar12,&local_88);
  (**(code **)(*plVar12 + 0x28))(plVar12);
  uStack_ed = uStack_ed & 0xffffff00;
  local_138 = (char *)((long)&local_130 + 4);
  local_130 = CONCAT35(local_130._5_3_,0x40);
  local_140 = PTR_DAT_04bb2bc0 + 0x10;
  lVar21 = nn::os::GetSystemTick();
  lVar21 = lVar21 - DAT_05aec778;
  if (lVar21 + 0x20c49ba5e353f7U < 0x4189374bc6a7ee) {
    lVar11 = 0;
    if (*(long *)PTR_DAT_04bb29d0 != 0) {
      lVar11 = (lVar21 * 1000) / *(long *)PTR_DAT_04bb29d0;
    }
  }
  else {
    lVar11 = 0;
    if (*(long *)PTR_DAT_04bb29d0 != 0) {
      lVar11 = lVar21 / *(long *)PTR_DAT_04bb29d0;
    }
    lVar11 = lVar11 * 1000;
  }
  lVar21 = lVar11 / 1000;
  auVar4 = SEXT816(lVar11 / 60000) * ZEXT816(0x8888888888888889);
  FUN_038d13f0(&local_140,"[time: %3d:%02d:%02d.%02d]",
               (int)(SUB168(SEXT816(lVar11) * SEXT816(0x4a90be587de6e565),8) >> 0x14) -
               (SUB164(SEXT816(lVar11) * SEXT816(0x4a90be587de6e565),0xc) >> 0x1f),
               (int)(lVar11 / 60000) + ((int)(auVar4._8_8_ >> 5) - (auVar4._12_4_ >> 0x1f)) * -0x3c,
               (int)lVar21 +
               ((int)(SUB168(SEXT816(lVar21) * ZEXT816(0x8888888888888889),8) >> 5) -
               (SUB164(SEXT816(lVar21) * ZEXT816(0x8888888888888889),0xc) >> 0x1f)) * -0x3c,
               (int)(short)((short)lVar11 + (short)lVar21 * -1000) / 10);
  puVar5 = PTR_DAT_04bb3350;
  if (plVar20 == (long *)0x0) {
    nn::nifm::Initialize();
  }
  else {
    lVar21 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar11 = *(long *)(lVar21 + 0xa8);
    *(long **)(lVar21 + 0xa8) = plVar20;
    nn::nifm::Initialize();
    if (lVar11 != 1) {
      lVar21 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar5 + 0x68));
      *(long *)(lVar21 + 0xa8) = lVar11;
    }
  }
  (**(code **)(*plVar8 + 0x28))(plVar8);
  uStack_124 = 0;
  uStack_123 = 0;
  local_140 = (undefined *)CONCAT44(local_140._4_4_,2);
  local_138 = &LAB_03c10310;
  uVar3 = *(uint *)puVar7;
  uVar16 = (ulong)uVar3;
  uStack_121 = 0;
  uStack_120 = 0;
  uStack_11c = uStack_11c & 0xff000000;
  uStack_118 = 0;
  local_114 = 0;
  local_110 = 0;
  uStack_109 = 0;
  _auStack_108 = 0;
  local_d0 = 0;
  local_100 = 0;
  uStack_f8 = 0;
  local_f1 = 0;
  uStack_ed = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_d9 = 0;
  uStack_d8 = 0;
  local_c8 = 0;
  uStack_c0 = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_98 = 0x1ffffffff;
  uStack_90 = 0;
  if (0 < (int)uVar3) {
    uVar17 = uVar16 & 3;
    if (uVar3 < 4) {
      uVar18 = 0;
    }
    else {
      uVar18 = 0;
      puVar19 = auStack_108 + 4;
      do {
        uVar18 = uVar18 + 4;
        puVar19[-0x18] = 1;
        *puVar19 = 1;
        puVar19[0x18] = 1;
        puVar19[0x30] = 1;
        puVar19 = puVar19 + 0x60;
      } while ((uVar16 & 0xfffffffc) != uVar18);
    }
    if ((uVar3 & 3) != 0) {
      puVar19 = auStack_108 + uVar18 * 0x18 + -0x14;
      do {
        uVar17 = uVar17 - 1;
        *puVar19 = 1;
        puVar19 = puVar19 + 0x18;
      } while (uVar17 != 0);
    }
    if (uVar3 == 1) {
      uVar17 = 0;
    }
    else {
      uVar17 = 0;
      puVar19 = &local_102;
      do {
        bVar9 = uVar17 != 0;
        uVar17 = uVar17 + 2;
        *puVar19 = 1;
        puVar19[-0x18] = bVar9;
        puVar19 = puVar19 + 0x30;
      } while ((uVar16 & 0xfffffffe) != uVar17);
    }
    if ((uVar3 & 1) != 0) {
      auStack_108[uVar17 * 0x18 + -0x12] = uVar17 != 0;
    }
  }
  local_148 = 0;
  local_130 = *puVar14;
  local_144 = 0xffffffff;
  local_128 = 0x32000;
  local_148 = (**(code **)(*plVar8 + 0x20))(plVar8);
  local_6c = 0;
  (**(code **)(*plVar15 + 0x20))(plVar15,*puVar14,&local_140,&local_148);
  return;
}

