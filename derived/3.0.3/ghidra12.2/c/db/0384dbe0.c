
void FUN_0384dbe0(uint *param_1,uint *param_2,uint *param_3)

{
  uint uVar1;
  undefined8 *__src;
  uint uVar2;
  undefined *puVar3;
  bool bVar4;
  undefined8 *puVar5;
  char cVar6;
  int iVar7;
  uint uVar8;
  uint *puVar9;
  long lVar10;
  uint *puVar11;
  int *piVar12;
  ulong uVar13;
  long lVar14;
  uint uVar15;
  undefined **local_118;
  undefined8 *local_110;
  int local_108;
  undefined8 local_104 [7];
  undefined1 local_c5;
  undefined **local_c0;
  undefined8 *local_b8;
  undefined4 local_b0;
  undefined8 local_ac [7];
  undefined1 local_6d;
  
  lVar14 = *(long *)(*(long *)PTR_DAT_04bb26a8 + 0x19f7d0);
  uVar15 = *(uint *)(lVar14 + 0x1c0);
  if ((int)uVar15 < 1) {
    if ((*(long *)(lVar14 + 0xb0) == 0) ||
       (puVar9 = *(uint **)(*(long *)(lVar14 + 0xb0) + 8), puVar9 == (uint *)0x0)) {
      uVar15 = 0;
    }
    else {
      uVar15 = *puVar9;
    }
  }
  if (*param_3 < 0xe) {
    local_6d = 0;
    puVar5 = (undefined8 *)(&PTR_DAT_04b5e3b0)[*param_3];
    local_b0 = 0x40;
    local_b8 = local_ac;
    if (local_b8 == puVar5) goto LAB_0384dd14;
  }
  else {
    puVar5 = &DAT_0407ebb1;
  }
  local_6d = 0;
  local_b0 = 0x40;
  local_c0 = &PTR_LAB_048fd2d8;
  local_b8 = local_ac;
  lVar10 = 0;
  do {
    if (*(char *)((long)puVar5 + lVar10) == '\0') {
LAB_0384dcf4:
      iVar7 = (int)lVar10;
joined_r0x0384dcf8:
      if (0x3f < iVar7) {
        iVar7 = 0x3f;
      }
      goto LAB_0384dd00;
    }
    if (*(char *)((long)puVar5 + lVar10 + 1) == '\0') {
      lVar10 = lVar10 + 1;
      goto LAB_0384dcf4;
    }
    if (*(char *)((long)puVar5 + lVar10 + 2) == '\0') {
      iVar7 = (int)lVar10 + 2;
      goto joined_r0x0384dcf8;
    }
    lVar10 = lVar10 + 3;
  } while (lVar10 != 0x80001);
  iVar7 = 0;
LAB_0384dd00:
  memcpy(local_b8,puVar5,(long)iVar7);
  *(undefined1 *)((long)local_ac + (long)iVar7) = 0;
LAB_0384dd14:
  local_c0 = &PTR_LAB_048fb9f8;
  if (uVar15 != 0) {
    uVar8 = 0;
    do {
      puVar3 = PTR_DAT_04bc4380;
      if ((int)*(uint *)(lVar14 + 0x1c0) < 1) {
        if ((((*(long *)(lVar14 + 0xb0) == 0) ||
             (puVar9 = *(uint **)(*(long *)(lVar14 + 0xb0) + 8), puVar9 == (uint *)0x0)) ||
            ((uVar8 < *(uint *)(lVar14 + 200) &&
             (*(char *)(*(long *)(lVar14 + 0xd0) + (long)(int)uVar8) == '\0')))) ||
           (((*puVar9 <= uVar8 || (puVar9[1] == 0)) || ((ushort)puVar9[2] == 0))))
        goto LAB_0384de14;
        iVar7 = 0xc;
        if (*(char *)((long)puVar9 + 10) != '\0') {
          iVar7 = 0x1c;
        }
        puVar9 = (uint *)((ulong)(puVar9[1] * uVar8 + (uint)(ushort)puVar9[2] * 8 + iVar7) +
                         (long)puVar9);
        uVar1 = *puVar9;
      }
      else if (uVar8 < *(uint *)(lVar14 + 0x1c0)) {
        uVar1 = uVar8;
        if (*(uint *)(lVar14 + 0x1b0) <= uVar8) {
          uVar1 = 0;
        }
        puVar9 = *(uint **)(*(long *)(lVar14 + 0x1b8) + (ulong)uVar1 * 8);
        uVar1 = *puVar9;
      }
      else {
LAB_0384de14:
        puVar9 = (uint *)0x0;
        uVar1 = uRam0000000000000000;
      }
      if (uVar1 != 0) {
        cVar6 = DAT_055f6880;
        do {
          if (cVar6 == '\0') {
            cVar6 = '\x01';
            *PTR_DAT_04bc4378 = 1;
            *(undefined8 *)puVar3 = 0xffffffffffffffff;
            *(undefined8 *)(puVar3 + 8) = 0xffffffffffffffff;
            uVar1 = *puVar9;
          }
          else {
            uVar2 = *(uint *)(puVar3 + 0xc);
            if (-1 < (int)uVar2) {
              puVar5 = (undefined8 *)((ulong)uVar2 + (long)puVar9);
              goto LAB_0384def4;
            }
            if (uVar2 != 0xffffffff) break;
          }
          puVar11 = (uint *)(ulong)uVar1;
          puVar5 = (undefined8 *)0x0;
          if ((puVar11 == (uint *)0x0) || (puVar5 = (undefined8 *)0x0, puVar9 == puVar11))
          goto LAB_0384def4;
          lVar10 = 0xc;
          if (*(char *)((long)puVar9 + (10 - (long)puVar11)) != '\0') {
            lVar10 = 0x1c;
          }
          lVar10 = (long)puVar9 + (lVar10 - (long)puVar11);
          puVar5 = (undefined8 *)0x0;
          if (lVar10 == 0) goto LAB_0384def4;
          uVar13 = (ulong)*(ushort *)((long)puVar9 + (8 - (long)puVar11));
          *(undefined4 *)(puVar3 + 0xc) = 0xfffffffe;
          if (uVar13 == 0) break;
          piVar12 = (int *)(lVar10 + 4);
          while (piVar12[-1] != -0x7a30e9eb) {
            piVar12 = piVar12 + 2;
            uVar13 = uVar13 - 1;
            if (uVar13 == 0) goto LAB_0384def0;
          }
          iVar7 = 0;
          if (*piVar12 != -1) {
            iVar7 = *piVar12;
          }
          *(int *)(puVar3 + 0xc) = iVar7;
          uVar1 = *puVar9;
          if (uVar1 == 0) break;
        } while( true );
      }
LAB_0384def0:
      puVar5 = (undefined8 *)0x0;
LAB_0384def4:
      __src = &DAT_0407ebb1;
      if (puVar5 != (undefined8 *)0x0) {
        __src = puVar5;
      }
      local_c5 = 0;
      local_108 = 0x40;
      local_118 = &PTR_LAB_048fd2d8;
      local_110 = local_104;
      if (local_104 != __src) {
        lVar10 = 0;
        do {
          if (*(char *)((long)__src + lVar10) == '\0') {
LAB_0384df60:
            iVar7 = (int)lVar10;
joined_r0x0384df64:
            if (0x3f < iVar7) {
              iVar7 = 0x3f;
            }
            goto LAB_0384df6c;
          }
          if (*(char *)((long)__src + lVar10 + 1) == '\0') {
            lVar10 = lVar10 + 1;
            goto LAB_0384df60;
          }
          if (*(char *)((long)__src + lVar10 + 2) == '\0') {
            iVar7 = (int)lVar10 + 2;
            goto joined_r0x0384df64;
          }
          lVar10 = lVar10 + 3;
        } while (lVar10 != 0x80001);
        iVar7 = 0;
LAB_0384df6c:
        memcpy(local_104,__src,(long)iVar7);
        *(undefined1 *)((long)local_104 + (long)iVar7) = 0;
      }
      local_118 = &PTR_LAB_048fb9f8;
      *(undefined1 *)((long)local_110 + (long)local_108 + -1) = 0;
      (*(code *)PTR_FUN_048fba10)(&local_118);
      puVar5 = local_110;
      (*(code *)local_c0[3])(&local_c0);
      if (puVar5 == local_b8) {
LAB_0384e048:
        if (param_1 != (uint *)0x0) {
          uVar15 = *puVar9;
          uVar8 = 0;
          if ((uVar15 != 0) && (puVar9 != (uint *)(ulong)uVar15)) {
            puVar11 = (uint *)((long)puVar9 - (long)(ulong)uVar15);
            uVar8 = 0;
            if (*puVar11 != 0) {
              uVar15 = puVar11[1];
              if ((uVar15 != 0) && ((ulong)(ushort)puVar11[2] != 0)) {
                lVar14 = 0xc;
                if (*(char *)((long)puVar11 + 10) != '\0') {
                  lVar14 = 0x1c;
                }
                lVar14 = (long)puVar11 + lVar14 + (ulong)(ushort)puVar11[2] * 8;
                if (lVar14 != 0) {
                  uVar8 = 0;
                  if ((ulong)uVar15 != 0) {
                    uVar8 = (uint)((ulong)((long)puVar9 - lVar14) / (ulong)uVar15);
                  }
                  if (*puVar11 <= uVar8) {
                    uVar8 = 0xffffffff;
                  }
                  if ((uVar8 < DAT_055f6898) &&
                     (uVar8 = (uint)*(ushort *)(DAT_055f68a0 + (long)(int)uVar8 * 2), uVar8 < 9))
                  goto LAB_0384e0dc;
                }
              }
              uVar8 = 0;
            }
          }
LAB_0384e0dc:
          *param_1 = uVar8;
        }
        if (param_2 == (uint *)0x0) {
          return;
        }
        uVar15 = *puVar9;
        uVar8 = 0;
        if ((uVar15 != 0) && (puVar9 != (uint *)(ulong)uVar15)) {
          puVar11 = (uint *)((long)puVar9 - (long)(ulong)uVar15);
          uVar8 = 0;
          if (*puVar11 != 0) {
            uVar15 = puVar11[1];
            if ((uVar15 != 0) && ((ulong)(ushort)puVar11[2] != 0)) {
              lVar14 = 0xc;
              if (*(char *)((long)puVar11 + 10) != '\0') {
                lVar14 = 0x1c;
              }
              lVar14 = (long)puVar11 + lVar14 + (ulong)(ushort)puVar11[2] * 8;
              if (lVar14 != 0) {
                uVar8 = 0;
                if ((ulong)uVar15 != 0) {
                  uVar8 = (uint)((ulong)((long)puVar9 - lVar14) / (ulong)uVar15);
                }
                if (*puVar11 <= uVar8) {
                  uVar8 = 0xffffffff;
                }
                if ((uVar8 < DAT_055f68a8) &&
                   (uVar8 = (uint)*(ushort *)(DAT_055f68b0 + (long)(int)uVar8 * 2), uVar8 < 9))
                goto LAB_0384e170;
              }
            }
            uVar8 = 0;
          }
        }
LAB_0384e170:
        *param_2 = uVar8;
        return;
      }
      uVar13 = 0;
      bVar4 = true;
      do {
        if (*(char *)((long)local_110 + uVar13) != *(char *)((long)local_b8 + uVar13)) break;
        if (*(char *)((long)local_110 + uVar13) == '\0') {
          if (bVar4) goto LAB_0384e048;
          break;
        }
        cVar6 = *(char *)((long)local_110 + uVar13 + 1);
        if (cVar6 != *(char *)((long)local_b8 + uVar13 + 1)) break;
        if (cVar6 == '\0') goto LAB_0384e048;
        cVar6 = *(char *)((long)local_110 + uVar13 + 2);
        if (cVar6 != *(char *)((long)local_b8 + uVar13 + 2)) break;
        if (cVar6 == '\0') goto LAB_0384e048;
        bVar4 = uVar13 < 0x7fffe;
        uVar13 = uVar13 + 3;
      } while (uVar13 != 0x80001);
      uVar8 = uVar8 + 1;
    } while (uVar8 != uVar15);
  }
  return;
}

