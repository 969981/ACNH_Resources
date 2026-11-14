
void FUN_0186170c(long param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  undefined4 uVar6;
  int iVar7;
  
  uVar6 = (**(code **)(*(long *)(param_1 + 0x4d8) + (ulong)*(byte *)(param_1 + 0x4ec) * 8))
                    (param_1 + 0x4d8);
  *(undefined4 *)(param_1 + 0x4e0) = uVar6;
  iVar7 = (**(code **)(*(long *)(param_1 + 0x4c0) + (ulong)*(byte *)(param_1 + 0x4d4) * 8))
                    (param_1 + 0x4c0);
  iVar2 = *(int *)(param_1 + 0x4d0);
  *(int *)(param_1 + 0x4c8) = iVar7;
  iVar3 = *(int *)(param_1 + 0x4cc);
  iVar1 = iVar3;
  if (iVar3 <= iVar2) {
    iVar1 = iVar2;
    iVar2 = iVar3;
  }
  if (iVar2 < iVar7 && iVar7 < iVar1) {
    iVar2 = *(int *)(param_1 + 0x4e8);
    iVar3 = *(int *)(param_1 + 0x4e4);
    iVar1 = iVar3;
    if (iVar3 <= iVar2) {
      iVar1 = iVar2;
      iVar2 = iVar3;
    }
    if ((iVar2 < *(int *)(param_1 + 0x4e0)) && (*(int *)(param_1 + 0x4e0) < iVar1)) {
      iVar7 = (**(code **)(*(long *)(param_1 + 0x4f0) + (ulong)*(byte *)(param_1 + 0x504) * 8))
                        (param_1 + 0x4f0);
      iVar2 = *(int *)(param_1 + 0x500);
      *(int *)(param_1 + 0x4f8) = iVar7;
      iVar3 = *(int *)(param_1 + 0x4fc);
      iVar1 = iVar3;
      if (iVar3 <= iVar2) {
        iVar1 = iVar2;
        iVar2 = iVar3;
      }
      if ((iVar2 < iVar7) && (iVar7 < iVar1)) {
        return;
      }
      *(int *)(param_1 + 0x4f8) = iVar3;
      uVar4 = *(uint *)(param_1 + 1000);
      *(undefined4 *)(param_1 + 1000) = *(undefined4 *)(param_1 + 0x3ec);
      uVar4 = uVar4 ^ uVar4 << 0xb;
      *(undefined4 *)(param_1 + 0x3ec) = *(undefined4 *)(param_1 + 0x3f0);
      uVar5 = *(uint *)(param_1 + 0x3f4);
      *(uint *)(param_1 + 0x3f0) = uVar5;
      uVar4 = uVar4 >> 8 ^ uVar5 >> 0x13 ^ uVar4 ^ uVar5;
      *(uint *)(param_1 + 0x3f4) = uVar4;
      *(uint *)(param_1 + 0x4b4) = uVar4;
      return;
    }
  }
  if (*(int *)(param_1 + 0x280) == 1) {
    return;
  }
  FUN_03ebb160(param_1 + 0x278,1);
  return;
}

