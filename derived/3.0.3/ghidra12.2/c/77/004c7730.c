
undefined8 FUN_004c7730(long param_1,undefined8 param_2)

{
  ulong *puVar1;
  ulong uVar2;
  undefined8 local_28;
  undefined8 local_18;
  
  local_28 = 0;
  local_18 = param_2;
  puVar1 = (ulong *)FUN_004706d0(param_1 + 0x158,&local_18,&local_28);
  uVar2 = *puVar1;
  if ((int)uVar2 == 0) {
    return 0;
  }
  return *(undefined8 *)
          (*(long *)(param_1 + 0x58) +
          (-(uVar2 >> 0x1f & 1) & 0xfffffff800000000 | (uVar2 & 0xffffffff) << 3));
}

