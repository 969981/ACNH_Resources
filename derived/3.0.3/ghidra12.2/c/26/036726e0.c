
void FUN_036726e0(long param_1,uint param_2)

{
  uint uVar1;
  byte bVar2;
  ushort uVar3;
  uint uVar4;
  ushort uVar5;
  ushort uVar6;
  long *plVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  undefined4 local_58;
  uint local_54;
  
  if (*(char *)(param_1 + 0x135cc) != '\0') {
    *(undefined4 *)(param_1 + 0x13578) = *(undefined4 *)(param_1 + 0x13570);
    *(int *)(param_1 + 0x1357c) = *(int *)(param_1 + 0x13574);
    if (*(char *)(param_1 + 0x13584) != '\0' && *(int *)(param_1 + 0x13574) != 0) {
      *(int *)(param_1 + 0x135a8) = *(int *)(param_1 + 0x135a8) + 1;
      (**(code **)(param_1 + 0x11430))(1,*(undefined8 *)(param_1 + 0x11438));
      uVar8 = *(uint *)(param_1 + 0x13578);
      bVar2 = *(byte *)(*(long *)(*(long *)(param_1 + 0x11420) + ((ulong)(uVar8 >> 4) & 0xffffff0) +
                                 0xc00) + ((ulong)uVar8 & 0xff));
      *(undefined1 *)(param_1 + 0x13584) = 0;
      *(uint *)(param_1 + 0x13580) = (uint)bVar2;
      iVar10 = 0x8000;
      if (uVar8 + 1 >> 0x10 == 0) {
        iVar10 = uVar8 + 1;
      }
      iVar11 = *(int *)(param_1 + 0x1357c) + -1;
      *(int *)(param_1 + 0x13578) = iVar10;
      *(int *)(param_1 + 0x1357c) = iVar11;
      if (iVar11 == 0) {
        if (*(char *)(param_1 + 0x135a6) == '\0') {
          if (*(char *)(param_1 + 0x135a4) != '\0') {
            *(undefined1 *)(param_1 + 0x135a5) = 1;
          }
        }
        else {
          *(undefined4 *)(param_1 + 0x13578) = *(undefined4 *)(param_1 + 0x13570);
          *(undefined4 *)(param_1 + 0x1357c) = *(undefined4 *)(param_1 + 0x13574);
        }
      }
    }
    *(undefined1 *)(param_1 + 0x135cc) = 0;
  }
  uVar8 = *(int *)(param_1 + 0xb4) + param_2;
  if (uVar8 < *(uint *)(param_1 + 0xb8)) goto LAB_0367299c;
  uVar1 = uVar8 & 0xffff;
  uVar4 = *(int *)(param_1 + 0xbc) * uVar1;
  iVar10 = *(int *)(param_1 + 0x388);
  uVar9 = uVar4 >> 0x13;
  uVar6 = (ushort)(uVar4 >> 0x10);
  if (iVar10 < 0x13) {
    if (iVar10 == 0x10) {
LAB_0367285c:
      if ((*(char *)(param_1 + 0x1eec) != '\0') &&
         (uVar3 = *(ushort *)(param_1 + 0x1eea),
         *(ushort *)(param_1 + 0x1eea) = uVar3 - (uVar6 >> 3), uVar3 < uVar9)) {
        uVar9 = 0x200;
        plVar7 = (long *)(param_1 + 0x1ed8);
LAB_036728b8:
        **(uint **)(*plVar7 + 0x1c08) = **(uint **)(*plVar7 + 0x1c08) | uVar9;
        uVar9 = *(int *)(param_1 + 0xbc) * uVar1 >> 0x13;
      }
    }
    else if ((iVar10 == 0x12) && (*(char *)(param_1 + 0x2046) != '\0')) {
      uVar3 = *(ushort *)(param_1 + 0x2044);
      uVar5 = uVar3 & *(ushort *)(param_1 + 0x2042);
      *(ushort *)(param_1 + 0x2042) =
           uVar5 - (uVar6 >> 3) & uVar3 | *(ushort *)(param_1 + 0x2042) & (uVar3 ^ 0xffff);
      if (uVar5 < uVar9) {
        uVar9 = 0x400;
        plVar7 = (long *)(param_1 + 0x2028);
        goto LAB_036728b8;
      }
    }
  }
  else if (iVar10 == 0x13) {
    if ((*(char *)(param_1 + 0x1eb0) != '\0') &&
       (uVar4 = (uint)*(ushort *)(param_1 + 0x1eb2) + (uVar4 >> 0x13),
       *(short *)(param_1 + 0x1eb2) = (short)uVar4, 0x7ffe < (uVar4 & 0xffff))) {
      *(char *)(param_1 + 0x1eb0) = '\0';
      plVar7 = (long *)(param_1 + 0x1ea8);
      *(undefined2 *)(param_1 + 0x1eb2) = 0x7fff;
      uVar9 = 0x100;
      goto LAB_036728b8;
    }
  }
  else if ((iVar10 == 0x9f) || (iVar10 == 0x99)) goto LAB_0367285c;
  local_54 = uVar9 * 0x400;
  local_58 = 0;
  *(uint *)(param_1 + 0x13454) = *(int *)(param_1 + 0x13454) + local_54;
  if (*(uint *)(param_1 + (ulong)*(uint *)(param_1 + 0x135c0) * 4 + 0x135b0) <= local_54) {
    do {
      FUN_0365c7b0((long *)(param_1 + 0x11420),&local_58,&local_54);
    } while (*(uint *)(param_1 + (ulong)*(uint *)(param_1 + 0x135c0) * 4 + 0x135b0) <= local_54);
  }
  if (local_54 != 0) {
    iVar10 = (int)*(undefined8 *)(param_1 + 0x135b0);
    iVar14 = -(uint)(iVar10 == -1);
    iVar11 = (int)((ulong)*(undefined8 *)(param_1 + 0x135b0) >> 0x20);
    iVar15 = -(uint)(iVar11 == -1);
    iVar12 = (int)*(undefined8 *)(param_1 + 0x135b8);
    iVar16 = -(uint)(iVar12 == -1);
    iVar13 = (int)((ulong)*(undefined8 *)(param_1 + 0x135b8) >> 0x20);
    iVar17 = -(uint)(iVar13 == -1);
    *(uint *)(param_1 + 0x135ac) = *(int *)(param_1 + 0x135ac) + local_54;
    iVar10 = iVar10 - local_54;
    iVar11 = iVar11 - local_54;
    iVar12 = iVar12 - local_54;
    iVar13 = iVar13 - local_54;
    *(ulong *)(param_1 + 0x135b8) =
         CONCAT17((byte)((uint)iVar13 >> 0x18) | (byte)((uint)iVar17 >> 0x18),
                  CONCAT16((byte)((uint)iVar13 >> 0x10) | (byte)((uint)iVar17 >> 0x10),
                           CONCAT15((byte)((uint)iVar13 >> 8) | (byte)((uint)iVar17 >> 8),
                                    CONCAT14((byte)iVar13 | (byte)iVar17,
                                             CONCAT13((byte)((uint)iVar12 >> 0x18) |
                                                      (byte)((uint)iVar16 >> 0x18),
                                                      CONCAT12((byte)((uint)iVar12 >> 0x10) |
                                                               (byte)((uint)iVar16 >> 0x10),
                                                               CONCAT11((byte)((uint)iVar12 >> 8) |
                                                                        (byte)((uint)iVar16 >> 8),
                                                                        (byte)iVar12 | (byte)iVar16)
                                                              ))))));
    *(ulong *)(param_1 + 0x135b0) =
         CONCAT17((byte)((uint)iVar11 >> 0x18) | (byte)((uint)iVar15 >> 0x18),
                  CONCAT16((byte)((uint)iVar11 >> 0x10) | (byte)((uint)iVar15 >> 0x10),
                           CONCAT15((byte)((uint)iVar11 >> 8) | (byte)((uint)iVar15 >> 8),
                                    CONCAT14((byte)iVar11 | (byte)iVar15,
                                             CONCAT13((byte)((uint)iVar10 >> 0x18) |
                                                      (byte)((uint)iVar14 >> 0x18),
                                                      CONCAT12((byte)((uint)iVar10 >> 0x10) |
                                                               (byte)((uint)iVar14 >> 0x10),
                                                               CONCAT11((byte)((uint)iVar10 >> 8) |
                                                                        (byte)((uint)iVar14 >> 8),
                                                                        (byte)iVar10 | (byte)iVar14)
                                                              ))))));
  }
  *(ulong *)(param_1 + 0x90) = *(long *)(param_1 + 0x90) + (ulong)uVar9;
  iVar10 = *(int *)(param_1 + 0xb8);
  uVar1 = *(int *)(param_1 + 0xbc) * uVar1 >> 0x13;
  if (*(char *)(param_1 + 0x13e48) != '\0') {
    FUN_03640d70(param_1 + 0x13e40,uVar1);
  }
  uVar8 = uVar8 - uVar1 * iVar10;
LAB_0367299c:
  *(uint *)(param_1 + 0xb4) = uVar8;
  uVar8 = *(int *)(param_1 + 0xb0) + param_2;
  if (*(uint *)(param_1 + 0xc0) <= uVar8) {
    uVar1 = *(int *)(param_1 + 0xc4) * (uVar8 & 0xffff) >> 0x12;
    uVar8 = uVar8 - uVar1 * *(uint *)(param_1 + 0xc0);
    FUN_0364a770(param_1 + 0x2060,uVar1);
    *(ulong *)(param_1 + 0x88) = *(long *)(param_1 + 0x88) + (ulong)uVar1;
  }
  *(uint *)(param_1 + 0xb0) = uVar8;
  *(ulong *)(param_1 + 0x68) = *(long *)(param_1 + 0x68) + (ulong)param_2;
  return;
}

