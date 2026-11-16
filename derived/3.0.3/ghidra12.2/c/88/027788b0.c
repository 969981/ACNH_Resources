
int FUN_027788b0(long param_1,byte *param_2)

{
  int *piVar1;
  uint uVar2;
  long lVar3;
  undefined8 *puVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  byte local_34 [4];
  
  local_34[0] = *param_2;
  uVar2 = 1;
  if (7 < local_34[0]) {
    local_34[0] = 0xff;
  }
  lVar3 = FUN_025830c0(DAT_055021a0,local_34,1);
  if (*(long **)(lVar3 + 0x17f68) != (long *)0x0) {
    puVar4 = (undefined8 *)**(long **)(lVar3 + 0x17f68);
    if (puVar4 == (undefined8 *)0x0) {
      uVar2 = 1;
    }
    else {
      uVar2 = (**(code **)*puVar4)();
      uVar2 = uVar2 ^ 1;
    }
  }
  iVar5 = 0;
  iVar7 = 0;
  piVar1 = (int *)(*(long *)(lVar3 + 0x17f50) + *(long *)(lVar3 + 0x17f48));
  do {
    piVar6 = (int *)(param_1 + (long)iVar5 * 0x11c);
    if ((*piVar6 == *piVar1) &&
       ((*(long *)(piVar1 + 1) == *(long *)(piVar6 + 1) &&
        *(long *)(piVar1 + 3) == *(long *)(piVar6 + 3)) && piVar1[5] == piVar6[5]))
    goto joined_r0x02778998;
    iVar7 = iVar7 + 1;
    iVar5 = iVar5 + 1;
  } while (iVar7 != 0x14);
  iVar7 = -1;
joined_r0x02778998:
  if ((((uVar2 & 1) == 0) && (*(long *)(lVar3 + 0x17f68) != 0)) &&
     (puVar4 = *(undefined8 **)(*(long *)(lVar3 + 0x17f68) + 8), puVar4 != (undefined8 *)0x0)) {
    (**(code **)*puVar4)();
  }
  return iVar7;
}

