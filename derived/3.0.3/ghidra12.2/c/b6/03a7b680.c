
void FUN_03a7b680(long param_1,long param_2)

{
  ushort uVar1;
  byte bVar2;
  long lVar3;
  long lVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  uint uVar8;
  long *plVar9;
  
  *(uint *)(param_2 + 0x3c0) =
       *(uint *)(param_2 + 0x3c0) & 0xfffffffe |
       (uint)(((*(byte *)(param_1 + 0x324) ^ 0xff) & 7) != 0);
  *(byte *)(param_2 + 0x3c8) =
       *(byte *)(param_2 + 0x3c8) & 0xbf | (((*(byte *)(param_1 + 0x324) ^ 0xff) & 3) == 0) << 6;
  uVar8 = (uint)*(byte *)(param_2 + 8);
  if (*(uint *)(param_1 + 0x248) <= (uint)*(byte *)(param_2 + 8)) {
    uVar8 = 0;
  }
  plVar9 = (long *)(*(long *)(param_1 + 0x250) + (ulong)uVar8 * 0x88);
  *(undefined4 *)(plVar9 + 0x10) = 0;
  uVar1 = *(ushort *)((long)plVar9 + 0x3a);
  lVar3 = plVar9[6];
  bVar2 = 1 - *(char *)((long)plVar9 + 0x39);
  *(byte *)((long)plVar9 + 0x39) = bVar2;
  iVar5 = (**(code **)(*plVar9 + 0x20))(plVar9);
  iVar6 = (**(code **)(*plVar9 + 0x20))(plVar9);
  lVar4 = plVar9[3];
  lVar7 = 0;
  if (plVar9[4] != 0) {
    lVar7 = (*DAT_04c61fd0)();
  }
  plVar9[2] = lVar7 + (ulong)((int)lVar4 +
                             (uint)bVar2 * (uint)uVar1 * (((int)lVar3 + iVar5) - 1U & -iVar6));
  return;
}

