
undefined8 FUN_026d51a0(long param_1,int param_2)

{
  ushort *puVar1;
  uint uVar2;
  uint uVar3;
  undefined *puVar4;
  uint uVar5;
  long lVar6;
  ulong uVar7;
  undefined8 *puVar8;
  long *plVar9;
  undefined8 uVar10;
  long lVar11;
  
  puVar4 = PTR_DAT_04bb46b0;
  if (((param_2 == -1) || (*(long *)PTR_DAT_04bb46b0 == 0)) || (lVar6 = FUN_026eec4c(), lVar6 == 0))
  {
    return 0;
  }
  lVar11 = lVar6 + 0x194b0;
  if (*(long *)(lVar6 + 0x194b8) == 0) {
    lVar11 = *(long *)(*(long *)puVar4 + 0x20);
    plVar9 = *(long **)(lVar11 + 0x28);
  }
  else {
    plVar9 = *(long **)(lVar6 + 0x194d8);
  }
  if ((plVar9 == (long *)0x0) || ((undefined8 *)*plVar9 == (undefined8 *)0x0)) {
    uVar5 = 1;
  }
  else {
    uVar5 = (*(code *)**(undefined8 **)*plVar9)();
    uVar5 = uVar5 ^ 1;
  }
  lVar6 = 0;
  uVar2 = *(uint *)(*(long *)(lVar11 + 0x10) + *(long *)(lVar11 + 8) + 0x305c0);
  while( true ) {
    uVar3 = *(uint *)(param_1 + 0xe0a68 + lVar6);
    puVar1 = (ushort *)(param_1 + 8) + (ulong)uVar3 * 0x3be8;
    if (0x1d < uVar3) {
      puVar1 = (ushort *)(param_1 + 8);
    }
    uVar7 = nn::time::IsValidDate
                      ((uint)*puVar1,(uint)(byte)puVar1[1],(uint)*(byte *)((long)puVar1 + 3));
    if (((uVar7 & 1) != 0) && (uVar2 < *(uint *)(puVar1 + 0x3be4))) break;
    lVar6 = lVar6 + 4;
    if (lVar6 == 0x78) {
      uVar10 = 0;
      if ((uVar5 & 1) == 0) {
LAB_026d52d0:
        if ((*(long *)(lVar11 + 0x28) != 0) &&
           (puVar8 = *(undefined8 **)(*(long *)(lVar11 + 0x28) + 8), puVar8 != (undefined8 *)0x0)) {
          (**(code **)*puVar8)();
        }
      }
      return uVar10;
    }
  }
  uVar10 = 1;
  if ((uVar5 & 1) != 0) {
    return 1;
  }
  goto LAB_026d52d0;
}

