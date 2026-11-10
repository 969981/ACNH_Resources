
undefined8
FUN_0031f8ac(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,long param_5)

{
  ulong uVar1;
  long lVar2;
  undefined8 local_68;
  long lStack_60;
  undefined4 local_58;
  undefined8 local_50;
  long lStack_48;
  
  if ((*(char *)(*(long *)(param_3 + 0x240) + 0x240) != '\0') || (*(int *)(param_3 + 0x10) != 0x3f))
  {
    local_58 = *(undefined4 *)(param_5 + 0x14);
    local_68 = param_2;
    lStack_60 = param_3;
    local_50 = param_4;
    lStack_48 = param_5;
    uVar1 = FUN_0031bf10(&local_68);
    if ((uVar1 & 1) != 0) {
LAB_0031f90c:
      *(undefined1 *)(param_3 + 9) = 1;
      return 1;
    }
    if ((*(uint *)(param_5 + 0x14) == 3) ||
       (lVar2 = *(long *)(*(long *)(param_3 + 0x240) + (ulong)*(uint *)(param_5 + 0x14) * 8 + 0x350)
       , lVar2 == 0)) {
      FUN_0032c600(**(long **)(param_3 + 0x4d0) + 0x14,param_3,0x80);
    }
    else {
      FUN_00348260(param_2,*(undefined8 *)(lVar2 + 8),0x1ff);
      uVar1 = FUN_0031f9b0(param_1,param_2,param_3,lVar2,param_4,param_5);
      if ((uVar1 & 1) != 0) goto LAB_0031f90c;
    }
  }
  return 0;
}

