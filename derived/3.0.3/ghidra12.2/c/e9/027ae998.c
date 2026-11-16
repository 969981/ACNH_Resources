
bool FUN_027ae998(ushort *param_1,ushort *param_2)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  
  cVar1 = (char)param_1[0x2c];
  if (cVar1 == (char)param_2[0x2c]) {
    if (cVar1 == '\x02') {
      if ((char)*param_1 == (char)*param_2) {
        return (((((*(long *)(param_2 + 1) == *(long *)(param_1 + 1) &&
                   *(long *)(param_2 + 5) == *(long *)(param_1 + 5)) &&
                  *(long *)(param_2 + 9) == *(long *)(param_1 + 9)) &&
                 *(long *)(param_2 + 0xd) == *(long *)(param_1 + 0xd)) &&
                *(long *)(param_2 + 0x11) == *(long *)(param_1 + 0x11)) &&
               *(long *)(param_2 + 0x15) == *(long *)(param_1 + 0x15)) &&
               param_2[0x19] == param_1[0x19];
      }
    }
    else if (cVar1 == '\x01') {
      if ((ushort)(*param_2 >> 8 | *param_2 << 8) == (ushort)(*param_1 >> 8 | *param_1 << 8)) {
        if ((param_1[4] == 0) || (param_2[4] == 0)) {
          iVar3 = *(int *)(param_1 + 2);
          iVar4 = *(int *)(param_2 + 2);
          goto LAB_027aeb14;
        }
        if (*(int *)(param_1 + 2) == *(int *)(param_2 + 2)) {
          iVar3 = *(int *)(param_2 + 0xc);
          iVar4 = *(int *)(param_1 + 0xc);
          bVar2 = false;
          if (*(long *)(param_2 + 4) == *(long *)(param_1 + 4)) {
            bVar2 = *(long *)(param_2 + 8) == *(long *)(param_1 + 8);
          }
          goto LAB_027aeaec;
        }
      }
    }
    else if (((cVar1 == '\0') && (*(int *)(param_1 + 0xe) == *(int *)(param_2 + 0xe))) &&
            ((*(long *)(param_2 + 0x10) == *(long *)(param_1 + 0x10) &&
             *(long *)(param_2 + 0x14) == *(long *)(param_1 + 0x14)) &&
             *(int *)(param_2 + 0x18) == *(int *)(param_1 + 0x18))) {
      if ((param_1[2] == 0) || (param_2[2] == 0)) {
        iVar3 = *(int *)param_1;
        iVar4 = *(int *)param_2;
LAB_027aeb14:
        return iVar3 == iVar4;
      }
      if (*(int *)param_1 == *(int *)param_2) {
        iVar3 = *(int *)(param_2 + 10);
        bVar2 = *(long *)(param_2 + 2) == *(long *)(param_1 + 2) &&
                *(long *)(param_2 + 6) == *(long *)(param_1 + 6);
        iVar4 = *(int *)(param_1 + 10);
LAB_027aeaec:
        return bVar2 && iVar3 == iVar4;
      }
    }
  }
  return false;
}

