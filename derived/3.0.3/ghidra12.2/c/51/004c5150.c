
undefined8 FUN_004c5150(long param_1)

{
  ulong *puVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 local_28;
  undefined8 local_18;
  
  local_18 = FUN_0047b100(*(undefined8 *)(param_1 + 0x110));
  local_28 = 0xffffffffffffffff;
  puVar1 = (ulong *)FUN_004706d0(param_1 + 0x68,&local_18,&local_28);
  uVar2 = 0;
  uVar3 = *puVar1;
  if ((-1 < (int)uVar3) && ((int)uVar3 != 0x50000000)) {
    uVar2 = *(undefined8 *)
             (*(long *)(param_1 + 0x58) +
             (-(uVar3 >> 0x1f & 1) & 0xfffffff800000000 | (uVar3 & 0xffffffff) << 3));
  }
  return uVar2;
}

