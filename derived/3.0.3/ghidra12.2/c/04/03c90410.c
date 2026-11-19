
undefined8 FUN_03c90410(long *param_1,long *param_2,long *param_3,int param_4)

{
  char cVar1;
  bool bVar2;
  uint uVar3;
  ulong uVar4;
  long lVar5;
  
  lVar5 = *param_1;
  if (lVar5 != 0) {
    (**(code **)(*param_3 + 0x18))(param_3);
    (**(code **)(*param_3 + 0x18))(param_3);
    if ((char *)param_3[1] == "RootPane") {
LAB_03c904b0:
      lVar5 = *(long *)(lVar5 + 0x18);
    }
    else {
      uVar4 = 0;
      bVar2 = true;
      do {
        cVar1 = ((char *)param_3[1])[uVar4];
        if (cVar1 != "RootPane"[uVar4]) break;
        if (cVar1 == '\0') {
          if (bVar2) goto LAB_03c904b0;
          break;
        }
        bVar2 = uVar4 < 0x80000;
        uVar4 = uVar4 + 1;
      } while (uVar4 != 0x80001);
      lVar5 = FUN_03c9c9b0(lVar5,param_3,*(undefined8 *)(lVar5 + 0x18));
    }
    if ((lVar5 != 0) && (uVar3 = FUN_0037e5a8(lVar5), param_4 < (int)(uVar3 & 0xffff))) {
      lVar5 = FUN_0037e5d0(lVar5);
      *param_2 = lVar5 + (long)param_4 * 0xc;
      return 1;
    }
  }
  return 0;
}

