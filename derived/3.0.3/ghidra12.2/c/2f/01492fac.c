
bool FUN_01492fac(long param_1,undefined4 *param_2,undefined8 param_3,int *param_4)

{
  long *plVar1;
  int iVar2;
  int *piVar3;
  ulong uVar4;
  undefined1 uVar5;
  long lVar6;
  bool bVar7;
  undefined8 *puVar8;
  undefined4 local_74;
  long *local_70;
  char local_67;
  int local_5c;
  undefined *local_58;
  undefined4 local_50;
  undefined4 local_4c;
  byte local_48;
  undefined **local_28;
  
  local_50 = 0;
  lVar6 = *(long *)PTR_DAT_04bb2720;
  if (lVar6 == 0) {
    puVar8 = &DAT_055c04a0;
  }
  else {
    puVar8 = &DAT_055c04a0;
    if (*(long *)(lVar6 + 0x330) != 0) {
      puVar8 = (undefined8 *)
               (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                         (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar6 + 0x338));
      iVar2 = FUN_006bd550(*puVar8,0);
      puVar8 = (undefined8 *)PTR_DAT_04bc3a80;
      if (iVar2 != 0x758f7eaf) {
        puVar8 = &DAT_055c04a0;
      }
    }
  }
  local_4c = *(undefined4 *)(puVar8 + 7);
  local_48 = FUN_017baf44();
  local_48 = local_48 & 1;
  local_58 = PTR_DAT_04bb3140 + 0x10;
  local_28 = &local_58;
  piVar3 = (int *)FUN_014fbd50(&local_58,*param_2,param_3);
  local_5c = *piVar3;
  if (local_5c == *(int *)PTR_DAT_04bb3238) {
    FUN_014931b0(&local_28,param_2,param_3);
    bVar7 = false;
  }
  else {
    local_74 = *(undefined4 *)(param_1 + 0x230);
    FUN_0071c8d0(&local_70,&local_5c,&local_74,0);
    plVar1 = local_70;
    if (local_70 != (long *)0x0) {
      if (((*PTR_DAT_04bb5928 & 1) == 0) &&
         (iVar2 = __cxa_guard_acquire(PTR_DAT_04bb5928), iVar2 != 0)) {
        *(undefined **)PTR_DAT_04bb5920 = PTR_DAT_04bb3290 + 0x10;
        __cxa_guard_release(PTR_DAT_04bb5928);
      }
      uVar4 = (**(code **)(*plVar1 + 0x20))(plVar1,PTR_DAT_04bb5920);
      if ((uVar4 & 1) == 0) {
        local_67 = '\0';
      }
    }
    bVar7 = local_67 != '\0' && local_70 != (long *)0x0;
    if (local_67 == '\0' || local_70 == (long *)0x0) {
      FUN_014931b0(&local_28,param_2,param_3);
    }
    else {
      uVar5 = 6;
      if (*param_4 == 1) {
        uVar5 = 7;
      }
      local_74 = CONCAT31(local_74._1_3_,uVar5);
      FUN_014719b0(local_70,&local_74);
    }
  }
  return bVar7;
}

