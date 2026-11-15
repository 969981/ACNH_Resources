
void FUN_021e8ae0(undefined2 *param_1,long param_2)

{
  uint uVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  ulong uVar4;
  undefined *puVar5;
  ulong uVar6;
  
  if ((param_2 == 0) || (uVar1 = *(uint *)(param_2 + 0x508), uVar1 == 0xffffffff)) {
    uVar2 = 0x1126;
    goto switchD_021e8b34_default;
  }
  puVar5 = &DAT_053fe348 + (ulong)uVar1 * 0xba0;
  uVar2 = 0x1126;
  if (9 < uVar1) {
    puVar5 = &DAT_053fe348;
  }
  switch(*(undefined4 *)(puVar5 + 0x524)) {
  case 0:
    goto switchD_021e8b34_caseD_0;
  case 1:
    goto switchD_021e8b34_caseD_1;
  case 2:
    goto switchD_021e8b34_caseD_2;
  case 3:
    if (*(uint *)(puVar5 + 0x51c) < 3) {
      uVar2 = (undefined2)(0x3a043a0539f5 >> (((ulong)*(uint *)(puVar5 + 0x51c) & 3) << 4));
      goto switchD_021e8b34_default;
    }
    break;
  case 4:
    goto switchD_021e8b34_caseD_4;
  case 5:
    break;
  default:
    goto switchD_021e8b34_default;
  }
  if (*(uint *)(puVar5 + 0x51c) < 3) {
    uVar4 = (ulong)*(uint *)(puVar5 + 0x51c) << 4;
    uVar6 = 0x146392c22df;
  }
  else {
switchD_021e8b34_caseD_2:
    if (*(uint *)(puVar5 + 0x51c) < 3) {
      uVar4 = (ulong)*(uint *)(puVar5 + 0x51c) << 4;
      uVar6 = 0x22e022df1126;
    }
    else {
switchD_021e8b34_caseD_1:
      if (*(uint *)(puVar5 + 0x51c) < 3) {
        uVar4 = (ulong)*(uint *)(puVar5 + 0x51c) << 4;
        uVar6 = 0x3a050145392b;
      }
      else {
switchD_021e8b34_caseD_0:
        if (2 < *(uint *)(puVar5 + 0x51c)) {
switchD_021e8b34_caseD_4:
          uVar3 = 0x392c;
          if (*(int *)(puVar5 + 0x51c) != 1) {
            uVar3 = 0x1126;
          }
          uVar2 = 0x147;
          if (*(int *)(puVar5 + 0x51c) != 2) {
            uVar2 = uVar3;
          }
          goto switchD_021e8b34_default;
        }
        uVar4 = (ulong)*(uint *)(puVar5 + 0x51c) << 4;
        uVar6 = 0x144398e39f4;
      }
    }
  }
  uVar2 = (undefined2)(uVar6 >> (uVar4 & 0x3f));
switchD_021e8b34_default:
  *param_1 = uVar2;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  FUN_0277d4ac();
  return;
}

