
void FUN_01f3c8c8(long *param_1)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  code *pcVar6;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined *local_80;
  undefined *puStack_78;
  undefined8 local_70;
  undefined *puStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined4 local_50;
  undefined1 local_4c;
  undefined8 local_48;
  undefined8 local_40;
  undefined1 local_38;
  int local_34;
  
  puVar5 = &local_a0;
  lVar2 = (**(code **)(*param_1 + 0x398))();
  (**(code **)(*(long *)(lVar2 + 8) + 0x20))();
  uVar3 = (**(code **)(*(long *)param_1[1] + 0x180))();
  if ((uVar3 & 1) != 0) {
    uVar3 = FUN_01f44f60(param_1);
    if (((uVar3 & 1) == 0) && (uVar3 = FUN_01f457d0(param_1), (uVar3 & 1) == 0)) {
      (**(code **)(*param_1 + 0x3a8))(param_1);
    }
    local_a0 = (undefined *)((ulong)local_a0._4_4_ << 0x20);
    if (((*(uint *)((long)param_1 + 0xaf3c) & 1) != 0) &&
       (uVar3 = (**(code **)(*param_1 + 0x3e0))(param_1), (uVar3 & 1) == 0)) {
      uVar4 = (**(code **)(*param_1 + 0x3a0))(param_1);
      (**(code **)(*param_1 + 0x358))(&local_a0,param_1);
      FUN_020664bc(uVar4,&local_a0);
      iVar1 = (**(code **)(*param_1 + 1000))(param_1);
      if (iVar1 == 0) {
        lVar2 = (**(code **)(*param_1 + 0x3a0))(param_1);
        puVar5 = (undefined8 *)(lVar2 + 0xe8);
        pcVar6 = *(code **)(*param_1 + 0x368);
      }
      else {
        local_90 = 0;
        uStack_88 = 0;
        local_4c = 0;
        local_a0 = PTR_DAT_04bc1558 + 0x10;
        uStack_98 = 0;
        local_80 = PTR_DAT_04bbc1a0 + 0x10;
        puStack_78 = PTR_DAT_04bb2010 + 0x10;
        local_70 = 0;
        local_60 = 0;
        uStack_58 = 0xffffffff00000000;
        local_50 = 0xffffffff;
        local_48 = 0xfffe;
        puStack_68 = puStack_78;
        FUN_0277d4ac(&local_48);
        local_38 = 0;
        local_40 = 0x3bf800000;
        local_34 = iVar1;
        uVar4 = (**(code **)(*param_1 + 0x3a0))(param_1);
        FUN_020664bc(uVar4,&local_a0);
        pcVar6 = *(code **)(*param_1 + 0x368);
      }
      (*pcVar6)(param_1,puVar5,0,0,iVar1 == 0);
    }
  }
  return;
}

