
void FUN_00270bd8(undefined8 param_1,long *param_2)

{
  char cVar1;
  undefined *puVar2;
  char cVar3;
  undefined4 uVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  ulong uVar8;
  undefined8 uVar9;
  
  puVar2 = PTR_DAT_04bc1510;
  plVar5 = (long *)FUN_002ba790(*(undefined8 *)PTR_DAT_04bc1510);
  if ((int)param_2[1] == 2) {
    cVar1 = *(char *)(*param_2 + 1);
    plVar6 = (long *)FUN_002ba790(*(undefined8 *)puVar2);
    lVar7 = (**(code **)(*plVar6 + 0x50))(plVar6,cVar1);
    if (((lVar7 != 0) && (*(long *)(lVar7 + 0x40) == param_2[2])) &&
       (cVar3 = FUN_0026be6c(DAT_04c603c8), cVar1 == cVar3)) {
      uVar4 = FUN_0026be6c(DAT_04c603c8);
      lVar7 = (**(code **)(*plVar5 + 0x50))(plVar5,uVar4);
      if ((lVar7 == 0) && (lVar7 = FUN_0026c850(DAT_04c603c8), *(char *)(lVar7 + 0x84) != '\0')) {
        uVar9 = *(undefined8 *)(DAT_04c603c8 + 0x30);
        uVar8 = FUN_00278618(uVar9);
        if ((uVar8 & 1) != 0) {
          FUN_002211bc(uVar9,0);
        }
      }
      uVar9 = *(undefined8 *)(DAT_04c603c8 + 0x30);
      uVar8 = FUN_00278618(uVar9);
      if ((uVar8 & 1) != 0) {
        FUN_002211bc(uVar9,0);
        return;
      }
    }
  }
  return;
}

