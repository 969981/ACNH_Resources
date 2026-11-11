
void FUN_00429310(undefined8 *param_1,undefined8 param_2)

{
  long *plVar1;
  uint uVar2;
  ulong *puVar3;
  ulong local_20;
  ulong local_18;
  
  plVar1 = (long *)*param_1;
  puVar3 = (ulong *)*plVar1;
  if (puVar3 == (ulong *)0x0) {
    FUN_004225f0(param_2,"(null Decl)",0xffffffff);
    return;
  }
  do {
    uVar2 = (uint)*puVar3;
    if ((uVar2 >> 0x12 & 1) != 0) {
      uVar2 = (uVar2 & 0x3ffff) - (uVar2 >> 1 & 0x15555);
      uVar2 = (uVar2 >> 2 & 0x33333333) + (uVar2 & 0x33333333);
      local_18 = puVar3[(ulong)((uVar2 + (uVar2 >> 4) & 0xf0f0f0f) * 0x1010101 >> 0x18) + 2];
      puVar3 = (ulong *)*plVar1;
      if (puVar3 != (ulong *)0x0) goto LAB_00429348;
      local_20 = 0;
      goto LAB_0042942c;
    }
    if ((*puVar3 & 1) != 0) {
      local_18 = 0;
      puVar3 = (ulong *)*plVar1;
      if (puVar3 != (ulong *)0x0) goto LAB_00429348;
      local_20 = 0;
      goto LAB_0042942c;
    }
    puVar3 = (ulong *)puVar3[1];
  } while (puVar3 != (ulong *)0x0);
  puVar3 = (ulong *)*plVar1;
  local_18 = 0;
  local_20 = 0;
  if (puVar3 != (ulong *)0x0) {
LAB_00429348:
    do {
      uVar2 = (uint)*puVar3;
      if ((uVar2 >> 0x10 & 1) != 0) {
        uVar2 = (uVar2 & 0xffff) - (uVar2 >> 1 & 0x5555);
        uVar2 = (uVar2 >> 2 & 0x33333333) + (uVar2 & 0x33333333);
        local_20 = puVar3[(ulong)((uVar2 + (uVar2 >> 4) & 0xf0f0f0f) * 0x1010101 >> 0x18) + 2];
        goto LAB_0042942c;
      }
      if ((*puVar3 & 1) != 0) {
        local_20 = 0;
        goto LAB_0042942c;
      }
      puVar3 = (ulong *)puVar3[1];
    } while (puVar3 != (ulong *)0x0);
    local_20 = 0;
  }
LAB_0042942c:
  FUN_00424ca0(param_2,"{}::{}",&DAT_04853828,&local_18,&local_20);
  return;
}

