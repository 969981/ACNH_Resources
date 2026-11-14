
undefined8 FUN_01ad9244(long param_1)

{
  char *pcVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  long lVar5;
  uint *puVar6;
  int iVar7;
  uint *puVar8;
  undefined8 *puVar9;
  ulong uVar10;
  undefined *local_40;
  char *local_38;
  
  puVar4 = *(uint **)(param_1 + 0x10);
  if (puVar4 == (uint *)0x0) {
    uVar3 = 0x21;
  }
  else {
    uVar3 = *puVar4;
    if (uVar3 != 0 && puVar4 != (uint *)(ulong)uVar3) {
      puVar6 = (uint *)((long)puVar4 - (long)(ulong)uVar3);
      uVar3 = 0;
      if (*puVar6 == 0) goto LAB_01ad92e0;
      uVar3 = puVar6[1];
      if ((uVar3 != 0) && ((ulong)(ushort)puVar6[2] != 0)) {
        lVar5 = 0xc;
        if (*(char *)((long)puVar6 + 10) != '\0') {
          lVar5 = 0x1c;
        }
        lVar5 = (long)puVar6 + lVar5 + (ulong)(ushort)puVar6[2] * 8;
        if (lVar5 != 0) {
          uVar2 = 0;
          if ((ulong)uVar3 != 0) {
            uVar2 = (uint)((ulong)((long)puVar4 - lVar5) / (ulong)uVar3);
          }
          if (*puVar6 <= uVar2) {
            uVar2 = 0xffffffff;
          }
          if ((uVar2 < *(uint *)PTR_DAT_04bc0148) &&
             (uVar3 = (uint)*(ushort *)(*(long *)(PTR_DAT_04bc0148 + 8) + (long)(int)uVar2 * 2),
             uVar3 < 0xa2)) goto LAB_01ad92e0;
        }
      }
    }
    uVar3 = 0;
  }
LAB_01ad92e0:
  if ((int)*(uint *)(DAT_0532a7a0 + 0x1c0) < 1) {
    if (*(long *)(DAT_0532a7a0 + 0xb0) == 0) {
      return 0;
    }
    puVar6 = *(uint **)(*(long *)(DAT_0532a7a0 + 0xb0) + 8);
    if (puVar6 == (uint *)0x0) {
      return 0;
    }
    if ((uVar3 < *(uint *)(DAT_0532a7a0 + 200)) &&
       (*(char *)(*(long *)(DAT_0532a7a0 + 0xd0) + (long)(int)uVar3) == '\0')) {
      return 0;
    }
    if (*puVar6 <= uVar3) {
      return 0;
    }
    if (puVar6[1] == 0) {
      return 0;
    }
    if ((ushort)puVar6[2] == 0) {
      return 0;
    }
    iVar7 = 0xc;
    if (*(char *)((long)puVar6 + 10) != '\0') {
      iVar7 = 0x1c;
    }
    puVar6 = (uint *)((ulong)(puVar6[1] * uVar3 + (uint)(ushort)puVar6[2] * 8 + iVar7) +
                     (long)puVar6);
  }
  else {
    if (*(uint *)(DAT_0532a7a0 + 0x1c0) <= uVar3) {
      return 0;
    }
    if (*(uint *)(DAT_0532a7a0 + 0x1b0) <= uVar3) {
      uVar3 = 0;
    }
    puVar6 = *(uint **)(*(long *)(DAT_0532a7a0 + 0x1b8) + (ulong)uVar3 * 8);
  }
  if (puVar6 == (uint *)0x0) {
    return 0;
  }
  uVar3 = *puVar6;
  if (uVar3 == 0 || puVar6 == (uint *)(ulong)uVar3) {
    return 0;
  }
  puVar8 = (uint *)((long)puVar6 - (long)(ulong)uVar3);
  if (*puVar8 == 0) {
    return 0;
  }
  uVar3 = puVar8[1];
  if (uVar3 == 0) {
    return 0;
  }
  if ((ulong)(ushort)puVar8[2] == 0) {
    return 0;
  }
  lVar5 = 0xc;
  if (*(char *)((long)puVar8 + 10) != '\0') {
    lVar5 = 0x1c;
  }
  lVar5 = (long)puVar8 + lVar5 + (ulong)(ushort)puVar8[2] * 8;
  if (lVar5 == 0) {
    return 0;
  }
  uVar2 = 0;
  if ((ulong)uVar3 != 0) {
    uVar2 = (uint)((ulong)((long)puVar6 - lVar5) / (ulong)uVar3);
  }
  if (*puVar8 <= uVar2) {
    uVar2 = 0xffffffff;
  }
  if (*(uint *)PTR_DAT_04bc02c8 <= uVar2) {
    return 0;
  }
  if (*(short *)(*(long *)(PTR_DAT_04bc02c8 + 8) + (long)(int)uVar2 * 2) != 9) {
    return 0;
  }
  if (puVar4 == (uint *)0x0) {
    uVar3 = 0x21;
  }
  else {
    uVar2 = *puVar4;
    uVar3 = 0;
    if ((uVar2 != 0) && (puVar4 != (uint *)(ulong)uVar2)) {
      puVar6 = (uint *)((long)puVar4 - (long)(ulong)uVar2);
      uVar3 = 0;
      if (*puVar6 != 0) {
        uVar3 = puVar6[1];
        if ((uVar3 != 0) && ((ulong)(ushort)puVar6[2] != 0)) {
          lVar5 = 0xc;
          if (*(char *)((long)puVar6 + 10) != '\0') {
            lVar5 = 0x1c;
          }
          lVar5 = (long)puVar6 + lVar5 + (ulong)(ushort)puVar6[2] * 8;
          if (lVar5 != 0) {
            uVar2 = 0;
            if ((ulong)uVar3 != 0) {
              uVar2 = (uint)((ulong)((long)puVar4 - lVar5) / (ulong)uVar3);
            }
            if (*puVar6 <= uVar2) {
              uVar2 = 0xffffffff;
            }
            if ((uVar2 < *(uint *)PTR_DAT_04bc0148) &&
               (uVar3 = (uint)*(ushort *)(*(long *)(PTR_DAT_04bc0148 + 8) + (long)(int)uVar2 * 2),
               uVar3 < 0xa2)) goto LAB_01ad94cc;
          }
        }
        uVar3 = 0;
      }
    }
  }
LAB_01ad94cc:
  if (uVar3 < 0xa2) {
    puVar9 = *(undefined8 **)(PTR_s_STowelN_04bbe238 + (ulong)uVar3 * 8 + 0x760);
  }
  else {
    puVar9 = &DAT_0407ebb1;
  }
  lVar5 = 0;
  local_40 = PTR_DAT_04bb2020 + 0x10;
  local_38 = "AxeDull";
  do {
    if (*(char *)((long)puVar9 + lVar5) == '\0') {
LAB_01ad9554:
      if ((int)lVar5 < 7) {
        return 0;
      }
      uVar10 = 0;
      while( true ) {
        pcVar1 = (char *)((long)puVar9 + uVar10);
        (**(code **)(local_40 + 0x18))(&local_40);
        if ((pcVar1 == local_38) ||
           ((*pcVar1 == *local_38 &&
            ((*pcVar1 == '\0' ||
             ((pcVar1[1] == local_38[1] &&
              ((pcVar1[1] == '\0' ||
               ((pcVar1[2] == local_38[2] &&
                ((pcVar1[2] == '\0' ||
                 ((pcVar1[3] == local_38[3] &&
                  ((pcVar1[3] == '\0' ||
                   ((pcVar1[4] == local_38[4] &&
                    ((pcVar1[4] == '\0' ||
                     ((pcVar1[5] == local_38[5] &&
                      ((pcVar1[5] == '\0' || (pcVar1[6] == local_38[6]))))))))))))))))))))))))))
        break;
        uVar10 = uVar10 + 1;
        if ((int)lVar5 - 6 == uVar10) {
          return 0;
        }
      }
      if ((int)uVar10 == -1) {
        return 0;
      }
      return 1;
    }
    if (*(char *)((long)puVar9 + lVar5 + 1) == '\0') {
      lVar5 = lVar5 + 1;
      goto LAB_01ad9554;
    }
    if (*(char *)((long)puVar9 + lVar5 + 2) == '\0') {
      lVar5 = lVar5 + 2;
      goto LAB_01ad9554;
    }
    lVar5 = lVar5 + 3;
    if (lVar5 == 0x80001) {
      return 0;
    }
  } while( true );
}

