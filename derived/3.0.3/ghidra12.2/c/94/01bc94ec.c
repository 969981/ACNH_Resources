
void FUN_01bc94ec(long *param_1,undefined8 param_2)

{
  undefined1 *puVar1;
  long *plVar2;
  undefined *local_128;
  undefined8 *puStack_120;
  undefined4 local_118;
  undefined1 local_114;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined4 local_100;
  undefined *local_f8;
  undefined1 *puStack_f0;
  undefined4 local_e8;
  undefined1 local_e4 [63];
  undefined1 local_a5;
  undefined *local_a0;
  undefined1 *puStack_98;
  undefined4 local_90;
  undefined1 local_8c [63];
  undefined1 local_4d;
  undefined8 local_48;
  undefined6 uStack_40;
  undefined2 local_3a;
  undefined6 uStack_38;
  undefined1 auStack_32 [2];
  undefined1 uStack_11;
  
  plVar2 = (long *)(**(code **)(*param_1 + 0x50))();
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x10))(&uStack_11);
    local_114 = 0;
    local_118 = 0xb;
    local_110 = 0xffffffff;
    uStack_108 = 0xffffffff00000000;
    puStack_f0 = local_e4;
    puStack_120 = &local_48;
    local_100 = 0xffffffff;
    local_e8 = 0x40;
    local_a5 = 0;
    local_e4[0] = 0;
    local_f8 = PTR_DAT_04bb2bc0 + 0x10;
    local_90 = 0x40;
    local_4d = 0;
    local_8c[0] = 0;
    puStack_98 = local_8c;
    uStack_38 = 0;
    local_128 = PTR_DAT_04bb5128 + 0x10;
    local_48 = 0;
    uStack_40 = 0;
    local_3a = 0;
    puVar1 = auStack_32;
    if (auStack_32 <= (undefined1 *)((long)&local_48 + 2U)) {
      puVar1 = (undefined1 *)((long)&local_48 + 2U);
    }
    local_a0 = local_f8;
    memset(puStack_120,0,(ulong)(puVar1 + (-0xe1 - (long)&local_128)) & 0xfffffffffffffffc | 2);
    FUN_01c11758(&local_128,&uStack_11);
    FUN_01bc2320(param_1,param_2,&local_128);
  }
  return;
}

