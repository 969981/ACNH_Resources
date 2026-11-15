
void FUN_01fba0b8(long *param_1,undefined4 param_2)

{
  undefined *puVar1;
  int iVar2;
  long *plVar3;
  ulong uVar4;
  undefined4 *puVar5;
  undefined4 local_178 [2];
  undefined *local_170;
  undefined *puStack_168;
  undefined8 local_160;
  undefined *puStack_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined4 uStack_140;
  undefined4 local_13c;
  undefined4 uStack_138;
  undefined4 local_134;
  undefined8 local_130;
  undefined8 local_128;
  undefined4 local_120;
  undefined5 local_11c;
  undefined3 uStack_117;
  undefined5 uStack_114;
  undefined8 local_10c;
  undefined4 local_104;
  undefined2 local_100;
  undefined8 local_fc;
  undefined8 local_f4;
  undefined8 local_ec;
  undefined8 local_e4;
  undefined4 local_dc;
  undefined *local_d8;
  undefined1 *local_d0;
  undefined4 local_c8;
  undefined1 local_c4 [31];
  undefined1 local_a5;
  undefined *local_a0;
  undefined1 *local_98;
  undefined4 local_90;
  undefined1 local_8c [31];
  undefined1 local_6d;
  undefined8 local_68;
  
  if ((*(int *)((long)param_1 + 0x77f4) != 0x10) && ((int)param_1[0xef6] != 0x10)) {
    if ((*(int *)(param_1[2] + 0x360) != 0x13) &&
       (local_178[0] = 0x13, *(int *)(param_1[2] + 0x378) != 0x13)) {
      plVar3 = *(long **)(param_1[1] + 0x60);
      if (plVar3 == (long *)0x0) {
        if (((DAT_052461c0 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_052461c0), iVar2 != 0)) {
          FUN_016fcf10(&DAT_05240280);
          FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
          __cxa_guard_release(&DAT_052461c0);
          plVar3 = &DAT_05240280;
        }
        else {
          plVar3 = &DAT_05240280;
        }
      }
      uVar4 = (**(code **)(*plVar3 + 0x100))();
      local_170 = PTR_DAT_04bbc1a0;
      if ((uVar4 & 1) != 0) {
        local_178[0] = 0;
        local_150 = 0;
        param_1[0x15ab] = param_1[0x15ab] & 0xfffffffbffffffff;
        local_170 = local_170 + 0x10;
        local_134 = 0;
        puStack_168 = PTR_DAT_04bb2010 + 0x10;
        local_160 = 0;
        local_13c = 0;
        uStack_138 = 0xfffe;
        puStack_158 = puStack_168;
        FUN_0277d4ac(&uStack_138);
        local_11c = 0;
        uStack_117 = 0;
        uStack_114 = 0;
        local_120 = 0xbf800000;
        local_130 = 0x41c8000041800000;
        local_128 = 0xbf800000bf800000;
        local_10c = 0xfffe;
        FUN_0277d4ac(&local_10c);
        local_104 = 0;
        local_c8 = 0x20;
        local_98 = local_8c;
        local_90 = 0x20;
        local_d0 = local_c4;
        local_a5 = 0;
        local_d8 = PTR_DAT_04bb2028 + 0x10;
        local_c4[0] = 0;
        local_6d = 0;
        local_8c[0] = 0;
        local_178[0] = 0;
        local_160 = 0;
        uStack_140 = 0;
        local_13c = 0;
        local_68 = 0xfffe;
        local_150 = 0;
        uStack_148 = 0;
        local_a0 = local_d8;
        FUN_0277d4ac(&local_68);
        uStack_138 = (undefined4)local_68;
        local_134 = local_68._4_4_;
        local_130 = 0x41c8000041800000;
        local_128 = 0xbf800000bf800000;
        local_120 = 0xbf800000;
        local_11c = 0;
        uStack_117 = 0;
        uStack_114 = 0;
        local_68 = 0xfffe;
        FUN_0277d4ac(&local_68);
        local_104 = 0;
        local_100 = 0;
        local_fc = 0;
        local_f4 = 0;
        local_ec = 0;
        local_e4 = 0;
        local_dc = 0;
        local_10c = local_68;
        *local_d0 = 0;
        *local_98 = 0;
        puVar1 = PTR_DAT_04bb3968;
        local_130 = 0x4170000041700000;
        puVar5 = (undefined4 *)
                 (**(code **)(*(long *)(*(long *)PTR_DAT_04bb3968 + 0x179a0) + 0xf0))();
        local_128 = CONCAT44(local_128._4_4_,*puVar5);
        puVar5 = (undefined4 *)(**(code **)(*(long *)(*(long *)puVar1 + 0x179d0) + 0xf0))();
        local_128 = CONCAT44(*puVar5,(undefined4)local_128);
        puVar5 = (undefined4 *)(**(code **)(*(long *)(*(long *)puVar1 + 0x17a00) + 0xf0))();
        local_120 = *puVar5;
        local_fc = CONCAT44(local_fc._4_4_,param_2);
        local_dc = CONCAT31(local_dc._1_3_,1);
        (**(code **)(*param_1 + 0x38))(param_1,0x47,local_178,1);
      }
    }
  }
  return;
}

