
undefined8 FUN_02733b20(long param_1,undefined8 *param_2)

{
  uint uVar1;
  int *piVar2;
  byte *pbVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  byte bVar7;
  
  piVar2 = (int *)*param_2;
  uVar1 = 0;
  do {
    *piVar2 = 0;
    pbVar3 = (byte *)(param_1 + ((long)((ulong)uVar1 << 0x20) >> 0x1b));
    bVar7 = *pbVar3;
    if (bVar7 != 0) {
      iVar4 = 0;
      iVar5 = 0;
      do {
        while ((bVar7 & 0xc0) == 0x80) {
          iVar6 = iVar5 + -1;
          if (iVar5 < 1) {
            return 1;
          }
LAB_02733b70:
          pbVar3 = pbVar3 + 1;
          bVar7 = *pbVar3;
          iVar5 = iVar6;
          if (bVar7 == 0) {
            if (iVar6 != 0) {
              return 1;
            }
            goto LAB_02733bc4;
          }
        }
        if (iVar5 != 0) {
          return 1;
        }
        iVar4 = iVar4 + 1;
        *piVar2 = iVar4;
        bVar7 = *pbVar3;
        if ((char)bVar7 < '\0') {
          if ((bVar7 & 0xe0) == 0xc0) {
            iVar6 = 1;
          }
          else {
            if ((bVar7 & 0xf0) != 0xe0) {
              return 1;
            }
            iVar6 = 2;
          }
          goto LAB_02733b70;
        }
        pbVar3 = pbVar3 + 1;
        bVar7 = *pbVar3;
        iVar5 = 0;
      } while (bVar7 != 0);
    }
LAB_02733bc4:
    piVar2 = (int *)*param_2;
    if (10 < *piVar2) {
      return 1;
    }
    uVar1 = uVar1 + 1;
    if (uVar1 == 8) {
      return 0;
    }
  } while( true );
}

