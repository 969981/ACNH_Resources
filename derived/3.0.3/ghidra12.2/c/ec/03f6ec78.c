
void FUN_03f6ec78(undefined1 *param_1,ushort param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined1 uVar5;
  long lVar6;
  
  uVar5 = (undefined1)param_3;
  switch(param_2) {
  case 0xf1:
    uVar2 = param_3 & 0xff;
    uVar3 = (byte)param_1[0x149] ^ param_3;
    if ((uVar3 & 7) != 0) {
      uVar4 = *(uint *)(param_1 + 0x4c);
      if (param_1[0x3c] == '\x03') {
        lVar6 = *(long *)(param_1 + 0x40);
      }
      else {
        lVar6 = *(long *)(param_1 + 0x40);
        uVar4 = uVar4 - (*(int *)(param_1 + 0x38) +
                        *(int *)(lVar6 + 0x28) * (int)*(short *)(param_1 + 0x34));
      }
      iVar1 = 0;
      if ((long)*(int *)(lVar6 + 0x34) != 0) {
        iVar1 = (int)((long)(-(ulong)(uVar4 >> 0x1f) & 0xffffff0000000000 | (ulong)uVar4 << 8) /
                     (long)*(int *)(lVar6 + 0x34));
      }
      if (((uVar3 & 1) != 0) && (*(undefined4 *)(param_1 + 8) = 0, (param_3 & 1) != 0)) {
        param_1[0x155] = 0;
        *(int *)(param_1 + 4) = *(int *)(param_1 + 0x2c) + iVar1;
        *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_1 + 0xc);
      }
      if ((((uVar3 & 0xff) >> 1 & 1) != 0) &&
         (*(undefined4 *)(param_1 + 0x14) = 0, (uVar2 >> 1 & 1) != 0)) {
        param_1[0x156] = 0;
        *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x2c) + iVar1;
        *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_1 + 0x18);
      }
      if ((((uVar3 & 0xff) >> 2 & 1) != 0) &&
         (*(undefined4 *)(param_1 + 0x20) = 0, (uVar2 >> 2 & 1) != 0)) {
        param_1[0x157] = 0;
        *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x2c) + iVar1;
        *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_1 + 0x24);
      }
      FUN_03f6eed0(param_1);
    }
    param_1[0x149] = uVar5;
    if ((uVar2 >> 4 & 1) != 0) {
      *(undefined2 *)(param_1 + 0x14c) = 0;
    }
    if ((uVar2 >> 5 & 1) != 0) {
      *(undefined2 *)(param_1 + 0x14e) = 0;
    }
    param_1[0x3d] = (byte)(param_3 >> 7) & 1;
    return;
  default:
    goto switchD_03f6ecb8_caseD_f2;
  case 0xf3:
    FUN_03f84d8c(param_1 + 0x10058,param_1[0x14a] & 0x7f,param_3);
    return;
  case 0xf4:
    *param_1 = uVar5;
    break;
  case 0xf5:
    param_1[1] = uVar5;
    break;
  case 0xf6:
    param_1[2] = uVar5;
    break;
  case 0xf7:
    param_1[3] = uVar5;
    break;
  case 0xfa:
    iVar1 = (param_3 - 1 & 0xff) * 8 + 8;
    *(int *)(param_1 + 0xc) = iVar1;
    if ((*(int *)(param_1 + 8) != 0) && (*(int *)(param_1 + 8) != iVar1)) {
      *(int *)(param_1 + 8) = iVar1;
LAB_03f6ed8c:
      FUN_03f6eed0(param_1,*(int *)(param_1 + 0x4c) -
                           (*(int *)(param_1 + 0x38) +
                           *(int *)(*(long *)(param_1 + 0x40) + 0x28) *
                           (int)*(short *)(param_1 + 0x34)));
    }
    goto switchD_03f6ecb8_caseD_f2;
  case 0xfb:
    iVar1 = (param_3 - 1 & 0xff) * 8 + 8;
    *(int *)(param_1 + 0x18) = iVar1;
    if ((*(int *)(param_1 + 0x14) != 0) && (*(int *)(param_1 + 0x14) != iVar1)) {
      *(int *)(param_1 + 0x14) = iVar1;
      goto LAB_03f6ed8c;
    }
    goto switchD_03f6ecb8_caseD_f2;
  case 0xfc:
    iVar1 = (param_3 - 1 & 0xff) + 1;
    *(int *)(param_1 + 0x24) = iVar1;
    if ((*(int *)(param_1 + 0x20) != 0) && (*(int *)(param_1 + 0x20) != iVar1)) {
      *(int *)(param_1 + 0x20) = iVar1;
      goto LAB_03f6ed8c;
    }
switchD_03f6ecb8_caseD_f2:
    param_1[(ulong)param_2 + 0x58] = uVar5;
    break;
  case 0xfd:
  case 0xfe:
  case 0xff:
    break;
  }
  return;
}

