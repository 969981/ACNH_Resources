
void FUN_03649b80(long param_1,undefined4 param_2,int param_3,int param_4)

{
  int iVar1;
  undefined1 *puVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  undefined1 uVar8;
  long lVar9;
  ulong uVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  
  iVar12 = param_3 + -1;
LAB_03649bc8:
  iVar13 = 0;
  do {
    switch(param_3 + iVar13 & 7) {
    case 0:
      goto switchD_03649c08_caseD_0;
    case 1:
      *(byte *)(param_1 + 0xf314) = (byte)(*(uint *)(param_1 + 0x44) >> 10) & 3;
      break;
    case 3:
      lVar9 = *(long *)(param_1 + 0x90);
      uVar10 = (ulong)*(uint *)(param_1 + 0x44);
      if (*(int *)(lVar9 + 0x298) == 5) {
        if (*(int *)(lVar9 + 0x1d20) == 1) {
          *(byte *)(param_1 + 0xf315) =
               *(byte *)(*(long *)(*(long *)(lVar9 + 0x1d08) +
                                   ((ulong)(*(uint *)(param_1 + 0x44) >> 8) & 3) * 0x10 + 0x11c0) +
                        (uVar10 & 0xff)) >> 6;
          break;
        }
        if (((*(byte *)(param_1 + 0x39) >> 5 & 1) == 0) && (*(uint *)(lVar9 + 0x1d8c) < 8)) {
          FUN_03650e08();
        }
        else {
          FUN_03650ad4(lVar9 + 0x1d08);
        }
        lVar9 = *(long *)(param_1 + 0x90);
        uVar10 = (ulong)*(uint *)(param_1 + 0x44);
      }
      uVar3 = (uint)(uVar10 >> 4);
      *(byte *)(param_1 + 0xf315) =
           *(byte *)(*(long *)(lVar9 + (ulong)*(byte *)(param_1 + 0xf314) * 0x40 + 0xe00) +
                     (ulong)(uVar3 & 0x38 | (uint)uVar10 >> 2 & 7) + 0x3c0) >>
           (ulong)(uVar3 & 4 | (uint)uVar10 & 2) & 3;
      break;
    case 5:
      FUN_03649a34(param_1);
      break;
    case 7:
      lVar9 = *(long *)(param_1 + 0x90);
      if (*(int *)(lVar9 + 0x298) == 5) {
        if (*(int *)(lVar9 + 0x1d20) == 1) {
          uVar3 = *(uint *)(param_1 + 0x44);
          uVar11 = *(int *)(lVar9 + 0x1d88) << 0x12 |
                   (*(byte *)(*(long *)(*(long *)(lVar9 + 0x1d08) + ((ulong)(uVar3 >> 4) & 0x30) +
                                       0x11c0) + ((ulong)uVar3 & 0xff)) & 0x3f) << 0xc;
          puVar2 = (undefined1 *)
                   (*(long *)(lVar9 + 0x7c0) +
                   (ulong)((uVar3 >> 0xc & 7 |
                            (uint)*(byte *)(*(long *)(lVar9 + (ulong)*(byte *)(param_1 + 0xf314) *
                                                              0x40 + 0xe00) + ((ulong)uVar3 & 0x3ff)
                                           ) << 4 | uVar11) & *(int *)(lVar9 + 0x2b0) - 1U));
          *(undefined1 *)(param_1 + 0xf316) = *puVar2;
          uVar8 = puVar2[8];
          *(uint *)(param_1 + 0xf310) = uVar11;
          *(undefined1 *)(param_1 + 0xf317) = uVar8;
          break;
        }
        if (((*(byte *)(param_1 + 0x39) >> 5 & 1) == 0) && (*(uint *)(lVar9 + 0x1d8c) < 8)) {
          FUN_03650e08();
        }
        else {
          FUN_03650ad4(lVar9 + 0x1d08);
        }
        lVar9 = *(long *)(param_1 + 0x90);
      }
      uVar3 = *(int *)(param_1 + 0xf310) + 8;
      *(undefined1 *)(param_1 + 0xf317) =
           *(undefined1 *)
            (*(long *)(lVar9 + (ulong)(uVar3 >> 8) * 0x10 + 0xc00) + ((ulong)uVar3 & 0xff));
    }
    iVar13 = iVar13 + 1;
    if (param_4 == iVar13) {
      FUN_03649270(param_1,param_2,iVar12,iVar13);
      return;
    }
  } while( true );
switchD_03649c08_caseD_0:
  iVar1 = iVar13 + 1;
  FUN_03649270(param_1,param_2,iVar12,iVar1);
  uVar11 = *(uint *)(param_1 + 0x44);
  iVar12 = iVar1 + iVar12;
  param_3 = iVar1 + param_3;
  uVar4 = *(uint *)(param_1 + 0xf315);
  *(undefined4 *)(param_1 + 0xf319) = *(undefined4 *)(param_1 + 0xf31d);
  *(undefined8 *)(param_1 + 0xf300) = *(undefined8 *)(param_1 + 0xf308);
  *(uint *)(param_1 + 0xf31d) = uVar4;
  uVar3 = (uVar11 & 0x1f) + 1;
  uVar5 = *(uint *)(&DAT_04197304 + ((ulong)(uVar4 >> 0xc) & 0xf) * 4);
  iVar1 = *(int *)(&DAT_04197304 + ((ulong)(uVar4 >> 0x14) & 0xf) * 4);
  uVar6 = *(uint *)(&DAT_04197304 + ((ulong)(uVar4 >> 8) & 0xf) * 4);
  iVar7 = *(int *)(&DAT_04197304 + ((ulong)(uVar4 >> 0x10) & 0xf) * 4);
  *(uint *)(param_1 + 0x44) = uVar11 & 0x7be0 | uVar3 & 0x1f | (uVar11 ^ uVar3 * 0x20) & 0x400;
  param_4 = (param_4 + -1) - iVar13;
  *(uint *)(param_1 + 0xf308) = uVar5 | iVar1 << 1;
  *(uint *)(param_1 + 0xf30c) = uVar6 | iVar7 << 1;
  if (param_4 == 0) {
    return;
  }
  goto LAB_03649bc8;
}

