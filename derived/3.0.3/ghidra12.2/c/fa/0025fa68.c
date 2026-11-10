
bool FUN_0025fa68(long param_1,long *param_2)

{
  ushort uVar1;
  ushort uVar2;
  short sVar3;
  short sVar4;
  ulong uVar5;
  
  if (param_2 == (long *)0x0) {
    return false;
  }
  uVar1 = *(ushort *)(param_1 + 0x16);
  if ((((uVar1 != 0xffff) && (*(short *)(param_1 + 0x14) != -1)) &&
      ((uVar2 = (**(code **)(*param_2 + 8))(param_2), uVar2 < uVar1 ||
       (uVar1 = *(ushort *)(param_1 + 0x14), uVar2 = (**(code **)(*param_2 + 8))(param_2),
       uVar1 < uVar2)))) ||
     ((*(char *)(param_1 + 0x19) != '\0' &&
      (uVar5 = (**(code **)(*param_2 + 0x10))(param_2), (uVar5 & 1) == 0)))) {
    return false;
  }
  if (*(char *)(param_1 + 0x1b) == '\0') {
    return true;
  }
  sVar3 = (**(code **)*param_2)(param_2);
  sVar4 = (**(code **)(*param_2 + 8))(param_2);
  return sVar3 != sVar4;
}

