
undefined8 FUN_03200b6c(long param_1)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  long *plVar4;
  long lVar5;
  undefined *local_40;
  undefined4 local_38;
  
  lVar5 = *(long *)(param_1 + 0x220);
  if ((lVar5 == 0) && (lVar5 = *(long *)(*(long *)(param_1 + 0x210) + 0x570), lVar5 == 0)) {
LAB_03200c94:
    uVar3 = 0;
  }
  else {
    plVar4 = *(long **)(lVar5 + 0x208);
    if (plVar4 == (long *)0x0) {
LAB_03200c10:
      plVar4 = *(long **)(lVar5 + 0x218);
      if (plVar4 == (long *)0x0) goto LAB_03200c94;
      puVar1 = PTR_DAT_04bc4f00 + 0x10;
      local_38 = 3;
      local_40 = puVar1;
      (**(code **)(*plVar4 + 0x20))(plVar4,&local_40);
      uVar2 = (**(code **)(plVar4[3] + 0x50))(plVar4[1]);
      if ((uVar2 & 1) == 0) {
        local_38 = 0x10;
        local_40 = puVar1;
        (**(code **)(*plVar4 + 0x20))(plVar4,&local_40);
        uVar2 = (**(code **)(plVar4[3] + 0x120))(plVar4[1]);
        if ((uVar2 & 1) == 0) goto LAB_03200c94;
      }
    }
    else {
      puVar1 = PTR_DAT_04bc4f00 + 0x10;
      local_38 = 3;
      local_40 = puVar1;
      (**(code **)(*plVar4 + 0x20))(plVar4,&local_40);
      uVar2 = (**(code **)(plVar4[3] + 0x50))(plVar4[1]);
      if ((uVar2 & 1) == 0) {
        local_38 = 0x10;
        local_40 = puVar1;
        (**(code **)(*plVar4 + 0x20))(plVar4,&local_40);
        uVar2 = (**(code **)(plVar4[3] + 0x120))(plVar4[1]);
        if ((uVar2 & 1) == 0) goto LAB_03200c10;
      }
    }
    uVar3 = 1;
  }
  return uVar3;
}

