
void FUN_03f3ed18(long param_1,ulong *param_2,long param_3)

{
  long *plVar1;
  ushort local_90 [2];
  undefined4 local_8c;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  undefined **local_60;
  undefined8 uStack_58;
  undefined **local_50;
  undefined8 uStack_48;
  char local_40 [4];
  uint local_3c;
  long *local_38;
  
  local_90[0] = *(ushort *)(param_3 + 0x14);
  local_40[0] = '\0';
  uStack_80 = *(undefined8 *)(param_1 + 0x70);
  local_8c = *(undefined4 *)(param_3 + 0x10);
  local_88 = *(undefined8 *)(param_1 + 0x88);
  local_78 = *(undefined8 *)(param_1 + 0x348);
  uStack_70 = *(undefined8 *)(param_1 + 0x340);
  local_68 = *(undefined4 *)(param_1 + 0x32c);
  uStack_58 = *(undefined8 *)(param_3 + 8);
  local_60 = &PTR_LAB_048f9770;
  uStack_48 = *(undefined8 *)(param_1 + 0x368);
  local_50 = &PTR_LAB_048f9770;
  local_3c = 0;
  local_38 = (long *)0x0;
  FUN_03f36e30(DAT_05b05848,local_40,local_90);
  if (local_3c == 0) {
    plVar1 = *(long **)(param_1 + 0x70);
    local_90[0] = local_90[0] & 0xff00;
    if (plVar1 == (long *)0x0) {
      if ((local_38 != (long *)0x0) && ((char)local_38[0xf] != '\0')) {
        (**(code **)(*local_38 + 0xc0))(local_38,local_90,param_3);
      }
    }
    else {
      (**(code **)(*plVar1 + 0x30))(plVar1,param_3,0);
    }
  }
  else {
    if (local_40[0] != '\0') {
      local_38 = (long *)0x0;
    }
    *(long **)(param_1 + 0x348) = local_38;
    *param_2 = (ulong)local_3c;
  }
  return;
}

