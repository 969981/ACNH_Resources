
undefined8 FUN_02991730(uint *param_1,uint *param_2)

{
  int iVar1;
  uint uVar2;
  undefined *puVar3;
  long lVar4;
  long *plVar5;
  ulong *puVar6;
  ulong *puVar7;
  void *pvVar8;
  undefined8 *puVar9;
  long lVar10;
  undefined2 *puVar11;
  ulong uVar12;
  ulong uVar13;
  undefined2 *puVar14;
  uint uVar15;
  long lVar16;
  ulong uVar17;
  int iVar18;
  long *plVar19;
  uint uVar20;
  size_t sVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  long lVar25;
  uint *puVar26;
  uint uVar27;
  ulong uVar28;
  long *plVar29;
  
  uVar2 = *param_2;
  uVar20 = param_2[1];
  uVar28 = (ulong)uVar20;
  uVar24 = param_2[2];
  lVar16 = (long)(int)uVar20;
  plVar29 = *(long **)(param_2 + 4);
  *param_1 = param_2[9];
  puVar3 = PTR_DAT_04bb2698;
  uVar27 = uVar20 - 1;
  uVar12 = (ulong)uVar27;
  if (0 < (int)uVar20) {
    lVar25 = *(long *)PTR_DAT_04bb2698;
    sVar21 = (ulong)uVar20 * 0xf8 + 8;
    if (lVar25 == 0) {
      puVar6 = malloc(sVar21);
joined_r0x02991800:
      if (puVar6 != (ulong *)0x0) {
        puVar7 = puVar6 + 1;
        *puVar6 = uVar28;
        puVar6 = puVar7;
        do {
          *(undefined2 *)puVar6 = 0;
          *(undefined4 *)((long)puVar6 + 4) = 0xffffffff;
          *(undefined2 *)(puVar6 + 1) = 0;
          *(undefined1 *)((long)puVar6 + 10) = 0xff;
          *(undefined8 *)((long)puVar6 + 0xc) = 0xffffffffffffffff;
          *(undefined8 *)((long)puVar6 + 0x14) = 0xffffffffffffffff;
          *(undefined4 *)((long)puVar6 + 0x1c) = 0xffffffff;
          *(undefined4 *)(puVar6 + 4) = 0x42f00000;
          *(undefined8 *)((long)puVar6 + 0x24) = 0xffffffffffffffff;
          *(undefined8 *)((long)puVar6 + 0x2c) = 0xffffffffffffffff;
          *(undefined8 *)((long)puVar6 + 0x34) = 0xffffffffffffffff;
          *(undefined8 *)((long)puVar6 + 0x3c) = 0xffffffffffffffff;
          *(undefined4 *)((long)puVar6 + 0x44) = 0xffffffff;
          *(undefined2 *)(puVar6 + 0x11) = 0;
          *(undefined1 *)((long)puVar6 + 0x8a) = 0;
          *(undefined1 *)((long)puVar6 + 0xa3) = 0xff;
          *(undefined8 *)((long)puVar6 + 0x9b) = 0xffffffffffffffff;
          *(undefined8 *)((long)puVar6 + 0x93) = 0xffffffffffffffff;
          *(undefined8 *)((long)puVar6 + 0x8b) = 0xffffffffffffffff;
          *(undefined8 *)((long)puVar6 + 0xa4) = 0;
          *(undefined8 *)((long)puVar6 + 0xac) = 0;
          *(undefined8 *)((long)puVar6 + 0xb4) = 0xffffffffffffffff;
          *(undefined4 *)((long)puVar6 + 0xbc) = 0xffffffff;
          *(undefined2 *)(puVar6 + 0x18) = 0;
          *(undefined1 *)((long)puVar6 + 0xc2) = 0;
          *(undefined8 *)((long)puVar6 + 0xc3) = 0xffffffffffffffff;
          *(undefined8 *)((long)puVar6 + 0xcb) = 0xffffffffffffffff;
          *(undefined8 *)((long)puVar6 + 0xd3) = 0xffffffffffffffff;
          *(undefined1 *)((long)puVar6 + 0xdb) = 0xff;
          *(undefined8 *)((long)puVar6 + 0xdc) = 0;
          *(undefined8 *)((long)puVar6 + 0xe4) = 0;
          *(undefined8 *)((long)puVar6 + 0xec) = 0xffffffffffffffff;
          *(undefined4 *)((long)puVar6 + 0xf4) = 0xffffffff;
          puVar6[9] = 0;
          puVar6[10] = 0;
          puVar6 = puVar6 + 0x1f;
        } while (puVar6 != puVar7 + uVar28 * 0x1f);
        param_1[0x1c] = uVar20;
        *(ulong **)(param_1 + 0x1e) = puVar7;
      }
      lVar25 = *(long *)puVar3;
      if (lVar25 == 0) goto LAB_02991938;
      if (plVar29 == (long *)0x0) {
LAB_029918ec:
        lVar4 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
        plVar5 = (long *)(lVar25 + 8);
        if (lVar4 != 0) {
          plVar5 = (long *)(lVar4 + 0xa8);
        }
        plVar5 = (long *)*plVar5;
        if (plVar5 == (long *)0x0) goto LAB_029919b8;
      }
      else {
        plVar5 = plVar29;
      }
      pvVar8 = (void *)(**(code **)(*plVar5 + 0x30))(plVar5,lVar16 * 0x18,8);
    }
    else {
      plVar5 = plVar29;
      if (plVar29 != (long *)0x0) {
LAB_029917d4:
        puVar6 = (ulong *)(**(code **)(*plVar5 + 0x30))(plVar5,sVar21,8);
        goto joined_r0x02991800;
      }
      lVar4 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
      plVar5 = (long *)(lVar25 + 8);
      if (lVar4 != 0) {
        plVar5 = (long *)(lVar4 + 0xa8);
      }
      plVar5 = (long *)*plVar5;
      if (plVar5 != (long *)0x0) goto LAB_029917d4;
      lVar25 = *(long *)puVar3;
      if (lVar25 != 0) goto LAB_029918ec;
LAB_02991938:
      pvVar8 = malloc(lVar16 * 0x18);
    }
    if (pvVar8 != (void *)0x0) {
      *(void **)(param_1 + 0x26) = pvVar8;
      if (1 < uVar20) {
        if (uVar27 == 1) {
          uVar13 = 0;
        }
        else {
          uVar13 = 0;
          plVar5 = (long *)((long)pvVar8 + 0x18);
          do {
            uVar13 = uVar13 + 2;
            plVar5[-3] = (long)plVar5;
            *plVar5 = (long)(plVar5 + 3);
            plVar5 = plVar5 + 6;
          } while ((uVar12 & 0xfffffffe) != uVar13);
        }
        if ((uVar27 & 1) != 0) {
          plVar5 = (long *)((long)pvVar8 + uVar13 * 0x18);
          *plVar5 = (long)(plVar5 + 3);
        }
      }
      *(undefined8 *)((long)pvVar8 + (long)(int)(uVar27 * 3) * 8) = 0;
      *(void **)(param_1 + 0x28) = pvVar8;
      param_1[0x2a] = uVar20;
    }
  }
LAB_029919b8:
  uVar22 = param_1[0x1c];
  if (uVar22 == 0) {
    iVar18 = -1;
  }
  else {
    lVar25 = *(long *)(param_1 + 0x1e);
    uVar15 = 0;
    puVar26 = param_1 + 0x20;
    iVar18 = -1;
    do {
      lVar4 = lVar25 + (long)(int)uVar15 * 0xf8;
      iVar18 = iVar18 + 1;
      *(int *)(lVar4 + 4) = iVar18;
      if ((int)param_1[0x24] < (int)param_1[0x2a]) {
        plVar5 = *(long **)(param_1 + 0x26);
        if (plVar5 != (long *)0x0) {
          *(long *)(param_1 + 0x26) = *plVar5;
        }
        *plVar5 = lVar4;
        plVar5[2] = 0;
        plVar19 = plVar5 + 1;
        *plVar19 = 0;
        lVar4 = *(long *)puVar26;
        *(long **)puVar26 = plVar19;
        plVar5[2] = (long)puVar26;
        *plVar19 = lVar4;
        if (lVar4 != 0) {
          *(long **)(lVar4 + 8) = plVar19;
        }
        param_1[0x24] = param_1[0x24] + 1;
      }
      uVar15 = uVar15 + 1;
    } while (uVar22 != uVar15);
  }
  lVar25 = *(long *)puVar3;
  if (lVar25 == 0) {
    puVar9 = malloc(0x100);
joined_r0x02991b6c:
    if (puVar9 != (undefined8 *)0x0) {
      *(undefined4 *)((long)puVar9 + 0xc) = 0xffffffff;
      *(undefined2 *)(puVar9 + 1) = 0;
      *(undefined1 *)((long)puVar9 + 0x12) = 0xff;
      *puVar9 = 1;
      *(undefined2 *)(puVar9 + 2) = 0;
      *(undefined8 *)((long)puVar9 + 0x14) = 0xffffffffffffffff;
      *(undefined8 *)((long)puVar9 + 0x1c) = 0xffffffffffffffff;
      *(undefined4 *)((long)puVar9 + 0x24) = 0xffffffff;
      *(undefined4 *)(puVar9 + 5) = 0x42f00000;
      *(undefined8 *)((long)puVar9 + 0x2c) = 0xffffffffffffffff;
      *(undefined8 *)((long)puVar9 + 0x34) = 0xffffffffffffffff;
      *(undefined8 *)((long)puVar9 + 0x3c) = 0xffffffffffffffff;
      *(undefined8 *)((long)puVar9 + 0x44) = 0xffffffffffffffff;
      *(undefined4 *)((long)puVar9 + 0x4c) = 0xffffffff;
      *(undefined2 *)(puVar9 + 0x12) = 0;
      *(undefined1 *)((long)puVar9 + 0x92) = 0;
      *(undefined1 *)((long)puVar9 + 0xab) = 0xff;
      *(undefined8 *)((long)puVar9 + 0xa3) = 0xffffffffffffffff;
      *(undefined8 *)((long)puVar9 + 0x9b) = 0xffffffffffffffff;
      *(undefined8 *)((long)puVar9 + 0x93) = 0xffffffffffffffff;
      *(undefined8 *)((long)puVar9 + 0xac) = 0;
      *(undefined8 *)((long)puVar9 + 0xb4) = 0;
      *(undefined8 *)((long)puVar9 + 0xbc) = 0xffffffffffffffff;
      *(undefined4 *)((long)puVar9 + 0xc4) = 0xffffffff;
      *(undefined2 *)(puVar9 + 0x19) = 0;
      *(undefined1 *)((long)puVar9 + 0xca) = 0;
      *(undefined8 *)((long)puVar9 + 0xcb) = 0xffffffffffffffff;
      *(undefined8 *)((long)puVar9 + 0xd3) = 0xffffffffffffffff;
      *(undefined8 *)((long)puVar9 + 0xdb) = 0xffffffffffffffff;
      *(undefined1 *)((long)puVar9 + 0xe3) = 0xff;
      *(undefined8 *)((long)puVar9 + 0xe4) = 0;
      *(undefined8 *)((long)puVar9 + 0xec) = 0;
      *(undefined8 *)((long)puVar9 + 0xf4) = 0xffffffffffffffff;
      *(undefined4 *)((long)puVar9 + 0xfc) = 0xffffffff;
      puVar9[10] = 0;
      puVar9[0xb] = 0;
      param_1[0x2c] = 1;
      *(undefined8 **)(param_1 + 0x2e) = puVar9 + 1;
    }
    lVar25 = *(long *)puVar3;
    if (lVar25 == 0) goto LAB_02991ce0;
    if (plVar29 != (long *)0x0) {
      plVar5 = plVar29;
LAB_02991bac:
      puVar9 = (undefined8 *)(**(code **)(*plVar5 + 0x30))(plVar5,0x18,8);
      if (puVar9 == (undefined8 *)0x0) goto LAB_02991bd8;
      goto LAB_02991bc4;
    }
LAB_02991b80:
    lVar4 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
    plVar5 = (long *)(lVar25 + 8);
    if (lVar4 != 0) {
      plVar5 = (long *)(lVar4 + 0xa8);
    }
    plVar5 = (long *)*plVar5;
    if (plVar5 != (long *)0x0) goto LAB_02991bac;
  }
  else {
    plVar5 = plVar29;
    if (plVar29 != (long *)0x0) {
LAB_02991a94:
      puVar9 = (undefined8 *)(**(code **)(*plVar5 + 0x30))(plVar5,0x100,8);
      goto joined_r0x02991b6c;
    }
    lVar4 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
    plVar5 = (long *)(lVar25 + 8);
    if (lVar4 != 0) {
      plVar5 = (long *)(lVar4 + 0xa8);
    }
    plVar5 = (long *)*plVar5;
    if (plVar5 != (long *)0x0) goto LAB_02991a94;
    lVar25 = *(long *)puVar3;
    if (lVar25 != 0) goto LAB_02991b80;
LAB_02991ce0:
    puVar9 = malloc(0x18);
    if (puVar9 != (undefined8 *)0x0) {
LAB_02991bc4:
      *(undefined8 **)(param_1 + 0x36) = puVar9;
      *puVar9 = 0;
      *(undefined8 **)(param_1 + 0x38) = puVar9;
      param_1[0x3a] = 1;
    }
  }
LAB_02991bd8:
  puVar26 = param_1 + 0x30;
  uVar22 = param_1[0x2c];
  if (uVar22 != 0) {
    lVar25 = *(long *)(param_1 + 0x2e);
    uVar15 = 0;
    do {
      iVar18 = iVar18 + 1;
      lVar4 = lVar25 + (long)(int)uVar15 * 0xf8;
      *(int *)(lVar4 + 4) = iVar18;
      if ((int)param_1[0x34] < (int)param_1[0x3a]) {
        plVar5 = *(long **)(param_1 + 0x36);
        if (plVar5 != (long *)0x0) {
          *(long *)(param_1 + 0x36) = *plVar5;
        }
        *plVar5 = lVar4;
        plVar5[2] = 0;
        plVar19 = plVar5 + 1;
        *plVar19 = 0;
        lVar4 = *(long *)puVar26;
        *(long **)puVar26 = plVar19;
        plVar5[2] = (long)puVar26;
        *plVar19 = lVar4;
        if (lVar4 != 0) {
          *(long **)(lVar4 + 8) = plVar19;
        }
        param_1[0x34] = param_1[0x34] + 1;
      }
      uVar15 = uVar15 + 1;
    } while (uVar22 != uVar15);
  }
  if (-1 < (int)uVar20) {
    lVar25 = *(long *)puVar3;
    sVar21 = (lVar16 + 1) * 0x18;
    if (lVar25 == 0) {
      pvVar8 = malloc(sVar21);
    }
    else {
      plVar5 = plVar29;
      if (plVar29 == (long *)0x0) {
        lVar4 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
        plVar5 = (long *)(lVar25 + 8);
        if (lVar4 != 0) {
          plVar5 = (long *)(lVar4 + 0xa8);
        }
        plVar5 = (long *)*plVar5;
        if (plVar5 == (long *)0x0) goto LAB_02991d6c;
      }
      pvVar8 = (void *)(**(code **)(*plVar5 + 0x30))(plVar5,sVar21,8);
    }
    if (pvVar8 != (void *)0x0) {
      uVar22 = (uint)(lVar16 + 1);
      *(void **)(param_1 + 0x44) = pvVar8;
      if (1 < uVar22) {
        if (uVar20 == 1) {
          uVar13 = 0;
        }
        else {
          uVar13 = 0;
          plVar5 = (long *)((long)pvVar8 + 0x18);
          do {
            uVar13 = uVar13 + 2;
            plVar5[-3] = (long)plVar5;
            *plVar5 = (long)(plVar5 + 3);
            plVar5 = plVar5 + 6;
          } while ((uVar28 & 0xfffffffe) != uVar13);
        }
        if ((uVar20 & 1) != 0) {
          plVar5 = (long *)((long)pvVar8 + uVar13 * 0x18);
          *plVar5 = (long)(plVar5 + 3);
        }
      }
      *(undefined8 *)((long)pvVar8 + (long)(int)(uVar20 * 3) * 8) = 0;
      *(void **)(param_1 + 0x46) = pvVar8;
      param_1[0x48] = uVar22;
    }
  }
LAB_02991d6c:
  lVar25 = *(long *)(param_2 + 6);
  if ((int)uVar2 < 1 || lVar25 == 0) {
    uVar2 = 0;
    lVar25 = 0;
  }
  if ((int)uVar24 < 0xe) {
LAB_02992064:
    uVar28 = (ulong)param_1[0x62];
    puVar11 = *(undefined2 **)(param_1 + 100);
  }
  else {
    uVar28 = (long)(int)uVar24 - 0xd;
    lVar4 = *(long *)puVar3;
    sVar21 = uVar28 * 0x18;
    uVar22 = (uint)uVar28;
    if (lVar4 == 0) {
      pvVar8 = malloc(sVar21);
      if (pvVar8 == (void *)0x0) goto LAB_02991e00;
LAB_02991e1c:
      uVar13 = (long)(int)uVar24 - 0xe;
      *(void **)(param_1 + 0x50) = pvVar8;
      if (uVar22 < 2) {
        uVar13 = (ulong)(uint)((int)uVar13 * 3);
      }
      else {
        if ((int)uVar13 == 1) {
          uVar17 = 0;
        }
        else {
          uVar17 = 0;
          plVar5 = (long *)((long)pvVar8 + 0x18);
          do {
            uVar17 = uVar17 + 2;
            plVar5[-3] = (long)plVar5;
            *plVar5 = (long)(plVar5 + 3);
            plVar5 = plVar5 + 6;
          } while ((uVar13 & 0xfffffffe) != uVar17);
        }
        if ((uVar13 & 1) != 0) {
          plVar5 = (long *)((long)pvVar8 + uVar17 * 0x18);
          *plVar5 = (long)(plVar5 + 3);
        }
        uVar13 = uVar13 * 3;
      }
      *(undefined8 *)((long)pvVar8 + uVar13 * 8) = 0;
      *(void **)(param_1 + 0x52) = pvVar8;
      param_1[0x54] = uVar22;
      lVar4 = *(long *)puVar3;
      if (lVar4 != 0) goto LAB_02991e98;
LAB_02991ef8:
      pvVar8 = malloc(sVar21);
joined_r0x02991f04:
      if (pvVar8 != (void *)0x0) {
        uVar24 = uVar24 - 0xe;
        *(void **)(param_1 + 0x5c) = pvVar8;
        if (uVar22 < 2) {
          uVar13 = (ulong)(uVar24 * 3);
        }
        else {
          if (uVar24 == 1) {
            uVar13 = 0;
          }
          else {
            uVar13 = 0;
            plVar5 = (long *)((long)pvVar8 + 0x18);
            do {
              uVar13 = uVar13 + 2;
              plVar5[-3] = (long)plVar5;
              *plVar5 = (long)(plVar5 + 3);
              plVar5 = plVar5 + 6;
            } while (((ulong)uVar24 & 0xfffffffe) != uVar13);
          }
          if ((uVar24 & 1) != 0) {
            plVar5 = (long *)((long)pvVar8 + uVar13 * 0x18);
            *plVar5 = (long)(plVar5 + 3);
          }
          uVar13 = (ulong)(int)(uVar24 * 3);
        }
        *(undefined8 *)((long)pvVar8 + uVar13 * 8) = 0;
        *(void **)(param_1 + 0x5e) = pvVar8;
        param_1[0x60] = uVar22;
      }
      lVar4 = *(long *)puVar3;
      sVar21 = ((uVar28 & 0xffffffff) + (uVar28 & 0xffffffff) * 4) * 0x10;
      if (lVar4 == 0) goto LAB_02992000;
      if (plVar29 == (long *)0x0) {
LAB_02991fb8:
        lVar10 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
        plVar5 = (long *)(lVar4 + 8);
        if (lVar10 != 0) {
          plVar5 = (long *)(lVar10 + 0xa8);
        }
        plVar5 = (long *)*plVar5;
        if (plVar5 == (long *)0x0) goto LAB_02992064;
      }
      else {
        plVar5 = plVar29;
      }
      puVar11 = (undefined2 *)(**(code **)(*plVar5 + 0x30))(plVar5,sVar21,8);
    }
    else {
      plVar5 = plVar29;
      if (plVar29 != (long *)0x0) {
LAB_02991de4:
        pvVar8 = (void *)(**(code **)(*plVar5 + 0x30))(plVar5,sVar21,8);
        if (pvVar8 != (void *)0x0) goto LAB_02991e1c;
LAB_02991e00:
        lVar4 = *(long *)puVar3;
        if (lVar4 == 0) goto LAB_02991ef8;
LAB_02991e98:
        plVar5 = plVar29;
        if (plVar29 == (long *)0x0) goto LAB_02991eac;
LAB_02991ed8:
        pvVar8 = (void *)(**(code **)(*plVar5 + 0x30))(plVar5,sVar21,8);
        goto joined_r0x02991f04;
      }
      lVar10 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
      plVar5 = (long *)(lVar4 + 8);
      if (lVar10 != 0) {
        plVar5 = (long *)(lVar10 + 0xa8);
      }
      plVar5 = (long *)*plVar5;
      if (plVar5 != (long *)0x0) goto LAB_02991de4;
      lVar4 = *(long *)puVar3;
      if (lVar4 == 0) goto LAB_02991ef8;
LAB_02991eac:
      lVar10 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
      plVar5 = (long *)(lVar4 + 8);
      if (lVar10 != 0) {
        plVar5 = (long *)(lVar10 + 0xa8);
      }
      plVar5 = (long *)*plVar5;
      if (plVar5 != (long *)0x0) goto LAB_02991ed8;
      lVar4 = *(long *)puVar3;
      sVar21 = ((uVar28 & 0xffffffff) + (uVar28 & 0xffffffff) * 4) * 0x10;
      if (lVar4 != 0) goto LAB_02991fb8;
LAB_02992000:
      puVar11 = malloc(sVar21);
    }
    if (puVar11 == (undefined2 *)0x0) goto LAB_02992064;
    puVar14 = puVar11;
    do {
      *puVar14 = 0;
      *(undefined4 *)(puVar14 + 2) = 0;
      *(undefined1 *)(puVar14 + 4) = 0;
      *(undefined4 *)(puVar14 + 6) = 0;
      *(undefined4 *)(puVar14 + 0x18) = 0;
      *(undefined4 *)(puVar14 + 0x24) = 0;
      *(undefined8 *)(puVar14 + 8) = 0xffffffffffffffff;
      *(undefined8 *)(puVar14 + 0xc) = 0;
      *(undefined2 **)(puVar14 + 0x10) = puVar14 + 0x10;
      *(undefined2 **)(puVar14 + 0x14) = puVar14 + 0x10;
      *(undefined8 *)(puVar14 + 0x1c) = 0;
      *(undefined8 *)(puVar14 + 0x20) = 0;
      puVar14 = puVar14 + 0x28;
    } while (puVar14 != puVar11 + (uVar28 & 0xffffffff) * 0x28);
    *(undefined2 **)(param_1 + 100) = puVar11;
    param_1[0x62] = uVar22;
  }
  if ((int)uVar28 == 0) {
    uVar24 = 0xffffffff;
  }
  else {
    iVar18 = 0;
    puVar26 = param_1 + 0x4a;
    uVar22 = 0xffffffff;
    do {
      uVar24 = uVar22 + 1;
      iVar1 = 0;
      if (uVar24 < uVar2) {
        iVar1 = uVar22 + 1;
      }
      *(long *)(puVar11 + (long)iVar18 * 0x28 + 0xc) = lVar25 + (long)iVar1 * 400;
      lVar4 = DAT_05ae7600;
      if (0 < (int)uVar20) {
        if (DAT_05ae7600 == 0) {
          pvVar8 = malloc(lVar16 * 0x18);
        }
        else {
          plVar5 = plVar29;
          if (plVar29 == (long *)0x0) {
            lVar10 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
            plVar5 = (long *)(lVar4 + 8);
            if (lVar10 != 0) {
              plVar5 = (long *)(lVar10 + 0xa8);
            }
            plVar5 = (long *)*plVar5;
            if (plVar5 == (long *)0x0) goto LAB_02992228;
          }
          pvVar8 = (void *)(**(code **)(*plVar5 + 0x30))(plVar5,lVar16 * 0x18,8);
        }
        if (pvVar8 != (void *)0x0) {
          *(void **)(puVar11 + (long)iVar18 * 0x28 + 0x1c) = pvVar8;
          if (1 < uVar20) {
            if (uVar12 - 1 < 3) {
              lVar4 = 0;
            }
            else {
              lVar4 = 0;
              puVar9 = (undefined8 *)((long)pvVar8 + 0x30);
              do {
                puVar9[-3] = puVar9;
                puVar9[3] = puVar9 + 6;
                lVar4 = lVar4 + -4;
                puVar9[-6] = puVar9 + -3;
                *puVar9 = puVar9 + 3;
                puVar9 = puVar9 + 0xc;
              } while (-lVar4 != (uVar12 & 0xfffffffc));
              lVar4 = -lVar4;
            }
            if ((uVar27 & 3) != 0) {
              uVar13 = uVar12 & 3;
              puVar9 = (undefined8 *)((long)pvVar8 + lVar4 * 0x18);
              do {
                *puVar9 = puVar9 + 3;
                uVar13 = uVar13 - 1;
                puVar9 = puVar9 + 3;
              } while (uVar13 != 0);
            }
          }
          *(undefined8 *)((long)pvVar8 + (long)(int)(uVar27 * 3) * 8) = 0;
          *(void **)(puVar11 + (long)iVar18 * 0x28 + 0x20) = pvVar8;
          *(uint *)(puVar11 + (long)iVar18 * 0x28 + 0x24) = uVar20;
        }
      }
LAB_02992228:
      if ((int)param_1[0x4e] < (int)param_1[0x54]) {
        puVar9 = *(undefined8 **)(param_1 + 0x50);
        if (puVar9 != (undefined8 *)0x0) {
          *(undefined8 *)(param_1 + 0x50) = *puVar9;
        }
        *puVar9 = puVar11 + (long)iVar18 * 0x28;
        puVar9[2] = 0;
        plVar5 = puVar9 + 1;
        *plVar5 = 0;
        lVar4 = *(long *)puVar26;
        *(long **)puVar26 = plVar5;
        puVar9[2] = puVar26;
        *plVar5 = lVar4;
        if (lVar4 != 0) {
          *(long **)(lVar4 + 8) = plVar5;
        }
        param_1[0x4e] = param_1[0x4e] + 1;
      }
      iVar18 = iVar18 + 1;
      uVar22 = uVar24;
    } while ((int)uVar28 != iVar18);
  }
  lVar4 = DAT_05ae7600;
  if (DAT_05ae7600 == 0) {
    puVar11 = malloc(0x3c0);
LAB_029922e4:
    if (puVar11 == (undefined2 *)0x0) goto LAB_02992528;
    *puVar11 = 0;
    *(undefined2 **)(puVar11 + 0x10) = puVar11 + 0x10;
    *(undefined2 **)(puVar11 + 0x14) = puVar11 + 0x10;
    uVar22 = 0xc;
    *(undefined4 *)(puVar11 + 2) = 0;
    *(undefined1 *)(puVar11 + 4) = 0;
    *(undefined4 *)(puVar11 + 6) = 0;
    *(undefined4 *)(puVar11 + 0x18) = 0;
    *(undefined4 *)(puVar11 + 0x24) = 0;
    puVar11[0x28] = 0;
    *(undefined4 *)(puVar11 + 0x2a) = 0;
    *(undefined1 *)(puVar11 + 0x2c) = 0;
    *(undefined4 *)(puVar11 + 0x2e) = 0;
    *(undefined4 *)(puVar11 + 0x40) = 0;
    *(undefined4 *)(puVar11 + 0x4c) = 0;
    puVar11[0x50] = 0;
    *(undefined4 *)(puVar11 + 0x52) = 0;
    *(undefined1 *)(puVar11 + 0x54) = 0;
    *(undefined4 *)(puVar11 + 0x56) = 0;
    *(undefined4 *)(puVar11 + 0x68) = 0;
    *(undefined4 *)(puVar11 + 0x74) = 0;
    puVar11[0x78] = 0;
    *(undefined4 *)(puVar11 + 0x7a) = 0;
    *(undefined1 *)(puVar11 + 0x7c) = 0;
    *(undefined4 *)(puVar11 + 0x7e) = 0;
    *(undefined4 *)(puVar11 + 0x90) = 0;
    *(undefined4 *)(puVar11 + 0x9c) = 0;
    puVar11[0xa0] = 0;
    *(undefined4 *)(puVar11 + 0xa2) = 0;
    *(undefined1 *)(puVar11 + 0xa4) = 0;
    *(undefined4 *)(puVar11 + 0xa6) = 0;
    *(undefined4 *)(puVar11 + 0xb8) = 0;
    *(undefined4 *)(puVar11 + 0xc4) = 0;
    puVar11[200] = 0;
    *(undefined4 *)(puVar11 + 0xca) = 0;
    *(undefined1 *)(puVar11 + 0xcc) = 0;
    *(undefined4 *)(puVar11 + 0xce) = 0;
    *(undefined4 *)(puVar11 + 0xe0) = 0;
    *(undefined4 *)(puVar11 + 0xec) = 0;
    puVar11[0xf0] = 0;
    *(undefined4 *)(puVar11 + 0xf2) = 0;
    *(undefined1 *)(puVar11 + 0xf4) = 0;
    *(undefined4 *)(puVar11 + 0xf6) = 0;
    *(undefined4 *)(puVar11 + 0x108) = 0;
    *(undefined4 *)(puVar11 + 0x114) = 0;
    *(undefined8 *)(puVar11 + 0x110) = 0;
    *(undefined8 *)(puVar11 + 0x10c) = 0;
    puVar11[0x118] = 0;
    *(undefined4 *)(puVar11 + 0x11a) = 0;
    *(undefined1 *)(puVar11 + 0x11c) = 0;
    *(undefined4 *)(puVar11 + 0x11e) = 0;
    *(undefined8 *)(puVar11 + 0x120) = 0xffffffffffffffff;
    *(undefined8 *)(puVar11 + 0x124) = 0;
    *(undefined4 *)(puVar11 + 0x130) = 0;
    *(undefined4 *)(puVar11 + 0x13c) = 0;
    *(undefined8 *)(puVar11 + 0x138) = 0;
    *(undefined8 *)(puVar11 + 0x134) = 0;
    puVar11[0x140] = 0;
    *(undefined4 *)(puVar11 + 0x142) = 0;
    *(undefined1 *)(puVar11 + 0x144) = 0;
    *(undefined4 *)(puVar11 + 0x146) = 0;
    *(undefined8 *)(puVar11 + 0x148) = 0xffffffffffffffff;
    *(undefined8 *)(puVar11 + 0x14c) = 0;
    *(undefined4 *)(puVar11 + 0x158) = 0;
    *(undefined4 *)(puVar11 + 0x164) = 0;
    *(undefined8 *)(puVar11 + 0x160) = 0;
    *(undefined8 *)(puVar11 + 0x15c) = 0;
    puVar11[0x168] = 0;
    *(undefined4 *)(puVar11 + 0x16a) = 0;
    *(undefined1 *)(puVar11 + 0x16c) = 0;
    *(undefined4 *)(puVar11 + 0x16e) = 0;
    *(undefined8 *)(puVar11 + 0x170) = 0xffffffffffffffff;
    *(undefined8 *)(puVar11 + 0x174) = 0;
    *(undefined4 *)(puVar11 + 0x180) = 0;
    *(undefined4 *)(puVar11 + 0x18c) = 0;
    *(undefined8 *)(puVar11 + 0x188) = 0;
    *(undefined8 *)(puVar11 + 0x184) = 0;
    puVar11[400] = 0;
    *(undefined4 *)(puVar11 + 0x192) = 0;
    *(undefined1 *)(puVar11 + 0x194) = 0;
    *(undefined4 *)(puVar11 + 0x196) = 0;
    *(undefined8 *)(puVar11 + 0x198) = 0xffffffffffffffff;
    *(undefined8 *)(puVar11 + 0x19c) = 0;
    *(undefined4 *)(puVar11 + 0x1a8) = 0;
    *(undefined4 *)(puVar11 + 0x1b4) = 0;
    *(undefined8 *)(puVar11 + 0x1b0) = 0;
    *(undefined8 *)(puVar11 + 0x1ac) = 0;
    puVar11[0x1b8] = 0;
    *(undefined4 *)(puVar11 + 0x1ba) = 0;
    *(undefined1 *)(puVar11 + 0x1bc) = 0;
    *(undefined4 *)(puVar11 + 0x1be) = 0;
    *(undefined8 *)(puVar11 + 0x1c0) = 0xffffffffffffffff;
    *(undefined8 *)(puVar11 + 0x1c4) = 0;
    *(undefined4 *)(puVar11 + 0x1d0) = 0;
    *(undefined4 *)(puVar11 + 0x1dc) = 0;
    *(undefined8 *)(puVar11 + 0x1d8) = 0;
    *(undefined8 *)(puVar11 + 0x1d4) = 0;
    *(undefined2 **)(puVar11 + 0x38) = puVar11 + 0x38;
    *(undefined2 **)(puVar11 + 0x3c) = puVar11 + 0x38;
    *(undefined2 **)(puVar11 + 0x60) = puVar11 + 0x60;
    *(undefined2 **)(puVar11 + 100) = puVar11 + 0x60;
    *(undefined2 **)(puVar11 + 0x88) = puVar11 + 0x88;
    *(undefined2 **)(puVar11 + 0x8c) = puVar11 + 0x88;
    *(undefined2 **)(puVar11 + 0xb0) = puVar11 + 0xb0;
    *(undefined2 **)(puVar11 + 0xb4) = puVar11 + 0xb0;
    *(undefined2 **)(puVar11 + 0xd8) = puVar11 + 0xd8;
    *(undefined2 **)(puVar11 + 0xdc) = puVar11 + 0xd8;
    *(undefined2 **)(puVar11 + 0x104) = puVar11 + 0x100;
    *(undefined2 **)(puVar11 + 0x100) = puVar11 + 0x100;
    *(undefined2 **)(puVar11 + 300) = puVar11 + 0x128;
    *(undefined2 **)(puVar11 + 0x128) = puVar11 + 0x128;
    *(undefined2 **)(puVar11 + 0x154) = puVar11 + 0x150;
    *(undefined2 **)(puVar11 + 0x150) = puVar11 + 0x150;
    *(undefined2 **)(puVar11 + 0x17c) = puVar11 + 0x178;
    *(undefined2 **)(puVar11 + 0x178) = puVar11 + 0x178;
    *(undefined2 **)(puVar11 + 0x1a4) = puVar11 + 0x1a0;
    *(undefined2 **)(puVar11 + 0x1a0) = puVar11 + 0x1a0;
    *(undefined2 **)(puVar11 + 0x1cc) = puVar11 + 0x1c8;
    *(undefined2 **)(puVar11 + 0x1c8) = puVar11 + 0x1c8;
    *(undefined8 *)(puVar11 + 8) = 0xffffffffffffffff;
    *(undefined8 *)(puVar11 + 0xc) = 0;
    *(undefined8 *)(puVar11 + 0x1c) = 0;
    *(undefined8 *)(puVar11 + 0x20) = 0;
    *(undefined8 *)(puVar11 + 0x30) = 0xffffffffffffffff;
    *(undefined8 *)(puVar11 + 0x34) = 0;
    *(undefined8 *)(puVar11 + 0x44) = 0;
    *(undefined8 *)(puVar11 + 0x48) = 0;
    *(undefined8 *)(puVar11 + 0x58) = 0xffffffffffffffff;
    *(undefined8 *)(puVar11 + 0x5c) = 0;
    *(undefined8 *)(puVar11 + 0x6c) = 0;
    *(undefined8 *)(puVar11 + 0x70) = 0;
    *(undefined8 *)(puVar11 + 0x80) = 0xffffffffffffffff;
    *(undefined8 *)(puVar11 + 0x84) = 0;
    *(undefined8 *)(puVar11 + 0x94) = 0;
    *(undefined8 *)(puVar11 + 0x98) = 0;
    *(undefined8 *)(puVar11 + 0xa8) = 0xffffffffffffffff;
    *(undefined8 *)(puVar11 + 0xac) = 0;
    *(undefined8 *)(puVar11 + 0xbc) = 0;
    *(undefined8 *)(puVar11 + 0xc0) = 0;
    *(undefined8 *)(puVar11 + 0xd0) = 0xffffffffffffffff;
    *(undefined8 *)(puVar11 + 0xd4) = 0;
    *(undefined8 *)(puVar11 + 0xe4) = 0;
    *(undefined8 *)(puVar11 + 0xe8) = 0;
    *(undefined8 *)(puVar11 + 0xf8) = 0xffffffffffffffff;
    *(undefined8 *)(puVar11 + 0xfc) = 0;
    param_1[0x66] = 0xc;
    *(undefined2 **)(param_1 + 0x68) = puVar11;
LAB_02992534:
    uVar15 = 0;
    uVar23 = uVar24;
    do {
      uVar24 = uVar23 + 1;
      *(undefined1 *)(puVar11 + (long)(int)uVar15 * 0x28 + 4) = 1;
      iVar18 = 0;
      if (uVar24 < uVar2) {
        iVar18 = uVar23 + 1;
      }
      *(long *)(puVar11 + (long)(int)uVar15 * 0x28 + 0xc) = lVar25 + (long)iVar18 * 400;
      lVar4 = DAT_05ae7600;
      if (0 < (int)uVar20) {
        if (DAT_05ae7600 == 0) {
          pvVar8 = malloc(lVar16 * 0x18);
        }
        else {
          plVar5 = plVar29;
          if (plVar29 == (long *)0x0) {
            lVar10 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
            plVar5 = (long *)(lVar4 + 8);
            if (lVar10 != 0) {
              plVar5 = (long *)(lVar10 + 0xa8);
            }
            plVar5 = (long *)*plVar5;
            if (plVar5 == (long *)0x0) goto LAB_02992584;
          }
          pvVar8 = (void *)(**(code **)(*plVar5 + 0x30))(plVar5,lVar16 * 0x18,8);
        }
        if (pvVar8 != (void *)0x0) {
          *(void **)(puVar11 + (long)(int)uVar15 * 0x28 + 0x1c) = pvVar8;
          if (1 < uVar20) {
            if (uVar12 - 1 < 3) {
              lVar4 = 0;
            }
            else {
              lVar4 = 0;
              puVar9 = (undefined8 *)((long)pvVar8 + 0x30);
              do {
                puVar9[-3] = puVar9;
                puVar9[3] = puVar9 + 6;
                lVar4 = lVar4 + -4;
                puVar9[-6] = puVar9 + -3;
                *puVar9 = puVar9 + 3;
                puVar9 = puVar9 + 0xc;
              } while (-lVar4 != (uVar12 & 0xfffffffc));
              lVar4 = -lVar4;
            }
            if ((uVar27 & 3) != 0) {
              uVar28 = uVar12 & 3;
              puVar9 = (undefined8 *)((long)pvVar8 + lVar4 * 0x18);
              do {
                *puVar9 = puVar9 + 3;
                uVar28 = uVar28 - 1;
                puVar9 = puVar9 + 3;
              } while (uVar28 != 0);
            }
          }
          *(undefined8 *)((long)pvVar8 + (long)(int)(uVar27 * 3) * 8) = 0;
          *(void **)(puVar11 + (long)(int)uVar15 * 0x28 + 0x20) = pvVar8;
          *(uint *)(puVar11 + (long)(int)uVar15 * 0x28 + 0x24) = uVar20;
        }
      }
LAB_02992584:
      uVar15 = uVar15 + 1;
      uVar23 = uVar24;
    } while (uVar22 != uVar15);
  }
  else {
    plVar5 = plVar29;
    if (plVar29 != (long *)0x0) {
LAB_029922c4:
      puVar11 = (undefined2 *)(**(code **)(*plVar5 + 0x30))(plVar5,0x3c0,8);
      goto LAB_029922e4;
    }
    lVar10 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
    plVar5 = (long *)(lVar4 + 8);
    if (lVar10 != 0) {
      plVar5 = (long *)(lVar10 + 0xa8);
    }
    plVar5 = (long *)*plVar5;
    if (plVar5 != (long *)0x0) goto LAB_029922c4;
LAB_02992528:
    uVar22 = param_1[0x66];
    if (uVar22 != 0) {
      puVar11 = *(undefined2 **)(param_1 + 0x68);
      goto LAB_02992534;
    }
  }
  lVar16 = DAT_05ae7600;
  if (DAT_05ae7600 == 0) {
    puVar11 = malloc(0x50);
    if (puVar11 != (undefined2 *)0x0) goto LAB_0299273c;
LAB_0299278c:
    uVar20 = param_1[0x6a];
    if (uVar20 == 0) goto LAB_02992868;
    puVar11 = *(undefined2 **)(param_1 + 0x6c);
  }
  else {
    plVar5 = plVar29;
    if (plVar29 == (long *)0x0) {
      lVar4 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
      plVar5 = (long *)(lVar16 + 8);
      if (lVar4 != 0) {
        plVar5 = (long *)(lVar4 + 0xa8);
      }
      plVar5 = (long *)*plVar5;
      if (plVar5 == (long *)0x0) goto LAB_0299278c;
    }
    puVar11 = (undefined2 *)(**(code **)(*plVar5 + 0x30))(plVar5,0x50,8);
    if (puVar11 == (undefined2 *)0x0) goto LAB_0299278c;
LAB_0299273c:
    uVar20 = 1;
    *puVar11 = 0;
    *(undefined8 *)(puVar11 + 8) = 0xffffffffffffffff;
    *(undefined8 *)(puVar11 + 0xc) = 0;
    *(undefined4 *)(puVar11 + 2) = 0;
    *(undefined1 *)(puVar11 + 4) = 0;
    *(undefined4 *)(puVar11 + 6) = 0;
    *(undefined4 *)(puVar11 + 0x18) = 0;
    *(undefined4 *)(puVar11 + 0x24) = 0;
    *(undefined2 **)(puVar11 + 0x10) = puVar11 + 0x10;
    *(undefined2 **)(puVar11 + 0x14) = puVar11 + 0x10;
    *(undefined8 *)(puVar11 + 0x1c) = 0;
    *(undefined8 *)(puVar11 + 0x20) = 0;
    param_1[0x6a] = 1;
    *(undefined2 **)(param_1 + 0x6c) = puVar11;
  }
  uVar27 = 0;
  do {
    uVar24 = uVar24 + 1;
    *(undefined1 *)(puVar11 + (long)(int)uVar27 * 0x28 + 4) = 1;
    uVar22 = uVar24;
    if (uVar2 <= uVar24) {
      uVar22 = 0;
    }
    *(long *)(puVar11 + (long)(int)uVar27 * 0x28 + 0xc) = lVar25 + (long)(int)uVar22 * 400;
    lVar16 = DAT_05ae7600;
    if (DAT_05ae7600 == 0) {
      puVar9 = malloc(0x18);
joined_r0x02992848:
      if (puVar9 != (undefined8 *)0x0) {
        *(undefined8 **)(puVar11 + (long)(int)uVar27 * 0x28 + 0x1c) = puVar9;
        *puVar9 = 0;
        *(undefined8 **)(puVar11 + (long)(int)uVar27 * 0x28 + 0x20) = puVar9;
        *(undefined4 *)(puVar11 + (long)(int)uVar27 * 0x28 + 0x24) = 1;
      }
    }
    else {
      plVar5 = plVar29;
      if (plVar29 != (long *)0x0) {
LAB_02992824:
        puVar9 = (undefined8 *)(**(code **)(*plVar5 + 0x30))(plVar5,0x18,8);
        goto joined_r0x02992848;
      }
      lVar4 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
      plVar5 = (long *)(lVar16 + 8);
      if (lVar4 != 0) {
        plVar5 = (long *)(lVar4 + 0xa8);
      }
      plVar5 = (long *)*plVar5;
      if (plVar5 != (long *)0x0) goto LAB_02992824;
    }
    uVar27 = uVar27 + 1;
  } while (uVar20 != uVar27);
LAB_02992868:
  *(uint **)(param_1 + 0x926) = param_1;
  *(undefined **)(param_1 + 0x924) = &DAT_04a97580;
  *(undefined1 **)(param_1 + 0x928) = &LAB_029928b0;
  param_1[0x92a] = 0;
  param_1[0x92b] = 0;
  return 1;
}

