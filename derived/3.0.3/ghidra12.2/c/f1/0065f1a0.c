
void FUN_0065f1a0(long param_1,long param_2)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  
  iVar9 = *(int *)(param_2 + 0x18) * *(int *)(param_1 + 0x40);
  uVar1 = iVar9 + *(int *)(param_1 + 0x40);
  uVar4 = *(uint *)(param_1 + 0x2c);
  if (uVar1 <= *(uint *)(param_1 + 0x2c)) {
    uVar4 = uVar1;
  }
  iVar5 = uVar4 - iVar9;
  iVar6 = FUN_0065b1b0(*(undefined4 *)(param_1 + 0x34));
  iVar7 = FUN_0065b190(*(undefined4 *)(param_1 + 0x34));
  iVar8 = FUN_0065b1f0(*(undefined4 *)(param_1 + 0x30),*(int *)(param_1 + 0x28) * iVar7);
  iVar7 = FUN_0065b1f0(*(undefined4 *)(param_1 + 0x34),*(int *)(param_1 + 0x28) * iVar7);
  lVar2 = *(long *)(param_1 + 8) + (ulong)(uint)(iVar8 * iVar6 * iVar9);
  lVar3 = *(long *)(param_1 + 0x18) + (ulong)(uint)(iVar7 * iVar9);
  iVar9 = (**(code **)(**(long **)(param_1 + 0x38) + 0x20))
                    (*(long **)(param_1 + 0x38),lVar2,lVar2 + (ulong)(uint)(iVar8 * iVar6 * iVar5),
                     lVar3,lVar3 + (ulong)(uint)(iVar7 * iVar5),*(undefined4 *)(param_1 + 0x28),
                     iVar5,*(undefined4 *)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x34));
  if (iVar9 < 0) {
    *(undefined1 *)(param_1 + 0x44) = 1;
  }
  return;
}

