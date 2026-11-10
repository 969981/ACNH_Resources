
undefined8 FUN_0031c3b0(undefined8 *param_1)

{
  char cVar1;
  char cVar2;
  ulong uVar3;
  long lVar4;
  code *pcVar5;
  undefined8 uVar6;
  long lVar7;
  int iVar8;
  long lVar9;
  long lVar10;
  long local_50;
  undefined8 uStack_48;
  
  lVar4 = param_1[1];
  lVar10 = *(long *)(lVar4 + 0x480);
  lVar9 = *(long *)(lVar4 + 0x470);
  lVar7 = *(long *)(lVar4 + 0x478);
  if ((((*(long *)(*(long *)(lVar4 + 0x240) + 0x290) != 0) &&
       (pcVar5 = *(code **)(*(long *)(**(long **)(lVar4 + 0x4d0) + 0x28) + 0x50),
       pcVar5 != (code *)0x0)) && (uVar3 = (*pcVar5)(param_1), (uVar3 & 1) == 0)) ||
     (((lVar9 != 0 && (pcVar5 = *(code **)(lVar9 + 0x50), pcVar5 != (code *)0x0)) &&
      (uVar3 = (*pcVar5)(param_1), (uVar3 & 1) == 0)))) {
    return 0;
  }
  if ((lVar7 == 0) || (pcVar5 = *(code **)(lVar7 + 0x50), pcVar5 == (code *)0x0)) {
    lVar4 = *(long *)(param_1[1] + 0x240);
    if (*(long *)(lVar4 + 0x308) != 0) {
      uVar6 = *param_1;
      lVar7 = *(long *)(lVar4 + (ulong)*(uint *)(param_1 + 2) * 8 + 0x350);
      cVar2 = *(char *)(lVar7 + 0x43);
      cVar1 = *(char *)(lVar7 + 0x80);
      uStack_48 = *(undefined8 *)(*(long *)(lVar4 + 0x20) + 400);
      local_50 = *(long *)(*(long *)(lVar4 + 0x20) + 0x188) + *(long *)(lVar4 + 0x38);
      if (cVar2 != -1) {
        FUN_00348cdc(uVar6,(long)cVar2,0,&local_50,*(undefined8 *)(lVar4 + 0x310));
      }
      iVar8 = (int)cVar1;
      if (iVar8 != -1) {
        FUN_00348cdc(uVar6,iVar8,4,&local_50,*(undefined8 *)(lVar4 + 0x310));
      }
    }
  }
  else {
    uVar3 = (*pcVar5)(param_1);
    if ((uVar3 & 1) == 0) {
      return 0;
    }
  }
  if ((lVar10 != 0) && (*(long *)(lVar10 + 0x50) == 0)) {
    lVar4 = *(long *)(param_1[1] + 0x240);
    if (*(uint *)(param_1 + 2) == 3) {
      lVar7 = 0;
      lVar9 = *(long *)(lVar4 + 0x348);
    }
    else {
      lVar7 = *(long *)(lVar4 + (ulong)*(uint *)(param_1 + 2) * 8 + 0x350);
      lVar9 = *(long *)(lVar4 + 0x348);
    }
    if (lVar9 != 0) {
      cVar2 = *(char *)(lVar7 + 0x80);
      uStack_48 = *(undefined8 *)(*(long *)(lVar4 + 0x20) + 400);
      local_50 = *(long *)(*(long *)(lVar4 + 0x20) + 0x188) + *(long *)(lVar4 + 0x30);
      uVar6 = *param_1;
      if (*(char *)(lVar7 + 0x43) != -1) {
        FUN_00348cdc(uVar6,(long)*(char *)(lVar7 + 0x43),0,&local_50,0x80);
      }
      if (cVar2 != -1) {
        FUN_00348cdc(uVar6,(int)cVar2,4,&local_50,0x80);
      }
    }
  }
  return 1;
}

