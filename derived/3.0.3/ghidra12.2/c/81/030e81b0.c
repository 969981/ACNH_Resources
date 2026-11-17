
void FUN_030e81b0(long param_1,int *param_2)

{
  int *piVar1;
  undefined *puVar2;
  undefined2 uVar3;
  long *plVar4;
  int iVar5;
  undefined **local_5c0;
  undefined1 *local_5b8;
  undefined4 local_5b0;
  undefined1 local_5ac [63];
  undefined1 local_56d;
  undefined8 local_568;
  undefined *local_560;
  undefined1 *puStack_558;
  undefined4 local_550;
  undefined1 local_54c;
  undefined8 local_548;
  undefined8 uStack_540;
  undefined4 local_538;
  undefined *local_530;
  undefined1 *puStack_528;
  undefined4 local_520;
  undefined1 local_51c [63];
  undefined1 local_4dd;
  undefined *local_4d8;
  undefined1 *puStack_4d0;
  undefined4 local_4c8;
  undefined1 local_4c4 [63];
  undefined1 local_485;
  undefined1 auStack_480 [2];
  int aiStack_47e [255];
  int local_80 [2];
  undefined *local_78;
  long local_70;
  undefined8 local_68;
  undefined1 local_55;
  uint local_48;
  undefined2 local_44 [2];
  
  puVar2 = PTR_DAT_04bb2bc0;
  if (param_1 != 0) {
    if (param_2 != (int *)0x0) {
      local_55 = 0;
      local_44[0] = 0;
      local_68 = 0x6f637200000010;
      local_70 = (long)&local_68 + 4;
      local_548 = 0xffffffff;
      uStack_540 = 0xffffffff00000000;
      local_78 = PTR_DAT_04bb2ab0 + 0x10;
      local_54c = 0;
      local_550 = 0x200;
      puStack_528 = local_51c;
      local_538 = 0xffffffff;
      local_520 = 0x40;
      local_4dd = 0;
      local_530 = PTR_DAT_04bb2bc0 + 0x10;
      local_51c[0] = 0;
      local_4c8 = 0x40;
      local_485 = 0;
      local_4c4[0] = 0;
      puStack_4d0 = local_4c4;
      local_560 = &DAT_04a3e468;
      puStack_558 = auStack_480;
      local_4d8 = local_530;
      memset(auStack_480,0,0x400);
      piVar1 = local_80;
      if (local_80 <= aiStack_47e) {
        piVar1 = aiStack_47e;
      }
      memset(auStack_480,0,(long)piVar1 + (-0xe0 - (long)&local_560));
      local_80[0] = 0;
      if ((DAT_05739190 != 0) && (plVar4 = *(long **)(DAT_05739190 + 0x450), plVar4 != (long *)0x0))
      {
        (**(code **)(*plVar4 + 0x18))(plVar4,&local_78,local_44);
        if ((DAT_05739190 != 0) && (*(long **)(DAT_05739190 + 0x450) != (long *)0x0)) {
          (**(code **)(**(long **)(DAT_05739190 + 0x450) + 0x20))();
        }
        (**(code **)(local_78 + 0x18))(&local_78);
        FUN_03444090(&local_48,local_70);
        uVar3 = local_44[0];
        (**(code **)(local_78 + 0x18))(&local_78);
        FUN_01c0c818(&local_560,uVar3,local_70);
        local_5c0 = (undefined **)(puVar2 + 0x10);
        local_56d = 0;
        local_5ac[0] = 0;
        iVar5 = 0xd2;
        if (0 < local_80[0]) {
          iVar5 = local_80[0];
        }
        *param_2 = iVar5;
        local_5b8 = local_5ac;
        local_5b0 = 0x40;
        local_568 = *(undefined8 *)(param_1 + 0x2a0);
        FUN_034632e0(&local_5c0,&local_560);
        plVar4 = *(long **)(param_1 + 0x298);
        if (plVar4 != (long *)0x0) {
          if (2 < local_48) {
            local_48 = 0;
          }
          iVar5 = (&DAT_05753358)[(ulong)local_48 * 0x1a];
          local_5c0 = &PTR_LAB_04aa7fe0;
          local_5b8 = (undefined1 *)CONCAT44(local_5b8._4_4_,0x14);
          (**(code **)(*plVar4 + 0x18))(plVar4,&local_5c0);
          (**(code **)(plVar4[3] + 0x158))((float)iVar5,plVar4[1]);
        }
      }
    }
  }
  return;
}

