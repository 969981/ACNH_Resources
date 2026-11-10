
int FUN_0011d6b0(long param_1,ushort param_2,char param_3)

{
  uint uVar1;
  uint uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  ushort uVar5;
  ushort uVar6;
  short sVar7;
  short sVar8;
  long lVar9;
  ulong uVar10;
  byte *pbVar11;
  long lVar12;
  ushort uVar13;
  ushort uVar14;
  ushort *puVar15;
  undefined2 local_d0 [56];
  undefined1 auStack_54 [4];
  
  uVar10 = 0;
  pbVar11 = (byte *)(param_1 + 0x6f558);
  do {
    lVar12 = *(long *)(pbVar11 + -0x48);
    if ((lVar12 != 0) && (1 < *pbVar11 - 1)) {
      if (*pbVar11 == 3) {
        uVar2 = *(uint *)(lVar12 + 0x70);
      }
      else {
        uVar2 = (*(uint *)(lVar12 + 8) & 0xff00ff00) >> 8 | (*(uint *)(lVar12 + 8) & 0xff00ff) << 8;
        uVar2 = uVar2 >> 0x10 | uVar2 << 0x10;
      }
      if (uVar2 == 0x80020000) {
        uVar13 = CONCAT11(*(undefined1 *)(lVar12 + 0x26),*(undefined1 *)(lVar12 + 0x27));
        if (uVar13 == 0) {
          return 0;
        }
        if ((param_3 != '\x01') || (param_2 == 0)) goto LAB_0011d840;
        uVar3 = *(undefined1 *)(lVar12 + 0x2a);
        uVar4 = *(undefined1 *)(lVar12 + 0x2b);
        uVar13 = 0;
        uVar2 = (uint)(*(ushort *)(lVar12 + 0x32) >> 8) |
                (*(ushort *)(lVar12 + 0x32) & 0xff00ff) << 8;
        break;
      }
    }
    uVar10 = uVar10 + 1;
    pbVar11 = pbVar11 + 0x50;
    if (0x13 < uVar10) {
      return 0;
    }
  } while( true );
  do {
    if (*(char *)(param_1 + 0x70306) != '\0') {
      uVar14 = *(ushort *)(param_1 + 0x70300);
      uVar5 = *(ushort *)(param_1 + 0x70302);
      if ((uint)uVar14 < (uint)uVar5) {
        if ((uVar2 & 0xffff) <= (uint)uVar14) {
          return 0xb653;
        }
      }
      else if ((uint)uVar14 < (uVar2 & 0xffff)) goto LAB_0011d7bc;
      if ((uint)uVar5 < (uVar2 & 0xffff) || (uint)uVar5 == (uVar2 & 0xffff)) {
        return 0xb653;
      }
    }
LAB_0011d7bc:
    if ((*(byte *)(lVar12 + ((ulong)*(byte *)(lVar12 + 0x20) << 0x18 |
                             (ulong)*(byte *)(lVar12 + 0x21) << 0x10 |
                             (ulong)*(byte *)(lVar12 + 0x22) << 8 | (ulong)*(byte *)(lVar12 + 0x23))
                  + (ulong)CONCAT11(*(undefined1 *)(lVar12 + 0x2e),*(undefined1 *)(lVar12 + 0x2f)) *
                    ((ulong)uVar2 & 0xffff)) & 3) != 0) {
      sVar7 = FUN_00119480(param_1,lVar12,(ulong)uVar2);
      if (sVar7 < 0) {
        return (int)sVar7;
      }
    }
    uVar13 = uVar13 + 1;
    uVar1 = 0;
    if ((uVar2 + 1 & 0xffff) < (uint)CONCAT11(uVar3,uVar4)) {
      uVar1 = uVar2 + 1;
    }
    uVar2 = uVar1;
  } while (uVar13 < param_2);
  uVar13 = CONCAT11(*(undefined1 *)(lVar12 + 0x26),*(undefined1 *)(lVar12 + 0x27));
LAB_0011d840:
  local_d0[0] = 0;
  if (uVar13 != 0) {
    sVar7 = 0;
    uVar14 = 0;
    puVar15 = (ushort *)
              (lVar12 + ((ulong)*(byte *)(lVar12 + 0x3c) << 0x18 |
                         (ulong)*(byte *)(lVar12 + 0x3d) << 0x10 |
                         (ulong)*(byte *)(lVar12 + 0x3e) << 8 | (ulong)*(byte *)(lVar12 + 0x3f)));
    do {
      lVar9 = FUN_00119860(param_1,lVar12,*puVar15 >> 8 | *puVar15 << 8,auStack_54,1);
      if (lVar9 == 0) {
        return 0xa253;
      }
      sVar8 = FUN_00100410(lVar9,local_d0);
      if (sVar8 == 0) {
        sVar7 = sVar7 + 1;
        if (sVar7 < 0x33) goto LAB_0011d908;
        uVar5 = *puVar15 >> 8 | *puVar15 << 8;
        if (*(char *)(param_1 + 0x70306) != '\0') {
          uVar6 = *(ushort *)(param_1 + 0x70300);
          if (uVar6 < *(ushort *)(param_1 + 0x70302)) {
            if (uVar5 <= uVar6) {
              return 0xb653;
            }
          }
          else if (uVar6 < uVar5) goto LAB_0011d92c;
          if (*(ushort *)(param_1 + 0x70302) <= uVar5) {
            return 0xb653;
          }
        }
LAB_0011d92c:
        sVar8 = FUN_00119480(param_1,lVar12);
        if (sVar8 < 0) {
          return (int)sVar8;
        }
      }
      else {
        FUN_00100350(local_d0,lVar9);
        sVar7 = 1;
LAB_0011d908:
        puVar15 = puVar15 + 1;
      }
      uVar14 = uVar14 + 1;
    } while (uVar14 < uVar13);
  }
  return 0;
}

