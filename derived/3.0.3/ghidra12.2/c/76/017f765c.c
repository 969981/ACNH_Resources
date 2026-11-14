
undefined8 FUN_017f765c(int param_1,long param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  int iVar5;
  int iVar6;
  undefined8 *puVar7;
  
  lVar4 = *(long *)PTR_DAT_04bb2720;
  if (lVar4 == 0) {
    puVar7 = &DAT_055c04a0;
  }
  else {
    puVar7 = &DAT_055c04a0;
    if (*(long *)(lVar4 + 0x330) != 0) {
      puVar7 = (undefined8 *)
               (**(code **)(*DAT_05aed668 + 0x18))(DAT_05aed668,*(undefined4 *)(lVar4 + 0x338));
      iVar2 = FUN_006bd550(*puVar7,0);
      puVar7 = (undefined8 *)PTR_DAT_04bc3a80;
      if (iVar2 != 0x758f7eaf) {
        puVar7 = &DAT_055c04a0;
      }
    }
  }
  if (*(int *)(puVar7 + 7) == param_1) {
    if (DAT_05292338 == 0) {
      iVar2 = 0;
      iVar3 = 0;
      iVar5 = 0x10;
      iVar6 = 0x10;
    }
    else {
      iVar2 = *(int *)(DAT_05292338 + 0xd88);
      iVar3 = *(int *)(DAT_05292338 + 0xd8c);
      iVar6 = *(int *)(DAT_05292338 + 0xd98);
      iVar5 = *(int *)(DAT_05292338 + 0xd9c);
    }
    iVar1 = iVar2;
    if (iVar6 <= iVar2) {
      iVar1 = iVar6;
    }
    if (iVar2 <= iVar6) {
      iVar2 = iVar6;
    }
    *(int *)(param_2 + 0x10) = iVar1;
    *(int *)(param_2 + 0x20) = iVar2;
    iVar2 = iVar3;
    if (iVar5 <= iVar3) {
      iVar2 = iVar5;
    }
    if (iVar3 <= iVar5) {
      iVar3 = iVar5;
    }
  }
  else {
    iVar2 = 0x1a;
    iVar3 = 0x25;
    *(undefined4 *)(param_2 + 0x10) = 0x1a;
    *(undefined4 *)(param_2 + 0x20) = 0x25;
  }
  *(int *)(param_2 + 0x14) = iVar2;
  *(int *)(param_2 + 0x24) = iVar3;
  return 1;
}

