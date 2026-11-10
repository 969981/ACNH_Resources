
void FUN_0034fe10(long param_1,undefined8 param_2,undefined8 *param_3,long param_4)

{
  uint uVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  long lVar8;
  
  lVar5 = *(long *)(param_1 + 0x28);
  if (param_3 == (undefined8 *)0x0) {
    puVar6 = *(undefined8 **)(lVar5 + 0x20);
    FUN_003490c4(puVar6,param_2,lVar5);
    *(undefined8 **)(lVar5 + 0x30) = puVar6;
    lVar3 = (**(code **)PTR_DAT_04bcf640)(*puVar6);
    uVar1 = *(uint *)(param_1 + 0x1c);
    plVar2 = (long *)PTR_DAT_04bd0028;
  }
  else {
    *(undefined8 **)(lVar5 + 0x30) = param_3;
    lVar7 = *(long *)(lVar5 + 8);
    lVar3 = (**(code **)PTR_DAT_04bcf640)(*param_3);
    lVar3 = (param_4 - param_1) + lVar7 + lVar3;
    uVar1 = *(uint *)(param_1 + 0x1c);
    plVar2 = (long *)PTR_DAT_04bd0028;
  }
  PTR_DAT_04bd0028 = (undefined *)plVar2;
  if (0 < (int)uVar1) {
    lVar7 = 0;
    do {
      lVar8 = *(long *)(*(long *)(param_1 + 0x20) + *plVar2 + lVar7);
      if (lVar8 != 0) {
        plVar4 = (long *)FUN_0034fbe4(lVar8,0);
        if (plVar4 != (long *)0x0) {
          *plVar4 = (lVar3 - *(long *)(lVar5 + 8)) + plVar4[2];
        }
        plVar4 = (long *)FUN_0034fbe4(lVar8,1);
        if (plVar4 != (long *)0x0) {
          *plVar4 = (lVar3 - *(long *)(lVar5 + 8)) + plVar4[2];
        }
        plVar4 = (long *)FUN_0034fbe4(lVar8,2);
        if (plVar4 != (long *)0x0) {
          *plVar4 = (lVar3 - *(long *)(lVar5 + 8)) + plVar4[2];
        }
        plVar4 = (long *)FUN_0034fbe4(lVar8,3);
        if (plVar4 != (long *)0x0) {
          *plVar4 = (lVar3 - *(long *)(lVar5 + 8)) + plVar4[2];
        }
        plVar4 = (long *)FUN_0034fbe4(lVar8,4);
        if (plVar4 != (long *)0x0) {
          *plVar4 = (lVar3 - *(long *)(lVar5 + 8)) + plVar4[2];
        }
        plVar4 = (long *)FUN_0034fbe4(lVar8,5);
        if (plVar4 != (long *)0x0) {
          *plVar4 = (lVar3 - *(long *)(lVar5 + 8)) + plVar4[2];
        }
      }
      lVar7 = lVar7 + 0x40;
    } while ((ulong)uVar1 * 0x40 != lVar7);
  }
  *(undefined1 *)(param_1 + 0x14) = 0;
  return;
}

