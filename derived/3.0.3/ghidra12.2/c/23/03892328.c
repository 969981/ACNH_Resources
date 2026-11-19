
bool FUN_03892328(long param_1,long *param_2,char *param_3)

{
  long lVar1;
  undefined *puVar2;
  char cVar3;
  long *plVar4;
  uint uVar5;
  byte local_34 [4];
  
  puVar2 = PTR_DAT_04bcb7d8;
  local_34[0] = (**(code **)(**(long **)(*(long *)PTR_DAT_04bcb7d8 + 0x68) + 0x80))();
  if (local_34[0] != 0xff) {
    plVar4 = *(long **)(*(long *)puVar2 + 0x68);
    if (*(byte *)(plVar4 + 4) == local_34[0]) {
      param_1 = param_1 + 0x4c8;
    }
    else {
      cVar3 = (**(code **)(*plVar4 + 0x158))(plVar4,local_34);
      uVar5 = (uint)cVar3;
      if (*(uint *)(param_1 + 0x4a8) <= uVar5) {
        uVar5 = 0;
      }
      param_1 = *(long *)(param_1 + 0x4b0) + (long)(int)uVar5 * 0x70;
    }
    uVar5 = (uint)*param_3;
    if (*(uint *)(param_1 + 0x30) <= (uint)(int)*param_3) {
      uVar5 = 0;
    }
    if (*(long *)(*(long *)(param_1 + 0x38) +
                 (-(ulong)(uVar5 >> 0x1f) & 0xfffffff000000000 | (ulong)uVar5 << 4)) != *param_2) {
      return false;
    }
    lVar1 = *(long *)(param_1 + 0x38) + (long)(int)uVar5 * 0x10;
    if (*(char *)(lVar1 + 8) == (char)param_2[1]) {
      return *(char *)(lVar1 + 9) == *(char *)((long)param_2 + 9);
    }
  }
  return false;
}

