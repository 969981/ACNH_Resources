
void FUN_009b1d90(long param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  ulong uVar4;
  ControllerSupportArg local_470;
  ControllerSupportArg local_46f;
  undefined2 local_46e;
  undefined1 local_46c;
  undefined1 local_46b;
  undefined1 local_449;
  uint local_28 [2];
  
  nn::hid::ControllerSupportArg::SetDefault();
  uVar3 = *(uint *)(param_1 + 0xf5b6c);
  local_46e = 0x101;
  local_449 = 1;
  local_46c = 1;
  local_470 = SUB41(uVar3,0);
  local_46f = local_470;
  if (uVar3 * 0x1000000 == 0x1000000) {
    local_46b = 1;
    (**(code **)(DAT_04d02de0 + 0x18))(&DAT_04d02de0);
    local_28[0] = 0;
    nn::hid::SetExplainText(&local_470,DAT_04d02de8,local_28);
  }
  else {
    local_46b = 0;
    if (0 < (int)(uVar3 * 0x1000000)) {
      uVar1 = (uint)(char)local_470;
      if ((int)uVar1 < 2) {
        uVar1 = 1;
      }
      (**(code **)(DAT_04d02de0 + 0x18))(&DAT_04d02de0);
      local_28[0] = 0;
      nn::hid::SetExplainText(&local_470,DAT_04d02de8,local_28);
      if ((uVar3 & 0xff) >> 1 != 0) {
        (**(code **)(DAT_04d02e38 + 0x18))(&DAT_04d02e38);
        local_28[0] = 1;
        nn::hid::SetExplainText(&local_470,DAT_04d02e40,local_28);
        if (uVar1 != 2) {
          (**(code **)(DAT_04d02e90 + 0x18))(&DAT_04d02e90);
          local_28[0] = 2;
          nn::hid::SetExplainText(&local_470,DAT_04d02e98,local_28);
          if (uVar1 != 3) {
            (**(code **)(DAT_04d02ee8 + 0x18))(&DAT_04d02ee8);
            local_28[0] = 3;
            nn::hid::SetExplainText(&local_470,DAT_04d02ef0,local_28);
            if (uVar1 != 4) {
              uVar4 = 4;
              do {
                (**(code **)(DAT_04d02de0 + 0x18))(&DAT_04d02de0);
                local_28[0] = (uint)uVar4;
                nn::hid::SetExplainText(&local_470,DAT_04d02de8,local_28);
                uVar4 = uVar4 + 1;
              } while (uVar1 != uVar4);
            }
          }
        }
      }
    }
  }
  iVar2 = nn::hid::ShowControllerSupport((ControllerSupportResultInfo *)local_28,&local_470);
  if (iVar2 == 0) {
    *(undefined1 *)(param_1 + 0xf5b70) = 1;
    uVar3 = (uint)(char)local_28[0]._0_1_;
  }
  else {
    *(undefined1 *)(param_1 + 0xf5b70) = 0;
    uVar3 = (uint)*(ushort *)(param_1 + 0xf5b50) -
            (*(ushort *)(param_1 + 0xf5b50) >> 1 & 0x55555555);
    uVar3 = (uVar3 >> 2 & 0x33333333) + (uVar3 & 0x33333333);
    uVar3 = uVar3 + (uVar3 >> 4) & 0xf0f0f0f;
    uVar3 = uVar3 + (uVar3 >> 8);
    uVar3 = uVar3 + (uVar3 >> 0x10) & 0x3f;
  }
  *(uint *)(param_1 + 0xf5b74) = uVar3;
  *(undefined4 *)(param_1 + 0xf5b68) = 0;
  return;
}

