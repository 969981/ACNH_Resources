
void FUN_0044e030(long param_1,uint param_2,uint param_3)

{
  uint *puVar1;
  ulong *puVar2;
  uint uVar3;
  
  if (((*(byte *)(param_1 + 2) >> 4 & 1) == 0) ||
     (puVar1 = (uint *)FUN_00426db0(param_1,0x100000), puVar1 == (uint *)0x0)) {
    uVar3 = 0;
  }
  else {
    uVar3 = *puVar1 & 0xf0000000;
  }
  puVar2 = (ulong *)FUN_00426d40(param_1,0x100000);
  *puVar2 = (ulong)(param_2 & 0xffff | (param_3 & 0xfff) << 0x10 | uVar3);
  return;
}

