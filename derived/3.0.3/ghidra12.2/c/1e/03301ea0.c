
void FUN_03301ea0(long param_1)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  long lVar4;
  long lVar5;
  bool bVar6;
  long lVar7;
  ulong uVar8;
  long *plVar9;
  
  lVar5 = DAT_0572b7f0;
  lVar4 = DAT_05355a60;
  if ((((*(long *)(param_1 + 0x6e0) == 0) ||
       (lVar7 = *(long *)(*(long *)(param_1 + 0x6e0) + 8), lVar7 == 0)) ||
      (*(int *)(DAT_05355a60 + 0x474) < *(int *)(DAT_05355a60 + 0x494))) ||
     ((*(long *)(lVar7 + 0x28) == lVar7 + 0x238 ||
      ((cVar3 = *(char *)(DAT_05355a60 + 0xbe8), cVar3 != '\0' &&
       (lVar7 = *(long *)(lVar7 + 800),
       *(long *)(lVar7 + 0x20) == lVar7 + 0xe0 || *(long *)(lVar7 + 0x28) == lVar7 + 0xe0)))))) {
    return;
  }
  if (0 < *(int *)(DAT_0572b7f0 + 4)) {
    plVar1 = (long *)(DAT_0572b7f0 + 8);
    uVar8 = 0;
    plVar9 = plVar1;
    do {
      bVar6 = 0xf < uVar8;
      uVar8 = uVar8 + 1;
      plVar2 = plVar9;
      if (bVar6) {
        plVar2 = plVar1;
      }
      plVar9 = plVar9 + 1;
      *(undefined8 *)(*plVar2 + 0x30) = 0;
    } while ((long)uVar8 < (long)*(int *)(lVar5 + 4));
    cVar3 = *(char *)(lVar4 + 0xbe8);
  }
  if (cVar3 == '\0') {
    FUN_032fc524(lVar4,0);
    return;
  }
  FUN_03302efc(*(undefined8 *)(lVar4 + 0x20));
  return;
}

