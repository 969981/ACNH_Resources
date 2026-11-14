
uint FUN_017698d0(long *param_1)

{
  char cVar1;
  bool bVar2;
  char *pcVar3;
  ulong uVar4;
  ulong uVar5;
  
  (**(code **)(*param_1 + 0x18))();
  (**(code **)(*param_1 + 0x18))(param_1);
  if ((char *)param_1[1] != "ModernArea") {
    uVar4 = 0;
    bVar2 = true;
    do {
      cVar1 = ((char *)param_1[1])[uVar4];
      if (cVar1 != "ModernArea"[uVar4]) break;
      if (cVar1 == '\0') {
        if (bVar2) {
          return 1;
        }
        break;
      }
      bVar2 = uVar4 < 0x80000;
      uVar4 = uVar4 + 1;
    } while (uVar4 != 0x80001);
    (**(code **)(*param_1 + 0x18))(param_1);
    (**(code **)(*param_1 + 0x18))(param_1);
    if ((undefined1 *)param_1[1] != &DAT_04062402) {
      uVar4 = 0;
      bVar2 = true;
      do {
        cVar1 = ((undefined1 *)param_1[1])[uVar4];
        if (cVar1 != (&DAT_04062402)[uVar4]) break;
        if (cVar1 == '\0') {
          if (bVar2) {
            return 1;
          }
          break;
        }
        bVar2 = uVar4 < 0x80000;
        uVar4 = uVar4 + 1;
      } while (uVar4 != 0x80001);
      (**(code **)(*param_1 + 0x18))(param_1);
      (**(code **)(*param_1 + 0x18))(param_1);
      if ((undefined1 *)param_1[1] != &DAT_040bb2c6) {
        uVar4 = 0;
        bVar2 = true;
        do {
          cVar1 = ((undefined1 *)param_1[1])[uVar4];
          if (cVar1 != (&DAT_040bb2c6)[uVar4]) break;
          if (cVar1 == '\0') {
            if (bVar2) {
              return 1;
            }
            break;
          }
          bVar2 = uVar4 < 0x80000;
          uVar4 = uVar4 + 1;
        } while (uVar4 != 0x80001);
        (**(code **)(*param_1 + 0x18))(param_1);
        (**(code **)(*param_1 + 0x18))(param_1);
        pcVar3 = (char *)param_1[1];
        if (pcVar3 != "id36") {
          if (*pcVar3 != 'i') {
            return 0;
          }
          uVar4 = 0;
          do {
            uVar5 = uVar4;
            uVar4 = uVar5;
            if (uVar5 == 0x80000) goto LAB_01769acc;
            if (pcVar3[uVar5 + 1] != (&DAT_040721b7)[uVar5]) {
              uVar4 = 0;
              goto LAB_01769acc;
            }
            uVar4 = uVar5 + 1;
          } while (pcVar3[uVar5 + 1] != '\0');
          uVar4 = 1;
LAB_01769acc:
          return (uint)(uVar5 < 0x80000) & (uint)uVar4;
        }
      }
    }
  }
  return 1;
}

