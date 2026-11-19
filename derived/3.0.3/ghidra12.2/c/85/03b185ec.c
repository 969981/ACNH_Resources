
long * FUN_03b185ec(long param_1,undefined8 param_2,uint param_3)

{
  undefined *puVar1;
  short sVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  undefined8 uVar7;
  undefined1 auStack_60 [8];
  undefined8 local_58;
  
  lVar3 = FUN_03b18700();
  if (lVar3 != 0) {
    FUN_00360020(auStack_60,lVar3);
    sVar2 = FUN_0036013c(auStack_60);
    if (sVar2 != 0) {
      uVar7 = *(undefined8 *)(*(long *)PTR_DAT_04bbd7c0 + 0x48);
      plVar4 = (long *)FUN_00367b30(0x68);
      FUN_0035d9bc();
      puVar1 = PTR_DAT_04bd1dc0;
      plVar4[0xc] = 0;
      *plVar4 = (long)(puVar1 + 0x10);
      plVar4[8] = (long)(plVar4 + 8);
      plVar4[9] = (long)(plVar4 + 8);
      plVar4[10] = 0x2000000000000000;
      plVar4[0xb] = 0;
      plVar5 = plVar4 + 1;
      lVar3 = *plVar5;
      plVar6 = (long *)(param_1 + 8);
      *plVar5 = *plVar6;
      *(long **)(lVar3 + 8) = plVar6;
      *(long **)(*plVar6 + 8) = plVar5;
      *plVar6 = lVar3;
      (**(code **)(*plVar4 + 0x40))(plVar4,uVar7,*(undefined8 *)(param_1 + 0x40),local_58);
      FUN_03b1b420(plVar4,auStack_60,param_1,*(undefined8 *)(param_1 + 0x20),param_3 & 1);
      return plVar4;
    }
  }
  return (long *)0x0;
}

