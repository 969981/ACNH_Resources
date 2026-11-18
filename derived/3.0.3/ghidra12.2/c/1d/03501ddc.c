
void FUN_03501ddc(long param_1)

{
  int iVar1;
  uint uVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  uint uVar6;
  undefined8 uVar7;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  
  puVar3 = PTR_DAT_04bb7bc8;
  iVar1 = *(int *)(param_1 + 0x1ce0c);
  if (iVar1 - 2U < 2) {
    local_3c = 5;
  }
  else {
    if (iVar1 != 1) {
      return;
    }
    local_3c = 10;
  }
  uStack_34 = *(undefined4 *)(param_1 + 0x1ce14);
  local_38 = 0;
  FUN_01d773bc(*(undefined8 *)PTR_DAT_04bb7bc8,&local_3c);
  iVar1 = *(int *)(param_1 + 0x1ce0c);
  if (iVar1 - 2U < 2) {
    FUN_03501f5c(param_1);
    return;
  }
  if (iVar1 != 1) {
    return;
  }
  lVar4 = *(long *)puVar3;
  uVar2 = *(uint *)(param_1 + 0x1ce14);
  if ((int)uVar2 < 0) goto LAB_03501f2c;
  if (*(int *)(param_1 + 0x1ce20) - 3U < 2) {
    uVar6 = 10;
    goto LAB_03501f08;
  }
  uVar6 = 0;
  if (DAT_0538adc8 == 0) goto LAB_03501f08;
  if (*(long *)(DAT_0538adc8 + 0x68) == 0) {
switchD_03501ec4_default:
    uVar6 = 0;
    goto LAB_03501f08;
  }
  switch(*(int *)(param_1 + 0x1ce20)) {
  case 0:
    uVar6 = *(uint *)(DAT_0538adc8 + 0x170);
    break;
  case 1:
    uVar6 = *(uint *)(DAT_0538adc8 + 0x180);
    break;
  case 2:
    lVar5 = *(long *)(DAT_0538adc8 + 0x1b8);
    uVar6 = *(uint *)(DAT_0538adc8 + 0x1b0);
    goto LAB_03501f00;
  case 3:
    uVar6 = *(uint *)(DAT_0538adc8 + 0x610) &
            ((int)*(uint *)(DAT_0538adc8 + 0x610) >> 0x1f ^ 0xffffffffU);
    break;
  case 4:
    lVar5 = *(long *)(DAT_0538adc8 + 0x1e0);
    uVar6 = *(uint *)(DAT_0538adc8 + 0x1d8);
LAB_03501f00:
    if (lVar5 == 0) {
      uVar6 = 0xffffffff;
    }
    break;
  default:
    goto switchD_03501ec4_default;
  }
LAB_03501f08:
  if ((int)uVar2 < (int)uVar6) {
    lVar5 = param_1 + 0x1ce28 + (ulong)uVar2 * 0x18;
    if (0x20 < uVar2) {
      lVar5 = param_1 + 0x1ce28;
    }
  }
  else {
LAB_03501f2c:
    lVar5 = 0;
  }
  uVar7 = *(undefined8 *)(lVar5 + 8);
  *(undefined8 *)(lVar4 + 0x2b) = *(undefined8 *)(lVar5 + 0xf);
  *(undefined8 *)(lVar4 + 0x24) = uVar7;
  *(undefined1 *)(lVar4 + 0x32) = 1;
  return;
}

