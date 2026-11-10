
/* WARNING: Removing unreachable block (ram,0x0011acb8) */

int FUN_0011aab0(long param_1,long param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
                char param_6)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  uint uVar4;
  byte bVar5;
  ushort uVar6;
  ushort uVar7;
  int iVar8;
  short sVar9;
  undefined4 uVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  undefined8 uVar14;
  uint uVar15;
  int iVar16;
  byte *pbVar17;
  long lVar18;
  ulong uVar19;
  uint uVar20;
  undefined1 *puVar21;
  ulong uVar22;
  undefined1 local_6c [4];
  ushort local_68 [2];
  ushort local_64 [2];
  
  local_6c[0] = 0;
  if (param_6 != '\x01') {
    uVar19 = 0;
    pbVar17 = (byte *)(param_1 + 0x6f558);
    do {
      lVar18 = *(long *)(pbVar17 + -0x48);
      if ((lVar18 != 0) && (1 < *pbVar17 - 1)) {
        if (*pbVar17 == 3) {
          uVar11 = *(uint *)(lVar18 + 0x70);
        }
        else {
          uVar11 = (*(uint *)(lVar18 + 8) & 0xff00ff00) >> 8 |
                   (*(uint *)(lVar18 + 8) & 0xff00ff) << 8;
          uVar11 = uVar11 >> 0x10 | uVar11 << 0x10;
        }
        if (uVar11 == 0x80030000) goto LAB_0011abc4;
      }
      uVar19 = uVar19 + 1;
      pbVar17 = pbVar17 + 0x50;
      if (0x13 < uVar19) {
        return 0x9815;
      }
    } while( true );
  }
  uVar19 = 0;
  pbVar17 = (byte *)(param_1 + 0x6f558);
  do {
    lVar18 = *(long *)(pbVar17 + -0x48);
    if ((lVar18 != 0) && (1 < *pbVar17 - 1)) {
      if (*pbVar17 == 3) {
        uVar11 = *(uint *)(lVar18 + 0x70);
      }
      else {
        uVar11 = (*(uint *)(lVar18 + 8) & 0xff00ff00) >> 8 | (*(uint *)(lVar18 + 8) & 0xff00ff) << 8
        ;
        uVar11 = uVar11 >> 0x10 | uVar11 << 0x10;
      }
      if (uVar11 == 0x80020000) break;
    }
    uVar19 = uVar19 + 1;
    pbVar17 = pbVar17 + 0x50;
    if (0x13 < uVar19) {
      return 0x9815;
    }
  } while( true );
LAB_0011abc4:
  if (param_6 == '\x01') {
    uVar20 = (uint)(*(ushort *)(lVar18 + 0x32) >> 8) | (*(ushort *)(lVar18 + 0x32) & 0xff00ff) << 8;
    uVar11 = (uint)*(byte *)(param_2 + 0x15d) * 2 + (uint)*(byte *)(param_2 + 0x15c) * 2 + 5;
    uVar4 = (uint)CONCAT11(*(undefined1 *)(lVar18 + 0x2e),*(undefined1 *)(lVar18 + 0x2f));
    uVar15 = 1;
    uVar12 = uVar11 - uVar4;
    if (uVar11 < uVar4 || uVar12 == 0) {
LAB_0011ac2c:
      if (*(char *)(param_1 + 0x70306) == '\0') {
        sVar9 = 0;
        do {
          sVar9 = sVar9 + 1;
        } while ((int)sVar9 < (int)uVar15);
        goto LAB_0011af0c;
      }
      uVar6 = *(ushort *)(param_1 + 0x70300);
      uVar7 = *(ushort *)(param_1 + 0x70302);
      sVar9 = 0;
      uVar11 = uVar20;
      do {
        if ((uint)uVar6 < (uint)uVar7) {
          if ((uVar11 & 0xffff) <= (uint)uVar6) {
            return 0xb653;
          }
LAB_0011ac7c:
          if ((uint)uVar7 < (uVar11 & 0xffff) || (uint)uVar7 == (uVar11 & 0xffff)) {
            return 0xb653;
          }
        }
        else if ((uVar11 & 0xffff) <= (uint)uVar6) goto LAB_0011ac7c;
        sVar9 = sVar9 + 1;
        uVar12 = 0;
        if ((uint)CONCAT11(*(undefined1 *)(lVar18 + 0x2a),*(undefined1 *)(lVar18 + 0x2b)) !=
            (uVar11 + 1 & 0xffff)) {
          uVar12 = uVar11 + 1;
        }
        uVar11 = uVar12;
      } while ((int)sVar9 < (int)uVar15);
    }
    else {
      uVar12 = uVar12 & 0xffff;
      iVar8 = uVar4 - 1;
      iVar13 = 0;
      if (iVar8 != 0) {
        iVar13 = (int)uVar12 / iVar8;
      }
      iVar16 = 1;
      if (uVar12 != iVar13 * iVar8) {
        iVar16 = 2;
      }
      uVar15 = iVar16 + iVar13 & 0xffff;
      if (uVar15 != 0) goto LAB_0011ac2c;
    }
LAB_0011af18:
    sVar9 = FUN_00119480(param_1,lVar18,uVar20);
    if (sVar9 < 0) {
      return (int)sVar9;
    }
  }
  else {
    uVar11 = (uint)CONCAT11(*(undefined1 *)(lVar18 + 0x26),*(undefined1 *)(lVar18 + 0x27));
    uVar12 = (uint)CONCAT11(*(undefined1 *)(lVar18 + 0x2a),*(undefined1 *)(lVar18 + 0x2b));
    if (uVar12 <= uVar11) {
      return 0xa015;
    }
    uVar20 = 0;
    while ((*(byte *)(lVar18 + ((ulong)*(byte *)(lVar18 + 0x20) << 0x18 |
                                (ulong)*(byte *)(lVar18 + 0x21) << 0x10 |
                                (ulong)*(byte *)(lVar18 + 0x22) << 8 |
                               (ulong)*(byte *)(lVar18 + 0x23)) +
                     (ulong)uVar20 *
                     (ulong)CONCAT11(*(undefined1 *)(lVar18 + 0x2e),*(undefined1 *)(lVar18 + 0x2f)))
           & 3) != 0) {
      uVar20 = uVar20 + 1 & 0xffff;
      if (uVar12 <= uVar20) {
        return 0xa215;
      }
    }
    if (uVar11 != 0) {
      lVar1 = param_2 + 0xc;
      uVar10 = FUN_001003e0(lVar1);
      sVar9 = FUN_0011b280(param_1,lVar18,0,lVar1,uVar10,local_64,local_68,local_6c);
      iVar13 = (int)sVar9;
      if (iVar13 < 0) {
        return iVar13;
      }
      if (iVar13 != 0) {
        uVar22 = (ulong)local_64[0];
        if (local_64[0] <= local_68[0]) {
          puVar21 = (undefined1 *)
                    (lVar18 + ((ulong)*(byte *)(lVar18 + 0x3c) << 0x18 |
                               (ulong)*(byte *)(lVar18 + 0x3d) << 0x10 |
                               (ulong)*(byte *)(lVar18 + 0x3e) << 8 |
                              (ulong)*(byte *)(lVar18 + 0x3f)) + uVar22 * 2);
          do {
            uVar6 = CONCAT11(*puVar21,puVar21[1]);
            uVar10 = FUN_001003e0(lVar1);
            sVar9 = FUN_0011b9d0(param_1,lVar18,(ulong)uVar6,lVar1,uVar10,param_2 + 0x7c,0);
            iVar13 = (int)sVar9;
            if (iVar13 < 0) {
              return iVar13;
            }
            if (iVar13 == 1) {
              if (CONCAT11(*(undefined1 *)(lVar18 + 0x2a),*(undefined1 *)(lVar18 + 0x2b)) <= uVar6)
              {
                return 0xa215;
              }
              pbVar17 = (byte *)(lVar18 + ((ulong)*(byte *)(lVar18 + 0x20) << 0x18 |
                                           (ulong)*(byte *)(lVar18 + 0x21) << 0x10 |
                                           (ulong)*(byte *)(lVar18 + 0x22) << 8 |
                                          (ulong)*(byte *)(lVar18 + 0x23)) +
                                (ulong)CONCAT11(*(undefined1 *)(lVar18 + 0x2e),
                                                *(undefined1 *)(lVar18 + 0x2f)) * (ulong)uVar6);
              bVar5 = *pbVar17;
              *(char *)(param_1 + 0x6079e) = (char)(bVar5 & 3);
              uVar11 = ((uint)(*(ushort *)(pbVar17 + 1) >> 8) |
                       (*(ushort *)(pbVar17 + 1) & 0xff00ff) << 8) >> 7;
              *(short *)(param_1 + 0x6079a) = (short)uVar11;
              uVar12 = ((uint)(*(ushort *)(pbVar17 + 3) >> 8) |
                       (*(ushort *)(pbVar17 + 3) & 0xff00ff) << 8) >> 7;
              *(short *)(param_1 + 0x6079c) = (short)uVar12;
              if (1 < (bVar5 & 3) - 1) {
                return 0xa215;
              }
              if ((*(ushort *)(param_2 + 4) == uVar11) && (*(ushort *)(param_2 + 6) == uVar12)) {
                return 0xa115;
              }
            }
            uVar11 = (int)uVar22 + 1;
            uVar22 = (ulong)uVar11;
            puVar21 = puVar21 + 2;
            local_64[0] = (ushort)uVar11;
          } while ((uVar11 & 0xffff) <= (uint)local_68[0]);
        }
      }
    }
LAB_0011af0c:
    if (param_6 == '\x01') goto LAB_0011af18;
  }
  lVar1 = param_2 + 0xc;
  lVar2 = param_2 + 0x7c;
  sVar9 = FUN_00100410(lVar1,lVar2);
  if (sVar9 == 0) {
    uVar14 = 0;
LAB_0011afc0:
    *(undefined1 *)(param_2 + 0x15d) = 0;
  }
  else {
    uVar11 = FUN_001003e0(lVar1);
    uVar12 = FUN_001003e0(lVar2);
    if ((uVar11 & 0xffff) == (uVar12 & 0xffff)) {
      FUN_00114550(lVar1,param_1 + 0x61ea0,uVar11);
      sVar9 = FUN_00100410(lVar2,param_1 + 0x61ea0);
      if (sVar9 == 0) {
        uVar14 = 1;
        goto LAB_0011afc0;
      }
    }
    uVar14 = 0;
  }
  sVar9 = FUN_0011a1e0(param_1,lVar18,uVar20,param_2,param_3,param_4,param_5,uVar14);
  iVar13 = (int)sVar9;
  if (-1 < iVar13) {
    if ((*(byte *)(param_1 + 0x6f4b2) >> 2 & 1) != 0) {
      *(undefined4 *)(param_1 + 0x60830) = 0;
      *(undefined4 *)(param_1 + 0x608c0) = 0;
      *(undefined4 *)(param_1 + 0x60950) = 0;
      *(undefined4 *)(param_1 + 0x609e0) = 0;
      *(undefined4 *)(param_1 + 0x60a70) = 0;
      *(undefined4 *)(param_1 + 0x60b00) = 0;
      *(undefined4 *)(param_1 + 0x60b90) = 0;
      *(undefined4 *)(param_1 + 0x60c20) = 0;
      *(undefined4 *)(param_1 + 0x60cb0) = 0;
      *(undefined4 *)(param_1 + 0x60d40) = 0;
      *(undefined4 *)(param_1 + 0x60dd0) = 0;
      *(undefined4 *)(param_1 + 0x60e60) = 0;
      *(undefined4 *)(param_1 + 0x60ef0) = 0;
      *(undefined4 *)(param_1 + 0x60f80) = 0;
      *(undefined4 *)(param_1 + 0x61010) = 0;
      *(undefined4 *)(param_1 + 0x610a0) = 0;
      *(undefined4 *)(param_1 + 0x61130) = 0;
      *(undefined4 *)(param_1 + 0x611c0) = 0;
      *(undefined4 *)(param_1 + 0x61250) = 0;
      *(undefined4 *)(param_1 + 0x612e0) = 0;
      *(undefined4 *)(param_1 + 0x61370) = 0;
      *(undefined4 *)(param_1 + 0x61400) = 0;
      *(undefined4 *)(param_1 + 0x61490) = 0;
      *(undefined4 *)(param_1 + 0x61520) = 0;
      *(undefined4 *)(param_1 + 0x615b0) = 0;
      *(undefined4 *)(param_1 + 0x61640) = 0;
      *(undefined4 *)(param_1 + 0x616d0) = 0;
      *(undefined4 *)(param_1 + 0x61760) = 0;
      *(undefined4 *)(param_1 + 0x617f0) = 0;
      *(undefined4 *)(param_1 + 0x61880) = 0;
      *(undefined4 *)(param_1 + 0x61910) = 0;
      *(undefined4 *)(param_1 + 0x619a0) = 0;
      *(undefined4 *)(param_1 + 0x61a30) = 0;
      *(undefined4 *)(param_1 + 0x61ac0) = 0;
      *(undefined4 *)(param_1 + 0x61b50) = 0;
      *(undefined4 *)(param_1 + 0x61be0) = 0;
      *(undefined4 *)(param_1 + 0x61c70) = 0;
      *(undefined4 *)(param_1 + 0x61d00) = 0;
      *(undefined4 *)(param_1 + 0x61d90) = 0;
      *(undefined4 *)(param_1 + 0x61e20) = 0;
      *(undefined8 *)(param_1 + 0x61e28) = 0;
    }
    uVar11 = (*(uint *)(lVar18 + 8) & 0xff00ff00) >> 8 | (*(uint *)(lVar18 + 8) & 0xff00ff) << 8;
    if ((uVar11 >> 0x10 | uVar11 << 0x10) == 0x80020000) {
      plVar3 = (long *)(param_1 + (long)(short)uVar19 * 0x50 + 0x6f550);
      if (*plVar3 != 0) {
        *(undefined1 *)(*plVar3 + 0x2050) = 0;
        *(undefined1 *)(*plVar3 + 0x2051) = 0;
        *(undefined2 *)(*plVar3 + 0x1fe0) = 0;
        *(undefined2 *)(*plVar3 + 0x1fe2) = 0;
        return 0;
      }
    }
    iVar13 = 0;
  }
  return iVar13;
}

