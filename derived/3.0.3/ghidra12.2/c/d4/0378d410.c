
undefined8 FUN_0378d410(long param_1,uint *param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined *puVar7;
  long *plVar8;
  long lVar9;
  ulong *puVar10;
  void *pvVar11;
  undefined4 *puVar12;
  ulong *puVar13;
  undefined4 *puVar14;
  ulong *puVar15;
  uint uVar16;
  ulong __size;
  size_t sVar17;
  ulong uVar18;
  long lVar19;
  
  puVar7 = PTR_DAT_04bb2698;
  uVar2 = *param_2;
  uVar18 = (ulong)uVar2;
  if (0 < (int)uVar2) {
    lVar19 = *(long *)PTR_DAT_04bb2698;
    __size = uVar18 << 5 | 8;
    if (lVar19 == 0) {
      puVar10 = malloc(__size);
joined_r0x0378d4ac:
      if (puVar10 != (ulong *)0x0) {
        puVar13 = puVar10 + 1;
        *puVar10 = uVar18;
        puVar15 = puVar13;
        if ((uVar2 & 1) != 0) {
          puVar15 = puVar10 + 5;
          puVar10[1] = 0;
          *(undefined4 *)(puVar10 + 2) = 0;
          puVar10[3] = 0;
          *(undefined4 *)(puVar10 + 4) = 0;
        }
        if ((uVar18 - 1 & 0x7ffffffffffffff) != 0) {
          do {
            *puVar15 = 0;
            *(undefined4 *)(puVar15 + 1) = 0;
            puVar15[2] = 0;
            *(undefined4 *)(puVar15 + 3) = 0;
            puVar15[4] = 0;
            *(undefined4 *)(puVar15 + 5) = 0;
            puVar15[6] = 0;
            *(undefined4 *)(puVar15 + 7) = 0;
            puVar15 = puVar15 + 8;
          } while (puVar15 != puVar13 + uVar18 * 4);
        }
        *(uint *)(param_1 + 0x40) = uVar2;
        *(ulong **)(param_1 + 0x48) = puVar13;
      }
    }
    else {
      plVar8 = *(long **)(param_2 + 2);
      if (plVar8 != (long *)0x0) {
LAB_0378d488:
        puVar10 = (ulong *)(**(code **)(*plVar8 + 0x30))(plVar8,__size,8);
        goto joined_r0x0378d4ac;
      }
      lVar9 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
      plVar8 = (long *)(lVar19 + 8);
      if (lVar9 != 0) {
        plVar8 = (long *)(lVar9 + 0xa8);
      }
      plVar8 = (long *)*plVar8;
      if (plVar8 != (long *)0x0) goto LAB_0378d488;
    }
    uVar2 = *param_2;
    if (0 < (int)uVar2) {
      lVar19 = *(long *)puVar7;
      if (lVar19 == 0) {
        pvVar11 = malloc((ulong)uVar2 << 3);
      }
      else {
        plVar8 = *(long **)(param_2 + 2);
        if (plVar8 == (long *)0x0) {
          lVar9 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
          plVar8 = (long *)(lVar19 + 8);
          if (lVar9 != 0) {
            plVar8 = (long *)(lVar9 + 0xa8);
          }
          plVar8 = (long *)*plVar8;
          if (plVar8 == (long *)0x0) goto LAB_0378d588;
        }
        pvVar11 = (void *)(**(code **)(*plVar8 + 0x30))(plVar8,(ulong)uVar2 << 3,8);
      }
      if (pvVar11 != (void *)0x0) {
        *(void **)(param_1 + 0x50) = pvVar11;
        *(undefined8 *)(param_1 + 0x5c) = 0;
        *(uint *)(param_1 + 0x58) = uVar2;
      }
    }
  }
LAB_0378d588:
  uVar2 = *(uint *)(param_1 + 0x40);
  if ((uVar2 != 0) && (*(int *)(param_1 + 0x60) < *(int *)(param_1 + 0x58))) {
    lVar19 = *(long *)(param_1 + 0x48);
    uVar16 = 0;
    do {
      iVar3 = *(int *)(param_1 + 0x60);
      iVar4 = *(int *)(param_1 + 0x58);
      if (iVar3 < iVar4) {
        *(int *)(param_1 + 0x60) = iVar3 + 1;
        iVar3 = *(int *)(param_1 + 0x5c) + iVar3;
        iVar1 = 0;
        if (iVar4 <= iVar3) {
          iVar1 = iVar4;
        }
        *(long *)(*(long *)(param_1 + 0x50) + (long)(iVar3 - iVar1) * 8) =
             lVar19 + ((long)((ulong)uVar16 << 0x20) >> 0x1b);
      }
      uVar16 = uVar16 + 1;
    } while (uVar2 != uVar16);
  }
  uVar2 = *param_2;
  uVar16 = uVar2 - 1;
  if ((int)uVar2 < 1) {
    return 1;
  }
  lVar19 = *(long *)puVar7;
  if (lVar19 == 0) {
    pvVar11 = malloc((long)(int)uVar2 * 0x38);
joined_r0x0378d678:
    if (pvVar11 != (void *)0x0) {
      *(uint *)(param_1 + 0x84) = uVar2;
      *(void **)(param_1 + 0x70) = pvVar11;
      if (1 < uVar2) {
        if (uVar16 == 1) {
          uVar18 = 0;
        }
        else {
          uVar18 = 0;
          plVar8 = (long *)((long)pvVar11 + 0x38);
          do {
            uVar18 = uVar18 + 2;
            plVar8[-7] = (long)plVar8;
            *plVar8 = (long)(plVar8 + 7);
            plVar8 = plVar8 + 0xe;
          } while (((ulong)uVar16 & 0xfffffffe) != uVar18);
        }
        if ((uVar16 & 1) != 0) {
          plVar8 = (long *)((long)pvVar11 + uVar18 * 0x38);
          *plVar8 = (long)(plVar8 + 7);
        }
      }
      *(undefined8 *)((long)pvVar11 + (long)(int)(uVar16 * 7) * 8) = 0;
      *(void **)(param_1 + 0x78) = pvVar11;
    }
  }
  else {
    plVar8 = *(long **)(param_2 + 2);
    if (plVar8 != (long *)0x0) {
LAB_0378d654:
      pvVar11 = (void *)(**(code **)(*plVar8 + 0x30))(plVar8,(long)(int)uVar2 * 0x38,8);
      goto joined_r0x0378d678;
    }
    lVar9 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
    plVar8 = (long *)(lVar19 + 8);
    if (lVar9 != 0) {
      plVar8 = (long *)(lVar9 + 0xa8);
    }
    plVar8 = (long *)*plVar8;
    if (plVar8 != (long *)0x0) goto LAB_0378d654;
  }
  uVar2 = *param_2;
  if ((int)uVar2 < 1) {
    return 1;
  }
  lVar19 = *(long *)puVar7;
  sVar17 = (ulong)uVar2 * 0xa0;
  if (lVar19 == 0) {
    puVar12 = malloc(sVar17);
joined_r0x0378d770:
    if (puVar12 != (undefined4 *)0x0) {
      auVar5._8_8_ = 0;
      auVar5._0_8_ = sVar17 - 0xa0;
      puVar14 = puVar12;
      if ((SUB164(auVar5 * ZEXT816(0xcccccccccccccccd),8) >> 7 & 1) == 0) {
        *(undefined8 *)(puVar12 + 1) = 0;
        *puVar12 = 0xffffffff;
        puVar14 = puVar12 + 0x28;
        *(undefined1 *)(puVar12 + 8) = 0;
        puVar12[3] = 0;
        *(undefined4 **)(puVar12 + 4) = puVar12 + 8;
        *(undefined8 *)(puVar12 + 6) = 0x8000000000;
      }
      if (0x9f < sVar17 - 0xa0) {
        do {
          *puVar14 = 0xffffffff;
          *(undefined8 *)(puVar14 + 1) = 0;
          *(undefined1 *)(puVar14 + 8) = 0;
          puVar14[3] = 0;
          puVar14[0x28] = 0xffffffff;
          *(undefined8 *)(puVar14 + 0x29) = 0;
          puVar14[0x2b] = 0;
          *(undefined4 **)(puVar14 + 4) = puVar14 + 8;
          *(undefined8 *)(puVar14 + 6) = 0x8000000000;
          *(undefined1 *)(puVar14 + 0x30) = 0;
          *(undefined4 **)(puVar14 + 0x2c) = puVar14 + 0x30;
          *(undefined8 *)(puVar14 + 0x2e) = 0x8000000000;
          puVar14 = puVar14 + 0x50;
        } while (puVar14 != puVar12 + (ulong)uVar2 * 0x28);
      }
      *(undefined4 **)(param_1 + 0x88) = puVar12;
      *(undefined8 *)(param_1 + 0x94) = 0;
      *(uint *)(param_1 + 0x90) = uVar2;
    }
  }
  else {
    plVar8 = *(long **)(param_2 + 2);
    if (plVar8 != (long *)0x0) {
LAB_0378d74c:
      puVar12 = (undefined4 *)(**(code **)(*plVar8 + 0x30))(plVar8,sVar17,8);
      goto joined_r0x0378d770;
    }
    lVar9 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
    plVar8 = (long *)(lVar19 + 8);
    if (lVar9 != 0) {
      plVar8 = (long *)(lVar9 + 0xa8);
    }
    plVar8 = (long *)*plVar8;
    if (plVar8 != (long *)0x0) goto LAB_0378d74c;
  }
  uVar2 = *param_2;
  if ((int)uVar2 < 1) {
    return 1;
  }
  lVar19 = *(long *)puVar7;
  sVar17 = (ulong)uVar2 << 2;
  if (lVar19 == 0) {
    pvVar11 = malloc(sVar17);
joined_r0x0378d908:
    if (pvVar11 != (void *)0x0) {
      memset(pvVar11,0xff,sVar17);
      *(void **)(param_1 + 0xa0) = pvVar11;
      *(undefined8 *)(param_1 + 0xac) = 0;
      *(uint *)(param_1 + 0xa8) = uVar2;
    }
  }
  else {
    plVar8 = *(long **)(param_2 + 2);
    if (plVar8 != (long *)0x0) {
LAB_0378d858:
      pvVar11 = (void *)(**(code **)(*plVar8 + 0x30))(plVar8,sVar17,8);
      goto joined_r0x0378d908;
    }
    lVar9 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
    plVar8 = (long *)(lVar19 + 8);
    if (lVar9 != 0) {
      plVar8 = (long *)(lVar9 + 0xa8);
    }
    plVar8 = (long *)*plVar8;
    if (plVar8 != (long *)0x0) goto LAB_0378d858;
  }
  uVar2 = *param_2;
  if ((int)uVar2 < 1) {
    return 1;
  }
  lVar19 = *(long *)puVar7;
  if (lVar19 == 0) {
    puVar12 = malloc((ulong)uVar2 * 0x98);
  }
  else {
    plVar8 = *(long **)(param_2 + 2);
    if (plVar8 == (long *)0x0) {
      lVar9 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
      plVar8 = (long *)(lVar19 + 8);
      if (lVar9 != 0) {
        plVar8 = (long *)(lVar9 + 0xa8);
      }
      plVar8 = (long *)*plVar8;
      if (plVar8 == (long *)0x0) goto LAB_0378d9ac;
    }
    puVar12 = (undefined4 *)(**(code **)(*plVar8 + 0x30))(plVar8,(ulong)uVar2 * 0x98,8);
  }
  if (puVar12 != (undefined4 *)0x0) {
    uVar18 = (ulong)uVar2 * 0x98 - 0x98;
    auVar6._8_8_ = 0;
    auVar6._0_8_ = uVar18;
    puVar14 = puVar12;
    if ((SUB164(auVar6 * ZEXT816(0xd79435e50d79435f),8) >> 7 & 1) == 0) {
      *puVar12 = 0xffffffff;
      *(undefined1 *)(puVar12 + 6) = 0;
      puVar14 = puVar12 + 0x26;
      *(undefined4 **)(puVar12 + 2) = puVar12 + 6;
      *(undefined8 *)(puVar12 + 4) = 0x8000000000;
    }
    if (0x97 < uVar18) {
      do {
        *puVar14 = 0xffffffff;
        *(undefined1 *)(puVar14 + 6) = 0;
        *(undefined1 *)(puVar14 + 0x2c) = 0;
        *(undefined4 **)(puVar14 + 2) = puVar14 + 6;
        *(undefined8 *)(puVar14 + 4) = 0x8000000000;
        puVar14[0x26] = 0xffffffff;
        *(undefined4 **)(puVar14 + 0x28) = puVar14 + 0x2c;
        *(undefined8 *)(puVar14 + 0x2a) = 0x8000000000;
        puVar14 = puVar14 + 0x4c;
      } while (puVar14 != puVar12 + (ulong)uVar2 * 0x26);
    }
    *(undefined4 **)(param_1 + 0xb8) = puVar12;
    *(undefined8 *)(param_1 + 0xc4) = 0;
    *(uint *)(param_1 + 0xc0) = uVar2;
  }
LAB_0378d9ac:
  uVar2 = *param_2;
  uVar16 = uVar2 - 1;
  if (0 < (int)uVar2) {
    lVar19 = *(long *)puVar7;
    if (lVar19 == 0) {
      pvVar11 = malloc((long)(int)uVar2 * 0xa8);
    }
    else {
      plVar8 = *(long **)(param_2 + 2);
      if (plVar8 == (long *)0x0) {
        lVar9 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
        plVar8 = (long *)(lVar19 + 8);
        if (lVar9 != 0) {
          plVar8 = (long *)(lVar9 + 0xa8);
        }
        plVar8 = (long *)*plVar8;
        if (plVar8 == (long *)0x0) {
          return 1;
        }
      }
      pvVar11 = (void *)(**(code **)(*plVar8 + 0x30))(plVar8,(long)(int)uVar2 * 0xa8,8);
    }
    if (pvVar11 != (void *)0x0) {
      *(void **)(param_1 + 0x208) = pvVar11;
      if (1 < uVar2) {
        if (uVar16 == 1) {
          uVar18 = 0;
        }
        else {
          uVar18 = 0;
          plVar8 = (long *)((long)pvVar11 + 0xa8);
          do {
            uVar18 = uVar18 + 2;
            plVar8[-0x15] = (long)plVar8;
            *plVar8 = (long)(plVar8 + 0x15);
            plVar8 = plVar8 + 0x2a;
          } while (((ulong)uVar16 & 0xfffffffe) != uVar18);
        }
        if ((uVar16 & 1) != 0) {
          plVar8 = (long *)((long)pvVar11 + uVar18 * 0xa8);
          *plVar8 = (long)(plVar8 + 0x15);
        }
      }
      *(undefined8 *)((long)pvVar11 + (long)(int)(uVar16 * 0x15) * 8) = 0;
      *(void **)(param_1 + 0x210) = pvVar11;
      *(uint *)(param_1 + 0x218) = uVar2;
    }
  }
  return 1;
}

