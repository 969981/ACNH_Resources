
undefined8 FUN_039f8d50(long *param_1)

{
  char cVar1;
  bool bVar2;
  undefined8 uVar3;
  ulong uVar4;
  
  (**(code **)(*param_1 + 0x18))();
  (**(code **)(*param_1 + 0x18))(param_1);
  if ((char *)param_1[1] == "never") {
LAB_039f8dd0:
    uVar3 = 0;
  }
  else {
    uVar4 = 0;
    bVar2 = true;
    do {
      cVar1 = ((char *)param_1[1])[uVar4];
      if (cVar1 != "never"[uVar4]) break;
      if (cVar1 == '\0') {
        if (bVar2) goto LAB_039f8dd0;
        break;
      }
      bVar2 = uVar4 < 0x80000;
      uVar4 = uVar4 + 1;
    } while (uVar4 != 0x80001);
    (**(code **)(*param_1 + 0x18))(param_1);
    (**(code **)(*param_1 + 0x18))(param_1);
    if ((undefined1 *)param_1[1] == &DAT_040fc01d) {
LAB_039f8e44:
      uVar3 = 1;
    }
    else {
      uVar4 = 0;
      bVar2 = true;
      do {
        cVar1 = ((undefined1 *)param_1[1])[uVar4];
        if (cVar1 != (&DAT_040fc01d)[uVar4]) break;
        if (cVar1 == '\0') {
          if (bVar2) goto LAB_039f8e44;
          break;
        }
        bVar2 = uVar4 < 0x80000;
        uVar4 = uVar4 + 1;
      } while (uVar4 != 0x80001);
      (**(code **)(*param_1 + 0x18))(param_1);
      (**(code **)(*param_1 + 0x18))(param_1);
      if ((char *)param_1[1] == "equal") {
LAB_039f8ec0:
        uVar3 = 2;
      }
      else {
        uVar4 = 0;
        bVar2 = true;
        do {
          cVar1 = ((char *)param_1[1])[uVar4];
          if (cVar1 != "equal"[uVar4]) break;
          if (cVar1 == '\0') {
            if (bVar2) goto LAB_039f8ec0;
            break;
          }
          bVar2 = uVar4 < 0x80000;
          uVar4 = uVar4 + 1;
        } while (uVar4 != 0x80001);
        (**(code **)(*param_1 + 0x18))(param_1);
        (**(code **)(*param_1 + 0x18))(param_1);
        if ((char *)param_1[1] == "lequal") {
LAB_039f8f34:
          uVar3 = 3;
        }
        else {
          uVar4 = 0;
          bVar2 = true;
          do {
            cVar1 = ((char *)param_1[1])[uVar4];
            if (cVar1 != "lequal"[uVar4]) break;
            if (cVar1 == '\0') {
              if (bVar2) goto LAB_039f8f34;
              break;
            }
            bVar2 = uVar4 < 0x80000;
            uVar4 = uVar4 + 1;
          } while (uVar4 != 0x80001);
          (**(code **)(*param_1 + 0x18))(param_1);
          (**(code **)(*param_1 + 0x18))(param_1);
          if ((char *)param_1[1] == "greater") {
LAB_039f8fb0:
            uVar3 = 4;
          }
          else {
            uVar4 = 0;
            bVar2 = true;
            do {
              cVar1 = ((char *)param_1[1])[uVar4];
              if (cVar1 != "greater"[uVar4]) break;
              if (cVar1 == '\0') {
                if (bVar2) goto LAB_039f8fb0;
                break;
              }
              bVar2 = uVar4 < 0x80000;
              uVar4 = uVar4 + 1;
            } while (uVar4 != 0x80001);
            (**(code **)(*param_1 + 0x18))(param_1);
            (**(code **)(*param_1 + 0x18))(param_1);
            if ((char *)param_1[1] == "nequal") {
LAB_039f9024:
              uVar3 = 5;
            }
            else {
              uVar4 = 0;
              bVar2 = true;
              do {
                cVar1 = ((char *)param_1[1])[uVar4];
                if (cVar1 != "nequal"[uVar4]) break;
                if (cVar1 == '\0') {
                  if (bVar2) goto LAB_039f9024;
                  break;
                }
                bVar2 = uVar4 < 0x80000;
                uVar4 = uVar4 + 1;
              } while (uVar4 != 0x80001);
              (**(code **)(*param_1 + 0x18))(param_1);
              (**(code **)(*param_1 + 0x18))(param_1);
              if ((char *)param_1[1] == "gequal") {
LAB_039f9098:
                uVar3 = 6;
              }
              else {
                uVar4 = 0;
                bVar2 = true;
                do {
                  cVar1 = ((char *)param_1[1])[uVar4];
                  if (cVar1 != "gequal"[uVar4]) break;
                  if (cVar1 == '\0') {
                    if (bVar2) goto LAB_039f9098;
                    break;
                  }
                  bVar2 = uVar4 < 0x80000;
                  uVar4 = uVar4 + 1;
                } while (uVar4 != 0x80001);
                (**(code **)(*param_1 + 0x18))(param_1);
                (**(code **)(*param_1 + 0x18))(param_1);
                if ((undefined1 *)param_1[1] == &DAT_04069e12) {
LAB_039f910c:
                  uVar3 = 7;
                }
                else {
                  uVar4 = 0;
                  bVar2 = true;
                  do {
                    cVar1 = ((undefined1 *)param_1[1])[uVar4];
                    if (cVar1 != (&DAT_04069e12)[uVar4]) break;
                    if (cVar1 == '\0') {
                      if (bVar2) goto LAB_039f910c;
                      break;
                    }
                    bVar2 = uVar4 < 0x80000;
                    uVar4 = uVar4 + 1;
                  } while (uVar4 != 0x80001);
                  uVar3 = 8;
                }
              }
            }
          }
        }
      }
    }
  }
  return uVar3;
}

