
void FUN_0364a280(long param_1,undefined4 param_2,uint param_3,int param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined1 uVar5;
  long lVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  ulong uVar11;
  
  uVar10 = param_3 - 1 & 0xfffffff8;
  iVar8 = param_4;
  iVar9 = param_4;
  switch(param_3 & 7) {
  case 0:
    do {
      FUN_03648de0(param_1,param_2,uVar10);
      uVar2 = *(uint *)(param_1 + 0xf315);
      uVar10 = uVar10 + 8;
      uVar1 = *(uint *)(param_1 + 0x44);
      *(undefined4 *)(param_1 + 0xf319) = *(undefined4 *)(param_1 + 0xf31d);
      *(uint *)(param_1 + 0xf31d) = uVar2;
      uVar3 = *(uint *)(&DAT_04197304 + ((ulong)(uVar2 >> 0xc) & 0xf) * 4);
      uVar7 = (uVar1 & 0x1f) + 1;
      iVar8 = *(int *)(&DAT_04197304 + ((ulong)(uVar2 >> 0x14) & 0xf) * 4);
      uVar4 = *(uint *)(&DAT_04197304 + ((ulong)(uVar2 >> 8) & 0xf) * 4);
      iVar9 = *(int *)(&DAT_04197304 + ((ulong)(uVar2 >> 0x10) & 0xf) * 4);
      *(undefined8 *)(param_1 + 0xf300) = *(undefined8 *)(param_1 + 0xf308);
      *(uint *)(param_1 + 0xf308) = uVar3 | iVar8 << 1;
      *(uint *)(param_1 + 0xf30c) = uVar4 | iVar9 << 1;
      uVar7 = uVar1 & 0x7be0 | uVar7 & 0x1f | (uVar1 ^ uVar7 * 0x20) & 0x400;
      *(uint *)(param_1 + 0x44) = uVar7;
      iVar8 = param_4 + -1;
      if (param_4 < 2) {
        return;
      }
LAB_0364a398:
      *(byte *)(param_1 + 0xf314) = (byte)(uVar7 >> 10) & 3;
      param_4 = iVar8 + -2;
      if (iVar8 < 3) {
        return;
      }
switchD_0364a2c8_caseD_3:
      iVar8 = param_4 + -2;
      uVar7 = *(uint *)(param_1 + 0x44);
      *(byte *)(param_1 + 0xf315) =
           *(byte *)(*(long *)(*(long *)(param_1 + 0x90) + (ulong)*(byte *)(param_1 + 0xf314) * 0x40
                              + 0xe00) + ((ulong)(uVar7 >> 4) & 0x38 | (ulong)(uVar7 >> 2) & 7) +
                    0x3c0) >> (ulong)(uVar7 >> 4 & 4 | uVar7 & 2) & 3;
      if (param_4 < 3) {
        return;
      }
switchD_0364a2c8_caseD_5:
      lVar6 = *(long *)(param_1 + 0x90);
      uVar11 = ((ulong)*(byte *)(param_1 + 0x39) & 0x10) << 8 |
               (ulong)(*(uint *)(param_1 + 0x44) >> 0xc) & 7 |
               (ulong)*(byte *)(*(long *)(lVar6 + (ulong)*(byte *)(param_1 + 0xf314) * 0x40 + 0xe00)
                               + ((ulong)*(uint *)(param_1 + 0x44) & 0x3ff)) << 4;
      (**(code **)(lVar6 + 0x1c28))(lVar6,uVar11);
      iVar9 = iVar8 + -2;
      uVar5 = *(undefined1 *)
               (*(long *)(*(long *)(param_1 + 0x90) + (uVar11 >> 4 & 0x1f0) + 0xc00) +
               (uVar11 & 0xff));
      *(int *)(param_1 + 0xf310) = (int)uVar11;
      *(undefined1 *)(param_1 + 0xf316) = uVar5;
      if (iVar8 < 3) {
        return;
      }
switchD_0364a2c8_caseD_7:
      param_4 = iVar9 + -1;
      uVar7 = *(int *)(param_1 + 0xf310) + 8;
      *(undefined1 *)(param_1 + 0xf317) =
           *(undefined1 *)
            (*(long *)(*(long *)(param_1 + 0x90) + (ulong)(uVar7 >> 8) * 0x10 + 0xc00) +
            ((ulong)uVar7 & 0xff));
    } while (1 < iVar9);
    break;
  case 1:
    uVar7 = *(uint *)(param_1 + 0x44);
    goto LAB_0364a398;
  case 2:
    if (1 < param_4) {
      param_4 = param_4 + -1;
      goto switchD_0364a2c8_caseD_3;
    }
    break;
  case 3:
    goto switchD_0364a2c8_caseD_3;
  case 4:
    if (1 < param_4) {
      iVar8 = param_4 + -1;
      goto switchD_0364a2c8_caseD_5;
    }
    break;
  case 5:
    goto switchD_0364a2c8_caseD_5;
  case 6:
    if (1 < param_4) {
      iVar9 = param_4 + -1;
      goto switchD_0364a2c8_caseD_7;
    }
    break;
  case 7:
    goto switchD_0364a2c8_caseD_7;
  }
  return;
}

