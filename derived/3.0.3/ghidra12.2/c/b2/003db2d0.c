
undefined8 FUN_003db2d0(long param_1,long *param_2,undefined8 param_3,ulong param_4)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  long lVar5;
  ulong uVar6;
  undefined1 auStack_c0 [128];
  
  (**(code **)(**(long **)(param_1 + 8) + 0x30))(*(long **)(param_1 + 8),0,0);
  lVar5 = (**(code **)(**(long **)(param_1 + 8) + 0x20))(*(long **)(param_1 + 8),auStack_c0,0x60,0);
  if (lVar5 == 0x60) {
    uVar6 = FUN_003db71c(auStack_c0);
    if ((uVar6 & 1) == 0) {
      return 0;
    }
    iVar2 = FUN_003dbae0(auStack_c0);
    iVar3 = FUN_003dba90(auStack_c0);
    uVar1 = iVar3 + iVar2;
    if (uVar1 <= param_4) {
      (**(code **)(**(long **)(param_1 + 8) + 0x30))(*(long **)(param_1 + 8),0,0);
      lVar5 = (**(code **)(**(long **)(param_1 + 8) + 0x20))
                        (*(long **)(param_1 + 8),param_3,(ulong)uVar1,0);
      if (lVar5 == (int)uVar1) {
        FUN_003db698(param_2,param_3);
        uVar4 = 0;
        if (*param_2 != 0) {
          uVar6 = FUN_003dba10();
          if ((uVar6 & 1) == 0) {
            uVar4 = 0;
          }
          else {
            uVar4 = FUN_003dbb30(*param_2);
          }
        }
        *(undefined4 *)(param_1 + 0x10) = uVar4;
        if ((*param_2 == 0) || (uVar6 = FUN_003dba50(), (uVar6 & 1) == 0)) {
          iVar2 = 0;
        }
        else {
          iVar2 = FUN_003dbbd0(*param_2);
          lVar5 = FUN_003dbc20(param_2[1]);
          iVar2 = iVar2 + *(int *)(lVar5 + 0x40) + 8;
        }
        *(int *)(param_1 + 0x14) = iVar2;
        lVar5 = FUN_003dbc20(param_2[1]);
        *(undefined2 *)(param_1 + 0x18) = *(undefined2 *)(lVar5 + 0x38);
        return 1;
      }
    }
  }
  return 0;
}

