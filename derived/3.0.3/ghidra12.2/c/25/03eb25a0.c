
void FUN_03eb25a0(long param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  lVar2 = *(long *)(param_1 + 0x110);
  lVar3 = *(long *)(param_1 + 0x108);
  while (*(char *)(lVar3 + 8) == '\0') {
    lVar3 = *(long *)(lVar3 + 0x38);
    if (lVar3 == 0) {
      return;
    }
  }
  lVar4 = lVar2;
  if (*(char *)(lVar2 + 8) == '\0') {
    do {
      lVar4 = *(long *)(lVar4 + 0x40);
      if (lVar4 == 0) {
        return;
      }
    } while (*(char *)(lVar4 + 8) == '\0');
  }
  if (*(long *)(param_1 + 0x118) != lVar3) {
    lVar5 = *(long *)(*(long *)(param_1 + 0x118) + 0x40);
    lVar4 = lVar3;
    if (lVar5 != 0) {
      lVar5 = *(long *)(lVar5 + 0x40);
      if ((((((lVar5 == 0) || (lVar5 = *(long *)(lVar5 + 0x40), lVar5 == 0)) ||
            (lVar5 = *(long *)(lVar5 + 0x40), lVar5 == 0)) ||
           (((lVar5 = *(long *)(lVar5 + 0x40), lVar5 == 0 ||
             (lVar5 = *(long *)(lVar5 + 0x40), lVar5 == 0)) ||
            ((lVar5 = *(long *)(lVar5 + 0x40), lVar5 == 0 ||
             ((lVar5 = *(long *)(lVar5 + 0x40), lVar5 == 0 ||
              (lVar5 = *(long *)(lVar5 + 0x40), lVar5 == 0)))))))) ||
          ((lVar5 = *(long *)(lVar5 + 0x40), lVar5 == 0 ||
           ((((((lVar5 = *(long *)(lVar5 + 0x40), lVar5 == 0 ||
                (lVar5 = *(long *)(lVar5 + 0x40), lVar5 == 0)) ||
               (lVar5 = *(long *)(lVar5 + 0x40), lVar5 == 0)) ||
              ((lVar5 = *(long *)(lVar5 + 0x40), lVar5 == 0 ||
               (lVar5 = *(long *)(lVar5 + 0x40), lVar5 == 0)))) ||
             ((lVar5 = *(long *)(lVar5 + 0x40), lVar5 == 0 ||
              ((lVar5 = *(long *)(lVar5 + 0x40), lVar5 == 0 ||
               (lVar5 = *(long *)(lVar5 + 0x40), lVar5 == 0)))))) ||
            (lVar5 = *(long *)(lVar5 + 0x40), lVar5 == 0)))))) ||
         ((((lVar5 = *(long *)(lVar5 + 0x40), lVar5 == 0 ||
            (lVar5 = *(long *)(lVar5 + 0x40), lVar5 == 0)) ||
           (lVar5 = *(long *)(lVar5 + 0x40), lVar5 == 0)) ||
          ((lVar5 = *(long *)(lVar5 + 0x40), lVar5 == 0 ||
           (lVar5 = *(long *)(lVar5 + 0x40), lVar5 == 0)))))) {
        *(long *)(param_1 + 0x118) = lVar3;
        return;
      }
      lVar3 = *(long *)(lVar5 + 0x40);
      if (lVar3 != 0) {
        *(long *)(param_1 + 0x118) = lVar3;
        if (*(char *)(lVar3 + 8) != '\0') {
          return;
        }
        do {
          plVar1 = (long *)(lVar3 + 0x40);
          lVar3 = lVar2;
          if (*plVar1 != 0) {
            lVar3 = *plVar1;
          }
          lVar4 = lVar3;
        } while (*(char *)(lVar3 + 8) == '\0');
      }
    }
  }
  *(long *)(param_1 + 0x118) = lVar4;
  return;
}

