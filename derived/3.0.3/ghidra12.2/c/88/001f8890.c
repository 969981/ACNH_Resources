
long FUN_001f8890(undefined8 param_1,long param_2,byte param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  undefined *local_90;
  undefined1 local_88 [16];
  undefined1 *local_78;
  undefined8 uStack_70;
  undefined *local_68 [3];
  undefined8 local_50;
  
  puVar2 = PTR_DAT_04bc0ec8;
  puVar1 = PTR_DAT_04bc0ec8 + 0x10;
  lVar5 = DAT_04c5ee70;
  do {
    lVar5 = *(long *)(lVar5 + 8);
    if (lVar5 == DAT_04c5ee70) goto LAB_001f8920;
    (**(code **)(**(long **)(lVar5 + 0x10) + 0x18))(local_68);
    uVar3 = FUN_0018b44c(local_50,*(undefined8 *)(param_2 + 0x18));
    local_68[0] = puVar1;
    FUN_0018b1a0(local_68);
  } while ((uVar3 & 1) == 0);
  if (*(long **)(lVar5 + 0x10) == (long *)0x0) {
LAB_001f8920:
    local_90 = puVar2 + 0x10;
    local_88[0] = 0;
    local_78 = local_88;
    uStack_70 = 0x10;
    FUN_0018b070(&local_90,"DynamicData",0xffffffffffffffff);
    lVar5 = DAT_04c5ee70;
    do {
      lVar5 = *(long *)(lVar5 + 8);
      if (lVar5 == DAT_04c5ee70) {
        local_90 = puVar2 + 0x10;
        FUN_0018b1a0(&local_90);
        return 0;
      }
      (**(code **)(**(long **)(lVar5 + 0x10) + 0x18))(local_68);
      uVar3 = FUN_0018b44c(local_50,local_78);
      local_68[0] = puVar2 + 0x10;
      FUN_0018b1a0(local_68);
    } while ((uVar3 & 1) == 0);
    plVar4 = *(long **)(lVar5 + 0x10);
    local_90 = puVar2 + 0x10;
    FUN_0018b1a0(&local_90);
    lVar5 = 0;
    if (plVar4 != (long *)0x0) {
      lVar5 = (**(code **)(*plVar4 + 0x10))(plVar4);
      FUN_00189504(lVar5 + 0x48,param_2);
      *(byte *)(lVar5 + 0x70) = param_3 & 1;
    }
  }
  else {
    lVar5 = (**(code **)(**(long **)(lVar5 + 0x10) + 0x10))();
  }
  return lVar5;
}

