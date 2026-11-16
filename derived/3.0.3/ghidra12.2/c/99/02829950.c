
uint FUN_02829950(long param_1,long param_2,undefined8 param_3,undefined4 param_4)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  undefined8 local_80;
  undefined *local_78;
  undefined *puStack_70;
  undefined *local_68;
  undefined *puStack_60;
  undefined *local_58;
  undefined *puStack_50;
  undefined *local_48;
  char *pcStack_40;
  undefined4 local_34;
  
  if (((*PTR_DAT_04bb8aa8 & 1) == 0) && (iVar2 = __cxa_guard_acquire(PTR_DAT_04bb8aa8), iVar2 != 0))
  {
    FUN_00dd5f80(PTR_DAT_04bb8aa0);
    __cxa_guard_release(PTR_DAT_04bb8aa8);
  }
  if (0 < (int)*(uint *)PTR_DAT_04bb8aa0) {
    uVar3 = 0;
    do {
      if (*(int *)(*(long *)(PTR_DAT_04bb8aa0 + 8) + uVar3 * 4) == 0x55) goto LAB_028299bc;
      uVar3 = uVar3 + 1;
    } while (*(uint *)PTR_DAT_04bb8aa0 != uVar3);
  }
  uVar3 = 0;
LAB_028299bc:
  local_34 = (undefined4)uVar3;
  local_78 = PTR_DAT_04bb2020 + 0x10;
  pcStack_40 = "MAIL_SP_MilageProgram";
  puStack_50 = &DAT_040c47ff;
  puStack_60 = &DAT_040e9445;
  puStack_70 = &DAT_04097228;
  local_68 = local_78;
  local_58 = local_78;
  local_48 = local_78;
  local_80 = FUN_0272eca4(param_1 + 0xc,1);
  uVar1 = FUN_027b1524(param_2,&local_34,param_3,&local_48,&local_58,&local_68,&local_78,&local_80,
                       param_4,0,0);
  *(undefined2 *)(param_2 + 0xc0) = *(undefined2 *)(param_1 + 4);
  *(undefined1 *)(param_2 + 0xc2) = *(undefined1 *)(param_1 + 6);
  *(undefined1 *)(param_2 + 0xc3) = *(undefined1 *)(param_1 + 7);
  *(undefined4 *)(param_2 + 0xc4) = *(undefined4 *)(param_1 + 8);
  return uVar1 & 1;
}

