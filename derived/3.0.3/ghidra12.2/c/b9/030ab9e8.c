
undefined4 FUN_030ab9e8(long param_1)

{
  int iVar1;
  ulong uVar2;
  undefined4 uVar3;
  long lVar4;
  long *plVar5;
  undefined *local_30;
  undefined4 local_28;
  
  lVar4 = *(long *)(*(long *)(param_1 + 0x210) + 0x570);
  if (lVar4 != 0) {
    iVar1 = 4;
    if (*(uint *)(lVar4 + 0x208) < 5) {
      iVar1 = 0;
    }
    plVar5 = *(long **)(*(long *)(lVar4 + 0x210) + (long)iVar1 * 8);
    if (plVar5 != (long *)0x0) {
      local_30 = PTR_DAT_04bc0cb8 + 0x10;
      local_28 = 7;
      (**(code **)(*plVar5 + 0x20))(plVar5,&local_30);
      uVar2 = (**(code **)(plVar5[3] + 0x90))(plVar5[1]);
      if ((uVar2 & 1) != 0) {
        return 4;
      }
      lVar4 = *(long *)(*(long *)(param_1 + 0x210) + 0x570);
    }
  }
  if ((lVar4 != 0) && (plVar5 = (long *)**(undefined8 **)(lVar4 + 0x210), plVar5 != (long *)0x0)) {
    local_30 = PTR_DAT_04bc0cb8 + 0x10;
    local_28 = 7;
    (**(code **)(*plVar5 + 0x20))(plVar5,&local_30);
    uVar2 = (**(code **)(plVar5[3] + 0x90))(plVar5[1]);
    if ((uVar2 & 1) != 0) {
      return 0;
    }
    lVar4 = *(long *)(*(long *)(param_1 + 0x210) + 0x570);
  }
  if ((lVar4 != 0) &&
     (plVar5 = *(long **)(*(long *)(lVar4 + 0x210) +
                         (long)(int)(uint)(1 < *(uint *)(lVar4 + 0x208)) * 8), plVar5 != (long *)0x0
     )) {
    local_30 = PTR_DAT_04bc0cb8 + 0x10;
    local_28 = 7;
    (**(code **)(*plVar5 + 0x20))(plVar5,&local_30);
    uVar2 = (**(code **)(plVar5[3] + 0x90))(plVar5[1]);
    if ((uVar2 & 1) != 0) {
      return 1;
    }
    lVar4 = *(long *)(*(long *)(param_1 + 0x210) + 0x570);
  }
  if (lVar4 != 0) {
    iVar1 = 2;
    if (*(uint *)(lVar4 + 0x208) < 3) {
      iVar1 = 0;
    }
    plVar5 = *(long **)(*(long *)(lVar4 + 0x210) + (long)iVar1 * 8);
    if (plVar5 != (long *)0x0) {
      local_30 = PTR_DAT_04bc0cb8 + 0x10;
      local_28 = 7;
      (**(code **)(*plVar5 + 0x20))(plVar5,&local_30);
      uVar2 = (**(code **)(plVar5[3] + 0x90))(plVar5[1]);
      if ((uVar2 & 1) != 0) {
        return 2;
      }
      lVar4 = *(long *)(*(long *)(param_1 + 0x210) + 0x570);
    }
  }
  if (lVar4 != 0) {
    iVar1 = 3;
    if (*(uint *)(lVar4 + 0x208) < 4) {
      iVar1 = 0;
    }
    plVar5 = *(long **)(*(long *)(lVar4 + 0x210) + (long)iVar1 * 8);
    if (plVar5 != (long *)0x0) {
      local_30 = PTR_DAT_04bc0cb8 + 0x10;
      local_28 = 7;
      (**(code **)(*plVar5 + 0x20))(plVar5,&local_30);
      uVar2 = (**(code **)(plVar5[3] + 0x90))(plVar5[1]);
      uVar3 = 3;
      if ((uVar2 & 1) == 0) {
        uVar3 = 10;
      }
      return uVar3;
    }
  }
  return 10;
}

