
void FUN_031b0a40(int param_1,long param_2,undefined8 param_3)

{
  undefined1 *puVar1;
  int iVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  ulong uVar5;
  undefined *local_148;
  undefined8 *puStack_140;
  undefined4 local_138;
  undefined1 local_134;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined4 local_120;
  undefined *local_118;
  undefined1 *puStack_110;
  undefined4 local_108;
  undefined1 local_104 [63];
  undefined1 local_c5;
  undefined *local_c0;
  undefined1 *puStack_b8;
  undefined4 local_b0;
  undefined1 local_ac [63];
  undefined1 local_6d;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined6 uStack_50;
  undefined2 local_4a;
  undefined6 uStack_48;
  undefined1 auStack_42 [2];
  undefined4 local_40;
  int local_38;
  undefined4 local_34;
  
  if (param_2 != 0) {
    local_38 = param_1;
    if (param_1 != 3) {
      if ((param_1 == 2) || (param_1 != 1)) {
        puVar3 = &DAT_0406e81c;
      }
      else {
        puVar3 = &DAT_040739f1;
      }
      FUN_031b0590(param_2,puVar3,param_3,1);
      return;
    }
    local_134 = 0;
    local_138 = 0x13;
    local_130 = 0xffffffff;
    uStack_128 = 0xffffffff00000000;
    puStack_140 = &local_68;
    local_120 = 0xffffffff;
    puStack_110 = local_104;
    local_108 = 0x40;
    local_c5 = 0;
    local_104[0] = 0;
    local_118 = PTR_DAT_04bb2bc0 + 0x10;
    local_b0 = 0x40;
    local_6d = 0;
    local_ac[0] = 0;
    puStack_b8 = local_ac;
    local_148 = PTR_DAT_04bc0bc0 + 0x10;
    local_68 = 0;
    uStack_60 = 0;
    uStack_48 = 0;
    puVar1 = auStack_42;
    if (auStack_42 <= (undefined1 *)((long)&local_68 + 2U)) {
      puVar1 = (undefined1 *)((long)&local_68 + 2U);
    }
    local_58 = 0;
    uStack_50 = 0;
    local_4a = 0;
    local_c0 = local_118;
    memset(puStack_140,0,(ulong)(puVar1 + (-0xe1 - (long)&local_148)) & 0xfffffffffffffffc | 2);
    local_40 = 0;
    FUN_01be4af0(&local_148,**(undefined4 **)PTR_DAT_04bb3448,0x96,3,1,1);
    local_40 = 0x96;
    if (*(long *)PTR_DAT_04bb6538 == 0) {
      if ((DAT_057147e0 & 1) == 0) {
        iVar2 = __cxa_guard_acquire(&DAT_057147e0);
        puVar3 = PTR_DAT_04bc0a78;
        if (iVar2 != 0) {
          DAT_057147dc = 0;
          DAT_057147d8 = *(int *)PTR_DAT_04bc0b30;
          *(int *)PTR_DAT_04bc0b30 = DAT_057147d8 + 1;
          DAT_057147d0 = puVar3 + 0x10;
          FUN_001001d0(PTR_LAB_04bc0758,&DAT_057147d0,&__DT_FINI_ARRAY);
          __cxa_guard_release(&DAT_057147e0);
        }
        puVar4 = &DAT_057147d0;
      }
      else {
        puVar4 = &DAT_057147d0;
      }
    }
    else {
      puVar4 = (undefined8 *)(*(long *)PTR_DAT_04bb6538 + 0x260);
    }
    if (((*PTR_DAT_04bc0a88 & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(PTR_DAT_04bc0a88), iVar2 != 0)) {
      FUN_01bb25c8(PTR_DAT_04bc0a80);
      __cxa_guard_release(PTR_DAT_04bc0a88);
    }
    if (0 < (int)*(uint *)PTR_DAT_04bc0a80) {
      uVar5 = 0;
      do {
        if (*(int *)(*(long *)(PTR_DAT_04bc0a80 + 8) + uVar5 * 4) == 0x5a) goto LAB_031b0c0c;
        uVar5 = uVar5 + 1;
      } while (*(uint *)PTR_DAT_04bc0a80 != uVar5);
    }
    uVar5 = 0;
LAB_031b0c0c:
    local_34 = (undefined4)uVar5;
    FUN_01bafc20(puVar4,&local_148,0,&local_34,0);
    FUN_031b0590(param_2,&DAT_04069442,param_3,1);
  }
  return;
}

