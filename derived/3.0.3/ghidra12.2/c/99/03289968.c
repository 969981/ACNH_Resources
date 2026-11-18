
void FUN_03289968(ulong param_1,ushort param_2)

{
  undefined8 uVar1;
  ushort uVar2;
  ushort uVar3;
  undefined4 uVar4;
  long *plVar5;
  undefined8 local_30;
  undefined4 local_28;
  undefined1 local_24;
  
  if (*(char *)(param_1 + 0x57c) == '\x02') {
    uVar3 = *(ushort *)(param_1 + 0x578);
    if (((uVar3 & 1) != (param_2 & 1)) &&
       (((uVar4 = (undefined4)(local_30 >> 0x20), local_30 = local_30 & 0xffffffff00000000,
         (uVar3 & 1) == 0 || (local_30 = CONCAT44(uVar4,2), (uVar3 >> 2 & 1) == 0)) ||
        (local_30 = CONCAT44(uVar4,3), (uVar3 >> 3 & 1) == 0)))) {
      local_30 = local_30 & 0xffffffff00000000;
      plVar5 = *(long **)(param_1 + 0x548);
      uVar2 = uVar3 | 1;
      if ((param_2 & 1) == 0) {
        uVar2 = uVar3 & 0xfffe;
      }
      *(ushort *)(param_1 + 0x578) = uVar2;
      if (plVar5 != (long *)0x0) {
        local_28 = 0;
        local_24 = (undefined1)(param_2 & 1);
        local_30 = param_1;
        (**(code **)(*plVar5 + 0x20))(plVar5,&local_30);
      }
      uVar1 = 7;
      if ((param_2 & 1) == 0) {
        uVar1 = 8;
      }
      FUN_0328a0b0(param_1,uVar1,0,0);
    }
  }
  return;
}

