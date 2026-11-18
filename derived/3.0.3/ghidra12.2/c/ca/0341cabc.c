
/* WARNING: Removing unreachable block (ram,0x0341cf48) */
/* WARNING: Removing unreachable block (ram,0x0341cf64) */

bool FUN_0341cabc(undefined8 param_1,undefined4 *param_2)

{
  uint uVar1;
  undefined *puVar2;
  uint uVar3;
  ulong uVar4;
  ushort uVar5;
  uint *puVar6;
  uint *puVar7;
  bool bVar8;
  long lVar9;
  undefined *local_48;
  undefined4 local_40;
  undefined4 uStack_3c;
  uint *local_38;
  
  puVar2 = PTR_DAT_04bb43c0;
  local_38 = (uint *)0x0;
  local_48 = PTR_DAT_04bc0510 + 0x10;
  local_40 = *param_2;
  uStack_3c = param_2[1];
  lVar9 = *(long *)PTR_DAT_04bb43c0;
  uVar3 = FUN_0277d6c4(&local_40);
  if (*(long *)puVar2 == 0) {
LAB_0341cee8:
    puVar7 = (uint *)0x0;
    uVar5 = 0xbc;
    bVar8 = true;
  }
  else {
    lVar9 = *(long *)(lVar9 + 0x57e58);
    uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar9 + 0x1f8);
    if ((*(uint *)(lVar9 + 0x1d8) <= uVar3) ||
       (*(long *)(*(long *)(lVar9 + 0x1e0) + (long)(int)uVar3 * 8) == 0)) goto LAB_0341cee8;
    lVar9 = *(long *)PTR_DAT_04bc0428;
    uVar3 = FUN_0277d6c4(param_2);
    uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar9 + 0x1f8);
    if ((*(uint *)(lVar9 + 0x1d8) <= uVar3) ||
       (puVar7 = *(uint **)(*(long *)(lVar9 + 0x1e0) + (long)(int)uVar3 * 8), puVar7 == (uint *)0x0)
       ) goto LAB_0341cee8;
    uVar3 = *puVar7;
    if (uVar3 == 0 || puVar7 == (uint *)(ulong)uVar3) {
LAB_0341cb94:
      uVar5 = 0;
    }
    else {
      puVar6 = (uint *)((long)puVar7 - (long)(ulong)uVar3);
      uVar5 = 0;
      if (*puVar6 != 0) {
        uVar3 = puVar6[1];
        if ((uVar3 != 0) && ((ulong)(ushort)puVar6[2] != 0)) {
          lVar9 = 0xc;
          if (*(char *)((long)puVar6 + 10) != '\0') {
            lVar9 = 0x1c;
          }
          lVar9 = (long)puVar6 + lVar9 + (ulong)(ushort)puVar6[2] * 8;
          if (lVar9 != 0) {
            uVar1 = 0;
            if ((ulong)uVar3 != 0) {
              uVar1 = (uint)((ulong)((long)puVar7 - lVar9) / (ulong)uVar3);
            }
            if (*puVar6 <= uVar1) {
              uVar1 = 0xffffffff;
            }
            if ((uVar1 < DAT_05326f18) &&
               (uVar5 = *(ushort *)(DAT_05326f20 + (long)(int)uVar1 * 2), uVar5 < 0xf))
            goto LAB_0341cb98;
          }
        }
        goto LAB_0341cb94;
      }
    }
LAB_0341cb98:
    if (uVar5 == 10) {
      return true;
    }
    uVar5 = 0;
    uVar3 = *puVar7;
    if ((uVar3 != 0) && (puVar7 != (uint *)(ulong)uVar3)) {
      puVar6 = (uint *)((long)puVar7 - (long)(ulong)uVar3);
      uVar5 = 0;
      if (*puVar6 != 0) {
        uVar3 = puVar6[1];
        if ((uVar3 != 0) && ((ulong)(ushort)puVar6[2] != 0)) {
          lVar9 = 0xc;
          if (*(char *)((long)puVar6 + 10) != '\0') {
            lVar9 = 0x1c;
          }
          lVar9 = (long)puVar6 + lVar9 + (ulong)(ushort)puVar6[2] * 8;
          if (lVar9 != 0) {
            uVar1 = 0;
            if ((ulong)uVar3 != 0) {
              uVar1 = (uint)((ulong)((long)puVar7 - lVar9) / (ulong)uVar3);
            }
            if (*puVar6 <= uVar1) {
              uVar1 = 0xffffffff;
            }
            if ((uVar1 < DAT_05326f18) &&
               (uVar5 = *(ushort *)(DAT_05326f20 + (long)(int)uVar1 * 2), uVar5 < 0xf))
            goto LAB_0341cc40;
          }
        }
        uVar5 = 0;
      }
    }
LAB_0341cc40:
    if (uVar5 == 9) {
      return true;
    }
    uVar5 = 0;
    uVar3 = *puVar7;
    if ((uVar3 != 0) && (puVar7 != (uint *)(ulong)uVar3)) {
      puVar6 = (uint *)((long)puVar7 - (long)(ulong)uVar3);
      uVar5 = 0;
      if (*puVar6 != 0) {
        uVar3 = puVar6[1];
        if ((uVar3 != 0) && ((ulong)(ushort)puVar6[2] != 0)) {
          lVar9 = 0xc;
          if (*(char *)((long)puVar6 + 10) != '\0') {
            lVar9 = 0x1c;
          }
          lVar9 = (long)puVar6 + lVar9 + (ulong)(ushort)puVar6[2] * 8;
          if (lVar9 != 0) {
            uVar1 = 0;
            if ((ulong)uVar3 != 0) {
              uVar1 = (uint)((ulong)((long)puVar7 - lVar9) / (ulong)uVar3);
            }
            if (*puVar6 <= uVar1) {
              uVar1 = 0xffffffff;
            }
            if ((uVar1 < DAT_05326f18) &&
               (uVar5 = *(ushort *)(DAT_05326f20 + (long)(int)uVar1 * 2), uVar5 < 0xf))
            goto LAB_0341cce8;
          }
        }
        uVar5 = 0;
      }
    }
LAB_0341cce8:
    if (uVar5 == 4) {
      return true;
    }
    uVar5 = 0;
    uVar3 = *puVar7;
    if ((uVar3 != 0) && (puVar7 != (uint *)(ulong)uVar3)) {
      puVar6 = (uint *)((long)puVar7 - (long)(ulong)uVar3);
      uVar5 = 0;
      if (*puVar6 != 0) {
        uVar3 = puVar6[1];
        if ((uVar3 != 0) && ((ulong)(ushort)puVar6[2] != 0)) {
          lVar9 = 0xc;
          if (*(char *)((long)puVar6 + 10) != '\0') {
            lVar9 = 0x1c;
          }
          lVar9 = (long)puVar6 + lVar9 + (ulong)(ushort)puVar6[2] * 8;
          if (lVar9 != 0) {
            uVar1 = 0;
            if ((ulong)uVar3 != 0) {
              uVar1 = (uint)((ulong)((long)puVar7 - lVar9) / (ulong)uVar3);
            }
            if (*puVar6 <= uVar1) {
              uVar1 = 0xffffffff;
            }
            if ((uVar1 < DAT_05326f18) &&
               (uVar5 = *(ushort *)(DAT_05326f20 + (long)(int)uVar1 * 2), uVar5 < 0xf))
            goto LAB_0341cd90;
          }
        }
        uVar5 = 0;
      }
    }
LAB_0341cd90:
    if (uVar5 == 7) {
      uVar5 = 0;
      uVar3 = *puVar7;
      if ((uVar3 != 0) && (puVar7 != (uint *)(ulong)uVar3)) {
        puVar6 = (uint *)((long)puVar7 - (long)(ulong)uVar3);
        uVar5 = 0;
        if (*puVar6 != 0) {
          uVar3 = puVar6[1];
          if ((uVar3 != 0) && ((ulong)(ushort)puVar6[2] != 0)) {
            lVar9 = 0xc;
            if (*(char *)((long)puVar6 + 10) != '\0') {
              lVar9 = 0x1c;
            }
            lVar9 = (long)puVar6 + lVar9 + (ulong)(ushort)puVar6[2] * 8;
            if (lVar9 != 0) {
              uVar1 = 0;
              if ((ulong)uVar3 != 0) {
                uVar1 = (uint)((ulong)((long)puVar7 - lVar9) / (ulong)uVar3);
              }
              if (*puVar6 <= uVar1) {
                uVar1 = 0xffffffff;
              }
              if ((uVar1 < DAT_05326ec0) &&
                 (uVar5 = *(ushort *)(DAT_05326ec8 + (long)(int)uVar1 * 2), uVar5 < 0xbd))
              goto LAB_0341ce38;
            }
          }
          uVar5 = 0;
        }
      }
LAB_0341ce38:
      if (uVar5 == 0x70) {
        return true;
      }
      uVar5 = 0;
      uVar3 = *puVar7;
      if ((uVar3 != 0) && (puVar7 != (uint *)(ulong)uVar3)) {
        puVar6 = (uint *)((long)puVar7 - (long)(ulong)uVar3);
        uVar5 = 0;
        if (*puVar6 != 0) {
          uVar3 = puVar6[1];
          if ((uVar3 != 0) && ((ulong)(ushort)puVar6[2] != 0)) {
            lVar9 = 0xc;
            if (*(char *)((long)puVar6 + 10) != '\0') {
              lVar9 = 0x1c;
            }
            lVar9 = (long)puVar6 + lVar9 + (ulong)(ushort)puVar6[2] * 8;
            if (lVar9 != 0) {
              uVar1 = 0;
              if ((ulong)uVar3 != 0) {
                uVar1 = (uint)((ulong)((long)puVar7 - lVar9) / (ulong)uVar3);
              }
              if (*puVar6 <= uVar1) {
                uVar1 = 0xffffffff;
              }
              if (uVar1 < DAT_05326ec0) {
                uVar5 = *(ushort *)(DAT_05326ec8 + (long)(int)uVar1 * 2);
                if (0xbc < uVar5) {
                  uVar5 = 0;
                }
                goto LAB_0341cf78;
              }
            }
          }
          uVar5 = 0;
        }
      }
LAB_0341cf78:
      if (uVar5 == 0x72) {
        return true;
      }
    }
    uVar3 = *puVar7;
    uVar5 = 0;
    local_38 = puVar7;
    if ((uVar3 == 0) || (puVar7 == (uint *)(ulong)uVar3)) {
LAB_0341d1a4:
      bVar8 = false;
    }
    else {
      puVar6 = (uint *)((long)puVar7 - (long)(ulong)uVar3);
      uVar5 = 0;
      if (*puVar6 == 0) goto LAB_0341d1a4;
      uVar3 = puVar6[1];
      if ((uVar3 == 0) || ((ulong)(ushort)puVar6[2] == 0)) {
LAB_0341d1a0:
        uVar5 = 0;
        goto LAB_0341d1a4;
      }
      lVar9 = 0xc;
      if (*(char *)((long)puVar6 + 10) != '\0') {
        lVar9 = 0x1c;
      }
      lVar9 = (long)puVar6 + lVar9 + (ulong)(ushort)puVar6[2] * 8;
      if (lVar9 == 0) goto LAB_0341d1a0;
      uVar1 = 0;
      if ((ulong)uVar3 != 0) {
        uVar1 = (uint)((ulong)((long)puVar7 - lVar9) / (ulong)uVar3);
      }
      if (*puVar6 <= uVar1) {
        uVar1 = 0xffffffff;
      }
      if (DAT_05326ec0 <= uVar1) goto LAB_0341d1a0;
      uVar5 = *(ushort *)(DAT_05326ec8 + (long)(int)uVar1 * 2);
      if (uVar5 < 0xbd) goto LAB_0341d1a4;
      bVar8 = false;
      uVar5 = 0;
    }
  }
  if ((uVar5 == 0x49) || (uVar4 = FUN_01af81d0(&local_48), (uVar4 & 1) != 0)) {
    return true;
  }
  if (bVar8) {
    uVar5 = 0xbc;
  }
  else {
    uVar3 = *puVar7;
    uVar5 = 0;
    if ((uVar3 != 0) && (puVar7 != (uint *)(ulong)uVar3)) {
      puVar6 = (uint *)((long)puVar7 - (long)(ulong)uVar3);
      uVar5 = 0;
      if (*puVar6 != 0) {
        uVar3 = puVar6[1];
        if ((uVar3 != 0) && ((ulong)(ushort)puVar6[2] != 0)) {
          lVar9 = 0xc;
          if (*(char *)((long)puVar6 + 10) != '\0') {
            lVar9 = 0x1c;
          }
          lVar9 = (long)puVar6 + lVar9 + (ulong)(ushort)puVar6[2] * 8;
          if (lVar9 != 0) {
            uVar1 = 0;
            if ((ulong)uVar3 != 0) {
              uVar1 = (uint)((ulong)((long)puVar7 - lVar9) / (ulong)uVar3);
            }
            if (*puVar6 <= uVar1) {
              uVar1 = 0xffffffff;
            }
            if ((uVar1 < DAT_05326ec0) &&
               (uVar5 = *(ushort *)(DAT_05326ec8 + (long)(int)uVar1 * 2), uVar5 < 0xbd))
            goto LAB_0341d0f8;
          }
        }
        uVar5 = 0;
      }
    }
  }
LAB_0341d0f8:
  return uVar5 == 0x78;
}

