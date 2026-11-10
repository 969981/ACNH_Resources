
void FUN_00270ff4(undefined8 param_1,long *param_2)

{
  char cVar1;
  undefined *puVar2;
  char cVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  
  puVar2 = PTR_DAT_04bcd350;
  uVar4 = FUN_0026c070(*(undefined8 *)PTR_DAT_04bcd350);
  if (((uVar4 & 1) == 0) && ((int)param_2[1] == 3)) {
    lVar8 = *param_2;
    cVar1 = *(char *)(lVar8 + 1);
    plVar5 = (long *)FUN_002ba790(*(undefined8 *)PTR_DAT_04bc1510);
    lVar6 = (**(code **)(*plVar5 + 0x50))(plVar5,cVar1);
    if ((lVar6 != 0) &&
       ((*(long *)(lVar6 + 0x40) == param_2[2] &&
        (cVar3 = FUN_0026be6c(*(undefined8 *)puVar2), cVar1 == cVar3)))) {
      uVar7 = *(undefined8 *)(*(long *)puVar2 + 0x50);
      uVar4 = FUN_00266e5c(uVar7,*(undefined1 *)(lVar8 + 2));
      if ((uVar4 & 1) != 0) {
        FUN_002211bc(uVar7,0);
        return;
      }
    }
  }
  return;
}

