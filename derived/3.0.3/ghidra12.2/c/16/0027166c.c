
void FUN_0027166c(undefined8 param_1,long *param_2)

{
  char cVar1;
  undefined *puVar2;
  char cVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  ulong uVar6;
  long *plVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  
  puVar2 = PTR_DAT_04bcd350;
  uVar6 = FUN_0026c070(*(undefined8 *)PTR_DAT_04bcd350);
  if ((((uVar6 & 1) == 0) &&
      (uVar6 = FUN_002212e4(*(undefined8 *)(*(long *)puVar2 + 0x10)), (uVar6 & 1) == 0)) &&
     (*(ushort *)(*(long *)puVar2 + 0x98) + 0xc == (int)param_2[1])) {
    lVar10 = *param_2;
    cVar1 = *(char *)(lVar10 + 1);
    plVar7 = (long *)FUN_002ba790(*(undefined8 *)PTR_DAT_04bc1510);
    lVar8 = (**(code **)(*plVar7 + 0x50))(plVar7,cVar1);
    if (((lVar8 != 0) && (*(long *)(lVar8 + 0x40) == param_2[2])) &&
       (cVar3 = FUN_0026be6c(*(undefined8 *)puVar2), cVar1 == cVar3)) {
      uVar4 = FUN_00228490(lVar10 + 4);
      uVar5 = FUN_00228490(lVar10 + 8);
      uVar9 = *(undefined8 *)(*(long *)puVar2 + 0x38);
      uVar6 = FUN_00279f50(uVar9,1,lVar10 + 0xc,uVar4,uVar5);
      if ((uVar6 & 1) != 0) {
        FUN_002211bc(uVar9,0);
        return;
      }
    }
  }
  return;
}

