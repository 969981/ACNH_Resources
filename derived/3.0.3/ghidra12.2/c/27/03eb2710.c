
void FUN_03eb2710(long param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  lVar3 = *(long *)(param_1 + 0x108);
  lVar2 = *(long *)(param_1 + 0x110);
  lVar4 = lVar3;
  if (*(char *)(lVar3 + 8) == '\0') {
    do {
      lVar4 = *(long *)(lVar4 + 0x38);
      if (lVar4 == 0) {
        return;
      }
    } while (*(char *)(lVar4 + 8) == '\0');
  }
  while (*(char *)(lVar2 + 8) == '\0') {
    lVar2 = *(long *)(lVar2 + 0x40);
    if (lVar2 == 0) {
      return;
    }
  }
  if (*(long *)(param_1 + 0x118) != lVar2) {
    lVar5 = *(long *)(*(long *)(param_1 + 0x118) + 0x38);
    lVar4 = lVar2;
    if (lVar5 != 0) {
      lVar5 = *(long *)(lVar5 + 0x38);
      if ((((((lVar5 == 0) || (lVar5 = *(long *)(lVar5 + 0x38), lVar5 == 0)) ||
            (lVar5 = *(long *)(lVar5 + 0x38), lVar5 == 0)) ||
           (((lVar5 = *(long *)(lVar5 + 0x38), lVar5 == 0 ||
             (lVar5 = *(long *)(lVar5 + 0x38), lVar5 == 0)) ||
            ((lVar5 = *(long *)(lVar5 + 0x38), lVar5 == 0 ||
             ((lVar5 = *(long *)(lVar5 + 0x38), lVar5 == 0 ||
              (lVar5 = *(long *)(lVar5 + 0x38), lVar5 == 0)))))))) ||
          ((lVar5 = *(long *)(lVar5 + 0x38), lVar5 == 0 ||
           ((((((lVar5 = *(long *)(lVar5 + 0x38), lVar5 == 0 ||
                (lVar5 = *(long *)(lVar5 + 0x38), lVar5 == 0)) ||
               (lVar5 = *(long *)(lVar5 + 0x38), lVar5 == 0)) ||
              ((lVar5 = *(long *)(lVar5 + 0x38), lVar5 == 0 ||
               (lVar5 = *(long *)(lVar5 + 0x38), lVar5 == 0)))) ||
             ((lVar5 = *(long *)(lVar5 + 0x38), lVar5 == 0 ||
              ((lVar5 = *(long *)(lVar5 + 0x38), lVar5 == 0 ||
               (lVar5 = *(long *)(lVar5 + 0x38), lVar5 == 0)))))) ||
            (lVar5 = *(long *)(lVar5 + 0x38), lVar5 == 0)))))) ||
         ((((lVar5 = *(long *)(lVar5 + 0x38), lVar5 == 0 ||
            (lVar5 = *(long *)(lVar5 + 0x38), lVar5 == 0)) ||
           (lVar5 = *(long *)(lVar5 + 0x38), lVar5 == 0)) ||
          ((lVar5 = *(long *)(lVar5 + 0x38), lVar5 == 0 ||
           (lVar5 = *(long *)(lVar5 + 0x38), lVar5 == 0)))))) {
        *(long *)(param_1 + 0x118) = lVar2;
        return;
      }
      lVar2 = *(long *)(lVar5 + 0x38);
      if (lVar2 != 0) {
        *(long *)(param_1 + 0x118) = lVar2;
        if (*(char *)(lVar2 + 8) != '\0') {
          return;
        }
        do {
          plVar1 = (long *)(lVar2 + 0x38);
          lVar2 = lVar3;
          if (*plVar1 != 0) {
            lVar2 = *plVar1;
          }
          lVar4 = lVar2;
        } while (*(char *)(lVar2 + 8) == '\0');
      }
    }
  }
  *(long *)(param_1 + 0x118) = lVar4;
  return;
}

