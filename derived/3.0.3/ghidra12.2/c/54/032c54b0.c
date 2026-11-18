
bool FUN_032c54b0(char *param_1,char *param_2)

{
  if (*param_1 != *param_2) {
    return false;
  }
  if (*param_1 != '\0') {
    if (param_1[1] != param_2[1]) {
      return false;
    }
    if (param_1[1] != '\0') {
      if (param_1[2] != param_2[2]) {
        return false;
      }
      if (param_1[2] != '\0') {
        if (param_1[3] != param_2[3]) {
          return false;
        }
        if (param_1[3] != '\0') {
          if (param_1[4] != param_2[4]) {
            return false;
          }
          if (param_1[4] != '\0') {
            if (param_1[5] != param_2[5]) {
              return false;
            }
            if (param_1[5] != '\0') {
              if (param_1[6] != param_2[6]) {
                return false;
              }
              if (param_1[6] != '\0') {
                return param_1[7] == param_2[7];
              }
            }
          }
        }
      }
    }
  }
  return true;
}

