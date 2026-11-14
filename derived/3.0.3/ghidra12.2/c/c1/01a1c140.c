
/* WARNING: Restarted to delay deadcode elimination for space: stack */

float FUN_01a1c140(long param_1)

{
  int iVar1;
  int iVar2;
  undefined *puVar3;
  long lVar4;
  float fVar5;
  float fVar6;
  undefined *local_78;
  int local_70;
  int local_6c;
  undefined *local_68;
  undefined *puStack_60;
  int local_58;
  int iStack_54;
  undefined *local_50;
  int local_48;
  int iStack_44;
  
  puVar3 = PTR_DAT_04bb27c8;
  local_68 = PTR_DAT_04bbc1a0 + 0x10;
  local_78 = PTR_DAT_04bb2010 + 0x10;
  iVar2 = *(uint *)(param_1 + 8) - (uint)((*(uint *)(param_1 + 8) & 0x80000001) == 1);
  local_6c = *(uint *)(param_1 + 0xc) - (uint)((*(uint *)(param_1 + 0xc) & 0x80000001) == 1);
  local_48 = iVar2 + 1;
  iStack_44 = local_6c + 1;
  iVar1 = local_6c + 2;
  fVar6 = -3.4028235e+38;
  lVar4 = *(long *)PTR_DAT_04bb27c8;
  local_70 = iVar2;
  puStack_60 = local_78;
  local_58 = iVar2;
  iStack_54 = local_6c;
  local_50 = local_78;
  do {
    if ((lVar4 == 0) || (*(long *)(lVar4 + 0xa8) == 0)) {
      fVar5 = -500.0;
    }
    else {
      fVar5 = (float)FUN_00963acc(*(long *)(lVar4 + 0xa8),&local_78);
      lVar4 = *(long *)puVar3;
    }
    if (fVar6 <= fVar5) {
      fVar6 = fVar5;
    }
    if (local_70 < local_48) {
      local_70 = local_70 + 1;
    }
    else {
      local_6c = local_6c + 1;
      local_70 = local_58;
    }
  } while (iVar2 != local_70 || iVar1 != local_6c);
  return fVar6;
}

