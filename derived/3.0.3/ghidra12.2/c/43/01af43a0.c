
ulong FUN_01af43a0(long param_1)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  ulong uVar5;
  ushort *puVar6;
  uint uVar7;
  uint *puVar8;
  ushort uVar9;
  uint *puVar10;
  
  puVar8 = *(uint **)(param_1 + 0x10);
  if (puVar8 == (uint *)0x0) {
    return 0;
  }
  uVar7 = *puVar8;
  if (uVar7 == 0 || puVar8 == (uint *)(ulong)uVar7) {
LAB_01af4444:
    uVar9 = 0;
    uVar7 = *(uint *)PTR_DAT_04bc00c8;
  }
  else {
    puVar10 = (uint *)((long)puVar8 - (long)(ulong)uVar7);
    if (((*puVar10 == 0) || (uVar7 = puVar10[1], uVar7 == 0)) || ((ulong)(ushort)puVar10[2] == 0))
    goto LAB_01af4444;
    lVar1 = 0xc;
    if (*(char *)((long)puVar10 + 10) != '\0') {
      lVar1 = 0x1c;
    }
    lVar1 = (long)puVar10 + lVar1 + (ulong)(ushort)puVar10[2] * 8;
    if (lVar1 == 0) goto LAB_01af4444;
    uVar2 = 0;
    if ((ulong)uVar7 != 0) {
      uVar2 = (uint)((ulong)((long)puVar8 - lVar1) / (ulong)uVar7);
    }
    if (*puVar10 <= uVar2) {
      uVar2 = 0xffffffff;
    }
    uVar7 = DAT_05326ec0;
    if ((DAT_05326ec0 <= uVar2) ||
       (uVar9 = *(ushort *)(DAT_05326ec8 + (long)(int)uVar2 * 2), 0xbc < uVar9)) {
      uVar9 = 0;
    }
  }
  if (((uVar9 == 0xb1) && (uVar2 = *(uint *)(param_1 + 0xc), (uVar2 & 0xf800) == 0)) &&
     ((*(byte *)(*(long *)PTR_DAT_04bb46f0 + ((ulong)(uVar2 >> 3) & 0x1fff) + 0xe99e0) >>
       (ulong)(uVar2 & 7) & 1) != 0)) {
    return 0xbb;
  }
  uVar9 = 0;
  uVar2 = *puVar8;
  if ((uVar2 != 0) && (puVar8 != (uint *)(ulong)uVar2)) {
    puVar10 = (uint *)((long)puVar8 - (long)(ulong)uVar2);
    uVar9 = 0;
    if (*puVar10 != 0) {
      uVar2 = puVar10[1];
      if ((uVar2 != 0) && ((ulong)(ushort)puVar10[2] != 0)) {
        lVar1 = 0xc;
        if (*(char *)((long)puVar10 + 10) != '\0') {
          lVar1 = 0x1c;
        }
        lVar1 = (long)puVar10 + lVar1 + (ulong)(ushort)puVar10[2] * 8;
        if (lVar1 != 0) {
          uVar3 = 0;
          if ((ulong)uVar2 != 0) {
            uVar3 = (uint)((ulong)((long)puVar8 - lVar1) / (ulong)uVar2);
          }
          if (*puVar10 <= uVar3) {
            uVar3 = 0xffffffff;
          }
          if ((uVar3 < uVar7) &&
             (uVar9 = *(ushort *)(DAT_05326ec8 + (long)(int)uVar3 * 2), uVar9 < 0xbd))
          goto LAB_01af4500;
        }
      }
      uVar9 = 0;
    }
  }
LAB_01af4500:
  if (uVar9 == 0x7f) {
    uVar5 = FUN_01af4a7c(param_1);
    if ((uVar5 & 1) != 0) {
      return 0xbe;
    }
    puVar8 = *(uint **)(param_1 + 0x10);
    if (puVar8 == (uint *)0x0) {
      puVar8 = (uint *)0x0;
      uVar9 = 0xbc;
      goto LAB_01af47dc;
    }
  }
  puVar10 = (uint *)((long)puVar8 - (ulong)*puVar8);
  uVar7 = DAT_05326ec0;
  if (((*puVar8 != 0) && (puVar10 != (uint *)0x0)) && (uVar2 = *puVar10, uVar2 != 0)) {
    uVar3 = puVar10[1];
    if ((uVar3 != 0) && ((ulong)(ushort)puVar10[2] != 0)) {
      lVar1 = 0xc;
      if (*(char *)((long)puVar10 + 10) != '\0') {
        lVar1 = 0x1c;
      }
      lVar1 = (long)puVar10 + lVar1 + (ulong)(ushort)puVar10[2] * 8;
      if (lVar1 != 0) {
        uVar4 = 0;
        if ((ulong)uVar3 != 0) {
          uVar4 = (uint)((ulong)((long)puVar8 - lVar1) / (ulong)uVar3);
        }
        if (uVar2 <= uVar4) {
          uVar4 = 0xffffffff;
        }
        uVar7 = *(uint *)PTR_DAT_04bc00c8;
        if ((uVar4 < uVar7) &&
           (0xff43 < (ushort)(*(short *)(*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar4 * 2) -
                             0xbdU))) goto LAB_01af45cc;
      }
    }
    uVar3 = puVar10[1];
    if (uVar3 != 0) {
      if ((ulong)(ushort)puVar10[2] != 0) {
        lVar1 = 0xc;
        if (*(char *)((long)puVar10 + 10) != '\0') {
          lVar1 = 0x1c;
        }
        lVar1 = (long)puVar10 + lVar1 + (ulong)(ushort)puVar10[2] * 8;
        if (lVar1 != 0) {
          uVar4 = 0;
          if ((ulong)uVar3 != 0) {
            uVar4 = (uint)((ulong)((long)puVar8 - lVar1) / (ulong)uVar3);
          }
          if (uVar2 <= uVar4) {
            uVar4 = 0xffffffff;
          }
          if ((uVar4 < DAT_05327298) && (*(short *)(DAT_053272a0 + (long)(int)uVar4 * 2) == 1)) {
            return 2;
          }
        }
      }
    }
  }
LAB_01af45cc:
  uVar9 = 0;
  uVar2 = *puVar8;
  if ((uVar2 != 0) && (puVar8 != (uint *)(ulong)uVar2)) {
    puVar10 = (uint *)((long)puVar8 - (long)(ulong)uVar2);
    uVar9 = 0;
    if (*puVar10 != 0) {
      uVar2 = puVar10[1];
      if ((uVar2 != 0) && ((ulong)(ushort)puVar10[2] != 0)) {
        lVar1 = 0xc;
        if (*(char *)((long)puVar10 + 10) != '\0') {
          lVar1 = 0x1c;
        }
        lVar1 = (long)puVar10 + lVar1 + (ulong)(ushort)puVar10[2] * 8;
        if (lVar1 != 0) {
          uVar3 = 0;
          if ((ulong)uVar2 != 0) {
            uVar3 = (uint)((ulong)((long)puVar8 - lVar1) / (ulong)uVar2);
          }
          if (*puVar10 <= uVar3) {
            uVar3 = 0xffffffff;
          }
          if ((uVar3 < uVar7) &&
             (uVar9 = *(ushort *)(DAT_05326ec8 + (long)(int)uVar3 * 2), uVar9 < 0xbd))
          goto LAB_01af465c;
        }
      }
      uVar9 = 0;
    }
  }
LAB_01af465c:
  if (uVar9 == 1) {
    return 2;
  }
  uVar9 = 0;
  uVar2 = *puVar8;
  if ((uVar2 != 0) && (puVar8 != (uint *)(ulong)uVar2)) {
    puVar10 = (uint *)((long)puVar8 - (long)(ulong)uVar2);
    uVar9 = 0;
    if (*puVar10 != 0) {
      uVar2 = puVar10[1];
      if ((uVar2 != 0) && ((ulong)(ushort)puVar10[2] != 0)) {
        lVar1 = 0xc;
        if (*(char *)((long)puVar10 + 10) != '\0') {
          lVar1 = 0x1c;
        }
        lVar1 = (long)puVar10 + lVar1 + (ulong)(ushort)puVar10[2] * 8;
        if (lVar1 != 0) {
          uVar3 = 0;
          if ((ulong)uVar2 != 0) {
            uVar3 = (uint)((ulong)((long)puVar8 - lVar1) / (ulong)uVar2);
          }
          if (*puVar10 <= uVar3) {
            uVar3 = 0xffffffff;
          }
          if ((uVar3 < uVar7) &&
             (uVar9 = *(ushort *)(DAT_05326ec8 + (long)(int)uVar3 * 2), uVar9 < 0xbd))
          goto LAB_01af47dc;
        }
      }
      uVar9 = 0;
    }
  }
LAB_01af47dc:
  if (uVar9 == 2) {
    uVar5 = 3;
  }
  else {
    puVar10 = (uint *)((long)puVar8 - (ulong)*puVar8);
    if ((((*puVar8 != 0) && (puVar10 != (uint *)0x0)) && (*puVar10 != 0)) &&
       ((uVar7 = puVar10[1], uVar7 != 0 && ((ulong)(ushort)puVar10[2] != 0)))) {
      lVar1 = 0xc;
      if (*(char *)((long)puVar10 + 10) != '\0') {
        lVar1 = 0x1c;
      }
      lVar1 = (long)puVar10 + lVar1 + (ulong)(ushort)puVar10[2] * 8;
      if (lVar1 != 0) {
        uVar2 = 0;
        if ((ulong)uVar7 != 0) {
          uVar2 = (uint)((ulong)((long)puVar8 - lVar1) / (ulong)uVar7);
        }
        if (*puVar10 <= uVar2) {
          uVar2 = 0xffffffff;
        }
        if ((uVar2 < *(uint *)PTR_DAT_04bc00f0) &&
           (uVar7 = (uint)*(ushort *)(*(long *)(PTR_DAT_04bc00f0 + 8) + (long)(int)uVar2 * 2),
           0xfd96 < (uVar7 - 0x26a & 0xffff))) {
          return (ulong)uVar7;
        }
      }
    }
    uVar5 = FUN_01afcfa0(param_1);
    if ((int)uVar5 != 0) {
      puVar6 = (ushort *)FUN_01afd600(param_1);
      uVar5 = 0;
      if (puVar6 != (ushort *)0x0) {
        uVar5 = (ulong)((*puVar6 & 0x18) == 0x10);
      }
    }
  }
  return uVar5;
}

