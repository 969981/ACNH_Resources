
uint FUN_0341bb08(undefined8 param_1,undefined4 *param_2)

{
  uint uVar1;
  undefined *puVar2;
  uint uVar3;
  uint *puVar4;
  ushort uVar5;
  uint *puVar6;
  long lVar7;
  undefined *local_48;
  undefined4 local_40;
  undefined4 uStack_3c;
  uint *local_38;
  
  puVar2 = PTR_DAT_04bb43c0;
  local_38 = (uint *)0x0;
  local_48 = PTR_DAT_04bc0510 + 0x10;
  local_40 = *param_2;
  uStack_3c = param_2[1];
  lVar7 = *(long *)PTR_DAT_04bb43c0;
  uVar3 = FUN_0277d6c4(&local_40);
  if (*(long *)puVar2 == 0) {
LAB_0341bf30:
    uVar5 = 0;
  }
  else {
    lVar7 = *(long *)(lVar7 + 0x57e58);
    uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar7 + 0x1f8);
    if ((*(uint *)(lVar7 + 0x1d8) <= uVar3) ||
       (*(long *)(*(long *)(lVar7 + 0x1e0) + (long)(int)uVar3 * 8) == 0)) goto LAB_0341bf30;
    lVar7 = *(long *)PTR_DAT_04bc0428;
    uVar3 = FUN_0277d6c4(param_2);
    uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar7 + 0x1f8);
    if ((*(uint *)(lVar7 + 0x1d8) <= uVar3) ||
       (puVar4 = *(uint **)(*(long *)(lVar7 + 0x1e0) + (long)(int)uVar3 * 8), puVar4 == (uint *)0x0)
       ) goto LAB_0341bf30;
    uVar3 = *puVar4;
    if (uVar3 == 0 || puVar4 == (uint *)(ulong)uVar3) {
LAB_0341bbe0:
      uVar5 = 0;
    }
    else {
      puVar6 = (uint *)((long)puVar4 - (long)(ulong)uVar3);
      uVar5 = 0;
      if (*puVar6 != 0) {
        uVar3 = puVar6[1];
        if ((uVar3 != 0) && ((ulong)(ushort)puVar6[2] != 0)) {
          lVar7 = 0xc;
          if (*(char *)((long)puVar6 + 10) != '\0') {
            lVar7 = 0x1c;
          }
          lVar7 = (long)puVar6 + lVar7 + (ulong)(ushort)puVar6[2] * 8;
          if (lVar7 != 0) {
            uVar1 = 0;
            if ((ulong)uVar3 != 0) {
              uVar1 = (uint)((ulong)((long)puVar4 - lVar7) / (ulong)uVar3);
            }
            if (*puVar6 <= uVar1) {
              uVar1 = 0xffffffff;
            }
            if ((uVar1 < DAT_05326f18) &&
               (uVar5 = *(ushort *)(DAT_05326f20 + (long)(int)uVar1 * 2), uVar5 < 0xf))
            goto LAB_0341bbe4;
          }
        }
        goto LAB_0341bbe0;
      }
    }
LAB_0341bbe4:
    if (uVar5 == 1) {
LAB_0341bfa8:
      uVar3 = 1;
      goto LAB_0341bfac;
    }
    uVar5 = 0;
    uVar3 = *puVar4;
    if ((uVar3 != 0) && (puVar4 != (uint *)(ulong)uVar3)) {
      puVar6 = (uint *)((long)puVar4 - (long)(ulong)uVar3);
      uVar5 = 0;
      if (*puVar6 != 0) {
        uVar3 = puVar6[1];
        if ((uVar3 != 0) && ((ulong)(ushort)puVar6[2] != 0)) {
          lVar7 = 0xc;
          if (*(char *)((long)puVar6 + 10) != '\0') {
            lVar7 = 0x1c;
          }
          lVar7 = (long)puVar6 + lVar7 + (ulong)(ushort)puVar6[2] * 8;
          if (lVar7 != 0) {
            uVar1 = 0;
            if ((ulong)uVar3 != 0) {
              uVar1 = (uint)((ulong)((long)puVar4 - lVar7) / (ulong)uVar3);
            }
            if (*puVar6 <= uVar1) {
              uVar1 = 0xffffffff;
            }
            if ((uVar1 < DAT_05326f18) &&
               (uVar5 = *(ushort *)(DAT_05326f20 + (long)(int)uVar1 * 2), uVar5 < 0xf))
            goto LAB_0341bc8c;
          }
        }
        uVar5 = 0;
      }
    }
LAB_0341bc8c:
    if (uVar5 == 2) goto LAB_0341bfa8;
    uVar5 = 0;
    uVar3 = *puVar4;
    if ((uVar3 != 0) && (puVar4 != (uint *)(ulong)uVar3)) {
      puVar6 = (uint *)((long)puVar4 - (long)(ulong)uVar3);
      uVar5 = 0;
      if (*puVar6 != 0) {
        uVar3 = puVar6[1];
        if ((uVar3 != 0) && ((ulong)(ushort)puVar6[2] != 0)) {
          lVar7 = 0xc;
          if (*(char *)((long)puVar6 + 10) != '\0') {
            lVar7 = 0x1c;
          }
          lVar7 = (long)puVar6 + lVar7 + (ulong)(ushort)puVar6[2] * 8;
          if (lVar7 != 0) {
            uVar1 = 0;
            if ((ulong)uVar3 != 0) {
              uVar1 = (uint)((ulong)((long)puVar4 - lVar7) / (ulong)uVar3);
            }
            if (*puVar6 <= uVar1) {
              uVar1 = 0xffffffff;
            }
            if ((uVar1 < DAT_05326f18) &&
               (uVar5 = *(ushort *)(DAT_05326f20 + (long)(int)uVar1 * 2), uVar5 < 0xf))
            goto LAB_0341bd34;
          }
        }
        uVar5 = 0;
      }
    }
LAB_0341bd34:
    if (uVar5 == 6) goto LAB_0341bfa8;
    uVar5 = 0;
    uVar3 = *puVar4;
    if ((uVar3 != 0) && (puVar4 != (uint *)(ulong)uVar3)) {
      puVar6 = (uint *)((long)puVar4 - (long)(ulong)uVar3);
      uVar5 = 0;
      if (*puVar6 != 0) {
        uVar3 = puVar6[1];
        if ((uVar3 != 0) && ((ulong)(ushort)puVar6[2] != 0)) {
          lVar7 = 0xc;
          if (*(char *)((long)puVar6 + 10) != '\0') {
            lVar7 = 0x1c;
          }
          lVar7 = (long)puVar6 + lVar7 + (ulong)(ushort)puVar6[2] * 8;
          if (lVar7 != 0) {
            uVar1 = 0;
            if ((ulong)uVar3 != 0) {
              uVar1 = (uint)((ulong)((long)puVar4 - lVar7) / (ulong)uVar3);
            }
            if (*puVar6 <= uVar1) {
              uVar1 = 0xffffffff;
            }
            if ((uVar1 < DAT_05326f18) &&
               (uVar5 = *(ushort *)(DAT_05326f20 + (long)(int)uVar1 * 2), uVar5 < 0xf))
            goto LAB_0341bddc;
          }
        }
        uVar5 = 0;
      }
    }
LAB_0341bddc:
    if (uVar5 == 0xe) goto LAB_0341bfa8;
    uVar5 = 0;
    uVar3 = *puVar4;
    if ((uVar3 != 0) && (puVar4 != (uint *)(ulong)uVar3)) {
      puVar6 = (uint *)((long)puVar4 - (long)(ulong)uVar3);
      uVar5 = 0;
      if (*puVar6 != 0) {
        uVar3 = puVar6[1];
        if ((uVar3 != 0) && ((ulong)(ushort)puVar6[2] != 0)) {
          lVar7 = 0xc;
          if (*(char *)((long)puVar6 + 10) != '\0') {
            lVar7 = 0x1c;
          }
          lVar7 = (long)puVar6 + lVar7 + (ulong)(ushort)puVar6[2] * 8;
          if (lVar7 != 0) {
            uVar1 = 0;
            if ((ulong)uVar3 != 0) {
              uVar1 = (uint)((ulong)((long)puVar4 - lVar7) / (ulong)uVar3);
            }
            if (*puVar6 <= uVar1) {
              uVar1 = 0xffffffff;
            }
            if ((uVar1 < DAT_05326f18) &&
               (uVar5 = *(ushort *)(DAT_05326f20 + (long)(int)uVar1 * 2), uVar5 < 0xf))
            goto LAB_0341be84;
          }
        }
        uVar5 = 0;
      }
    }
LAB_0341be84:
    if (uVar5 == 0xb) goto LAB_0341bfa8;
    uVar5 = 0;
    uVar3 = *puVar4;
    local_38 = puVar4;
    if ((uVar3 != 0) && (puVar4 != (uint *)(ulong)uVar3)) {
      puVar6 = (uint *)((long)puVar4 - (long)(ulong)uVar3);
      uVar5 = 0;
      if (*puVar6 != 0) {
        uVar3 = puVar6[1];
        if ((uVar3 != 0) && ((ulong)(ushort)puVar6[2] != 0)) {
          lVar7 = 0xc;
          if (*(char *)((long)puVar6 + 10) != '\0') {
            lVar7 = 0x1c;
          }
          lVar7 = (long)puVar6 + lVar7 + (ulong)(ushort)puVar6[2] * 8;
          if (lVar7 != 0) {
            uVar1 = 0;
            if ((ulong)uVar3 != 0) {
              uVar1 = (uint)((ulong)((long)puVar4 - lVar7) / (ulong)uVar3);
            }
            if (*puVar6 <= uVar1) {
              uVar1 = 0xffffffff;
            }
            if ((uVar1 < DAT_05326f18) &&
               (uVar5 = *(ushort *)(DAT_05326f20 + (long)(int)uVar1 * 2), uVar5 < 0xf))
            goto LAB_0341c048;
          }
        }
        uVar5 = 0;
      }
    }
  }
LAB_0341c048:
  if (uVar5 == 3) {
    uVar3 = FUN_01ad6a30(&local_48,0x75);
    uVar3 = uVar3 ^ 1;
  }
  else {
    uVar3 = 0;
  }
LAB_0341bfac:
  return uVar3 & 1;
}

