
void FUN_03f83600(undefined8 *param_1)

{
  bool bVar1;
  bool bVar2;
  ulong uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  
  if ((*(byte *)((long)param_1 + 0xc) & 1) != 0) {
    *(undefined1 *)(param_1 + 1) = 0x10;
    *(undefined1 *)((long)param_1 + 0xb) = 0;
    bVar1 = -1 < *(char *)((long)param_1 + 0xd);
    bVar2 = *(char *)((long)param_1 + 0xe) != '\0';
    uVar4 = 0x10;
    if (bVar1 && bVar2) {
      uVar4 = 0;
    }
    uVar5 = 0;
    if (bVar1 && bVar2) {
      uVar5 = 0x10;
    }
    *(undefined1 *)((long)param_1 + 9) = uVar4;
    *(undefined1 *)((long)param_1 + 10) = uVar5;
    uVar3 = (**(code **)(*(long *)*param_1 + 0x10))((long *)*param_1,0);
    if ((uVar3 & 1) != 0) {
      (**(code **)(*(long *)*param_1 + 0x18))((long *)*param_1,0);
      (**(code **)(*(long *)*param_1 + 0x20))((long *)*param_1,0);
    }
    uVar3 = (**(code **)(*(long *)*param_1 + 0x10))((long *)*param_1,1);
    if ((uVar3 & 1) != 0) {
      (**(code **)(*(long *)*param_1 + 0x18))((long *)*param_1,1);
                    /* WARNING: Could not recover jumptable at 0x03f836c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*(long *)*param_1 + 0x20))((long *)*param_1,1);
      return;
    }
  }
  return;
}

