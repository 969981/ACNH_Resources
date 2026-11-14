
void FUN_01d77dbc(undefined8 *param_1,int param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  long lVar4;
  
  *(undefined2 *)((long)param_1 + 0xc) = 0;
  *param_1 = 0xffffffffffffffff;
  if (param_2 < 0) {
    return;
  }
  if (2 < param_3) {
    iVar1 = 9;
    if (1 < param_3 - 3) {
      iVar1 = -1;
    }
    goto joined_r0x01d77e40;
  }
  uVar2 = 0;
  if (DAT_0538adc8 == 0) goto LAB_01d77e80;
  if (*(long *)(DAT_0538adc8 + 0x68) == 0) {
switchD_01d77e20_default:
    uVar2 = 0;
    goto LAB_01d77e80;
  }
  switch(param_3) {
  case 0:
    uVar2 = *(uint *)(DAT_0538adc8 + 0x170);
    break;
  case 1:
    uVar2 = *(uint *)(DAT_0538adc8 + 0x180);
    break;
  case 2:
    lVar4 = *(long *)(DAT_0538adc8 + 0x1b8);
    uVar2 = *(uint *)(DAT_0538adc8 + 0x1b0);
    goto LAB_01d77e78;
  case 3:
    uVar2 = *(uint *)(DAT_0538adc8 + 0x610) &
            ((int)*(uint *)(DAT_0538adc8 + 0x610) >> 0x1f ^ 0xffffffffU);
    break;
  case 4:
    lVar4 = *(long *)(DAT_0538adc8 + 0x1e0);
    uVar2 = *(uint *)(DAT_0538adc8 + 0x1d8);
LAB_01d77e78:
    if (lVar4 == 0) {
      uVar2 = 0xffffffff;
    }
    break;
  default:
    goto switchD_01d77e20_default;
  }
LAB_01d77e80:
  iVar1 = uVar2 - 1;
joined_r0x01d77e40:
  if (iVar1 < param_2) {
switchD_01d77eb8_default:
    return;
  }
  switch(param_3) {
  case 0:
    uVar3 = *(undefined4 *)(DAT_0538adc8 + 0x164);
    break;
  case 1:
    uVar3 = *(undefined4 *)(DAT_0538adc8 + 0x168);
    break;
  case 2:
    uVar3 = *(undefined4 *)(DAT_0538adc8 + 0x1d0);
    break;
  case 3:
    uVar3 = *(undefined4 *)(DAT_0538adc8 + 0x240);
    break;
  case 4:
    uVar3 = *(undefined4 *)(DAT_0538adc8 + 0x1f8);
    break;
  default:
    goto switchD_01d77eb8_default;
  }
  *(undefined4 *)param_1 = uVar3;
  *(int *)((long)param_1 + 4) = param_2;
  *(uint *)(param_1 + 1) = param_3;
  return;
}

