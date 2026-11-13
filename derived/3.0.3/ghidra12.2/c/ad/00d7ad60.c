
void FUN_00d7ad60(long param_1)

{
  undefined1 *puVar1;
  int iVar2;
  undefined8 uVar3;
  ulong uVar4;
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
  undefined4 local_30;
  undefined4 local_24;
  
  if (*(uint *)(param_1 + 0x160) < 2) {
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
    local_30 = 2;
    FUN_01c138cc(&local_128);
    FUN_01d923d4(*(undefined8 *)PTR_DAT_04bb3730,&local_128);
    uVar3 = *(undefined8 *)(**(long **)(*(long *)(*(long *)(param_1 + 8) + 0x290) + 0x20) + 8);
    if ((DAT_0533a3c0 & 1) == 0) {
      iVar2 = __cxa_guard_acquire(&DAT_0533a3c0);
      if (iVar2 != 0) {
        FUN_01bb25c8(&DAT_0533a3b0);
        __cxa_guard_release(&DAT_0533a3c0);
      }
    }
    if (0 < (int)DAT_0533a3b0) {
      uVar4 = 0;
      do {
        if (*(int *)(DAT_0533a3b8 + uVar4 * 4) == 0x73) goto LAB_00d7ae9c;
        uVar4 = uVar4 + 1;
      } while (DAT_0533a3b0 != uVar4);
    }
    uVar4 = 0;
LAB_00d7ae9c:
    local_24 = (undefined4)uVar4;
    FUN_01baea40(uVar3,&local_128,0,&local_24,2);
  }
  *(undefined4 *)(param_1 + 0xb0) = 1;
  return;
}

