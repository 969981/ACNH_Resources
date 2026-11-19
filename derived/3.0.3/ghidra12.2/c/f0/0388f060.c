
void FUN_0388f060(long param_1,long param_2)

{
  uint uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  
  puVar2 = PTR_DAT_04bcb7d8;
  lVar4 = *(long *)(param_2 + 8);
  uVar3 = *(undefined8 *)(param_2 + 0x10);
  uVar1 = (uint)uVar3 & 0xff;
  if (*(int *)(param_1 + 0x28) != 0) {
    plVar5 = *(long **)(param_1 + 0x30);
    lVar6 = (long)*(int *)(param_1 + 0x28) << 3;
    do {
      lVar7 = *plVar5;
      if (((*(long *)(lVar7 + 0x10) == lVar4) && (*(byte *)(lVar7 + 0x18) == uVar1)) &&
         ((uint)*(byte *)(lVar7 + 0x19) == ((uint)uVar3 >> 8 & 0xff))) goto LAB_0388f104;
      plVar5 = plVar5 + 1;
      lVar6 = lVar6 + -8;
    } while (lVar6 != 0);
  }
  if (((*(long *)(param_1 + 0x88) == lVar4) && (*(byte *)(param_1 + 0x90) == uVar1)) &&
     ((uint)*(byte *)(param_1 + 0x91) == ((uint)((ulong)uVar3 >> 8) & 0xff))) {
    lVar7 = param_1 + 0x78;
LAB_0388f104:
    *(undefined4 *)(lVar7 + 8) = 2;
    plVar5 = *(long **)(*(long *)puVar2 + 0x68);
    (**(code **)(*plVar5 + 0x1b8))(plVar5,lVar7 + 0x10,2);
    lVar4 = *(long *)(param_2 + 8);
    uVar3 = *(undefined8 *)(param_2 + 0x10);
  }
  plVar5 = *(long **)(*(long *)puVar2 + 0x68);
  if (((lVar4 == plVar5[2]) && ((uint)*(byte *)(plVar5 + 3) == ((uint)uVar3 & 0xff))) &&
     ((uint)*(byte *)((long)plVar5 + 0x19) == ((uint)((ulong)uVar3 >> 8) & 0xff))) {
                    /* WARNING: Could not recover jumptable at 0x0388f16c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar5 + 0x1b0))();
    return;
  }
  return;
}

