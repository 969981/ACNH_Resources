
void FUN_00deaa20(undefined8 *param_1,long *param_2)

{
  char cVar1;
  bool bVar2;
  ulong uVar3;
  
  (**(code **)(*param_2 + 0x18))();
  (**(code **)(*param_2 + 0x18))(param_2);
  if ((char *)param_2[1] == "Player") {
LAB_00deaaa4:
    *param_1 = 0x29f5;
    FUN_0277d4ac(param_1);
    return;
  }
  uVar3 = 0;
  bVar2 = true;
  do {
    cVar1 = ((char *)param_2[1])[uVar3];
    if (cVar1 != "Player"[uVar3]) break;
    if (cVar1 == '\0') {
      if (bVar2) goto LAB_00deaaa4;
      break;
    }
    bVar2 = uVar3 < 0x80000;
    uVar3 = uVar3 + 1;
  } while (uVar3 != 0x80001);
  FUN_021f6050(param_1,param_2);
  return;
}

