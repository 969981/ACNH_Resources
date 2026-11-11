
undefined8 FUN_0047b820(long param_1,code *param_2,long param_3)

{
  undefined *puVar1;
  int iVar2;
  uint uVar3;
  long *plVar4;
  long lVar5;
  uint *puVar6;
  long lVar7;
  undefined **local_a0;
  undefined8 local_98;
  long local_90;
  MutexType *local_88;
  undefined4 local_7c;
  undefined **local_78;
  char local_70;
  long local_68;
  MutexType *local_60;
  undefined4 local_58;
  
  local_60 = (MutexType *)(DAT_04c70980 + 0x18);
  local_68 = DAT_04c70980;
  FUN_0047dc40();
  local_78 = &PTR_FUN_04865498;
  local_58 = 0;
  local_70 = '\0';
  (*param_2)(&local_78);
  local_7c = local_58;
  local_a0 = (undefined **)0x0;
  local_98 = -0x8000000000000000;
  iVar2 = FUN_0047ba00((long *)(param_1 + 0x148),&local_7c,&local_a0);
  lVar5 = local_98;
  puVar1 = PTR_DAT_048607b8;
  uVar3 = local_98._4_4_;
  local_98 = (ulong)local_98._4_4_ << 0x20;
  if ((-1 < lVar5) && (local_a0 != (undefined **)0x0)) {
    FUN_00421f90(PTR_DAT_048607b8,local_a0,8,uVar3 & 0x3fffffff);
  }
  lVar7 = *(long *)(param_1 + 0x148);
  lVar5 = lVar7 + (long)iVar2 * 0x18;
  puVar6 = (uint *)(lVar5 + 0x10);
  plVar4 = (long *)(lVar5 + 8);
  if (*puVar6 == 0) {
    if (param_3 == 0) {
      local_98 = CONCAT71(local_98._1_7_,1);
      local_88 = (MutexType *)(DAT_04c70980 + 0x18);
      local_90 = DAT_04c70980;
      FUN_0047dc40();
      local_a0 = &PTR_FUN_04865360;
      (*param_2)(&local_a0);
      local_a0 = &PTR_FUN_04865338;
      if ((((char)local_98 != '\0') && (*(int *)(local_90 + 0xb0) == 0)) &&
         (*(int *)(local_90 + 0xa0) != 0)) {
        FUN_00477f20();
      }
      nn::os::UnlockMutex(local_88);
    }
    else {
      (*param_2)(param_3);
    }
  }
  uVar3 = *puVar6;
  if (uVar3 == (*(uint *)(lVar7 + (long)iVar2 * 0x18 + 0x14) & 0x3fffffff)) {
    FUN_00426990(puVar1,plVar4,8);
    uVar3 = *puVar6;
  }
  *(code **)(*plVar4 + (long)(int)uVar3 * 8) = param_2;
  *puVar6 = uVar3 + 1;
  local_78 = &PTR_FUN_04865338;
  if (((local_70 != '\0') && (*(int *)(local_68 + 0xb0) == 0)) && (*(int *)(local_68 + 0xa0) != 0))
  {
    FUN_00477f20();
  }
  nn::os::UnlockMutex(local_60);
  return 0;
}

