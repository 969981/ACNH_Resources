
void FUN_03edfa00(undefined8 *param_1,long param_2,long *param_3)

{
  undefined *puVar1;
  uint uVar2;
  uint uVar3;
  undefined *puVar4;
  ushort uVar5;
  ushort uVar6;
  ushort uVar7;
  ushort uVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  long *plVar12;
  long lVar13;
  ulong *puVar14;
  void *pvVar15;
  undefined4 *puVar16;
  long *plVar17;
  long lVar18;
  uint uVar19;
  ulong *puVar20;
  undefined4 *puVar21;
  undefined8 *puVar22;
  uint uVar23;
  ulong *puVar24;
  ulong uVar25;
  ulong uVar26;
  undefined8 *puVar27;
  uint uVar28;
  long lVar29;
  ulong uVar30;
  ulong uVar31;
  ulong uVar32;
  ulong uVar33;
  size_t sVar34;
  
  *(undefined4 *)(param_1 + 1) = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_04ba6ef0;
  *(undefined4 *)(param_1 + 3) = 0;
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  param_1[6] = 0;
  *(undefined4 *)(param_1 + 7) = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  param_1[10] = 0;
  *(undefined4 *)(param_1 + 0xb) = 0;
  param_1[0xc] = 0;
  *(undefined4 *)(param_1 + 0xd) = 0;
  param_1[0xe] = 0;
  *(undefined4 *)(param_1 + 0xf) = 0;
  param_1[0x10] = 0;
  *(undefined4 *)(param_1 + 0x11) = 0;
  param_1[0x12] = 0;
  *(undefined4 *)(param_1 + 0x13) = 0;
  param_1[0x14] = 0;
  *(undefined4 *)(param_1 + 0x15) = 0;
  param_1[0x16] = 0;
  *(undefined4 *)(param_1 + 0x17) = 0;
  param_1[0x18] = 0;
  *(undefined4 *)(param_1 + 0x19) = 0;
  param_1[0x1a] = 0;
  *(undefined4 *)(param_1 + 0x1b) = 0;
  param_1[0x1c] = 0;
  *(undefined4 *)(param_1 + 0x1d) = 0;
  param_1[0x1e] = 0;
  *(undefined4 *)(param_1 + 0x1f) = 0;
  param_1[0x22] = 0;
  param_1[0x24] = 0;
  *(undefined1 *)((long)param_1 + 300) = 0;
  *(undefined4 *)(param_1 + 0x26) = 0;
  param_1[0x27] = 0;
  *(undefined1 *)(param_1 + 0x28) = 0;
  param_1[0x29] = 0;
  *(undefined4 *)(param_1 + 0x2a) = 0;
  *(undefined4 *)(param_1 + 0x2d) = 0;
  param_1[0x20] = 0;
  param_1[0x21] = param_2;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  puVar4 = PTR_DAT_04bb2698;
  plVar12 = *(long **)(**(long **)(param_2 + 0x20) + 0x18);
  param_1[0x22] = plVar12;
  if (plVar12 != (long *)0x0) {
    uVar5 = (**(code **)(*plVar12 + 0x48))();
    uVar10 = (uint)uVar5;
    uVar30 = (ulong)uVar10;
    if (uVar5 != 0) {
      lVar29 = *(long *)puVar4;
      sVar34 = uVar30 * 0x38 + 8;
      if (lVar29 == 0) {
        puVar14 = malloc(sVar34);
        if (puVar14 == (ulong *)0x0) goto LAB_03edfb74;
LAB_03edfb8c:
        uVar33 = uVar30 * 0x38 - 0x38;
        puVar20 = puVar14 + 1;
        *puVar14 = uVar30;
        puVar24 = puVar20;
        if ((uVar33 / 0x38 & 1) == 0) {
          *(undefined1 *)((long)puVar14 + 0x1c) = 0;
          puVar14[2] = (ulong)((long)puVar14 + 0x1c);
          *(undefined4 *)(puVar14 + 3) = 0x20;
          *(undefined1 *)((long)puVar14 + 0x3b) = 0;
          puVar14[1] = (ulong)(PTR_DAT_04bb2028 + 0x10);
          puVar24 = puVar14 + 8;
        }
        if (0x37 < uVar33) {
          puVar1 = PTR_DAT_04bb2028 + 0x10;
          do {
            *(undefined4 *)(puVar24 + 2) = 0x20;
            *(undefined1 *)((long)puVar24 + 0x33) = 0;
            *(undefined1 *)((long)puVar24 + 0x14) = 0;
            *(undefined4 *)(puVar24 + 9) = 0x20;
            *(undefined1 *)((long)puVar24 + 0x6b) = 0;
            *puVar24 = (ulong)puVar1;
            puVar24[1] = (ulong)((long)puVar24 + 0x14);
            *(undefined1 *)((long)puVar24 + 0x4c) = 0;
            puVar24[7] = (ulong)puVar1;
            puVar24[8] = (ulong)((long)puVar24 + 0x4c);
            puVar24 = puVar24 + 0xe;
          } while (puVar24 != puVar20 + uVar30 * 7);
        }
        *(uint *)(param_1 + 3) = uVar10;
        param_1[4] = puVar20;
        lVar29 = *(long *)puVar4;
        if (lVar29 != 0) goto LAB_03edfc48;
LAB_03edfcb8:
        pvVar15 = malloc(uVar30 << 3);
joined_r0x03edfc9c:
        if (pvVar15 == (void *)0x0) goto LAB_03edfcc4;
        *(uint *)(param_1 + 1) = uVar10;
        param_1[2] = pvVar15;
        if (uVar5 != 0) goto LAB_03edfcd0;
      }
      else {
        plVar12 = param_3;
        if (param_3 != (long *)0x0) {
LAB_03edfb5c:
          puVar14 = (ulong *)(**(code **)(*plVar12 + 0x30))(plVar12,sVar34,8);
          if (puVar14 != (ulong *)0x0) goto LAB_03edfb8c;
LAB_03edfb74:
          lVar29 = *(long *)puVar4;
          if (lVar29 == 0) goto LAB_03edfcb8;
LAB_03edfc48:
          if (param_3 == (long *)0x0) goto LAB_03edfc5c;
          plVar12 = param_3;
LAB_03edfc88:
          pvVar15 = (void *)(**(code **)(*plVar12 + 0x30))(plVar12,uVar30 << 3,8);
          goto joined_r0x03edfc9c;
        }
        lVar13 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
        plVar12 = (long *)(lVar29 + 8);
        if (lVar13 != 0) {
          plVar12 = (long *)(lVar13 + 0xa8);
        }
        plVar12 = (long *)*plVar12;
        if (plVar12 != (long *)0x0) goto LAB_03edfb5c;
        lVar29 = *(long *)puVar4;
        if (lVar29 == 0) goto LAB_03edfcb8;
LAB_03edfc5c:
        lVar13 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
        plVar12 = (long *)(lVar29 + 8);
        if (lVar13 != 0) {
          plVar12 = (long *)(lVar13 + 0xa8);
        }
        plVar12 = (long *)*plVar12;
        if (plVar12 != (long *)0x0) goto LAB_03edfc88;
LAB_03edfcc4:
        if (0 < *(int *)(param_1 + 1)) {
LAB_03edfcd0:
          puVar1 = PTR_PTR_04bb2238;
          uVar28 = 0;
          do {
            (**(code **)(*(long *)puVar1 + 0x18))(puVar1);
            uVar11 = uVar28;
            if (*(uint *)(param_1 + 1) <= uVar28) {
              uVar11 = 0;
            }
            uVar28 = uVar28 + 1;
            *(undefined8 *)(param_1[2] + (ulong)uVar11 * 8) = *(undefined8 *)(puVar1 + 8);
          } while ((int)uVar28 < *(int *)(param_1 + 1));
        }
      }
      lVar29 = *(long *)puVar4;
      if (lVar29 == 0) {
        pvVar15 = malloc(uVar30);
        if (pvVar15 == (void *)0x0) goto LAB_03edfd64;
LAB_03edfd80:
        *(uint *)(param_1 + 5) = uVar10;
        param_1[6] = pvVar15;
        uVar33 = uVar30;
        if (uVar5 != 0) {
LAB_03edfd94:
          uVar32 = uVar33 & 3;
          if ((uint)uVar33 < 4) {
            uVar31 = 0;
          }
          else {
            uVar31 = 0;
            do {
              *(undefined1 *)(param_1[6] + uVar31) = 0;
              *(undefined1 *)(param_1[6] + uVar31 + 1) = 0;
              *(undefined1 *)(param_1[6] + uVar31 + 2) = 0;
              lVar29 = param_1[6] + uVar31;
              uVar31 = uVar31 + 4;
              *(undefined1 *)(lVar29 + 3) = 0;
            } while ((uVar33 & 0xfffffffc) != uVar31);
          }
          for (; uVar32 != 0; uVar32 = uVar32 - 1) {
            *(undefined1 *)(param_1[6] + uVar31) = 0;
            uVar31 = uVar31 + 1;
          }
        }
      }
      else {
        lVar13 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
        plVar12 = (long *)(lVar29 + 8);
        if (lVar13 != 0) {
          plVar12 = (long *)(lVar13 + 0xa8);
        }
        plVar12 = (long *)*plVar12;
        if ((plVar12 != (long *)0x0) &&
           (pvVar15 = (void *)(**(code **)(*plVar12 + 0x30))(plVar12,uVar30,8),
           pvVar15 != (void *)0x0)) goto LAB_03edfd80;
LAB_03edfd64:
        uVar33 = (ulong)*(uint *)(param_1 + 5);
        if (0 < (int)*(uint *)(param_1 + 5)) goto LAB_03edfd94;
      }
      lVar29 = *(long *)puVar4;
      if (lVar29 == 0) {
        pvVar15 = malloc(uVar30);
        if (pvVar15 == (void *)0x0) goto LAB_03edfe50;
LAB_03edfe6c:
        *(uint *)(param_1 + 7) = uVar10;
        param_1[8] = pvVar15;
        if (uVar5 == 0) goto LAB_03edfef4;
      }
      else {
        lVar13 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
        plVar12 = (long *)(lVar29 + 8);
        if (lVar13 != 0) {
          plVar12 = (long *)(lVar13 + 0xa8);
        }
        plVar12 = (long *)*plVar12;
        if ((plVar12 != (long *)0x0) &&
           (pvVar15 = (void *)(**(code **)(*plVar12 + 0x30))(plVar12,uVar30,8),
           pvVar15 != (void *)0x0)) goto LAB_03edfe6c;
LAB_03edfe50:
        uVar30 = (ulong)*(uint *)(param_1 + 7);
        if ((int)*(uint *)(param_1 + 7) < 1) goto LAB_03edfef4;
      }
      uVar33 = uVar30 & 3;
      if ((uint)uVar30 < 4) {
        uVar32 = 0;
      }
      else {
        uVar32 = 0;
        do {
          *(undefined1 *)(param_1[8] + uVar32) = 1;
          *(undefined1 *)(param_1[8] + uVar32 + 1) = 1;
          *(undefined1 *)(param_1[8] + uVar32 + 2) = 1;
          lVar29 = param_1[8] + uVar32;
          uVar32 = uVar32 + 4;
          *(undefined1 *)(lVar29 + 3) = 1;
        } while ((uVar30 & 0xfffffffc) != uVar32);
      }
      for (; uVar33 != 0; uVar33 = uVar33 - 1) {
        *(undefined1 *)(param_1[8] + uVar32) = 1;
        uVar32 = uVar32 + 1;
      }
    }
LAB_03edfef4:
    uVar5 = (**(code **)(*(long *)param_1[0x22] + 0x50))();
    uVar10 = (uint)uVar5;
    uVar30 = (ulong)uVar10;
    if (uVar5 != 0) {
      lVar29 = *(long *)puVar4;
      if (lVar29 == 0) {
        pvVar15 = malloc(uVar30 << 2);
      }
      else {
        plVar12 = param_3;
        if (param_3 == (long *)0x0) {
          lVar13 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
          plVar12 = (long *)(lVar29 + 8);
          if (lVar13 != 0) {
            plVar12 = (long *)(lVar13 + 0xa8);
          }
          plVar12 = (long *)*plVar12;
          if (plVar12 == (long *)0x0) goto LAB_03edff6c;
        }
        pvVar15 = (void *)(**(code **)(*plVar12 + 0x30))(plVar12,uVar30 << 2,8);
      }
      if (pvVar15 != (void *)0x0) {
        *(uint *)(param_1 + 9) = uVar10;
        param_1[10] = pvVar15;
      }
    }
LAB_03edff6c:
    uVar6 = (**(code **)(*(long *)param_1[0x22] + 0x58))();
    uVar28 = (uint)uVar6;
    uVar33 = (ulong)uVar28;
    if (uVar6 != 0) {
      lVar29 = *(long *)puVar4;
      if (lVar29 == 0) {
        pvVar15 = malloc(uVar33 << 2);
      }
      else {
        plVar12 = param_3;
        if (param_3 == (long *)0x0) {
          lVar13 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
          plVar12 = (long *)(lVar29 + 8);
          if (lVar13 != 0) {
            plVar12 = (long *)(lVar13 + 0xa8);
          }
          plVar12 = (long *)*plVar12;
          if (plVar12 == (long *)0x0) goto LAB_03edffe4;
        }
        pvVar15 = (void *)(**(code **)(*plVar12 + 0x30))(plVar12,uVar33 << 2,8);
      }
      if (pvVar15 != (void *)0x0) {
        *(uint *)(param_1 + 0xf) = uVar28;
        param_1[0x10] = pvVar15;
      }
    }
LAB_03edffe4:
    uVar7 = (**(code **)(*(long *)param_1[0x22] + 0x60))();
    uVar11 = (uint)uVar7;
    uVar32 = (ulong)uVar11;
    if (uVar7 != 0) {
      lVar29 = *(long *)puVar4;
      if (lVar29 == 0) {
        pvVar15 = malloc(uVar32);
      }
      else {
        plVar12 = param_3;
        if (param_3 == (long *)0x0) {
          lVar13 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
          plVar12 = (long *)(lVar29 + 8);
          if (lVar13 != 0) {
            plVar12 = (long *)(lVar13 + 0xa8);
          }
          plVar12 = (long *)*plVar12;
          if (plVar12 == (long *)0x0) goto LAB_03ee0058;
        }
        pvVar15 = (void *)(**(code **)(*plVar12 + 0x30))(plVar12,uVar32,8);
      }
      if (pvVar15 != (void *)0x0) {
        *(uint *)(param_1 + 0x15) = uVar11;
        param_1[0x16] = pvVar15;
      }
    }
LAB_03ee0058:
    uVar8 = (**(code **)(*(long *)param_1[0x22] + 0x68))();
    uVar2 = (uint)uVar8;
    uVar31 = (ulong)uVar2;
    if (uVar8 != 0) {
      lVar29 = *(long *)puVar4;
      if (lVar29 == 0) {
        pvVar15 = malloc(uVar31 * 0xc);
      }
      else {
        plVar12 = param_3;
        if (param_3 == (long *)0x0) {
          lVar13 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
          plVar12 = (long *)(lVar29 + 8);
          if (lVar13 != 0) {
            plVar12 = (long *)(lVar13 + 0xa8);
          }
          plVar12 = (long *)*plVar12;
          if (plVar12 == (long *)0x0) goto LAB_03ee00d4;
        }
        pvVar15 = (void *)(**(code **)(*plVar12 + 0x30))(plVar12,uVar31 * 0xc,8);
      }
      if (pvVar15 != (void *)0x0) {
        *(uint *)(param_1 + 0x1b) = uVar2;
        param_1[0x1c] = pvVar15;
      }
    }
LAB_03ee00d4:
    uVar19 = *(uint *)(param_1 + 9);
    if (0 < (int)uVar19) {
      uVar23 = 0;
      do {
        uVar3 = uVar23;
        if (uVar19 <= uVar23) {
          uVar3 = 0;
        }
        uVar23 = uVar23 + 1;
        *(undefined4 *)(param_1[10] + (ulong)uVar3 * 4) = 0;
        uVar19 = *(uint *)(param_1 + 9);
      } while ((int)uVar23 < (int)uVar19);
    }
    uVar19 = *(uint *)(param_1 + 0xf);
    if (0 < (int)uVar19) {
      uVar23 = 0;
      do {
        uVar3 = uVar23;
        if (uVar19 <= uVar23) {
          uVar3 = 0;
        }
        uVar23 = uVar23 + 1;
        *(undefined4 *)(param_1[0x10] + (ulong)uVar3 * 4) = 0;
        uVar19 = *(uint *)(param_1 + 0xf);
      } while ((int)uVar23 < (int)uVar19);
    }
    uVar19 = *(uint *)(param_1 + 0x15);
    if (0 < (int)uVar19) {
      uVar23 = 0;
      do {
        uVar3 = uVar23;
        if (uVar19 <= uVar23) {
          uVar3 = 0;
        }
        uVar23 = uVar23 + 1;
        *(undefined1 *)(param_1[0x16] + (ulong)uVar3) = 0;
        uVar19 = *(uint *)(param_1 + 0x15);
      } while ((int)uVar23 < (int)uVar19);
    }
    uVar19 = *(uint *)(param_1 + 0x1b);
    if (0 < (int)uVar19) {
      uVar23 = 0;
      do {
        uVar3 = uVar23;
        if (uVar19 <= uVar23) {
          uVar3 = 0;
        }
        uVar23 = uVar23 + 1;
        puVar27 = (undefined8 *)(param_1[0x1c] + (ulong)uVar3 * 0xc);
        *puVar27 = 0;
        *(undefined4 *)(puVar27 + 1) = 0;
        uVar19 = *(uint *)(param_1 + 0x1b);
      } while ((int)uVar23 < (int)uVar19);
    }
    if (uVar5 != 0) {
      lVar29 = *(long *)puVar4;
      if (lVar29 == 0) {
        pvVar15 = malloc(uVar30);
        if (pvVar15 == (void *)0x0) goto LAB_03ee01f8;
LAB_03ee0254:
        *(uint *)(param_1 + 0xb) = uVar10;
        param_1[0xc] = pvVar15;
        uVar19 = uVar10;
        if (uVar5 != 0) {
LAB_03ee0268:
          uVar26 = (ulong)uVar19 & 3;
          if (uVar19 < 4) {
            uVar25 = 0;
          }
          else {
            uVar25 = 0;
            do {
              *(undefined1 *)(param_1[0xc] + uVar25) = 0;
              *(undefined1 *)(param_1[0xc] + uVar25 + 1) = 0;
              *(undefined1 *)(param_1[0xc] + uVar25 + 2) = 0;
              lVar29 = param_1[0xc] + uVar25;
              uVar25 = uVar25 + 4;
              *(undefined1 *)(lVar29 + 3) = 0;
            } while (((ulong)uVar19 & 0xfffffffc) != uVar25);
          }
          if ((uVar19 & 3) != 0) {
            do {
              uVar26 = uVar26 - 1;
              *(undefined1 *)(param_1[0xc] + uVar25) = 0;
              uVar25 = uVar25 + 1;
            } while (uVar26 != 0);
          }
        }
      }
      else {
        lVar13 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
        plVar12 = (long *)(lVar29 + 8);
        if (lVar13 != 0) {
          plVar12 = (long *)(lVar13 + 0xa8);
        }
        plVar12 = (long *)*plVar12;
        if ((plVar12 != (long *)0x0) &&
           (pvVar15 = (void *)(**(code **)(*plVar12 + 0x30))(plVar12,uVar30,8),
           pvVar15 != (void *)0x0)) goto LAB_03ee0254;
LAB_03ee01f8:
        uVar19 = *(uint *)(param_1 + 0xb);
        if (0 < (int)*(uint *)(param_1 + 0xb)) goto LAB_03ee0268;
      }
      lVar29 = *(long *)puVar4;
      if (lVar29 == 0) {
        pvVar15 = malloc(uVar30);
        if (pvVar15 == (void *)0x0) goto LAB_03ee0330;
LAB_03ee034c:
        *(uint *)(param_1 + 0xd) = uVar10;
        param_1[0xe] = pvVar15;
        if (uVar5 == 0) goto LAB_03ee03d4;
      }
      else {
        lVar13 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
        plVar12 = (long *)(lVar29 + 8);
        if (lVar13 != 0) {
          plVar12 = (long *)(lVar13 + 0xa8);
        }
        plVar12 = (long *)*plVar12;
        if ((plVar12 != (long *)0x0) &&
           (pvVar15 = (void *)(**(code **)(*plVar12 + 0x30))(plVar12,uVar30,8),
           pvVar15 != (void *)0x0)) goto LAB_03ee034c;
LAB_03ee0330:
        uVar30 = (ulong)*(uint *)(param_1 + 0xd);
        if ((int)*(uint *)(param_1 + 0xd) < 1) goto LAB_03ee03d4;
      }
      uVar26 = uVar30 & 3;
      if ((uint)uVar30 < 4) {
        uVar25 = 0;
      }
      else {
        uVar25 = 0;
        do {
          *(undefined1 *)(param_1[0xe] + uVar25) = 1;
          *(undefined1 *)(param_1[0xe] + uVar25 + 1) = 1;
          *(undefined1 *)(param_1[0xe] + uVar25 + 2) = 1;
          lVar29 = param_1[0xe] + uVar25;
          uVar25 = uVar25 + 4;
          *(undefined1 *)(lVar29 + 3) = 1;
        } while ((uVar30 & 0xfffffffc) != uVar25);
      }
      for (; uVar26 != 0; uVar26 = uVar26 - 1) {
        *(undefined1 *)(param_1[0xe] + uVar25) = 1;
        uVar25 = uVar25 + 1;
      }
    }
LAB_03ee03d4:
    if (uVar6 != 0) {
      lVar29 = *(long *)puVar4;
      if (lVar29 == 0) {
        pvVar15 = malloc(uVar33);
        if (pvVar15 == (void *)0x0) goto LAB_03ee0424;
LAB_03ee0440:
        *(uint *)(param_1 + 0x11) = uVar28;
        param_1[0x12] = pvVar15;
        uVar10 = uVar28;
        if (uVar6 != 0) {
LAB_03ee0454:
          uVar30 = (ulong)uVar10 & 3;
          if (uVar10 < 4) {
            uVar26 = 0;
          }
          else {
            uVar26 = 0;
            do {
              *(undefined1 *)(param_1[0x12] + uVar26) = 0;
              *(undefined1 *)(param_1[0x12] + uVar26 + 1) = 0;
              *(undefined1 *)(param_1[0x12] + uVar26 + 2) = 0;
              lVar29 = param_1[0x12] + uVar26;
              uVar26 = uVar26 + 4;
              *(undefined1 *)(lVar29 + 3) = 0;
            } while (((ulong)uVar10 & 0xfffffffc) != uVar26);
          }
          if ((uVar10 & 3) != 0) {
            do {
              uVar30 = uVar30 - 1;
              *(undefined1 *)(param_1[0x12] + uVar26) = 0;
              uVar26 = uVar26 + 1;
            } while (uVar30 != 0);
          }
        }
      }
      else {
        lVar13 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
        plVar12 = (long *)(lVar29 + 8);
        if (lVar13 != 0) {
          plVar12 = (long *)(lVar13 + 0xa8);
        }
        plVar12 = (long *)*plVar12;
        if ((plVar12 != (long *)0x0) &&
           (pvVar15 = (void *)(**(code **)(*plVar12 + 0x30))(plVar12,uVar33,8),
           pvVar15 != (void *)0x0)) goto LAB_03ee0440;
LAB_03ee0424:
        uVar10 = *(uint *)(param_1 + 0x11);
        if (0 < (int)*(uint *)(param_1 + 0x11)) goto LAB_03ee0454;
      }
      lVar29 = *(long *)puVar4;
      if (lVar29 == 0) {
        pvVar15 = malloc(uVar33);
        if (pvVar15 == (void *)0x0) goto LAB_03ee0510;
LAB_03ee052c:
        *(uint *)(param_1 + 0x13) = uVar28;
        param_1[0x14] = pvVar15;
        if (uVar6 == 0) goto LAB_03ee05b4;
      }
      else {
        lVar13 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
        plVar12 = (long *)(lVar29 + 8);
        if (lVar13 != 0) {
          plVar12 = (long *)(lVar13 + 0xa8);
        }
        plVar12 = (long *)*plVar12;
        if ((plVar12 != (long *)0x0) &&
           (pvVar15 = (void *)(**(code **)(*plVar12 + 0x30))(plVar12,uVar33,8),
           pvVar15 != (void *)0x0)) goto LAB_03ee052c;
LAB_03ee0510:
        uVar33 = (ulong)*(uint *)(param_1 + 0x13);
        if ((int)*(uint *)(param_1 + 0x13) < 1) goto LAB_03ee05b4;
      }
      uVar30 = uVar33 & 3;
      if ((uint)uVar33 < 4) {
        uVar26 = 0;
      }
      else {
        uVar26 = 0;
        do {
          *(undefined1 *)(param_1[0x14] + uVar26) = 1;
          *(undefined1 *)(param_1[0x14] + uVar26 + 1) = 1;
          *(undefined1 *)(param_1[0x14] + uVar26 + 2) = 1;
          lVar29 = param_1[0x14] + uVar26;
          uVar26 = uVar26 + 4;
          *(undefined1 *)(lVar29 + 3) = 1;
        } while ((uVar33 & 0xfffffffc) != uVar26);
      }
      for (; uVar30 != 0; uVar30 = uVar30 - 1) {
        *(undefined1 *)(param_1[0x14] + uVar26) = 1;
        uVar26 = uVar26 + 1;
      }
    }
LAB_03ee05b4:
    if (uVar7 != 0) {
      lVar29 = *(long *)puVar4;
      if (lVar29 == 0) {
        pvVar15 = malloc(uVar32);
        if (pvVar15 == (void *)0x0) goto LAB_03ee0604;
LAB_03ee0620:
        *(uint *)(param_1 + 0x17) = uVar11;
        param_1[0x18] = pvVar15;
        uVar10 = uVar11;
        if (uVar7 != 0) {
LAB_03ee0634:
          uVar30 = (ulong)uVar10 & 3;
          if (uVar10 < 4) {
            uVar33 = 0;
          }
          else {
            uVar33 = 0;
            do {
              *(undefined1 *)(param_1[0x18] + uVar33) = 0;
              *(undefined1 *)(param_1[0x18] + uVar33 + 1) = 0;
              *(undefined1 *)(param_1[0x18] + uVar33 + 2) = 0;
              lVar29 = param_1[0x18] + uVar33;
              uVar33 = uVar33 + 4;
              *(undefined1 *)(lVar29 + 3) = 0;
            } while (((ulong)uVar10 & 0xfffffffc) != uVar33);
          }
          if ((uVar10 & 3) != 0) {
            do {
              uVar30 = uVar30 - 1;
              *(undefined1 *)(param_1[0x18] + uVar33) = 0;
              uVar33 = uVar33 + 1;
            } while (uVar30 != 0);
          }
        }
      }
      else {
        lVar13 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
        plVar12 = (long *)(lVar29 + 8);
        if (lVar13 != 0) {
          plVar12 = (long *)(lVar13 + 0xa8);
        }
        plVar12 = (long *)*plVar12;
        if ((plVar12 != (long *)0x0) &&
           (pvVar15 = (void *)(**(code **)(*plVar12 + 0x30))(plVar12,uVar32,8),
           pvVar15 != (void *)0x0)) goto LAB_03ee0620;
LAB_03ee0604:
        uVar10 = *(uint *)(param_1 + 0x17);
        if (0 < (int)*(uint *)(param_1 + 0x17)) goto LAB_03ee0634;
      }
      lVar29 = *(long *)puVar4;
      if (lVar29 == 0) {
        pvVar15 = malloc(uVar32);
        if (pvVar15 == (void *)0x0) goto LAB_03ee06f0;
LAB_03ee070c:
        *(uint *)(param_1 + 0x19) = uVar11;
        param_1[0x1a] = pvVar15;
        if (uVar7 == 0) goto LAB_03ee0794;
      }
      else {
        lVar13 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
        plVar12 = (long *)(lVar29 + 8);
        if (lVar13 != 0) {
          plVar12 = (long *)(lVar13 + 0xa8);
        }
        plVar12 = (long *)*plVar12;
        if ((plVar12 != (long *)0x0) &&
           (pvVar15 = (void *)(**(code **)(*plVar12 + 0x30))(plVar12,uVar32,8),
           pvVar15 != (void *)0x0)) goto LAB_03ee070c;
LAB_03ee06f0:
        uVar32 = (ulong)*(uint *)(param_1 + 0x19);
        if ((int)*(uint *)(param_1 + 0x19) < 1) goto LAB_03ee0794;
      }
      uVar30 = uVar32 & 3;
      if ((uint)uVar32 < 4) {
        uVar33 = 0;
      }
      else {
        uVar33 = 0;
        do {
          *(undefined1 *)(param_1[0x1a] + uVar33) = 1;
          *(undefined1 *)(param_1[0x1a] + uVar33 + 1) = 1;
          *(undefined1 *)(param_1[0x1a] + uVar33 + 2) = 1;
          lVar29 = param_1[0x1a] + uVar33;
          uVar33 = uVar33 + 4;
          *(undefined1 *)(lVar29 + 3) = 1;
        } while ((uVar32 & 0xfffffffc) != uVar33);
      }
      for (; uVar30 != 0; uVar30 = uVar30 - 1) {
        *(undefined1 *)(param_1[0x1a] + uVar33) = 1;
        uVar33 = uVar33 + 1;
      }
    }
LAB_03ee0794:
    if (uVar8 != 0) {
      lVar29 = *(long *)puVar4;
      if (lVar29 == 0) {
        pvVar15 = malloc(uVar31);
        if (pvVar15 == (void *)0x0) goto LAB_03ee07e4;
LAB_03ee0800:
        *(uint *)(param_1 + 0x1d) = uVar2;
        param_1[0x1e] = pvVar15;
        uVar10 = uVar2;
        if (uVar8 != 0) {
LAB_03ee0814:
          uVar30 = (ulong)uVar10 & 3;
          if (uVar10 < 4) {
            uVar33 = 0;
          }
          else {
            uVar33 = 0;
            do {
              *(undefined1 *)(param_1[0x1e] + uVar33) = 0;
              *(undefined1 *)(param_1[0x1e] + uVar33 + 1) = 0;
              *(undefined1 *)(param_1[0x1e] + uVar33 + 2) = 0;
              lVar29 = param_1[0x1e] + uVar33;
              uVar33 = uVar33 + 4;
              *(undefined1 *)(lVar29 + 3) = 0;
            } while (((ulong)uVar10 & 0xfffffffc) != uVar33);
          }
          if ((uVar10 & 3) != 0) {
            do {
              uVar30 = uVar30 - 1;
              *(undefined1 *)(param_1[0x1e] + uVar33) = 0;
              uVar33 = uVar33 + 1;
            } while (uVar30 != 0);
          }
        }
      }
      else {
        lVar13 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
        plVar12 = (long *)(lVar29 + 8);
        if (lVar13 != 0) {
          plVar12 = (long *)(lVar13 + 0xa8);
        }
        plVar12 = (long *)*plVar12;
        if ((plVar12 != (long *)0x0) &&
           (pvVar15 = (void *)(**(code **)(*plVar12 + 0x30))(plVar12,uVar31,8),
           pvVar15 != (void *)0x0)) goto LAB_03ee0800;
LAB_03ee07e4:
        uVar10 = *(uint *)(param_1 + 0x1d);
        if (0 < (int)*(uint *)(param_1 + 0x1d)) goto LAB_03ee0814;
      }
      lVar29 = *(long *)puVar4;
      if (lVar29 == 0) {
        pvVar15 = malloc(uVar31);
        if (pvVar15 == (void *)0x0) goto LAB_03ee08d0;
LAB_03ee08ec:
        *(uint *)(param_1 + 0x1f) = uVar2;
        param_1[0x20] = pvVar15;
        if (uVar8 == 0) goto LAB_03ee0974;
      }
      else {
        lVar13 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
        plVar12 = (long *)(lVar29 + 8);
        if (lVar13 != 0) {
          plVar12 = (long *)(lVar13 + 0xa8);
        }
        plVar12 = (long *)*plVar12;
        if ((plVar12 != (long *)0x0) &&
           (pvVar15 = (void *)(**(code **)(*plVar12 + 0x30))(plVar12,uVar31,8),
           pvVar15 != (void *)0x0)) goto LAB_03ee08ec;
LAB_03ee08d0:
        uVar31 = (ulong)*(uint *)(param_1 + 0x1f);
        if ((int)*(uint *)(param_1 + 0x1f) < 1) goto LAB_03ee0974;
      }
      uVar30 = uVar31 & 3;
      if ((uint)uVar31 < 4) {
        uVar33 = 0;
      }
      else {
        uVar33 = 0;
        do {
          *(undefined1 *)(param_1[0x20] + uVar33) = 1;
          *(undefined1 *)(param_1[0x20] + uVar33 + 1) = 1;
          *(undefined1 *)(param_1[0x20] + uVar33 + 2) = 1;
          lVar29 = param_1[0x20] + uVar33;
          uVar33 = uVar33 + 4;
          *(undefined1 *)(lVar29 + 3) = 1;
        } while ((uVar31 & 0xfffffffc) != uVar33);
      }
      for (; uVar30 != 0; uVar30 = uVar30 - 1) {
        *(undefined1 *)(param_1[0x20] + uVar33) = 1;
        uVar33 = uVar33 + 1;
      }
    }
  }
LAB_03ee0974:
  uVar10 = *(uint *)(param_1[0x21] + 0x18);
  if (0 < (int)uVar10) {
    lVar29 = *(long *)puVar4;
    sVar34 = (ulong)uVar10 * 0x78;
    if (lVar29 == 0) {
      puVar16 = malloc(sVar34);
    }
    else {
      plVar12 = param_3;
      if (param_3 == (long *)0x0) {
        lVar13 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
        plVar12 = (long *)(lVar29 + 8);
        if (lVar13 != 0) {
          plVar12 = (long *)(lVar13 + 0xa8);
        }
        plVar12 = (long *)*plVar12;
        if (plVar12 == (long *)0x0) goto LAB_03ee0af4;
      }
      puVar16 = (undefined4 *)(**(code **)(*plVar12 + 0x30))(plVar12,sVar34,8);
    }
    if (puVar16 != (undefined4 *)0x0) {
      uVar28 = ((uint)((sVar34 - 0x78) / 0x78) & 0x3ffffff) + 1;
      uVar30 = (ulong)uVar28 & 3;
      puVar21 = puVar16;
      if ((uVar28 & 3) != 0) {
        do {
          *puVar21 = 0;
          uVar30 = uVar30 - 1;
          *(undefined8 *)(puVar21 + 2) = 0;
          *(undefined8 *)(puVar21 + 4) = 0;
          *(undefined8 *)(puVar21 + 6) = 0;
          *(undefined8 *)(puVar21 + 8) = 0;
          *(undefined8 *)(puVar21 + 10) = 0;
          *(undefined8 *)(puVar21 + 0xc) = 0;
          *(undefined8 *)(puVar21 + 0xe) = 0;
          *(undefined8 *)(puVar21 + 0x10) = 0;
          *(undefined8 *)(puVar21 + 0x12) = 0;
          *(undefined8 *)(puVar21 + 0x14) = 0;
          *(undefined8 *)(puVar21 + 0x16) = 0;
          *(undefined8 *)(puVar21 + 0x18) = 0;
          *(undefined8 *)(puVar21 + 0x1a) = 0;
          *(undefined8 *)(puVar21 + 0x1c) = 0;
          puVar21 = puVar21 + 0x1e;
        } while (uVar30 != 0);
      }
      if (0x167 < sVar34 - 0x78) {
        do {
          *puVar21 = 0;
          puVar21[0x1e] = 0;
          puVar21[0x3c] = 0;
          puVar21[0x5a] = 0;
          *(undefined8 *)(puVar21 + 2) = 0;
          *(undefined8 *)(puVar21 + 4) = 0;
          *(undefined8 *)(puVar21 + 6) = 0;
          *(undefined8 *)(puVar21 + 8) = 0;
          *(undefined8 *)(puVar21 + 10) = 0;
          *(undefined8 *)(puVar21 + 0xc) = 0;
          *(undefined8 *)(puVar21 + 0xe) = 0;
          *(undefined8 *)(puVar21 + 0x10) = 0;
          *(undefined8 *)(puVar21 + 0x12) = 0;
          *(undefined8 *)(puVar21 + 0x14) = 0;
          *(undefined8 *)(puVar21 + 0x16) = 0;
          *(undefined8 *)(puVar21 + 0x18) = 0;
          *(undefined8 *)(puVar21 + 0x1a) = 0;
          *(undefined8 *)(puVar21 + 0x1c) = 0;
          *(undefined8 *)(puVar21 + 0x20) = 0;
          *(undefined8 *)(puVar21 + 0x22) = 0;
          *(undefined8 *)(puVar21 + 0x24) = 0;
          *(undefined8 *)(puVar21 + 0x26) = 0;
          *(undefined8 *)(puVar21 + 0x28) = 0;
          *(undefined8 *)(puVar21 + 0x2a) = 0;
          *(undefined8 *)(puVar21 + 0x2c) = 0;
          *(undefined8 *)(puVar21 + 0x2e) = 0;
          *(undefined8 *)(puVar21 + 0x30) = 0;
          *(undefined8 *)(puVar21 + 0x32) = 0;
          *(undefined8 *)(puVar21 + 0x34) = 0;
          *(undefined8 *)(puVar21 + 0x36) = 0;
          *(undefined8 *)(puVar21 + 0x38) = 0;
          *(undefined8 *)(puVar21 + 0x3a) = 0;
          *(undefined8 *)(puVar21 + 0x56) = 0;
          *(undefined8 *)(puVar21 + 0x58) = 0;
          *(undefined8 *)(puVar21 + 0x52) = 0;
          *(undefined8 *)(puVar21 + 0x54) = 0;
          *(undefined8 *)(puVar21 + 0x4e) = 0;
          *(undefined8 *)(puVar21 + 0x50) = 0;
          *(undefined8 *)(puVar21 + 0x4a) = 0;
          *(undefined8 *)(puVar21 + 0x4c) = 0;
          *(undefined8 *)(puVar21 + 0x46) = 0;
          *(undefined8 *)(puVar21 + 0x48) = 0;
          *(undefined8 *)(puVar21 + 0x42) = 0;
          *(undefined8 *)(puVar21 + 0x44) = 0;
          *(undefined8 *)(puVar21 + 0x3e) = 0;
          *(undefined8 *)(puVar21 + 0x40) = 0;
          *(undefined8 *)(puVar21 + 0x74) = 0;
          *(undefined8 *)(puVar21 + 0x76) = 0;
          *(undefined8 *)(puVar21 + 0x70) = 0;
          *(undefined8 *)(puVar21 + 0x72) = 0;
          *(undefined8 *)(puVar21 + 0x6c) = 0;
          *(undefined8 *)(puVar21 + 0x6e) = 0;
          *(undefined8 *)(puVar21 + 0x68) = 0;
          *(undefined8 *)(puVar21 + 0x6a) = 0;
          *(undefined8 *)(puVar21 + 100) = 0;
          *(undefined8 *)(puVar21 + 0x66) = 0;
          *(undefined8 *)(puVar21 + 0x60) = 0;
          *(undefined8 *)(puVar21 + 0x62) = 0;
          *(undefined8 *)(puVar21 + 0x5c) = 0;
          *(undefined8 *)(puVar21 + 0x5e) = 0;
          puVar21 = puVar21 + 0x78;
        } while (puVar21 != puVar16 + (ulong)uVar10 * 0x1e);
      }
      *(uint *)(param_1 + 0x26) = uVar10;
      param_1[0x27] = puVar16;
    }
  }
LAB_03ee0af4:
  *(undefined4 *)(param_1 + 0x23) = 0;
  plVar12 = *(long **)(param_1[0x21] + 0x28);
  iVar9 = (**(code **)(*plVar12 + 0x58))(plVar12);
  if (iVar9 < 1) goto LAB_03ee0d7c;
  uVar10 = (**(code **)(*plVar12 + 0x58))(plVar12);
  if (0 < (int)uVar10) {
    uVar30 = (ulong)uVar10;
    lVar29 = *(long *)puVar4;
    sVar34 = (uVar30 + (ulong)uVar10 * 2) * 8;
    if (lVar29 == 0) {
      puVar27 = malloc(sVar34);
    }
    else {
      plVar17 = param_3;
      if (param_3 == (long *)0x0) {
        lVar13 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
        plVar17 = (long *)(lVar29 + 8);
        if (lVar13 != 0) {
          plVar17 = (long *)(lVar13 + 0xa8);
        }
        plVar17 = (long *)*plVar17;
        if (plVar17 == (long *)0x0) goto LAB_03ee0c38;
      }
      puVar27 = (undefined8 *)(**(code **)(*plVar17 + 0x30))(plVar17,sVar34,8);
    }
    if (puVar27 != (undefined8 *)0x0) {
      uVar32 = uVar30 * 0x18 - 0x18;
      uVar28 = ((uint)(uVar32 / 0x18) & 0xfffffff) + 1;
      uVar33 = (ulong)uVar28 & 3;
      puVar22 = puVar27;
      if ((uVar28 & 3) != 0) {
        do {
          *puVar22 = 0;
          uVar33 = uVar33 - 1;
          *(undefined4 *)(puVar22 + 1) = 0;
          puVar22[2] = 0;
          puVar22 = puVar22 + 3;
        } while (uVar33 != 0);
      }
      if (0x47 < uVar32) {
        do {
          *puVar22 = 0;
          *(undefined4 *)(puVar22 + 1) = 0;
          *(undefined4 *)(puVar22 + 4) = 0;
          *(undefined4 *)(puVar22 + 7) = 0;
          *(undefined4 *)(puVar22 + 10) = 0;
          puVar22[0xb] = 0;
          puVar22[2] = 0;
          puVar22[3] = 0;
          puVar22[5] = 0;
          puVar22[6] = 0;
          puVar22[8] = 0;
          puVar22[9] = 0;
          puVar22 = puVar22 + 0xc;
        } while (puVar22 != puVar27 + uVar30 * 3);
      }
      *(uint *)(param_1 + 0x2a) = uVar10;
      param_1[0x2b] = puVar27;
    }
  }
LAB_03ee0c38:
  iVar9 = (**(code **)(*plVar12 + 0x58))(plVar12);
  if (0 < iVar9) {
    uVar10 = 0;
    do {
      lVar29 = param_1[0x2b];
      uVar28 = uVar10;
      if (*(uint *)(param_1 + 0x2a) <= uVar10) {
        uVar28 = 0;
      }
      uVar11 = (**(code **)(*plVar12 + 0x60))(plVar12,uVar10);
      if (0 < (int)uVar11) {
        lVar13 = *(long *)puVar4;
        sVar34 = (ulong)uVar11 << 4;
        if (lVar13 == 0) {
          pvVar15 = malloc(sVar34);
        }
        else {
          plVar17 = param_3;
          if (param_3 == (long *)0x0) {
            lVar18 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
            plVar17 = (long *)(lVar13 + 8);
            if (lVar18 != 0) {
              plVar17 = (long *)(lVar18 + 0xa8);
            }
            plVar17 = (long *)*plVar17;
            if (plVar17 == (long *)0x0) goto LAB_03ee0c60;
          }
          pvVar15 = (void *)(**(code **)(*plVar17 + 0x30))(plVar17,sVar34,8);
        }
        if (pvVar15 != (void *)0x0) {
          memset(pvVar15,0,sVar34);
          *(uint *)(lVar29 + (ulong)uVar28 * 0x18 + 8) = uVar11;
          *(void **)(lVar29 + (ulong)uVar28 * 0x18 + 0x10) = pvVar15;
        }
      }
LAB_03ee0c60:
      uVar10 = uVar10 + 1;
      iVar9 = (**(code **)(*plVar12 + 0x58))(plVar12);
    } while ((int)uVar10 < iVar9);
  }
LAB_03ee0d7c:
  param_1[0x24] = param_3;
  *(undefined4 *)(param_1 + 0x25) = 0;
  return;
}

