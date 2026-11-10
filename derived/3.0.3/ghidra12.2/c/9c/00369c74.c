
long * FUN_00369c74(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                   uint param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  char acStack_c8 [8];
  long local_c0;
  
  nn::util::SNPrintf(acStack_c8,0x88,"%s_%s.bflan",*(undefined8 *)(param_1 + 0x30),param_3);
  uVar2 = (**(code **)(**(long **)(param_1 + 0x40) + 0x50))
                    (*(long **)(param_1 + 0x40),0x616e696d,acStack_c8);
  FUN_00360020(acStack_c8,uVar2);
  if (local_c0 == 0) {
    plVar3 = (long *)0x0;
  }
  else {
    plVar3 = (long *)(**(code **)PTR_DAT_04bd0800)(0x50,4,*(undefined8 *)PTR_DAT_04bd0810);
    if (plVar3 != (long *)0x0) {
      FUN_00361168(plVar3);
      puVar1 = PTR_DAT_04bc93f8;
      plVar3[9] = 0;
      *plVar3 = (long)(puVar1 + 0x10);
      plVar4 = plVar3 + 1;
      lVar5 = *plVar4;
      plVar6 = (long *)(param_1 + 8);
      *plVar4 = *plVar6;
      *(long **)(lVar5 + 8) = plVar6;
      *(long **)(*plVar6 + 8) = plVar4;
      *plVar6 = lVar5;
      (**(code **)(*plVar3 + 0x40))(plVar3,param_2,*(undefined8 *)(param_1 + 0x40),local_c0);
    }
  }
  FUN_00361510(plVar3,param_4,param_5 & 1);
  return plVar3;
}

