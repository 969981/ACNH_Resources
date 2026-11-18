
void FUN_032924d0(long param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  
  if (param_2 == 0) {
    return;
  }
  *(byte *)(*(long *)(param_1 + 0x20) + 0x1c8) = *(byte *)(*(long *)(param_1 + 0x20) + 0x1c8) & 0xfe
  ;
  plVar1 = *(long **)(param_1 + 0x20);
  if (*plVar1 == 0) {
LAB_03292540:
    lVar2 = plVar1[2];
    if (lVar2 != 0) {
      lVar3 = plVar1[3];
      goto LAB_0329254c;
    }
  }
  else {
    FUN_032ae1e0();
    plVar1 = *(long **)(param_1 + 0x20);
    lVar2 = *plVar1;
    if (lVar2 == 0) goto LAB_03292540;
    lVar3 = plVar1[3];
    if (*(long **)(lVar2 + 8) == plVar1) {
      if (lVar3 == 0) {
        *(undefined8 *)(lVar2 + 8) = 0;
      }
      else {
        *(long *)(lVar2 + 8) = lVar3;
        *(undefined8 *)(plVar1[3] + 0x10) = 0;
      }
      goto LAB_03292560;
    }
    lVar2 = plVar1[2];
LAB_0329254c:
    *(long *)(lVar2 + 0x18) = lVar3;
  }
  if (plVar1[3] != 0) {
    *(long *)(plVar1[3] + 0x10) = plVar1[2];
  }
LAB_03292560:
  plVar1[2] = 0;
  plVar1[3] = 0;
  *plVar1 = param_2;
  lVar2 = *(long *)(param_2 + 8);
  if (*(long *)(param_2 + 8) == 0) {
    *(long **)(param_2 + 8) = plVar1;
  }
  else {
    do {
      lVar3 = lVar2;
      lVar2 = *(long *)(lVar3 + 0x18);
    } while (*(long *)(lVar3 + 0x18) != 0);
    *(long **)(lVar3 + 0x18) = plVar1;
    plVar1[2] = lVar3;
  }
  plVar1 = *(long **)(param_1 + 0x20);
  lVar2 = *(long *)PTR_DAT_04bc8ee8;
  if (*(long **)(lVar2 + 0x3a8) != plVar1) {
    plVar4 = plVar1;
    do {
      if ((plVar4 == (long *)(lVar2 + 0x1d8)) || (plVar4 == (long *)(lVar2 + 8))) {
        do {
          if ((*(byte *)(plVar1 + 0x39) >> 1 & 1) != 0) {
            FUN_032af0b0(lVar2,plVar1,0);
            return;
          }
          plVar1 = (long *)*plVar1;
        } while (plVar1 != (long *)0x0);
        return;
      }
      plVar4 = (long *)*plVar4;
    } while (plVar4 != (long *)0x0);
  }
  return;
}

