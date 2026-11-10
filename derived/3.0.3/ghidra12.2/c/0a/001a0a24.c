
void FUN_001a0a24(long param_1,long param_2,undefined4 param_3,undefined4 param_4,undefined2 param_5
                 )

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  
  lVar3 = FUN_001a0a90(param_1 + 8);
  plVar4 = (long *)FUN_00187df4(0x30);
  *(undefined4 *)(plVar4 + 4) = param_3;
  *(undefined4 *)((long)plVar4 + 0x24) = param_4;
  *(undefined2 *)(plVar4 + 5) = param_5;
  plVar4[2] = (long)&DAT_0483a100;
  plVar4[3] = param_2;
  puVar1 = *(undefined8 **)(lVar3 + 8);
  lVar2 = *(long *)(lVar3 + 0x10);
  *plVar4 = lVar3;
  plVar4[1] = (long)puVar1;
  *puVar1 = plVar4;
  *(long **)(lVar3 + 8) = plVar4;
  *(long *)(lVar3 + 0x10) = lVar2 + 1;
  return;
}

