
/* WARNING: Removing unreachable block (ram,0x011a2ce0) */
/* WARNING: Removing unreachable block (ram,0x011a2d10) */

void FUN_011a2cac(long param_1)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  uVar3 = FUN_011be9f0();
  bVar1 = (uVar3 & 1) == 0;
  if (bVar1) {
    iVar4 = *(int *)(param_1 + 0x18);
    iVar5 = *(int *)(param_1 + 0x1c);
    iVar7 = DAT_050cfa00._4_4_ + iVar5;
    iVar6 = (int)DAT_050cfa00;
  }
  else {
    iVar4 = *(int *)(param_1 + 0x18);
    iVar5 = *(int *)(param_1 + 0x1c);
    iVar7 = DAT_050cfa20._4_4_ + iVar5;
    iVar6 = (int)DAT_050cfa20;
  }
  uVar3 = (uint)!bVar1;
  iVar6 = iVar6 + iVar4;
  if (1 < uVar3) {
    uVar3 = 0;
  }
  iVar4 = *(int *)(&DAT_050cfa10 + (ulong)uVar3 * 4) + iVar4;
  iVar5 = *(int *)((long)&DAT_050cfa10 + (ulong)uVar3 * 0x20 + 4) + iVar5;
  iVar2 = iVar6;
  if (iVar4 <= iVar6) {
    iVar2 = iVar4;
  }
  if (iVar6 <= iVar4) {
    iVar6 = iVar4;
  }
  iVar4 = iVar7;
  if (iVar5 <= iVar7) {
    iVar4 = iVar5;
  }
  if (iVar7 <= iVar5) {
    iVar7 = iVar5;
  }
  *(int *)(param_1 + 0x70) = iVar2;
  *(int *)(param_1 + 0x74) = iVar4;
  *(int *)(param_1 + 0x80) = iVar6;
  *(int *)(param_1 + 0x84) = iVar7;
  return;
}

