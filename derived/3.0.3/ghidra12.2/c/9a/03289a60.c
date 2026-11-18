
void FUN_03289a60(long param_1,ushort param_2,uint param_3)

{
  undefined8 uVar1;
  long *plVar2;
  ushort uVar3;
  undefined8 local_40;
  undefined4 local_38;
  byte local_34;
  
  if (*(char *)(param_1 + 0x57c) == '\x04') {
    uVar3 = *(ushort *)(param_1 + 0x578);
    if (((uVar3 >> 8 & 1) != 0) && ((uVar3 >> 5 & 1) == 0)) {
      if (((param_2 & 1) == 0) && (((uVar3 >> 4 & 1) != 0 && ((uVar3 >> 7 & 1) != 0)))) {
        *(ushort *)(param_1 + 0x250) = *(ushort *)(param_1 + 0x250) | 1;
      }
      else {
        local_40._0_4_ = 0;
        *(ushort *)(param_1 + 0x250) = *(ushort *)(param_1 + 0x250) & 0xfffe;
        FUN_032c2100(param_1 + 0x200);
      }
    }
    if (((param_3 & 1) != 0) || ((*(ushort *)(param_1 + 0x578) >> 1 & 1) != (param_2 & 1))) {
      local_40 = CONCAT44(local_40._4_4_,1);
      if ((param_2 & 1) == 0) {
        uVar3 = *(ushort *)(param_1 + 0x578) & 0xfffd;
      }
      else {
        uVar3 = *(ushort *)(param_1 + 0x578) | 2;
      }
      plVar2 = *(long **)(param_1 + 0x548);
      *(ushort *)(param_1 + 0x578) = uVar3;
      if (plVar2 != (long *)0x0) {
        local_34 = (byte)param_2 & 1;
        local_38 = 1;
        local_40 = param_1;
        (**(code **)(*plVar2 + 0x20))(plVar2,&local_40);
      }
      uVar1 = 0xb;
      if ((param_2 & 1) == 0) {
        uVar1 = 0xc;
      }
      FUN_0328a0b0(param_1,uVar1,param_3 & 1,0);
    }
  }
  return;
}

