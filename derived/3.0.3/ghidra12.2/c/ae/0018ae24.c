
undefined8 * FUN_0018ae24(long param_1,int param_2,undefined4 param_3)

{
  long lVar1;
  uint uVar2;
  undefined *puVar3;
  uint *puVar4;
  undefined8 *puVar5;
  long *plVar6;
  undefined1 auVar7 [12];
  long lStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  undefined4 local_28;
  undefined4 local_24;
  
  puVar3 = PTR_DAT_04bcb900;
  if (param_2 != 0) {
    return (undefined8 *)0x0;
  }
  plVar6 = (long *)(PTR_DAT_04bcb900 + 0x80);
  if (*PTR_DAT_04bcb908 != '\0') {
    puVar4 = (uint *)FUN_03876070(*(undefined8 *)PTR_DAT_04bcb910);
    puStack_38 = PTR_DAT_04bcbc88;
    uVar2 = *puVar4;
    if (uVar2 != 0) {
      lVar1 = **(long **)(puVar3 + 0xa0);
      if ((ulong)((*(long **)(puVar3 + 0xa0))[1] - lVar1 >> 3) <= (ulong)uVar2) {
        local_24 = 0xe0000003;
        local_28 = 0;
        FUN_0018cd00(*(long *)PTR_DAT_04bcbc88 + 0x38,&local_24);
        auVar7 = FUN_0018cd00(*(long *)puStack_38 + 0xb8,&local_28);
        puVar3 = PTR_DAT_04bcbde0;
        plVar6 = auVar7._0_8_;
        pcStack_40 = FUN_0018af38;
        plVar6[2] = 0;
        *(int *)((long)plVar6 + 0x1c) = auVar7._8_4_;
        *(undefined4 *)((long)plVar6 + 0xc) = param_3;
        *plVar6 = (long)(puVar3 + 0x10);
        if (DAT_04be21f1 == '\0') {
          puVar5 = (undefined8 *)FUN_0018cb8c(&lStack_48);
        }
        else {
          puVar5 = (undefined8 *)FUN_0018c9b0(&lStack_48,0);
        }
        *(undefined4 *)(plVar6 + 3) = 0;
        puVar3 = PTR_DAT_04bcbcb0;
        *(undefined4 *)(plVar6 + 4) = 0;
        *(undefined2 *)(plVar6 + 1) = 1;
        *(undefined1 *)(plVar6 + 6) = 0;
        *(long *)puVar3 = lStack_48;
        plVar6[2] = lStack_48;
        plVar6[5] = 0x800000000;
        return puVar5;
      }
      plVar6 = (long *)(*(long *)(lVar1 + (ulong)uVar2 * 8) + 0x78);
    }
  }
  if (*(code **)(*plVar6 + 0x28) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0018aeb8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    puVar5 = (undefined8 *)(**(code **)(*plVar6 + 0x28))(param_1);
    return puVar5;
  }
  if (*(code **)PTR_DAT_04bcba20 == (code *)0x0) {
    puVar5 = malloc((param_1 + 7U & 0xfffffffffffffff8) + 0x10);
  }
  else {
    puVar5 = (undefined8 *)(**(code **)PTR_DAT_04bcba20)();
  }
  *puVar5 = *(undefined8 *)PTR_DAT_04bcba28;
  return puVar5 + 2;
}

