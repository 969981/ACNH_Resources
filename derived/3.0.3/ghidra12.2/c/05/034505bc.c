
void FUN_034505bc(undefined8 *param_1,long param_2,long param_3,byte *param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined *local_90;
  undefined4 local_88;
  undefined2 local_84;
  byte local_82;
  undefined4 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined1 local_68;
  undefined *local_60;
  char *pcStack_58;
  
  puVar2 = PTR_DAT_04bb2718;
  puVar1 = PTR_DAT_04bb2020;
  if (param_2 != 0) {
    if ((param_3 != 0) && (lVar6 = *(long *)(param_2 + 0x98), lVar6 != 0)) {
      local_82 = *param_4;
      local_90 = PTR_DAT_04bc39b0 + 0x10;
      if (7 < local_82) {
        local_82 = 0xff;
      }
      local_88 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_04bb2718 + 0x418) + 0xc);
      local_84 = 1;
      local_80 = 0xffffffff;
      local_60 = PTR_DAT_04bb2020 + 0x10;
      pcStack_58 = "MyDesignExchangeUploadBtnsSeq";
      uVar4 = FUN_0345078c(lVar6,&local_60,param_2,&local_90);
      *param_1 = uVar4;
      puVar7 = (undefined8 *)**(undefined8 **)(param_3 + 0x3f8);
      if (((*PTR_DAT_04bc4e60 & 1) == 0) &&
         (iVar3 = __cxa_guard_acquire(PTR_DAT_04bc4e60), iVar3 != 0)) {
        *(undefined **)PTR_DAT_04bc4e58 = PTR_DAT_04bc4d38 + 0x10;
        __cxa_guard_release(PTR_DAT_04bc4e60);
      }
      if ((puVar7 != (undefined8 *)0x0) &&
         (uVar5 = (**(code **)*puVar7)(puVar7,PTR_DAT_04bc4e58), (uVar5 & 1) != 0)) {
        local_90 = PTR_DAT_04bc7e60 + 0x10;
        local_88 = *(undefined4 *)(*(long *)(*(long *)puVar2 + 0x418) + 0xc);
        local_84 = 1;
        local_68 = 1;
        local_82 = *param_4;
        local_80 = 0xffffffff;
        local_70 = 0;
        if (7 < local_82) {
          local_82 = 0xff;
        }
        pcStack_58 = "/L_MyDesign_00";
        local_60 = puVar1 + 0x10;
        local_78 = FUN_030647d4(puVar7 + 7,&local_60);
        pcStack_58 = "MyDesign2DPreviewCtrlSeq";
        local_60 = puVar1 + 0x10;
        uVar4 = FUN_0305fc74(lVar6,&local_60,param_2,&local_90);
        param_1[1] = uVar4;
      }
    }
  }
  return;
}

