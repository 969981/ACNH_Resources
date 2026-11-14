
undefined8 FUN_016d2a20(long *param_1,uint param_2)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined *local_40;
  undefined1 *puStack_38;
  
  iVar3 = FUN_016d2640();
  if (iVar3 == -1) {
    (**(code **)(*param_1 + 0x18))(param_1);
    (**(code **)(*param_1 + 0x18))(param_1);
    if ((undefined1 *)param_1[1] == &DAT_040716fb) {
LAB_016d2ac0:
      puStack_38 = &DAT_040aaf55;
LAB_016d2b68:
      local_40 = PTR_DAT_04bb2020 + 0x10;
      iVar3 = FUN_016d2640(&local_40,param_2 & 1);
      if (iVar3 != -1) goto LAB_016d2b74;
    }
    else {
      uVar5 = 0;
      bVar2 = true;
      do {
        cVar1 = ((undefined1 *)param_1[1])[uVar5];
        if (cVar1 != (&DAT_040716fb)[uVar5]) break;
        if (cVar1 == '\0') {
          if (bVar2) goto LAB_016d2ac0;
          break;
        }
        bVar2 = uVar5 < 0x80000;
        uVar5 = uVar5 + 1;
      } while (uVar5 != 0x80001);
      (**(code **)(*param_1 + 0x18))(param_1);
      (**(code **)(*param_1 + 0x18))(param_1);
      if ((undefined1 *)param_1[1] == &DAT_040aaf55) {
LAB_016d2b50:
        puStack_38 = &DAT_040716fb;
        goto LAB_016d2b68;
      }
      uVar5 = 0;
      bVar2 = true;
      do {
        cVar1 = ((undefined1 *)param_1[1])[uVar5];
        if (cVar1 != (&DAT_040aaf55)[uVar5]) break;
        if (cVar1 == '\0') {
          if (bVar2) goto LAB_016d2b50;
          break;
        }
        bVar2 = uVar5 < 0x80000;
        uVar5 = uVar5 + 1;
      } while (uVar5 != 0x80001);
    }
    uVar4 = 0;
  }
  else {
LAB_016d2b74:
    uVar4 = 1;
  }
  return uVar4;
}

