
void FUN_002a4d0c(long param_1,int *param_2)

{
  char cVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined1 auStack_30 [16];
  
  FUN_002aaa08();
  plVar2 = (long *)FUN_002ba790(DAT_04c61168);
  lVar3 = (**(code **)(*plVar2 + 0x38))(plVar2,*(undefined8 *)(param_2 + 2));
  cVar1 = FUN_002aaa44(param_1);
  if (cVar1 != -3) {
    lVar4 = FUN_002aaa28(param_1);
    lVar5 = *(long *)(lVar3 + 0x40);
    if (lVar4 != lVar5) {
      if (*param_2 == 1) {
        FUN_002ae560(auStack_30,*(undefined8 *)(param_1 + 0x70),lVar5,*(undefined1 *)(lVar3 + 0x38))
        ;
        return;
      }
      if (*param_2 == 0) {
        FUN_002ae400(auStack_30,*(undefined8 *)(param_1 + 0x70),lVar5,*(undefined1 *)(lVar3 + 0x38))
        ;
      }
    }
  }
  return;
}

