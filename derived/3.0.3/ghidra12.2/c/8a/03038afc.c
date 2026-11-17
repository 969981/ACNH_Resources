
void FUN_03038afc(long param_1,undefined4 *param_2)

{
  undefined *puVar1;
  long *plVar2;
  undefined4 local_a0;
  undefined4 uStack_9c;
  undefined4 local_98;
  undefined8 local_90;
  undefined **appuStack_88 [4];
  undefined **local_68 [4];
  undefined4 local_48;
  undefined *local_40;
  undefined4 local_38;
  
  local_68[0] = &PTR_LAB_04af54c0;
  local_48 = 8;
  local_a0 = *param_2;
  uStack_9c = param_2[1];
  local_98 = *(undefined4 *)(param_1 + 0x70);
  local_90 = *(undefined8 *)(param_1 + 0x78);
  appuStack_88[0] = &PTR_LAB_04af54c0;
  (**(code **)(*(long *)(param_1 + 0x80) + 0x10))((long *)(param_1 + 0x80),appuStack_88);
  (**(code **)(*(long *)(param_1 + 0xa0) + 0x10))((long *)(param_1 + 0xa0),local_68);
  FUN_030389b4(param_1,&local_a0);
  *(undefined4 *)(param_1 + 0x144) = 0;
  plVar2 = *(long **)(param_1 + 0x10);
  *(ushort *)(param_1 + 0x140) = *(ushort *)(param_1 + 0x140) | 2;
  puVar1 = PTR_DAT_04bc0cb8;
  if (plVar2 != (long *)0x0) {
    local_40 = PTR_DAT_04bc0cb8 + 0x10;
    local_38 = 0x14;
    (**(code **)(*plVar2 + 0x18))(plVar2,&local_40);
    (**(code **)(plVar2[3] + 0x158))(plVar2[1],0);
  }
  plVar2 = *(long **)(param_1 + 0x30);
  if (plVar2 != (long *)0x0) {
    local_40 = puVar1 + 0x10;
    local_38 = 0x14;
    (**(code **)(*plVar2 + 0x18))(plVar2,&local_40);
    (**(code **)(plVar2[3] + 0x158))(plVar2[1],0);
  }
  return;
}

