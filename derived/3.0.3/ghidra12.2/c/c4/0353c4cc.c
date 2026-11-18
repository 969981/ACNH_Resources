
undefined8 FUN_0353c4cc(long param_1,undefined4 *param_2,undefined4 *param_3)

{
  long *plVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined4 local_38;
  undefined4 uStack_34;
  
  plVar1 = (long *)(*(long *)(param_1 + 8) + 0x1c958);
  local_38 = *param_2;
  uStack_34 = param_2[1];
  lVar4 = (**(code **)(*plVar1 + 0x20))(plVar1);
  uVar2 = FUN_0277d6c4(&local_38);
  if ((uVar2 >> 3 & 0x1fff) < 0x753) {
    uVar2 = *(uint *)(lVar4 + (ulong)((uVar2 & 0xffff) >> 5) * 4) >> (ulong)(uVar2 & 0x1f) & 1;
  }
  else {
    uVar2 = 0;
  }
  local_38 = *param_3;
  uStack_34 = param_3[1];
  lVar4 = (**(code **)(*plVar1 + 0x20))(plVar1);
  uVar3 = FUN_0277d6c4(&local_38);
  if ((uVar3 >> 3 & 0x1fff) < 0x753) {
    uVar3 = *(uint *)(lVar4 + (ulong)((uVar3 & 0xffff) >> 5) * 4) >> (ulong)(uVar3 & 0x1f) & 1;
    if (uVar3 != 0) goto LAB_0353c5a4;
  }
  else {
    uVar3 = 0;
  }
  if (uVar2 == 1) {
    return 0xffffffff;
  }
LAB_0353c5a4:
  if ((uVar2 | uVar3 ^ 1) == 1) {
    uVar5 = FUN_0343b7d0(param_2,param_3);
    return uVar5;
  }
  return 1;
}

