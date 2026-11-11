
undefined8 FUN_00425f90(undefined8 *param_1,byte param_2)

{
  int iVar1;
  byte bVar2;
  int iVar3;
  undefined8 uVar4;
  undefined1 *puVar5;
  int iVar6;
  long lVar7;
  int iVar8;
  uint uVar9;
  
  lVar7 = 0;
  do {
    bVar2 = ((undefined1 *)*param_1)[lVar7];
    if (0x20 < bVar2 || (1L << ((ulong)bVar2 & 0x3f) & 0x100002600U) == 0) {
      iVar8 = *(int *)(param_1 + 1);
      uVar4 = 0x80040200;
      if (bVar2 == param_2) {
LAB_00425fe4:
        uVar4 = 0x80040200;
        iVar6 = (int)lVar7;
        if (iVar6 < iVar8 + -2) {
          iVar3 = iVar8 + -1;
          iVar1 = iVar3;
          if (iVar6 + 1 < iVar3) {
            iVar1 = iVar6 + 1;
          }
          if (0 < iVar3) {
            iVar1 = iVar8 - iVar1;
            *(int *)(param_1 + 1) = iVar1;
            if (0 < iVar1) {
              uVar9 = -iVar6 - 2;
              if ((int)uVar9 <= -iVar8) {
                uVar9 = -iVar8;
              }
              lVar7 = 0;
              puVar5 = (undefined1 *)*param_1;
              do {
                lVar7 = (lVar7 << 0x20) + 0x100000000 >> 0x20;
                *puVar5 = puVar5[(int)~uVar9];
                puVar5 = puVar5 + 1;
              } while (lVar7 < iVar1);
            }
          }
          uVar4 = 0;
        }
      }
      return uVar4;
    }
    iVar8 = *(int *)(param_1 + 1);
    if ((long)iVar8 + -1 <= lVar7) {
      if (bVar2 != param_2) {
        return 0x80040200;
      }
      goto LAB_00425fe4;
    }
    lVar7 = lVar7 + 1;
  } while( true );
}

