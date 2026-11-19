
void FUN_03c63140(long *param_1,long *param_2,undefined8 param_3,undefined4 param_4)

{
  undefined *puVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long *plVar6;
  undefined8 uVar7;
  undefined1 *local_58;
  undefined *local_50;
  undefined1 local_44 [4];
  
  lVar3 = (**(code **)(*param_1 + 0x20))();
  if (lVar3 != param_2[1]) {
    local_44[0] = 0;
    uVar4 = FUN_03c63348(param_3,param_4);
    uVar5 = FUN_03c634e0(param_3,param_4);
    (**(code **)(*param_1 + 0x48))(param_1,local_44,uVar4,uVar5);
    local_58 = local_44;
    if (((DAT_05aee1d8 & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(&DAT_05aee1d8), puVar1 = PTR_DAT_04bd3120, iVar2 != 0)) {
      FUN_03c613d4(PTR_DAT_04bd3120,0);
      FUN_001001d0(FUN_03c60734,puVar1,&__DT_FINI_ARRAY);
      __cxa_guard_release(&DAT_05aee1d8);
    }
    local_50 = PTR_DAT_04bd3120;
    plVar6 = *(long **)(*(long *)(param_2[1] + 0xa8) + 0x20);
    (**(code **)(*plVar6 + 0x38))(plVar6,param_2,&local_58,1);
    return;
  }
  lVar3 = *param_2;
  if (lVar3 == 0) {
    uVar4 = 0;
  }
  else {
    if ((DAT_05aee1d8 & 1) == 0) {
      iVar2 = __cxa_guard_acquire(PTR_DAT_04bd3128);
      puVar1 = PTR_DAT_04bd3120;
      if (iVar2 != 0) {
        FUN_03c613d4(PTR_DAT_04bd3120,0);
        FUN_001001d0(FUN_03c60734,puVar1,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_05aee1d8);
      }
    }
    uVar4 = FUN_03c66100(lVar3,PTR_DAT_04bd3120,param_2[1]);
  }
  uVar5 = FUN_03c63348(param_3,param_4);
  uVar7 = FUN_03c634e0(param_3,param_4);
                    /* WARNING: Could not recover jumptable at 0x03c63298. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x48))(param_1,uVar4,uVar5,uVar7);
  return;
}

