
void FUN_021e90a0(undefined8 *param_1,long param_2)

{
  uint uVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  ulong uVar4;
  char *pcVar5;
  ulong uVar6;
  
  if ((param_2 == 0) || (uVar1 = *(uint *)(param_2 + 0x50c), uVar1 == 0xffffffff)) {
LAB_021e9130:
    *param_1 = 0x1126;
    FUN_0277d4ac();
    return;
  }
  pcVar5 = &DAT_05454358 + (ulong)uVar1 * 0x2d8;
  if (0x10 < uVar1) {
    pcVar5 = &DAT_05454358;
  }
  if (*pcVar5 == '\0') goto LAB_021e9130;
  uVar1 = *(uint *)(pcVar5 + 0x24);
  uVar2 = 0x1126;
  switch(*(undefined4 *)(pcVar5 + 0x28)) {
  case 0:
    goto switchD_021e9108_caseD_0;
  case 1:
    goto switchD_021e9108_caseD_1;
  case 2:
    goto switchD_021e9108_caseD_2;
  case 3:
    if (uVar1 < 3) {
      uVar2 = (undefined2)(0x3a043a0539f5 >> (((ulong)uVar1 & 3) << 4));
      goto switchD_021e9108_default;
    }
    break;
  case 4:
    goto switchD_021e9108_caseD_4;
  case 5:
    break;
  default:
    goto switchD_021e9108_default;
  }
  if (uVar1 < 3) {
    uVar4 = (ulong)uVar1 << 4;
    uVar6 = 0x146392c22df;
  }
  else {
switchD_021e9108_caseD_2:
    if (uVar1 < 3) {
      uVar4 = (ulong)uVar1 << 4;
      uVar6 = 0x22e022df1126;
    }
    else {
switchD_021e9108_caseD_1:
      if (uVar1 < 3) {
        uVar4 = (ulong)uVar1 << 4;
        uVar6 = 0x3a050145392b;
      }
      else {
switchD_021e9108_caseD_0:
        if (2 < uVar1) {
switchD_021e9108_caseD_4:
          uVar3 = 0x392c;
          if (uVar1 != 1) {
            uVar3 = 0x1126;
          }
          uVar2 = 0x147;
          if (uVar1 != 2) {
            uVar2 = uVar3;
          }
          goto switchD_021e9108_default;
        }
        uVar4 = (ulong)uVar1 << 4;
        uVar6 = 0x144398e39f4;
      }
    }
  }
  uVar2 = (undefined2)(uVar6 >> (uVar4 & 0x3f));
switchD_021e9108_default:
  *(undefined2 *)param_1 = uVar2;
  *(undefined2 *)((long)param_1 + 2) = 0;
  *(undefined4 *)((long)param_1 + 4) = 0;
  FUN_0277d4ac();
  return;
}

