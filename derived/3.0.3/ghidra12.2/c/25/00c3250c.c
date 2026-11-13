
void FUN_00c3250c(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined *local_30;
  char *pcStack_28;
  undefined8 local_8;
  
  local_30 = PTR_DAT_04bb2020 + 0x10;
  pcStack_28 = "MncBoxProgress";
  uVar1 = FUN_02758850(&local_30);
  switch(uVar1) {
  case 0:
    local_8 = 0x9c4;
    FUN_0277d4ac(&local_8);
    FUN_00c31ec4(&local_30,&local_8);
    FUN_02759370(&local_30,0x1e);
    local_8 = 0xad0;
    goto LAB_00c326b8;
  case 1:
    local_8 = 0x9c6;
    FUN_0277d4ac(&local_8);
    FUN_00c31ec4(&local_30,&local_8);
    FUN_02759370(&local_30,0xf);
    local_8 = 0xc12;
    FUN_0277d4ac(&local_8);
    FUN_00c31ec4(&local_30,&local_8);
    FUN_02759370(&local_30,10);
    local_8 = 0xacf;
    FUN_0277d4ac(&local_8);
    FUN_00c31ec4(&local_30,&local_8);
    uVar2 = 10;
    break;
  case 2:
    local_8 = 0x9c6;
    FUN_0277d4ac(&local_8);
    FUN_00c31ec4(&local_30,&local_8);
    FUN_02759370(&local_30,10);
    local_8 = 0xc12;
    FUN_0277d4ac(&local_8);
    FUN_00c31ec4(&local_30,&local_8);
    uVar2 = 0xf;
    break;
  case 3:
    local_8 = 0x9cf;
    FUN_0277d4ac(&local_8);
    FUN_00c31ec4(&local_30,&local_8);
    FUN_02759370(&local_30,0xf);
    local_8 = 0xad1;
    goto LAB_00c326b8;
  case 4:
    local_8 = 0x9c6;
    FUN_0277d4ac(&local_8);
    FUN_00c31ec4(&local_30,&local_8);
    FUN_02759370(&local_30,0x1e);
    local_8 = 0x9cf;
LAB_00c326b8:
    FUN_0277d4ac(&local_8);
    FUN_00c31ec4(&local_30,&local_8);
    uVar2 = 10;
    break;
  case 5:
    local_8 = 0x9c9;
    FUN_0277d4ac(&local_8);
    FUN_00c31ec4(&local_30,&local_8);
    FUN_02759370(&local_30,1);
    local_8 = 0x9cf;
    FUN_0277d4ac(&local_8);
    FUN_00c31ec4(&local_30,&local_8);
    uVar2 = 0x1e;
    break;
  default:
    goto switchD_00c3255c_default;
  }
  FUN_02759370(&local_30,uVar2);
switchD_00c3255c_default:
  return;
}

