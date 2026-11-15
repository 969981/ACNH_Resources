
bool FUN_01fa6ed8(long param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  undefined8 *puVar7;
  long lVar8;
  int iVar9;
  int iVar10;
  float fVar11;
  float fVar12;
  undefined *local_68;
  undefined *puStack_60;
  int local_58;
  int iStack_54;
  undefined *local_50;
  int local_48;
  int iStack_44;
  
  puVar5 = PTR_DAT_04bb5ce0;
  puVar4 = PTR_DAT_04bb2720;
  if (((*(long *)PTR_DAT_04bb5ce0 != 0) && (lVar8 = *(long *)PTR_DAT_04bb2720, lVar8 != 0)) &&
     (*(long *)(lVar8 + 0x330) != 0)) {
    puVar7 = (undefined8 *)
             (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                       (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar8 + 0x338));
    iVar6 = FUN_006bd550(*puVar7,0);
    if (iVar6 != 0x758f7eaf) {
      return false;
    }
    if (((*(long *)puVar4 != 0) && (lVar8 = *(long *)(*(long *)puVar4 + 0x330), lVar8 != 0)) &&
       (*(int *)(lVar8 + 0x244) != 0)) {
      lVar8 = *(long *)(*(long *)(param_1 + 8) + 0x68);
      local_68 = PTR_DAT_04bbc1a0 + 0x10;
      puStack_60 = PTR_DAT_04bb2010 + 0x10;
      fVar11 = *(float *)(lVar8 + 0x278) + -2.5;
      fVar12 = *(float *)(lVar8 + 0x280) + -2.5;
      lVar8 = *(long *)puVar5;
      iVar2 = (int)((float)(int)fVar11 / 5.0) - (uint)(fVar11 < 0.0);
      iVar6 = iVar2 + 1;
      iVar3 = (int)((float)(int)fVar12 / 5.0) - (uint)(fVar12 < 0.0);
      iVar1 = iVar3 + 1;
      if (lVar8 == 0) {
        local_48 = 0;
        iStack_44 = 0;
        iVar9 = 0x10;
        iVar10 = 0x10;
      }
      else {
        local_48 = *(int *)(lVar8 + 0xd88);
        iStack_44 = *(int *)(lVar8 + 0xd8c);
        iVar10 = *(int *)(lVar8 + 0xd98);
        iVar9 = *(int *)(lVar8 + 0xd9c);
      }
      local_58 = local_48;
      if (iVar10 <= local_48) {
        local_58 = iVar10;
      }
      if (local_48 <= iVar10) {
        local_48 = iVar10;
      }
      iStack_54 = iStack_44;
      if (iVar9 <= iStack_44) {
        iStack_54 = iVar9;
      }
      if (iStack_44 <= iVar9) {
        iStack_44 = iVar9;
      }
      if (((local_58 <= iVar2 && iVar6 <= local_48) && iStack_54 <= iVar3) && iVar1 == iStack_44 ||
          (((local_58 <= iVar2 && iVar6 <= local_48) && iStack_54 <= iVar3) && iVar1 - iStack_44 < 0
          ) != (((local_58 <= iVar2 && iVar6 <= local_48) && iStack_54 <= iVar3) &&
               SBORROW4(iVar1,iStack_44))) {
        return true;
      }
      local_50 = puStack_60;
      FUN_01811430(&local_68);
      iStack_54 = iStack_54 + -1;
      if (local_48 <= local_58) {
        local_48 = local_58;
      }
      if (iStack_44 <= iStack_54) {
        iStack_44 = iStack_54;
      }
      return ((local_58 <= iVar2 && iVar6 <= local_48) && iStack_54 <= iVar3) && iVar1 == iStack_44
             || (((local_58 <= iVar2 && iVar6 <= local_48) && iStack_54 <= iVar3) &&
                iVar1 - iStack_44 < 0) !=
                (((local_58 <= iVar2 && iVar6 <= local_48) && iStack_54 <= iVar3) &&
                SBORROW4(iVar1,iStack_44));
    }
  }
  return false;
}

