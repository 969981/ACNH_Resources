
uint FUN_01fabae0(long param_1,long param_2)

{
  undefined *puVar1;
  int iVar2;
  uint uVar3;
  undefined8 *puVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  long lVar8;
  int iVar9;
  undefined4 local_9c;
  undefined **local_98;
  undefined8 uStack_90;
  undefined8 *local_88;
  undefined4 local_80;
  undefined8 local_7c;
  undefined8 local_74;
  undefined8 local_6c;
  undefined8 local_64;
  undefined8 local_5c;
  undefined8 local_54;
  undefined8 local_4c;
  undefined8 local_44;
  undefined8 local_3c;
  undefined4 local_34;
  
  puVar1 = PTR_DAT_04bb5ce0;
  if (((*(long *)PTR_DAT_04bb5ce0 != 0) && (DAT_05aed670 != 0)) &&
     (*(long *)(DAT_05aed670 + 0x330) != 0)) {
    puVar4 = (undefined8 *)
             (**(code **)(*DAT_05aed668 + 0x18))(DAT_05aed668,*(undefined4 *)(DAT_05aed670 + 0x338))
    ;
    iVar2 = FUN_006bd550(*puVar4,0);
    if (((iVar2 == 0x758f7eaf) && (DAT_05aed670 != 0)) &&
       ((*(long *)(DAT_05aed670 + 0x330) != 0 &&
        (*(int *)(*(long *)(DAT_05aed670 + 0x330) + 0x244) != 0)))) {
      lVar8 = *(long *)puVar1;
      if (lVar8 == 0) {
        iVar6 = 0;
        iVar5 = 0;
        iVar7 = 0x10;
        iVar9 = 0x10;
      }
      else {
        iVar6 = *(int *)(lVar8 + 0xd88);
        iVar5 = *(int *)(lVar8 + 0xd8c);
        iVar9 = *(int *)(lVar8 + 0xd98);
        iVar7 = *(int *)(lVar8 + 0xd9c);
      }
      iVar2 = iVar6;
      if (iVar9 <= iVar6) {
        iVar2 = iVar9;
      }
      if (iVar6 <= iVar9) {
        iVar6 = iVar9;
      }
      iVar9 = iVar5;
      if (iVar7 <= iVar5) {
        iVar9 = iVar7;
      }
      if (iVar5 <= iVar7) {
        iVar5 = iVar7;
      }
      goto LAB_01fabbb8;
    }
  }
  if (DAT_05abff60 == 0) {
    iVar6 = 0;
    iVar9 = 0;
    iVar2 = 0;
    iVar5 = 0;
  }
  else {
    iVar2 = *(int *)(DAT_05abff60 + 0x28);
    iVar9 = *(int *)(DAT_05abff60 + 0x2c);
    iVar6 = *(int *)(DAT_05abff60 + 0x38);
    iVar5 = *(int *)(DAT_05abff60 + 0x3c);
  }
LAB_01fabbb8:
  uVar3 = 1;
  if (((iVar2 <= *(int *)(param_2 + 8)) && (*(int *)(param_2 + 8) <= iVar6)) &&
     ((iVar9 <= *(int *)(param_2 + 0xc) && (*(int *)(param_2 + 0xc) <= iVar5)))) {
    local_88 = &local_74;
    local_74 = 0;
    local_7c = 0x1500000019;
    local_9c = *(undefined4 *)(*(long *)(param_1 + 8) + 0x230);
    local_6c = 0;
    local_64 = 0;
    local_5c = 0;
    local_54 = 0;
    local_4c = 0;
    local_44 = 0;
    local_3c = 0;
    local_34 = 0;
    local_80 = 0;
    local_98 = &PTR_LAB_049639c8;
    uStack_90 = 0x110000020d;
    FUN_02145060(&local_98,&local_9c,iVar2,iVar9);
    uVar3 = (*(int *)(param_2 + 8) - iVar2) + (int)local_7c * (*(int *)(param_2 + 0xc) - iVar9);
    uVar3 = *(uint *)((long)local_88 + (long)((int)uVar3 >> 5) * 4) >> (ulong)(uVar3 & 0x1f) & 1;
  }
  return uVar3;
}

