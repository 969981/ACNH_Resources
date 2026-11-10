
void FUN_0019c39c(long param_1,byte param_2)

{
  byte bVar1;
  byte bVar2;
  long *plVar3;
  undefined8 uVar4;
  code *pcVar5;
  undefined8 local_38;
  
  plVar3 = (long *)(param_1 + 0x78);
  (**(code **)(*plVar3 + 0x10))(plVar3);
  bVar2 = *(byte *)(param_1 + 0x50);
  bVar1 = param_2 & 1;
  if ((bVar2 == bVar1) || (*(byte *)(param_1 + 0x50) = bVar1, (param_2 & 1) == 0)) {
    pcVar5 = (code *)0x0;
  }
  else {
    FUN_00187810(&local_38);
    *(undefined8 *)(param_1 + 0x58) = local_38;
    pcVar5 = *(code **)(param_1 + 0x60);
    if (pcVar5 != (code *)0x0) {
      uVar4 = *(undefined8 *)(param_1 + 0x68);
      *(undefined8 *)(param_1 + 0x60) = 0;
      (**(code **)(*plVar3 + 0x20))(plVar3);
      goto joined_r0x0019c448;
    }
  }
  uVar4 = 0;
  (**(code **)(*plVar3 + 0x20))(plVar3);
joined_r0x0019c448:
  if ((bVar2 == bVar1) || (pcVar5 == (code *)0x0)) {
    return;
  }
  (*pcVar5)(uVar4);
  return;
}

