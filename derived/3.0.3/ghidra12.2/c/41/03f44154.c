
void FUN_03f44154(undefined8 *param_1)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  
  lVar3 = param_1[0x15];
  *param_1 = &PTR_LAB_04ba9268;
  if (lVar3 != 0) {
    plVar2 = *(long **)(lVar3 + 0x18);
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 0x20))(plVar2);
      iVar1 = *(int *)(lVar3 + 0xc) + -1;
      if (((*(int *)(lVar3 + 0xc) < 1) || (*(int *)(lVar3 + 0xc) = iVar1, iVar1 == 0)) &&
         (*(long *)(lVar3 + 0x10) != 0)) {
        FUN_03f44508();
        *(undefined8 *)(lVar3 + 0x10) = 0;
      }
      (**(code **)(*plVar2 + 0x28))(plVar2);
    }
    param_1[0x15] = 0;
  }
  if (*(int *)(param_1 + 8) != 7) {
    if (param_1[4] != 0) {
      FUN_03f42ca4(param_1[4],param_1,1);
    }
    param_1[3] = 0;
    param_1[4] = 0;
    *(undefined4 *)(param_1 + 8) = 7;
    param_1[6] = 0;
    param_1[7] = 0;
  }
  *param_1 = &PTR_LAB_04ba92f0;
  FUN_038e1c80(param_1 + 0xb);
  return;
}

