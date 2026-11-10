
bool FUN_0031bb50(undefined8 *param_1)

{
  char cVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long local_40;
  undefined8 uStack_38;
  
  lVar4 = *(long *)(param_1[1] + 0x240);
  if (*(uint *)(param_1 + 2) == 3) {
    lVar2 = 0;
    lVar5 = *(long *)(lVar4 + 0x308);
  }
  else {
    lVar2 = *(long *)(lVar4 + (ulong)*(uint *)(param_1 + 2) * 8 + 0x350);
    lVar5 = *(long *)(lVar4 + 0x308);
  }
  if (lVar5 != 0) {
    cVar1 = *(char *)(lVar2 + 0x80);
    uStack_38 = *(undefined8 *)(*(long *)(lVar4 + 0x20) + 400);
    local_40 = *(long *)(*(long *)(lVar4 + 0x20) + 0x188) + *(long *)(lVar4 + 0x38);
    uVar3 = *param_1;
    if (*(char *)(lVar2 + 0x43) != -1) {
      FUN_00348cdc(uVar3,(long)*(char *)(lVar2 + 0x43),0,&local_40,*(undefined8 *)(lVar4 + 0x310));
    }
    if (cVar1 != -1) {
      FUN_00348cdc(uVar3,(int)cVar1,4,&local_40,*(undefined8 *)(lVar4 + 0x310));
    }
  }
  return lVar5 != 0;
}

