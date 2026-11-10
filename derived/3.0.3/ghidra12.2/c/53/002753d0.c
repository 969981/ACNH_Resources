
void FUN_002753d0(long *param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  long *plVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined4 local_48;
  undefined1 local_44;
  undefined4 local_40 [4];
  undefined1 local_24 [4];
  
  puVar1 = PTR_DAT_04bc1510;
  lVar2 = FUN_002ba790(*(undefined8 *)PTR_DAT_04bc1510);
  if (*(long *)(lVar2 + 0x98) != 0) {
    uVar6 = *(undefined8 *)(param_2 + 0x10);
    plVar3 = (long *)FUN_002ba790(*(undefined8 *)puVar1);
    lVar2 = (**(code **)(*plVar3 + 0x38))(plVar3,uVar6);
    if (lVar2 == 0) {
      plVar3 = (long *)FUN_002ba790(*(undefined8 *)puVar1);
      param_2 = param_2 + 0x18;
      lVar2 = (**(code **)(*plVar3 + 0x60))(plVar3,param_2);
      if (lVar2 == 0) {
        uVar4 = FUN_00227404(param_2);
        if ((uVar4 & 1) == 0) {
          return;
        }
        local_44 = 0;
        local_48 = 0x1000000;
        uVar6 = FUN_002aaa54(param_1);
        local_40[0] = (**(code **)(*param_1 + 0x18))(param_1);
        lVar2 = FUN_002a9fb0(uVar6,local_40,param_2,1,&local_48);
        if (lVar2 == 0) {
          return;
        }
        local_24[0] = 4;
        FUN_002a9f34(local_40,uVar6,local_24);
        return;
      }
    }
    uVar4 = FUN_00227404(lVar2 + 0x10);
    if ((uVar4 & 1) != 0) {
      local_44 = 0;
      local_48 = 0x1000000;
      uVar6 = FUN_002aaa54(param_1);
      local_40[0] = (**(code **)(*param_1 + 0x18))(param_1);
      lVar5 = FUN_002a9fb0(uVar6,local_40,lVar2 + 0x10,1,&local_48);
      if (lVar5 != 0) {
        local_24[0] = 4;
        FUN_002a9f34(local_40,uVar6,local_24);
      }
    }
    lVar5 = FUN_0026c88c(DAT_04c603c8);
    if ((lVar5 != 0) && (*(byte *)(lVar2 + 0x38) < 0x20)) {
      uVar6 = FUN_0026c88c(DAT_04c603c8);
      FUN_00282f30(local_40,uVar6,*(undefined1 *)(lVar2 + 0x38));
    }
    *(undefined4 *)(lVar2 + 0x4c) = 7;
  }
  return;
}

