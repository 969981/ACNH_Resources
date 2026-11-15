
undefined8 FUN_01fab8b0(long param_1,long param_2)

{
  int iVar1;
  uint uVar2;
  undefined *puVar3;
  int iVar4;
  undefined8 *puVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  long lVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  undefined4 local_ac;
  undefined **local_a8;
  undefined8 uStack_a0;
  undefined8 *local_98;
  undefined4 local_90;
  undefined8 local_8c;
  undefined8 local_84;
  undefined8 local_7c;
  undefined8 local_74;
  undefined8 local_6c;
  undefined8 local_64;
  undefined8 local_5c;
  undefined8 local_54;
  undefined8 local_4c;
  undefined4 local_44;
  
  puVar3 = PTR_DAT_04bb5ce0;
  if (((*(long *)PTR_DAT_04bb5ce0 != 0) && (DAT_05aed670 != 0)) &&
     (*(long *)(DAT_05aed670 + 0x330) != 0)) {
    puVar5 = (undefined8 *)
             (**(code **)(*DAT_05aed668 + 0x18))(DAT_05aed668,*(undefined4 *)(DAT_05aed670 + 0x338))
    ;
    iVar4 = FUN_006bd550(*puVar5,0);
    if (((iVar4 == 0x758f7eaf) && (DAT_05aed670 != 0)) &&
       ((*(long *)(DAT_05aed670 + 0x330) != 0 &&
        (*(int *)(*(long *)(DAT_05aed670 + 0x330) + 0x244) != 0)))) {
      lVar9 = *(long *)puVar3;
      if (lVar9 == 0) {
        iVar4 = 0;
        iVar7 = 0;
        iVar8 = 0x10;
        iVar10 = 0x10;
      }
      else {
        iVar4 = *(int *)(lVar9 + 0xd88);
        iVar7 = *(int *)(lVar9 + 0xd8c);
        iVar10 = *(int *)(lVar9 + 0xd98);
        iVar8 = *(int *)(lVar9 + 0xd9c);
      }
      iVar12 = iVar4;
      if (iVar10 <= iVar4) {
        iVar12 = iVar10;
      }
      if (iVar4 <= iVar10) {
        iVar4 = iVar10;
      }
      iVar10 = iVar7;
      if (iVar8 <= iVar7) {
        iVar10 = iVar8;
      }
      if (iVar7 <= iVar8) {
        iVar7 = iVar8;
      }
      goto LAB_01fab990;
    }
  }
  if (DAT_05abff60 == 0) {
    iVar12 = 0;
    iVar10 = 0;
    iVar4 = 0;
    iVar7 = 0;
  }
  else {
    iVar12 = *(int *)(DAT_05abff60 + 0x28);
    iVar10 = *(int *)(DAT_05abff60 + 0x2c);
    iVar4 = *(int *)(DAT_05abff60 + 0x38);
    iVar7 = *(int *)(DAT_05abff60 + 0x3c);
  }
LAB_01fab990:
  local_98 = &local_84;
  local_84 = 0;
  local_8c = 0x1500000019;
  local_ac = *(undefined4 *)(*(long *)(param_1 + 8) + 0x230);
  local_7c = 0;
  local_74 = 0;
  local_6c = 0;
  local_64 = 0;
  local_5c = 0;
  local_54 = 0;
  local_4c = 0;
  local_44 = 0;
  local_90 = 0;
  local_a8 = &PTR_LAB_049639c8;
  uStack_a0 = 0x110000020d;
  FUN_02145060(&local_a8,&local_ac,iVar12,iVar10);
  iVar8 = *(int *)(param_2 + 0x24) + 1;
  iVar6 = *(int *)(param_2 + 0x14);
  if (iVar8 != iVar6) {
    iVar1 = *(int *)(param_2 + 0x10);
    iVar11 = iVar1;
    do {
      if (iVar11 < iVar12) {
        return 1;
      }
      if (iVar4 < iVar11) {
        return 1;
      }
      if (iVar6 < iVar10) {
        return 1;
      }
      if (iVar7 < iVar6) {
        return 1;
      }
      uVar2 = (iVar11 - iVar12) + (int)local_8c * (iVar6 - iVar10);
      if ((*(uint *)((long)local_98 + (long)((int)uVar2 >> 5) * 4) >> (ulong)(uVar2 & 0x1f) & 1) !=
          0) {
        return 1;
      }
      if (iVar11 < *(int *)(param_2 + 0x20)) {
        iVar11 = iVar11 + 1;
      }
      else {
        iVar6 = iVar6 + 1;
        iVar11 = iVar1;
      }
    } while ((iVar1 != iVar11) || (iVar8 != iVar6));
  }
  return 0;
}

