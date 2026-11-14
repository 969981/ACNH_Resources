
/* WARNING: Removing unreachable block (ram,0x01675864) */
/* WARNING: Removing unreachable block (ram,0x01675874) */

bool FUN_01675820(long param_1)

{
  bool bVar1;
  uint uVar2;
  long lVar3;
  float fVar4;
  undefined **local_28;
  int local_20;
  int iStack_1c;
  uint local_14;
  
  local_14 = 1;
  if ((*(long *)(*(long *)PTR_DAT_04bb27a8 + 0x38) == 0) ||
     (lVar3 = *(long *)(*(long *)(*(long *)PTR_DAT_04bb27a8 + 0x38) + 0xc0), lVar3 == 0)) {
    bVar1 = false;
  }
  else {
    local_28 = &PTR_FUN_048f9730;
    fVar4 = (float)*(int *)(param_1 + 8) * 0.5;
    uVar2 = 0;
    if (fVar4 != (float)(int)fVar4) {
      uVar2 = (uint)(fVar4 < 0.0);
    }
    local_20 = (int)fVar4 - uVar2;
    fVar4 = (float)*(int *)(param_1 + 0xc) * 0.5;
    uVar2 = 0;
    if (fVar4 != (float)(int)fVar4) {
      uVar2 = (uint)(fVar4 < 0.0);
    }
    iStack_1c = (int)fVar4 - uVar2;
    FUN_01320eac(&local_14,lVar3,&local_28);
    bVar1 = (local_14 & 0xffff) != (uint)*(ushort *)PTR_DAT_04bb3170;
  }
  return bVar1;
}

