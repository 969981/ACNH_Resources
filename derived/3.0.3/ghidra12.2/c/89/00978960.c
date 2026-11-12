
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined8 FUN_00978960(long param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  undefined *puVar3;
  ulong uVar4;
  long lVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
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
  fVar8 = (float)*(int *)(param_1 + 0xc) * 10.0;
  fVar6 = (float)*(int *)(param_1 + 8) * 10.0;
  fVar7 = fVar6 + 2.5;
  fVar9 = fVar8 + 2.5;
  fVar10 = fVar6 + 10.0 + -2.5;
  fVar6 = fVar8 + 10.0 + -2.5;
  local_48 = (int)((float)(int)fVar7 / 5.0) - (uint)(fVar7 < 0.0);
  iStack_44 = (int)((float)(int)fVar9 / 5.0) - (uint)(fVar9 < 0.0);
  iVar2 = (int)((float)(int)fVar10 / 5.0) - (uint)(fVar10 < 0.0);
  iVar1 = local_48;
  if (iVar2 <= local_48) {
    iVar1 = iVar2;
  }
  if (local_48 <= iVar2) {
    local_48 = iVar2;
  }
  iVar2 = (int)((float)(int)fVar6 / 5.0) - (uint)(fVar6 < 0.0);
  local_6c = iStack_44;
  if (iVar2 <= iStack_44) {
    local_6c = iVar2;
  }
  if (iStack_44 <= iVar2) {
    iStack_44 = iVar2;
  }
  iVar2 = iStack_44 + 1;
  if (iVar2 != local_6c) {
    local_70 = iVar1;
    puStack_60 = local_78;
    local_58 = iVar1;
    iStack_54 = local_6c;
    local_50 = local_78;
    do {
      lVar5 = *(long *)puVar3;
      if (((lVar5 == 0) || (*(long *)(lVar5 + 0xa8) == 0)) ||
         (uVar4 = FUN_00949594(lVar5 + 0x28,&local_78,param_2), (uVar4 & 1) == 0)) {
        return 0;
      }
      if (local_70 < local_48) {
        local_70 = local_70 + 1;
      }
      else {
        local_6c = local_6c + 1;
        local_70 = local_58;
      }
    } while ((iVar1 != local_70) || (iVar2 != local_6c));
  }
  return 1;
}

