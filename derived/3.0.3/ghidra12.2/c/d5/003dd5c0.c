
long FUN_003dd5c0(long *param_1)

{
  uint uVar1;
  int iVar2;
  byte bVar3;
  ulong uVar4;
  byte *pbVar5;
  long lVar6;
  byte bVar7;
  
  iVar2 = *(int *)((long)param_1 + 0x1c);
  if ((iVar2 < (int)param_1[3]) && (uVar1 = (int)param_1[3] + 7, 7 < (int)uVar1)) {
    uVar4 = 0;
    pbVar5 = (byte *)(param_1 + 4);
    lVar6 = 1;
    do {
      bVar3 = *pbVar5;
      if (bVar3 != 0xff) {
        if ((bVar3 & 1) == 0) {
          lVar6 = 0;
          bVar7 = 1;
LAB_003dd68c:
          *pbVar5 = bVar3 | bVar7;
          *(int *)((long)param_1 + 0x1c) = iVar2 + 1;
          return *param_1 + param_1[2] * (lVar6 + uVar4);
        }
        if ((bVar3 >> 1 & 1) == 0) {
          bVar7 = 2;
          goto LAB_003dd68c;
        }
        if ((bVar3 >> 2 & 1) == 0) {
          bVar7 = 4;
          lVar6 = 2;
          goto LAB_003dd68c;
        }
        if ((bVar3 >> 3 & 1) == 0) {
          bVar7 = 8;
          lVar6 = 3;
          goto LAB_003dd68c;
        }
        if ((bVar3 >> 4 & 1) == 0) {
          bVar7 = 0x10;
          lVar6 = 4;
          goto LAB_003dd68c;
        }
        if ((bVar3 >> 5 & 1) == 0) {
          bVar7 = 0x20;
          lVar6 = 5;
          goto LAB_003dd68c;
        }
        if ((bVar3 >> 6 & 1) == 0) {
          bVar7 = 0x40;
          lVar6 = 6;
          goto LAB_003dd68c;
        }
        if (-1 < (char)bVar3) {
          bVar7 = 0x80;
          lVar6 = 7;
          goto LAB_003dd68c;
        }
      }
      uVar4 = uVar4 + 8;
      pbVar5 = pbVar5 + 1;
    } while ((uVar1 & 0xfffffff8) != uVar4);
  }
  return 0;
}

