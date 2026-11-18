
void FUN_036849a0(long param_1,long param_2)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  uint uVar4;
  ulong uVar5;
  uint uVar6;
  float fVar7;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  uVar3 = (ulong)uVar1;
  fVar7 = 0.0;
  if (0x14 < uVar1) {
    uVar3 = 0;
  }
  if (uVar1 < 2) {
    uVar4 = *(uint *)(param_2 + 0x234);
    if (0x7f < uVar4) {
      uVar4 = 0x80;
    }
    if (uVar4 == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = 0;
      uVar6 = 0;
      do {
        uVar5 = (ulong)uVar6;
        uVar6 = uVar6 + 1;
        if (uVar1 == *(byte *)(param_2 + ((long)(uVar5 << 0x20) >> 0x1e) + 0x36) >> 4) {
          iVar2 = iVar2 + 1;
        }
      } while (uVar4 != uVar6);
    }
    uVar5 = (ulong)uVar1;
    if (0x14 < uVar1) {
      uVar5 = 0;
    }
    uVar1 = (uint)*(ushort *)(param_2 + uVar5 * 2) - iVar2;
    if (4 < (int)uVar1) {
      if (uVar1 < 10) {
        fVar7 = 0.5;
      }
      else {
        fVar7 = 0.75;
      }
      fVar7 = (float)(int)uVar1 * fVar7;
    }
  }
  **(float **)(param_1 + 8) =
       ((float)*(ushort *)(param_2 + uVar3 * 2) - fVar7) + **(float **)(param_1 + 8);
  return;
}

