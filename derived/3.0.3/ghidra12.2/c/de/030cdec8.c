
void FUN_030cdec8(undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,long param_4)

{
  undefined *puVar1;
  long *plVar2;
  long lVar3;
  undefined4 local_4c;
  undefined4 uStack_48;
  undefined4 local_44;
  undefined *local_40;
  undefined4 local_38;
  
  lVar3 = *(long *)(param_4 + 600);
  if (lVar3 != 0) {
    plVar2 = *(long **)(lVar3 + 0x1d0);
    local_4c = FUN_030cd3bc();
    puVar1 = PTR_DAT_04bc0cb8 + 0x10;
    local_38 = 8;
    uStack_48 = param_2;
    local_44 = param_3;
    local_40 = puVar1;
    (**(code **)(*plVar2 + 0x18))(plVar2,&local_40);
    (**(code **)(plVar2[3] + 0x98))(plVar2[1],&local_4c);
    plVar2 = *(long **)(lVar3 + 0x1d0);
    local_38 = 10;
    local_40 = puVar1;
    (**(code **)(*plVar2 + 0x18))(plVar2,&local_40);
    (**(code **)(plVar2[3] + 0xb8))(plVar2[1],PTR_DAT_04bbdc38);
    plVar2 = *(long **)(*(long *)(lVar3 + 0x230) + (ulong)(2 < *(uint *)(lVar3 + 0x228)) * 0x10);
    if (plVar2 != (long *)0x0) {
      local_40 = PTR_DAT_04bc4f00 + 0x10;
      local_38 = 0x14;
      (**(code **)(*plVar2 + 0x18))(plVar2,&local_40);
      (**(code **)(plVar2[3] + 0x158))(0x40000000,plVar2[1]);
    }
  }
  return;
}

