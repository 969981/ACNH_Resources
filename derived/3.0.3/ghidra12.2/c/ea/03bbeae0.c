
void FUN_03bbeae0(long param_1,long param_2)

{
  long lVar1;
  int iVar2;
  long lVar3;
  undefined *__dest;
  undefined *__src;
  long *plVar4;
  long lVar5;
  
  lVar5 = *(long *)(param_1 + 0xd0);
  *(long *)(param_1 + 0x90) = param_2;
  if (lVar5 == 0) goto LAB_03bbec38;
  if (param_2 != 0) {
    __dest = *(undefined **)(lVar5 + 8);
    plVar4 = (long *)(param_2 + 8);
    (**(code **)(*plVar4 + 0x18))(plVar4);
    __src = *(undefined **)(param_2 + 0x10);
    if (__dest != __src) {
      (**(code **)(*(long *)(param_2 + 8) + 0x18))(plVar4);
      lVar3 = 0;
      do {
        if (*(char *)(*(long *)(param_2 + 0x10) + lVar3) == '\0') goto LAB_03bbec0c;
        lVar1 = *(long *)(param_2 + 0x10) + lVar3;
        if (*(char *)(lVar1 + 1) == '\0') goto LAB_03bbec00;
        if (*(char *)(lVar1 + 2) == '\0') goto LAB_03bbec08;
        lVar3 = lVar3 + 3;
      } while (lVar3 != 0x80001);
      goto LAB_03bbebf8;
    }
    goto LAB_03bbec3c;
  }
  __dest = *(undefined **)(lVar5 + 8);
  (**(code **)(PTR_PTR_04c4b980 + 0x18))(&PTR_PTR_04c4b980);
  __src = PTR_DAT_04c4b988;
  if (__dest != PTR_DAT_04c4b988) {
    (**(code **)(PTR_PTR_04c4b980 + 0x18))(&PTR_PTR_04c4b980);
    lVar3 = 0;
    do {
      if (PTR_DAT_04c4b988[lVar3] == '\0') goto LAB_03bbec0c;
      if (PTR_DAT_04c4b988[lVar3 + 1] == '\0') goto LAB_03bbec00;
      if (PTR_DAT_04c4b988[lVar3 + 2] == '\0') goto LAB_03bbec08;
      lVar3 = lVar3 + 3;
    } while (lVar3 != 0x80001);
LAB_03bbebf8:
    lVar3 = 0;
    goto LAB_03bbec0c;
  }
  goto LAB_03bbec90;
LAB_03bbec00:
  lVar3 = lVar3 + 1;
  goto LAB_03bbec0c;
LAB_03bbec08:
  lVar3 = lVar3 + 2;
LAB_03bbec0c:
  iVar2 = (int)lVar3;
  if (*(int *)(lVar5 + 0x10) <= (int)lVar3) {
    iVar2 = *(int *)(lVar5 + 0x10) + -1;
  }
  memcpy(__dest,__src,(long)iVar2);
  __dest[iVar2] = 0;
LAB_03bbec38:
  if (param_2 != 0) {
LAB_03bbec3c:
    lVar3 = *(long *)(DAT_05aebb78 + 0x28);
    lVar5 = *(long *)(lVar3 + 0x70);
    if (lVar5 != lVar3 + 0x68) {
      iVar2 = 0;
      do {
        if (lVar5 == *(int *)(lVar3 + 0x7c) + param_2) goto LAB_03bbec94;
        lVar5 = *(long *)(lVar5 + 8);
        iVar2 = iVar2 + 1;
      } while (lVar5 != lVar3 + 0x68);
      iVar2 = -1;
      goto LAB_03bbec94;
    }
  }
LAB_03bbec90:
  iVar2 = -1;
LAB_03bbec94:
  *(int *)(param_1 + 0xf0) = iVar2;
  return;
}

