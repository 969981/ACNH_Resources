
void FUN_01a282fc(long *param_1)

{
  long lVar1;
  undefined4 uVar2;
  long local_40;
  char local_38;
  char local_36;
  undefined4 local_18;
  undefined4 uStack_14;
  
  uStack_14 = *(undefined4 *)(param_1[9] + 0x234);
  local_18 = *(undefined4 *)(param_1[9] + 0x230);
  FUN_0071cb58(&local_40,&uStack_14,&local_18,0);
  if (((local_40 != 0) && (local_38 != '\0')) && (local_36 != '\0')) {
    lVar1 = *(long *)(local_40 + 0x68);
    (**(code **)(*param_1 + 0x108))(*(undefined4 *)(lVar1 + 0x278),param_1);
    (**(code **)(*param_1 + 0x110))(*(undefined4 *)(lVar1 + 0x27c),param_1);
    (**(code **)(*param_1 + 0x118))(*(undefined4 *)(lVar1 + 0x280),param_1);
    lVar1 = *(long *)(local_40 + 0x68);
    *(undefined4 *)(param_1 + 0x56) = *(undefined4 *)(lVar1 + 0x2b0);
    *(undefined4 *)((long)param_1 + 0x2b4) = *(undefined4 *)(lVar1 + 0x2b4);
    *(undefined4 *)(param_1 + 0x57) = *(undefined4 *)(lVar1 + 0x2b8);
    uVar2 = *(undefined4 *)(*(long *)(local_40 + 0x68) + 0x2a0);
    *(undefined4 *)(param_1 + 0x54) = uVar2;
    *(undefined4 *)((long)param_1 + 0x2a4) = uVar2;
    *(undefined4 *)(param_1 + 0x55) = uVar2;
    lVar1 = *(long *)(local_40 + 0x68);
    *(undefined4 *)((long)param_1 + 700) = *(undefined4 *)(lVar1 + 700);
    *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(lVar1 + 0x2c0);
    *(undefined4 *)((long)param_1 + 0x2c4) = *(undefined4 *)(lVar1 + 0x2c4);
  }
  return;
}

