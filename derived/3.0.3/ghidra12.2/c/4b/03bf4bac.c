
void FUN_03bf4bac(long param_1,ulong param_2,int param_3)

{
  long *plVar1;
  long *plVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  
  lVar4 = (**(code **)(**(long **)(*(long *)(param_1 + 0x30) + 0x18) + 0x20))();
  if (*(char *)(lVar4 + 0x78) != '\0') {
    lVar5 = *(long *)(param_1 + 0x30);
    if (*(char *)(lVar4 + 0x79) == '\0') {
      plVar1 = (long *)(*(long *)(lVar5 + 0x18) + 0x18);
      uVar3 = *(uint *)(*(long *)(lVar5 + 0x18) + 0x10);
      plVar2 = plVar1 + uVar3;
      if (1 < uVar3) {
        plVar2 = plVar1;
      }
      lVar4 = *plVar2;
      if (lVar4 == 0) {
        return;
      }
      if (*(char *)(lVar4 + 0xb0) == '\0') {
        return;
      }
      if ((*(ulong *)(lVar4 + 0x98) >> (param_2 & 0x3f) & 1) == 0) {
        return;
      }
    }
    lVar4 = *(long *)(param_1 + 0x78);
    if (((lVar4 == 0) || ((uint)*(ushort *)(lVar5 + 0x44) <= (uint)param_2)) ||
       (*(int *)(*(long *)(*(long *)(lVar5 + 0x48) + (param_2 & 0xffffffff) * 8) + 0x60) == 2)) {
                    /* WARNING: Could not recover jumptable at 0x03bf4c30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(**(long **)(lVar5 + 0x18) + 0x20))();
      return;
    }
    if (*(int *)(lVar4 + (param_2 & 0xffffffff) * 4) != param_3) {
      *(int *)(lVar4 + (param_2 & 0xffffffff) * 4) = param_3;
      if ((uint)param_2 < 0x40) {
        *(ulong *)(param_1 + 0x68) = *(ulong *)(param_1 + 0x68) | 1L << (param_2 & 0x3f);
      }
      else {
        *(ulong *)(param_1 + 0x70) = *(ulong *)(param_1 + 0x70) | 1L << (param_2 & 0x3f);
      }
    }
  }
  return;
}

