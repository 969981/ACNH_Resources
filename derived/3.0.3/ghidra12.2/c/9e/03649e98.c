
void FUN_03649e98(long param_1,undefined4 param_2,uint param_3,int param_4)

{
  undefined1 *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined1 uVar5;
  byte bVar6;
  uint uVar7;
  long lVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  ulong uVar13;
  
  uVar12 = param_3 - 1 & 0xfffffff8;
  iVar10 = param_4;
  iVar11 = param_4;
  switch(param_3 & 7) {
  case 0:
    do {
      FUN_03648de0(param_1,param_2,uVar12);
      uVar2 = *(uint *)(param_1 + 0xf315);
      uVar12 = uVar12 + 8;
      uVar9 = *(uint *)(param_1 + 0x44);
      *(undefined4 *)(param_1 + 0xf319) = *(undefined4 *)(param_1 + 0xf31d);
      *(uint *)(param_1 + 0xf31d) = uVar2;
      uVar3 = *(uint *)(&DAT_04197304 + ((ulong)(uVar2 >> 0xc) & 0xf) * 4);
      uVar7 = (uVar9 & 0x1f) + 1;
      iVar10 = *(int *)(&DAT_04197304 + ((ulong)(uVar2 >> 0x14) & 0xf) * 4);
      uVar4 = *(uint *)(&DAT_04197304 + ((ulong)(uVar2 >> 8) & 0xf) * 4);
      iVar11 = *(int *)(&DAT_04197304 + ((ulong)(uVar2 >> 0x10) & 0xf) * 4);
      *(undefined8 *)(param_1 + 0xf300) = *(undefined8 *)(param_1 + 0xf308);
      *(uint *)(param_1 + 0xf308) = uVar3 | iVar10 << 1;
      *(uint *)(param_1 + 0xf30c) = uVar4 | iVar11 << 1;
      uVar7 = uVar9 & 0x7be0 | uVar7 & 0x1f | (uVar9 ^ uVar7 * 0x20) & 0x400;
      *(uint *)(param_1 + 0x44) = uVar7;
      iVar10 = param_4 + -1;
      if (param_4 < 2) {
        return;
      }
LAB_03649fb0:
      *(byte *)(param_1 + 0xf314) = (byte)(uVar7 >> 10) & 3;
      param_4 = iVar10 + -2;
      if (iVar10 < 3) {
        return;
      }
switchD_03649ee0_caseD_3:
      lVar8 = *(long *)(param_1 + 0x90);
      if (*(int *)(lVar8 + 0x298) == 5) {
        if (*(int *)(lVar8 + 0x1d20) != 1) {
          if (((*(byte *)(param_1 + 0x39) >> 5 & 1) == 0) && (*(uint *)(lVar8 + 0x1d8c) < 8)) {
            FUN_03650e08();
          }
          else {
            FUN_03650ad4(lVar8 + 0x1d08);
          }
          lVar8 = *(long *)(param_1 + 0x90);
          goto LAB_0364a030;
        }
        bVar6 = *(byte *)(*(long *)(*(long *)(lVar8 + 0x1d08) +
                                    ((ulong)(*(uint *)(param_1 + 0x44) >> 8) & 3) * 0x10 + 0x11c0) +
                         ((ulong)*(uint *)(param_1 + 0x44) & 0xff)) >> 6;
      }
      else {
LAB_0364a030:
        uVar7 = *(uint *)(param_1 + 0x44);
        bVar6 = *(byte *)(*(long *)(lVar8 + (ulong)*(byte *)(param_1 + 0xf314) * 0x40 + 0xe00) +
                          ((ulong)(uVar7 >> 4) & 0x38 | (ulong)(uVar7 >> 2) & 7) + 0x3c0) >>
                (ulong)(uVar7 >> 4 & 4 | uVar7 & 2) & 3;
      }
      iVar10 = param_4 + -2;
      *(byte *)(param_1 + 0xf315) = bVar6;
      if (param_4 < 3) {
        return;
      }
switchD_03649ee0_caseD_5:
      lVar8 = *(long *)(param_1 + 0x90);
      if (*(int *)(lVar8 + 0x1d20) == 1) {
        uVar9 = *(uint *)(param_1 + 0x44);
        uVar7 = *(int *)(lVar8 + 0x1d88) << 0x12 |
                (*(byte *)(*(long *)(*(long *)(lVar8 + 0x1d08) + ((ulong)(uVar9 >> 4) & 0x30) +
                                    0x11c0) + ((ulong)uVar9 & 0xff)) & 0x3f) << 0xc;
        puVar1 = (undefined1 *)
                 (*(long *)(lVar8 + 0x7c0) +
                 (ulong)((uVar9 >> 0xc & 7 |
                          (uint)*(byte *)(*(long *)(lVar8 + (ulong)*(byte *)(param_1 + 0xf314) *
                                                            0x40 + 0xe00) + ((ulong)uVar9 & 0x3ff))
                          << 4 | uVar7) & *(int *)(lVar8 + 0x2b0) - 1U));
        *(undefined1 *)(param_1 + 0xf316) = *puVar1;
        *(undefined1 *)(param_1 + 0xf317) = puVar1[8];
      }
      else {
        if (((*(byte *)(param_1 + 0x39) >> 5 & 1) == 0) && (*(uint *)(lVar8 + 0x1d8c) < 8)) {
          FUN_03650e08();
        }
        else {
          FUN_03650ad4(lVar8 + 0x1d08);
        }
        lVar8 = *(long *)(param_1 + 0x90);
        uVar13 = ((ulong)*(byte *)(param_1 + 0x39) & 0x10) << 8 |
                 (ulong)(*(uint *)(param_1 + 0x44) >> 0xc) & 7 |
                 (ulong)*(byte *)(*(long *)(lVar8 + (ulong)*(byte *)(param_1 + 0xf314) * 0x40 +
                                           0xe00) + ((ulong)*(uint *)(param_1 + 0x44) & 0x3ff)) << 4
        ;
        uVar7 = (uint)uVar13;
        (**(code **)(lVar8 + 0x1c28))(lVar8,uVar13);
        *(undefined1 *)(param_1 + 0xf316) =
             *(undefined1 *)
              (*(long *)(*(long *)(param_1 + 0x90) + (uVar13 >> 4 & 0x1f0) + 0xc00) +
              (uVar13 & 0xff));
      }
      iVar11 = iVar10 + -2;
      *(uint *)(param_1 + 0xf310) = uVar7;
      if (iVar10 < 3) {
        return;
      }
switchD_03649ee0_caseD_7:
      lVar8 = *(long *)(param_1 + 0x90);
      if (*(int *)(lVar8 + 0x1d20) == 1) {
        uVar7 = *(uint *)(param_1 + 0x44);
        uVar9 = *(int *)(lVar8 + 0x1d88) << 0x12 |
                (*(byte *)(*(long *)(*(long *)(lVar8 + 0x1d08) + ((ulong)(uVar7 >> 4) & 0x30) +
                                    0x11c0) + ((ulong)uVar7 & 0xff)) & 0x3f) << 0xc;
        puVar1 = (undefined1 *)
                 (*(long *)(lVar8 + 0x7c0) +
                 (ulong)((uVar7 >> 0xc & 7 |
                          (uint)*(byte *)(*(long *)(lVar8 + (ulong)*(byte *)(param_1 + 0xf314) *
                                                            0x40 + 0xe00) + ((ulong)uVar7 & 0x3ff))
                          << 4 | uVar9) & *(int *)(lVar8 + 0x2b0) - 1U));
        *(undefined1 *)(param_1 + 0xf316) = *puVar1;
        uVar5 = puVar1[8];
        *(uint *)(param_1 + 0xf310) = uVar9;
      }
      else {
        if (((*(byte *)(param_1 + 0x39) >> 5 & 1) == 0) && (*(uint *)(lVar8 + 0x1d8c) < 8)) {
          FUN_03650e08();
        }
        else {
          FUN_03650ad4(lVar8 + 0x1d08);
        }
        uVar7 = *(int *)(param_1 + 0xf310) + 8;
        uVar5 = *(undefined1 *)
                 (*(long *)(*(long *)(param_1 + 0x90) + (ulong)(uVar7 >> 8) * 0x10 + 0xc00) +
                 ((ulong)uVar7 & 0xff));
      }
      param_4 = iVar11 + -1;
      *(undefined1 *)(param_1 + 0xf317) = uVar5;
    } while (1 < iVar11);
    break;
  case 1:
    uVar7 = *(uint *)(param_1 + 0x44);
    goto LAB_03649fb0;
  case 2:
    if (1 < param_4) {
      param_4 = param_4 + -1;
      goto switchD_03649ee0_caseD_3;
    }
    break;
  case 3:
    goto switchD_03649ee0_caseD_3;
  case 4:
    if (1 < param_4) {
      iVar10 = param_4 + -1;
      goto switchD_03649ee0_caseD_5;
    }
    break;
  case 5:
    goto switchD_03649ee0_caseD_5;
  case 6:
    if (1 < param_4) {
      iVar11 = param_4 + -1;
      goto switchD_03649ee0_caseD_7;
    }
    break;
  case 7:
    goto switchD_03649ee0_caseD_7;
  }
  return;
}

