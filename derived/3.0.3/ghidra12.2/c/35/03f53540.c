
void FUN_03f53540(undefined8 *param_1)

{
  byte *pbVar1;
  int iVar2;
  undefined1 uVar3;
  char cVar4;
  uint uVar5;
  uint3 uVar6;
  byte bVar7;
  int iVar8;
  uint uVar9;
  long lVar10;
  int iVar11;
  long lVar12;
  ulong uVar13;
  uint uVar14;
  undefined4 uVar15;
  
  iVar2 = *(int *)(param_1 + 0x40a);
  lVar12 = param_1[0x401];
  *(int *)(param_1 + 0x40a) = iVar2 + 0x116;
  *(uint *)((long)param_1 + 0x207c) = (uint)*(uint3 *)(lVar12 + 0x7f80);
  *(uint *)(param_1 + 0x410) = (uint)*(uint3 *)(lVar12 + 0x7f83);
  *(uint *)((long)param_1 + 0x2084) = (uint)*(uint3 *)(lVar12 + 0x7f86);
  *(uint *)(param_1 + 0x411) = (uint)*(uint3 *)(lVar12 + 0x7f89);
  *(uint *)((long)param_1 + 0x208c) = (uint)*(uint3 *)(lVar12 + 0x7f8c);
  *(uint *)(param_1 + 0x412) = (uint)*(uint3 *)(lVar12 + 0x7f8f);
  *(uint *)((long)param_1 + 0x2094) = (uint)*(uint3 *)(lVar12 + 0x7f92);
  *(uint *)(param_1 + 0x413) = (uint)*(uint3 *)(lVar12 + 0x7f95);
  *(uint *)((long)param_1 + 0x209c) = (uint)*(uint3 *)(lVar12 + 0x7f98);
  *(uint *)(param_1 + 0x414) = (uint)*(uint3 *)(lVar12 + 0x7f9b);
  *(uint *)((long)param_1 + 0x20a4) = (uint)*(uint3 *)(lVar12 + 0x7f9e);
  *(uint *)(param_1 + 0x415) = (uint)*(uint3 *)(lVar12 + 0x7fa1);
  *(uint *)((long)param_1 + 0x20ac) = (uint)*(uint3 *)(lVar12 + 0x7fa4);
  *(uint *)(param_1 + 0x416) = (uint)*(uint3 *)(lVar12 + 0x7fa7);
  *(uint *)((long)param_1 + 0x20b4) = (uint)*(uint3 *)(lVar12 + 0x7faa);
  uVar6 = *(uint3 *)(lVar12 + 0x7fad);
  *(undefined4 *)(param_1 + 0x406) = 0x620;
  *(uint *)(param_1 + 0x417) = (uint)uVar6;
  *(uint *)((long)param_1 + 0x2084) = (uint)*(ushort *)(lVar12 + 0x6627);
  iVar11 = iVar2 + 0xf3a;
  bVar7 = *(byte *)(lVar12 + 0x6620);
  *(int *)(param_1 + 0x40a) = iVar11;
  *(uint *)((long)param_1 + 0x2034) = (uint)bVar7;
  *(uint *)((long)param_1 + 0x2014) = (uint)bVar7;
  if (bVar7 != 0) {
    *(uint *)(param_1 + 0x416) = (uint)bVar7;
    uVar13 = 0x220;
    *(uint *)(param_1 + 0x411) = *(byte *)(lVar12 + 0x6629) | 0x200;
    *(uint *)((long)param_1 + 0x208c) = (uint)*(byte *)(lVar12 + 0x6625);
    pbVar1 = (byte *)(param_1 + 0x404);
    bVar7 = *(byte *)(lVar12 + 0x6626);
    *(undefined4 *)(param_1 + 0x417) = 0x220;
    *(undefined4 *)(param_1 + 0x406) = 0x220;
    *(int *)(param_1 + 0x40a) = iVar2 + 0x23e6;
    *(uint *)(param_1 + 0x412) = (uint)bVar7;
    do {
      lVar10 = param_1[0x401];
      lVar12 = uVar13 + lVar10;
      *(uint *)((long)param_1 + 0x20b4) = *(byte *)(lVar12 + 0x6004) & 0x3f;
      bVar7 = *(byte *)(lVar12 + 0x6005);
      *(undefined4 *)((long)param_1 + 0x2014) = 0x621;
      *(uint *)(param_1 + 0x413) = (uint)bVar7;
      uVar9 = *(ushort *)(lVar10 + 0x6621) | 0xff0000;
      if (-1 < *(char *)(lVar10 + 0x6622)) {
        uVar9 = (uint)*(ushort *)(lVar10 + 0x6621);
      }
      *(uint *)((long)param_1 + 0x209c) = uVar9;
      uVar3 = *(undefined1 *)(lVar10 + (uVar13 | 0x6000));
      cVar4 = *(char *)(lVar12 + 0x6001);
      *(undefined4 *)((long)param_1 + 0x2014) = 0x623;
      uVar5 = (uint)CONCAT11(cVar4,uVar3);
      uVar14 = uVar5 | 0xff0000;
      if (-1 < cVar4) {
        uVar14 = uVar5;
      }
      *(uint *)((long)param_1 + 0x209c) = uVar14 - uVar9;
      uVar9 = *(ushort *)(lVar10 + 0x6623) | 0xff0000;
      if (-1 < *(char *)(lVar10 + 0x6624)) {
        uVar9 = (uint)*(ushort *)(lVar10 + 0x6623);
      }
      *(uint *)((long)param_1 + 0x2014) = uVar9;
      *(uint *)(param_1 + 0x414) = uVar9;
      uVar14 = *(ushort *)(lVar12 + 0x6002) | 0xff0000;
      if (-1 < *(char *)(lVar12 + 0x6003)) {
        uVar14 = (uint)*(ushort *)(lVar12 + 0x6002);
      }
      *(uint *)((long)param_1 + 0x2014) = uVar14;
      *(uint *)(param_1 + 0x414) = uVar14 - uVar9;
      uVar9 = (uint)*(uint3 *)(lVar12 + 0x6007);
      *(uint *)((long)param_1 + 0x2024) = uVar9;
      *(uint *)((long)param_1 + 0x2034) = uVar9;
      *(uint *)((long)param_1 + 0x20ac) = uVar9 & 0xffff00;
      *(uint *)((long)param_1 + 0x20ac) = uVar9 & 0xffff00 | (uint)*(byte *)(lVar12 + 0x6006);
      *(uint *)(param_1 + 0x406) = *(uint *)((long)param_1 + 0x2084) & 0xfff;
      bVar7 = FUN_03f4bda8(*param_1);
      *pbVar1 = bVar7;
      *(uint *)((long)param_1 + 0x20a4) = (uint)bVar7;
      uVar9 = *(int *)((long)param_1 + 0x2024) + 1U & 0xffffff;
      *(uint *)((long)param_1 + 0x2024) = uVar9;
      *(uint *)(param_1 + 0x410) = uVar9;
      *(int *)(param_1 + 0x40a) = *(int *)(param_1 + 0x40a) + 0x3ced;
      do {
        bVar7 = FUN_03f4bda8(*param_1,uVar9 >> 0x10);
        *pbVar1 = bVar7;
        *(uint *)((long)param_1 + 0x2014) = (uint)bVar7;
        *(uint *)(param_1 + 0x415) = (uint)bVar7;
        uVar15 = 0xfffff8;
        if ((bVar7 & 0x20) != 0) {
          uVar15 = 0xfffff0;
        }
        uVar9 = *(int *)((long)param_1 + 0x2024) + 1;
        *(undefined4 *)((long)param_1 + 0x207c) = uVar15;
        *(uint *)((long)param_1 + 0x2024) = uVar9 & 0xffffff;
        bVar7 = FUN_03f4bda8(*param_1,uVar9 >> 0x10);
        *pbVar1 = bVar7;
        uVar9 = bVar7 | 0xffff00;
        if (-1 < (char)bVar7) {
          uVar9 = (uint)bVar7;
        }
        *(uint *)((long)param_1 + 0x2024) = *(int *)((long)param_1 + 0x2024) + 1U & 0xffffff;
        iVar11 = *(int *)(param_1 + 0x40a);
        *(int *)(param_1 + 0x40a) = iVar11 + 0x16d9;
        if ((*(uint *)((long)param_1 + 0x20ac) >> 6 & 1) != 0) {
          uVar9 = *(int *)((long)param_1 + 0x207c) - uVar9 & 0xffffff;
          *(int *)(param_1 + 0x40a) = iVar11 + 0x1a1c;
        }
        iVar11 = *(int *)((long)param_1 + 0x209c) + uVar9;
        *(int *)((long)param_1 + 0x2014) = iVar11;
        *(int *)((long)param_1 + 0x2094) = iVar11;
        *(int *)((long)param_1 + 0x2034) = iVar11;
        FUN_03f4e540(param_1,*(ushort *)(param_1 + 0x406) + 0x6000);
        bVar7 = FUN_03f4bda8(*param_1,*(uint *)((long)param_1 + 0x2024) >> 0x10);
        *pbVar1 = bVar7;
        uVar9 = bVar7 | 0xffff00;
        if (-1 < (char)bVar7) {
          uVar9 = (uint)bVar7;
        }
        *(uint *)((long)param_1 + 0x2024) = *(int *)((long)param_1 + 0x2024) + 1U & 0xffffff;
        iVar11 = *(int *)(param_1 + 0x40a);
        *(int *)(param_1 + 0x40a) = iVar11 + 0xf3b;
        if ((*(uint *)((long)param_1 + 0x20ac) >> 7 & 1) != 0) {
          uVar9 = *(int *)((long)param_1 + 0x207c) - uVar9 & 0xffffff;
          *(int *)(param_1 + 0x40a) = iVar11 + 0x127e;
        }
        uVar9 = *(int *)(param_1 + 0x414) + uVar9 & 0xffffff;
        *(uint *)((long)param_1 + 0x2014) = uVar9;
        *(uint *)((long)param_1 + 0x2034) = uVar9;
        FUN_03f4e540(param_1,*(ushort *)(param_1 + 0x406) + 0x6001);
        uVar9 = *(int *)((long)param_1 + 0x2014) + 0xfU & 0xffffff;
        *(uint *)((long)param_1 + 0x2014) = uVar9;
        iVar11 = *(int *)(param_1 + 0x40a) + 0x687;
        *(int *)(param_1 + 0x40a) = iVar11;
        if (uVar9 < 0xf0) {
          bVar7 = FUN_03f4bda8(*param_1,*(uint *)((long)param_1 + 0x2024) >> 0x10);
          *pbVar1 = bVar7;
          *(uint *)((long)param_1 + 0x2024) = *(int *)((long)param_1 + 0x2024) + 1U & 0xffffff;
          uVar9 = *(int *)(param_1 + 0x413) + (uint)bVar7 & 0xffffff;
          *(uint *)((long)param_1 + 0x2014) = uVar9;
          *(uint *)((long)param_1 + 0x2034) = uVar9;
          FUN_03f4e540(param_1,*(ushort *)(param_1 + 0x406) + 0x6002);
          uVar9 = *(uint *)((long)param_1 + 0x20ac) & 0xc0;
          *(uint *)((long)param_1 + 0x207c) = uVar9;
          uVar9 = ((*(uint *)((long)param_1 + 0x20b4) | *(uint *)(param_1 + 0x415) & 0xce) ^ uVar9)
                  & 0xffffff;
          *(uint *)((long)param_1 + 0x2014) = uVar9;
          *(uint *)((long)param_1 + 0x2034) = uVar9;
          FUN_03f4e540(param_1,*(ushort *)(param_1 + 0x406) + 0x6003);
          uVar9 = *(uint *)((long)param_1 + 0x208c) >> 2 & 0x3f;
          *(uint *)((long)param_1 + 0x208c) = uVar9;
          if ((*(byte *)((long)param_1 + 0x2095) & 1) != 0) {
            uVar9 = uVar9 | 0x40;
            *(uint *)((long)param_1 + 0x208c) = uVar9;
          }
          if ((*(byte *)(param_1 + 0x415) >> 5 & 1) != 0) {
            uVar9 = uVar9 | 0x80;
            *(uint *)((long)param_1 + 0x208c) = uVar9;
          }
          iVar2 = *(int *)(param_1 + 0x412);
          iVar11 = *(int *)(param_1 + 0x40a);
          iVar8 = *(int *)(param_1 + 0x406);
          *(int *)(param_1 + 0x40a) = iVar11 + 0x2958;
          *(uint *)(param_1 + 0x412) = iVar2 + 1U & 0xffffff;
          if ((iVar2 + 1U & 3) == 0) {
            uVar14 = *(uint *)(param_1 + 0x411);
            *(int *)(param_1 + 0x411) = iVar8;
            *(uint *)((long)param_1 + 0x2014) = uVar9;
            *(uint *)((long)param_1 + 0x2034) = uVar9;
            *(uint *)(param_1 + 0x406) = uVar14 & 0xfff;
            FUN_03f4e540(param_1,uVar14 & 0xfff | 0x6000);
            iVar8 = *(int *)(param_1 + 0x411);
            *(uint *)(param_1 + 0x411) = *(int *)(param_1 + 0x406) + 1U & 0xffffff;
            iVar11 = *(int *)(param_1 + 0x40a) + 0xae1;
          }
          else {
            iVar11 = iVar11 + 0x2a6e;
          }
          uVar9 = iVar8 + 4;
          *(uint *)((long)param_1 + 0x2014) = uVar9 & 0xffffff;
          *(uint *)((long)param_1 + 0x2084) = uVar9 & 0xffffff;
          iVar11 = iVar11 + 0x570;
          *(uint *)(param_1 + 0x406) = uVar9 & 0xfff;
          if ((uVar9 >> 9 & 1) != 0) {
            uVar9 = *(uint *)((long)param_1 + 0x207c);
            goto LAB_03f53c94;
          }
        }
        uVar9 = *(int *)(param_1 + 0x410) + 4U & 0xffffff;
        *(uint *)(param_1 + 0x410) = uVar9;
        *(uint *)((long)param_1 + 0x2024) = uVar9;
        uVar14 = *(int *)((long)param_1 + 0x20a4) - 1U & 0xffffff;
        *(uint *)((long)param_1 + 0x2014) = uVar14;
        *(uint *)((long)param_1 + 0x20a4) = uVar14;
        *(int *)(param_1 + 0x40a) = iVar11 + 0x9ca;
      } while (uVar14 != 0);
      uVar9 = *(int *)(param_1 + 0x417) + 0x10U & 0xfff;
      uVar13 = (ulong)uVar9;
      *(uint *)(param_1 + 0x417) = *(int *)(param_1 + 0x417) + 0x10U & 0xffffff;
      *(uint *)(param_1 + 0x406) = uVar9;
      uVar9 = *(int *)(param_1 + 0x416) - 1U & 0xffffff;
      *(uint *)((long)param_1 + 0x2014) = uVar9;
      *(uint *)(param_1 + 0x416) = uVar9;
      *(int *)(param_1 + 0x40a) = iVar11 + 0x1394;
    } while (uVar9 != 0);
    uVar9 = *(int *)(param_1 + 0x412) * 6 & 6;
    iVar11 = iVar11 + 0x17ee;
    *(int *)(param_1 + 0x40a) = iVar11;
    if (uVar9 != 0) {
      *(uint *)((long)param_1 + 0x207c) = uVar9;
      uVar14 = *(uint *)(param_1 + 0x411);
      *(uint *)((long)param_1 + 0x2014) = uVar14;
      *(uint *)(param_1 + 0x406) = uVar14 & 0xfff;
      *(uint *)((long)param_1 + 0x2034) =
           *(uint *)((long)param_1 + 0x208c) >> (ulong)uVar9 & 0xffffff;
      FUN_03f4e540(param_1,uVar14 & 0xfff | 0x6000);
      iVar11 = *(int *)(param_1 + 0x40a) + 0x79d;
    }
  }
  *(undefined4 *)((long)param_1 + 0x2034) = 0xf0;
  uVar14 = *(uint *)((long)param_1 + 0x2084) & 0xfff;
  *(uint *)(param_1 + 0x406) = uVar14;
  uVar9 = 0x7f - (*(uint *)((long)param_1 + 0x2084) >> 2) & 0xffffff;
  *(uint *)((long)param_1 + 0x2014) = uVar9;
  *(uint *)((long)param_1 + 0x207c) = uVar9;
  *(int *)(param_1 + 0x40a) = iVar11 + 0x9ca;
  do {
    FUN_03f4e540(param_1,uVar14 + 0x6001,*(undefined4 *)((long)param_1 + 0x2034));
    uVar5 = *(int *)((long)param_1 + 0x207c) + 0xffffff;
    uVar14 = *(int *)(param_1 + 0x406) + 4U & 0xfff;
    uVar9 = uVar5 & 0xffffff;
    *(uint *)(param_1 + 0x406) = uVar14;
    *(uint *)((long)param_1 + 0x2014) = uVar9;
    *(uint *)((long)param_1 + 0x207c) = uVar9;
    iVar11 = *(int *)(param_1 + 0x40a) + 0x9ca;
    *(int *)(param_1 + 0x40a) = iVar11;
  } while ((uVar5 >> 0x17 & 1) == 0);
LAB_03f53c94:
  *(int *)(param_1 + 0x40a) = iVar11 + 0x116;
  *(char *)(param_1[0x401] + 0x7f80) = (char)uVar9;
  *(char *)(param_1[0x401] + 0x7f81) = (char)(uVar9 >> 8);
  *(char *)(param_1[0x401] + 0x7f82) = (char)(uVar9 >> 0x10);
  uVar15 = *(undefined4 *)(param_1 + 0x410);
  *(char *)(param_1[0x401] + 0x7f83) = (char)uVar15;
  *(char *)(param_1[0x401] + 0x7f84) = (char)((uint)uVar15 >> 8);
  *(char *)(param_1[0x401] + 0x7f85) = (char)((uint)uVar15 >> 0x10);
  uVar15 = *(undefined4 *)((long)param_1 + 0x2084);
  *(char *)(param_1[0x401] + 0x7f86) = (char)uVar15;
  *(char *)(param_1[0x401] + 0x7f87) = (char)((uint)uVar15 >> 8);
  *(char *)(param_1[0x401] + 0x7f88) = (char)((uint)uVar15 >> 0x10);
  uVar15 = *(undefined4 *)(param_1 + 0x411);
  *(char *)(param_1[0x401] + 0x7f89) = (char)uVar15;
  *(char *)(param_1[0x401] + 0x7f8a) = (char)((uint)uVar15 >> 8);
  *(char *)(param_1[0x401] + 0x7f8b) = (char)((uint)uVar15 >> 0x10);
  uVar15 = *(undefined4 *)((long)param_1 + 0x208c);
  *(char *)(param_1[0x401] + 0x7f8c) = (char)uVar15;
  *(char *)(param_1[0x401] + 0x7f8d) = (char)((uint)uVar15 >> 8);
  *(char *)(param_1[0x401] + 0x7f8e) = (char)((uint)uVar15 >> 0x10);
  uVar15 = *(undefined4 *)(param_1 + 0x412);
  *(char *)(param_1[0x401] + 0x7f8f) = (char)uVar15;
  *(char *)(param_1[0x401] + 0x7f90) = (char)((uint)uVar15 >> 8);
  *(char *)(param_1[0x401] + 0x7f91) = (char)((uint)uVar15 >> 0x10);
  uVar15 = *(undefined4 *)((long)param_1 + 0x2094);
  *(char *)(param_1[0x401] + 0x7f92) = (char)uVar15;
  *(char *)(param_1[0x401] + 0x7f93) = (char)((uint)uVar15 >> 8);
  *(char *)(param_1[0x401] + 0x7f94) = (char)((uint)uVar15 >> 0x10);
  uVar15 = *(undefined4 *)(param_1 + 0x413);
  *(char *)(param_1[0x401] + 0x7f95) = (char)uVar15;
  *(char *)(param_1[0x401] + 0x7f96) = (char)((uint)uVar15 >> 8);
  *(char *)(param_1[0x401] + 0x7f97) = (char)((uint)uVar15 >> 0x10);
  uVar15 = *(undefined4 *)((long)param_1 + 0x209c);
  *(char *)(param_1[0x401] + 0x7f98) = (char)uVar15;
  *(char *)(param_1[0x401] + 0x7f99) = (char)((uint)uVar15 >> 8);
  *(char *)(param_1[0x401] + 0x7f9a) = (char)((uint)uVar15 >> 0x10);
  uVar15 = *(undefined4 *)(param_1 + 0x414);
  *(char *)(param_1[0x401] + 0x7f9b) = (char)uVar15;
  *(char *)(param_1[0x401] + 0x7f9c) = (char)((uint)uVar15 >> 8);
  *(char *)(param_1[0x401] + 0x7f9d) = (char)((uint)uVar15 >> 0x10);
  uVar15 = *(undefined4 *)((long)param_1 + 0x20a4);
  *(char *)(param_1[0x401] + 0x7f9e) = (char)uVar15;
  *(char *)(param_1[0x401] + 0x7f9f) = (char)((uint)uVar15 >> 8);
  *(char *)(param_1[0x401] + 0x7fa0) = (char)((uint)uVar15 >> 0x10);
  uVar15 = *(undefined4 *)(param_1 + 0x415);
  *(char *)(param_1[0x401] + 0x7fa1) = (char)uVar15;
  *(char *)(param_1[0x401] + 0x7fa2) = (char)((uint)uVar15 >> 8);
  *(char *)(param_1[0x401] + 0x7fa3) = (char)((uint)uVar15 >> 0x10);
  uVar15 = *(undefined4 *)((long)param_1 + 0x20ac);
  *(char *)(param_1[0x401] + 0x7fa4) = (char)uVar15;
  *(char *)(param_1[0x401] + 0x7fa5) = (char)((uint)uVar15 >> 8);
  *(char *)(param_1[0x401] + 0x7fa6) = (char)((uint)uVar15 >> 0x10);
  uVar15 = *(undefined4 *)(param_1 + 0x416);
  *(char *)(param_1[0x401] + 0x7fa7) = (char)uVar15;
  *(char *)(param_1[0x401] + 0x7fa8) = (char)((uint)uVar15 >> 8);
  *(char *)(param_1[0x401] + 0x7fa9) = (char)((uint)uVar15 >> 0x10);
  uVar15 = *(undefined4 *)((long)param_1 + 0x20b4);
  *(char *)(param_1[0x401] + 0x7faa) = (char)uVar15;
  *(char *)(param_1[0x401] + 0x7fab) = (char)((uint)uVar15 >> 8);
  *(char *)(param_1[0x401] + 0x7fac) = (char)((uint)uVar15 >> 0x10);
  uVar15 = *(undefined4 *)(param_1 + 0x417);
  *(char *)(param_1[0x401] + 0x7fad) = (char)uVar15;
  *(char *)(param_1[0x401] + 0x7fae) = (char)((uint)uVar15 >> 8);
  *(char *)(param_1[0x401] + 0x7faf) = (char)((uint)uVar15 >> 0x10);
  return;
}

