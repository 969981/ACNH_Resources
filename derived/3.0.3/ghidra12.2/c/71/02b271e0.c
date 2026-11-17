
undefined8 FUN_02b271e0(long param_1)

{
  undefined8 uVar1;
  
  if (*(int *)(param_1 + 0x73c) == 0) {
    return 0;
  }
  if (*(int *)(param_1 + 0x740) == 0) {
LAB_02b2720c:
    uVar1 = 1;
  }
  else {
    if (*(int *)(param_1 + 0x744) == 0) {
      return 2;
    }
    if (*(int *)(param_1 + 0x748) == 0) {
      return 3;
    }
    if (*(int *)(param_1 + 0x74c) == 0) {
      return 4;
    }
    if (*(int *)(param_1 + 0x750) == 0) {
      return 5;
    }
    if (*(int *)(param_1 + 0x754) == 0) {
      return 6;
    }
    if (*(int *)(param_1 + 0x758) == 0) {
      return 7;
    }
    if (*(int *)(param_1 + 0x73c) != 1) {
      if (*(int *)(param_1 + 0x740) == 1) goto LAB_02b2720c;
      if (*(int *)(param_1 + 0x744) == 1) {
        return 2;
      }
      if (*(int *)(param_1 + 0x748) == 1) {
        return 3;
      }
      if (*(int *)(param_1 + 0x74c) == 1) {
        return 4;
      }
      if (*(int *)(param_1 + 0x750) == 1) {
        return 5;
      }
      if (*(int *)(param_1 + 0x754) == 1) {
        return 6;
      }
      if (*(int *)(param_1 + 0x758) == 1) {
        return 7;
      }
      if (*(int *)(param_1 + 0x73c) != 2) {
        if (*(int *)(param_1 + 0x740) == 2) goto LAB_02b2720c;
        if (*(int *)(param_1 + 0x744) == 2) {
          return 2;
        }
        if (*(int *)(param_1 + 0x748) == 2) {
          return 3;
        }
        if (*(int *)(param_1 + 0x74c) == 2) {
          return 4;
        }
        if (*(int *)(param_1 + 0x750) == 2) {
          return 5;
        }
        if (*(int *)(param_1 + 0x754) == 2) {
          return 6;
        }
        if (*(int *)(param_1 + 0x758) == 2) {
          return 7;
        }
        if (*(int *)(param_1 + 0x73c) != 3) {
          if (*(int *)(param_1 + 0x740) == 3) goto LAB_02b2720c;
          if (*(int *)(param_1 + 0x744) == 3) {
            return 2;
          }
          if (*(int *)(param_1 + 0x748) == 3) {
            return 3;
          }
          if (*(int *)(param_1 + 0x74c) == 3) {
            return 4;
          }
          if (*(int *)(param_1 + 0x750) == 3) {
            return 5;
          }
          if (*(int *)(param_1 + 0x754) == 3) {
            return 6;
          }
          if (*(int *)(param_1 + 0x758) == 3) {
            return 7;
          }
          if (*(int *)(param_1 + 0x73c) != 4) {
            if (*(int *)(param_1 + 0x740) == 4) goto LAB_02b2720c;
            if (*(int *)(param_1 + 0x744) == 4) {
              return 2;
            }
            if (*(int *)(param_1 + 0x748) == 4) {
              return 3;
            }
            if (*(int *)(param_1 + 0x74c) == 4) {
              return 4;
            }
            if (*(int *)(param_1 + 0x750) == 4) {
              return 5;
            }
            if (*(int *)(param_1 + 0x754) == 4) {
              return 6;
            }
            if (*(int *)(param_1 + 0x758) == 4) {
              return 7;
            }
          }
        }
      }
    }
    uVar1 = 0;
  }
  return uVar1;
}

