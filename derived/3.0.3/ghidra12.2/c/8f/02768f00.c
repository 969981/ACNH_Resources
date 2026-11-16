
void FUN_02768f00(long *param_1,long *param_2,undefined2 *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  undefined2 *puVar6;
  undefined8 local_50;
  undefined8 uStack_48;
  
  if (param_1 == (long *)0x0) {
    return;
  }
  lVar5 = (**(code **)(*param_1 + 0x18))();
  if (lVar5 == 0) {
LAB_02768f84:
    iVar1 = 0;
  }
  else {
    local_50 = *(undefined8 *)(lVar5 + 8);
    uStack_48 = *(undefined8 *)(lVar5 + 0x10);
    iVar1 = FUN_0272e334(&local_50,0xe7f3ea97);
    if ((iVar1 == -1) || (lVar5 = (**(code **)(*param_1 + 0x18))(param_1), lVar5 == 0))
    goto LAB_02768f84;
    iVar1 = FUN_0272da84(lVar5,iVar1);
  }
  lVar5 = (**(code **)(*param_2 + 0x18))(param_2);
  if (lVar5 != 0) {
    local_50 = *(undefined8 *)(lVar5 + 8);
    uStack_48 = *(undefined8 *)(lVar5 + 0x10);
    iVar2 = FUN_0272e334(&local_50,0xe7f3ea97);
    if ((iVar2 != -1) && (lVar5 = (**(code **)(*param_2 + 0x18))(param_2), lVar5 != 0)) {
      iVar2 = FUN_0272da84(lVar5,iVar2);
      goto LAB_02768fe4;
    }
  }
  iVar2 = 0;
LAB_02768fe4:
  lVar5 = (**(code **)(*param_1 + 0x18))(param_1);
  if (lVar5 != 0) {
    local_50 = *(undefined8 *)(lVar5 + 8);
    uStack_48 = *(undefined8 *)(lVar5 + 0x10);
    iVar3 = FUN_0272e334(&local_50,0xe7f3ea97);
    if (iVar3 != -1) {
      lVar5 = (**(code **)(*param_1 + 0x18))(param_1);
      iVar4 = 0;
      if (lVar5 != 0) {
        iVar4 = FUN_0272da84(lVar5,iVar3);
      }
      if (iVar1 <= iVar4) {
        iVar4 = iVar1;
      }
      if (iVar2 < iVar4) {
        do {
          lVar5 = (**(code **)(*param_1 + 0x18))(param_1);
          if (((lVar5 != 0) && (lVar5 = FUN_0272dfd4(lVar5,iVar3), lVar5 == 8)) &&
             (puVar6 = (undefined2 *)FUN_0272e550(param_1 + 1,param_1[6],iVar3,iVar2,0),
             puVar6 != (undefined2 *)0x0)) {
            *puVar6 = *param_3;
            *(undefined1 *)(puVar6 + 1) = *(undefined1 *)(param_3 + 1);
            *(undefined1 *)((long)puVar6 + 3) = *(undefined1 *)((long)param_3 + 3);
            *(undefined4 *)(puVar6 + 2) = *(undefined4 *)(param_3 + 2);
          }
          iVar2 = iVar2 + 1;
        } while (iVar4 != iVar2);
      }
    }
  }
  return;
}

