
void FUN_038abbb0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  int iVar10;
  byte bVar11;
  char cVar12;
  ushort uVar13;
  bool bVar14;
  uint uVar15;
  uint uVar16;
  int iVar17;
  long lVar18;
  long *plVar19;
  long lVar20;
  void *pvVar21;
  long *plVar22;
  long *plVar23;
  long *plVar24;
  ushort uVar25;
  int iVar26;
  long lVar27;
  byte *pbVar28;
  byte *pbVar29;
  ulong uVar30;
  ulong uVar31;
  uint uVar32;
  char *pcVar33;
  long *plVar34;
  long lVar35;
  size_t __n;
  undefined8 *puVar36;
  undefined4 uVar37;
  long lVar38;
  undefined *puVar39;
  undefined4 uVar40;
  undefined1 *puVar41;
  char *pcVar42;
  undefined4 uVar43;
  undefined4 local_230;
  undefined *local_200;
  char *local_1f8;
  undefined *local_1f0;
  char *local_1e8;
  undefined *local_1e0;
  char *local_1d8;
  undefined *local_1d0;
  char *local_1c8;
  undefined *local_1c0;
  char *local_1b8;
  undefined *local_1b0;
  byte *local_1a8;
  undefined *local_1a0;
  char *local_198;
  undefined4 local_74;
  
  lVar18 = FUN_038f01ec(param_2,*(undefined8 *)(param_1 + 0x118),0,0x4000);
  *(long *)(param_1 + 8) = lVar18;
  puVar1 = PTR_DAT_04bb2020;
  lVar27 = *(long *)(*(long *)(lVar18 + 8) + 0x10);
  puVar39 = PTR_DAT_04bb2020 + 0x10;
  local_198 = "parameter";
  local_1a8 = (byte *)&DAT_0407ebb1;
  local_1b8 = "";
  lVar18 = 0;
  if (lVar27 != 0) {
    lVar18 = lVar27 + -8;
  }
  local_1c0 = puVar39;
  local_1b0 = puVar39;
  local_1a0 = puVar39;
  uVar15 = FUN_038ab880(lVar18,&local_1a0,&local_1b0,&local_1c0);
  if (0 < (int)uVar15) {
    lVar27 = *(long *)PTR_DAT_04bb2698;
    if (lVar27 == 0) {
      pvVar21 = malloc((long)(int)(uVar15 * 0x88));
    }
    else {
      plVar19 = *(long **)(param_1 + 0x118);
      if (plVar19 == (long *)0x0) {
        lVar20 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
        plVar19 = (long *)(lVar27 + 8);
        if (lVar20 != 0) {
          plVar19 = (long *)(lVar20 + 0xa8);
        }
        plVar19 = (long *)*plVar19;
        if (plVar19 == (long *)0x0) goto LAB_038abd44;
      }
      pvVar21 = (void *)(**(code **)(*plVar19 + 0x30))(plVar19,(long)(int)(uVar15 * 0x88),8);
    }
    if (pvVar21 != (void *)0x0) {
      *(uint *)(param_1 + 0x34) = uVar15;
      uVar31 = (long)(int)uVar15 - 1;
      *(void **)(param_1 + 0x20) = pvVar21;
      if (1 < uVar15) {
        if ((int)uVar31 == 1) {
          uVar30 = 0;
        }
        else {
          uVar30 = 0;
          plVar19 = (long *)((long)pvVar21 + 0x88);
          do {
            uVar30 = uVar30 + 2;
            plVar19[-0x11] = (long)plVar19;
            *plVar19 = (long)(plVar19 + 0x11);
            plVar19 = plVar19 + 0x22;
          } while ((uVar31 & 0xfffffffe) != uVar30);
        }
        if ((uVar31 & 1) != 0) {
          plVar19 = (long *)((long)pvVar21 + uVar30 * 0x88);
          *plVar19 = (long)(plVar19 + 0x11);
        }
      }
      *(undefined8 *)((long)pvVar21 + uVar31 * 0x88) = 0;
      *(void **)(param_1 + 0x28) = pvVar21;
    }
  }
LAB_038abd44:
  local_198 = "parameter";
  local_1a8 = (byte *)0x40ed140;
  local_1b8 = "s32";
  local_1c0 = puVar39;
  local_1b0 = puVar39;
  local_1a0 = puVar39;
  uVar16 = FUN_038ab880(lVar18,&local_1a0,&local_1b0,&local_1c0);
  uVar32 = uVar16 - 1;
  if (0 < (int)uVar16) {
    lVar27 = *(long *)PTR_DAT_04bb2698;
    if (lVar27 == 0) {
      pvVar21 = malloc((long)(int)(uVar16 * 0x90));
    }
    else {
      plVar19 = *(long **)(param_1 + 0x118);
      if (plVar19 == (long *)0x0) {
        lVar20 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
        plVar19 = (long *)(lVar27 + 8);
        if (lVar20 != 0) {
          plVar19 = (long *)(lVar20 + 0xa8);
        }
        plVar19 = (long *)*plVar19;
        if (plVar19 == (long *)0x0) goto LAB_038abe70;
      }
      pvVar21 = (void *)(**(code **)(*plVar19 + 0x30))(plVar19,(long)(int)(uVar16 * 0x90),8);
    }
    if (pvVar21 != (void *)0x0) {
      *(uint *)(param_1 + 0x74) = uVar16;
      *(void **)(param_1 + 0x60) = pvVar21;
      if (1 < uVar16) {
        if (uVar32 == 1) {
          uVar31 = 0;
        }
        else {
          uVar31 = 0;
          plVar19 = (long *)((long)pvVar21 + 0x90);
          do {
            uVar31 = uVar31 + 2;
            plVar19[-0x12] = (long)plVar19;
            *plVar19 = (long)(plVar19 + 0x12);
            plVar19 = plVar19 + 0x24;
          } while (((ulong)uVar32 & 0xfffffffe) != uVar31);
        }
        if ((uVar32 & 1) != 0) {
          plVar19 = (long *)((long)pvVar21 + uVar31 * 0x90);
          *plVar19 = (long)(plVar19 + 0x12);
        }
      }
      *(undefined8 *)((long)pvVar21 + (long)(int)(uVar32 * 0x12) * 8) = 0;
      *(void **)(param_1 + 0x68) = pvVar21;
    }
  }
LAB_038abe70:
  puVar1 = puVar1 + 0x10;
  local_198 = "parameter";
  local_1a8 = (byte *)0x40ed140;
  local_1b8 = "u32";
  local_1c0 = puVar1;
  local_1b0 = puVar1;
  local_1a0 = puVar1;
  uVar16 = FUN_038ab880(lVar18,&local_1a0,&local_1b0,&local_1c0);
  uVar32 = uVar16 - 1;
  if (0 < (int)uVar16) {
    lVar27 = *(long *)PTR_DAT_04bb2698;
    if (lVar27 == 0) {
      pvVar21 = malloc((long)(int)(uVar16 * 0x90));
    }
    else {
      plVar19 = *(long **)(param_1 + 0x118);
      if (plVar19 == (long *)0x0) {
        lVar20 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
        plVar19 = (long *)(lVar27 + 8);
        if (lVar20 != 0) {
          plVar19 = (long *)(lVar20 + 0xa8);
        }
        plVar19 = (long *)*plVar19;
        if (plVar19 == (long *)0x0) goto LAB_038abfa0;
      }
      pvVar21 = (void *)(**(code **)(*plVar19 + 0x30))(plVar19,(long)(int)(uVar16 * 0x90),8);
    }
    if (pvVar21 != (void *)0x0) {
      *(uint *)(param_1 + 0x94) = uVar16;
      *(void **)(param_1 + 0x80) = pvVar21;
      if (1 < uVar16) {
        if (uVar32 == 1) {
          uVar31 = 0;
        }
        else {
          uVar31 = 0;
          plVar19 = (long *)((long)pvVar21 + 0x90);
          do {
            uVar31 = uVar31 + 2;
            plVar19[-0x12] = (long)plVar19;
            *plVar19 = (long)(plVar19 + 0x12);
            plVar19 = plVar19 + 0x24;
          } while (((ulong)uVar32 & 0xfffffffe) != uVar31);
        }
        if ((uVar32 & 1) != 0) {
          plVar19 = (long *)((long)pvVar21 + uVar31 * 0x90);
          *plVar19 = (long)(plVar19 + 0x12);
        }
      }
      *(undefined8 *)((long)pvVar21 + (long)(int)(uVar32 * 0x12) * 8) = 0;
      *(void **)(param_1 + 0x88) = pvVar21;
    }
  }
LAB_038abfa0:
  local_198 = "parameter";
  local_1a8 = (byte *)0x40ed140;
  local_1b8 = "f32";
  local_1c0 = puVar1;
  local_1b0 = puVar1;
  local_1a0 = puVar1;
  uVar16 = FUN_038ab880(lVar18,&local_1a0,&local_1b0,&local_1c0);
  puVar39 = PTR_DAT_04bb2020;
  uVar32 = uVar16 - 1;
  if (0 < (int)uVar16) {
    lVar27 = *(long *)PTR_DAT_04bb2698;
    if (lVar27 == 0) {
      pvVar21 = malloc((long)(int)(uVar16 * 0x90));
    }
    else {
      plVar19 = *(long **)(param_1 + 0x118);
      if (plVar19 == (long *)0x0) {
        lVar20 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
        plVar19 = (long *)(lVar27 + 8);
        if (lVar20 != 0) {
          plVar19 = (long *)(lVar20 + 0xa8);
        }
        plVar19 = (long *)*plVar19;
        if (plVar19 == (long *)0x0) goto LAB_038ac0d0;
      }
      pvVar21 = (void *)(**(code **)(*plVar19 + 0x30))(plVar19,(long)(int)(uVar16 * 0x90),8);
    }
    if (pvVar21 != (void *)0x0) {
      *(uint *)(param_1 + 0xb4) = uVar16;
      *(void **)(param_1 + 0xa0) = pvVar21;
      if (1 < uVar16) {
        if (uVar32 == 1) {
          uVar31 = 0;
        }
        else {
          uVar31 = 0;
          plVar19 = (long *)((long)pvVar21 + 0x90);
          do {
            uVar31 = uVar31 + 2;
            plVar19[-0x12] = (long)plVar19;
            *plVar19 = (long)(plVar19 + 0x12);
            plVar19 = plVar19 + 0x24;
          } while (((ulong)uVar32 & 0xfffffffe) != uVar31);
        }
        if ((uVar32 & 1) != 0) {
          plVar19 = (long *)((long)pvVar21 + uVar31 * 0x90);
          *plVar19 = (long)(plVar19 + 0x12);
        }
      }
      *(undefined8 *)((long)pvVar21 + (long)(int)(uVar32 * 0x12) * 8) = 0;
      *(void **)(param_1 + 0xa8) = pvVar21;
    }
  }
LAB_038ac0d0:
  puVar39 = puVar39 + 0x10;
  local_198 = "parameter";
  local_1a8 = (byte *)0x40ed140;
  local_1b8 = "string";
  local_1c0 = puVar39;
  local_1b0 = puVar39;
  local_1a0 = puVar39;
  uVar16 = FUN_038ab880(lVar18,&local_1a0,&local_1b0,&local_1c0);
  uVar32 = uVar16 - 1;
  if (0 < (int)uVar16) {
    lVar27 = *(long *)PTR_DAT_04bb2698;
    if (lVar27 == 0) {
      pvVar21 = malloc((long)(int)(uVar16 * 0x98));
    }
    else {
      plVar19 = *(long **)(param_1 + 0x118);
      if (plVar19 == (long *)0x0) {
        lVar20 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
        plVar19 = (long *)(lVar27 + 8);
        if (lVar20 != 0) {
          plVar19 = (long *)(lVar20 + 0xa8);
        }
        plVar19 = (long *)*plVar19;
        if (plVar19 == (long *)0x0) goto LAB_038ac200;
      }
      pvVar21 = (void *)(**(code **)(*plVar19 + 0x30))(plVar19,(long)(int)(uVar16 * 0x98),8);
    }
    if (pvVar21 != (void *)0x0) {
      *(uint *)(param_1 + 0xd4) = uVar16;
      *(void **)(param_1 + 0xc0) = pvVar21;
      if (1 < uVar16) {
        if (uVar32 == 1) {
          uVar31 = 0;
        }
        else {
          uVar31 = 0;
          plVar19 = (long *)((long)pvVar21 + 0x98);
          do {
            uVar31 = uVar31 + 2;
            plVar19[-0x13] = (long)plVar19;
            *plVar19 = (long)(plVar19 + 0x13);
            plVar19 = plVar19 + 0x26;
          } while (((ulong)uVar32 & 0xfffffffe) != uVar31);
        }
        if ((uVar32 & 1) != 0) {
          plVar19 = (long *)((long)pvVar21 + uVar31 * 0x98);
          *plVar19 = (long)(plVar19 + 0x13);
        }
      }
      *(undefined8 *)((long)pvVar21 + (long)(int)(uVar32 * 0x13) * 8) = 0;
      *(void **)(param_1 + 200) = pvVar21;
    }
  }
LAB_038ac200:
  local_198 = "parameter";
  local_1a8 = (byte *)0x40ed140;
  local_1b8 = "bool";
  local_1c0 = puVar39;
  local_1b0 = puVar39;
  local_1a0 = puVar39;
  uVar16 = FUN_038ab880(lVar18,&local_1a0,&local_1b0,&local_1c0);
  puVar39 = PTR_DAT_04bb2020;
  uVar32 = uVar16 - 1;
  if (0 < (int)uVar16) {
    lVar27 = *(long *)PTR_DAT_04bb2698;
    if (lVar27 == 0) {
      pvVar21 = malloc((long)(int)(uVar16 * 0x88));
    }
    else {
      plVar19 = *(long **)(param_1 + 0x118);
      if (plVar19 == (long *)0x0) {
        lVar20 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
        plVar19 = (long *)(lVar27 + 8);
        if (lVar20 != 0) {
          plVar19 = (long *)(lVar20 + 0xa8);
        }
        plVar19 = (long *)*plVar19;
        if (plVar19 == (long *)0x0) goto LAB_038ac32c;
      }
      pvVar21 = (void *)(**(code **)(*plVar19 + 0x30))(plVar19,(long)(int)(uVar16 * 0x88),8);
    }
    if (pvVar21 != (void *)0x0) {
      *(uint *)(param_1 + 0xf4) = uVar16;
      *(void **)(param_1 + 0xe0) = pvVar21;
      if (1 < uVar16) {
        if (uVar32 == 1) {
          uVar31 = 0;
        }
        else {
          uVar31 = 0;
          plVar19 = (long *)((long)pvVar21 + 0x88);
          do {
            uVar31 = uVar31 + 2;
            plVar19[-0x11] = (long)plVar19;
            *plVar19 = (long)(plVar19 + 0x11);
            plVar19 = plVar19 + 0x22;
          } while (((ulong)uVar32 & 0xfffffffe) != uVar31);
        }
        if ((uVar32 & 1) != 0) {
          plVar19 = (long *)((long)pvVar21 + uVar31 * 0x88);
          *plVar19 = (long)(plVar19 + 0x11);
        }
      }
      *(undefined8 *)((long)pvVar21 + (long)(int)(uVar32 * 0x11) * 8) = 0;
      *(void **)(param_1 + 0xe8) = pvVar21;
    }
  }
LAB_038ac32c:
  puVar39 = puVar39 + 0x10;
  local_198 = "parameter";
  local_1a8 = (byte *)0x40ed140;
  local_1b8 = "xml";
  local_1c0 = puVar39;
  local_1b0 = puVar39;
  local_1a0 = puVar39;
  uVar16 = FUN_038ab880(lVar18,&local_1a0,&local_1b0,&local_1c0);
  uVar32 = uVar16 - 1;
  if (0 < (int)uVar16) {
    lVar27 = *(long *)PTR_DAT_04bb2698;
    if (lVar27 == 0) {
      pvVar21 = malloc((long)(int)(uVar16 * 0x88));
    }
    else {
      plVar19 = *(long **)(param_1 + 0x118);
      if (plVar19 == (long *)0x0) {
        lVar20 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
        plVar19 = (long *)(lVar27 + 8);
        if (lVar20 != 0) {
          plVar19 = (long *)(lVar20 + 0xa8);
        }
        plVar19 = (long *)*plVar19;
        if (plVar19 == (long *)0x0) goto LAB_038ac45c;
      }
      pvVar21 = (void *)(**(code **)(*plVar19 + 0x30))(plVar19,(long)(int)(uVar16 * 0x88),8);
    }
    if (pvVar21 != (void *)0x0) {
      *(uint *)(param_1 + 0x114) = uVar16;
      *(void **)(param_1 + 0x100) = pvVar21;
      if (1 < uVar16) {
        if (uVar32 == 1) {
          uVar31 = 0;
        }
        else {
          uVar31 = 0;
          plVar19 = (long *)((long)pvVar21 + 0x88);
          do {
            uVar31 = uVar31 + 2;
            plVar19[-0x11] = (long)plVar19;
            *plVar19 = (long)(plVar19 + 0x11);
            plVar19 = plVar19 + 0x22;
          } while (((ulong)uVar32 & 0xfffffffe) != uVar31);
        }
        if ((uVar32 & 1) != 0) {
          plVar19 = (long *)((long)pvVar21 + uVar31 * 0x88);
          *plVar19 = (long)(plVar19 + 0x11);
        }
      }
      *(undefined8 *)((long)pvVar21 + (long)(int)(uVar32 * 0x11) * 8) = 0;
      *(void **)(param_1 + 0x108) = pvVar21;
    }
  }
LAB_038ac45c:
  local_198 = "";
  local_1a8 = (byte *)&DAT_0407ebb1;
  local_1b8 = "";
  local_1c0 = puVar39;
  local_1b0 = puVar39;
  local_1a0 = puVar39;
  iVar17 = FUN_038ab880(lVar18,&local_1a0,&local_1b0,&local_1c0);
  if (iVar17 < 1) {
LAB_038ac4ec:
    plVar19 = (long *)0x0;
LAB_038ac534:
    iVar17 = 0;
    uVar32 = 0;
    bVar14 = true;
    puVar39 = PTR_DAT_04bb2020;
  }
  else {
    lVar27 = *(long *)PTR_DAT_04bb2698;
    if (lVar27 == 0) {
      plVar19 = malloc((long)(iVar17 << 3));
    }
    else {
      plVar19 = *(long **)(param_1 + 0x118);
      if (plVar19 == (long *)0x0) {
        lVar20 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
        plVar19 = (long *)(lVar27 + 8);
        if (lVar20 != 0) {
          plVar19 = (long *)(lVar20 + 0xa8);
        }
        plVar19 = (long *)*plVar19;
        if (plVar19 == (long *)0x0) goto LAB_038ac4ec;
      }
      plVar19 = (long *)(**(code **)(*plVar19 + 0x30))(plVar19,(long)(iVar17 << 3),8);
    }
    puVar39 = PTR_DAT_04bb2020;
    if (plVar19 == (long *)0x0) goto LAB_038ac534;
    bVar14 = false;
    uVar32 = 1;
    *plVar19 = lVar18;
  }
  if (0 < (int)uVar15) {
    lVar18 = *(long *)PTR_DAT_04bb2698;
    if (lVar18 == 0) {
      pvVar21 = malloc((long)(int)(uVar15 * 0x158));
    }
    else {
      plVar22 = *(long **)(param_1 + 0x118);
      if (plVar22 == (long *)0x0) {
        lVar27 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
        plVar22 = (long *)(lVar18 + 8);
        if (lVar27 != 0) {
          plVar22 = (long *)(lVar27 + 0xa8);
        }
        plVar22 = (long *)*plVar22;
        if (plVar22 == (long *)0x0) goto LAB_038ac644;
      }
      pvVar21 = (void *)(**(code **)(*plVar22 + 0x30))(plVar22,(long)(int)(uVar15 * 0x158),8);
    }
    if (pvVar21 != (void *)0x0) {
      *(uint *)(param_1 + 0x54) = uVar15;
      *(void **)(param_1 + 0x40) = pvVar21;
      uVar31 = (long)(int)uVar15 - 1;
      if (1 < uVar15) {
        if ((int)uVar31 == 1) {
          uVar30 = 0;
        }
        else {
          uVar30 = 0;
          plVar22 = (long *)((long)pvVar21 + 0x158);
          do {
            uVar30 = uVar30 + 2;
            plVar22[-0x2b] = (long)plVar22;
            *plVar22 = (long)(plVar22 + 0x2b);
            plVar22 = plVar22 + 0x56;
          } while ((uVar31 & 0xfffffffe) != uVar30);
        }
        if ((uVar31 & 1) != 0) {
          plVar22 = (long *)((long)pvVar21 + uVar30 * 0x158);
          *plVar22 = (long)(plVar22 + 0x2b);
        }
      }
      *(undefined8 *)((long)pvVar21 + uVar31 * 0x158) = 0;
      *(void **)(param_1 + 0x48) = pvVar21;
    }
  }
LAB_038ac644:
  if (bVar14) {
LAB_038ac648:
    if (plVar19 != (long *)0x0) {
      if (*(long *)PTR_DAT_04bb2698 == 0) {
        free(plVar19);
      }
      else {
        plVar22 = (long *)FUN_038cb610(*(long *)PTR_DAT_04bb2698,plVar19);
        if (plVar22 != (long *)0x0) {
          (**(code **)(*plVar22 + 0x38))(plVar22,plVar19);
        }
      }
    }
    return;
  }
  plVar22 = (long *)(param_1 + 0xd8);
  plVar2 = (long *)(param_1 + 0xb8);
  plVar3 = (long *)(param_1 + 0x98);
  lVar18 = param_1 + 0x18;
  plVar4 = (long *)(param_1 + 0x38);
  plVar5 = (long *)(param_1 + 0x78);
  plVar6 = (long *)(param_1 + 0x58);
  puVar1 = puVar39 + 0x10;
  puVar7 = PTR_DAT_04bc9388 + 0x10;
LAB_038ac6d8:
  if ((int)uVar32 < 1) {
    lVar27 = 0;
  }
  else {
    lVar27 = plVar19[uVar32 - 1];
    uVar32 = uVar32 - 1;
  }
  local_198 = "parameter";
  plVar34 = (long *)(lVar27 + 0x28);
  local_1a0 = puVar1;
  (**(code **)(*plVar34 + 0x18))(plVar34);
  (**(code **)(*plVar34 + 0x18))(plVar34);
  pcVar33 = *(char **)(lVar27 + 0x30);
  (**(code **)(local_1a0 + 0x18))(&local_1a0);
  if (pcVar33 == local_198) {
LAB_038ac7c0:
    lVar38 = *(long *)(lVar27 + 0xa0);
    local_198 = "name";
    lVar20 = lVar27 + 0x68;
    if (lVar38 != lVar27 + 0x98) {
      lVar35 = lVar38 + -0x30;
      local_1a0 = puVar39 + 0x10;
      do {
        (**(code **)(*(long *)(lVar38 + -0x30) + 0x18))(lVar35);
        (**(code **)(*(long *)(lVar38 + -0x30) + 0x18))(lVar35);
        puVar41 = *(undefined1 **)(lVar35 + 8);
        (**(code **)(local_1a0 + 0x18))(&local_1a0);
        if (puVar41 == local_198) {
LAB_038ac8c0:
          local_1b0 = PTR_DAT_04bb2020 + 0x10;
          puVar36 = (undefined8 *)(lVar35 + 0x20);
          goto LAB_038ac8f8;
        }
        uVar31 = 0;
        bVar14 = true;
        lVar8 = *(long *)(lVar35 + 8) + 1;
        do {
          lVar9 = lVar8 + uVar31;
          cVar12 = *(char *)(lVar9 + -1);
          if (cVar12 != local_198[uVar31]) break;
          if (cVar12 == '\0') {
            if (bVar14) goto LAB_038ac8c0;
            break;
          }
          cVar12 = *(char *)(lVar8 + uVar31);
          if (cVar12 != local_198[uVar31 + 1]) break;
          if (cVar12 == '\0') goto LAB_038ac8c0;
          cVar12 = *(char *)(lVar9 + 1);
          if (cVar12 != local_198[uVar31 + 2]) break;
          if (cVar12 == '\0') goto LAB_038ac8c0;
          bVar14 = uVar31 < 0x7fffe;
          uVar31 = uVar31 + 3;
        } while (uVar31 != 0x80001);
        lVar38 = *(long *)(lVar38 + 8);
        lVar35 = lVar38 + -0x30;
      } while (lVar35 != lVar20);
    }
    puVar36 = (undefined8 *)(PTR_PTR_04bb2238 + 8);
    local_1b0 = puVar39 + 0x10;
LAB_038ac8f8:
    puVar39 = PTR_DAT_04bb2020 + 0x10;
    local_1a8 = (byte *)*puVar36;
    lVar38 = *(long *)(lVar27 + 0xa0);
    local_198 = "valueType";
    local_1a0 = puVar39;
    for (; lVar35 = lVar38 + -0x30, lVar35 != lVar20; lVar38 = *(long *)(lVar38 + 8)) {
      (**(code **)(*(long *)(lVar38 + -0x30) + 0x18))(lVar35);
      (**(code **)(*(long *)(lVar38 + -0x30) + 0x18))(lVar35);
      pcVar33 = *(char **)(lVar38 + -0x28);
      (**(code **)(local_1a0 + 0x18))(&local_1a0);
      if (pcVar33 == local_198) {
LAB_038ac9f0:
        puVar36 = (undefined8 *)(lVar38 + -0x10);
        local_1c0 = PTR_DAT_04bb2020 + 0x10;
        goto LAB_038aca28;
      }
      uVar31 = 0;
      bVar14 = true;
      lVar35 = *(long *)(lVar38 + -0x28) + 1;
      do {
        lVar8 = lVar35 + uVar31;
        cVar12 = *(char *)(lVar8 + -1);
        if (cVar12 != local_198[uVar31]) break;
        if (cVar12 == '\0') {
          if (bVar14) goto LAB_038ac9f0;
          break;
        }
        cVar12 = *(char *)(lVar35 + uVar31);
        if (cVar12 != local_198[uVar31 + 1]) break;
        if (cVar12 == '\0') goto LAB_038ac9f0;
        cVar12 = *(char *)(lVar8 + 1);
        if (cVar12 != local_198[uVar31 + 2]) break;
        if (cVar12 == '\0') goto LAB_038ac9f0;
        bVar14 = uVar31 < 0x7fffe;
        uVar31 = uVar31 + 3;
      } while (uVar31 != 0x80001);
    }
    puVar36 = (undefined8 *)(PTR_PTR_04bb2238 + 8);
    local_1c0 = puVar39;
LAB_038aca28:
    puVar39 = PTR_DAT_04bb2020 + 0x10;
    local_1b8 = (char *)*puVar36;
    lVar38 = *(long *)(lVar27 + 0xa0);
    local_198 = "defaultValue";
    local_1a0 = puVar39;
    for (; lVar35 = lVar38 + -0x30, lVar35 != lVar20; lVar38 = *(long *)(lVar38 + 8)) {
      (**(code **)(*(long *)(lVar38 + -0x30) + 0x18))(lVar35);
      (**(code **)(*(long *)(lVar38 + -0x30) + 0x18))(lVar35);
      pcVar33 = *(char **)(lVar38 + -0x28);
      (**(code **)(local_1a0 + 0x18))(&local_1a0);
      if (pcVar33 == local_198) {
LAB_038acb20:
        puVar36 = (undefined8 *)(lVar38 + -0x10);
        local_1d0 = PTR_DAT_04bb2020 + 0x10;
        goto LAB_038acb58;
      }
      uVar31 = 0;
      bVar14 = true;
      lVar35 = *(long *)(lVar38 + -0x28) + 1;
      do {
        lVar8 = lVar35 + uVar31;
        cVar12 = *(char *)(lVar8 + -1);
        if (cVar12 != local_198[uVar31]) break;
        if (cVar12 == '\0') {
          if (bVar14) goto LAB_038acb20;
          break;
        }
        cVar12 = *(char *)(lVar35 + uVar31);
        if (cVar12 != local_198[uVar31 + 1]) break;
        if (cVar12 == '\0') goto LAB_038acb20;
        cVar12 = *(char *)(lVar8 + 1);
        if (cVar12 != local_198[uVar31 + 2]) break;
        if (cVar12 == '\0') goto LAB_038acb20;
        bVar14 = uVar31 < 0x7fffe;
        uVar31 = uVar31 + 3;
      } while (uVar31 != 0x80001);
    }
    puVar36 = (undefined8 *)(PTR_PTR_04bb2238 + 8);
    local_1d0 = puVar39;
LAB_038acb58:
    puVar39 = PTR_DAT_04bb2020;
    local_1c8 = (char *)*puVar36;
    local_1a0 = PTR_DAT_04bb2020 + 0x10;
    local_198 = "s32";
    (**(code **)(local_1c0 + 0x18))(&local_1c0);
    (**(code **)(local_1c0 + 0x18))(&local_1c0);
    pcVar33 = local_1b8;
    (**(code **)(local_1a0 + 0x18))(&local_1a0);
    if (pcVar33 == local_198) {
LAB_038acc24:
      local_1a0 = (undefined *)((ulong)local_1a0 & 0xffffffff00000000);
      FUN_038af500(lVar18,&local_1b0,&local_1a0);
      lVar38 = *(long *)(lVar27 + 0xa0);
      local_198 = "min";
      local_1a0 = puVar39 + 0x10;
      for (; lVar35 = lVar38 + -0x30, lVar35 != lVar20; lVar38 = *(long *)(lVar38 + 8)) {
        (**(code **)(*(long *)(lVar38 + -0x30) + 0x18))(lVar35);
        (**(code **)(*(long *)(lVar38 + -0x30) + 0x18))(lVar35);
        puVar41 = *(undefined1 **)(lVar38 + -0x28);
        (**(code **)(local_1a0 + 0x18))(&local_1a0);
        if (puVar41 == local_198) {
LAB_038acde0:
          puVar36 = (undefined8 *)(lVar38 + -0x10);
          local_1e0 = PTR_DAT_04bb2020 + 0x10;
          goto LAB_038ace10;
        }
        uVar31 = 0;
        bVar14 = true;
        lVar35 = *(long *)(lVar38 + -0x28) + 1;
        do {
          lVar8 = lVar35 + uVar31;
          cVar12 = *(char *)(lVar8 + -1);
          if (cVar12 != local_198[uVar31]) break;
          if (cVar12 == '\0') {
            if (bVar14) goto LAB_038acde0;
            break;
          }
          cVar12 = *(char *)(lVar35 + uVar31);
          if (cVar12 != local_198[uVar31 + 1]) break;
          if (cVar12 == '\0') goto LAB_038acde0;
          cVar12 = *(char *)(lVar8 + 1);
          if (cVar12 != local_198[uVar31 + 2]) break;
          if (cVar12 == '\0') goto LAB_038acde0;
          bVar14 = uVar31 < 0x7fffe;
          uVar31 = uVar31 + 3;
        } while (uVar31 != 0x80001);
      }
      puVar36 = (undefined8 *)(PTR_PTR_04bb2238 + 8);
      local_1e0 = puVar39 + 0x10;
LAB_038ace10:
      puVar39 = PTR_DAT_04bb2020;
      local_1d8 = (char *)*puVar36;
      if (*local_1d8 == '\0') {
        local_230 = 0x80000000;
      }
      else {
        local_1f0 = PTR_DAT_04bb2020 + 0x10;
        local_1e8 = "min";
        uVar31 = FUN_038d30c0(&local_200,&local_1e0,0xffffffff);
        if ((uVar31 & 1) == 0) {
          (**(code **)(local_1b0 + 0x18))(&local_1b0);
          pbVar28 = local_1a8;
          (**(code **)(local_1f0 + 0x18))(&local_1f0);
          pcVar33 = local_1e8;
          (**(code **)(local_1e0 + 0x18))(&local_1e0);
          local_230 = 0x80000000;
          FUN_006e9528(&local_1a0,
                       "parameter parse failed. (name: \"%s\", attr: \"%s\", str: \"%s\", alt: \"%d\")"
                       ,pbVar28,pcVar33,local_1d8,0x80000000);
        }
        else {
          local_230 = SUB84(local_200,0);
        }
      }
      local_198 = "max";
      local_1a0 = puVar39 + 0x10;
      for (lVar38 = *(long *)(lVar27 + 0xa0); lVar35 = lVar38 + -0x30, lVar35 != lVar20;
          lVar38 = *(long *)(lVar38 + 8)) {
        (**(code **)(*(long *)(lVar38 + -0x30) + 0x18))(lVar35);
        (**(code **)(*(long *)(lVar38 + -0x30) + 0x18))(lVar35);
        pcVar33 = *(char **)(lVar38 + -0x28);
        (**(code **)(local_1a0 + 0x18))(&local_1a0);
        if (pcVar33 == local_198) {
LAB_038acfa0:
          puVar36 = (undefined8 *)(lVar38 + -0x10);
          local_1f0 = PTR_DAT_04bb2020 + 0x10;
          goto LAB_038acfd4;
        }
        uVar31 = 0;
        bVar14 = true;
        lVar35 = *(long *)(lVar38 + -0x28) + 1;
        do {
          lVar8 = lVar35 + uVar31;
          cVar12 = *(char *)(lVar8 + -1);
          if (cVar12 != local_198[uVar31]) break;
          if (cVar12 == '\0') {
            if (bVar14) goto LAB_038acfa0;
            break;
          }
          cVar12 = *(char *)(lVar35 + uVar31);
          if (cVar12 != local_198[uVar31 + 1]) break;
          if (cVar12 == '\0') goto LAB_038acfa0;
          cVar12 = *(char *)(lVar8 + 1);
          if (cVar12 != local_198[uVar31 + 2]) break;
          if (cVar12 == '\0') goto LAB_038acfa0;
          bVar14 = uVar31 < 0x7fffe;
          uVar31 = uVar31 + 3;
        } while (uVar31 != 0x80001);
      }
      puVar36 = (undefined8 *)(PTR_PTR_04bb2238 + 8);
      local_1f0 = puVar39 + 0x10;
LAB_038acfd4:
      puVar39 = PTR_DAT_04bb2020;
      local_1e8 = (char *)*puVar36;
      if (*local_1e8 == '\0') {
        uVar40 = 0x7fffffff;
      }
      else {
        local_200 = PTR_DAT_04bb2020 + 0x10;
        local_1f8 = "max";
        uVar31 = FUN_038d30c0(&local_74,&local_1f0,0xffffffff);
        if ((uVar31 & 1) == 0) {
          (**(code **)(local_1b0 + 0x18))(&local_1b0);
          pbVar28 = local_1a8;
          (**(code **)(local_200 + 0x18))(&local_200);
          pcVar33 = local_1f8;
          (**(code **)(local_1f0 + 0x18))(&local_1f0);
          puVar39 = PTR_DAT_04bb2020;
          uVar40 = 0x7fffffff;
          FUN_006e9528(&local_1a0,
                       "parameter parse failed. (name: \"%s\", attr: \"%s\", str: \"%s\", alt: \"%d\")"
                       ,pbVar28,pcVar33,local_1e8,0x7fffffff);
        }
        else {
          uVar40 = local_74;
        }
      }
      local_200 = puVar39 + 0x10;
      local_1f8 = "defaultValue";
      uVar31 = FUN_038d30c0(&local_74,&local_1d0,0xffffffff);
      if ((uVar31 & 1) == 0) {
        (**(code **)(local_1b0 + 0x18))(&local_1b0);
        pbVar28 = local_1a8;
        (**(code **)(local_200 + 0x18))(&local_200);
        pcVar33 = local_1f8;
        (**(code **)(local_1d0 + 0x18))(&local_1d0);
        FUN_006e9528(&local_1a0,
                     "parameter parse failed. (name: \"%s\", attr: \"%s\", str: \"%s\", alt: \"%d\")"
                     ,pbVar28,pcVar33,local_1c8,0);
        uVar37 = 0;
      }
      else {
        uVar37 = local_74;
      }
      if (*(int *)(param_1 + 0x70) < *(int *)(param_1 + 0x74)) {
        puVar36 = *(undefined8 **)(param_1 + 0x60);
        if (puVar36 != (undefined8 *)0x0) {
          *(undefined8 *)(param_1 + 0x60) = *puVar36;
        }
        puVar36[4] = PTR_DAT_04bb2020 + 0x10;
        puVar39 = PTR_DAT_04bb2120;
        *(undefined4 *)(puVar36 + 6) = uVar37;
        *(undefined4 *)((long)puVar36 + 0x34) = uVar37;
        puVar36[2] = 0;
        puVar36[3] = 0;
        *(undefined1 *)(puVar36 + 0x11) = 0;
        pbVar28 = (byte *)(puVar36 + 9);
        puVar36[5] = puVar39;
        puVar36[8] = plVar6;
        *puVar36 = &PTR_LAB_04b62a30;
        puVar36[1] = 0;
        *(undefined4 *)(puVar36 + 7) = local_230;
        *(undefined4 *)((long)puVar36 + 0x3c) = uVar40;
        (**(code **)(local_1b0 + 0x18))(&local_1b0);
        pbVar29 = local_1a8;
        if (pbVar28 != local_1a8) {
          (**(code **)(local_1b0 + 0x18))(&local_1b0);
          lVar38 = 0;
          do {
            if (local_1a8[lVar38] == 0) {
LAB_038ad270:
              iVar26 = (int)lVar38;
joined_r0x038ad274:
              if (0x40 < iVar26) {
                iVar26 = 0x40;
              }
              goto LAB_038ad27c;
            }
            if (local_1a8[lVar38 + 1] == 0) {
              lVar38 = lVar38 + 1;
              goto LAB_038ad270;
            }
            if (local_1a8[lVar38 + 2] == 0) {
              iVar26 = (int)lVar38 + 2;
              goto joined_r0x038ad274;
            }
            lVar38 = lVar38 + 3;
          } while (lVar38 != 0x80001);
          iVar26 = 0;
LAB_038ad27c:
          memcpy(pbVar28,pbVar29,(long)iVar26);
          pbVar28[iVar26] = 0;
        }
        puVar36[5] = pbVar28;
        *(int *)(param_1 + 0x70) = *(int *)(param_1 + 0x70) + 1;
        lVar38 = FUN_038b0320(plVar6,*(undefined8 *)(param_1 + 0x58),puVar36);
        *(long *)(param_1 + 0x58) = lVar38;
        goto LAB_038aec24;
      }
      for (lVar38 = *plVar6; lVar38 != 0; lVar38 = *(long *)(lVar38 + lVar35)) {
        (**(code **)(local_1b0 + 0x18))(&local_1b0);
        (**(code **)(local_1b0 + 0x18))(&local_1b0);
        pbVar28 = local_1a8;
        (**(code **)(*(long *)(lVar38 + 0x20) + 0x18))((long *)(lVar38 + 0x20));
        if (pbVar28 == *(byte **)(lVar38 + 0x28)) goto LAB_038ad91c;
        pbVar28 = *(byte **)(lVar38 + 0x28);
        pbVar29 = local_1a8;
        lVar35 = 0x7ffff;
        while( true ) {
          bVar11 = *pbVar29;
          if (bVar11 != *pbVar28) break;
          if ((bVar11 == 0) ||
             (bVar14 = lVar35 == 0, pbVar28 = pbVar28 + 1, pbVar29 = pbVar29 + 1,
             lVar35 = lVar35 + -1, bVar14)) goto LAB_038ad91c;
        }
        lVar35 = 8;
        if (*pbVar28 <= bVar11) {
          lVar35 = 0x10;
        }
      }
    }
    else {
      uVar31 = 0;
      bVar14 = true;
      do {
        if (local_1b8[uVar31] != local_198[uVar31]) break;
        if (local_1b8[uVar31] == '\0') {
          if (bVar14) goto LAB_038acc24;
          break;
        }
        if (local_1b8[uVar31 + 1] != local_198[uVar31 + 1]) break;
        if (local_1b8[uVar31 + 1] == '\0') goto LAB_038acc24;
        if (local_1b8[uVar31 + 2] != local_198[uVar31 + 2]) break;
        if (local_1b8[uVar31 + 2] == '\0') goto LAB_038acc24;
        bVar14 = uVar31 < 0x7fffe;
        uVar31 = uVar31 + 3;
      } while (uVar31 != 0x80001);
      local_1a0 = puVar39 + 0x10;
      local_198 = "u32";
      (**(code **)(local_1c0 + 0x18))(&local_1c0);
      (**(code **)(local_1c0 + 0x18))(&local_1c0);
      pcVar33 = local_1b8;
      (**(code **)(local_1a0 + 0x18))(&local_1a0);
      if (pcVar33 != local_198) {
        uVar31 = 0;
        bVar14 = true;
        do {
          if (local_1b8[uVar31] != local_198[uVar31]) break;
          if (local_1b8[uVar31] == '\0') {
            if (bVar14) goto LAB_038ad2dc;
            break;
          }
          if (local_1b8[uVar31 + 1] != local_198[uVar31 + 1]) break;
          if (local_1b8[uVar31 + 1] == '\0') goto LAB_038ad2dc;
          if (local_1b8[uVar31 + 2] != local_198[uVar31 + 2]) break;
          if (local_1b8[uVar31 + 2] == '\0') goto LAB_038ad2dc;
          bVar14 = uVar31 < 0x7fffe;
          uVar31 = uVar31 + 3;
        } while (uVar31 != 0x80001);
        local_1a0 = puVar39 + 0x10;
        local_198 = "f32";
        (**(code **)(local_1c0 + 0x18))(&local_1c0);
        (**(code **)(local_1c0 + 0x18))(&local_1c0);
        pcVar33 = local_1b8;
        (**(code **)(local_1a0 + 0x18))(&local_1a0);
        if (pcVar33 != local_198) {
          uVar31 = 0;
          bVar14 = true;
          do {
            if (local_1b8[uVar31] != local_198[uVar31]) break;
            if (local_1b8[uVar31] == '\0') {
              if (bVar14) goto LAB_038ad9a0;
              break;
            }
            if (local_1b8[uVar31 + 1] != local_198[uVar31 + 1]) break;
            if (local_1b8[uVar31 + 1] == '\0') goto LAB_038ad9a0;
            if (local_1b8[uVar31 + 2] != local_198[uVar31 + 2]) break;
            if (local_1b8[uVar31 + 2] == '\0') goto LAB_038ad9a0;
            bVar14 = uVar31 < 0x7fffe;
            uVar31 = uVar31 + 3;
          } while (uVar31 != 0x80001);
          local_1a0 = puVar39 + 0x10;
          local_198 = "string";
          (**(code **)(local_1c0 + 0x18))(&local_1c0);
          (**(code **)(local_1c0 + 0x18))(&local_1c0);
          pcVar33 = local_1b8;
          (**(code **)(local_1a0 + 0x18))(&local_1a0);
          if (pcVar33 != local_198) {
            uVar31 = 0;
            bVar14 = true;
            do {
              if (local_1b8[uVar31] != local_198[uVar31]) break;
              if (local_1b8[uVar31] == '\0') {
                if (bVar14) goto LAB_038ae038;
                break;
              }
              if (local_1b8[uVar31 + 1] != local_198[uVar31 + 1]) break;
              if (local_1b8[uVar31 + 1] == '\0') goto LAB_038ae038;
              if (local_1b8[uVar31 + 2] != local_198[uVar31 + 2]) break;
              if (local_1b8[uVar31 + 2] == '\0') goto LAB_038ae038;
              bVar14 = uVar31 < 0x7fffe;
              uVar31 = uVar31 + 3;
            } while (uVar31 != 0x80001);
            local_1a0 = puVar39 + 0x10;
            local_198 = "bool";
            (**(code **)(local_1c0 + 0x18))(&local_1c0);
            (**(code **)(local_1c0 + 0x18))(&local_1c0);
            pcVar33 = local_1b8;
            (**(code **)(local_1a0 + 0x18))(&local_1a0);
            if (pcVar33 != local_198) {
              uVar31 = 0;
              bVar14 = true;
              do {
                if (local_1b8[uVar31] != local_198[uVar31]) break;
                if (local_1b8[uVar31] == '\0') {
                  if (bVar14) goto LAB_038ae820;
                  break;
                }
                if (local_1b8[uVar31 + 1] != local_198[uVar31 + 1]) break;
                if (local_1b8[uVar31 + 1] == '\0') goto LAB_038ae820;
                if (local_1b8[uVar31 + 2] != local_198[uVar31 + 2]) break;
                if (local_1b8[uVar31 + 2] == '\0') goto LAB_038ae820;
                bVar14 = uVar31 < 0x7fffe;
                uVar31 = uVar31 + 3;
              } while (uVar31 != 0x80001);
              local_1a0 = puVar39 + 0x10;
              local_198 = "xml";
              (**(code **)(local_1c0 + 0x18))(&local_1c0);
              (**(code **)(local_1c0 + 0x18))(&local_1c0);
              pcVar33 = local_1b8;
              (**(code **)(local_1a0 + 0x18))(&local_1a0);
              if (pcVar33 == local_198) {
LAB_038ae9e0:
                local_1a0 = (undefined *)CONCAT44(local_1a0._4_4_,5);
                FUN_038af500(lVar18,&local_1b0,&local_1a0);
              }
              else {
                uVar31 = 0;
                bVar14 = true;
                do {
                  if (local_1b8[uVar31] != local_198[uVar31]) break;
                  if (local_1b8[uVar31] == '\0') {
                    if (bVar14) goto LAB_038ae9e0;
                    break;
                  }
                  if (local_1b8[uVar31 + 1] != local_198[uVar31 + 1]) break;
                  if (local_1b8[uVar31 + 1] == '\0') goto LAB_038ae9e0;
                  if (local_1b8[uVar31 + 2] != local_198[uVar31 + 2]) break;
                  if (local_1b8[uVar31 + 2] == '\0') goto LAB_038ae9e0;
                  bVar14 = uVar31 < 0x7fffe;
                  uVar31 = uVar31 + 3;
                } while (uVar31 != 0x80001);
              }
              goto LAB_038aec28;
            }
LAB_038ae820:
            local_1a0 = (undefined *)CONCAT44(local_1a0._4_4_,4);
            FUN_038af500(lVar18,&local_1b0,&local_1a0);
            local_1a0 = puVar39 + 0x10;
            local_198 = "false";
            (**(code **)(local_1d0 + 0x18))(&local_1d0);
            (**(code **)(local_1d0 + 0x18))(&local_1d0);
            pcVar33 = local_1c8;
            (**(code **)(local_1a0 + 0x18))(&local_1a0);
            if (pcVar33 == local_198) {
LAB_038ae9cc:
              uVar15 = 1;
            }
            else if (*local_1c8 == *local_198) {
              if (*local_1c8 == '\0') goto LAB_038ae9cc;
              uVar31 = 0;
              pcVar33 = local_198 + 1;
              do {
                if (local_1c8[uVar31 + 1] != pcVar33[uVar31]) {
                  pcVar33 = (char *)0x0;
                  goto LAB_038aea34;
                }
                if (local_1c8[uVar31 + 1] == '\0') {
                  pcVar33 = (char *)0x1;
                  goto LAB_038aea34;
                }
                if (local_1c8[uVar31 + 2] != pcVar33[uVar31 + 1]) {
                  pcVar33 = (char *)0x0;
                  uVar31 = uVar31 + 1;
                  goto LAB_038aea34;
                }
                if (local_1c8[uVar31 + 2] == '\0') {
                  uVar31 = uVar31 + 1;
                  pcVar33 = (char *)0x1;
                  goto LAB_038aea34;
                }
                if (uVar31 == 0x7fffe) {
                  uVar31 = 0x80000;
                  goto LAB_038aea34;
                }
                lVar38 = uVar31 + 3;
                uVar30 = uVar31 + 2;
                if (local_1c8[lVar38] != pcVar33[uVar31 + 2]) {
                  pcVar33 = (char *)0x0;
                  goto LAB_038aea30;
                }
                uVar31 = uVar31 + 3;
              } while (local_1c8[lVar38] != '\0');
              pcVar33 = (char *)0x1;
LAB_038aea30:
              uVar31 = uVar30;
LAB_038aea34:
              uVar15 = (uint)(uVar31 < 0x80000) & (uint)pcVar33;
            }
            else {
              uVar15 = 0;
            }
            uVar13 = (ushort)uVar15 ^ 1;
            if (*(int *)(param_1 + 0xf0) < *(int *)(param_1 + 0xf4)) {
              puVar36 = *(undefined8 **)(param_1 + 0xe0);
              if (puVar36 != (undefined8 *)0x0) {
                *(undefined8 *)(param_1 + 0xe0) = *puVar36;
              }
              pbVar28 = (byte *)(puVar36 + 8);
              puVar36[4] = PTR_DAT_04bb2020 + 0x10;
              puVar39 = PTR_DAT_04bb2120;
              puVar36[2] = 0;
              puVar36[3] = 0;
              *(undefined1 *)(puVar36 + 0x10) = 0;
              puVar36[5] = puVar39;
              puVar36[7] = plVar22;
              *puVar36 = &PTR_LAB_04b62ad0;
              puVar36[1] = 0;
              uVar25 = 0;
              if (uVar15 == 0) {
                uVar25 = 0x100;
              }
              *(ushort *)(puVar36 + 6) = uVar25 | uVar13;
              (**(code **)(local_1b0 + 0x18))(&local_1b0);
              pbVar29 = local_1a8;
              if (pbVar28 != local_1a8) {
                (**(code **)(local_1b0 + 0x18))(&local_1b0);
                lVar38 = 0;
                do {
                  if (local_1a8[lVar38] == 0) {
LAB_038aebd8:
                    iVar26 = (int)lVar38;
                    if (0x40 < iVar26) {
                      iVar26 = 0x40;
                    }
                    goto LAB_038aebe4;
                  }
                  if (local_1a8[lVar38 + 1] == 0) {
                    lVar38 = lVar38 + 1;
                    goto LAB_038aebd8;
                  }
                  if (local_1a8[lVar38 + 2] == 0) {
                    lVar38 = lVar38 + 2;
                    goto LAB_038aebd8;
                  }
                  lVar38 = lVar38 + 3;
                } while (lVar38 != 0x80001);
                iVar26 = 0;
LAB_038aebe4:
                memcpy(pbVar28,pbVar29,(long)iVar26);
                pbVar28[iVar26] = 0;
              }
              puVar36[5] = pbVar28;
              *(int *)(param_1 + 0xf0) = *(int *)(param_1 + 0xf0) + 1;
              lVar38 = FUN_038b0320(plVar22,*(undefined8 *)(param_1 + 0xd8),puVar36);
              *(long *)(param_1 + 0xd8) = lVar38;
              goto LAB_038aec24;
            }
            for (lVar38 = *plVar22; lVar38 != 0; lVar38 = *(long *)(lVar38 + lVar35)) {
              (**(code **)(local_1b0 + 0x18))(&local_1b0);
              (**(code **)(local_1b0 + 0x18))(&local_1b0);
              pbVar28 = local_1a8;
              (**(code **)(*(long *)(lVar38 + 0x20) + 0x18))((long *)(lVar38 + 0x20));
              if (pbVar28 == *(byte **)(lVar38 + 0x28)) {
LAB_038aebb0:
                uVar25 = 0;
                if (uVar15 == 0) {
                  uVar25 = 0x100;
                }
                *(ushort *)(lVar38 + 0x30) = uVar25 | uVar13;
                break;
              }
              pbVar28 = *(byte **)(lVar38 + 0x28);
              pbVar29 = local_1a8;
              lVar35 = 0x7ffff;
              while( true ) {
                bVar11 = *pbVar29;
                if (bVar11 != *pbVar28) break;
                if ((bVar11 == 0) ||
                   (bVar14 = lVar35 == 0, pbVar28 = pbVar28 + 1, pbVar29 = pbVar29 + 1,
                   lVar35 = lVar35 + -1, bVar14)) goto LAB_038aebb0;
              }
              lVar35 = 8;
              if (*pbVar28 <= bVar11) {
                lVar35 = 0x10;
              }
            }
            goto LAB_038aec28;
          }
LAB_038ae038:
          local_1a0 = (undefined *)CONCAT44(local_1a0._4_4_,3);
          FUN_038af500(lVar18,&local_1b0,&local_1a0);
          lVar38 = *(long *)(lVar27 + 0xa0);
          local_198 = "maxLength";
          local_1a0 = puVar39 + 0x10;
          for (; lVar35 = lVar38 + -0x30, lVar35 != lVar20; lVar38 = *(long *)(lVar38 + 8)) {
            (**(code **)(*(long *)(lVar38 + -0x30) + 0x18))(lVar35);
            (**(code **)(*(long *)(lVar38 + -0x30) + 0x18))(lVar35);
            pcVar33 = *(char **)(lVar38 + -0x28);
            (**(code **)(local_1a0 + 0x18))(&local_1a0);
            if (pcVar33 == local_198) {
LAB_038ae1fc:
              puVar36 = (undefined8 *)(lVar38 + -0x10);
              local_1e0 = PTR_DAT_04bb2020 + 0x10;
              goto LAB_038ae22c;
            }
            uVar31 = 0;
            bVar14 = true;
            lVar35 = *(long *)(lVar38 + -0x28) + 1;
            do {
              lVar8 = lVar35 + uVar31;
              cVar12 = *(char *)(lVar8 + -1);
              if (cVar12 != local_198[uVar31]) break;
              if (cVar12 == '\0') {
                if (bVar14) goto LAB_038ae1fc;
                break;
              }
              cVar12 = *(char *)(lVar35 + uVar31);
              if (cVar12 != local_198[uVar31 + 1]) break;
              if (cVar12 == '\0') goto LAB_038ae1fc;
              cVar12 = *(char *)(lVar8 + 1);
              if (cVar12 != local_198[uVar31 + 2]) break;
              if (cVar12 == '\0') goto LAB_038ae1fc;
              bVar14 = uVar31 < 0x7fffe;
              uVar31 = uVar31 + 3;
            } while (uVar31 != 0x80001);
          }
          puVar36 = (undefined8 *)(PTR_PTR_04bb2238 + 8);
          local_1e0 = puVar39 + 0x10;
LAB_038ae22c:
          local_1d8 = (char *)*puVar36;
          if (*local_1d8 == '\0') {
            iVar26 = 0x41;
          }
          else {
            local_1f0 = PTR_DAT_04bb2020 + 0x10;
            local_1e8 = "maxLength";
            uVar31 = FUN_038d30c0(&local_200,&local_1e0,0xffffffff);
            if ((uVar31 & 1) == 0) {
              (**(code **)(local_1b0 + 0x18))(&local_1b0);
              pbVar28 = local_1a8;
              (**(code **)(local_1f0 + 0x18))(&local_1f0);
              pcVar33 = local_1e8;
              (**(code **)(local_1e0 + 0x18))(&local_1e0);
              FUN_006e9528(&local_1a0,
                           "parameter parse failed. (name: \"%s\", attr: \"%s\", str: \"%s\", alt: \"%d\")"
                           ,pbVar28,pcVar33,local_1d8,0x41);
              iVar26 = 0x41;
            }
            else {
              iVar26 = (int)local_200;
            }
          }
          lVar38 = *(long *)PTR_DAT_04bb2698;
          if (lVar38 == 0) {
            plVar34 = malloc(0x18);
LAB_038ae3a0:
            pvVar21 = malloc((long)iVar26);
          }
          else {
            plVar34 = *(long **)(param_1 + 0x118);
            if (plVar34 == (long *)0x0) {
              lVar35 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
              plVar34 = (long *)(lVar38 + 8);
              if (lVar35 != 0) {
                plVar34 = (long *)(lVar35 + 0xa8);
              }
              plVar34 = (long *)*plVar34;
              if (plVar34 != (long *)0x0) goto LAB_038ae314;
              plVar34 = (long *)0x0;
            }
            else {
LAB_038ae314:
              plVar34 = (long *)(**(code **)(*plVar34 + 0x30))(plVar34,0x18,8);
            }
            lVar38 = *(long *)PTR_DAT_04bb2698;
            if (lVar38 == 0) goto LAB_038ae3a0;
            plVar23 = *(long **)(param_1 + 0x118);
            if (plVar23 == (long *)0x0) {
              lVar35 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
              plVar23 = (long *)(lVar38 + 8);
              if (lVar35 != 0) {
                plVar23 = (long *)(lVar35 + 0xa8);
              }
              plVar23 = (long *)*plVar23;
            }
            pvVar21 = (void *)(**(code **)(*plVar23 + 0x30))(plVar23,(long)iVar26,8);
          }
          __n = (size_t)iVar26;
          memset(pvVar21,0,__n);
          plVar34[1] = (long)pvVar21;
          *(int *)(plVar34 + 2) = iVar26;
          *(undefined1 *)((long)pvVar21 + (ulong)(iVar26 - 1)) = 0;
          *plVar34 = (long)puVar7;
          *(undefined1 *)plVar34[1] = 0;
          pcVar42 = (char *)plVar34[1];
          (**(code **)(local_1d0 + 0x18))(&local_1d0);
          pcVar33 = local_1c8;
          if (pcVar42 != local_1c8) {
            (**(code **)(local_1d0 + 0x18))(&local_1d0);
            lVar38 = 0;
            do {
              if (local_1c8[lVar38] == '\0') goto LAB_038ae45c;
              if (local_1c8[lVar38 + 1] == '\0') {
                lVar38 = lVar38 + 1;
                goto LAB_038ae45c;
              }
              if (local_1c8[lVar38 + 2] == '\0') {
                lVar38 = lVar38 + 2;
                goto LAB_038ae45c;
              }
              lVar38 = lVar38 + 3;
            } while (lVar38 != 0x80001);
            lVar38 = 0;
LAB_038ae45c:
            iVar10 = (int)lVar38;
            if ((int)plVar34[2] <= (int)lVar38) {
              iVar10 = (int)plVar34[2] + -1;
            }
            memcpy(pcVar42,pcVar33,(long)iVar10);
            pcVar42[iVar10] = '\0';
          }
          lVar38 = *(long *)PTR_DAT_04bb2698;
          if (lVar38 == 0) {
            plVar23 = malloc(0x18);
LAB_038ae54c:
            pvVar21 = malloc(__n);
          }
          else {
            plVar23 = *(long **)(param_1 + 0x118);
            if (plVar23 == (long *)0x0) {
              lVar35 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
              plVar23 = (long *)(lVar38 + 8);
              if (lVar35 != 0) {
                plVar23 = (long *)(lVar35 + 0xa8);
              }
              plVar23 = (long *)*plVar23;
              if (plVar23 != (long *)0x0) goto LAB_038ae4cc;
              plVar23 = (long *)0x0;
            }
            else {
LAB_038ae4cc:
              plVar23 = (long *)(**(code **)(*plVar23 + 0x30))(plVar23,0x18,8);
            }
            lVar38 = *(long *)PTR_DAT_04bb2698;
            if (lVar38 == 0) goto LAB_038ae54c;
            plVar24 = *(long **)(param_1 + 0x118);
            if (plVar24 == (long *)0x0) {
              lVar35 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
              plVar24 = (long *)(lVar38 + 8);
              if (lVar35 != 0) {
                plVar24 = (long *)(lVar35 + 0xa8);
              }
              plVar24 = (long *)*plVar24;
            }
            pvVar21 = (void *)(**(code **)(*plVar24 + 0x30))(plVar24,__n,8);
          }
          memset(pvVar21,0,__n);
          plVar23[1] = (long)pvVar21;
          *(int *)(plVar23 + 2) = iVar26;
          *(undefined1 *)((long)pvVar21 + (ulong)(iVar26 - 1)) = 0;
          *plVar23 = (long)(PTR_DAT_04bc9388 + 0x10);
          *(undefined1 *)plVar23[1] = 0;
          pcVar42 = (char *)plVar23[1];
          (**(code **)(local_1d0 + 0x18))(&local_1d0);
          pcVar33 = local_1c8;
          if (pcVar42 != local_1c8) {
            (**(code **)(local_1d0 + 0x18))(&local_1d0);
            lVar38 = 0;
            do {
              if (local_1c8[lVar38] == '\0') goto LAB_038ae60c;
              if (local_1c8[lVar38 + 1] == '\0') {
                lVar38 = lVar38 + 1;
                goto LAB_038ae60c;
              }
              if (local_1c8[lVar38 + 2] == '\0') {
                lVar38 = lVar38 + 2;
                goto LAB_038ae60c;
              }
              lVar38 = lVar38 + 3;
            } while (lVar38 != 0x80001);
            lVar38 = 0;
LAB_038ae60c:
            iVar10 = (int)lVar38;
            if ((int)plVar23[2] <= (int)lVar38) {
              iVar10 = (int)plVar23[2] + -1;
            }
            memcpy(pcVar42,pcVar33,(long)iVar10);
            pcVar42[iVar10] = '\0';
          }
          if (*(int *)(param_1 + 0xd0) < *(int *)(param_1 + 0xd4)) {
            puVar36 = *(undefined8 **)(param_1 + 0xc0);
            if (puVar36 != (undefined8 *)0x0) {
              *(undefined8 *)(param_1 + 0xc0) = *puVar36;
            }
            puVar36[4] = PTR_DAT_04bb2020 + 0x10;
            puVar39 = PTR_DAT_04bb2120;
            puVar36[7] = plVar23;
            puVar36[2] = 0;
            puVar36[3] = 0;
            *(undefined1 *)(puVar36 + 0x12) = 0;
            puVar36[5] = puVar39;
            puVar36[6] = plVar34;
            puVar36[9] = plVar2;
            pbVar28 = (byte *)(puVar36 + 10);
            *puVar36 = &PTR_LAB_04b62aa8;
            puVar36[1] = 0;
            *(int *)(puVar36 + 8) = iVar26;
            (**(code **)(local_1b0 + 0x18))(&local_1b0);
            pbVar29 = local_1a8;
            if (pbVar28 != local_1a8) {
              (**(code **)(local_1b0 + 0x18))(&local_1b0);
              lVar38 = 0;
              do {
                if (local_1a8[lVar38] == 0) {
LAB_038ae7d0:
                  iVar26 = (int)lVar38;
                  if (0x40 < iVar26) {
                    iVar26 = 0x40;
                  }
                  goto LAB_038ae7dc;
                }
                if (local_1a8[lVar38 + 1] == 0) {
                  lVar38 = lVar38 + 1;
                  goto LAB_038ae7d0;
                }
                if (local_1a8[lVar38 + 2] == 0) {
                  lVar38 = lVar38 + 2;
                  goto LAB_038ae7d0;
                }
                lVar38 = lVar38 + 3;
              } while (lVar38 != 0x80001);
              iVar26 = 0;
LAB_038ae7dc:
              memcpy(pbVar28,pbVar29,(long)iVar26);
              pbVar28[iVar26] = 0;
            }
            puVar36[5] = pbVar28;
            *(int *)(param_1 + 0xd0) = *(int *)(param_1 + 0xd0) + 1;
            lVar38 = FUN_038b0320(plVar2,*(undefined8 *)(param_1 + 0xb8),puVar36);
            *(long *)(param_1 + 0xb8) = lVar38;
            goto LAB_038aec24;
          }
          for (lVar38 = *plVar2; lVar38 != 0; lVar38 = *(long *)(lVar38 + lVar35)) {
            (**(code **)(local_1b0 + 0x18))(&local_1b0);
            (**(code **)(local_1b0 + 0x18))(&local_1b0);
            pbVar28 = local_1a8;
            (**(code **)(*(long *)(lVar38 + 0x20) + 0x18))((long *)(lVar38 + 0x20));
            if (pbVar28 == *(byte **)(lVar38 + 0x28)) {
LAB_038ae7a0:
              *(long **)(lVar38 + 0x30) = plVar34;
              *(long **)(lVar38 + 0x38) = plVar23;
              *(int *)(lVar38 + 0x40) = iVar26;
              break;
            }
            pbVar28 = *(byte **)(lVar38 + 0x28);
            pbVar29 = local_1a8;
            lVar35 = 0x7ffff;
            while( true ) {
              bVar11 = *pbVar29;
              if (bVar11 != *pbVar28) break;
              if ((bVar11 == 0) ||
                 (bVar14 = lVar35 == 0, pbVar28 = pbVar28 + 1, pbVar29 = pbVar29 + 1,
                 lVar35 = lVar35 + -1, bVar14)) goto LAB_038ae7a0;
            }
            lVar35 = 8;
            if (*pbVar28 <= bVar11) {
              lVar35 = 0x10;
            }
          }
          goto LAB_038aec28;
        }
LAB_038ad9a0:
        local_1a0 = (undefined *)CONCAT44(local_1a0._4_4_,2);
        FUN_038af500(lVar18,&local_1b0,&local_1a0);
        lVar38 = *(long *)(lVar27 + 0xa0);
        local_198 = "min";
        local_1a0 = puVar39 + 0x10;
        for (; lVar35 = lVar38 + -0x30, lVar35 != lVar20; lVar38 = *(long *)(lVar38 + 8)) {
          (**(code **)(*(long *)(lVar38 + -0x30) + 0x18))(lVar35);
          (**(code **)(*(long *)(lVar38 + -0x30) + 0x18))(lVar35);
          puVar41 = *(undefined1 **)(lVar38 + -0x28);
          (**(code **)(local_1a0 + 0x18))(&local_1a0);
          if (puVar41 == local_198) {
LAB_038adb5c:
            puVar36 = (undefined8 *)(lVar38 + -0x10);
            local_1e0 = PTR_DAT_04bb2020 + 0x10;
            goto LAB_038adb8c;
          }
          uVar31 = 0;
          bVar14 = true;
          lVar35 = *(long *)(lVar38 + -0x28) + 1;
          do {
            lVar8 = lVar35 + uVar31;
            cVar12 = *(char *)(lVar8 + -1);
            if (cVar12 != local_198[uVar31]) break;
            if (cVar12 == '\0') {
              if (bVar14) goto LAB_038adb5c;
              break;
            }
            cVar12 = *(char *)(lVar35 + uVar31);
            if (cVar12 != local_198[uVar31 + 1]) break;
            if (cVar12 == '\0') goto LAB_038adb5c;
            cVar12 = *(char *)(lVar8 + 1);
            if (cVar12 != local_198[uVar31 + 2]) break;
            if (cVar12 == '\0') goto LAB_038adb5c;
            bVar14 = uVar31 < 0x7fffe;
            uVar31 = uVar31 + 3;
          } while (uVar31 != 0x80001);
        }
        puVar36 = (undefined8 *)(PTR_PTR_04bb2238 + 8);
        local_1e0 = puVar39 + 0x10;
LAB_038adb8c:
        puVar39 = PTR_DAT_04bb2020;
        local_1d8 = (char *)*puVar36;
        if (*local_1d8 == '\0') {
LAB_038adc20:
          uVar40 = 0xff7fffff;
        }
        else {
          local_1f0 = PTR_DAT_04bb2020 + 0x10;
          local_1e8 = "min";
          uVar31 = FUN_038d52a0(&local_200,&local_1e0);
          if ((uVar31 & 1) == 0) {
            (**(code **)(local_1b0 + 0x18))(&local_1b0);
            pbVar28 = local_1a8;
            (**(code **)(local_1f0 + 0x18))(&local_1f0);
            pcVar33 = local_1e8;
            (**(code **)(local_1e0 + 0x18))(&local_1e0);
            FUN_006e9528(0xc7efffffe0000000,&local_1a0,
                         "parameter parse failed. (name: \"%s\", attr: \"%s\", str: \"%s\", alt: \"%f\")"
                         ,pbVar28,pcVar33,local_1d8);
            goto LAB_038adc20;
          }
          uVar40 = local_200._0_4_;
        }
        local_198 = "max";
        local_1a0 = puVar39 + 0x10;
        for (lVar38 = *(long *)(lVar27 + 0xa0); lVar35 = lVar38 + -0x30, lVar35 != lVar20;
            lVar38 = *(long *)(lVar38 + 8)) {
          (**(code **)(*(long *)(lVar38 + -0x30) + 0x18))(lVar35);
          (**(code **)(*(long *)(lVar38 + -0x30) + 0x18))(lVar35);
          pcVar33 = *(char **)(lVar38 + -0x28);
          (**(code **)(local_1a0 + 0x18))(&local_1a0);
          if (pcVar33 == local_198) {
LAB_038add0c:
            puVar36 = (undefined8 *)(lVar38 + -0x10);
            local_1f0 = PTR_DAT_04bb2020 + 0x10;
            goto LAB_038add3c;
          }
          uVar31 = 0;
          bVar14 = true;
          lVar35 = *(long *)(lVar38 + -0x28) + 1;
          do {
            lVar8 = lVar35 + uVar31;
            cVar12 = *(char *)(lVar8 + -1);
            if (cVar12 != local_198[uVar31]) break;
            if (cVar12 == '\0') {
              if (bVar14) goto LAB_038add0c;
              break;
            }
            cVar12 = *(char *)(lVar35 + uVar31);
            if (cVar12 != local_198[uVar31 + 1]) break;
            if (cVar12 == '\0') goto LAB_038add0c;
            cVar12 = *(char *)(lVar8 + 1);
            if (cVar12 != local_198[uVar31 + 2]) break;
            if (cVar12 == '\0') goto LAB_038add0c;
            bVar14 = uVar31 < 0x7fffe;
            uVar31 = uVar31 + 3;
          } while (uVar31 != 0x80001);
        }
        puVar36 = (undefined8 *)(PTR_PTR_04bb2238 + 8);
        local_1f0 = puVar39 + 0x10;
LAB_038add3c:
        puVar39 = PTR_DAT_04bb2020;
        local_1e8 = (char *)*puVar36;
        if (*local_1e8 == '\0') {
LAB_038addd0:
          uVar37 = 0x7f7fffff;
        }
        else {
          local_200 = PTR_DAT_04bb2020 + 0x10;
          local_1f8 = "max";
          uVar31 = FUN_038d52a0(&local_74,&local_1f0);
          if ((uVar31 & 1) == 0) {
            (**(code **)(local_1b0 + 0x18))(&local_1b0);
            pbVar28 = local_1a8;
            (**(code **)(local_200 + 0x18))(&local_200);
            pcVar33 = local_1f8;
            (**(code **)(local_1f0 + 0x18))(&local_1f0);
            FUN_006e9528(0x47efffffe0000000,&local_1a0,
                         "parameter parse failed. (name: \"%s\", attr: \"%s\", str: \"%s\", alt: \"%f\")"
                         ,pbVar28,pcVar33,local_1e8);
            goto LAB_038addd0;
          }
          uVar37 = local_74;
        }
        local_200 = puVar39 + 0x10;
        local_1f8 = "defaultValue";
        uVar31 = FUN_038d52a0(&local_74,&local_1d0);
        if ((uVar31 & 1) == 0) {
          (**(code **)(local_1b0 + 0x18))(&local_1b0);
          pbVar28 = local_1a8;
          (**(code **)(local_200 + 0x18))(&local_200);
          pcVar33 = local_1f8;
          (**(code **)(local_1d0 + 0x18))(&local_1d0);
          FUN_006e9528(0,&local_1a0,
                       "parameter parse failed. (name: \"%s\", attr: \"%s\", str: \"%s\", alt: \"%f\")"
                       ,pbVar28,pcVar33,local_1c8);
          uVar43 = 0;
        }
        else {
          uVar43 = local_74;
        }
        puVar39 = PTR_DAT_04bb2020;
        if (*(int *)(param_1 + 0xb0) < *(int *)(param_1 + 0xb4)) {
          puVar36 = *(undefined8 **)(param_1 + 0xa0);
          if (puVar36 != (undefined8 *)0x0) {
            *(undefined8 *)(param_1 + 0xa0) = *puVar36;
          }
          puVar36[4] = puVar39 + 0x10;
          puVar39 = PTR_DAT_04bb2120;
          pbVar28 = (byte *)(puVar36 + 9);
          puVar36[2] = 0;
          puVar36[3] = 0;
          *(undefined4 *)(puVar36 + 6) = uVar43;
          *(undefined4 *)((long)puVar36 + 0x34) = uVar43;
          *(undefined4 *)(puVar36 + 7) = uVar40;
          *(undefined4 *)((long)puVar36 + 0x3c) = uVar37;
          *(undefined1 *)(puVar36 + 0x11) = 0;
          puVar36[5] = puVar39;
          puVar36[8] = plVar3;
          *puVar36 = &PTR_LAB_04b62a80;
          puVar36[1] = 0;
          (**(code **)(local_1b0 + 0x18))(&local_1b0);
          pbVar29 = local_1a8;
          if (pbVar28 != local_1a8) {
            (**(code **)(local_1b0 + 0x18))(&local_1b0);
            lVar38 = 0;
            do {
              if (local_1a8[lVar38] == 0) {
LAB_038adfd4:
                iVar26 = (int)lVar38;
joined_r0x038adfd8:
                if (0x40 < iVar26) {
                  iVar26 = 0x40;
                }
                goto LAB_038adfe0;
              }
              if (local_1a8[lVar38 + 1] == 0) {
                lVar38 = lVar38 + 1;
                goto LAB_038adfd4;
              }
              if (local_1a8[lVar38 + 2] == 0) {
                iVar26 = (int)lVar38 + 2;
                goto joined_r0x038adfd8;
              }
              lVar38 = lVar38 + 3;
            } while (lVar38 != 0x80001);
            iVar26 = 0;
LAB_038adfe0:
            memcpy(pbVar28,pbVar29,(long)iVar26);
            pbVar28[iVar26] = 0;
          }
          puVar36[5] = pbVar28;
          *(int *)(param_1 + 0xb0) = *(int *)(param_1 + 0xb0) + 1;
          lVar38 = FUN_038b0320(plVar3,*(undefined8 *)(param_1 + 0x98),puVar36);
          *(long *)(param_1 + 0x98) = lVar38;
          goto LAB_038aec24;
        }
        for (lVar38 = *plVar3; lVar38 != 0; lVar38 = *(long *)(lVar38 + lVar35)) {
          (**(code **)(local_1b0 + 0x18))(&local_1b0);
          (**(code **)(local_1b0 + 0x18))(&local_1b0);
          pbVar28 = local_1a8;
          (**(code **)(*(long *)(lVar38 + 0x20) + 0x18))((long *)(lVar38 + 0x20));
          if (pbVar28 == *(byte **)(lVar38 + 0x28)) {
LAB_038adfbc:
            *(undefined4 *)(lVar38 + 0x30) = uVar43;
            *(undefined4 *)(lVar38 + 0x34) = uVar43;
            *(undefined4 *)(lVar38 + 0x38) = uVar40;
            *(undefined4 *)(lVar38 + 0x3c) = uVar37;
            break;
          }
          pbVar28 = *(byte **)(lVar38 + 0x28);
          pbVar29 = local_1a8;
          lVar35 = 0x7ffff;
          while( true ) {
            bVar11 = *pbVar29;
            if (bVar11 != *pbVar28) break;
            if ((bVar11 == 0) ||
               (bVar14 = lVar35 == 0, pbVar28 = pbVar28 + 1, pbVar29 = pbVar29 + 1,
               lVar35 = lVar35 + -1, bVar14)) goto LAB_038adfbc;
          }
          lVar35 = 8;
          if (*pbVar28 <= bVar11) {
            lVar35 = 0x10;
          }
        }
        goto LAB_038aec28;
      }
LAB_038ad2dc:
      local_1a0 = (undefined *)CONCAT44(local_1a0._4_4_,1);
      FUN_038af500(lVar18,&local_1b0,&local_1a0);
      lVar38 = *(long *)(lVar27 + 0xa0);
      local_198 = "min";
      local_1a0 = puVar39 + 0x10;
      for (; lVar35 = lVar38 + -0x30, lVar35 != lVar20; lVar38 = *(long *)(lVar38 + 8)) {
        (**(code **)(*(long *)(lVar38 + -0x30) + 0x18))(lVar35);
        (**(code **)(*(long *)(lVar38 + -0x30) + 0x18))(lVar35);
        puVar41 = *(undefined1 **)(lVar38 + -0x28);
        (**(code **)(local_1a0 + 0x18))(&local_1a0);
        if (puVar41 == local_198) {
LAB_038ad49c:
          puVar36 = (undefined8 *)(lVar38 + -0x10);
          local_1e0 = PTR_DAT_04bb2020 + 0x10;
          goto LAB_038ad4cc;
        }
        uVar31 = 0;
        bVar14 = true;
        lVar35 = *(long *)(lVar38 + -0x28) + 1;
        do {
          lVar8 = lVar35 + uVar31;
          cVar12 = *(char *)(lVar8 + -1);
          if (cVar12 != local_198[uVar31]) break;
          if (cVar12 == '\0') {
            if (bVar14) goto LAB_038ad49c;
            break;
          }
          cVar12 = *(char *)(lVar35 + uVar31);
          if (cVar12 != local_198[uVar31 + 1]) break;
          if (cVar12 == '\0') goto LAB_038ad49c;
          cVar12 = *(char *)(lVar8 + 1);
          if (cVar12 != local_198[uVar31 + 2]) break;
          if (cVar12 == '\0') goto LAB_038ad49c;
          bVar14 = uVar31 < 0x7fffe;
          uVar31 = uVar31 + 3;
        } while (uVar31 != 0x80001);
      }
      puVar36 = (undefined8 *)(PTR_PTR_04bb2238 + 8);
      local_1e0 = puVar39 + 0x10;
LAB_038ad4cc:
      puVar39 = PTR_DAT_04bb2020;
      local_1d8 = (char *)*puVar36;
      if (*local_1d8 == '\0') {
LAB_038ad560:
        local_230 = 0;
      }
      else {
        local_1f0 = PTR_DAT_04bb2020 + 0x10;
        local_1e8 = "min";
        uVar31 = FUN_038d2c30(&local_200,&local_1e0,0xffffffff);
        if ((uVar31 & 1) == 0) {
          (**(code **)(local_1b0 + 0x18))(&local_1b0);
          pbVar28 = local_1a8;
          (**(code **)(local_1f0 + 0x18))(&local_1f0);
          pcVar33 = local_1e8;
          (**(code **)(local_1e0 + 0x18))(&local_1e0);
          FUN_006e9528(&local_1a0,
                       "parameter parse failed. (name: \"%s\", attr: \"%s\", str: \"%s\", alt: \"%u\")"
                       ,pbVar28,pcVar33,local_1d8,0);
          goto LAB_038ad560;
        }
        local_230 = SUB84(local_200,0);
      }
      local_198 = "max";
      local_1a0 = puVar39 + 0x10;
      for (lVar38 = *(long *)(lVar27 + 0xa0); lVar35 = lVar38 + -0x30, lVar35 != lVar20;
          lVar38 = *(long *)(lVar38 + 8)) {
        (**(code **)(*(long *)(lVar38 + -0x30) + 0x18))(lVar35);
        (**(code **)(*(long *)(lVar38 + -0x30) + 0x18))(lVar35);
        pcVar33 = *(char **)(lVar38 + -0x28);
        (**(code **)(local_1a0 + 0x18))(&local_1a0);
        if (pcVar33 == local_198) {
LAB_038ad64c:
          puVar36 = (undefined8 *)(lVar38 + -0x10);
          local_1f0 = PTR_DAT_04bb2020 + 0x10;
          goto LAB_038ad680;
        }
        uVar31 = 0;
        bVar14 = true;
        lVar35 = *(long *)(lVar38 + -0x28) + 1;
        do {
          lVar8 = lVar35 + uVar31;
          cVar12 = *(char *)(lVar8 + -1);
          if (cVar12 != local_198[uVar31]) break;
          if (cVar12 == '\0') {
            if (bVar14) goto LAB_038ad64c;
            break;
          }
          cVar12 = *(char *)(lVar35 + uVar31);
          if (cVar12 != local_198[uVar31 + 1]) break;
          if (cVar12 == '\0') goto LAB_038ad64c;
          cVar12 = *(char *)(lVar8 + 1);
          if (cVar12 != local_198[uVar31 + 2]) break;
          if (cVar12 == '\0') goto LAB_038ad64c;
          bVar14 = uVar31 < 0x7fffe;
          uVar31 = uVar31 + 3;
        } while (uVar31 != 0x80001);
      }
      puVar36 = (undefined8 *)(PTR_PTR_04bb2238 + 8);
      local_1f0 = puVar39 + 0x10;
LAB_038ad680:
      puVar39 = PTR_DAT_04bb2020;
      local_1e8 = (char *)*puVar36;
      if (*local_1e8 == '\0') {
        uVar40 = 0xffffffff;
      }
      else {
        local_200 = PTR_DAT_04bb2020 + 0x10;
        local_1f8 = "max";
        uVar31 = FUN_038d2c30(&local_74,&local_1f0,0xffffffff);
        uVar40 = local_74;
        if ((uVar31 & 1) == 0) {
          (**(code **)(local_1b0 + 0x18))(&local_1b0);
          pbVar28 = local_1a8;
          (**(code **)(local_200 + 0x18))(&local_200);
          pcVar33 = local_1f8;
          (**(code **)(local_1f0 + 0x18))(&local_1f0);
          puVar39 = PTR_DAT_04bb2020;
          FUN_006e9528(&local_1a0,
                       "parameter parse failed. (name: \"%s\", attr: \"%s\", str: \"%s\", alt: \"%u\")"
                       ,pbVar28,pcVar33,local_1e8,0xffffffff);
          uVar40 = 0xffffffff;
        }
      }
      local_200 = puVar39 + 0x10;
      local_1f8 = "defaultValue";
      uVar31 = FUN_038d2c30(&local_74,&local_1d0,0xffffffff);
      if ((uVar31 & 1) == 0) {
        (**(code **)(local_1b0 + 0x18))(&local_1b0);
        pbVar28 = local_1a8;
        (**(code **)(local_200 + 0x18))(&local_200);
        pcVar33 = local_1f8;
        (**(code **)(local_1d0 + 0x18))(&local_1d0);
        FUN_006e9528(&local_1a0,
                     "parameter parse failed. (name: \"%s\", attr: \"%s\", str: \"%s\", alt: \"%u\")"
                     ,pbVar28,pcVar33,local_1c8,0);
        uVar37 = 0;
      }
      else {
        uVar37 = local_74;
      }
      if (*(int *)(param_1 + 0x90) < *(int *)(param_1 + 0x94)) {
        puVar36 = *(undefined8 **)(param_1 + 0x80);
        if (puVar36 != (undefined8 *)0x0) {
          *(undefined8 *)(param_1 + 0x80) = *puVar36;
        }
        puVar36[4] = PTR_DAT_04bb2020 + 0x10;
        puVar39 = PTR_DAT_04bb2120;
        *(undefined4 *)(puVar36 + 6) = uVar37;
        *(undefined4 *)((long)puVar36 + 0x34) = uVar37;
        puVar36[2] = 0;
        puVar36[3] = 0;
        *(undefined1 *)(puVar36 + 0x11) = 0;
        pbVar28 = (byte *)(puVar36 + 9);
        puVar36[5] = puVar39;
        puVar36[8] = plVar5;
        *puVar36 = &PTR_LAB_04b62a58;
        puVar36[1] = 0;
        *(undefined4 *)(puVar36 + 7) = local_230;
        *(undefined4 *)((long)puVar36 + 0x3c) = uVar40;
        (**(code **)(local_1b0 + 0x18))(&local_1b0);
        pbVar29 = local_1a8;
        if (pbVar28 != local_1a8) {
          (**(code **)(local_1b0 + 0x18))(&local_1b0);
          lVar38 = 0;
          do {
            if (local_1a8[lVar38] == 0) {
LAB_038ad934:
              iVar26 = (int)lVar38;
joined_r0x038ad938:
              if (0x40 < iVar26) {
                iVar26 = 0x40;
              }
              goto LAB_038ad940;
            }
            if (local_1a8[lVar38 + 1] == 0) {
              lVar38 = lVar38 + 1;
              goto LAB_038ad934;
            }
            if (local_1a8[lVar38 + 2] == 0) {
              iVar26 = (int)lVar38 + 2;
              goto joined_r0x038ad938;
            }
            lVar38 = lVar38 + 3;
          } while (lVar38 != 0x80001);
          iVar26 = 0;
LAB_038ad940:
          memcpy(pbVar28,pbVar29,(long)iVar26);
          pbVar28[iVar26] = 0;
        }
        puVar36[5] = pbVar28;
        *(int *)(param_1 + 0x90) = *(int *)(param_1 + 0x90) + 1;
        lVar38 = FUN_038b0320(plVar5,*(undefined8 *)(param_1 + 0x78),puVar36);
        *(long *)(param_1 + 0x78) = lVar38;
LAB_038aec24:
        *(undefined8 *)(lVar38 + 0x18) = 1;
      }
      else {
        for (lVar38 = *plVar5; lVar38 != 0; lVar38 = *(long *)(lVar38 + lVar35)) {
          (**(code **)(local_1b0 + 0x18))(&local_1b0);
          (**(code **)(local_1b0 + 0x18))(&local_1b0);
          pbVar28 = local_1a8;
          (**(code **)(*(long *)(lVar38 + 0x20) + 0x18))((long *)(lVar38 + 0x20));
          if (pbVar28 == *(byte **)(lVar38 + 0x28)) goto LAB_038ad91c;
          pbVar28 = *(byte **)(lVar38 + 0x28);
          pbVar29 = local_1a8;
          lVar35 = 0x7ffff;
          while( true ) {
            bVar11 = *pbVar29;
            if (bVar11 != *pbVar28) break;
            if ((bVar11 == 0) ||
               (bVar14 = lVar35 == 0, pbVar28 = pbVar28 + 1, pbVar29 = pbVar29 + 1,
               lVar35 = lVar35 + -1, bVar14)) goto LAB_038ad91c;
          }
          lVar35 = 8;
          if (*pbVar28 <= bVar11) {
            lVar35 = 0x10;
          }
        }
      }
    }
    goto LAB_038aec28;
  }
  uVar31 = 0;
  bVar14 = true;
  lVar20 = *(long *)(lVar27 + 0x30) + 2;
  do {
    lVar38 = lVar20 + uVar31;
    cVar12 = *(char *)(lVar38 + -2);
    if (cVar12 != local_198[uVar31]) break;
    if (cVar12 == '\0') {
      if (bVar14) goto LAB_038ac7c0;
      break;
    }
    cVar12 = *(char *)(lVar38 + -1);
    if (cVar12 != local_198[uVar31 + 1]) break;
    if (cVar12 == '\0') goto LAB_038ac7c0;
    cVar12 = *(char *)(lVar20 + uVar31);
    if (cVar12 != local_198[uVar31 + 2]) break;
    if (cVar12 == '\0') goto LAB_038ac7c0;
    bVar14 = uVar31 < 0x7fffe;
    uVar31 = uVar31 + 3;
  } while (uVar31 != 0x80001);
  goto LAB_038af0bc;
LAB_038ad91c:
  *(undefined4 *)(lVar38 + 0x30) = uVar37;
  *(undefined4 *)(lVar38 + 0x34) = uVar37;
  *(undefined4 *)(lVar38 + 0x38) = local_230;
  *(undefined4 *)(lVar38 + 0x3c) = uVar40;
LAB_038aec28:
  puVar39 = PTR_DAT_04bb2020 + 0x10;
  local_1d8 = "nameJp";
  local_1e0 = puVar39;
  for (lVar38 = *(long *)(lVar27 + 0xa0); lVar35 = lVar38 + -0x30, lVar35 != lVar20;
      lVar38 = *(long *)(lVar38 + 8)) {
    (**(code **)(*(long *)(lVar38 + -0x30) + 0x18))(lVar35);
    (**(code **)(*(long *)(lVar38 + -0x30) + 0x18))(lVar35);
    puVar41 = *(undefined1 **)(lVar38 + -0x28);
    (**(code **)(local_1e0 + 0x18))(&local_1e0);
    if (puVar41 == local_1d8) {
LAB_038aed20:
      puVar36 = (undefined8 *)(lVar38 + -0x10);
      local_1a0 = PTR_DAT_04bb2020 + 0x10;
      goto LAB_038aed58;
    }
    uVar31 = 0;
    bVar14 = true;
    lVar35 = *(long *)(lVar38 + -0x28) + 1;
    do {
      lVar8 = lVar35 + uVar31;
      cVar12 = *(char *)(lVar8 + -1);
      if (cVar12 != local_1d8[uVar31]) break;
      if (cVar12 == '\0') {
        if (bVar14) goto LAB_038aed20;
        break;
      }
      cVar12 = *(char *)(lVar35 + uVar31);
      if (cVar12 != local_1d8[uVar31 + 1]) break;
      if (cVar12 == '\0') goto LAB_038aed20;
      cVar12 = *(char *)(lVar8 + 1);
      if (cVar12 != local_1d8[uVar31 + 2]) break;
      if (cVar12 == '\0') goto LAB_038aed20;
      bVar14 = uVar31 < 0x7fffe;
      uVar31 = uVar31 + 3;
    } while (uVar31 != 0x80001);
  }
  puVar36 = (undefined8 *)(PTR_PTR_04bb2238 + 8);
  local_1a0 = puVar39;
LAB_038aed58:
  puVar39 = PTR_DAT_04bb2020;
  local_198 = (char *)*puVar36;
  if (*(int *)(param_1 + 0x50) < *(int *)(param_1 + 0x54)) {
    puVar36 = *(undefined8 **)(param_1 + 0x40);
    if (puVar36 != (undefined8 *)0x0) {
      *(undefined8 *)(param_1 + 0x40) = *puVar36;
    }
    pcVar33 = (char *)((long)puVar36 + 0x44);
    puVar36[4] = puVar39 + 0x10;
    puVar39 = PTR_DAT_04bb2120;
    *puVar36 = &PTR_LAB_04b62af8;
    puVar36[1] = 0;
    *(undefined4 *)(puVar36 + 8) = 0xc0;
    *(undefined1 *)((long)puVar36 + 0x103) = 0;
    puVar36[2] = 0;
    puVar36[3] = 0;
    puVar36[7] = pcVar33;
    puVar36[5] = puVar39;
    puVar36[6] = &DAT_04b62b50;
    (**(code **)(local_1a0 + 0x18))(&local_1a0);
    pcVar42 = local_198;
    if (pcVar33 != local_198) {
      (**(code **)(local_1a0 + 0x18))(&local_1a0);
      lVar20 = 0;
      do {
        if (local_198[lVar20] == '\0') goto LAB_038aef5c;
        if (local_198[lVar20 + 1] == '\0') {
          lVar20 = lVar20 + 1;
          goto LAB_038aef5c;
        }
        if (local_198[lVar20 + 2] == '\0') {
          lVar20 = lVar20 + 2;
          goto LAB_038aef5c;
        }
        lVar20 = lVar20 + 3;
      } while (lVar20 != 0x80001);
      lVar20 = 0;
LAB_038aef5c:
      iVar26 = (int)lVar20;
      if (*(int *)(puVar36 + 8) <= (int)lVar20) {
        iVar26 = *(int *)(puVar36 + 8) + -1;
      }
      memcpy(pcVar33,pcVar42,(long)iVar26);
      pcVar33[iVar26] = '\0';
    }
    *(undefined1 *)(puVar36 + 0x2a) = 0;
    puVar36[6] = &DAT_04b62b20;
    pbVar28 = (byte *)(puVar36 + 0x22);
    puVar36[0x21] = plVar4;
    (**(code **)(local_1b0 + 0x18))(&local_1b0);
    pbVar29 = local_1a8;
    if (pbVar28 != local_1a8) {
      (**(code **)(local_1b0 + 0x18))(&local_1b0);
      lVar20 = 0;
      do {
        if (local_1a8[lVar20] == 0) {
LAB_038af008:
          iVar26 = (int)lVar20;
joined_r0x038af00c:
          if (0x40 < iVar26) {
            iVar26 = 0x40;
          }
          goto LAB_038af014;
        }
        if (local_1a8[lVar20 + 1] == 0) {
          lVar20 = lVar20 + 1;
          goto LAB_038af008;
        }
        if (local_1a8[lVar20 + 2] == 0) {
          iVar26 = (int)lVar20 + 2;
          goto joined_r0x038af00c;
        }
        lVar20 = lVar20 + 3;
      } while (lVar20 != 0x80001);
      iVar26 = 0;
LAB_038af014:
      memcpy(pbVar28,pbVar29,(long)iVar26);
      pbVar28[iVar26] = 0;
    }
    puVar36[5] = pbVar28;
    *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + 1;
    lVar20 = FUN_038b0320(plVar4,*(undefined8 *)(param_1 + 0x38),puVar36);
    *(long *)(param_1 + 0x38) = lVar20;
    *(undefined8 *)(lVar20 + 0x18) = 1;
    puVar39 = PTR_DAT_04bb2020;
  }
  else {
    for (lVar20 = *plVar4; lVar20 != 0; lVar20 = *(long *)(lVar20 + lVar38)) {
      (**(code **)(local_1b0 + 0x18))(&local_1b0);
      (**(code **)(local_1b0 + 0x18))(&local_1b0);
      pbVar28 = local_1a8;
      (**(code **)(*(long *)(lVar20 + 0x20) + 0x18))((long *)(lVar20 + 0x20));
      if (pbVar28 == *(byte **)(lVar20 + 0x28)) {
LAB_038aeebc:
        puVar36 = (undefined8 *)(lVar20 + 0x30);
        (**(code **)*puVar36)(puVar36);
        pcVar33 = (char *)(lVar20 + 0x44);
        *(undefined1 *)(lVar20 + 0x103) = 0;
        *(undefined4 *)(lVar20 + 0x40) = 0xc0;
        *puVar36 = &DAT_04b62b50;
        *(char **)(lVar20 + 0x38) = pcVar33;
        (**(code **)(local_1a0 + 0x18))(&local_1a0);
        pcVar42 = local_198;
        if (pcVar33 == local_198) goto LAB_038af0a0;
        (**(code **)(local_1a0 + 0x18))(&local_1a0);
        lVar38 = 0;
        goto LAB_038aef20;
      }
      pbVar28 = *(byte **)(lVar20 + 0x28);
      pbVar29 = local_1a8;
      lVar38 = 0x7ffff;
      while( true ) {
        bVar11 = *pbVar29;
        if (bVar11 != *pbVar28) break;
        if ((bVar11 == 0) ||
           (bVar14 = lVar38 == 0, pbVar28 = pbVar28 + 1, pbVar29 = pbVar29 + 1, lVar38 = lVar38 + -1
           , bVar14)) goto LAB_038aeebc;
      }
      lVar38 = 8;
      if (*pbVar28 <= bVar11) {
        lVar38 = 0x10;
      }
    }
  }
LAB_038af0bc:
  for (lVar27 = *(long *)(lVar27 + 0x10); lVar27 != 0; lVar27 = *(long *)(lVar27 + 0x10)) {
    if ((int)uVar32 < iVar17) {
      plVar19[(int)uVar32] = lVar27 + -8;
      uVar32 = uVar32 + 1;
    }
  }
  if (uVar32 == 0) goto LAB_038ac648;
  goto LAB_038ac6d8;
  while( true ) {
    if (local_198[lVar38 + 1] == '\0') {
      lVar38 = lVar38 + 1;
      goto LAB_038af078;
    }
    if (local_198[lVar38 + 2] == '\0') {
      lVar38 = lVar38 + 2;
      goto LAB_038af078;
    }
    lVar38 = lVar38 + 3;
    if (lVar38 == 0x80001) break;
LAB_038aef20:
    if (local_198[lVar38] == '\0') goto LAB_038af078;
  }
  lVar38 = 0;
LAB_038af078:
  iVar26 = (int)lVar38;
  if (*(int *)(lVar20 + 0x40) <= (int)lVar38) {
    iVar26 = *(int *)(lVar20 + 0x40) + -1;
  }
  memcpy(pcVar33,pcVar42,(long)iVar26);
  pcVar33[iVar26] = '\0';
LAB_038af0a0:
  *puVar36 = &DAT_04b62b20;
  puVar39 = PTR_DAT_04bb2020;
  goto LAB_038af0bc;
}

