
void FUN_0029aa20(int *param_1,long param_2)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined4 local_40;
  ErrorResultVariant aEStack_3c [12];
  undefined4 local_24;
  
  if (*(int *)(param_2 + 0x110) != 1) {
    lVar1 = param_2 + 0x110;
    if (*(int *)(param_2 + 0x140) != 0) {
      FUN_00220f24(lVar1);
      *(undefined4 *)(param_2 + 0x140) = 0;
    }
    if (*(int *)(param_2 + 0xd0) == 1) {
      local_40 = 0;
      *param_1 = 0;
      nn::err::ErrorResultVariant::ErrorResultVariant
                ((ErrorResultVariant *)(param_1 + 1),(Result *)&local_40);
      uVar2 = FUN_0026c070(DAT_04c603c8);
      if (((uVar2 & 1) == 0) || (uVar2 = FUN_0026afd0(DAT_04c603c8), (uVar2 & 1) != 0)) {
        FUN_002960c0(&local_40,*(undefined8 *)(param_2 + 0x38),lVar1);
        FUN_00229780(param_1,&local_40);
        if (*param_1 == 0) {
          uVar3 = *(undefined8 *)(param_2 + 0x38);
LAB_0029ab44:
          FUN_002211bc(uVar3,0);
          *(undefined4 *)(param_2 + 0x140) = 5;
          (**(code **)(**(long **)(param_2 + 8) + 0x98))();
          return;
        }
      }
      else {
        FUN_00293284(&local_40,*(undefined8 *)(param_2 + 0x40),lVar1);
        FUN_00229780(param_1,&local_40);
        if (*param_1 == 0) {
          uVar3 = *(undefined8 *)(param_2 + 0x40);
          goto LAB_0029ab44;
        }
      }
      return;
    }
  }
  local_24 = 0;
  local_40 = 0x10c08;
  nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_3c,(Result *)&local_24);
  FUN_002296c4(param_1,&local_40);
  return;
}

