
void FUN_00271214(undefined8 param_1,long *param_2)

{
  char cVar1;
  undefined *puVar2;
  char cVar3;
  uint uVar4;
  ulong uVar5;
  long *plVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  undefined4 local_40;
  char local_3c;
  ulong local_38;
  
  puVar2 = PTR_DAT_04bcd350;
  if (param_2[2] != 0) {
    uVar5 = FUN_0026c070(*(undefined8 *)PTR_DAT_04bcd350);
    if (((uVar5 & 1) != 0) && ((int)param_2[1] == 10)) {
      lVar9 = *param_2;
      cVar1 = *(char *)(lVar9 + 1);
      plVar6 = (long *)FUN_002ba790(*(undefined8 *)PTR_DAT_04bc1510);
      lVar7 = (**(code **)(*plVar6 + 0x50))(plVar6,cVar1);
      if ((lVar7 != 0) &&
         ((*(long *)(lVar7 + 0x40) == param_2[2] &&
          (cVar3 = FUN_0026be6c(*(undefined8 *)puVar2), cVar1 != cVar3)))) {
        uVar5 = FUN_00228490(lVar9 + 2);
        uVar4 = FUN_00228490(lVar9 + 6);
        if ((*(uint *)(*(long *)puVar2 + 0xbc) <= uVar4) &&
           ((uVar8 = FUN_00269a70(*(long *)puVar2,cVar1), (uVar8 & 1) != 0 &&
            (plVar6 = *(long **)(*(long *)puVar2 + 0x110), plVar6 != (long *)0x0)))) {
          local_40 = 0x1a;
          local_3c = cVar1;
          local_38 = uVar5 & 0xffffffff;
          (**(code **)(*plVar6 + 0x10))(plVar6,&local_40);
        }
      }
    }
  }
  return;
}

