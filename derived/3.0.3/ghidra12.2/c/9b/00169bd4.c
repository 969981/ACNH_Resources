
undefined8 FUN_00169bd4(long param_1,long *param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long local_58;
  long local_50;
  long local_48;
  
  lVar3 = *(long *)(param_1 + 0x98);
  lVar4 = *(long *)(param_1 + 0xa0);
  local_48 = (ulong)(*(char *)(param_1 + 0xea) != '\0') << 0x20;
  local_58 = lVar3;
  local_50 = lVar4;
  uVar1 = FUN_0016a010(*(undefined8 *)(lVar3 + 0x10),*(undefined8 *)(lVar3 + 0x18));
  local_48 = CONCAT44(local_48._4_4_,uVar1);
  if ((*(char *)(param_1 + 0xe9) == '\0') ||
     (uVar2 = FUN_0016ad18(param_1,&local_58,0,0), (int)uVar2 == 0)) {
    uVar2 = 0;
    *param_2 = local_58;
    param_2[1] = local_50;
    param_2[2] = local_48;
    *(long *)(param_1 + 0xa8) = lVar3;
    *(long *)(param_1 + 0xb0) = lVar4;
    *(long *)(param_1 + 0x98) = 0;
    *(undefined8 *)(param_1 + 0xa0) = 0;
  }
  return uVar2;
}

