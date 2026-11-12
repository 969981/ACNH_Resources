
void FUN_006f37cc(long param_1,uint param_2,undefined1 param_3,undefined1 param_4,undefined1 param_5
                 ,undefined1 param_6)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  long *plVar5;
  
  plVar5 = *(long **)(param_1 + 0x210);
  iVar2 = (int)plVar5[2];
  iVar4 = (int)plVar5[1];
  if (iVar2 < iVar4) {
    *(int *)(plVar5 + 2) = iVar2 + 1;
    iVar2 = *(int *)((long)plVar5 + 0xc) + iVar2;
    iVar3 = 0;
    if (iVar4 <= iVar2) {
      iVar3 = iVar4;
    }
    puVar1 = (uint *)(*plVar5 + (long)(iVar2 - iVar3) * 8);
    *puVar1 = param_2 & 0xffff;
    *(undefined1 *)(puVar1 + 1) = param_3;
    *(undefined1 *)((long)puVar1 + 5) = param_4;
    *(undefined1 *)((long)puVar1 + 6) = param_5;
    *(undefined1 *)((long)puVar1 + 7) = param_6;
    *(undefined2 *)(param_1 + 0x20c) = 0;
  }
  return;
}

