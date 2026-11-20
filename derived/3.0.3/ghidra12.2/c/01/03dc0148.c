
undefined * FUN_03dc0148(long *param_1,int param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  
  if (param_2 == 0) {
    if ((*PTR_DAT_04bd3788 & 1) == 0) {
      iVar4 = __cxa_guard_acquire(PTR_DAT_04bd3788);
      puVar6 = PTR_DAT_04bd3780;
      puVar5 = PTR_DAT_04bd3750;
      if (iVar4 != 0) {
        if (((*PTR_DAT_04bd3758 & 1) == 0) &&
           (iVar4 = __cxa_guard_acquire(PTR_DAT_04bd3758), iVar4 != 0)) {
          puVar1 = PTR_DAT_04bd3760 + 0x10;
          puVar2 = PTR_DAT_04bd3770 + 0x10;
          *(undefined **)(puVar5 + 0x28) = PTR_DAT_04bd3768 + 0x10;
          puVar3 = PTR_DAT_04bd3778;
          *(undefined **)puVar5 = puVar1;
          *(undefined **)(puVar5 + 8) = puVar2;
          *(undefined **)(puVar5 + 0x48) = puVar3 + 0x10;
          __cxa_guard_release(PTR_DAT_04bd3758);
        }
        *(undefined8 *)puVar6 = 0x7f7fffff7f7fffff;
        *(undefined8 *)(puVar6 + 8) = 0xff7fffffff7fffff;
        (*(code *)**(undefined8 **)(puVar5 + 8))(puVar5 + 8,puVar6);
        __cxa_guard_release(PTR_DAT_04bd3788);
      }
    }
    else {
      puVar6 = PTR_DAT_04bd3780;
    }
  }
  else {
    if ((param_1[1] != 0) && (lVar7 = *param_1, lVar7 != 0)) {
      if (((DAT_05af8d60 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_05af8d60), iVar4 != 0)) {
        FUN_03dbe730();
        FUN_001001d0(PTR_FUN_04bd2f60,&DAT_04c53568,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_05af8d60);
      }
      puVar5 = (undefined *)FUN_03c66100(lVar7,&DAT_04c53568,param_1[1]);
      return puVar5;
    }
    puVar6 = (undefined *)0x0;
  }
  return puVar6;
}

