
void FUN_00270b14(long param_1,long *param_2)

{
  char cVar1;
  undefined *puVar2;
  char cVar3;
  undefined4 uVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  
  puVar2 = PTR_DAT_04bc1510;
  plVar5 = (long *)FUN_002ba790(*(undefined8 *)PTR_DAT_04bc1510);
  if ((((int)param_2[1] == 2) && (lVar8 = *(long *)(param_1 + 0x68), lVar8 != 0)) &&
     (*(char *)(lVar8 + 0x7c) != '\0')) {
    cVar1 = *(char *)(*param_2 + 1);
    plVar6 = (long *)FUN_002ba790(*(undefined8 *)puVar2);
    lVar7 = (**(code **)(*plVar6 + 0x50))(plVar6,cVar1);
    if ((lVar7 != 0) && (*(long *)(lVar7 + 0x40) == param_2[2])) {
      uVar4 = FUN_0026be6c(DAT_04c603c8);
      lVar7 = (**(code **)(*plVar5 + 0x50))(plVar5,uVar4);
      if ((lVar7 != 0) && (cVar3 = FUN_0026be6c(DAT_04c603c8), cVar1 == cVar3)) {
        *(undefined1 *)(lVar8 + 0x7c) = 0;
      }
    }
  }
  return;
}

