
void FUN_00658f20(long param_1,byte *param_2)

{
  int iVar1;
  uint uVar2;
  ulong uVar3;
  uint *puVar4;
  byte *pbVar5;
  ulong uVar6;
  int iVar7;
  
  FUN_00651ca0(param_1 + 0x18);
  *(undefined4 *)(param_1 + 0x1e0) = 0;
  uVar3 = (ulong)*(uint *)(param_2 + 0x100);
  if ((int)*(uint *)(param_2 + 0x100) < 1) {
    uVar2 = 0;
    iVar1 = 4;
  }
  else {
    uVar2 = 0;
    puVar4 = (uint *)(param_1 + 0x11c);
    pbVar5 = param_2 + 1;
    iVar1 = 4;
    uVar6 = uVar3;
    do {
      if (pbVar5[-1] == 0xb) {
        *puVar4 = uVar2;
        uVar2 = uVar2 + (uint)*pbVar5 * 0x10;
        iVar1 = 0x10;
      }
      puVar4 = puVar4 + 1;
      pbVar5 = pbVar5 + 8;
      uVar6 = uVar6 - 1;
    } while (uVar6 != 0);
    puVar4 = (uint *)(param_1 + 0x11c);
    pbVar5 = param_2;
    do {
      if (*pbVar5 != 0xb) {
        *puVar4 = uVar2;
        if ((ulong)*pbVar5 == 8) {
          iVar7 = 4;
        }
        else {
          iVar7 = (uint)pbVar5[1] * (uint)(byte)(&DAT_04146cb8)[*pbVar5];
        }
        uVar2 = uVar2 + iVar7 + 3 & 0xfffffffc;
      }
      puVar4 = puVar4 + 1;
      uVar3 = uVar3 - 1;
      pbVar5 = pbVar5 + 8;
    } while (uVar3 != 0);
  }
  *(uint *)(param_1 + 0x1b0) = (iVar1 + uVar2) - 1 & -iVar1;
  iVar1 = FUN_00651e80(param_2);
  *(bool *)(param_1 + 0x1e5) = iVar1 == 0;
  return;
}

