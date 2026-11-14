
ushort FUN_01af93e8(long param_1)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  uint uVar5;
  ushort uVar6;
  uint *puVar7;
  ulong uVar8;
  
  puVar4 = *(uint **)(param_1 + 0x10);
  if (puVar4 == (uint *)0x0) {
    return 0;
  }
  uVar5 = *puVar4;
  if (uVar5 == 0 || puVar4 == (uint *)(ulong)uVar5) {
LAB_01af9484:
    uVar5 = *(uint *)PTR_DAT_04bc00c8;
LAB_01af9488:
    uVar6 = 0;
  }
  else {
    puVar7 = (uint *)((long)puVar4 - (long)(ulong)uVar5);
    if (((*puVar7 == 0) || (uVar5 = puVar7[1], uVar5 == 0)) || ((ulong)(ushort)puVar7[2] == 0))
    goto LAB_01af9484;
    lVar1 = 0xc;
    if (*(char *)((long)puVar7 + 10) != '\0') {
      lVar1 = 0x1c;
    }
    lVar1 = (long)puVar7 + lVar1 + (ulong)(ushort)puVar7[2] * 8;
    if (lVar1 == 0) goto LAB_01af9484;
    uVar2 = 0;
    if ((ulong)uVar5 != 0) {
      uVar2 = (uint)((ulong)((long)puVar4 - lVar1) / (ulong)uVar5);
    }
    uVar5 = *(uint *)PTR_DAT_04bc00c8;
    if (*puVar7 <= uVar2) {
      uVar2 = 0xffffffff;
    }
    if ((uVar5 <= uVar2) ||
       (uVar6 = *(ushort *)(*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar2 * 2), 0xbc < uVar6))
    goto LAB_01af9488;
  }
  if (((uVar6 == 0xb1) && (uVar2 = *(uint *)(param_1 + 0xc), (uVar2 & 0xf800) == 0)) &&
     ((*(byte *)(*(long *)PTR_DAT_04bb46f0 + ((ulong)(uVar2 >> 3) & 0x1fff) + 0xe99e0) >>
       (ulong)(uVar2 & 7) & 1) != 0)) {
    return 0x3a;
  }
  uVar2 = *puVar4;
  if ((uVar2 != 0) && (puVar4 != (uint *)(ulong)uVar2)) {
    puVar7 = (uint *)((long)puVar4 - (long)(ulong)uVar2);
    uVar2 = *puVar7;
    if ((uVar2 != 0) && (uVar8 = (ulong)puVar7[1], puVar7[1] != 0)) {
      if ((ulong)(ushort)puVar7[2] != 0) {
        lVar1 = 0xc;
        if (*(char *)((long)puVar7 + 10) != '\0') {
          lVar1 = 0x1c;
        }
        lVar1 = (long)puVar7 + lVar1 + (ulong)(ushort)puVar7[2] * 8;
        if (lVar1 != 0) {
          uVar3 = 0;
          if (uVar8 != 0) {
            uVar3 = (uint)((ulong)((long)puVar4 - lVar1) / uVar8);
          }
          if (uVar2 <= uVar3) {
            uVar3 = 0xffffffff;
          }
          if ((uVar3 < uVar5) &&
             (0xff43 < (ushort)(*(short *)(*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar3 * 2) -
                               0xbdU))) goto LAB_01af9580;
        }
      }
      if ((ulong)(ushort)puVar7[2] != 0) {
        lVar1 = 0xc;
        if (*(char *)((long)puVar7 + 10) != '\0') {
          lVar1 = 0x1c;
        }
        lVar1 = (long)puVar7 + lVar1 + (ulong)(ushort)puVar7[2] * 8;
        if (lVar1 != 0) {
          uVar3 = 0;
          if (uVar8 != 0) {
            uVar3 = (uint)((ulong)((long)puVar4 - lVar1) / uVar8);
          }
          if (uVar2 <= uVar3) {
            uVar3 = 0xffffffff;
          }
          if ((uVar3 < DAT_05327298) && (*(short *)(DAT_053272a0 + (long)(int)uVar3 * 2) == 1)) {
            return 0x13;
          }
        }
      }
    }
  }
LAB_01af9580:
  uVar6 = 0;
  uVar2 = *puVar4;
  if ((uVar2 != 0) && (puVar4 != (uint *)(ulong)uVar2)) {
    puVar7 = (uint *)((long)puVar4 - (long)(ulong)uVar2);
    uVar6 = 0;
    if (*puVar7 != 0) {
      uVar2 = puVar7[1];
      if ((uVar2 != 0) && ((ulong)(ushort)puVar7[2] != 0)) {
        lVar1 = 0xc;
        if (*(char *)((long)puVar7 + 10) != '\0') {
          lVar1 = 0x1c;
        }
        lVar1 = (long)puVar7 + lVar1 + (ulong)(ushort)puVar7[2] * 8;
        if (lVar1 != 0) {
          uVar3 = 0;
          if ((ulong)uVar2 != 0) {
            uVar3 = (uint)((ulong)((long)puVar4 - lVar1) / (ulong)uVar2);
          }
          if (*puVar7 <= uVar3) {
            uVar3 = 0xffffffff;
          }
          if ((uVar3 < uVar5) &&
             (uVar6 = *(ushort *)(*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar3 * 2),
             uVar6 < 0xbd)) goto LAB_01af9608;
        }
      }
      uVar6 = 0;
    }
  }
LAB_01af9608:
  if (uVar6 == 1) {
    return 0x13;
  }
  uVar6 = 0;
  uVar2 = *puVar4;
  if ((uVar2 != 0) && (puVar4 != (uint *)(ulong)uVar2)) {
    puVar7 = (uint *)((long)puVar4 - (long)(ulong)uVar2);
    uVar6 = 0;
    if (*puVar7 != 0) {
      uVar2 = puVar7[1];
      if ((uVar2 != 0) && ((ulong)(ushort)puVar7[2] != 0)) {
        lVar1 = 0xc;
        if (*(char *)((long)puVar7 + 10) != '\0') {
          lVar1 = 0x1c;
        }
        lVar1 = (long)puVar7 + lVar1 + (ulong)(ushort)puVar7[2] * 8;
        if (lVar1 != 0) {
          uVar3 = 0;
          if ((ulong)uVar2 != 0) {
            uVar3 = (uint)((ulong)((long)puVar4 - lVar1) / (ulong)uVar2);
          }
          if (*puVar7 <= uVar3) {
            uVar3 = 0xffffffff;
          }
          if ((uVar3 < uVar5) &&
             (uVar6 = *(ushort *)(*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar3 * 2),
             uVar6 < 0xbd)) goto LAB_01af96b4;
        }
      }
      uVar6 = 0;
    }
  }
LAB_01af96b4:
  if (uVar6 == 2) {
    return 0x12;
  }
  uVar5 = *puVar4;
  if (uVar5 == 0) {
    return 0;
  }
  if (puVar4 == (uint *)(ulong)uVar5) {
    return 0;
  }
  puVar7 = (uint *)((long)puVar4 - (long)(ulong)uVar5);
  if (*puVar7 == 0) {
    return 0;
  }
  uVar5 = puVar7[1];
  if ((uVar5 != 0) && ((ulong)(ushort)puVar7[2] != 0)) {
    lVar1 = 0xc;
    if (*(char *)((long)puVar7 + 10) != '\0') {
      lVar1 = 0x1c;
    }
    lVar1 = (long)puVar7 + lVar1 + (ulong)(ushort)puVar7[2] * 8;
    if (lVar1 != 0) {
      uVar2 = 0;
      if ((ulong)uVar5 != 0) {
        uVar2 = (uint)((ulong)((long)puVar4 - lVar1) / (ulong)uVar5);
      }
      if (*puVar7 <= uVar2) {
        uVar2 = 0xffffffff;
      }
      if ((uVar2 < DAT_05326f68) &&
         (uVar6 = *(ushort *)(DAT_05326f70 + (long)(int)uVar2 * 2), uVar6 < 0xda)) {
        if (uVar6 != 0x17) {
          return uVar6;
        }
        uVar8 = FUN_01af4c7c();
        if ((uVar8 & 1) == 0) {
          return 0x17;
        }
        return 0x18;
      }
    }
  }
  return 0;
}

