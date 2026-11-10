
undefined4 FUN_0011ce20(undefined8 param_1,long param_2,char param_3)

{
  uint uVar1;
  uint uVar2;
  undefined2 *puVar3;
  ushort *puVar4;
  long lVar5;
  ushort uVar6;
  undefined4 uVar7;
  ushort *puVar8;
  uint uVar9;
  uint uVar10;
  undefined1 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  ushort *puVar14;
  undefined8 *puVar15;
  uint uVar16;
  uint uVar17;
  ulong uVar18;
  ushort uVar19;
  uint uVar20;
  undefined1 auStack_44 [4];
  
  uVar2 = (*(uint *)(param_2 + 8) & 0xff00ff00) >> 8 | (*(uint *)(param_2 + 8) & 0xff00ff) << 8;
  if ((uVar2 >> 0x10 | uVar2 << 0x10 | 0x10000) != 0x80030000) {
    return 0x8e1f;
  }
  puVar8 = (ushort *)(param_2 + 0x26);
  uVar19 = (ushort)*(byte *)puVar8;
  uVar2 = (uint)CONCAT11(*(byte *)puVar8,*(undefined1 *)(param_2 + 0x27));
  uVar1 = (uint)CONCAT11(*(undefined1 *)(param_2 + 0x2a),*(undefined1 *)(param_2 + 0x2b));
  if (uVar1 < uVar2) {
LAB_0011cf6c:
    uVar7 = 0xffffa21f;
    if (param_3 != '\0') {
      uVar7 = 0xffffa31f;
    }
    return uVar7;
  }
  puVar15 = (undefined8 *)
            (param_2 +
            ((ulong)*(byte *)(param_2 + 0x3c) << 0x18 | (ulong)*(byte *)(param_2 + 0x3d) << 0x10 |
             (ulong)*(byte *)(param_2 + 0x3e) << 8 | (ulong)*(byte *)(param_2 + 0x3f)));
  if (uVar2 == 0) {
    uVar16 = 0;
  }
  else {
    uVar9 = 0;
    puVar12 = puVar15;
    do {
      uVar16 = (uint)CONCAT11(*(undefined1 *)puVar12,*(undefined1 *)((long)puVar12 + 1));
      if (uVar1 <= uVar16) goto LAB_0011cf6c;
      uVar9 = uVar9 + 1;
      puVar12 = (undefined8 *)((long)puVar12 + 2);
    } while ((uVar9 & 0xffff) < uVar2);
  }
  uVar18 = (ulong)*(byte *)(param_2 + 0x40) << 0x18 | (ulong)*(byte *)(param_2 + 0x41) << 0x10 |
           (ulong)*(byte *)(param_2 + 0x42) << 8 | (ulong)*(byte *)(param_2 + 0x43);
  puVar12 = (undefined8 *)(param_2 + uVar18);
  if (uVar2 != 0) {
    uVar9 = 0;
    puVar13 = puVar12;
    do {
      uVar16 = (uint)CONCAT11(*(undefined1 *)puVar13,*(undefined1 *)((long)puVar13 + 1));
      if (uVar1 <= uVar16) goto LAB_0011cf6c;
      uVar9 = uVar9 + 1;
      puVar13 = (undefined8 *)((long)puVar13 + 2);
    } while ((uVar9 & 0xffff) < uVar2);
  }
  puVar14 = (ushort *)(param_2 + 0x34);
  uVar9 = (uint)CONCAT11(*(byte *)puVar14,*(undefined1 *)(param_2 + 0x35));
  uVar6 = CONCAT11(*(undefined1 *)(param_2 + 0x36),*(undefined1 *)(param_2 + 0x37));
  uVar10 = (uint)uVar6;
  if ((uVar9 != uVar2 + 1 && uVar9 != uVar2) && uVar9 != uVar2 - 1 || uVar1 <= uVar10)
  goto LAB_0011cf6c;
  if (uVar9 == uVar2 + 1) {
    if (param_3 == '\0') {
      return 0xa21f;
    }
    if (uVar2 != 0) {
      uVar9 = 0;
      do {
        uVar17 = (uint)CONCAT11(*(undefined1 *)puVar15,*(undefined1 *)((long)puVar15 + 1));
        if (uVar10 == uVar17) {
          uVar9 = 0;
          goto LAB_0011d090;
        }
        if (((uVar9 & 0xffff) != 0) && (uVar17 == uVar16)) {
          uVar16 = (uVar2 + 1) - uVar9;
          if ((uVar16 & 0xffff) != 0) {
            uVar10 = uVar16 & 3;
            if (2 < (uVar2 - uVar9 & 0xffff)) {
              uVar16 = uVar16 - uVar10;
              do {
                uVar16 = uVar16 - 4;
                *(undefined8 *)((long)puVar15 + -2) = *puVar15;
                puVar15 = puVar15 + 1;
              } while ((uVar16 & 0xffff) != 0);
            }
            puVar3 = (undefined2 *)((long)puVar15 + -2);
            uVar2 = uVar10;
            while (uVar2 != 0) {
              uVar10 = uVar10 - 1;
              *puVar3 = *(undefined2 *)puVar15;
              puVar3 = puVar3 + 1;
              puVar15 = (undefined8 *)((long)puVar15 + 2);
              uVar2 = uVar10 & 0xffff;
            }
          }
          goto LAB_0011d344;
        }
        uVar9 = uVar9 + 1;
        puVar15 = (undefined8 *)((long)puVar15 + 2);
        uVar16 = uVar17;
      } while ((uVar9 & 0xffff) < uVar2);
      uVar16 = 0;
      do {
        uVar9 = (uint)CONCAT11(*(undefined1 *)puVar12,*(undefined1 *)((long)puVar12 + 1));
        if (uVar10 == uVar9) {
          uVar9 = uVar2 - uVar16;
          if ((uVar9 & 0xffff) != 0) {
            uVar10 = uVar9 & 3;
            puVar15 = puVar12;
            uVar17 = uVar10;
            if (2 < (~uVar16 + uVar2 & 0xffff)) {
              uVar9 = uVar9 - uVar10;
              do {
                uVar9 = uVar9 - 4;
                puVar12 = puVar15 + 1;
                *puVar15 = *(undefined8 *)((long)puVar15 + 2);
                puVar15 = puVar12;
              } while ((uVar9 & 0xffff) != 0);
            }
            while (uVar17 != 0) {
              uVar10 = uVar10 - 1;
              *(undefined2 *)puVar12 = *(undefined2 *)((long)puVar15 + 2);
              puVar12 = (undefined8 *)((long)puVar12 + 2);
              puVar15 = (undefined8 *)((long)puVar15 + 2);
              uVar17 = uVar10 & 0xffff;
            }
          }
          break;
        }
        if (((uVar16 & 0xffff) != 0) && (uVar9 == uVar17)) {
          uVar9 = (uVar2 + 1) - uVar16;
          if ((uVar9 & 0xffff) != 0) {
            uVar10 = uVar9 & 3;
            if (2 < (uVar2 - uVar16 & 0xffff)) {
              uVar9 = uVar9 - uVar10;
              do {
                uVar9 = uVar9 - 4;
                *(undefined8 *)((long)puVar12 + -2) = *puVar12;
                puVar12 = puVar12 + 1;
              } while ((uVar9 & 0xffff) != 0);
            }
            puVar3 = (undefined2 *)((long)puVar12 + -2);
            uVar2 = uVar10;
            while (uVar2 != 0) {
              uVar10 = uVar10 - 1;
              *puVar3 = *(undefined2 *)puVar12;
              puVar3 = puVar3 + 1;
              puVar12 = (undefined8 *)((long)puVar12 + 2);
              uVar2 = uVar10 & 0xffff;
            }
          }
          break;
        }
        uVar16 = uVar16 + 1;
        puVar12 = (undefined8 *)((long)puVar12 + 2);
        uVar17 = uVar9;
      } while ((uVar16 & 0xffff) < uVar2);
    }
    goto LAB_0011d344;
  }
  if (uVar9 != uVar2 - 1) goto LAB_0011d4dc;
  if (param_3 == '\0') {
    return 0xa21f;
  }
  if (uVar2 != 0) {
    uVar9 = 0;
    do {
      uVar17 = (uint)CONCAT11(*(undefined1 *)puVar15,*(undefined1 *)((long)puVar15 + 1));
      if (uVar10 == uVar17) {
        if ((~uVar9 & 0xffff) != 0) {
          puVar15 = (undefined8 *)((long)puVar15 + 2);
          uVar20 = uVar9;
joined_r0x0011d148:
          uVar9 = ~uVar20 + uVar2;
          if ((uVar9 & 0xffff) != 0) {
            uVar17 = uVar9 & 3;
            if (2 < ((uVar2 - 2) - uVar20 & 0xffff)) {
              uVar9 = uVar9 - uVar17;
              do {
                uVar9 = uVar9 - 4;
                *(undefined8 *)((long)puVar15 + -2) = *puVar15;
                puVar15 = puVar15 + 1;
              } while ((uVar9 & 0xffff) != 0);
            }
            puVar3 = (undefined2 *)((long)puVar15 + -2);
            uVar9 = uVar17;
            while (uVar9 != 0) {
              uVar17 = uVar17 - 1;
              *puVar3 = *(undefined2 *)puVar15;
              puVar3 = puVar3 + 1;
              puVar15 = (undefined8 *)((long)puVar15 + 2);
              uVar9 = uVar17 & 0xffff;
            }
            uVar18 = (ulong)*(byte *)(param_2 + 0x40) << 0x18 |
                     (ulong)*(byte *)(param_2 + 0x41) << 0x10 |
                     (ulong)*(byte *)(param_2 + 0x42) << 8 | (ulong)*(byte *)(param_2 + 0x43);
          }
        }
        break;
      }
      uVar20 = (uVar9 & 0xffff) + 0xffff;
      if ((uVar20 >> 0x10 != 0) && (uVar17 == uVar16)) goto joined_r0x0011d148;
      uVar9 = uVar9 + 1;
      puVar15 = (undefined8 *)((long)puVar15 + 2);
      uVar16 = uVar17;
    } while ((uVar9 & 0xffff) < uVar2);
    if (uVar2 != 0) {
      uVar9 = 0;
      puVar15 = (undefined8 *)(param_2 + uVar18);
      do {
        uVar17 = (uint)CONCAT11(*(undefined1 *)puVar15,*(undefined1 *)((long)puVar15 + 1));
        if (uVar10 == uVar17) {
          if ((~uVar9 & 0xffff) != 0) {
            puVar15 = (undefined8 *)((long)puVar15 + 2);
            uVar20 = uVar9;
joined_r0x0011d428:
            uVar16 = ~uVar20 + uVar2;
            if ((uVar16 & 0xffff) != 0) {
              uVar9 = uVar16 & 3;
              if (2 < ((uVar2 - 2) - uVar20 & 0xffff)) {
                uVar16 = uVar16 - uVar9;
                do {
                  uVar16 = uVar16 - 4;
                  *(undefined8 *)((long)puVar15 + -2) = *puVar15;
                  puVar15 = puVar15 + 1;
                } while ((uVar16 & 0xffff) != 0);
              }
              puVar3 = (undefined2 *)((long)puVar15 + -2);
              uVar2 = uVar9;
              while (uVar2 != 0) {
                uVar9 = uVar9 - 1;
                *puVar3 = *(undefined2 *)puVar15;
                puVar3 = puVar3 + 1;
                puVar15 = (undefined8 *)((long)puVar15 + 2);
                uVar2 = uVar9 & 0xffff;
              }
            }
          }
          break;
        }
        uVar20 = (uVar9 & 0xffff) + 0xffff;
        if ((uVar20 >> 0x10 != 0) && (uVar17 == uVar16)) goto joined_r0x0011d428;
        uVar9 = uVar9 + 1;
        puVar15 = (undefined8 *)((long)puVar15 + 2);
        uVar16 = uVar17;
      } while ((uVar9 & 0xffff) < uVar2);
    }
  }
  puVar4 = puVar14;
  goto LAB_0011d498;
  while( true ) {
    uVar9 = uVar9 + 1;
    puVar12 = (undefined8 *)((long)puVar12 + 2);
    uVar16 = uVar17;
    if (uVar2 <= (uVar9 & 0xffff)) break;
LAB_0011d090:
    uVar17 = (uint)CONCAT11(*(undefined1 *)puVar12,*(undefined1 *)((long)puVar12 + 1));
    if (uVar10 == uVar17) goto LAB_0011d4d4;
    if (((uVar9 & 0xffff) != 0) && (uVar17 == uVar16)) {
      uVar16 = (uVar2 + 1) - uVar9;
      if ((uVar16 & 0xffff) != 0) {
        uVar17 = uVar16 & 3;
        if (2 < (uVar2 - uVar9 & 0xffff)) {
          uVar16 = uVar16 - uVar17;
          do {
            uVar16 = uVar16 - 4;
            *(undefined8 *)((long)puVar12 + -2) = *puVar12;
            puVar12 = puVar12 + 1;
          } while ((uVar16 & 0xffff) != 0);
        }
        puVar3 = (undefined2 *)((long)puVar12 + -2);
        uVar16 = uVar17;
        while (uVar16 != 0) {
          uVar17 = uVar17 - 1;
          *puVar3 = *(undefined2 *)puVar12;
          puVar3 = puVar3 + 1;
          puVar12 = (undefined8 *)((long)puVar12 + 2);
          uVar16 = uVar17 & 0xffff;
        }
      }
      break;
    }
  }
  uVar16 = 0;
  puVar15 = (undefined8 *)
            (param_2 +
            ((ulong)*(byte *)(param_2 + 0x3c) << 0x18 | (ulong)*(byte *)(param_2 + 0x3d) << 0x10 |
             (ulong)*(byte *)(param_2 + 0x3e) << 8 | (ulong)*(byte *)(param_2 + 0x3f)));
  do {
    puVar12 = (undefined8 *)((long)puVar15 + 2);
    if ((CONCAT11(*(undefined1 *)puVar15,*(undefined1 *)((long)puVar15 + 1)) == uVar10) &&
       (uVar2 != (uVar16 & 0xffff))) {
      uVar17 = uVar2 - uVar16;
      uVar9 = uVar17 & 7;
      puVar13 = puVar12;
      uVar20 = uVar9;
      if (6 < (~uVar16 + uVar2 & 0xffff)) {
        uVar20 = uVar17 - uVar9;
        do {
          puVar13 = puVar15;
          uVar20 = uVar20 - 8;
          *puVar13 = *(undefined8 *)((long)puVar13 + 2);
          *(undefined4 *)(puVar13 + 1) = *(undefined4 *)((long)puVar13 + 10);
          *(undefined4 *)((long)puVar13 + 0xc) = *(undefined4 *)((long)puVar13 + 0xe);
          puVar15 = puVar13 + 2;
        } while ((uVar20 & 0xffff) != 0);
        puVar13 = (undefined8 *)((long)puVar13 + 0x12);
        uVar20 = uVar17 & 7;
      }
      while (uVar20 != 0) {
        uVar9 = uVar9 - 1;
        *(undefined2 *)puVar15 = *(undefined2 *)puVar13;
        puVar15 = (undefined8 *)((long)puVar15 + 2);
        puVar13 = (undefined8 *)((long)puVar13 + 2);
        uVar20 = uVar9 & 0xffff;
      }
    }
    uVar16 = uVar16 + 1;
    puVar15 = puVar12;
  } while ((uVar16 & 0xffff) < uVar2);
LAB_0011d344:
  puVar4 = puVar8;
  puVar8 = puVar14;
LAB_0011d498:
  *(undefined1 *)
   (param_2 + ((ulong)*(byte *)(param_2 + 0x20) << 0x18 | (ulong)*(byte *)(param_2 + 0x21) << 0x10 |
               (ulong)*(byte *)(param_2 + 0x22) << 8 | (ulong)*(byte *)(param_2 + 0x23)) +
   (ulong)CONCAT11(*(undefined1 *)(param_2 + 0x2e),*(undefined1 *)(param_2 + 0x2f)) * (ulong)uVar6)
       = 0;
  puVar14 = puVar4;
LAB_0011d4d4:
  uVar19 = *puVar14;
  *puVar8 = uVar19;
LAB_0011d4dc:
  uVar19 = (ushort)*(byte *)(param_2 + 0x27) | uVar19 << 8;
  if (uVar19 != 0) {
    uVar6 = 0;
    uVar18 = (ulong)*(byte *)(param_2 + 0x3c) << 0x18 | (ulong)*(byte *)(param_2 + 0x3d) << 0x10 |
             (ulong)*(byte *)(param_2 + 0x3e) << 8 | (ulong)*(byte *)(param_2 + 0x3f);
    do {
      lVar5 = FUN_00119c10(param_1,param_2,
                           *(ushort *)(param_2 + uVar18) >> 8 | *(ushort *)(param_2 + uVar18) << 8,
                           auStack_44,1);
      if (lVar5 == 0) goto LAB_0011cf6c;
      uVar6 = uVar6 + 1;
      uVar18 = uVar18 + 2;
    } while (uVar6 < uVar19);
    uVar6 = 0;
    puVar11 = (undefined1 *)
              (param_2 +
              ((ulong)*(byte *)(param_2 + 0x40) << 0x18 | (ulong)*(byte *)(param_2 + 0x41) << 0x10 |
               (ulong)*(byte *)(param_2 + 0x42) << 8 | (ulong)*(byte *)(param_2 + 0x43)));
    do {
      if (uVar1 <= CONCAT11(*puVar11,puVar11[1])) goto LAB_0011cf6c;
      uVar6 = uVar6 + 1;
      puVar11 = puVar11 + 2;
    } while (uVar6 < uVar19);
  }
  return 0;
}

