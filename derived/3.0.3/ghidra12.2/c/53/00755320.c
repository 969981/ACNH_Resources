
void FUN_00755320(long *param_1)

{
  long lVar1;
  int iVar2;
  long local_40;
  char local_38;
  char local_36;
  undefined4 local_18;
  undefined4 uStack_14;
  
  uStack_14 = *(undefined4 *)(param_1[9] + 0x234);
  local_18 = *(undefined4 *)(param_1[9] + 0x230);
  FUN_0071cb58(&local_40,&uStack_14,&local_18,0);
  if ((((local_40 != 0) && (local_38 != '\0')) && (local_36 != '\0')) && (0 < (int)param_1[0x5e])) {
    iVar2 = 0;
    do {
      (**(code **)(*param_1 + 0xe8))(param_1,iVar2);
      (**(code **)(*param_1 + 0x100))(param_1,*(long *)(local_40 + 0x68) + 0x278);
      (**(code **)(*param_1 + 0x150))(param_1,*(long *)(local_40 + 0x68) + 0x2b0);
      (**(code **)(*param_1 + 0x178))(*(undefined4 *)(*(long *)(local_40 + 0x68) + 0x2a0),param_1);
      lVar1 = *(long *)(local_40 + 0x68);
      iVar2 = iVar2 + 1;
      *(undefined4 *)((long)param_1 + 700) = *(undefined4 *)(lVar1 + 700);
      *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(lVar1 + 0x2c0);
      *(undefined4 *)((long)param_1 + 0x2c4) = *(undefined4 *)(lVar1 + 0x2c4);
    } while (iVar2 < (int)param_1[0x5e]);
  }
  return;
}

