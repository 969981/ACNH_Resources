
undefined8 FUN_0346428c(long *param_1)

{
  undefined1 *puVar1;
  byte bVar2;
  long *plVar3;
  undefined *local_140;
  undefined8 *puStack_138;
  undefined4 local_130;
  undefined1 local_12c;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined4 local_118;
  undefined *local_110;
  undefined1 *puStack_108;
  undefined4 local_100;
  undefined1 local_fc [63];
  undefined1 local_bd;
  undefined *local_b8;
  undefined1 *puStack_b0;
  undefined4 local_a8;
  undefined1 local_a4 [63];
  undefined1 local_65;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined6 uStack_48;
  undefined2 local_42;
  undefined6 uStack_40;
  undefined1 auStack_3a [2];
  uint local_38;
  
  if (param_1 == (long *)0x0) {
    return 0;
  }
  plVar3 = (long *)param_1[1];
  if ((plVar3 != (long *)0x0) && (*param_1 != 0)) {
    if (*(char *)((long)param_1 + 0x12) == '\0') {
      if ((char)plVar3[1] != '\0') {
        FUN_01bea9c8(*plVar3);
        if (*(int *)(*plVar3 + 0xc) == 0xd) {
          *(undefined1 *)(plVar3 + 1) = 0;
          return 0;
        }
        return 0;
      }
      bVar2 = *(byte *)(param_1 + 2);
      *(undefined1 *)((long)param_1 + 0x12) = 1;
    }
    else {
      bVar2 = *(byte *)(param_1 + 2);
    }
    if (bVar2 != *(byte *)((long)param_1 + 0x11)) {
      local_12c = 0;
      local_130 = 0x13;
      local_128 = 0xffffffff;
      uStack_120 = 0xffffffff00000000;
      puStack_138 = &local_60;
      local_118 = 0xffffffff;
      puStack_108 = local_fc;
      local_100 = 0x40;
      local_bd = 0;
      local_fc[0] = 0;
      local_110 = PTR_DAT_04bb2bc0 + 0x10;
      local_a8 = 0x40;
      local_65 = 0;
      local_a4[0] = 0;
      puStack_b0 = local_a4;
      local_140 = PTR_DAT_04bc0bc0 + 0x10;
      uStack_40 = 0;
      local_50 = 0;
      uStack_48 = 0;
      local_42 = 0;
      local_60 = 0;
      uStack_58 = 0;
      puVar1 = auStack_3a;
      if (auStack_3a <= (undefined1 *)((long)&local_60 + 2U)) {
        puVar1 = (undefined1 *)((long)&local_60 + 2U);
      }
      local_b8 = local_110;
      memset(puStack_138,0,(ulong)(puVar1 + (-0xe1 - (long)&local_140)) & 0xfffffffffffffffc | 2);
      local_38 = 0;
      FUN_01be4af0(&local_140,**(undefined4 **)PTR_DAT_04bb3448,bVar2,2,1,3);
      local_38 = (uint)bVar2;
      plVar3 = (long *)param_1[1];
      if ((*param_1 != 0) && ((char)plVar3[1] == '\0')) {
        FUN_01bea4e8(*plVar3,*param_1,&local_140);
        *(undefined1 *)(plVar3 + 1) = 1;
      }
      FUN_01bea9c8(*plVar3);
      if (*(int *)(*plVar3 + 0xc) == 0xd) {
        *(undefined1 *)(plVar3 + 1) = 0;
      }
      *(undefined1 *)((long)param_1 + 0x12) = 0;
      *(char *)((long)param_1 + 0x11) = (char)param_1[2];
      return 1;
    }
  }
  return 0;
}

