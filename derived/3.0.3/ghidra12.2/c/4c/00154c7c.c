
void FUN_00154c7c(char *param_1)

{
  char cVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = 0;
  lVar3 = 0;
  do {
    cVar1 = param_1[lVar3];
    if ((cVar1 == '\"') || (cVar1 == '\\')) {
      lVar2 = lVar2 + 1;
    }
    else if (cVar1 == '\0') {
      lVar2 = FUN_001432f0(lVar2 + lVar3 + 1);
      if (lVar2 == 0) {
        return;
      }
      lVar3 = 0;
      do {
        cVar1 = *param_1;
        if ((cVar1 == '\"') || (cVar1 == '\\')) {
          *(undefined1 *)(lVar2 + lVar3) = 0x5c;
          lVar3 = lVar3 + 1;
          cVar1 = *param_1;
        }
        else if (cVar1 == '\0') {
          *(undefined1 *)(lVar2 + lVar3) = 0;
          return;
        }
        *(char *)(lVar2 + lVar3) = cVar1;
        lVar3 = lVar3 + 1;
        param_1 = param_1 + 1;
      } while( true );
    }
    lVar3 = lVar3 + 1;
  } while( true );
}

