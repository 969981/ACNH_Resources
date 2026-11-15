
void FUN_01e39778(long param_1,undefined8 param_2,undefined4 *param_3,uint param_4)

{
  ulong uVar1;
  undefined4 *puVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  undefined4 local_44;
  undefined4 local_40;
  uint local_3c;
  undefined8 local_38;
  
  if ((*(byte *)(param_1 + 0x69d) >> 2 & 1) == 0) {
    local_44 = *param_3;
    puVar2 = &local_44;
  }
  else {
    uVar1 = FUN_021f2ed0(param_2,0);
    if ((uVar1 & 1) != 0) {
      plVar5 = *(long **)(param_1 + 0x68);
      (**(code **)(*plVar5 + 0x140))(plVar5,param_2,1);
      (**(code **)(*plVar5 + 0x160))(plVar5,param_3);
      FUN_01e5e100(*(undefined8 *)(param_1 + 0x3b0));
      lVar4 = *(long *)(param_1 + 0x3b8);
      uVar1 = FUN_01e5e100(*(undefined8 *)(*(long *)(lVar4 + 8) + 0x3b0));
      if ((uVar1 & 1) == 0) {
        return;
      }
      *(ulong *)(lVar4 + 0xad58) = *(ulong *)(lVar4 + 0xad58) | 0x400001000;
      return;
    }
    uVar1 = FUN_021f4f90(param_2,0,0);
    if ((uVar1 & 1) != 0) {
      plVar5 = *(long **)(param_1 + 0x68);
      (**(code **)(*plVar5 + 0x140))(plVar5,param_2,1);
      (**(code **)(*plVar5 + 0x160))(plVar5,param_3);
      uVar1 = FUN_01e5e760(*(undefined8 *)(param_1 + 0x3b0));
      if ((uVar1 & 1) == 0) {
        return;
      }
      *(ulong *)(*(long *)(param_1 + 0x3b8) + 0xad58) =
           *(ulong *)(*(long *)(param_1 + 0x3b8) + 0xad58) | 0x400000000;
      return;
    }
    local_3c = *(uint *)(param_1 + 0x750);
    if ((local_3c | 2) == 3) {
      *(undefined4 *)(param_1 + 0x750) = 0;
      local_38 = 0;
      FUN_01e5a930(0x40000000,*(undefined8 *)(param_1 + 0x3b0),0,PTR_DAT_04bb2150,
                   (long)&local_38 + 4,&local_38,PTR_DAT_04bc1600,6);
      lVar4 = *(long *)(param_1 + 0x3b0);
      if ((local_3c != 0) && (*(int *)(*(long *)(lVar4 + 0x358) + 0x750) == 0)) {
        lVar3 = *(long *)(*(long *)(lVar4 + 0x358) + 0x3b8);
        *(ulong *)(lVar3 + 0xad58) = *(ulong *)(lVar3 + 0xad58) & 0xffffffffffffefff;
        *(undefined1 *)(lVar4 + 0x5a0) = 1;
        (**(code **)(**(long **)(*(long *)(lVar4 + 0x358) + 0x3b8) + 0x68))();
      }
    }
    local_40 = *param_3;
    puVar2 = &local_40;
  }
  FUN_01e39520(param_1,param_2,puVar2,param_4 & 1);
  return;
}

