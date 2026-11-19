
int FUN_03892530(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  char cVar3;
  int iVar4;
  long *plVar5;
  uint uVar6;
  uint uVar7;
  long lVar8;
  byte local_24 [4];
  
  puVar2 = PTR_DAT_04bcb7d8;
  local_24[0] = (**(code **)(**(long **)(*(long *)PTR_DAT_04bcb7d8 + 0x68) + 0x80))();
  if (local_24[0] == 0xff) {
LAB_03892600:
    iVar4 = 0;
  }
  else {
    plVar5 = *(long **)(*(long *)puVar2 + 0x68);
    if (*(byte *)(plVar5 + 4) == local_24[0]) {
      lVar8 = param_1 + 0x4c8;
      uVar6 = (uint)*(ushort *)(param_1 + 0x538);
      if (*(ushort *)(param_1 + 0x538) == 0) goto LAB_03892600;
    }
    else {
      cVar3 = (**(code **)(*plVar5 + 0x158))(plVar5,local_24);
      uVar6 = (uint)cVar3;
      if (*(uint *)(param_1 + 0x4a8) <= uVar6) {
        uVar6 = 0;
      }
      lVar8 = *(long *)(param_1 + 0x4b0) + (long)(int)uVar6 * 0x70;
      uVar6 = (uint)*(ushort *)(param_1 + 0x538);
      if (uVar6 == 0) goto LAB_03892600;
    }
    uVar7 = 0;
    iVar4 = 0;
    do {
      uVar1 = uVar7;
      if (*(uint *)(lVar8 + 0x30) <= uVar7) {
        uVar1 = 0;
      }
      uVar7 = uVar7 + 1;
      if (*(long *)(*(long *)(lVar8 + 0x38) + (ulong)uVar1 * 0x10) != 0) {
        iVar4 = iVar4 + 1;
      }
    } while (uVar6 != uVar7);
  }
  return iVar4;
}

