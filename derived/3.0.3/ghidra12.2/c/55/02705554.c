
void FUN_02705554(int *param_1,int param_2,uint param_3)

{
  long lVar1;
  int iVar2;
  
  *param_1 = param_2;
  param_1[1] = 0;
  lVar1 = DAT_05574040;
  if (((param_3 & 1) == 0) || (DAT_05574040 == 0)) {
    iVar2 = 8;
  }
  else {
    (**(code **)(*(long *)**(undefined8 **)(DAT_05574040 + 0x10) + 0x18))();
    if ((*param_1 == 0) && ((*(byte *)(lVar1 + 0x453) & 1) != 0)) {
      lVar1 = (**(code **)(**(long **)(*(long *)(lVar1 + 0x10) + 0x130) + 0x18))();
    }
    else {
      lVar1 = (**(code **)(*(long *)**(undefined8 **)(lVar1 + 0x10) + 0x18))();
      lVar1 = lVar1 + 0x110;
    }
    if (*(long *)(lVar1 + 0x1e33b0) == 0 && *(long *)(lVar1 + 0x1e33b8) == 0) {
      if (*(long *)(lVar1 + 0x1e33f8) == 0 && *(long *)(lVar1 + 0x1e3400) == 0) {
        if (*(long *)(lVar1 + 0x1e3440) == 0 && *(long *)(lVar1 + 0x1e3448) == 0) {
          if (*(long *)(lVar1 + 0x1e3488) == 0 && *(long *)(lVar1 + 0x1e3490) == 0) {
            if (*(long *)(lVar1 + 0x1e34d0) == 0 && *(long *)(lVar1 + 0x1e34d8) == 0) {
              if (*(long *)(lVar1 + 0x1e3518) == 0 && *(long *)(lVar1 + 0x1e3520) == 0) {
                if (*(long *)(lVar1 + 0x1e3560) == 0 && *(long *)(lVar1 + 0x1e3568) == 0) {
                  iVar2 = 7;
                  if (*(long *)(lVar1 + 0x1e35a8) == 0 && *(long *)(lVar1 + 0x1e35b0) == 0) {
                    iVar2 = 8;
                  }
                }
                else {
                  iVar2 = 6;
                }
              }
              else {
                iVar2 = 5;
              }
            }
            else {
              iVar2 = 4;
            }
          }
          else {
            iVar2 = 3;
          }
        }
        else {
          iVar2 = 2;
        }
      }
      else {
        iVar2 = 1;
      }
    }
    else {
      iVar2 = 0;
    }
  }
  param_1[1] = iVar2;
  return;
}

