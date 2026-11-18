
/* WARNING: Removing unreachable block (ram,0x03385b70) */
/* WARNING: Removing unreachable block (ram,0x03385b84) */

void FUN_03385ae4(long *param_1)

{
  long *plVar1;
  long lVar2;
  ulong uVar3;
  undefined8 local_88;
  undefined8 *local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined2 local_68;
  undefined1 local_66;
  undefined8 local_60;
  undefined8 local_58;
  long lStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined **local_30;
  char *local_28;
  
  if (*(char *)((long)param_1 + 0x44c) != '\0') {
    param_1[0x18] = 0;
    param_1[0x19] = 0;
    param_1[0x16] = 0;
    param_1[0x17] = 0;
    param_1[0x14] = 0;
    param_1[0x15] = 0;
    param_1[0x12] = 0;
    param_1[0x13] = 0;
    param_1[0x10] = 0;
    param_1[0x11] = 0;
    param_1[0xe] = 0;
    param_1[0xf] = 0;
    param_1[0xc] = 0;
    param_1[0xd] = 0;
    param_1[10] = 0;
    param_1[0xb] = 0;
    param_1[8] = 0;
    param_1[9] = 0;
    *(undefined8 *)(*param_1 + 8) = 0;
    param_1[0x1a] = 0;
    FUN_033ba5e4(param_1[6],*(undefined4 *)(param_1[6] + 0x50));
    FUN_03f45838(param_1[3] + 0x28);
    FUN_0386d660(DAT_05ae63b8);
    lVar2 = param_1[1];
    local_70 = (undefined *)((ulong)local_70._4_4_ << 0x20);
    plVar1 = (long *)(lVar2 + 8);
    if (*plVar1 != 0) {
      (**(code **)(*(long *)*plVar1 + 0x20))();
      uVar3 = (ulong)local_70 & 0xffffffff;
      if (6 < (uint)local_70) {
        uVar3 = 0;
      }
      plVar1[uVar3] = 0;
      lVar2 = param_1[1];
    }
    FUN_033940c8(lVar2,0);
    lVar2 = *(long *)(*(long *)(DAT_05739190 + 0x18) + 0x20);
    if (lVar2 != 0) {
      lStack_50 = param_1[2] + 0x68;
      local_68 = 0;
      local_70 = PTR_DAT_04bb5070 + 0x10;
      local_30 = &PTR_LAB_048f9770;
      local_60 = 0;
      local_88 = 0;
      local_66 = 1;
      local_58 = *(undefined8 *)(*(long *)(DAT_05739190 + 0x18) + 8);
      local_48 = 0;
      uStack_40 = 0;
      local_38 = 0;
      local_28 = "Game::UI::ThreadMgr::createResidentAsHotReload";
      local_80 = &local_70;
      uStack_78 = 0;
      FUN_03f45184(lVar2,&local_88);
    }
    *(undefined1 *)((long)param_1 + 0x44c) = 0;
  }
  return;
}

