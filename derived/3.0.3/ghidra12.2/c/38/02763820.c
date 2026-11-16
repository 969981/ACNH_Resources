
void FUN_02763820(long *param_1)

{
  int iVar1;
  int iVar2;
  long lVar3;
  undefined1 *puVar4;
  int iVar5;
  undefined8 local_50;
  undefined8 uStack_48;
  
  lVar3 = (**(code **)(*param_1 + 0x18))();
  if (lVar3 != 0) {
    local_50 = *(undefined8 *)(lVar3 + 8);
    uStack_48 = *(undefined8 *)(lVar3 + 0x10);
    iVar1 = FUN_0272e334(&local_50,0x76b7bec5);
    if (iVar1 != -1) {
      lVar3 = (**(code **)(*param_1 + 0x18))(param_1);
      if ((lVar3 != 0) && (iVar2 = FUN_0272da84(lVar3,iVar1), 0x32 < iVar2)) {
        iVar5 = 0x32;
        do {
          puVar4 = (undefined1 *)FUN_0272e550(param_1 + 1,param_1[6],iVar1,iVar5,0);
          if (puVar4 != (undefined1 *)0x0) {
            *puVar4 = 0xff;
          }
          iVar5 = iVar5 + 1;
        } while (iVar2 != iVar5);
      }
    }
  }
  lVar3 = (**(code **)(*param_1 + 0x18))(param_1);
  if (lVar3 != 0) {
    local_50 = *(undefined8 *)(lVar3 + 8);
    uStack_48 = *(undefined8 *)(lVar3 + 0x10);
    iVar1 = FUN_0272e334(&local_50,0x15dc047a);
    if (iVar1 != -1) {
      lVar3 = (**(code **)(*param_1 + 0x18))(param_1);
      if ((lVar3 != 0) && (iVar2 = FUN_0272da84(lVar3,iVar1), 0x32 < iVar2)) {
        iVar5 = 0x32;
        do {
          puVar4 = (undefined1 *)FUN_0272e550(param_1 + 1,param_1[6],iVar1,iVar5,0);
          if (puVar4 != (undefined1 *)0x0) {
            *puVar4 = 0xff;
          }
          iVar5 = iVar5 + 1;
        } while (iVar2 != iVar5);
      }
    }
  }
  return;
}

