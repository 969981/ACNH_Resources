
void FUN_022b4af4(undefined4 *param_1,undefined4 *param_2,undefined8 param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined1 auStack_48 [8];
  undefined4 local_40;
  uint uStack_3c;
  undefined8 local_38;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  FUN_0124c030(auStack_48,param_2);
  iVar2 = FUN_0123db50(&local_40,local_38);
  if ((iVar2 == 0x21) || (iVar2 = FUN_0123db50(&local_40,local_38), iVar2 == 0x22)) {
    FUN_022b1170(auStack_48,param_3,1);
    *param_1 = local_40;
    param_1[1] = uStack_3c;
  }
  iVar2 = FUN_0123db50(&local_40,local_38);
  if (iVar2 == 0x20) {
    *param_1 = local_40;
    param_1[1] = uStack_3c & 0xffff001f | 0x20085f;
  }
  return;
}

