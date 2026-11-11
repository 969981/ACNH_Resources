
byte FUN_00428700(ulong *param_1,ulong *param_2)

{
  bool bVar1;
  byte bVar2;
  long lVar3;
  long lVar4;
  uint uVar5;
  ulong *local_30;
  ulong *local_28;
  
  if (param_1 == param_2) {
    return 1;
  }
  while( true ) {
    uVar5 = (uint)*param_1;
    if ((uVar5 >> 0xd & 1) != 0) break;
    if (((*param_1 & 1) != 0) || (param_1 = (ulong *)param_1[1], param_1 == (ulong *)0x0))
    goto LAB_0042878c;
  }
  if (param_1 != (ulong *)0x0) {
    uVar5 = (uVar5 & 0x1fff) - (uVar5 >> 1 & 0x555);
    uVar5 = (uVar5 >> 2 & 0x33333333) + (uVar5 & 0x33333333);
    local_28 = param_1 + (ulong)((uVar5 + (uVar5 >> 4) & 0xf0f0f0f) * 0x1010101 >> 0x18) + 2;
    goto LAB_00428794;
  }
LAB_0042878c:
  local_28 = (ulong *)0x0;
LAB_00428794:
  local_30 = param_2;
  while( true ) {
    uVar5 = (uint)*local_30;
    if ((uVar5 >> 0xd & 1) != 0) break;
    if (((*local_30 & 1) != 0) || (local_30 = (ulong *)local_30[1], local_30 == (ulong *)0x0))
    goto LAB_0042881c;
  }
  if (local_30 != (ulong *)0x0) {
    uVar5 = (uVar5 & 0x1fff) - (uVar5 >> 1 & 0x555);
    uVar5 = (uVar5 >> 2 & 0x33333333) + (uVar5 & 0x33333333);
    local_30 = local_30 + (ulong)((uVar5 + (uVar5 >> 4) & 0xf0f0f0f) * 0x1010101 >> 0x18) + 2;
    bVar1 = true;
    goto joined_r0x004287f8;
  }
LAB_0042881c:
  bVar1 = false;
  local_30 = (ulong *)0x0;
joined_r0x004287f8:
  if (local_28 == (ulong *)0x0) {
    if (!bVar1) {
      lVar3 = FUN_0044f1b0();
      lVar4 = FUN_0044f1b0(param_2);
      bVar2 = lVar3 == lVar4;
      goto LAB_00428840;
    }
  }
  else if (bVar1) {
    bVar2 = FUN_0044f9c0(&local_28,&local_30);
    goto LAB_00428840;
  }
  bVar2 = 0;
LAB_00428840:
  return bVar2 & 1;
}

