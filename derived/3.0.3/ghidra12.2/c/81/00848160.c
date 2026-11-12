
/* WARNING: Restarted to delay deadcode elimination for space: stack */

uint FUN_00848160(long param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  ulong uVar5;
  ulong uVar6;
  uint local_60;
  uint local_5c [11];
  uint local_30;
  uint uStack_2c;
  uint local_28;
  uint uStack_24;
  
  uVar3 = nn::os::GetSystemTick();
  local_30 = (uVar3 ^ uVar3 >> 0x1e) * 0x6c078965 + 1;
  uVar3 = 0;
  uStack_2c = (local_30 ^ local_30 >> 0x1e) * 0x6c078965 + 2;
  local_28 = (uStack_2c ^ uStack_2c >> 0x1e) * 0x6c078965 + 3;
  do {
    local_5c[(int)uVar3] = uVar3;
    uVar3 = uVar3 + 1;
  } while (uVar3 < 10);
  local_60 = 10;
  iVar4 = 10;
  uStack_24 = (local_28 ^ local_28 >> 0x1e) * 0x6c078965 + 4;
  do {
    if ((int)local_60 < 1) break;
    uVar3 = local_30 ^ local_30 << 0xb;
    local_30 = uStack_2c;
    uStack_2c = local_28;
    uVar1 = uVar3 >> 8 ^ uStack_24 >> 0x13 ^ uVar3 ^ uStack_24;
    local_28 = uStack_24;
    uVar5 = (ulong)uVar1 * (ulong)local_60;
    uVar6 = uVar5 >> 0x20;
    uVar3 = local_60 - 1;
    if (9 < (uint)(uVar5 >> 0x20)) {
      uVar6 = 0;
    }
    if (9 < uVar3) {
      uVar3 = 0;
    }
    uVar2 = local_5c[uVar6];
    local_5c[uVar6] = local_5c[(int)uVar3];
    uVar3 = local_60 - 1;
    if (9 < uVar3) {
      uVar3 = 0;
    }
    local_5c[(int)uVar3] = uVar2;
    local_60 = local_60 - 1;
    if (uVar2 == 0xffffffff) break;
    if (*(int *)(PTR_DAT_04bc3a80 + 0x38) == -0x10e0fba8) {
LAB_00848214:
      if (uVar2 != *(uint *)(param_1 + 0x2b4)) {
        return uVar2;
      }
    }
    else if (*(int *)(param_1 + 0x178) == 0) {
      if (4 < uVar2 - 5 && uVar2 != 2) goto LAB_00848214;
    }
    else if (5 < uVar2 - 4 && uVar2 != 0) goto LAB_00848214;
    iVar4 = iVar4 + -1;
    uStack_24 = uVar1;
  } while (iVar4 != 0);
  return *(uint *)(param_1 + 0x2b4);
}

