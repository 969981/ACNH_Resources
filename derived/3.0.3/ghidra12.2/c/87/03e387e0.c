
undefined8 FUN_03e387e0(long *param_1,int param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  long lVar7;
  undefined8 uVar8;
  
  if (param_2 == 0) {
    if (((DAT_05af9100 & 1) == 0) &&
       (iVar6 = __cxa_guard_acquire(&DAT_05af9100), puVar5 = PTR_DAT_04bd3858,
       puVar4 = PTR_DAT_04bd3850, iVar6 != 0)) {
      if (((*PTR_DAT_04bd3858 & 1) == 0) &&
         (iVar6 = __cxa_guard_acquire(PTR_DAT_04bd3858), puVar2 = PTR_DAT_04bd3860, iVar6 != 0)) {
        puVar3 = PTR_DAT_04bd3878 + 0x10;
        puVar1 = PTR_DAT_04bd3868 + 0x10;
        *(undefined **)(puVar4 + 0x28) = PTR_DAT_04bd3870 + 0x10;
        *(undefined **)(puVar4 + 0x48) = puVar3;
        puVar3 = PTR_DAT_04bd3880;
        *(undefined **)puVar4 = puVar2 + 0x10;
        *(undefined **)(puVar4 + 8) = puVar1;
        *(undefined **)(puVar4 + 0x68) = puVar3 + 0x10;
        __cxa_guard_release(PTR_DAT_04bd3858);
      }
      if (((*puVar5 & 1) == 0) &&
         (iVar6 = __cxa_guard_acquire(PTR_DAT_04bd3858), puVar5 = PTR_DAT_04bd3860, iVar6 != 0)) {
        puVar2 = PTR_DAT_04bd3878 + 0x10;
        puVar3 = PTR_DAT_04bd3868 + 0x10;
        *(undefined **)(puVar4 + 0x28) = PTR_DAT_04bd3870 + 0x10;
        *(undefined **)(puVar4 + 0x48) = puVar2;
        puVar2 = PTR_DAT_04bd3880;
        *(undefined **)puVar4 = puVar5 + 0x10;
        *(undefined **)(puVar4 + 8) = puVar3;
        *(undefined **)(puVar4 + 0x68) = puVar2 + 0x10;
        __cxa_guard_release(PTR_DAT_04bd3858);
      }
      DAT_05af90f8 = (*(code *)**(undefined8 **)(puVar4 + 0x68))(puVar4 + 0x68,&DAT_05af90e0);
      (*(code *)**(undefined8 **)(puVar4 + 8))(puVar4 + 8,DAT_05af90f8);
      FUN_001001d0(&LAB_03dc60e0,&DAT_05af90e0,&__DT_FINI_ARRAY);
      __cxa_guard_release(&DAT_05af9100);
    }
    uVar8 = DAT_05af90f8;
  }
  else if (param_1[1] == 0) {
    uVar8 = 0;
  }
  else {
    lVar7 = *param_1;
    uVar8 = 0;
    if (lVar7 != 0) {
      if ((DAT_05af9080 & 1) == 0) {
        iVar6 = __cxa_guard_acquire(&DAT_05af9080);
        if (iVar6 != 0) {
          FUN_03dc5a20(lVar7);
          FUN_001001d0(PTR_FUN_04bd2f60,&DAT_04c53fa8,&__DT_FINI_ARRAY);
          __cxa_guard_release(&DAT_05af9080);
        }
      }
      uVar8 = FUN_03c66100(lVar7,&DAT_04c53fa8,param_1[1]);
      return uVar8;
    }
  }
  return uVar8;
}

