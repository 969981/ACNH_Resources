
void FUN_02cc9468(long *param_1)

{
  undefined4 uVar1;
  long lVar2;
  
  (**(code **)(*param_1 + 0x370))();
  lVar2 = (**(code **)(*param_1 + 0x278))(param_1);
  if (lVar2 != 0) {
    uVar1 = (**(code **)(*param_1 + 0x3e0))(param_1,0);
    *(undefined4 *)((long)param_1 + 0x1c3ec) = uVar1;
    uVar1 = (**(code **)(*param_1 + 0x3e0))(param_1,1);
    *(undefined4 *)(param_1 + 0x387e) = uVar1;
    uVar1 = (**(code **)(*param_1 + 0x3e0))(param_1,2);
    *(undefined4 *)((long)param_1 + 0x1c3f4) = uVar1;
    uVar1 = (**(code **)(*param_1 + 0x3e0))(param_1,3);
    *(undefined4 *)(param_1 + 0x387f) = uVar1;
    uVar1 = (**(code **)(*param_1 + 0x3e0))(param_1,4);
    *(undefined4 *)((long)param_1 + 0x1c3fc) = uVar1;
    uVar1 = (**(code **)(*param_1 + 0x3e0))(param_1,5);
    *(undefined4 *)(param_1 + 0x3880) = uVar1;
    uVar1 = (**(code **)(*param_1 + 0x3e0))(param_1,6);
    *(undefined4 *)((long)param_1 + 0x1c404) = uVar1;
    uVar1 = (**(code **)(*param_1 + 0x3e0))(param_1,7);
    *(undefined4 *)(param_1 + 0x3881) = uVar1;
    uVar1 = (**(code **)(*param_1 + 0x3e0))(param_1,8);
    *(undefined4 *)((long)param_1 + 0x1c40c) = uVar1;
    uVar1 = (**(code **)(*param_1 + 0x3e0))(param_1,9);
    *(undefined4 *)(param_1 + 0x3882) = uVar1;
  }
  return;
}

