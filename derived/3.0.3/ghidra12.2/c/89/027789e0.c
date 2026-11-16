
int FUN_027789e0(long param_1,byte *param_2)

{
  int *piVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  uint uVar4;
  long lVar5;
  undefined8 *puVar6;
  int iVar7;
  undefined8 uVar8;
  int iVar9;
  int *piVar10;
  byte local_44 [4];
  
  local_44[0] = *param_2;
  uVar4 = 1;
  if (7 < local_44[0]) {
    local_44[0] = 0xff;
  }
  lVar5 = FUN_025830c0(DAT_055021a0,local_44,1);
  if (*(long **)(lVar5 + 0x17f68) != (long *)0x0) {
    puVar6 = (undefined8 *)**(long **)(lVar5 + 0x17f68);
    if (puVar6 == (undefined8 *)0x0) {
      uVar4 = 1;
    }
    else {
      uVar4 = (**(code **)*puVar6)();
      uVar4 = uVar4 ^ 1;
    }
  }
  iVar7 = 0;
  iVar9 = 0;
  piVar1 = (int *)(*(long *)(lVar5 + 0x17f50) + *(long *)(lVar5 + 0x17f48));
  while( true ) {
    piVar10 = (int *)(param_1 + (long)iVar7 * 0x11c);
    if ((*piVar10 == *piVar1) &&
       ((*(long *)(piVar1 + 1) == *(long *)(piVar10 + 1) &&
        *(long *)(piVar1 + 3) == *(long *)(piVar10 + 3)) && piVar1[5] == piVar10[5]))
    goto joined_r0x02778b10;
    if (*piVar10 == 0) break;
    iVar9 = iVar9 + 1;
    iVar7 = iVar7 + 1;
    if (iVar9 == 0x14) {
      iVar9 = -1;
joined_r0x02778b10:
      if ((((uVar4 & 1) == 0) && (*(long *)(lVar5 + 0x17f68) != 0)) &&
         (puVar6 = *(undefined8 **)(*(long *)(lVar5 + 0x17f68) + 8), puVar6 != (undefined8 *)0x0)) {
        (**(code **)*puVar6)();
      }
      return iVar9;
    }
  }
  piVar10[6] = 0;
  piVar10[2] = 0;
  piVar10[3] = 0;
  piVar10[4] = 0;
  piVar10[5] = 0;
  piVar10[0] = 0;
  piVar10[1] = 0;
  FUN_0273aba0(param_1 + (long)iVar7 * 0x11c + 0x1c);
  uVar2 = *(undefined8 *)piVar1;
  uVar3 = *(undefined8 *)(piVar1 + 2);
  uVar8 = *(undefined8 *)(piVar1 + 4);
  piVar10[6] = piVar1[6];
  *(undefined8 *)piVar10 = uVar2;
  *(undefined8 *)(piVar10 + 2) = uVar3;
  *(undefined8 *)(piVar10 + 4) = uVar8;
  goto joined_r0x02778b10;
}

