
void FUN_0026b59c(undefined8 param_1,long param_2,undefined8 param_3,int *param_4)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  undefined4 *puVar4;
  undefined4 local_54;
  ErrorResultVariant aEStack_50 [12];
  undefined4 local_44;
  ErrorResultVariant aEStack_40 [12];
  undefined4 local_34;
  
  local_44 = 0;
  local_54 = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_40,(Result *)&local_54);
  if (((*(int *)(param_2 + 0xa0) == 1) ||
      (lVar2 = FUN_002ba790(DAT_04c61168), *(long *)(lVar2 + 0x98) != 0)) ||
     ((param_4 != (int *)0x0 && (*param_4 == 1)))) {
    local_54 = 0x10c08;
    local_34 = 0;
    nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_50,(Result *)&local_34);
    puVar4 = &local_54;
  }
  else {
    *(undefined4 *)(param_2 + 0xbc) = 0;
    *(undefined1 *)(param_2 + 0x9b) = 0xfe;
    *(undefined8 *)(param_2 + 0xc0) = 0;
    *(undefined4 *)(param_2 + 0x11c) = 0;
    *(undefined1 *)(param_2 + 0x120) = 0;
    iVar1 = FUN_002212bc(*(undefined8 *)(param_2 + 8));
    if ((iVar1 != 0) && (iVar1 = FUN_002212bc(*(undefined8 *)(param_2 + 8)), iVar1 != 5)) {
      (**(code **)(**(long **)(param_2 + 8) + 0x10))(*(long **)(param_2 + 8),1);
    }
    uVar3 = FUN_00263220(*(undefined8 *)(param_2 + 8),param_3,param_4);
    if ((uVar3 & 1) != 0) {
      FUN_002211bc(*(undefined8 *)(param_2 + 8),1);
    }
    puVar4 = &local_44;
  }
  FUN_002296c4(param_1,puVar4);
  return;
}

