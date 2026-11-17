
/* WARNING: Removing unreachable block (ram,0x02c81718) */

bool FUN_02c81468(long param_1,undefined4 *param_2)

{
  uint uVar1;
  bool bVar2;
  undefined *puVar3;
  uint uVar4;
  ulong uVar5;
  uint *puVar6;
  ushort uVar7;
  long lVar8;
  uint *puVar9;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined8 local_40;
  undefined4 local_38;
  undefined4 local_34;
  
  puVar3 = PTR_DAT_04bb43c0;
  local_40 = 0;
  local_48 = *param_2;
  uStack_44 = param_2[1];
  lVar8 = *(long *)PTR_DAT_04bb43c0;
  uVar4 = FUN_0277d6c4(&local_48);
  if (*(long *)puVar3 == 0) {
LAB_02c816b8:
    uVar7 = 0;
    puVar9 = (uint *)0x0;
    bVar2 = true;
  }
  else {
    lVar8 = *(long *)(lVar8 + 0x57e58);
    uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar8 + 0x1f8);
    if ((*(uint *)(lVar8 + 0x1d8) <= uVar4) ||
       (*(long *)(*(long *)(lVar8 + 0x1e0) + (long)(int)uVar4 * 8) == 0)) goto LAB_02c816b8;
    lVar8 = *(long *)PTR_DAT_04bc0428;
    uVar4 = FUN_0277d6c4(param_2);
    uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar8 + 0x1f8);
    if ((*(uint *)(lVar8 + 0x1d8) <= uVar4) ||
       (puVar9 = *(uint **)(*(long *)(lVar8 + 0x1e0) + (long)(int)uVar4 * 8), puVar9 == (uint *)0x0)
       ) goto LAB_02c816b8;
    uVar4 = *puVar9;
    if (uVar4 == 0 || puVar9 == (uint *)(ulong)uVar4) {
LAB_02c81540:
      uVar7 = 0;
    }
    else {
      puVar6 = (uint *)((long)puVar9 - (long)(ulong)uVar4);
      uVar7 = 0;
      if (*puVar6 != 0) {
        uVar4 = puVar6[1];
        if ((uVar4 != 0) && ((ulong)(ushort)puVar6[2] != 0)) {
          lVar8 = 0xc;
          if (*(char *)((long)puVar6 + 10) != '\0') {
            lVar8 = 0x1c;
          }
          lVar8 = (long)puVar6 + lVar8 + (ulong)(ushort)puVar6[2] * 8;
          if (lVar8 != 0) {
            uVar1 = 0;
            if ((ulong)uVar4 != 0) {
              uVar1 = (uint)((ulong)((long)puVar9 - lVar8) / (ulong)uVar4);
            }
            if (*puVar6 <= uVar1) {
              uVar1 = 0xffffffff;
            }
            if ((uVar1 < DAT_05326ec0) &&
               (uVar7 = *(ushort *)(DAT_05326ec8 + (long)(int)uVar1 * 2), uVar7 < 0xbd))
            goto LAB_02c81544;
          }
        }
        goto LAB_02c81540;
      }
    }
LAB_02c81544:
    if (uVar7 == 0x75) {
      return true;
    }
    uVar7 = 0;
    uVar4 = *puVar9;
    if ((uVar4 != 0) && (puVar9 != (uint *)(ulong)uVar4)) {
      puVar6 = (uint *)((long)puVar9 - (long)(ulong)uVar4);
      uVar7 = 0;
      if (*puVar6 != 0) {
        uVar4 = puVar6[1];
        if ((uVar4 != 0) && ((ulong)(ushort)puVar6[2] != 0)) {
          lVar8 = 0xc;
          if (*(char *)((long)puVar6 + 10) != '\0') {
            lVar8 = 0x1c;
          }
          lVar8 = (long)puVar6 + lVar8 + (ulong)(ushort)puVar6[2] * 8;
          if (lVar8 != 0) {
            uVar1 = 0;
            if ((ulong)uVar4 != 0) {
              uVar1 = (uint)((ulong)((long)puVar9 - lVar8) / (ulong)uVar4);
            }
            if (*puVar6 <= uVar1) {
              uVar1 = 0xffffffff;
            }
            if ((uVar1 < DAT_05327180) &&
               (uVar7 = *(ushort *)(DAT_05327188 + (long)(int)uVar1 * 2), uVar7 < 3))
            goto LAB_02c815ec;
          }
        }
        uVar7 = 0;
      }
    }
LAB_02c815ec:
    if (uVar7 != 2) {
      uVar7 = 0;
      uVar4 = *puVar9;
      if ((uVar4 != 0) && (puVar9 != (uint *)(ulong)uVar4)) {
        puVar6 = (uint *)((long)puVar9 - (long)(ulong)uVar4);
        uVar7 = 0;
        if (*puVar6 != 0) {
          uVar4 = puVar6[1];
          if ((uVar4 != 0) && ((ulong)(ushort)puVar6[2] != 0)) {
            lVar8 = 0xc;
            if (*(char *)((long)puVar6 + 10) != '\0') {
              lVar8 = 0x1c;
            }
            lVar8 = (long)puVar6 + lVar8 + (ulong)(ushort)puVar6[2] * 8;
            if (lVar8 != 0) {
              uVar1 = 0;
              if ((ulong)uVar4 != 0) {
                uVar1 = (uint)((ulong)((long)puVar9 - lVar8) / (ulong)uVar4);
              }
              if (*puVar6 <= uVar1) {
                uVar1 = 0xffffffff;
              }
              if ((uVar1 < DAT_05326f18) &&
                 (uVar7 = *(ushort *)(DAT_05326f20 + (long)(int)uVar1 * 2), uVar7 < 0xf))
              goto LAB_02c81724;
            }
          }
          uVar7 = 0;
        }
      }
LAB_02c81724:
      return uVar7 == 0xb && *(char *)(param_1 + 0x18) == '\0';
    }
    uVar4 = *puVar9;
    bVar2 = false;
    uVar7 = 0;
    if ((uVar4 != 0) && (puVar9 != (uint *)(ulong)uVar4)) {
      puVar6 = (uint *)((long)puVar9 - (long)(ulong)uVar4);
      if ((*puVar6 != 0) && ((uVar4 = puVar6[1], uVar4 != 0 && ((ulong)(ushort)puVar6[2] != 0)))) {
        lVar8 = 0xc;
        if (*(char *)((long)puVar6 + 10) != '\0') {
          lVar8 = 0x1c;
        }
        lVar8 = (long)puVar6 + lVar8 + (ulong)(ushort)puVar6[2] * 8;
        if (lVar8 != 0) {
          uVar1 = 0;
          if ((ulong)uVar4 != 0) {
            uVar1 = (uint)((ulong)((long)puVar9 - lVar8) / (ulong)uVar4);
          }
          if (*puVar6 <= uVar1) {
            uVar1 = 0xffffffff;
          }
          if ((uVar1 < DAT_05327190) &&
             (uVar7 = *(ushort *)(DAT_05327198 + (long)(int)uVar1 * 2), uVar7 < 0x13e)) {
            bVar2 = false;
            if (uVar7 == 0x117) {
              return false;
            }
            goto LAB_02c816f4;
          }
        }
      }
      uVar7 = 0;
      bVar2 = false;
    }
  }
LAB_02c816f4:
  local_38 = 2;
  local_34 = 2;
  uVar5 = FUN_01b16330(uVar7);
  if (((uVar5 & 1) != 0) && (uVar5 = FUN_02c6059c(param_1 + 8,uVar7), (uVar5 & 1) != 0)) {
    return false;
  }
  uVar5 = FUN_01b16720(uVar7);
  if ((uVar5 & 1) == 0) {
    return true;
  }
  if (bVar2) {
    uVar7 = 0xbc;
  }
  else {
    uVar4 = *puVar9;
    uVar7 = 0;
    if ((uVar4 != 0) && (puVar9 != (uint *)(ulong)uVar4)) {
      puVar6 = (uint *)((long)puVar9 - (long)(ulong)uVar4);
      uVar7 = 0;
      if (*puVar6 != 0) {
        uVar4 = puVar6[1];
        if ((uVar4 != 0) && ((ulong)(ushort)puVar6[2] != 0)) {
          lVar8 = 0xc;
          if (*(char *)((long)puVar6 + 10) != '\0') {
            lVar8 = 0x1c;
          }
          lVar8 = (long)puVar6 + lVar8 + (ulong)(ushort)puVar6[2] * 8;
          if (lVar8 != 0) {
            uVar1 = 0;
            if ((ulong)uVar4 != 0) {
              uVar1 = (uint)((ulong)((long)puVar9 - lVar8) / (ulong)uVar4);
            }
            if (*puVar6 <= uVar1) {
              uVar1 = 0xffffffff;
            }
            if ((uVar1 < DAT_05326ec0) &&
               (uVar7 = *(ushort *)(DAT_05326ec8 + (long)(int)uVar1 * 2), uVar7 < 0xbd))
            goto LAB_02c817ec;
          }
        }
        uVar7 = 0;
      }
    }
  }
LAB_02c817ec:
  return uVar7 == 0x81;
}

