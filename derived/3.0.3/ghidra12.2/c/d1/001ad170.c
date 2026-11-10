
long FUN_001ad170(long param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  int iVar5;
  ulong uVar6;
  long lVar7;
  undefined *local_130;
  undefined1 local_128 [16];
  undefined1 *local_118;
  undefined8 uStack_110;
  undefined *local_108;
  undefined1 local_100 [16];
  undefined1 *local_f0;
  undefined8 uStack_e8;
  undefined1 local_e0 [128];
  
  puVar3 = PTR_DAT_04bc0ec8;
  lVar7 = *(long *)(param_1 + 0x10);
  if (lVar7 != param_1 + 8) {
    puVar1 = PTR_DAT_04bc0ec8 + 0x10;
    do {
      local_e0[0] = 0;
      if (*(char *)(lVar7 + 0x80) == '\0') {
        FUN_001b8590(lVar7 + 0x18);
        iVar4 = FUN_001e1884(*(undefined8 *)(lVar7 + 0x20));
      }
      else {
        iVar4 = FUN_001e1884(*(undefined8 *)(lVar7 + 0x20));
      }
      if (iVar4 != 0) {
        FUN_001e188c(*(undefined8 *)(lVar7 + 0x20),local_e0,0x80);
      }
      local_100[0] = 0;
      uStack_e8 = 0x10;
      local_108 = puVar1;
      local_f0 = local_100;
      FUN_0018b070(&local_108,local_e0,0xffffffffffffffff);
      local_e0[0] = 0;
      if (*(char *)(param_2 + 0x68) == '\0') {
        FUN_001b8590(param_2);
        iVar4 = FUN_001e1884(*(undefined8 *)(param_2 + 8));
      }
      else {
        iVar4 = FUN_001e1884(*(undefined8 *)(param_2 + 8));
      }
      if (iVar4 != 0) {
        FUN_001e188c(*(undefined8 *)(param_2 + 8),local_e0,0x80);
      }
      puVar2 = puVar3 + 0x10;
      local_128[0] = 0;
      uStack_110 = 0x10;
      local_130 = puVar2;
      local_118 = local_128;
      FUN_0018b070(&local_130,local_e0,0xffffffffffffffff);
      uVar6 = FUN_0018b44c(local_f0,local_118);
      if ((uVar6 & 1) == 0) {
        local_130 = puVar2;
        FUN_0018b1a0(&local_130);
        local_108 = puVar2;
        FUN_0018b1a0(&local_108);
      }
      else {
        iVar4 = FUN_001b8fa0(lVar7 + 0x18,"RVCID",0);
        iVar5 = FUN_001b8fa0(param_2,"RVCID",0);
        local_130 = puVar2;
        FUN_0018b1a0(&local_130);
        local_108 = puVar2;
        FUN_0018b1a0(&local_108);
        if (iVar4 == iVar5) {
          return lVar7 + 0x10;
        }
      }
      lVar7 = *(long *)(lVar7 + 8);
    } while (lVar7 != param_1 + 8);
  }
  return 0;
}

