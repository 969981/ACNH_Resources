
undefined8 FUN_00f48058(long param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  undefined8 *puVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  byte local_24 [4];
  
  if (*(char *)(param_1 + 0x100) == '\0') {
    return 1;
  }
  if (*(long *)(param_1 + 8) == 0) {
    return 0;
  }
  local_24[0] = *(byte *)(*(long *)(param_1 + 8) + 0x2a8);
  if (7 < local_24[0]) {
    local_24[0] = 0xff;
  }
  lVar4 = FUN_025830c0(DAT_055021a0,local_24,1);
  if (lVar4 != 0) {
    if (*(long **)(lVar4 + 0x17f68) == (long *)0x0) {
      uVar6 = 0;
    }
    else {
      puVar5 = (undefined8 *)**(long **)(lVar4 + 0x17f68);
      uVar6 = 0;
      if (puVar5 != (undefined8 *)0x0) {
        uVar6 = (**(code **)*puVar5)();
      }
    }
    piVar1 = (int *)(*(long *)(lVar4 + 0x17f50) + *(long *)(lVar4 + 0x17f48));
    if (*param_2 == *piVar1) {
      lVar7 = *(long *)(piVar1 + 1);
      lVar8 = *(long *)(param_2 + 1);
      lVar9 = *(long *)(piVar1 + 3);
      lVar10 = *(long *)(param_2 + 3);
      iVar2 = piVar1[5];
      iVar3 = param_2[5];
      if ((((uVar6 & 1) != 0) && (*(long *)(lVar4 + 0x17f68) != 0)) &&
         (puVar5 = *(undefined8 **)(*(long *)(lVar4 + 0x17f68) + 8), puVar5 != (undefined8 *)0x0)) {
        (**(code **)*puVar5)();
      }
      if ((lVar7 == lVar8 && lVar9 == lVar10) && iVar2 == iVar3) {
        return 1;
      }
    }
    else if ((((uVar6 & 1) != 0) && (*(long *)(lVar4 + 0x17f68) != 0)) &&
            (puVar5 = *(undefined8 **)(*(long *)(lVar4 + 0x17f68) + 8), puVar5 != (undefined8 *)0x0)
            ) {
      (**(code **)*puVar5)();
    }
  }
  return 0;
}

