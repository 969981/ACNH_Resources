
uint FUN_0365baec(long param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  byte bVar6;
  byte bVar7;
  undefined8 uVar8;
  
  iVar1 = *(int *)(param_1 + 0x218c);
  if (iVar1 != 0) {
    uVar8 = FUN_0365c1e0(param_1,param_1 + 0x204c,iVar1);
    uVar8 = FUN_0365c1e0(uVar8,param_1 + 0x2098,iVar1);
    uVar8 = FUN_0365c320(uVar8,param_1 + 0x20e4,iVar1);
    FUN_0365c470(uVar8,param_1 + 0x2114,iVar1);
    *(undefined4 *)(param_1 + 0x218c) = 0;
    *(int *)(param_1 + 0x2038) = *(int *)(param_1 + 0x2038) + iVar1;
  }
  iVar1 = *(int *)(param_1 + 0x204c);
  iVar2 = *(int *)(param_1 + 0x2098);
  iVar3 = *(int *)(param_1 + 0x20e4);
  iVar4 = *(int *)(param_1 + 0x2114);
  iVar5 = *(int *)(param_1 + 0x215c);
  bVar6 = *(byte *)(param_1 + 0x2049);
  bVar7 = *(byte *)(param_1 + 0x2185);
  **(uint **)(param_1 + 8) = **(uint **)(param_1 + 8) & 0xfffffff7;
  *(byte *)(param_1 + 0x2049) = 0;
  return (uint)(iVar1 != 0) | (uint)(iVar2 != 0) << 1 | (uint)(iVar3 != 0) << 2 |
         (uint)(iVar4 != 0) << 3 | (uint)(iVar5 != 0) << 4 | (uint)bVar6 << 6 | (uint)bVar7 << 7;
}

