
void FUN_01c6feb0(undefined4 *param_1,long *param_2)

{
  long lVar1;
  bool bVar2;
  undefined4 uVar3;
  ulong uVar4;
  
  (**(code **)(DAT_05350570 + 0x18))(&DAT_05350570);
  (**(code **)(DAT_05350570 + 0x18))(&DAT_05350570);
  lVar1 = DAT_05350578;
  (**(code **)(*param_2 + 0x18))(param_2);
  if (lVar1 == param_2[1]) {
LAB_01c6ff60:
    uVar3 = 0;
  }
  else {
    uVar4 = 0;
    bVar2 = true;
    do {
      if (*(char *)(DAT_05350578 + uVar4) != *(char *)(param_2[1] + uVar4)) break;
      if (*(char *)(DAT_05350578 + uVar4) == '\0') {
        if (bVar2) goto LAB_01c6ff60;
        break;
      }
      bVar2 = uVar4 < 0x80000;
      uVar4 = uVar4 + 1;
    } while (uVar4 != 0x80001);
    (**(code **)(DAT_05350580 + 0x18))(&DAT_05350580);
    (**(code **)(DAT_05350580 + 0x18))(&DAT_05350580);
    lVar1 = DAT_05350588;
    (**(code **)(*param_2 + 0x18))(param_2);
    if (lVar1 == param_2[1]) {
LAB_01c6fff0:
      uVar3 = 1;
    }
    else {
      uVar4 = 0;
      bVar2 = true;
      do {
        if (*(char *)(DAT_05350588 + uVar4) != *(char *)(param_2[1] + uVar4)) break;
        if (*(char *)(DAT_05350588 + uVar4) == '\0') {
          if (bVar2) goto LAB_01c6fff0;
          break;
        }
        bVar2 = uVar4 < 0x80000;
        uVar4 = uVar4 + 1;
      } while (uVar4 != 0x80001);
      (**(code **)(DAT_05350590 + 0x18))(&DAT_05350590);
      (**(code **)(DAT_05350590 + 0x18))(&DAT_05350590);
      lVar1 = DAT_05350598;
      (**(code **)(*param_2 + 0x18))(param_2);
      if (lVar1 != param_2[1]) {
        uVar4 = 0;
        bVar2 = true;
        do {
          if (*(char *)(DAT_05350598 + uVar4) != *(char *)(param_2[1] + uVar4)) break;
          if (*(char *)(DAT_05350598 + uVar4) == '\0') {
            if (bVar2) goto LAB_01c70080;
            break;
          }
          bVar2 = uVar4 < 0x80000;
          uVar4 = uVar4 + 1;
        } while (uVar4 != 0x80001);
        *param_1 = 0;
        *(undefined1 *)(param_1 + 1) = 0;
        return;
      }
LAB_01c70080:
      uVar3 = 2;
    }
  }
  *param_1 = uVar3;
  *(undefined1 *)(param_1 + 1) = 1;
  return;
}

