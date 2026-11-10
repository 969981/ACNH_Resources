
undefined8 FUN_00161e30(long *param_1,char *param_2,int param_3)

{
  char cVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  long lVar7;
  
  lVar7 = *param_1;
  do {
    for (; (iVar2 = FUN_00146528(*param_2), iVar2 != 0 || (cVar1 = *param_2, cVar1 == ','));
        param_2 = param_2 + 1) {
    }
    lVar3 = 0;
    lVar4 = 0;
    while ((cVar1 != '\0' && (cVar1 != ','))) {
      iVar2 = FUN_00146528();
      cVar1 = param_2[lVar3 + 1];
      if (iVar2 == 0) {
        lVar4 = lVar3 + 1;
      }
      lVar3 = lVar3 + 1;
    }
    if ((param_3 == 0) || (lVar4 != 7)) {
      if (lVar4 != 0) goto LAB_00161efc;
    }
    else {
      iVar2 = FUN_00144b34(param_2,"chunked",7);
      if (iVar2 == 0) {
LAB_00161efc:
        ppuVar5 = &PTR_s_identity_04836798;
        ppuVar6 = &PTR_PTR_04836720;
        do {
          iVar2 = FUN_00144b34(param_2,*ppuVar5,lVar4);
          if (((iVar2 != 0) && ((*ppuVar5)[lVar4] == '\0')) ||
             ((ppuVar5[1] != (undefined *)0x0 &&
              ((iVar2 = FUN_00144b34(param_2,ppuVar5[1],lVar4), iVar2 != 0 &&
               (ppuVar5[1][lVar4] == '\0')))))) break;
          ppuVar5 = (undefined **)*ppuVar6;
          ppuVar6 = ppuVar6 + 1;
        } while (ppuVar5 != (undefined **)0x0);
        lVar4 = *(long *)(lVar7 + 0x1a0);
        if (lVar4 == 0) {
          lVar4 = FUN_00161fc8(param_1,&DAT_04836738);
          *(long *)(lVar7 + 0x1a0) = lVar4;
          if (lVar4 == 0) {
            return 0x1b;
          }
        }
        ppuVar6 = (undefined **)&DAT_04836768;
        if (ppuVar5 != (undefined **)0x0) {
          ppuVar6 = ppuVar5;
        }
        lVar4 = FUN_00161fc8(param_1,ppuVar6,lVar4);
        if (lVar4 == 0) {
          return 0x1b;
        }
        *(long *)(lVar7 + 0x1a0) = lVar4;
      }
      else {
        *(ushort *)(lVar7 + 0x660) = *(ushort *)(lVar7 + 0x660) | 0x20;
        FUN_001618dc(param_1);
      }
    }
    param_2 = param_2 + lVar3;
    if (*param_2 == '\0') {
      return 0;
    }
  } while( true );
}

