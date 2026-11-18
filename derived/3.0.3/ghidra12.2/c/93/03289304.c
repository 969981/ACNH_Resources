
void FUN_03289304(ulong param_1,ushort param_2)

{
  long *plVar1;
  ushort uVar2;
  ulong local_40;
  undefined4 local_38;
  undefined1 local_34;
  
  uVar2 = *(ushort *)(param_1 + 0x578);
  if ((uVar2 >> 7 & 1) == (param_2 & 1)) {
    return;
  }
  if (((param_2 & 1) == 0) || ((uVar2 >> 4 & 1) == 0)) {
    local_40 = local_40 & 0xffffffff00000000;
    *(ushort *)(param_1 + 0x250) = *(ushort *)(param_1 + 0x250) & 0xfffe;
    FUN_032c2100(param_1 + 0x200);
    uVar2 = *(ushort *)(param_1 + 0x578);
    if ((param_2 & 1) == 0) {
      uVar2 = uVar2 & 0xff7f;
      goto LAB_032893e4;
    }
  }
  else {
    *(ushort *)(param_1 + 0x250) = *(ushort *)(param_1 + 0x250) | 1;
  }
  uVar2 = uVar2 | 0x80;
LAB_032893e4:
  plVar1 = *(long **)(param_1 + 0x548);
  *(ushort *)(param_1 + 0x578) = uVar2;
  if (plVar1 != (long *)0x0) {
    local_38 = 7;
    local_34 = (undefined1)(param_2 & 1);
    local_40 = param_1;
    (**(code **)(*plVar1 + 0x20))(plVar1,&local_40);
  }
  return;
}

