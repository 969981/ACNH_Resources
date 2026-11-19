
void FUN_039c10d0(long param_1,byte param_2)

{
  int iVar1;
  int iVar2;
  ushort uVar3;
  ushort uVar4;
  undefined *puVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  long lVar9;
  
  *(byte *)(param_1 + 0x349) = param_2;
  uVar3 = *(ushort *)(param_1 + 0x34a);
  iVar1 = *(int *)(param_1 + 0x340);
  iVar6 = (**(code **)(*(long *)(param_1 + 0x310) + 0x20))(param_1 + 0x310);
  iVar7 = (**(code **)(*(long *)(param_1 + 0x310) + 0x20))(param_1 + 0x310);
  puVar5 = PTR_DAT_04bb2cd8;
  iVar8 = *(int *)(param_1 + 0x328);
  lVar9 = 0;
  if (*(long *)(param_1 + 0x330) != 0) {
    lVar9 = (**(code **)PTR_DAT_04bb2cd8)();
  }
  *(byte *)(param_1 + 0x3c1) = param_2;
  iVar2 = *(int *)(param_1 + 0x3b8);
  uVar4 = *(ushort *)(param_1 + 0x3c2);
  *(ulong *)(param_1 + 800) =
       lVar9 + (ulong)(iVar8 + (uint)param_2 * (uint)uVar3 * ((iVar1 + iVar6) - 1U & -iVar7));
  iVar8 = (**(code **)(*(long *)(param_1 + 0x388) + 0x20))(param_1 + 0x388);
  iVar6 = (**(code **)(*(long *)(param_1 + 0x388) + 0x20))(param_1 + 0x388);
  iVar1 = *(int *)(param_1 + 0x3a0);
  lVar9 = 0;
  if (*(long *)(param_1 + 0x3a8) != 0) {
    lVar9 = (**(code **)puVar5)();
  }
  *(ulong *)(param_1 + 0x398) =
       lVar9 + (ulong)(iVar1 + (uint)param_2 * (uint)uVar4 * ((iVar2 + iVar8) - 1U & -iVar6));
  return;
}

