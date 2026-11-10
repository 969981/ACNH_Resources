
void FUN_00368b10(long param_1,undefined8 *param_2,long param_3)

{
  long *plVar1;
  ushort uVar2;
  undefined8 *puVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  
  FUN_0036b820(param_1,param_3);
  *param_2 = *(undefined8 *)(param_1 + 8);
  param_2[1] = param_3 + 8;
  FUN_0036bba0(param_2 + 0xf);
  param_2[0x14] = param_2;
  param_2[0x15] = param_2 + 0xf;
  puVar3 = (undefined8 *)(*DAT_04c62f50)(0x10,4,*(undefined8 *)PTR_DAT_04bd0810);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &PTR_LAB_0484d780;
    puVar3[1] = param_2;
  }
  param_2[0x1a] = puVar3;
  if (*(short *)(param_3 + 0x40) != 0) {
    lVar6 = 0;
    uVar7 = 0;
    plVar1 = param_2 + 2;
    do {
      plVar4 = (long *)FUN_0036ba40(param_1,*(long *)(param_3 + 0x28) + lVar6);
      lVar5 = *plVar4;
      uVar7 = uVar7 + 1;
      lVar6 = lVar6 + 0x80;
      *plVar4 = *plVar1;
      *(long **)(lVar5 + 8) = plVar1;
      *(long **)(*plVar1 + 8) = plVar4;
      *plVar1 = lVar5;
    } while (uVar7 < *(ushort *)(param_3 + 0x40));
  }
  if (*(short *)(param_3 + 0x42) != 0) {
    lVar6 = 0;
    uVar7 = 0;
    do {
      FUN_003872c0(param_2 + 0x14,*(long *)(param_3 + 0x30) + lVar6);
      uVar7 = uVar7 + 1;
      lVar6 = lVar6 + 0x48;
    } while (uVar7 < *(ushort *)(param_3 + 0x42));
  }
  uVar2 = *(ushort *)(param_3 + 0x44);
  param_2[0x18] = *(undefined8 *)(param_3 + 0x38);
  *(uint *)(param_2 + 0x19) = (uint)uVar2;
  return;
}

