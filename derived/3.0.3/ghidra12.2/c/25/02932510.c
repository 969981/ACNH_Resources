
void FUN_02932510(long param_1)

{
  int iVar1;
  undefined *__src;
  bool bVar2;
  ulong uVar3;
  long lVar4;
  undefined *__dest;
  
  if (**(char **)(param_1 + 8) != '\0') {
    if (*(int *)(param_1 + 0x38) == 0) {
      bVar2 = true;
    }
    else {
      iVar1 = *(int *)(param_1 + 0x38) + -1;
      bVar2 = iVar1 == 0;
      *(int *)(param_1 + 0x38) = iVar1;
    }
    uVar3 = FUN_0291e3c8(bVar2,0);
    if (((uVar3 & 1) != 0) && (uVar3 = FUN_02930400(param_1), (uVar3 & 1) != 0)) {
      __dest = *(undefined **)(param_1 + 8);
      (**(code **)(PTR_PTR_04c4b980 + 0x18))(&PTR_PTR_04c4b980);
      __src = PTR_DAT_04c4b988;
      if (__dest != PTR_DAT_04c4b988) {
        (**(code **)(PTR_PTR_04c4b980 + 0x18))(&PTR_PTR_04c4b980);
        lVar4 = 0;
        do {
          if (PTR_DAT_04c4b988[lVar4] == '\0') goto LAB_029325ec;
          if (PTR_DAT_04c4b988[lVar4 + 1] == '\0') {
            lVar4 = lVar4 + 1;
            goto LAB_029325ec;
          }
          if (PTR_DAT_04c4b988[lVar4 + 2] == '\0') {
            lVar4 = lVar4 + 2;
            goto LAB_029325ec;
          }
          lVar4 = lVar4 + 3;
        } while (lVar4 != 0x80001);
        lVar4 = 0;
LAB_029325ec:
        iVar1 = (int)lVar4;
        if (*(int *)(param_1 + 0x10) <= (int)lVar4) {
          iVar1 = *(int *)(param_1 + 0x10) + -1;
        }
        memcpy(__dest,__src,(long)iVar1);
        __dest[iVar1] = 0;
      }
    }
  }
  return;
}

