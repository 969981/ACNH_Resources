
undefined8 * FUN_0386d0bc(long *param_1)

{
  undefined *puVar1;
  long lVar2;
  long *plVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined *local_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined4 local_120;
  undefined8 local_11c;
  undefined8 local_114;
  undefined8 local_10c;
  undefined **local_100;
  undefined2 local_f8;
  undefined1 auStack_f4 [64];
  undefined8 local_b4;
  undefined8 uStack_ac;
  undefined8 local_a4;
  undefined8 uStack_9c;
  undefined8 local_94;
  undefined8 uStack_8c;
  undefined8 local_84;
  undefined8 uStack_7c;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined8 local_4c;
  
  if (DAT_05ae6330 != (undefined8 *)0x0) {
    return DAT_05ae6330;
  }
  lVar5 = *(long *)PTR_DAT_04bb2698;
  if (lVar5 == 0) {
    puVar4 = malloc(0xa0);
  }
  else {
    plVar3 = param_1;
    if (param_1 == (long *)0x0) {
      lVar2 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
      plVar3 = (long *)(lVar5 + 8);
      if (lVar2 != 0) {
        plVar3 = (long *)(lVar2 + 0xa8);
      }
      plVar3 = (long *)*plVar3;
      if (plVar3 == (long *)0x0) {
        puVar4 = (undefined8 *)0x0;
        goto LAB_0386d150;
      }
    }
    puVar4 = (undefined8 *)(**(code **)(*plVar3 + 0x30))(plVar3,0xa0,8);
  }
LAB_0386d150:
  FUN_038c69f0(puVar4 + 0x10,param_1,3);
  *(undefined1 *)(puVar4 + 0xf) = 0;
  DAT_05ae6328 = puVar4 + 0x10;
  puVar4[0x10] = &PTR_FUN_04b5ffd0;
  *puVar4 = &PTR_LAB_04b5fff0;
  local_50 = 0x3fe38e39;
  local_68 = 0x461c40003f800000;
  uStack_60 = 0x3eaf1d433f32b8c2;
  local_100 = &PTR_FUN_04b65608;
  local_4c = 0;
  local_70 = DAT_04c4b9ac;
  uStack_6c = DAT_05ae77d4;
  local_74 = DAT_05ae77d0;
  local_58 = 0x3eba5a4e3f708fb2;
  local_f8 = 0x101;
  FUN_038e5968(&local_100,auStack_f4);
  local_f8 = 0x100;
  (*(code *)local_100[0xc])(&local_100,&local_b4,auStack_f4,local_74);
  puVar4[2] = uStack_ac;
  puVar4[1] = local_b4;
  puVar4[4] = uStack_9c;
  puVar4[3] = local_a4;
  puVar1 = PTR_DAT_04bb2f80;
  local_120 = 0x44b97469;
  local_148 = *(undefined8 *)(PTR_DAT_04bb2f80 + 0x10);
  uStack_140 = *(undefined8 *)(PTR_DAT_04bb2f80 + 0x18);
  local_138 = *(undefined8 *)(PTR_DAT_04bb2f80 + 0x20);
  uStack_130 = *(undefined8 *)(PTR_DAT_04bb2f80 + 0x28);
  puVar4[6] = uStack_8c;
  puVar4[5] = local_94;
  local_158 = *(undefined8 *)puVar1;
  uStack_150 = *(undefined8 *)(puVar1 + 8);
  local_11c = 0;
  local_114 = 0;
  uStack_128 = 0;
  local_160 = PTR_DAT_04bb41a0 + 0x10;
  puVar4[8] = uStack_7c;
  puVar4[7] = local_84;
  local_10c = 0x3f800000;
  FUN_038e4634(&local_160,&local_158);
  DAT_05ae6330 = puVar4;
  puVar4[10] = uStack_150;
  puVar4[9] = local_158;
  puVar4[0xc] = uStack_140;
  puVar4[0xb] = local_148;
  puVar4[0xe] = uStack_130;
  puVar4[0xd] = local_138;
  return puVar4;
}

