
void FUN_00281720(long param_1,uint param_2,uint *param_3,uint *param_4)

{
  uint uVar1;
  ulong uVar2;
  ushort uVar3;
  uint uVar4;
  bool bVar5;
  
  if ((param_2 >> (ulong)(*(byte *)(param_1 + 0x3e) & 0x1f) & 1) != 0) {
    FUN_002814e0(param_1,*(byte *)(param_1 + 0x3e),*param_4);
    uVar4 = 1 << (ulong)(*(byte *)(param_1 + 0x3e) & 0x1f);
    param_2 = param_2 - uVar4;
    *param_4 = uVar4 | *param_4;
  }
  if (*(short *)(param_1 + 0x3c) != 0) {
    uVar3 = 1;
    do {
      if (uVar3 == 0) {
        return;
      }
      uVar4 = 0;
      bVar5 = false;
      do {
        uVar1 = 1 << (ulong)(uVar4 & 0x1f);
        if (((uVar1 & param_2) != 0) &&
           (uVar2 = FUN_002814e0(param_1,uVar4,*param_4), (uVar2 & 1) != 0)) {
          param_2 = param_2 - uVar1;
          bVar5 = true;
          *param_4 = *param_4 | uVar1;
        }
        uVar3 = *(ushort *)(param_1 + 0x3c);
        uVar4 = uVar4 + 1;
      } while ((uVar4 & 0xff) < (uint)uVar3);
    } while (bVar5);
    if (uVar3 != 0) {
      uVar4 = 0;
      do {
        uVar1 = 1 << (ulong)(uVar4 & 0x1f);
        if ((uVar1 & param_2) != 0) {
          *param_3 = *param_3 | uVar1;
        }
        uVar4 = uVar4 + 1;
      } while ((uVar4 & 0xff) < (uint)uVar3);
    }
  }
  return;
}

