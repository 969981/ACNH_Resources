
void FUN_01faa590(long param_1)

{
  int iVar1;
  undefined *puVar2;
  int iVar3;
  undefined8 *puVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  int iVar8;
  
  puVar2 = PTR_DAT_04bb5ce0;
  if (((*(long *)PTR_DAT_04bb5ce0 != 0) && (DAT_05aed670 != 0)) &&
     (*(long *)(DAT_05aed670 + 0x330) != 0)) {
    puVar4 = (undefined8 *)
             (**(code **)(*DAT_05aed668 + 0x18))(DAT_05aed668,*(undefined4 *)(DAT_05aed670 + 0x338))
    ;
    iVar3 = FUN_006bd550(*puVar4,0);
    if (((iVar3 == 0x758f7eaf) && (DAT_05aed670 != 0)) &&
       ((*(long *)(DAT_05aed670 + 0x330) != 0 &&
        (*(int *)(*(long *)(DAT_05aed670 + 0x330) + 0x244) != 0)))) {
      lVar7 = *(long *)puVar2;
      if (lVar7 == 0) {
        iVar5 = 0;
        iVar3 = 0;
        iVar6 = 0x10;
        iVar8 = 0x10;
      }
      else {
        iVar5 = *(int *)(lVar7 + 0xd88);
        iVar3 = *(int *)(lVar7 + 0xd8c);
        iVar8 = *(int *)(lVar7 + 0xd98);
        iVar6 = *(int *)(lVar7 + 0xd9c);
      }
      iVar1 = iVar5;
      if (iVar8 <= iVar5) {
        iVar1 = iVar8;
      }
      if (iVar5 <= iVar8) {
        iVar5 = iVar8;
      }
      *(int *)(param_1 + 0x20) = iVar5;
      iVar5 = iVar3;
      if (iVar6 <= iVar3) {
        iVar5 = iVar6;
      }
      if (iVar3 <= iVar6) {
        iVar3 = iVar6;
      }
      *(int *)(param_1 + 0x10) = iVar1;
      *(int *)(param_1 + 0x14) = iVar5;
      goto LAB_01faa664;
    }
  }
  lVar7 = DAT_05abff60;
  if (DAT_05abff60 == 0) {
    return;
  }
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(DAT_05abff60 + 0x28);
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(lVar7 + 0x2c);
  *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(lVar7 + 0x38);
  iVar3 = *(int *)(lVar7 + 0x3c);
LAB_01faa664:
  *(int *)(param_1 + 0x24) = iVar3;
  return;
}

