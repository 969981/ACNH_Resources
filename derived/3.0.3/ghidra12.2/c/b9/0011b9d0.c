
/* WARNING: Type propagation algorithm not settling */

uint FUN_0011b9d0(long param_1,long param_2,ulong param_3,long param_4,ushort param_5,long param_6,
                 char param_7)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  short sVar9;
  uint uVar10;
  long lVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  long lVar16;
  ulong uVar17;
  uint uVar18;
  ushort uVar19;
  uint local_68;
  byte local_64 [4];
  
  param_3 = param_3 & 0xffffffff;
  uVar10 = FUN_001003e0(param_6);
  if (param_7 == '\0') {
    uVar19 = 1;
  }
  else {
    uVar19 = *(ushort *)(param_2 + 0x26) >> 8 | *(ushort *)(param_2 + 0x26) << 8;
    if (uVar19 == 0) {
      return 0;
    }
  }
  local_68 = 1;
  do {
    lVar11 = FUN_00119860(param_1,param_2,param_3,local_64,1);
    bVar8 = local_64[0];
    if (lVar11 == 0) {
      return 0xa219;
    }
    uVar17 = (ulong)local_64[0];
    sVar9 = FUN_00100470(param_4,lVar11,uVar17);
    if (sVar9 != 0) {
      return 0;
    }
    lVar11 = FUN_00119c10(param_1,param_2,param_3,local_64,1);
    bVar1 = local_64[0];
    if (lVar11 == 0) {
      return 0xa219;
    }
    sVar9 = FUN_00100470(param_6,lVar11,local_64[0]);
    if (sVar9 != 0) {
      return 0;
    }
    if ((param_5 == bVar8) && ((uint)bVar1 == (uVar10 & 0xffff))) {
      return local_68;
    }
    if (param_5 < bVar8) {
      return 0;
    }
    uVar18 = (uint)bVar1;
    if ((uVar10 & 0xffff) <= (uint)bVar1 && uVar18 != (uVar10 & 0xffff)) {
      return 0;
    }
    uVar4 = *(undefined1 *)(param_2 + 0x2b);
    uVar5 = *(undefined1 *)(param_2 + 0x2a);
    uVar12 = (uint)CONCAT11(uVar5,uVar4);
    if (uVar12 == 0) {
      return 0;
    }
    uVar2 = (uint)CONCAT11(*(undefined1 *)(param_2 + 0x32),*(undefined1 *)(param_2 + 0x33));
    uVar13 = 0;
    if (((int)param_3 + 1U & 0xffff) < uVar12) {
      uVar13 = (int)param_3 + 1;
    }
    uVar15 = uVar13 & 0xffff;
    if (uVar2 == uVar15) {
      return 0;
    }
    uVar14 = 0;
    uVar19 = uVar19 - 1;
    while( true ) {
      if (CONCAT11(uVar5,uVar4) <= uVar15) {
        return 0xa257;
      }
      lVar11 = param_2 + ((ulong)*(byte *)(param_2 + 0x20) << 0x18 |
                          (ulong)*(byte *)(param_2 + 0x21) << 0x10 |
                          (ulong)*(byte *)(param_2 + 0x22) << 8 | (ulong)*(byte *)(param_2 + 0x23));
      lVar16 = (ulong)CONCAT11(*(undefined1 *)(param_2 + 0x2e),*(undefined1 *)(param_2 + 0x2f)) *
               (ulong)uVar15;
      bVar6 = *(byte *)(lVar11 + lVar16);
      bVar1 = bVar6 & 3;
      *(byte *)(param_1 + 0x6079e) = bVar1;
      bVar7 = *(byte *)(lVar11 + lVar16) >> 6 & 1;
      *(byte *)(param_1 + 0x607a3) = bVar7;
      if (bVar1 == 3) {
        return 0xa257;
      }
      if ((bVar6 & 3) != 0) break;
      uVar14 = uVar14 + 1;
      if (uVar12 <= (uVar14 & 0xffff)) {
        return 0;
      }
      uVar4 = *(undefined1 *)(param_2 + 0x2b);
      uVar5 = *(undefined1 *)(param_2 + 0x2a);
      uVar3 = 0;
      if ((uVar13 + 1 & 0xffff) < (uint)CONCAT11(uVar5,uVar4)) {
        uVar3 = uVar13 + 1;
      }
      uVar15 = uVar3 & 0xffff;
      uVar13 = uVar3;
      if (uVar2 == uVar15) {
        return 0;
      }
    }
    if (4 < (local_68 & 0xffff)) {
      return 0;
    }
    if (bVar7 == 0) {
      return 0;
    }
    param_4 = param_4 + uVar17 * 2;
    param_6 = param_6 + (ulong)uVar18 * 2;
    uVar10 = uVar10 - uVar18;
    uVar18 = (uint)CONCAT11(*(undefined1 *)(param_2 + 0x2a),*(undefined1 *)(param_2 + 0x2b));
    param_5 = param_5 - bVar8;
    if (uVar18 != 0) {
      uVar12 = 0;
      do {
        uVar2 = 0;
        if (((int)param_3 + 1U & 0xffff) < uVar18) {
          uVar2 = (int)param_3 + 1;
        }
        param_3 = (ulong)uVar2;
        if ((*(byte *)(param_2 + ((ulong)*(byte *)(param_2 + 0x20) << 0x18 |
                                  (ulong)*(byte *)(param_2 + 0x21) << 0x10 |
                                  (ulong)*(byte *)(param_2 + 0x22) << 8 |
                                 (ulong)*(byte *)(param_2 + 0x23)) +
                      (ulong)CONCAT11(*(undefined1 *)(param_2 + 0x2e),
                                      *(undefined1 *)(param_2 + 0x2f)) * (param_3 & 0xffff)) & 3) !=
            0) goto LAB_0011bc5c;
        uVar12 = uVar12 + 1;
      } while ((uVar12 & 0xffff) < uVar18);
    }
    param_3 = 0;
LAB_0011bc5c:
    local_68 = local_68 + 1;
    if (uVar19 == 0) {
      return 0;
    }
  } while( true );
}

