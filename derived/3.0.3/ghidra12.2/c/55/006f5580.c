
undefined8 FUN_006f5580(long *param_1,long *param_2)

{
  long lVar1;
  ushort uVar2;
  undefined *puVar3;
  ushort *puVar4;
  ulong uVar5;
  long lVar6;
  ushort *puVar7;
  ushort *puVar8;
  int iVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  
  (**(code **)(*param_1 + 0x38))();
  puVar4 = (ushort *)(**(code **)(*param_1 + 0x10))(param_1);
  uVar5 = (**(code **)(*param_1 + 0x20))(param_1);
  (**(code **)(*param_1 + 0x38))(param_1);
  (**(code **)(*param_2 + 0x18))(param_2);
  puVar3 = PTR_DAT_04bb2da0;
  lVar10 = 0;
  do {
    if (*(short *)(param_2[1] + lVar10 * 2) == 0) {
LAB_006f5640:
      iVar9 = (int)lVar10;
joined_r0x006f5640:
      if (iVar9 == 0) {
        return 1;
      }
      uVar12 = 0;
      uVar11 = 0;
      puVar8 = puVar4;
      do {
        (**(code **)(*param_2 + 0x18))(param_2);
        lVar6 = param_2[1];
        lVar10 = 0;
        do {
          if (*(short *)(lVar6 + lVar10 * 2) == 0) goto LAB_006f56d4;
          lVar1 = lVar6 + lVar10 * 2;
          if (*(short *)(lVar1 + 2) == 0) {
            lVar10 = lVar10 + 1;
            goto LAB_006f56d4;
          }
          if (*(short *)(lVar1 + 4) == 0) {
            lVar10 = lVar10 + 2;
            goto LAB_006f56d4;
          }
          lVar10 = lVar10 + 3;
        } while (lVar10 != 0x80001);
        lVar10 = 0;
LAB_006f56d4:
        puVar7 = (ushort *)puVar3;
        if ((int)uVar12 <= (int)lVar10 && -1 < (int)uVar12) {
          puVar7 = (ushort *)(lVar6 + uVar11 * 2);
        }
        uVar2 = *puVar7;
        if ((uVar2 & 0xfffe) == 0xe) {
          return 0;
        }
        puVar7 = puVar8;
        if ((puVar8 != (ushort *)0x0) && (uVar2 != 0)) {
          puVar7 = puVar8 + 1;
          if (puVar4 + ((uVar5 & 0xffffffff) - 1) < puVar7) {
            return 0;
          }
          *puVar8 = uVar2;
        }
        uVar12 = uVar11 + 1;
        uVar11 = uVar12 & 0xffffffff;
        puVar8 = puVar7;
        if (iVar9 == (int)uVar12) {
          return 1;
        }
      } while( true );
    }
    lVar6 = param_2[1] + lVar10 * 2;
    if (*(short *)(lVar6 + 2) == 0) {
      lVar10 = lVar10 + 1;
      goto LAB_006f5640;
    }
    if (*(short *)(lVar6 + 4) == 0) {
      iVar9 = (int)lVar10 + 2;
      goto joined_r0x006f5640;
    }
    lVar10 = lVar10 + 3;
    if (lVar10 == 0x80001) {
      return 1;
    }
  } while( true );
}

