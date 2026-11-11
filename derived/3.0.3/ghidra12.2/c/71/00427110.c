
uint FUN_00427110(ulong *param_1,ulong *param_2)

{
  uint uVar1;
  ulong *puVar2;
  bool bVar3;
  ulong *local_28;
  ulong *local_18;
  
  if (param_1 == param_2) {
    return 1;
  }
  local_18 = param_1;
  while( true ) {
    uVar1 = (uint)*local_18;
    if ((uVar1 >> 0xd & 1) != 0) break;
    if (((*local_18 & 1) != 0) || (local_18 = (ulong *)local_18[1], local_18 == (ulong *)0x0))
    goto LAB_0042719c;
  }
  if (local_18 != (ulong *)0x0) {
    uVar1 = (uVar1 & 0x1fff) - (uVar1 >> 1 & 0x555);
    uVar1 = (uVar1 >> 2 & 0x33333333) + (uVar1 & 0x33333333);
    local_18 = local_18 + (ulong)((uVar1 + (uVar1 >> 4) & 0xf0f0f0f) * 0x1010101 >> 0x18) + 2;
    goto LAB_004271a4;
  }
LAB_0042719c:
  local_18 = (ulong *)0x0;
LAB_004271a4:
  local_28 = param_2;
  while( true ) {
    uVar1 = (uint)*local_28;
    if ((uVar1 >> 0xd & 1) != 0) break;
    if (((*local_28 & 1) != 0) || (local_28 = (ulong *)local_28[1], local_28 == (ulong *)0x0))
    goto LAB_00427220;
  }
  if (local_28 != (ulong *)0x0) {
    uVar1 = (uVar1 & 0x1fff) - (uVar1 >> 1 & 0x555);
    uVar1 = (uVar1 >> 2 & 0x33333333) + (uVar1 & 0x33333333);
    bVar3 = false;
    local_28 = local_28 + (ulong)((uVar1 + (uVar1 >> 4) & 0xf0f0f0f) * 0x1010101 >> 0x18) + 2;
    goto joined_r0x00427208;
  }
LAB_00427220:
  local_28 = (ulong *)0x0;
  bVar3 = true;
joined_r0x00427208:
  if ((local_18 == (ulong *)0x0) || (bVar3)) {
    puVar2 = (ulong *)FUN_0044f1b0(param_2);
    for (; param_1 != (ulong *)0x0; param_1 = (ulong *)param_1[1]) {
      if (param_1 == puVar2) {
        uVar1 = 1;
        goto LAB_00427254;
      }
    }
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_0044f950(&local_18,&local_28);
  }
LAB_00427254:
  return uVar1 & 1;
}

