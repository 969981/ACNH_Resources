
void FUN_00355d50(long param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  short sVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  
  if (*(long **)(param_1 + 0x68) != (long *)(param_1 + 0x60)) {
    plVar3 = *(long **)(param_1 + 0x68);
    do {
      plVar2 = (long *)plVar3[1];
      lVar5 = *plVar2;
      *(long **)(*plVar3 + 8) = plVar2;
      *plVar2 = *plVar3;
      *(long **)(lVar5 + 8) = plVar3;
      *plVar3 = lVar5;
      if ((*(byte *)(plVar3 + 7) >> 3 & 1) != 0) {
        lVar5 = param_1 + (ulong)*(byte *)((long)plVar3 + 0x3b) * 0x18;
        plVar1 = (long *)(lVar5 + 0x80);
        if (plVar3 + 2 != plVar1) {
          plVar6 = (long *)plVar3[3];
          lVar7 = *plVar6;
          *(long **)(plVar3[2] + 8) = plVar6;
          *plVar6 = plVar3[2];
          *(long **)(lVar7 + 8) = plVar3 + 2;
          plVar3[2] = lVar7;
        }
        plVar6 = *(long **)(lVar5 + 0x88);
        if (plVar6 == plVar1) {
          sVar4 = 0;
        }
        else {
          do {
            plVar6 = (long *)plVar6[1];
          } while (plVar6 != plVar1);
          sVar4 = *(short *)(*plVar1 + 0x30) + *(short *)(*plVar1 + 0x34) + 2;
        }
        *(short *)(param_1 + (ulong)*(byte *)((long)plVar3 + 0x3b) * 0x18 + 0x92) = sVar4;
      }
      FUN_003517e0(param_1 + 0x30,(int)plVar3[6],*(undefined2 *)((long)plVar3 + 0x36),
                   *(undefined2 *)((long)plVar3 + 0x34));
      plVar3 = plVar2;
    } while (plVar2 != (long *)(param_1 + 0x60));
  }
  if (*(long *)(param_1 + 0x30) == 0) {
    return;
  }
  FUN_00351f30();
  return;
}

