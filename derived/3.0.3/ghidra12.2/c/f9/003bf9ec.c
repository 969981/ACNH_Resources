
void FUN_003bf9ec(undefined8 param_1,undefined4 param_2,long param_3)

{
  undefined8 uVar1;
  code *pcVar2;
  
  switch(param_2) {
  case 0:
    FUN_003c0ba0();
    uVar1 = 2;
    pcVar2 = *(code **)(param_3 + 0x180);
    break;
  case 1:
    FUN_003c0ba0();
    uVar1 = 3;
    pcVar2 = *(code **)(param_3 + 0x180);
    break;
  case 2:
  case 3:
    uVar1 = 1;
    pcVar2 = *(code **)(param_3 + 0x180);
    goto joined_r0x003bfa38;
  default:
    uVar1 = 2;
    pcVar2 = *(code **)(param_3 + 0x180);
joined_r0x003bfa38:
    if (pcVar2 == (code *)0x0) goto LAB_003bfa78;
    goto LAB_003bfa64;
  }
  if (pcVar2 != (code *)0x0) {
LAB_003bfa64:
    (*pcVar2)(param_3,uVar1,*(undefined8 *)(param_3 + 0x188));
    *(undefined8 *)(param_3 + 0x180) = 0;
    *(undefined8 *)(param_3 + 0x188) = 0;
  }
LAB_003bfa78:
  *(undefined8 *)(param_3 + 400) = 0;
  *(undefined2 *)(param_3 + 0xc0) = 0;
  *(undefined1 *)(param_3 + 0xc2) = 0;
  return;
}

