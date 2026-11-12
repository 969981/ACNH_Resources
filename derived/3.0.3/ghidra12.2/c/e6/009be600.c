
undefined8 FUN_009be600(long *param_1)

{
  char cVar1;
  bool bVar2;
  undefined8 uVar3;
  ulong uVar4;
  
  (**(code **)(*param_1 + 0x18))();
  (**(code **)(*param_1 + 0x18))(param_1);
  if ((char *)param_1[1] == "RadioGymnastics05") {
LAB_009be680:
    uVar3 = 0xf;
  }
  else {
    uVar4 = 0;
    bVar2 = true;
    do {
      cVar1 = ((char *)param_1[1])[uVar4];
      if (cVar1 != "RadioGymnastics05"[uVar4]) break;
      if (cVar1 == '\0') {
        if (bVar2) goto LAB_009be680;
        break;
      }
      bVar2 = uVar4 < 0x80000;
      uVar4 = uVar4 + 1;
    } while (uVar4 != 0x80001);
    (**(code **)(*param_1 + 0x18))(param_1);
    (**(code **)(*param_1 + 0x18))(param_1);
    if ((char *)param_1[1] != "RadioGymnastics01") {
      uVar4 = 0;
      bVar2 = true;
      do {
        cVar1 = ((char *)param_1[1])[uVar4];
        if (cVar1 != "RadioGymnastics01"[uVar4]) break;
        if (cVar1 == '\0') {
          if (bVar2) goto LAB_009be860;
          break;
        }
        bVar2 = uVar4 < 0x80000;
        uVar4 = uVar4 + 1;
      } while (uVar4 != 0x80001);
      (**(code **)(*param_1 + 0x18))(param_1);
      (**(code **)(*param_1 + 0x18))(param_1);
      if ((char *)param_1[1] != "RadioGymnastics01A") {
        uVar4 = 0;
        bVar2 = true;
        do {
          cVar1 = ((char *)param_1[1])[uVar4];
          if (cVar1 != "RadioGymnastics01A"[uVar4]) break;
          if (cVar1 == '\0') {
            if (bVar2) goto LAB_009be860;
            break;
          }
          bVar2 = uVar4 < 0x80000;
          uVar4 = uVar4 + 1;
        } while (uVar4 != 0x80001);
        (**(code **)(*param_1 + 0x18))(param_1);
        (**(code **)(*param_1 + 0x18))(param_1);
        if ((char *)param_1[1] != "RadioGymnastics02") {
          uVar4 = 0;
          bVar2 = true;
          do {
            cVar1 = ((char *)param_1[1])[uVar4];
            if (cVar1 != "RadioGymnastics02"[uVar4]) break;
            if (cVar1 == '\0') {
              if (bVar2) goto LAB_009be860;
              break;
            }
            bVar2 = uVar4 < 0x80000;
            uVar4 = uVar4 + 1;
          } while (uVar4 != 0x80001);
          (**(code **)(*param_1 + 0x18))(param_1);
          (**(code **)(*param_1 + 0x18))(param_1);
          if ((char *)param_1[1] != "RadioGymnastics06") {
            uVar4 = 0;
            bVar2 = true;
            do {
              cVar1 = ((char *)param_1[1])[uVar4];
              if (cVar1 != "RadioGymnastics06"[uVar4]) break;
              if (cVar1 == '\0') {
                if (bVar2) goto LAB_009be860;
                break;
              }
              bVar2 = uVar4 < 0x80000;
              uVar4 = uVar4 + 1;
            } while (uVar4 != 0x80001);
            (**(code **)(*param_1 + 0x18))(param_1);
            (**(code **)(*param_1 + 0x18))(param_1);
          }
        }
      }
    }
LAB_009be860:
    uVar3 = 6;
  }
  return uVar3;
}

