
char * FUN_03f17310(char *param_1,long param_2)

{
  uint uVar1;
  char cVar2;
  ushort uVar3;
  long lVar4;
  long *plVar5;
  
  cVar2 = *param_1;
  if (cVar2 == '\b') {
    uVar3 = *(ushort *)(param_1 + 2);
    if (((int)(uint)uVar3 < *(int *)(param_2 + 0x60)) &&
       (*(char *)(*(long *)(param_2 + 0x70) + (ulong)uVar3) == '\x02')) {
      uVar1 = *(uint *)(*(long *)(param_2 + 0x80) + (ulong)uVar3 * 4);
      if (*(uint *)(param_2 + 0x88) <= uVar1) {
        uVar1 = 0;
      }
      plVar5 = (long *)(*(long *)(param_2 + 0x90) + (long)(int)uVar1 * 0x58);
LAB_03f173dc:
      (**(code **)(*plVar5 + 0x18))(plVar5);
      return (char *)plVar5[1];
    }
  }
  else if (cVar2 == '\t') {
    lVar4 = *(long *)(param_2 + 8);
    uVar3 = *(ushort *)(param_1 + 2);
    if (((int)(uint)uVar3 < *(int *)(lVar4 + 0x104)) &&
       (*(char *)(*(long *)(lVar4 + 0x110) + (ulong)uVar3) == '\x02')) {
      uVar1 = *(uint *)(*(long *)(lVar4 + 0x120) + (ulong)uVar3 * 4);
      if (*(uint *)(lVar4 + 0x128) <= uVar1) {
        uVar1 = 0;
      }
      plVar5 = (long *)(*(long *)(lVar4 + 0x130) + (long)(int)uVar1 * 0x58);
      goto LAB_03f173dc;
    }
  }
  else if (cVar2 == '\n') {
    return param_1 + *(ushort *)(param_1 + 2);
  }
  return "";
}

