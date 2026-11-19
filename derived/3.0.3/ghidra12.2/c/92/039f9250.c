
undefined8 FUN_039f9250(long *param_1)

{
  char cVar1;
  bool bVar2;
  undefined8 uVar3;
  ulong uVar4;
  
  (**(code **)(*param_1 + 0x18))();
  (**(code **)(*param_1 + 0x18))(param_1);
  if ((undefined1 *)param_1[1] == &DAT_04081b8b) {
LAB_039f92d0:
    uVar3 = 0;
  }
  else {
    uVar4 = 0;
    bVar2 = true;
    do {
      cVar1 = ((undefined1 *)param_1[1])[uVar4];
      if (cVar1 != (&DAT_04081b8b)[uVar4]) break;
      if (cVar1 == '\0') {
        if (bVar2) goto LAB_039f92d0;
        break;
      }
      bVar2 = uVar4 < 0x80000;
      uVar4 = uVar4 + 1;
    } while (uVar4 != 0x80001);
    (**(code **)(*param_1 + 0x18))(param_1);
    (**(code **)(*param_1 + 0x18))(param_1);
    if ((char *)param_1[1] == "src_minus_dst") {
LAB_039f9344:
      uVar3 = 1;
    }
    else {
      uVar4 = 0;
      bVar2 = true;
      do {
        cVar1 = ((char *)param_1[1])[uVar4];
        if (cVar1 != "src_minus_dst"[uVar4]) break;
        if (cVar1 == '\0') {
          if (bVar2) goto LAB_039f9344;
          break;
        }
        bVar2 = uVar4 < 0x80000;
        uVar4 = uVar4 + 1;
      } while (uVar4 != 0x80001);
      (**(code **)(*param_1 + 0x18))(param_1);
      (**(code **)(*param_1 + 0x18))(param_1);
      if ((char *)param_1[1] == "dst_minus_src") {
LAB_039f93c0:
        uVar3 = 2;
      }
      else {
        uVar4 = 0;
        bVar2 = true;
        do {
          cVar1 = ((char *)param_1[1])[uVar4];
          if (cVar1 != "dst_minus_src"[uVar4]) break;
          if (cVar1 == '\0') {
            if (bVar2) goto LAB_039f93c0;
            break;
          }
          bVar2 = uVar4 < 0x80000;
          uVar4 = uVar4 + 1;
        } while (uVar4 != 0x80001);
        (**(code **)(*param_1 + 0x18))(param_1);
        (**(code **)(*param_1 + 0x18))(param_1);
        if ((undefined1 *)param_1[1] == &DAT_0406aca1) {
LAB_039f9434:
          uVar3 = 3;
        }
        else {
          uVar4 = 0;
          bVar2 = true;
          do {
            cVar1 = ((undefined1 *)param_1[1])[uVar4];
            if (cVar1 != (&DAT_0406aca1)[uVar4]) break;
            if (cVar1 == '\0') {
              if (bVar2) goto LAB_039f9434;
              break;
            }
            bVar2 = uVar4 < 0x80000;
            uVar4 = uVar4 + 1;
          } while (uVar4 != 0x80001);
          (**(code **)(*param_1 + 0x18))(param_1);
          (**(code **)(*param_1 + 0x18))(param_1);
          if ((undefined1 *)param_1[1] == &DAT_04094d9a) {
LAB_039f94b0:
            uVar3 = 4;
          }
          else {
            uVar4 = 0;
            bVar2 = true;
            do {
              cVar1 = ((undefined1 *)param_1[1])[uVar4];
              if (cVar1 != (&DAT_04094d9a)[uVar4]) break;
              if (cVar1 == '\0') {
                if (bVar2) goto LAB_039f94b0;
                break;
              }
              bVar2 = uVar4 < 0x80000;
              uVar4 = uVar4 + 1;
            } while (uVar4 != 0x80001);
            uVar3 = 5;
          }
        }
      }
    }
  }
  return uVar3;
}

