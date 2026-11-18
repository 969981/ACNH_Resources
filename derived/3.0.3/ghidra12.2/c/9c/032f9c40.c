
undefined4 FUN_032f9c40(short *param_1,short param_2)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  ushort uVar4;
  ulong uVar5;
  
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[10] = param_2;
  iVar1 = *(int *)(param_1 + 0xc);
  do {
    if (iVar1 == 7) {
      return *(undefined4 *)(param_1 + 6);
    }
    uVar3 = 1;
    switch(*(undefined4 *)(param_1 + 0xc)) {
    case 0:
      break;
    case 1:
      uVar4 = param_1[10];
      if (uVar4 - 0x7b < 0xffffffe6) {
        uVar2 = *(uint *)(param_1 + 8);
        if (uVar2 != 0) {
          uVar5 = (ulong)(uVar2 - 1);
          if (5 < uVar2) {
            uVar5 = 0;
          }
          if (param_1[uVar5] == 0x6e) {
            param_1[uVar5] = *(short *)(&DAT_04102e38 + (long)*(int *)(param_1 + 0xe) * 2);
            uVar4 = param_1[10];
          }
        }
        if ((uVar4 == 10) && (*param_1 != 0)) {
          param_1[6] = 0;
          param_1[7] = 0;
          param_1[8] = 0;
          param_1[9] = 0;
          uVar3 = 7;
          param_1[0] = 0;
          param_1[1] = 0;
          param_1[2] = 0;
          param_1[3] = 0;
          param_1[4] = 0;
          break;
        }
        uVar5 = (ulong)*(uint *)(param_1 + 8);
        if (4 < *(uint *)(param_1 + 8)) {
          uVar5 = 0;
        }
        param_1[uVar5] = uVar4;
        *(int *)(param_1 + 6) = *(int *)(param_1 + 8) + 1;
        *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
        goto LAB_032f9da0;
      }
      uVar3 = 2;
      break;
    case 2:
      uVar3 = FUN_032f9dd0(param_1);
      break;
    case 3:
      uVar5 = (ulong)*(uint *)(param_1 + 8);
      if (4 < *(uint *)(param_1 + 8)) {
        uVar5 = 0;
      }
      param_1[uVar5] = param_1[10];
      iVar1 = *(int *)(param_1 + 8);
      *(int *)(param_1 + 8) = iVar1 + 1;
      if ((iVar1 == 0) && (uVar5 = FUN_032fa0c0(param_1), (uVar5 & 1) != 0)) goto LAB_032f9d98;
      uVar3 = 4;
      break;
    case 4:
      uVar3 = FUN_032f9ed4(param_1);
      break;
    case 5:
      uVar3 = FUN_032f9fb0(param_1);
      break;
    case 6:
      *(int *)(param_1 + 6) = *(int *)(param_1 + 8) + -2;
      FUN_032fa0c0(param_1);
LAB_032f9d98:
      *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_1 + 6);
LAB_032f9da0:
      uVar3 = 7;
      break;
    default:
      goto switchD_032f9ccc_default;
    }
    *(undefined4 *)(param_1 + 0xc) = uVar3;
switchD_032f9ccc_default:
    iVar1 = *(int *)(param_1 + 0xc);
  } while( true );
}

