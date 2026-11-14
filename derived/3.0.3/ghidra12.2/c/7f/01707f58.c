
void FUN_01707f58(long param_1,uint param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  uint uVar4;
  long lVar5;
  undefined1 *__dest;
  uint local_60;
  undefined1 local_5c;
  undefined2 local_58;
  undefined1 local_56;
  undefined1 local_55;
  undefined4 local_54;
  undefined1 local_50;
  undefined2 local_4c;
  undefined1 local_4a;
  undefined1 local_49;
  undefined4 local_48;
  undefined2 local_44;
  undefined1 local_42;
  
  lVar5 = *(long *)(param_1 + 0x1138);
  if (lVar5 == 0) {
    return;
  }
  *(undefined8 *)(param_1 + 0x1628) = *(undefined8 *)(lVar5 + 0x78);
  *(undefined8 *)(param_1 + 0x1630) = *(undefined8 *)(param_1 + 0x1150);
  __dest = *(undefined1 **)(param_1 + 0x1640);
  if (__dest == &DAT_048fd4c1) {
LAB_01708004:
    uVar4 = 0;
    if (*(long *)(lVar5 + 0x78) != 0) {
      uVar4 = *(uint *)(*(long *)(lVar5 + 0x78) + 0x18);
    }
    uVar2 = param_3;
    if (uVar4 <= param_3) {
      uVar2 = 0;
    }
    if (*(uint *)(lVar5 + 0x80) <= uVar2) {
      uVar2 = 0;
    }
    if (**(char **)(*(long *)(lVar5 + 0x88) + (long)(int)uVar2 * 0xe8 + 0x68) == '\0') {
      return;
    }
    uVar4 = *(uint *)(param_1 + 0x1698) >> 1 & 1;
  }
  else {
    iVar1 = 4;
    if (*(int *)(param_1 + 0x1648) < 5) {
      iVar1 = *(int *)(param_1 + 0x1648) + -1;
    }
    memcpy(__dest,&DAT_048fd4c1,(long)iVar1);
    __dest[iVar1] = 0;
    lVar5 = *(long *)(param_1 + 0x1138);
    if (lVar5 != 0) goto LAB_01708004;
    if (*DAT_04c931a8 == '\0') {
      return;
    }
    uVar4 = 0;
  }
  uVar2 = 0;
  if (*(char *)(param_1 + 0x5f03) != '\0') {
    uVar2 = param_2;
  }
  *(uint *)(param_1 + 0x1694) = *(uint *)(param_1 + 0x1698);
  if (param_3 < 8) {
    *(uint *)(param_1 + 0x1698) =
         *(uint *)(param_1 + 0x1698) & (1 << (ulong)(param_3 & 0x1f) ^ 0xffffffffU);
  }
  local_60 = param_3;
  uVar3 = (**(code **)(*(long *)(param_1 + 0x1620) + 0x30))(param_1 + 0x1620);
  FUN_0171b760(param_1 + 0x1620,uVar3,uVar2);
  if (*(long *)(param_1 + 0x1138) != 0) {
    FUN_038501b0((float)uVar2,*(long *)(param_1 + 0x1138),param_3);
    FUN_0384fab0(*(undefined8 *)(param_1 + 0x1138),param_3,1);
  }
  if (param_3 == 3) {
    *(undefined4 *)(param_1 + 0x16c0) = 0;
    if (uVar4 != 3) goto LAB_01708174;
  }
  else {
    if (param_3 == 2) {
      *(undefined4 *)(param_1 + 0x16c4) = 0;
    }
    if (uVar4 != param_3) goto LAB_01708174;
  }
  local_5c = 1;
  local_50 = 1;
  local_58 = *(undefined2 *)PTR_DAT_04bb37e0;
  local_56 = PTR_DAT_04bb37e0[2];
  local_55 = PTR_DAT_04bb37e0[3];
  local_54 = *(undefined4 *)(PTR_DAT_04bb37e0 + 4);
  local_42 = 0;
  local_44 = 0x101;
  local_60 = uVar2;
  local_4c = local_58;
  local_4a = local_56;
  local_49 = local_55;
  local_48 = local_54;
  FUN_0170f380(param_1,&local_60);
LAB_01708174:
  if (*(long *)(param_1 + 0x1138) == 0) {
    return;
  }
  FUN_038501b0(0x40c00000,*(long *)(param_1 + 0x1138),param_3);
  return;
}

