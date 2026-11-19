
undefined8
FUN_039a8dc0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            undefined8 param_5)

{
  undefined8 uVar1;
  long lVar2;
  long *plVar3;
  undefined8 local_d0;
  undefined4 local_c8;
  undefined2 local_c4;
  undefined1 local_c2;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  local_c2 = 0;
  local_c0 = 0;
  uStack_b8 = 0;
  local_c8 = 0xffffffff;
  local_c4 = 1;
  local_d0 = 0xffffffffffffffff;
  local_b0 = 0;
  uStack_a8 = 8;
  lVar2 = *(long *)(*(long *)PTR_DAT_04bb4e50 + 0x58);
  local_a0 = 0;
  uStack_98 = 0xffffffffffffffff;
  local_90 = 0;
  uStack_88 = 8;
  local_80 = 0;
  uStack_78 = 0xffffffffffffffff;
  local_70 = 0;
  uStack_68 = 8;
  local_60 = 0;
  uStack_58 = 0xffffffffffffffff;
  local_50 = 0;
  uStack_48 = 8;
  local_40 = 0;
  uStack_38 = 0xffffffffffffffff;
  uVar1 = FUN_039aa808(param_2,0,param_3,param_4,param_1,&local_d0,param_5,lVar2);
  *(undefined8 *)(param_1 + 0x50) = uVar1;
  if ((lVar2 != 0) && (plVar3 = *(long **)(param_1 + 0xa0), plVar3 != (long *)0x0)) {
    FUN_039b2d48(plVar3 + 0x16,&local_d0,lVar2);
    *(long **)(*(long *)(*plVar3 + 0x50) + 0xf0) = plVar3 + 0x16;
    uVar1 = *(undefined8 *)(param_1 + 0x50);
  }
  return uVar1;
}

