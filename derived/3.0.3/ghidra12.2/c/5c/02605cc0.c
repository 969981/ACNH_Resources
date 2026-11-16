
void FUN_02605cc0(long param_1,long *param_2)

{
  long lVar1;
  int iVar2;
  long lVar3;
  Struct *__src;
  long lVar4;
  Struct aSStack_74 [47];
  undefined1 local_45;
  
  lVar4 = *(long *)(param_1 + 8);
  if (lVar4 != 0) {
    local_45 = 0;
    (**(code **)(*param_2 + 0x18))(param_2);
    __src = (Struct *)param_2[1];
    if (aSStack_74 != __src) {
      (**(code **)(*param_2 + 0x18))(param_2);
      lVar3 = 0;
      do {
        if (*(char *)(param_2[1] + lVar3) == '\0') goto LAB_02605d8c;
        lVar1 = param_2[1] + lVar3;
        if (*(char *)(lVar1 + 1) == '\0') {
          lVar3 = lVar3 + 1;
          goto LAB_02605d8c;
        }
        if (*(char *)(lVar1 + 2) == '\0') {
          lVar3 = lVar3 + 2;
          goto LAB_02605d8c;
        }
        lVar3 = lVar3 + 3;
      } while (lVar3 != 0x80001);
      lVar3 = 0;
LAB_02605d8c:
      iVar2 = (int)lVar3;
      if (0x2f < (int)lVar3) {
        iVar2 = 0x2f;
      }
      memcpy(aSStack_74,__src,(long)iVar2);
      aSStack_74[iVar2] = (Struct)0x0;
    }
    if ((*(uint *)(lVar4 + 0x38) & 1) != 0) {
      iVar2 = *(int *)(lVar4 + 0x44);
      *(int *)(lVar4 + 0x44) = iVar2 + 1;
      if (iVar2 < (int)((*(uint *)(DAT_05b05628 + 0xb0) >> 6 & 1) + *(int *)(lVar4 + 0x40))) {
        nn::prepo::PlayReport::Add(*(char **)(lVar4 + 0x30),aSStack_74);
      }
    }
  }
  return;
}

