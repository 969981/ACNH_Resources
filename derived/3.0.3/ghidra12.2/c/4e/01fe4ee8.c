
uint FUN_01fe4ee8(long param_1,float *param_2)

{
  ushort uVar1;
  ushort uVar2;
  uint uVar3;
  ulong uVar4;
  undefined8 *local_30;
  uint local_28;
  uint local_24;
  
  local_30 = &DAT_048f9750;
  local_28 = (int)((float)(int)*param_2 / 5.0) - (uint)(*param_2 < 0.0);
  local_24 = (int)((float)(int)param_2[2] / 5.0) - (uint)(param_2[2] < 0.0);
  uVar4 = FUN_01fabae0(param_1,&local_30);
  if ((uVar4 & 1) == 0) {
    uVar3 = 0;
    uVar1 = *(ushort *)(param_1 + 0x188);
    if (((uint)uVar1 <= (local_28 & 0xffff)) &&
       ((local_28 & 0xffff) <= (((uint)uVar1 + (uint)*(ushort *)(param_1 + 0x194)) - 1 & 0xffff))) {
      uVar3 = 0;
      uVar2 = *(ushort *)(param_1 + 0x18a);
      if (((uint)uVar2 <= (local_24 & 0xffff)) &&
         ((local_24 & 0xffff) <= (((uint)uVar2 + (uint)*(ushort *)(param_1 + 0x198)) - 1 & 0xffff)))
      {
        uVar3 = (local_28 - uVar1) +
                *(int *)(*(long *)(param_1 + 0x1c8) + 0x1c) * (local_24 - uVar2);
        uVar3 = *(uint *)(*(long *)(*(long *)(param_1 + 0x1c8) + 0x10) + (long)((int)uVar3 >> 5) * 4
                         ) >> (ulong)(uVar3 & 0x1f) & 1;
      }
    }
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}

