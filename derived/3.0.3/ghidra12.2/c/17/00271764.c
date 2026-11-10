
void FUN_00271764(undefined8 param_1,long *param_2)

{
  undefined1 uVar1;
  byte bVar2;
  undefined *puVar3;
  undefined *puVar4;
  bool bVar5;
  undefined4 uVar6;
  uint uVar7;
  uint uVar8;
  undefined4 uVar9;
  long lVar10;
  undefined8 uVar11;
  long *plVar12;
  long lVar13;
  long lVar14;
  int local_6c [4];
  uint local_5c;
  uint local_58;
  char local_54 [4];
  
  puVar3 = PTR_DAT_04bc1510;
  lVar10 = FUN_002ba790(*(undefined8 *)PTR_DAT_04bc1510);
  puVar4 = PTR_DAT_04bcd350;
  if ((int)param_2[1] == 0x11) {
    lVar14 = *(long *)(lVar10 + 0x98);
    lVar13 = *param_2;
    uVar11 = FUN_0026c894(*(undefined8 *)PTR_DAT_04bcd350);
    uVar6 = FUN_002840d8(uVar11,lVar13,0x11);
    uVar1 = *(undefined1 *)(lVar13 + 1);
    plVar12 = (long *)FUN_002ba790(*(undefined8 *)puVar3);
    lVar10 = (**(code **)(*plVar12 + 0x50))(plVar12,uVar1);
    if (((lVar10 != 0) && (*(long *)(lVar10 + 0x40) == param_2[2])) &&
       (bVar2 = *(byte *)(lVar13 + 4), bVar2 < 2)) {
      bVar5 = bVar2 != 0;
      uVar7 = FUN_00228490(lVar13 + 5);
      uVar8 = FUN_00228490(lVar13 + 9);
      uVar11 = *(undefined8 *)(*(long *)puVar4 + 0x38);
      uVar9 = FUN_0026bfe0();
      FUN_0027a7c0(local_6c,uVar11,uVar9,uVar1,local_54,&local_58,&local_5c);
      if (local_6c[0] == 0) {
        if (((bool)local_54[0] != (bVar2 != 0)) &&
           ((uVar7 < local_58 || ((local_58 == uVar7 && (uVar8 < local_5c)))))) {
          bVar5 = local_54[0] != '\0';
        }
        FUN_00276b44(*(undefined8 *)(lVar14 + 0x90),uVar6,uVar1);
        FUN_0027a914(uVar11,uVar1,bVar5);
      }
    }
  }
  return;
}

