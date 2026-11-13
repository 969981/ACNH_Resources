
void FUN_01434748(long param_1)

{
  uint *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  int iVar4;
  long lVar5;
  undefined4 local_4;
  
  lVar5 = *(long *)(*(long *)(param_1 + 0x2e8) + 0x70);
  if (lVar5 == 0) {
    iVar4 = -1;
  }
  else {
    iVar4 = *(int *)(lVar5 + 0x280);
    if (iVar4 == 1) {
      return;
    }
  }
  if (iVar4 == -1) {
    return;
  }
  puVar1 = (uint *)(param_1 + 0x2c0);
  if ((*puVar1 >> 8 & 1) != 0) {
    *puVar1 = *puVar1 & 0xfffffeff;
  }
  local_4 = 4;
  if ((*(uint *)(param_1 + 0x2c0) >> 4 & 1) != 0) {
    switch(*(undefined4 *)(param_1 + 0x280)) {
    case 0:
    case 2:
      goto switchD_0143486c_caseD_0;
    case 1:
    case 3:
      lVar5 = *(long *)(param_1 + 0x2f0);
      if (lVar5 == 0) {
        return;
      }
      FUN_01485f9c(lVar5);
      goto LAB_014349dc;
    default:
      break;
    }
  }
  switch(*(undefined4 *)(param_1 + 0x280)) {
  case 0:
    goto switchD_014348b0_caseD_0;
  case 1:
  case 3:
    lVar5 = *(long *)(param_1 + 0x2f0);
    if (lVar5 == 0) {
      return;
    }
    if (((*(long *)(lVar5 + 0x1420) != 0) && (DAT_05231900 != 0)) &&
       (*(long *)(DAT_05231900 + 0x110) != 0)) {
      FUN_015709f0();
      *(undefined8 *)(lVar5 + 0x1420) = 0;
    }
LAB_014349dc:
    FUN_01486bb0(lVar5);
    return;
  case 2:
    lVar5 = *(long *)(param_1 + 0x2f0);
    if (lVar5 == 0) {
      return;
    }
    if (DAT_04c487d4 != -1) {
      local_4 = 1;
      puVar1 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)DAT_04c487d4 * 8);
      if (0xff < (uint)(int)DAT_04c487d4) {
        puVar1 = (uint *)PTR_DAT_04bc39f8;
      }
      if ((*puVar1 >> 1 & 1) != 0) goto LAB_014349c0;
    }
    goto LAB_014349ac;
  default:
    goto switchD_014348b0_default;
  }
switchD_0143486c_caseD_0:
  lVar5 = *(long *)(param_1 + 0x2f0);
  if (lVar5 == 0) {
    return;
  }
  local_4 = 1;
  uVar2 = FUN_0290cbcc(&local_4);
  if ((uVar2 & 1) != 0) goto LAB_014349c0;
LAB_014349ac:
  uVar2 = FUN_0180c0c0();
  if ((uVar2 & 1) == 0) {
    uVar3 = 0;
LAB_014349bc:
    FUN_01486ef4(lVar5,uVar3);
  }
  goto LAB_014349c0;
switchD_014348b0_caseD_0:
  lVar5 = *(long *)(param_1 + 0x2f0);
  if (lVar5 == 0) {
    return;
  }
  if (DAT_04c487d4 == -1) {
LAB_01434940:
    uVar2 = FUN_0180c0c0();
    if ((uVar2 & 1) != 0) goto LAB_014349c0;
    uVar3 = 1;
    goto LAB_014349bc;
  }
  local_4 = 1;
  puVar1 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)DAT_04c487d4 * 8);
  if (0xff < (uint)(int)DAT_04c487d4) {
    puVar1 = (uint *)PTR_DAT_04bc39f8;
  }
  if ((*puVar1 >> 1 & 1) == 0) goto LAB_01434940;
LAB_014349c0:
  FUN_01486860(lVar5);
switchD_014348b0_default:
  return;
}

