
ulong FUN_002aadf0(long param_1,long param_2,ulong param_3)

{
  long lVar1;
  undefined *puVar2;
  uint uVar3;
  uint uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  long *plVar9;
  
  uVar5 = (**(code **)(**(long **)(param_1 + 8) + 0x30))(*(long **)(param_1 + 8),param_3 >> 0x18);
  if ((uVar5 & 1) == 0) {
LAB_002aae9c:
    return (ulong)DAT_0411003c;
  }
  FUN_002aa8bc(param_2,param_3 & 0xffffffff);
  lVar1 = param_1 + 0x10;
  lVar7 = (long)*(int *)(param_1 + 0x24);
  if (*(long *)(param_1 + 0x18) != lVar1) {
    plVar9 = (long *)(lVar1 - lVar7);
    plVar8 = (long *)(*(long *)(param_1 + 0x18) - lVar7);
    do {
      uVar3 = (**(code **)(*plVar8 + 0x18))(plVar8);
      if ((uint)param_3 == uVar3) goto LAB_002aae9c;
      lVar7 = (long)*(int *)(param_1 + 0x24);
      lVar6 = (long)plVar8 + lVar7;
      if ((uint)param_3 < uVar3) goto LAB_002aaec8;
      plVar8 = (long *)(*(long *)(lVar6 + 8) + (long)-*(int *)(param_1 + 0x24));
    } while (plVar8 != plVar9);
  }
  lVar6 = lVar1;
LAB_002aaec8:
  FUN_002236bc(lVar1,lVar6,lVar7 + param_2);
  puVar2 = PTR_DAT_04bccf00;
  uVar3 = *(uint *)(PTR_DAT_04bccf00 + 0x28);
  uVar4 = FUN_002aaf00(param_3 >> 0x18 & 0xff);
  *(uint *)(puVar2 + 0x28) = uVar3 & (uVar4 ^ 0xffffffff);
  return param_3 & 0xffffffff;
}

