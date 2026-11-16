
undefined4 FUN_02669de0(long param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined4 uVar3;
  
  puVar1 = PTR_DAT_04bb46b0;
  if (param_1 == 0) {
    return 0xffffffff;
  }
  lVar2 = 0;
  if (*(long *)PTR_DAT_04bb46b0 != 0) {
    lVar2 = FUN_026eec4c(*(long *)PTR_DAT_04bb46b0,0);
  }
  if (lVar2 == param_1) {
    uVar3 = 0;
  }
  else {
    lVar2 = 0;
    if (*(long *)puVar1 != 0) {
      lVar2 = FUN_026eec4c(*(long *)puVar1,1);
    }
    if (lVar2 == param_1) {
      uVar3 = 1;
    }
    else {
      lVar2 = 0;
      if (*(long *)puVar1 != 0) {
        lVar2 = FUN_026eec4c(*(long *)puVar1,2);
      }
      if (lVar2 == param_1) {
        uVar3 = 2;
      }
      else {
        lVar2 = 0;
        if (*(long *)puVar1 != 0) {
          lVar2 = FUN_026eec4c(*(long *)puVar1,3);
        }
        if (lVar2 == param_1) {
          uVar3 = 3;
        }
        else {
          lVar2 = 0;
          if (*(long *)puVar1 != 0) {
            lVar2 = FUN_026eec4c(*(long *)puVar1,4);
          }
          if (lVar2 == param_1) {
            uVar3 = 4;
          }
          else {
            lVar2 = 0;
            if (*(long *)puVar1 != 0) {
              lVar2 = FUN_026eec4c(*(long *)puVar1,5);
            }
            if (lVar2 == param_1) {
              uVar3 = 5;
            }
            else {
              lVar2 = 0;
              if (*(long *)puVar1 != 0) {
                lVar2 = FUN_026eec4c(*(long *)puVar1,6);
              }
              if (lVar2 == param_1) {
                uVar3 = 6;
              }
              else {
                lVar2 = 0;
                if (*(long *)puVar1 != 0) {
                  lVar2 = FUN_026eec4c(*(long *)puVar1,7);
                }
                uVar3 = 7;
                if (lVar2 != param_1) {
                  uVar3 = 0xffffffff;
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

