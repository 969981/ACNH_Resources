
void FUN_026356c0(long param_1,long *param_2,long *param_3)

{
  undefined *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  bool bVar4;
  byte bVar5;
  undefined4 uVar6;
  uint uVar7;
  int iVar8;
  long lVar9;
  long lVar10;
  long *plVar11;
  undefined4 *__ptr;
  uint uVar12;
  long lVar13;
  uint *puVar14;
  ulong uVar15;
  ulong uVar16;
  undefined4 *puVar17;
  code *pcVar18;
  undefined8 uVar19;
  uint uVar20;
  ulong uVar21;
  ulong uVar22;
  void *pvVar23;
  long *plVar24;
  uint uVar25;
  void *__src;
  size_t sVar26;
  long *plVar27;
  uint uVar28;
  undefined *local_70;
  long lStack_68;
  
  pvVar23 = *(void **)(param_1 + 0x10);
  (**(code **)(*param_2 + 0x18))(param_2);
  __src = (void *)param_2[1];
  if (pvVar23 != __src) {
    (**(code **)(*param_2 + 0x18))(param_2);
    lVar13 = 0;
    do {
      if (*(char *)(param_2[1] + lVar13) == '\0') goto LAB_0263576c;
      lVar9 = param_2[1] + lVar13;
      if (*(char *)(lVar9 + 1) == '\0') {
        lVar13 = lVar13 + 1;
        goto LAB_0263576c;
      }
      if (*(char *)(lVar9 + 2) == '\0') {
        lVar13 = lVar13 + 2;
        goto LAB_0263576c;
      }
      lVar13 = lVar13 + 3;
    } while (lVar13 != 0x80001);
    lVar13 = 0;
LAB_0263576c:
    iVar8 = (int)lVar13;
    if (*(int *)(param_1 + 0x18) <= (int)lVar13) {
      iVar8 = *(int *)(param_1 + 0x18) + -1;
    }
    memcpy(pvVar23,__src,(long)iVar8);
    *(undefined1 *)((long)pvVar23 + (long)iVar8) = 0;
  }
  (**(code **)(*(long *)(param_1 + 8) + 0x18))(param_1 + 8);
  uVar6 = FUN_006bd550(*(undefined8 *)(param_1 + 0x10),0);
  *(undefined4 *)(param_1 + 0xa0) = uVar6;
  lVar13 = DAT_05ae7600;
  plVar27 = (long *)PTR_DAT_04bb3350;
  plVar24 = param_3;
  if (param_3 == (long *)0x0) {
    lVar9 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    puVar2 = (undefined8 *)(lVar13 + 8);
    if (lVar9 != 0) {
      puVar2 = (undefined8 *)(lVar9 + 0xa8);
    }
    plVar24 = (long *)*puVar2;
    if (plVar24 != (long *)0x0) goto LAB_026357f4;
    lVar9 = 1;
  }
  else {
LAB_026357f4:
    lVar13 = nn::os::GetTlsValue(*(undefined4 *)(*plVar27 + 0x68));
    lVar9 = *(long *)(lVar13 + 0xa8);
    *(long **)(lVar13 + 0xa8) = plVar24;
  }
  *(undefined4 *)(param_1 + 0x1c0) = 0xffffffff;
  if ((*(long *)(param_1 + 0xb0) == 0) ||
     (puVar14 = *(uint **)(*(long *)(param_1 + 0xb0) + 8), puVar14 == (uint *)0x0)) {
    FUN_02636918();
LAB_026358a8:
    if ((*(long *)(param_1 + 0xb0) != 0) && (*(long *)(*(long *)(param_1 + 0xb0) + 8) != 0)) {
      FUN_02636b00();
    }
    bVar5 = 0;
    uVar28 = 0;
  }
  else {
    uVar28 = *puVar14;
    uVar22 = (ulong)uVar28;
    FUN_02636918();
    puVar1 = PTR_DAT_04bb2698;
    if (uVar28 == 0) goto LAB_026358a8;
    if ((int)uVar28 < 1) {
LAB_026358dc:
      if (0 < (int)DAT_055577c0) {
        sVar26 = (ulong)DAT_055577c0 << 1;
        goto LAB_026358f8;
      }
    }
    else {
      lVar13 = *(long *)PTR_DAT_04bb2698;
      sVar26 = uVar22 << 1;
      if (lVar13 == 0) {
        pvVar23 = malloc(sVar26);
      }
      else {
        plVar11 = plVar24;
        if (plVar24 == (long *)0x0) {
          lVar10 = nn::os::GetTlsValue(*(undefined4 *)(*plVar27 + 0x68));
          plVar11 = (long *)(lVar13 + 8);
          if (lVar10 != 0) {
            plVar11 = (long *)(lVar10 + 0xa8);
          }
          plVar11 = (long *)*plVar11;
          if (plVar11 == (long *)0x0) goto LAB_026358dc;
        }
        pvVar23 = (void *)(**(code **)(*plVar11 + 0x30))(plVar11,sVar26,8);
      }
      if (pvVar23 == (void *)0x0) goto LAB_026358dc;
      DAT_055577c0 = uVar28;
      DAT_055577c8 = pvVar23;
LAB_026358f8:
      memset(DAT_055577c8,0,sVar26);
    }
    if ((int)uVar28 < 1) {
LAB_02635980:
      uVar16 = (ulong)DAT_055577a0;
      if (0 < (int)DAT_055577a0) goto LAB_02635990;
    }
    else {
      lVar13 = *(long *)puVar1;
      if (lVar13 == 0) {
        pvVar23 = malloc(uVar22 << 1);
      }
      else {
        plVar11 = plVar24;
        if (plVar24 == (long *)0x0) {
          lVar10 = nn::os::GetTlsValue(*(undefined4 *)(*plVar27 + 0x68));
          plVar11 = (long *)(lVar13 + 8);
          if (lVar10 != 0) {
            plVar11 = (long *)(lVar10 + 0xa8);
          }
          plVar11 = (long *)*plVar11;
          if (plVar11 == (long *)0x0) goto LAB_02635980;
        }
        pvVar23 = (void *)(**(code **)(*plVar11 + 0x30))(plVar11,uVar22 << 1,8);
      }
      if (pvVar23 == (void *)0x0) goto LAB_02635980;
      uVar16 = uVar22;
      DAT_055577a0 = uVar28;
      DAT_055577a8 = pvVar23;
LAB_02635990:
      uVar15 = uVar16 & 3;
      uVar21 = 0;
      if (2 < uVar16 - 1) {
        do {
          lVar13 = uVar21 * 2;
          uVar21 = uVar21 + 4;
          *(undefined2 *)((long)DAT_055577a8 + lVar13) = 0;
          *(undefined2 *)((long)DAT_055577a8 + lVar13 + 2) = 0;
          *(undefined2 *)((long)DAT_055577a8 + lVar13 + 4) = 0;
          *(undefined2 *)((long)DAT_055577a8 + lVar13 + 6) = 0;
        } while ((uVar16 & 0xfffffffc) != uVar21);
      }
      if (uVar15 != 0) {
        lVar13 = uVar21 << 1;
        do {
          uVar15 = uVar15 - 1;
          *(undefined2 *)((long)DAT_055577a8 + lVar13) = 0;
          lVar13 = lVar13 + 2;
        } while (uVar15 != 0);
      }
    }
    if ((int)uVar28 < 1) {
LAB_02635a84:
      uVar16 = (ulong)DAT_055577b0;
      if (0 < (int)DAT_055577b0) goto LAB_02635a94;
    }
    else {
      lVar13 = *(long *)puVar1;
      if (lVar13 == 0) {
        pvVar23 = malloc(uVar22 << 1);
      }
      else {
        plVar11 = plVar24;
        if (plVar24 == (long *)0x0) {
          lVar10 = nn::os::GetTlsValue(*(undefined4 *)(*plVar27 + 0x68));
          plVar11 = (long *)(lVar13 + 8);
          if (lVar10 != 0) {
            plVar11 = (long *)(lVar10 + 0xa8);
          }
          plVar11 = (long *)*plVar11;
          if (plVar11 == (long *)0x0) goto LAB_02635a84;
        }
        pvVar23 = (void *)(**(code **)(*plVar11 + 0x30))(plVar11,uVar22 << 1,8);
      }
      if (pvVar23 == (void *)0x0) goto LAB_02635a84;
      uVar16 = uVar22;
      DAT_055577b0 = uVar28;
      DAT_055577b8 = pvVar23;
LAB_02635a94:
      uVar15 = uVar16 & 3;
      uVar21 = 0;
      if (2 < uVar16 - 1) {
        do {
          lVar13 = uVar21 * 2;
          uVar21 = uVar21 + 4;
          *(undefined2 *)((long)DAT_055577b8 + lVar13) = 0;
          *(undefined2 *)((long)DAT_055577b8 + lVar13 + 2) = 0;
          *(undefined2 *)((long)DAT_055577b8 + lVar13 + 4) = 0;
          *(undefined2 *)((long)DAT_055577b8 + lVar13 + 6) = 0;
        } while ((uVar16 & 0xfffffffc) != uVar21);
      }
      if (uVar15 != 0) {
        lVar13 = uVar21 << 1;
        do {
          uVar15 = uVar15 - 1;
          *(undefined2 *)((long)DAT_055577b8 + lVar13) = 0;
          lVar13 = lVar13 + 2;
        } while (uVar15 != 0);
      }
    }
    if ((int)uVar28 < 1) {
LAB_02635b84:
      uVar16 = (ulong)DAT_05557780;
      if (0 < (int)DAT_05557780) goto LAB_02635b94;
    }
    else {
      lVar13 = *(long *)puVar1;
      if (lVar13 == 0) {
        pvVar23 = malloc(uVar22 << 1);
      }
      else {
        plVar11 = plVar24;
        if (plVar24 == (long *)0x0) {
          lVar10 = nn::os::GetTlsValue(*(undefined4 *)(*plVar27 + 0x68));
          plVar11 = (long *)(lVar13 + 8);
          if (lVar10 != 0) {
            plVar11 = (long *)(lVar10 + 0xa8);
          }
          plVar11 = (long *)*plVar11;
          if (plVar11 == (long *)0x0) goto LAB_02635b84;
        }
        pvVar23 = (void *)(**(code **)(*plVar11 + 0x30))(plVar11,uVar22 << 1,8);
      }
      if (pvVar23 == (void *)0x0) goto LAB_02635b84;
      uVar16 = uVar22;
      DAT_05557780 = uVar28;
      DAT_05557788 = pvVar23;
LAB_02635b94:
      uVar15 = uVar16 & 3;
      uVar21 = 0;
      if (2 < uVar16 - 1) {
        do {
          lVar13 = uVar21 * 2;
          uVar21 = uVar21 + 4;
          *(undefined2 *)((long)DAT_05557788 + lVar13) = 0;
          *(undefined2 *)((long)DAT_05557788 + lVar13 + 2) = 0;
          *(undefined2 *)((long)DAT_05557788 + lVar13 + 4) = 0;
          *(undefined2 *)((long)DAT_05557788 + lVar13 + 6) = 0;
        } while ((uVar16 & 0xfffffffc) != uVar21);
      }
      if (uVar15 != 0) {
        lVar13 = uVar21 << 1;
        do {
          uVar15 = uVar15 - 1;
          *(undefined2 *)((long)DAT_05557788 + lVar13) = 0;
          lVar13 = lVar13 + 2;
        } while (uVar15 != 0);
      }
    }
    if ((int)uVar28 < 1) {
LAB_02635c80:
      if (0 < (int)DAT_05557770) {
        sVar26 = (ulong)DAT_05557770 << 1;
        goto LAB_02635c9c;
      }
    }
    else {
      lVar13 = *(long *)puVar1;
      sVar26 = uVar22 << 1;
      if (lVar13 == 0) {
        pvVar23 = malloc(sVar26);
      }
      else {
        plVar11 = plVar24;
        if (plVar24 == (long *)0x0) {
          lVar10 = nn::os::GetTlsValue(*(undefined4 *)(*plVar27 + 0x68));
          plVar11 = (long *)(lVar13 + 8);
          if (lVar10 != 0) {
            plVar11 = (long *)(lVar10 + 0xa8);
          }
          plVar11 = (long *)*plVar11;
          if (plVar11 == (long *)0x0) goto LAB_02635c80;
        }
        pvVar23 = (void *)(**(code **)(*plVar11 + 0x30))(plVar11,sVar26,8);
      }
      if (pvVar23 == (void *)0x0) goto LAB_02635c80;
      DAT_05557770 = uVar28;
      DAT_05557778 = pvVar23;
LAB_02635c9c:
      memset(DAT_05557778,0,sVar26);
    }
    if ((int)uVar28 < 1) {
LAB_02635d20:
      if (0 < (int)DAT_05557790) {
        sVar26 = (ulong)DAT_05557790 << 1;
        goto LAB_02635d3c;
      }
    }
    else {
      lVar13 = *(long *)puVar1;
      sVar26 = uVar22 << 1;
      if (lVar13 == 0) {
        pvVar23 = malloc(sVar26);
      }
      else {
        plVar11 = plVar24;
        if (plVar24 == (long *)0x0) {
          lVar10 = nn::os::GetTlsValue(*(undefined4 *)(*plVar27 + 0x68));
          plVar11 = (long *)(lVar13 + 8);
          if (lVar10 != 0) {
            plVar11 = (long *)(lVar10 + 0xa8);
          }
          plVar11 = (long *)*plVar11;
          if (plVar11 == (long *)0x0) goto LAB_02635d20;
        }
        pvVar23 = (void *)(**(code **)(*plVar11 + 0x30))(plVar11,sVar26,8);
      }
      if (pvVar23 == (void *)0x0) goto LAB_02635d20;
      DAT_05557790 = uVar28;
      DAT_05557798 = pvVar23;
LAB_02635d3c:
      memset(DAT_05557798,0,sVar26);
    }
    if ((*(long *)(param_1 + 0xb0) != 0) && (*(long *)(*(long *)(param_1 + 0xb0) + 8) != 0)) {
      FUN_02636b00();
    }
    if ((int)uVar28 < 1) {
LAB_02635dcc:
      uVar22 = (ulong)*(uint *)(param_1 + 200);
      if (0 < (int)*(uint *)(param_1 + 200)) goto LAB_02635dd8;
    }
    else {
      lVar13 = *(long *)puVar1;
      if (lVar13 == 0) {
        pvVar23 = malloc(uVar22);
      }
      else {
        plVar11 = plVar24;
        if (plVar24 == (long *)0x0) {
          lVar10 = nn::os::GetTlsValue(*(undefined4 *)(*plVar27 + 0x68));
          plVar11 = (long *)(lVar13 + 8);
          if (lVar10 != 0) {
            plVar11 = (long *)(lVar10 + 0xa8);
          }
          plVar11 = (long *)*plVar11;
          if (plVar11 == (long *)0x0) goto LAB_02635dcc;
        }
        pvVar23 = (void *)(**(code **)(*plVar11 + 0x30))(plVar11,uVar22,8);
      }
      if (pvVar23 == (void *)0x0) goto LAB_02635dcc;
      *(uint *)(param_1 + 200) = uVar28;
      *(void **)(param_1 + 0xd0) = pvVar23;
LAB_02635dd8:
      uVar16 = uVar22 & 3;
      if (uVar22 - 1 < 3) {
        uVar21 = 0;
      }
      else {
        uVar21 = 0;
        do {
          *(undefined1 *)(*(long *)(param_1 + 0xd0) + uVar21) = 1;
          *(undefined1 *)(*(long *)(param_1 + 0xd0) + uVar21 + 1) = 1;
          *(undefined1 *)(*(long *)(param_1 + 0xd0) + uVar21 + 2) = 1;
          lVar13 = *(long *)(param_1 + 0xd0) + uVar21;
          uVar21 = uVar21 + 4;
          *(undefined1 *)(lVar13 + 3) = 1;
        } while ((uVar22 & 0xfffffffc) != uVar21);
      }
      for (; uVar16 != 0; uVar16 = uVar16 - 1) {
        *(undefined1 *)(*(long *)(param_1 + 0xd0) + uVar21) = 1;
        uVar21 = uVar21 + 1;
      }
    }
    plVar11 = (long *)(param_1 + 0xf8);
    uVar22 = (**(code **)(*plVar11 + 0x10))(plVar11);
    if ((uVar22 & 1) != 0) {
      uVar12 = 0;
      uVar7 = uVar28;
      if (uVar28 < 2) {
        uVar7 = 1;
      }
      do {
        if ((int)*(uint *)(param_1 + 0x1c0) < 1) {
          if ((((*(long *)(param_1 + 0xb0) != 0) &&
               (puVar14 = *(uint **)(*(long *)(param_1 + 0xb0) + 8), puVar14 != (uint *)0x0)) &&
              ((*(uint *)(param_1 + 200) <= uVar12 ||
               (*(char *)(*(long *)(param_1 + 0xd0) + (long)(int)uVar12) != '\0')))) &&
             (((uVar12 < *puVar14 && (puVar14[1] != 0)) && ((ushort)puVar14[2] != 0)))) {
            iVar8 = 0xc;
            if (*(char *)((long)puVar14 + 10) != '\0') {
              iVar8 = 0x1c;
            }
            if ((ulong)(puVar14[1] * uVar12 + (uint)(ushort)puVar14[2] * 8 + iVar8) + (long)puVar14
                != 0) goto LAB_02635ecc;
          }
LAB_02635e80:
          uVar20 = uVar12;
          if (*(uint *)(param_1 + 200) <= uVar12) {
            uVar20 = 0;
          }
          *(undefined1 *)(*(long *)(param_1 + 0xd0) + (long)(int)uVar20) = 0;
        }
        else {
          if (*(uint *)(param_1 + 0x1c0) <= uVar12) goto LAB_02635e80;
          uVar20 = uVar12;
          if (*(uint *)(param_1 + 0x1b0) <= uVar12) {
            uVar20 = 0;
          }
          if (*(long *)(*(long *)(param_1 + 0x1b8) + (ulong)uVar20 * 8) == 0) goto LAB_02635e80;
LAB_02635ecc:
          uVar22 = (**(code **)*plVar11)(plVar11);
          if ((uVar22 & 1) == 0) goto LAB_02635e80;
        }
        uVar12 = uVar12 + 1;
      } while (uVar7 != uVar12);
    }
    bVar5 = 1;
  }
  uVar12 = uVar28;
  if ((int)uVar28 <= (int)*(uint *)(param_1 + 400)) {
    uVar12 = *(uint *)(param_1 + 400);
  }
  uVar22 = (ulong)uVar12;
  if (uVar12 != 0) {
    if ((int)uVar12 < 1) {
LAB_02635fe0:
      uVar16 = (ulong)*(uint *)(param_1 + 0x1b0);
      if (0 < (int)*(uint *)(param_1 + 0x1b0)) goto LAB_02635fec;
    }
    else {
      lVar13 = *(long *)PTR_DAT_04bb2698;
      if (lVar13 == 0) {
        pvVar23 = malloc(uVar22 << 3);
      }
      else {
        plVar11 = plVar24;
        if (plVar24 == (long *)0x0) {
          lVar10 = nn::os::GetTlsValue(*(undefined4 *)(*plVar27 + 0x68));
          plVar11 = (long *)(lVar13 + 8);
          if (lVar10 != 0) {
            plVar11 = (long *)(lVar10 + 0xa8);
          }
          plVar11 = (long *)*plVar11;
          if (plVar11 == (long *)0x0) goto LAB_02635fe0;
        }
        pvVar23 = (void *)(**(code **)(*plVar11 + 0x30))(plVar11,uVar22 << 3,8);
      }
      if (pvVar23 == (void *)0x0) goto LAB_02635fe0;
      *(uint *)(param_1 + 0x1b0) = uVar12;
      *(void **)(param_1 + 0x1b8) = pvVar23;
      uVar16 = uVar22;
LAB_02635fec:
      uVar21 = uVar16 & 3;
      if (uVar16 - 1 < 3) {
        uVar15 = 0;
      }
      else {
        uVar15 = 0;
        do {
          lVar13 = uVar15 * 8;
          uVar15 = uVar15 + 4;
          *(undefined8 *)(*(long *)(param_1 + 0x1b8) + lVar13) = 0;
          *(undefined8 *)(*(long *)(param_1 + 0x1b8) + lVar13 + 8) = 0;
          *(undefined8 *)(*(long *)(param_1 + 0x1b8) + lVar13 + 0x10) = 0;
          *(undefined8 *)(*(long *)(param_1 + 0x1b8) + lVar13 + 0x18) = 0;
        } while ((uVar16 & 0xfffffffc) != uVar15);
      }
      if (uVar21 != 0) {
        lVar13 = uVar15 << 3;
        do {
          uVar21 = uVar21 - 1;
          *(undefined8 *)(*(long *)(param_1 + 0x1b8) + lVar13) = 0;
          lVar13 = lVar13 + 8;
        } while (uVar21 != 0);
      }
    }
    *(undefined4 *)(param_1 + 0x1c0) = 0xffffffff;
    if ((int)uVar12 < 1) {
LAB_026360e4:
      uVar22 = (ulong)*(uint *)(param_1 + 0x1c8);
      if ((int)*(uint *)(param_1 + 0x1c8) < 1) goto LAB_02636174;
    }
    else {
      lVar13 = *(long *)PTR_DAT_04bb2698;
      if (lVar13 == 0) {
        pvVar23 = malloc(uVar22 << 1);
      }
      else {
        if (plVar24 == (long *)0x0) {
          lVar10 = nn::os::GetTlsValue(*(undefined4 *)(*plVar27 + 0x68));
          puVar2 = (undefined8 *)(lVar13 + 8);
          if (lVar10 != 0) {
            puVar2 = (undefined8 *)(lVar10 + 0xa8);
          }
          plVar24 = (long *)*puVar2;
          if (plVar24 == (long *)0x0) goto LAB_026360e4;
        }
        pvVar23 = (void *)(**(code **)(*plVar24 + 0x30))(plVar24,uVar22 << 1,8);
      }
      if (pvVar23 == (void *)0x0) goto LAB_026360e4;
      *(uint *)(param_1 + 0x1c8) = uVar12;
      *(void **)(param_1 + 0x1d0) = pvVar23;
    }
    uVar16 = uVar22 & 3;
    if (uVar22 - 1 < 3) {
      uVar21 = 0;
    }
    else {
      uVar21 = 0;
      do {
        lVar13 = uVar21 * 2;
        uVar21 = uVar21 + 4;
        *(undefined2 *)(*(long *)(param_1 + 0x1d0) + lVar13) = 0xffff;
        *(undefined2 *)(*(long *)(param_1 + 0x1d0) + lVar13 + 2) = 0xffff;
        *(undefined2 *)(*(long *)(param_1 + 0x1d0) + lVar13 + 4) = 0xffff;
        *(undefined2 *)(*(long *)(param_1 + 0x1d0) + lVar13 + 6) = 0xffff;
      } while ((uVar22 & 0xfffffffc) != uVar21);
    }
    if (uVar16 != 0) {
      lVar13 = uVar21 << 1;
      do {
        uVar16 = uVar16 - 1;
        *(undefined2 *)(*(long *)(param_1 + 0x1d0) + lVar13) = 0xffff;
        lVar13 = lVar13 + 2;
      } while (uVar16 != 0);
    }
  }
LAB_02636174:
  puVar1 = PTR_DAT_04bb2698;
  bVar4 = (bool)(bVar5 ^ 1);
  if (*(long *)(param_1 + 0x1a8) == 0) {
    bVar4 = true;
  }
  if (bVar4) {
    puVar2 = (undefined8 *)(param_1 + 0x118);
    uVar22 = (**(code **)(*(long *)(param_1 + 0x118) + 0x10))(puVar2);
    if ((uVar22 & 1) != 0) {
      bVar4 = (bool)(bVar5 ^ 1);
      if ((*(ulong *)(param_1 + 0x1a0) & 1) == 0 && *(long *)(param_1 + 0x198) == 0) {
        bVar4 = true;
      }
      if (!bVar4) {
        if (uVar28 != 0) {
          uVar12 = 0;
          puVar1 = PTR_DAT_04bb2020 + 0x10;
          do {
            if ((int)*(uint *)(param_1 + 0x1c0) < 1) {
              if (((*(long *)(param_1 + 0xb0) != 0) &&
                  (puVar14 = *(uint **)(*(long *)(param_1 + 0xb0) + 8), puVar14 != (uint *)0x0)) &&
                 (((*(uint *)(param_1 + 200) <= uVar12 ||
                   (*(char *)(*(long *)(param_1 + 0xd0) + (long)(int)uVar12) != '\0')) &&
                  (((uVar12 < *puVar14 && (puVar14[1] != 0)) && ((ushort)puVar14[2] != 0)))))) {
                iVar8 = 0xc;
                if (*(char *)((long)puVar14 + 10) != '\0') {
                  iVar8 = 0x1c;
                }
                lVar13 = (ulong)(puVar14[1] * uVar12 + (uint)(ushort)puVar14[2] * 8 + iVar8) +
                         (long)puVar14;
                goto joined_r0x02636400;
              }
            }
            else if (uVar12 < *(uint *)(param_1 + 0x1c0)) {
              uVar7 = uVar12;
              if (*(uint *)(param_1 + 0x1b0) <= uVar12) {
                uVar7 = 0;
              }
              lVar13 = *(long *)(*(long *)(param_1 + 0x1b8) + (ulong)uVar7 * 8);
joined_r0x02636400:
              if (lVar13 != 0) {
                pcVar18 = *(code **)(param_1 + 0x198);
                if ((*(ulong *)(param_1 + 0x1a0) & 1) != 0) {
                  pcVar18 = *(code **)(pcVar18 +
                                      *(long *)(lVar13 + ((long)*(ulong *)(param_1 + 0x1a0) >> 1)));
                }
                lVar10 = (*pcVar18)();
                if (lVar10 != 0) {
                  local_70 = puVar1;
                  lStack_68 = lVar10;
                  uVar7 = (**(code **)*puVar2)(puVar2,&local_70);
                  if (-1 < (int)uVar7) {
                    uVar20 = uVar7;
                    if (*(uint *)(param_1 + 0x1b0) <= uVar7) {
                      uVar20 = 0;
                    }
                    *(long *)(*(long *)(param_1 + 0x1b8) + (ulong)uVar20 * 8) = lVar13;
                    uVar20 = uVar12;
                    if (*(uint *)(param_1 + 0x1c8) <= uVar12) {
                      uVar20 = 0;
                    }
                    *(short *)(*(long *)(param_1 + 0x1d0) + (long)(int)uVar20 * 2) = (short)uVar7;
                  }
                }
              }
            }
            uVar12 = uVar12 + 1;
          } while (uVar28 != uVar12);
        }
        *(undefined4 *)(param_1 + 0x1c0) = *(undefined4 *)(param_1 + 400);
        goto joined_r0x02636570;
      }
    }
    if (uVar28 != 0) {
      uVar7 = 0;
      uVar12 = 0;
      do {
        if ((int)*(uint *)(param_1 + 0x1c0) < 1) {
          if (((*(long *)(param_1 + 0xb0) != 0) &&
              (puVar14 = *(uint **)(*(long *)(param_1 + 0xb0) + 8), puVar14 != (uint *)0x0)) &&
             (((*(uint *)(param_1 + 200) <= uVar7 ||
               (*(char *)(*(long *)(param_1 + 0xd0) + (long)(int)uVar7) != '\0')) &&
              (((uVar7 < *puVar14 && (puVar14[1] != 0)) && ((ushort)puVar14[2] != 0)))))) {
            iVar8 = 0xc;
            if (*(char *)((long)puVar14 + 10) != '\0') {
              iVar8 = 0x1c;
            }
            lVar13 = (ulong)(puVar14[1] * uVar7 + (uint)(ushort)puVar14[2] * 8 + iVar8) +
                     (long)puVar14;
            goto joined_r0x026364f0;
          }
        }
        else if (uVar7 < *(uint *)(param_1 + 0x1c0)) {
          uVar20 = uVar7;
          if (*(uint *)(param_1 + 0x1b0) <= uVar7) {
            uVar20 = 0;
          }
          lVar13 = *(long *)(*(long *)(param_1 + 0x1b8) + (ulong)uVar20 * 8);
joined_r0x026364f0:
          if (lVar13 != 0) {
            uVar20 = uVar12;
            if (*(uint *)(param_1 + 0x1b0) <= uVar12) {
              uVar20 = 0;
            }
            *(long *)(*(long *)(param_1 + 0x1b8) + (long)(int)uVar20 * 8) = lVar13;
            uVar20 = uVar7;
            if (*(uint *)(param_1 + 0x1c8) <= uVar7) {
              uVar20 = 0;
            }
            *(short *)(*(long *)(param_1 + 0x1d0) + (long)(int)uVar20 * 2) = (short)uVar12;
            uVar12 = uVar12 + 1;
          }
        }
        uVar7 = uVar7 + 1;
      } while (uVar28 != uVar7);
      *(uint *)(param_1 + 0x1c0) = uVar12;
      (**(code **)(*(long *)(param_1 + 0xf8) + 0x10))((long *)(param_1 + 0xf8));
    }
    goto joined_r0x02636570;
  }
  if ((int)uVar28 < 1) {
    if (uVar28 == 0) {
      *(undefined4 *)(param_1 + 0x1c0) = 0;
      goto joined_r0x02636570;
    }
LAB_02636524:
    pvVar23 = (void *)0x0;
    uVar12 = 0;
    uVar7 = 0;
    __ptr = (undefined4 *)0x0;
  }
  else {
    lVar13 = *(long *)PTR_DAT_04bb2698;
    if (lVar13 != 0) {
      plVar24 = param_3;
      if (param_3 != (long *)0x0) {
LAB_026361d4:
        __ptr = (undefined4 *)(**(code **)(*plVar24 + 0x30))(plVar24,(ulong)uVar28 << 4,8);
        goto joined_r0x02636548;
      }
      lVar10 = nn::os::GetTlsValue(*(undefined4 *)(*plVar27 + 0x68));
      plVar24 = (long *)(lVar13 + 8);
      if (lVar10 != 0) {
        plVar24 = (long *)(lVar10 + 0xa8);
      }
      plVar24 = (long *)*plVar24;
      if (plVar24 != (long *)0x0) goto LAB_026361d4;
      lVar13 = *(long *)puVar1;
      sVar26 = (size_t)(int)(uVar28 << 3);
      if (lVar13 == 0) goto LAB_026365e4;
LAB_026365a4:
      lVar10 = nn::os::GetTlsValue(*(undefined4 *)(*plVar27 + 0x68));
      puVar2 = (undefined8 *)(lVar13 + 8);
      if (lVar10 != 0) {
        puVar2 = (undefined8 *)(lVar10 + 0xa8);
      }
      param_3 = (long *)*puVar2;
      if (param_3 != (long *)0x0) goto LAB_026365c8;
      goto LAB_02636524;
    }
    __ptr = malloc((ulong)uVar28 << 4);
joined_r0x02636548:
    if (__ptr == (undefined4 *)0x0) {
      lVar13 = *(long *)puVar1;
      sVar26 = (size_t)(int)(uVar28 << 3);
      if (lVar13 == 0) {
LAB_026365e4:
        pvVar23 = malloc(sVar26);
      }
      else {
        if (param_3 == (long *)0x0) goto LAB_026365a4;
LAB_026365c8:
        pvVar23 = (void *)(**(code **)(*param_3 + 0x30))(param_3,sVar26,8);
      }
      uVar7 = 0;
      __ptr = (undefined4 *)0x0;
      uVar12 = 0;
      if (pvVar23 != (void *)0x0) {
        uVar12 = uVar28;
      }
    }
    else {
      uVar16 = (ulong)uVar28;
      uVar22 = uVar16 & 3;
      puVar17 = __ptr;
      if ((uVar28 & 3) != 0) {
        do {
          *puVar17 = 0;
          uVar22 = uVar22 - 1;
          *(undefined8 *)(puVar17 + 2) = 0;
          puVar17 = puVar17 + 4;
        } while (uVar22 != 0);
      }
      if (2 < (uVar16 - 1 & 0xfffffffffffffff)) {
        do {
          *puVar17 = 0;
          *(undefined8 *)(puVar17 + 2) = 0;
          puVar17[4] = 0;
          *(undefined8 *)(puVar17 + 6) = 0;
          puVar17[8] = 0;
          *(undefined8 *)(puVar17 + 10) = 0;
          puVar17[0xc] = 0;
          *(undefined8 *)(puVar17 + 0xe) = 0;
          puVar17 = puVar17 + 0x10;
        } while (puVar17 != __ptr + uVar16 * 4);
      }
      lVar13 = *(long *)puVar1;
      if (lVar13 == 0) {
        pvVar23 = malloc((long)(int)(uVar28 << 3));
LAB_02636580:
        uVar12 = 0;
        if (pvVar23 != (void *)0x0) {
          uVar12 = uVar28;
        }
      }
      else {
        if (param_3 != (long *)0x0) {
LAB_02636294:
          pvVar23 = (void *)(**(code **)(*param_3 + 0x30))(param_3,(long)(int)(uVar28 << 3),8);
          goto LAB_02636580;
        }
        lVar10 = nn::os::GetTlsValue(*(undefined4 *)(*plVar27 + 0x68));
        puVar2 = (undefined8 *)(lVar13 + 8);
        if (lVar10 != 0) {
          puVar2 = (undefined8 *)(lVar10 + 0xa8);
        }
        param_3 = (long *)*puVar2;
        if (param_3 != (long *)0x0) goto LAB_02636294;
        uVar12 = 0;
        pvVar23 = (void *)0x0;
      }
      uVar7 = uVar28;
    }
  }
  uVar25 = 0;
  uVar20 = 0;
  do {
    if ((int)*(uint *)(param_1 + 0x1c0) < 1) {
      if (((*(long *)(param_1 + 0xb0) != 0) &&
          (puVar14 = *(uint **)(*(long *)(param_1 + 0xb0) + 8), puVar14 != (uint *)0x0)) &&
         (((*(uint *)(param_1 + 200) <= uVar20 ||
           (*(char *)(*(long *)(param_1 + 0xd0) + (long)(int)uVar20) != '\0')) &&
          (((uVar20 < *puVar14 && (puVar14[1] != 0)) && ((ushort)puVar14[2] != 0)))))) {
        iVar8 = 0xc;
        if (*(char *)((long)puVar14 + 10) != '\0') {
          iVar8 = 0x1c;
        }
        lVar13 = (ulong)(puVar14[1] * uVar20 + (uint)(ushort)puVar14[2] * 8 + iVar8) + (long)puVar14
        ;
        goto joined_r0x026366d4;
      }
    }
    else if (uVar20 < *(uint *)(param_1 + 0x1c0)) {
      uVar3 = uVar20;
      if (*(uint *)(param_1 + 0x1b0) <= uVar20) {
        uVar3 = 0;
      }
      lVar13 = *(long *)(*(long *)(param_1 + 0x1b8) + (ulong)uVar3 * 8);
joined_r0x026366d4:
      if (lVar13 != 0) {
        uVar3 = uVar20;
        if (uVar7 <= uVar20) {
          uVar3 = 0;
        }
        puVar14 = __ptr + (long)(int)uVar3 * 4;
        *puVar14 = uVar20;
        *(long *)(puVar14 + 2) = lVar13;
        if ((int)uVar25 < (int)uVar12) {
          *(uint **)((long)pvVar23 + (long)(int)uVar25 * 8) = puVar14;
          uVar25 = uVar25 + 1;
        }
      }
    }
    uVar20 = uVar20 + 1;
  } while (uVar28 != uVar20);
  if (1 < (int)uVar25) {
    uVar12 = 0;
    uVar28 = uVar25 - 1;
    do {
      if ((int)uVar28 <= (int)uVar12) break;
      uVar16 = (ulong)uVar12;
      uVar21 = (ulong)uVar28;
      uVar22 = uVar16;
      uVar28 = uVar12;
      do {
        puVar2 = (undefined8 *)((long)pvVar23 + uVar22 * 8);
        iVar8 = (**(code **)(param_1 + 0x1a8))(*puVar2,puVar2[1]);
        if (0 < iVar8) {
          uVar19 = puVar2[1];
          uVar28 = (uint)uVar22;
          puVar2[1] = *(undefined8 *)((long)pvVar23 + uVar22 * 8);
          *(undefined8 *)((long)pvVar23 + uVar22 * 8) = uVar19;
        }
        uVar22 = uVar22 + 1;
      } while (uVar21 != uVar22);
      if ((int)uVar28 <= (int)uVar12) break;
      uVar22 = (ulong)uVar28;
      uVar12 = uVar28;
      do {
        puVar2 = (undefined8 *)((long)pvVar23 + uVar22 * 8);
        iVar8 = (**(code **)(param_1 + 0x1a8))(*puVar2,puVar2[-1]);
        if (iVar8 < 0) {
          uVar19 = puVar2[-1];
          uVar12 = (uint)uVar22;
          puVar2[-1] = *(undefined8 *)((long)pvVar23 + uVar22 * 8);
          *(undefined8 *)((long)pvVar23 + uVar22 * 8) = uVar19;
        }
        uVar22 = uVar22 - 1;
      } while ((long)uVar16 < (long)uVar22);
    } while (uVar12 != uVar28);
  }
  plVar27 = (long *)PTR_DAT_04bb3350;
  if (uVar25 == 0) {
    *(undefined4 *)(param_1 + 0x1c0) = 0;
    plVar27 = &DAT_05ae7790;
    if (pvVar23 != (void *)0x0) goto LAB_0263681c;
  }
  else {
    uVar22 = 0;
    do {
      uVar16 = -(uVar22 >> 0x1f) & 0xfffffff800000000 | uVar22 << 3;
      uVar12 = (uint)uVar22;
      uVar28 = uVar12;
      if (*(uint *)(param_1 + 0x1b0) <= uVar12) {
        uVar28 = 0;
      }
      *(undefined8 *)(*(long *)(param_1 + 0x1b8) + (long)(int)uVar28 * 8) =
           *(undefined8 *)(*(long *)((long)pvVar23 + uVar16) + 8);
      uVar28 = **(uint **)((long)pvVar23 + uVar16);
      if (*(uint *)(param_1 + 0x1c8) <= uVar28) {
        uVar28 = 0;
      }
      *(short *)(*(long *)(param_1 + 0x1d0) + (long)(int)uVar28 * 2) = (short)uVar22;
      uVar22 = (ulong)(uVar12 + 1);
    } while (uVar25 != uVar12 + 1);
    *(uint *)(param_1 + 0x1c0) = uVar25;
LAB_0263681c:
    if (DAT_05ae7600 == 0) {
      free(pvVar23);
    }
    else {
      plVar24 = (long *)FUN_038cb610(DAT_05ae7600,pvVar23);
      if (plVar24 != (long *)0x0) {
        (**(code **)(*plVar24 + 0x38))(plVar24,pvVar23);
      }
    }
  }
  if (__ptr != (undefined4 *)0x0) {
    if (DAT_05ae7600 == 0) {
      free(__ptr);
    }
    else {
      plVar24 = (long *)FUN_038cb610(DAT_05ae7600,__ptr);
      if (plVar24 != (long *)0x0) {
        (**(code **)(*plVar24 + 0x38))(plVar24,__ptr);
      }
    }
  }
joined_r0x02636570:
  if (lVar9 != 1) {
    lVar13 = nn::os::GetTlsValue(*(undefined4 *)(*plVar27 + 0x68));
    *(long *)(lVar13 + 0xa8) = lVar9;
  }
  return;
}

