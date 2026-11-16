
undefined8 FUN_02891630(long param_1,undefined4 *param_2)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  ushort uVar3;
  undefined *puVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  ulong uVar8;
  uint *puVar9;
  uint *puVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined2 *puVar14;
  undefined4 *puVar15;
  uint local_9c;
  undefined2 local_90;
  undefined2 local_8e;
  undefined4 local_8c;
  undefined8 local_88;
  uint local_7c;
  undefined **local_78;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  
  uVar8 = FUN_0288f130();
  puVar4 = PTR_DAT_04bb43c0;
  if ((uVar8 & 1) == 0) {
    return 0;
  }
  lVar12 = *(long *)PTR_DAT_04bb43c0;
  uVar5 = FUN_0277d6c4(param_2);
  lVar13 = *(long *)puVar4;
  if (lVar13 == 0) {
    return 0;
  }
  lVar12 = *(long *)(lVar12 + 0x57e58);
  uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar12 + 0x1f8);
  if (*(uint *)(lVar12 + 0x1d8) <= uVar5) {
    return 0;
  }
  if (*(long *)(*(long *)(lVar12 + 0x1e0) + (long)(int)uVar5 * 8) == 0) {
    return 0;
  }
  local_68 = 0;
  local_70 = *param_2;
  uStack_6c = param_2[1];
  local_78 = &PTR_FUN_04a36b50;
  uVar5 = FUN_0277d6c4(&local_70);
  if (*(long *)puVar4 != 0) {
    lVar12 = *(long *)(lVar13 + 0x57e58);
    uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar12 + 0x1f8);
    if ((uVar5 < *(uint *)(lVar12 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar12 + 0x1e0) + (long)(int)uVar5 * 8) != 0)) {
      lVar12 = *(long *)PTR_DAT_04bc0428;
      uVar5 = FUN_0277d6c4(param_2);
      uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar12 + 0x1f8);
      if ((uVar5 < *(uint *)(lVar12 + 0x1d8)) &&
         (puVar9 = *(uint **)(*(long *)(lVar12 + 0x1e0) + (long)(int)uVar5 * 8),
         puVar9 != (uint *)0x0)) {
        uVar5 = *puVar9;
        if ((uVar5 != 0) && (puVar9 != (uint *)(ulong)uVar5)) {
          puVar10 = (uint *)((long)puVar9 - (long)(ulong)uVar5);
          if ((*puVar10 != 0) &&
             ((uVar5 = puVar10[1], uVar5 != 0 && ((ulong)(ushort)puVar10[2] != 0)))) {
            lVar12 = 0xc;
            if (*(char *)((long)puVar10 + 10) != '\0') {
              lVar12 = 0x1c;
            }
            lVar12 = (long)puVar10 + lVar12 + (ulong)(ushort)puVar10[2] * 8;
            if (lVar12 != 0) {
              uVar6 = 0;
              if ((ulong)uVar5 != 0) {
                uVar6 = (uint)((ulong)((long)puVar9 - lVar12) / (ulong)uVar5);
              }
              if (*puVar10 <= uVar6) {
                uVar6 = 0xffffffff;
              }
              if (uVar6 < DAT_05326ec0) {
                uVar3 = *(ushort *)(DAT_05326ec8 + (long)(int)uVar6 * 2);
                if (uVar3 < 0xbd) {
                  local_7c = (uint)uVar3;
                  if (local_7c == 0xf) {
                    local_7c = 0x14;
                  }
                  else if (local_7c == 0x11) {
                    local_7c = 0x10;
                  }
                }
                else {
                  local_7c = 0;
                }
                goto LAB_02891818;
              }
            }
          }
        }
        local_7c = 0;
        goto LAB_02891818;
      }
    }
  }
  local_7c = 0xbc;
LAB_02891818:
  param_1 = param_1 + 4;
  lVar12 = *(long *)puVar4;
  uVar5 = 0;
  do {
    puVar1 = (undefined2 *)(param_1 + ((long)((ulong)uVar5 << 0x20) >> 0x1d));
    uVar6 = FUN_0277d6c4(puVar1);
    lVar13 = *(long *)puVar4;
    if (lVar13 != 0) {
      lVar12 = *(long *)(lVar12 + 0x57e58);
      uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar12 + 0x1f8);
      if ((uVar6 < *(uint *)(lVar12 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar12 + 0x1e0) + (long)(int)uVar6 * 8) != 0)) {
        lVar12 = param_1 + (long)(int)uVar5 * 8;
        local_88 = 0;
        local_90 = *puVar1;
        puVar14 = (undefined2 *)(lVar12 + 2);
        local_8e = *puVar14;
        puVar15 = (undefined4 *)(lVar12 + 4);
        local_8c = *puVar15;
        uVar6 = FUN_0277d6c4(&local_90);
        lVar11 = *(long *)puVar4;
        if (lVar11 == 0) {
LAB_028919f4:
          local_9c = 0xbc;
        }
        else {
          lVar13 = *(long *)(lVar13 + 0x57e58);
          uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar13 + 0x1f8);
          if ((*(uint *)(lVar13 + 0x1d8) <= uVar6) ||
             (*(long *)(*(long *)(lVar13 + 0x1e0) + (long)(int)uVar6 * 8) == 0)) goto LAB_028919f4;
          lVar13 = *(long *)PTR_DAT_04bc0428;
          uVar6 = FUN_0277d6c4(puVar1);
          uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar13 + 0x1f8);
          lVar11 = *(long *)puVar4;
          if ((*(uint *)(lVar13 + 0x1d8) <= uVar6) ||
             (puVar9 = *(uint **)(*(long *)(lVar13 + 0x1e0) + (long)(int)uVar6 * 8),
             puVar9 == (uint *)0x0)) goto LAB_028919f4;
          uVar6 = *puVar9;
          if ((uVar6 == 0) || (puVar9 == (uint *)(ulong)uVar6)) {
LAB_02891a88:
            local_9c = 0;
          }
          else {
            puVar10 = (uint *)((long)puVar9 - (long)(ulong)uVar6);
            if ((*puVar10 == 0) ||
               ((uVar6 = puVar10[1], uVar6 == 0 || ((ulong)(ushort)puVar10[2] == 0))))
            goto LAB_02891a88;
            lVar13 = 0xc;
            if (*(char *)((long)puVar10 + 10) != '\0') {
              lVar13 = 0x1c;
            }
            lVar13 = (long)puVar10 + lVar13 + (ulong)(ushort)puVar10[2] * 8;
            if (lVar13 == 0) goto LAB_02891a88;
            uVar7 = 0;
            if ((ulong)uVar6 != 0) {
              uVar7 = (uint)((ulong)((long)puVar9 - lVar13) / (ulong)uVar6);
            }
            if (*puVar10 <= uVar7) {
              uVar7 = 0xffffffff;
            }
            if (DAT_05326ec0 <= uVar7) goto LAB_02891a88;
            uVar3 = *(ushort *)(*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar7 * 2);
            if (uVar3 < 0xbd) {
              local_9c = (uint)uVar3;
              if (local_9c == 0xf) {
                local_9c = 0x14;
              }
              else if (local_9c == 0x11) {
                local_9c = 0x10;
              }
            }
            else {
              local_9c = 0;
            }
          }
        }
        if (local_7c == local_9c) {
          uVar6 = 0;
          do {
            puVar2 = (undefined2 *)(param_1 + ((long)((ulong)uVar6 << 0x20) >> 0x1d));
            uVar7 = FUN_0277d6c4(puVar2);
            lVar13 = *(long *)puVar4;
            if (lVar13 != 0) {
              lVar11 = *(long *)(lVar11 + 0x57e58);
              uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar11 + 0x1f8);
              if ((uVar7 < *(uint *)(lVar11 + 0x1d8)) &&
                 (*(long *)(*(long *)(lVar11 + 0x1e0) + (long)(int)uVar7 * 8) != 0)) {
                uVar8 = FUN_0277d7b4(puVar2,param_2);
                if ((uVar8 & 1) != 0) {
                  param_1 = param_1 + (long)(int)uVar6 * 8;
                  *puVar2 = *puVar1;
                  *(undefined1 *)(param_1 + 2) = *(undefined1 *)puVar14;
                  *(undefined1 *)(param_1 + 3) = *(undefined1 *)(lVar12 + 3);
                  *(undefined4 *)(param_1 + 4) = *puVar15;
                  *puVar1 = *(undefined2 *)param_2;
                  *(undefined1 *)puVar14 = *(undefined1 *)((long)param_2 + 2);
                  *(undefined1 *)(lVar12 + 3) = *(undefined1 *)((long)param_2 + 3);
                  *puVar15 = param_2[1];
                  return 1;
                }
                lVar13 = *(long *)puVar4;
              }
            }
            lVar11 = lVar13;
            uVar6 = uVar6 + 1;
            lVar13 = lVar11;
          } while (uVar6 != 0x80);
        }
        else {
          lVar13 = lVar11;
        }
      }
    }
    lVar12 = lVar13;
    uVar5 = uVar5 + 1;
    if (uVar5 == 0x80) {
      return 1;
    }
  } while( true );
}

