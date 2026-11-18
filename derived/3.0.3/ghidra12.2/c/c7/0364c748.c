
void FUN_0364c748(long *param_1,ulong param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  
  if ((param_3 >> 7 & 1) == 0) {
    uVar3 = *(uint *)((long)param_1 + 0xc);
    if (uVar3 < 5) {
      uVar1 = uVar3 & 0x1f;
      uVar3 = uVar3 + 1;
      *(uint *)(param_1 + 1) = *(uint *)(param_1 + 1) | (param_3 & 1) << (ulong)uVar1;
      *(uint *)((long)param_1 + 0xc) = uVar3;
    }
  }
  else {
    lVar4 = *param_1;
    *(undefined4 *)((long)param_1 + 0x14) = 0;
    param_1[1] = 0;
    FUN_03653cb0(lVar4 + 0x2a8,0xc000,*(undefined8 *)(lVar4 + 0x5c0),0x4000,
                 *(int *)(lVar4 + 0x778) - 1U & *(int *)((long)param_1 + 0x2c) << 0xe,
                 *(char *)(lVar4 + 0x5b8) == '\0');
    uVar3 = *(uint *)((long)param_1 + 0xc);
  }
  if (uVar3 != 5) {
    return;
  }
  switch((int)((param_2 & 0xffffffff) >> 0xc)) {
  case 8:
  case 9:
    uVar3 = *(uint *)(param_1 + 1);
    *(uint *)((long)param_1 + 0x1c) = uVar3;
    FUN_03657d08(*param_1,uVar3 & 3);
    *(uint *)(param_1 + 2) = uVar3 >> 4 & 1;
    break;
  case 10:
  case 0xb:
    uVar3 = *(uint *)(param_1 + 1);
    *(uint *)(param_1 + 4) = uVar3;
    if ((char)param_1[3] != '\0') {
      uVar1 = uVar3 & 0x1f;
      if ((int)param_1[2] == 0) {
        lVar4 = *param_1;
        uVar2 = uVar1 << 0xc;
        uVar1 = uVar3 & 0x1e;
        FUN_03653cb0(lVar4 + 0x2a8,0x1000,*(undefined8 *)(lVar4 + 0x300),0x1000,
                     *(int *)(lVar4 + 0x6c8) - 1U & (uVar2 | 0x1000),
                     *(char *)(lVar4 + 0x2f8) == '\0');
      }
      lVar4 = *param_1;
      FUN_03653cb0(lVar4 + 0x2a8,0,*(undefined8 *)(lVar4 + 0x2c0),0x1000,
                   *(int *)(lVar4 + 0x6b8) - 1U & uVar1 << 0xc,*(char *)(lVar4 + 0x2b8) == '\0');
    }
    break;
  case 0xc:
  case 0xd:
    if (((char)param_1[3] != '\0') && ((int)param_1[2] == 1)) {
      lVar4 = *param_1;
      FUN_03653cb0(lVar4 + 0x2a8,0x1000,*(undefined8 *)(lVar4 + 0x300),0x1000,
                   *(int *)(lVar4 + 0x6c8) - 1U & (int)param_1[1] << 0xc & 0x1f000,
                   *(char *)(lVar4 + 0x2f8) == '\0');
    }
    goto switchD_0364c7f4_default;
  case 0xe:
  case 0xf:
    *(int *)(param_1 + 5) = (int)param_1[1];
    break;
  default:
    goto switchD_0364c7f4_default;
  }
  FUN_0364c5b8(param_1);
switchD_0364c7f4_default:
  param_1[1] = 0;
  return;
}

