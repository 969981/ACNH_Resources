
void FUN_01195ad0(long param_1,undefined8 param_2,long *param_3)

{
  undefined8 *puVar1;
  ushort uVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  void *pvVar7;
  ulong uVar8;
  code *pcVar9;
  ulong uVar10;
  uint *puVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  ulong uVar16;
  bool bVar17;
  
  FUN_01196420();
  lVar5 = DAT_05ae7600;
  if (param_3 == (long *)0x0) {
    lVar4 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
    puVar1 = (undefined8 *)(lVar5 + 8);
    if (lVar4 != 0) {
      puVar1 = (undefined8 *)(lVar4 + 0xa8);
    }
    param_3 = (long *)*puVar1;
    if (param_3 != (long *)0x0) goto LAB_01195b34;
    lVar4 = 1;
  }
  else {
LAB_01195b34:
    lVar5 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
    lVar4 = *(long *)(lVar5 + 0xa8);
    *(long **)(lVar5 + 0xa8) = param_3;
  }
  uVar15 = *(uint *)(param_1 + 0x1c0);
  if ((int)uVar15 < 1) {
    if ((*(long *)(param_1 + 0xb0) == 0) ||
       (puVar11 = *(uint **)(*(long *)(param_1 + 0xb0) + 8), puVar11 == (uint *)0x0)) {
      uVar15 = 0;
    }
    else {
      uVar15 = *puVar11;
      if (uVar15 != 0) goto LAB_01195b54;
    }
    bVar17 = true;
  }
  else {
LAB_01195b54:
    uVar13 = 0;
    do {
      if ((int)*(uint *)(param_1 + 0x1c0) < 1) {
        if ((((*(long *)(param_1 + 0xb0) != 0) &&
             (puVar11 = *(uint **)(*(long *)(param_1 + 0xb0) + 8), puVar11 != (uint *)0x0)) &&
            ((*(uint *)(param_1 + 200) <= uVar13 ||
             (*(char *)(*(long *)(param_1 + 0xd0) + (long)(int)uVar13) != '\0')))) &&
           (((uVar13 < *puVar11 && (puVar11[1] != 0)) && ((ushort)puVar11[2] != 0)))) {
          iVar14 = 0xc;
          if (*(char *)((long)puVar11 + 10) != '\0') {
            iVar14 = 0x1c;
          }
          uVar16 = (ulong)(puVar11[1] * uVar13 + (uint)(ushort)puVar11[2] * 8 + iVar14);
          if (uVar16 + (long)puVar11 != 0) {
            if (uVar13 < *(uint *)(param_1 + 200)) {
              uVar2 = 0;
              if ((*(char *)(*(long *)(param_1 + 0xd0) + (long)(int)uVar13) != '\0') &&
                 (lVar5 = uVar16 + (long)puVar11, lVar5 != 0)) {
LAB_01195bac:
                pcVar9 = *(code **)(param_1 + 0x1e8);
                if ((*(ulong *)(param_1 + 0x1f0) & 1) != 0) {
                  pcVar9 = *(code **)(pcVar9 + *(long *)(lVar5 + ((long)*(ulong *)(param_1 + 0x1f0)
                                                                 >> 1)));
                }
                uVar2 = (*pcVar9)();
              }
            }
            else {
              lVar5 = uVar16 + (long)puVar11;
              if (lVar5 != 0) goto LAB_01195bac;
              uVar2 = 0;
            }
            if (*(char *)(param_1 + 0x1fc) == '\0') {
              *(undefined1 *)(param_1 + 0x1fc) = 1;
              *(ushort *)(param_1 + 0x1f8) = uVar2;
            }
            else {
              if (uVar2 < *(ushort *)(param_1 + 0x1f8)) {
                *(ushort *)(param_1 + 0x1f8) = uVar2;
              }
              if (uVar2 <= *(ushort *)(param_1 + 0x1fa)) goto LAB_01195b74;
            }
            *(ushort *)(param_1 + 0x1fa) = uVar2;
          }
        }
      }
      else if (uVar13 < *(uint *)(param_1 + 0x1c0)) {
        uVar12 = uVar13;
        if (*(uint *)(param_1 + 0x1b0) <= uVar13) {
          uVar12 = 0;
        }
        lVar5 = *(long *)(*(long *)(param_1 + 0x1b8) + (ulong)uVar12 * 8);
        if (lVar5 != 0) goto LAB_01195bac;
      }
LAB_01195b74:
      uVar13 = uVar13 + 1;
    } while (uVar15 != uVar13);
    bVar17 = false;
  }
  uVar12 = (uint)*(ushort *)(param_1 + 0x1fa) - (uint)*(ushort *)(param_1 + 0x1f8);
  uVar13 = uVar12 + 1;
  uVar16 = (ulong)uVar13;
  if (0xfffffffe < uVar12) goto LAB_01195dd8;
  if ((int)uVar12 < 0) {
LAB_01195d48:
    uVar16 = (ulong)*(uint *)(param_1 + 0x1d8);
    if (0 < (int)*(uint *)(param_1 + 0x1d8)) goto LAB_01195d54;
  }
  else {
    lVar5 = *(long *)PTR_DAT_04bb2698;
    if (lVar5 == 0) {
      pvVar7 = malloc(uVar16 << 3);
    }
    else {
      if (param_3 == (long *)0x0) {
        lVar6 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
        puVar1 = (undefined8 *)(lVar5 + 8);
        if (lVar6 != 0) {
          puVar1 = (undefined8 *)(lVar6 + 0xa8);
        }
        param_3 = (long *)*puVar1;
        if (param_3 == (long *)0x0) goto LAB_01195d48;
      }
      pvVar7 = (void *)(**(code **)(*param_3 + 0x30))(param_3,uVar16 << 3,8);
    }
    if (pvVar7 == (void *)0x0) goto LAB_01195d48;
    *(uint *)(param_1 + 0x1d8) = uVar13;
    *(void **)(param_1 + 0x1e0) = pvVar7;
LAB_01195d54:
    uVar8 = uVar16 & 3;
    if (uVar16 - 1 < 3) {
      uVar10 = 0;
    }
    else {
      uVar10 = 0;
      do {
        lVar5 = uVar10 * 8;
        uVar10 = uVar10 + 4;
        *(undefined8 *)(*(long *)(param_1 + 0x1e0) + lVar5) = 0;
        *(undefined8 *)(*(long *)(param_1 + 0x1e0) + lVar5 + 8) = 0;
        *(undefined8 *)(*(long *)(param_1 + 0x1e0) + lVar5 + 0x10) = 0;
        *(undefined8 *)(*(long *)(param_1 + 0x1e0) + lVar5 + 0x18) = 0;
      } while ((uVar16 & 0xfffffffc) != uVar10);
    }
    if (uVar8 != 0) {
      lVar5 = uVar10 << 3;
      do {
        uVar8 = uVar8 - 1;
        *(undefined8 *)(*(long *)(param_1 + 0x1e0) + lVar5) = 0;
        lVar5 = lVar5 + 8;
      } while (uVar8 != 0);
    }
  }
  if (!bVar17) {
    uVar12 = 0;
    do {
      if ((int)*(uint *)(param_1 + 0x1c0) < 1) {
        if ((((*(long *)(param_1 + 0xb0) != 0) &&
             (puVar11 = *(uint **)(*(long *)(param_1 + 0xb0) + 8), puVar11 != (uint *)0x0)) &&
            ((*(uint *)(param_1 + 200) <= uVar12 ||
             (*(char *)(*(long *)(param_1 + 0xd0) + (long)(int)uVar12) != '\0')))) &&
           (((uVar12 < *puVar11 && (puVar11[1] != 0)) && ((ushort)puVar11[2] != 0)))) {
          iVar14 = 0xc;
          if (*(char *)((long)puVar11 + 10) != '\0') {
            iVar14 = 0x1c;
          }
          lVar5 = (ulong)(puVar11[1] * uVar12 + (uint)(ushort)puVar11[2] * 8 + iVar14) +
                  (long)puVar11;
          if (lVar5 != 0) {
            if ((*(uint *)(param_1 + 200) <= uVar12) ||
               (*(char *)(*(long *)(param_1 + 0xd0) + (long)(int)uVar12) != '\0'))
            goto LAB_01195e58;
            uVar3 = 0;
            goto LAB_01195e70;
          }
        }
      }
      else if (uVar12 < *(uint *)(param_1 + 0x1c0)) {
        uVar3 = uVar12;
        if (*(uint *)(param_1 + 0x1b0) <= uVar12) {
          uVar3 = 0;
        }
        lVar5 = *(long *)(*(long *)(param_1 + 0x1b8) + (ulong)uVar3 * 8);
        if (lVar5 != 0) {
LAB_01195e58:
          pcVar9 = *(code **)(param_1 + 0x1e8);
          if ((*(ulong *)(param_1 + 0x1f0) & 1) != 0) {
            pcVar9 = *(code **)(pcVar9 + *(long *)(lVar5 + ((long)*(ulong *)(param_1 + 0x1f0) >> 1))
                               );
          }
          uVar3 = (*pcVar9)();
LAB_01195e70:
          uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(param_1 + 0x1f8);
          if (uVar3 < uVar13) {
            if (*(uint *)(param_1 + 0x1d8) <= uVar3) {
              uVar3 = 0;
            }
            *(long *)(*(long *)(param_1 + 0x1e0) + (long)(int)uVar3 * 8) = lVar5;
          }
        }
      }
      uVar12 = uVar12 + 1;
    } while (uVar15 != uVar12);
  }
LAB_01195dd8:
  if (lVar4 != 1) {
    lVar5 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
    *(long *)(lVar5 + 0xa8) = lVar4;
  }
  return;
}

