
undefined8 FUN_039514b4(long *param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined4 *puVar3;
  undefined8 *puVar4;
  
  uVar1 = (**(code **)(*param_1 + 0x38))();
  uVar2 = 0;
  switch(uVar1) {
  case 1:
    puVar3 = (undefined4 *)(**(code **)(*param_1 + 0x48))(param_1);
    *puVar3 = 0;
    break;
  default:
    goto switchD_039514f8_caseD_2;
  case 3:
    puVar4 = (undefined8 *)(**(code **)(*param_1 + 0x48))(param_1);
    *puVar4 = 0;
    break;
  case 4:
    puVar4 = (undefined8 *)(**(code **)(*param_1 + 0x48))(param_1);
    *puVar4 = 0;
    *(undefined4 *)(puVar4 + 1) = 0;
    break;
  case 5:
  case 6:
    puVar4 = (undefined8 *)(**(code **)(*param_1 + 0x48))(param_1);
    *puVar4 = 0;
    puVar4[1] = 0;
    break;
  case 0x10:
    puVar4 = (undefined8 *)(**(code **)(*param_1 + 0x48))(param_1);
    *puVar4 = 0;
    puVar4[1] = 0x3f80000000000000;
  }
  uVar2 = 1;
switchD_039514f8_caseD_2:
  return uVar2;
}

