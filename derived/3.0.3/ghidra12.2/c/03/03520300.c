
void FUN_03520300(long param_1,long param_2)

{
  int iVar1;
  uint uVar2;
  undefined *puVar3;
  ulong uVar4;
  long lVar5;
  long *plVar6;
  undefined *local_50;
  undefined4 local_48;
  
  if (param_2 == 0) {
    return;
  }
  if (*(int *)(param_2 + 0x54) == 3) {
    return;
  }
  if (*(int *)(param_2 + 0x54) == 0) {
    return;
  }
  if ((*(int *)(param_2 + 0x54) == 4) && (*(long *)(param_2 + 8) != -1)) {
    lVar5 = *(long *)(param_2 + 0x38);
    *(undefined8 *)(lVar5 + 8) = 0xffffffffffffffff;
    *(undefined8 *)(lVar5 + 8) = *(undefined8 *)(param_2 + 8);
    *(undefined4 *)(lVar5 + 0x10) = *(undefined4 *)(param_2 + 0x10);
    *(undefined4 *)(lVar5 + 0x18) = *(undefined4 *)(param_2 + 0x18);
    *(undefined4 *)(param_2 + 0x54) = 0;
  }
  if (*(int *)(param_2 + 0x48) == 2) {
    if (0x3f < *(uint *)(param_2 + 0x4c)) goto LAB_0352044c;
    param_1 = param_1 + (ulong)*(uint *)(param_2 + 0x4c) * 0x30;
    uVar4 = FUN_015d32f4(param_1 + 0x1c430);
    if ((uVar4 & 1) == 0) {
      if ((*(ushort *)(param_1 + 0x1c434) >> 3 & 1) == 0) goto LAB_0352044c;
      goto LAB_03520448;
    }
    if ((1 < *(int *)(param_2 + 0x54) - 1U) || (*(long *)(param_1 + 0x1c438) == 0))
    goto LAB_0352044c;
    lVar5 = *(long *)(param_2 + 0x38);
    FUN_03b137d0(lVar5,*(long *)(param_1 + 0x1c438) + 0x10,0);
    *(undefined4 *)(lVar5 + 0x18) = 0;
  }
  else {
    if ((*(int *)(param_2 + 0x48) != 1) || (0x10d < *(uint *)(param_2 + 0x4c))) goto LAB_0352044c;
    param_1 = param_1 + (ulong)*(uint *)(param_2 + 0x4c) * 0x1a8;
    if (*(int *)(param_1 + 0x3c8) == 1) {
LAB_03520448:
      *(undefined4 *)(param_2 + 0x54) = 1;
      goto LAB_0352044c;
    }
    if ((*(int *)(param_1 + 0x3c8) != 2) || (1 < *(int *)(param_2 + 0x54) - 1U)) goto LAB_0352044c;
    FUN_0340a3bc(param_2 + 0x20,param_1 + 0x228,param_1 + 0x370,param_2);
  }
  *(undefined8 *)(param_2 + 0x54) = 3;
LAB_0352044c:
  puVar3 = PTR_DAT_04bc0cb8;
  iVar1 = *(int *)(param_2 + 0x40);
  if (-1 < iVar1) {
    *(int *)(param_2 + 0x40) = iVar1 + -1;
    local_48 = 0x14;
    plVar6 = *(long **)(param_2 + 0x28);
    uVar2 = ~(int)(*(float *)(param_2 + 0x44) * (float)iVar1);
    local_50 = puVar3 + 0x10;
    (**(code **)(*plVar6 + 0x18))(plVar6,&local_50);
    (**(code **)(plVar6[3] + 0x158))(plVar6[1],uVar2);
    plVar6 = *(long **)(param_2 + 0x30);
    if (plVar6 != (long *)0x0) {
      local_48 = 0x14;
      local_50 = puVar3 + 0x10;
      (**(code **)(*plVar6 + 0x18))(plVar6,&local_50);
      (**(code **)(plVar6[3] + 0x158))(plVar6[1],uVar2);
    }
  }
  return;
}

