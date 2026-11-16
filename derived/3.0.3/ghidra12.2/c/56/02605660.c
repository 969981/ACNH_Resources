
void FUN_02605660(long param_1,long *param_2)

{
  long lVar1;
  int iVar2;
  long lVar3;
  Any64BitId *__src;
  long lVar4;
  Any64BitId aAStack_74 [47];
  undefined1 local_45;
  
  lVar4 = *(long *)(param_1 + 8);
  if (lVar4 != 0) {
    local_45 = 0;
    (**(code **)(*param_2 + 0x18))(param_2);
    __src = (Any64BitId *)param_2[1];
    if (aAStack_74 != __src) {
      (**(code **)(*param_2 + 0x18))(param_2);
      lVar3 = 0;
      do {
        if (*(char *)(param_2[1] + lVar3) == '\0') goto LAB_0260572c;
        lVar1 = param_2[1] + lVar3;
        if (*(char *)(lVar1 + 1) == '\0') {
          lVar3 = lVar3 + 1;
          goto LAB_0260572c;
        }
        if (*(char *)(lVar1 + 2) == '\0') {
          lVar3 = lVar3 + 2;
          goto LAB_0260572c;
        }
        lVar3 = lVar3 + 3;
      } while (lVar3 != 0x80001);
      lVar3 = 0;
LAB_0260572c:
      iVar2 = (int)lVar3;
      if (0x2f < (int)lVar3) {
        iVar2 = 0x2f;
      }
      memcpy(aAStack_74,__src,(long)iVar2);
      aAStack_74[iVar2] = (Any64BitId)0x0;
    }
    if ((*(uint *)(lVar4 + 0x38) & 1) != 0) {
      iVar2 = *(int *)(lVar4 + 0x44);
      *(int *)(lVar4 + 0x44) = iVar2 + 1;
      if (iVar2 < (int)((*(uint *)(DAT_05b05628 + 0xb0) >> 6 & 1) + *(int *)(lVar4 + 0x40))) {
        nn::prepo::PlayReport::Add(*(char **)(lVar4 + 0x30),aAStack_74);
      }
    }
  }
  return;
}

