
void FUN_03648820(long param_1)

{
  uint uVar1;
  undefined1 uVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  
  iVar7 = 0x100;
  uVar6 = *(uint *)(param_1 + 0x5c);
  lVar5 = *(long *)(*(long *)(param_1 + 0x90) + 0x28);
  uVar3 = *(uint *)(param_1 + 0x7c);
  do {
    if (uVar3 >> 0xd == 2) {
      uVar8 = 2;
      if (0x802 < uVar3 >> 3) {
        uVar8 = 3;
      }
    }
    else {
      uVar8 = *(uint *)(&DAT_04057d60 + (ulong)(uVar3 >> 0xd) * 4);
    }
    lVar4 = *(long *)(param_1 + 0x90) + (ulong)uVar8 * 0x28;
    uVar8 = *(uint *)(lVar4 + 0x48);
    uVar3 = uVar3 - *(int *)(lVar4 + 0x4c);
    uVar1 = 0;
    if (uVar8 != 0) {
      uVar1 = uVar3 / uVar8;
    }
    uVar2 = (**(code **)(lVar4 + 0x68))
                      (*(long *)(param_1 + 0x90),(uVar3 - uVar1 * uVar8) + *(int *)(lVar4 + 0x4c));
    *(undefined1 *)(lVar5 + (ulong)uVar6) = uVar2;
    uVar6 = uVar6 + 1 & 0xff;
    iVar7 = iVar7 + -1;
    uVar3 = *(int *)(param_1 + 0x7c) + 1;
    *(uint *)(param_1 + 0x7c) = uVar3;
  } while (iVar7 != 0);
  *(undefined1 *)(param_1 + 0x80) = 0;
  *(undefined4 *)(param_1 + 0x7c) = 0;
  return;
}

