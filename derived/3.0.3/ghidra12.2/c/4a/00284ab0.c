
void FUN_00284ab0(long param_1,int *param_2)

{
  char cVar1;
  char cVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  
  FUN_002aaa08();
  plVar3 = (long *)FUN_002ba790(DAT_04c61168);
  lVar4 = (**(code **)(*plVar3 + 0x38))(plVar3,*(undefined8 *)(param_2 + 2));
  if (((lVar4 != 0) && (*(byte *)(lVar4 + 0x38) < 0x20)) && (*(long *)(lVar4 + 0x40) != 0)) {
    cVar1 = FUN_002aaa44(param_1);
    if (cVar1 != -3) {
      lVar5 = FUN_002aaa28(param_1);
      if (((lVar5 != *(long *)(lVar4 + 0x40)) &&
          (cVar1 = FUN_002aaa44(param_1), lVar5 = DAT_04c603c8, *(char *)(lVar4 + 0x38) != cVar1))
         && ((DAT_04c603c8 != 0 && (uVar6 = FUN_0026c070(DAT_04c603c8), (uVar6 & 1) == 0)))) {
        if (*param_2 == 1) {
          cVar1 = *(char *)(lVar4 + 0x38);
          cVar2 = FUN_0026be6c(lVar5);
          if (cVar1 == cVar2) {
            *(undefined1 *)(param_1 + 0x70) = 0;
          }
        }
        else if ((*param_2 == 0) &&
                (cVar1 = *(char *)(lVar4 + 0x38), cVar2 = FUN_0026be6c(lVar5), cVar1 == cVar2)) {
          *(undefined2 *)(param_1 + 0x70) = 1;
          return;
        }
      }
    }
  }
  return;
}

