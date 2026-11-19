
/* WARNING: Removing unreachable block (ram,0x03b69a00) */

void FUN_03b6991c(long param_1,uint param_2)

{
  uint uVar1;
  ulong uVar2;
  int iVar3;
  int iVar4;
  ulong uVar5;
  
  if (*(int *)(param_1 + 0xc0) == 0) {
    uVar5 = *(ulong *)(param_1 + 0x58);
    if (*(int *)(param_1 + 0x48) == 6) {
      iVar3 = (int)(uVar5 >> 3) * 0xe;
    }
    else if (*(int *)(param_1 + 0x48) == 2) {
      uVar2 = nn::audio::GetSampleByteSize(2);
      iVar3 = 0;
      if (uVar2 != 0) {
        iVar3 = (int)(uVar5 / uVar2);
      }
    }
    else {
      iVar3 = 0;
    }
    iVar4 = 0;
    if (iVar3 != 0) {
      iVar4 = (int)param_2 / iVar3;
    }
  }
  else {
    uVar1 = *(uint *)(param_1 + 0xb4);
    if (uVar1 <= param_2) {
      *(undefined4 *)(param_1 + 0xc0) = 0;
      uVar5 = *(ulong *)(param_1 + 0x58);
      if (*(int *)(param_1 + 0x48) == 6) {
        iVar3 = (int)(uVar5 >> 3) * 0xe;
      }
      else {
        iVar3 = 0;
        if (*(int *)(param_1 + 0x48) == 2) {
          uVar2 = nn::audio::GetSampleByteSize(2);
          iVar3 = 0;
          if (uVar2 != 0) {
            iVar3 = (int)(uVar5 / uVar2);
          }
        }
      }
      iVar4 = 0;
      if (iVar3 != 0) {
        iVar4 = (int)param_2 / iVar3;
      }
      *(int *)(param_1 + 0xa8) = iVar4 * iVar3;
      if (*(char *)(param_1 + 0xb2) < '\x01') {
        *(char *)(param_1 + 0xb2) = '\x01';
        return;
      }
      return;
    }
    uVar5 = *(ulong *)(param_1 + 0x58);
    if (*(int *)(param_1 + 0x48) == 6) {
      iVar3 = (int)(uVar5 >> 3) * 0xe;
      iVar4 = 0;
      if (iVar3 != 0) {
        iVar4 = (int)uVar1 / iVar3;
      }
    }
    else if (*(int *)(param_1 + 0x48) == 2) {
      uVar2 = nn::audio::GetSampleByteSize(2);
      iVar3 = 0;
      if (uVar2 != 0) {
        iVar3 = (int)(uVar5 / uVar2);
      }
      iVar4 = 0;
      if (iVar3 != 0) {
        iVar4 = (int)uVar1 / iVar3;
      }
    }
    else {
      iVar3 = 0;
      iVar4 = 0;
    }
  }
  *(int *)(param_1 + 0xa8) = iVar4 * iVar3;
  return;
}

