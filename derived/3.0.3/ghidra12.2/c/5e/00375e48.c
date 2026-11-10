
void FUN_00375e48(long param_1,undefined8 param_2)

{
  ulong uVar1;
  uint uVar2;
  long lVar3;
  int iVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 uVar10;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  uVar2 = *(uint *)(param_1 + 0x10);
  iVar4 = DAT_04c62f08;
  if ((uVar2 & 0xc00) != 0) {
    uVar1 = ((ulong)(uVar2 >> 2) & 3) << 2 | ((ulong)(uVar2 >> 2) & 3) << 4;
    lVar3 = ((ulong)uVar2 & 3) * 0x10;
    uVar8 = (ulong)(uVar2 >> 6) & 8;
    lVar5 = *(long *)(param_1 + 0x18) + (lVar3 + ((ulong)uVar2 & 0x30) | uVar8) + uVar1;
    lVar3 = *(long *)(param_1 + 0x18) +
            (ulong)((int)uVar1 + ((int)lVar3 + (int)((ulong)uVar2 & 0x30) | (uint)uVar8) + 4);
    if ((uVar2 & 0xc00) != 0x800) {
      lVar3 = lVar5;
    }
    iVar4 = FUN_00366294(lVar5,lVar3);
  }
  if (iVar4 != 7) {
    *(undefined8 *)(param_1 + 0x40) = 0;
    return;
  }
  lVar5 = FUN_00367b30(0x28);
  if (lVar5 != 0) {
    FUN_0034ebb0(lVar5);
  }
  uVar2 = *(uint *)(param_1 + 0x10);
  *(long *)(param_1 + 0x40) = lVar5;
  uVar8 = (ulong)uVar2 & 0x30;
  lVar3 = ((ulong)uVar2 & 3) * 0x10;
  uVar9 = (ulong)(uVar2 >> 6) & 8;
  uVar1 = ((ulong)(uVar2 >> 2) & 3) << 2 | ((ulong)(uVar2 >> 2) & 3) << 4;
  local_40 = 0;
  uStack_38 = 0;
  local_50 = 0;
  uStack_48 = 0;
  local_60 = 0;
  uStack_58 = 0;
  lVar5 = *(long *)(param_1 + 0x18) + (lVar3 + uVar8 | uVar9) + uVar1;
  local_70 = 0;
  uStack_68 = 0;
  local_80 = 0;
  uStack_78 = 0;
  lVar3 = *(long *)(param_1 + 0x18) +
          (ulong)((int)uVar1 + ((int)lVar3 + (int)uVar8 | (uint)uVar9) + 4);
  if ((uVar2 & 0xc00) != 0x800) {
    lVar3 = lVar5;
  }
  uVar6 = FUN_00365f4c(&local_60,&local_80,lVar5,lVar3);
  uVar10 = *(undefined8 *)(param_1 + 0x40);
  uVar7 = FUN_00367b14(uVar6,8);
  FUN_0034ebc4(uVar10,uVar7,uVar6);
  FUN_0034ebe0(*(undefined8 *)(param_1 + 0x40),param_2,&local_60);
  return;
}

