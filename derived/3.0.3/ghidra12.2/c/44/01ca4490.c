
undefined1 * FUN_01ca4490(long param_1)

{
  undefined1 *puVar1;
  char cVar2;
  undefined1 *puVar3;
  ulong uVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  
  plVar6 = *(long **)(param_1 + 0xf80);
  if (*(char *)(DAT_05358908 + 0x2078) != '\0') {
                    /* WARNING: Could not recover jumptable at 0x01ca44d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    puVar3 = (undefined1 *)(**(code **)(*plVar6 + 0x100))(plVar6);
    return puVar3;
  }
  plVar7 = *(long **)(DAT_05ae6a60 + 0x68);
  uVar4 = (**(code **)(*plVar7 + 0xa8))(plVar7);
  if (((uVar4 & 1) == 0) &&
     (plVar7[2] != plVar7[5] || *(char *)((long)plVar7 + 0x19) != *(char *)((long)plVar7 + 0x31))) {
    plVar7 = *(long **)(DAT_05ae6a60 + 0x68);
    cVar2 = (**(code **)(*plVar7 + 0x160))(plVar7,plVar7 + 5);
    lVar5 = *(long *)(plVar6[3] + (long)cVar2 * 8);
    puVar3 = (undefined1 *)
             **(undefined8 **)(*(long *)(lVar5 + 8) + (long)*(int *)(lVar5 + 0x20) * 8);
  }
  else {
    puVar3 = (undefined1 *)(**(code **)(*plVar6 + 0x108))(plVar6);
  }
  puVar1 = &DAT_04178787;
  if (puVar3 != (undefined1 *)0x0) {
    puVar1 = puVar3;
  }
  return puVar1;
}

