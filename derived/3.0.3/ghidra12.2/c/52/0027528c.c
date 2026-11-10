
void FUN_0027528c(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined4 local_40;
  ErrorResultVariant aEStack_3c [12];
  undefined4 local_24;
  
  if (*(int *)(param_3 + 1) == 0) {
switchD_002752d4_default:
    local_40 = 0x2c03;
    goto LAB_0027539c;
  }
  switch(*(undefined1 *)*param_3) {
  case 1:
    uVar3 = 0;
    goto LAB_00275384;
  case 2:
    uVar3 = 0;
    goto LAB_00275394;
  case 3:
    FUN_002753d0(param_2,param_3);
    break;
  case 4:
    lVar1 = FUN_002ba790(DAT_04c61168);
    if (*(long *)(lVar1 + 0x98) != 0) {
      uVar3 = param_3[2];
      plVar2 = (long *)FUN_002ba790(DAT_04c61168);
      lVar1 = (**(code **)(*plVar2 + 0x38))(plVar2,uVar3);
      if (lVar1 == 0) {
        plVar2 = (long *)FUN_002ba790(DAT_04c61168);
        lVar1 = (**(code **)(*plVar2 + 0x60))(plVar2,param_3 + 3);
        if (lVar1 == 0) break;
      }
      if (*(char *)(*(long *)(lVar1 + 0xa0) + 0x7c) != '\0') {
        *(undefined1 *)(*(long *)(lVar1 + 0xa0) + 0x7c) = 0;
      }
    }
    break;
  case 5:
    FUN_00275588(param_2,param_3);
    break;
  case 6:
    uVar3 = 1;
LAB_00275384:
    FUN_00276108(param_2,param_3,uVar3);
    break;
  case 7:
    uVar3 = 1;
LAB_00275394:
    FUN_00276c7c(param_2,param_3,uVar3);
    break;
  default:
    goto switchD_002752d4_default;
  }
  local_40 = 0;
LAB_0027539c:
  local_24 = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_3c,(Result *)&local_24);
  FUN_002296c4(param_1,&local_40);
  return;
}

