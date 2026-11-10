
bool FUN_003606c0(char *param_1,char *param_2)

{
  char cVar1;
  
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
                if (param_1[7] != param_2[7]) {
                  return false;
                }
                if (param_1[7] != '\0') {
                  if (param_1[8] != param_2[8]) {
                    return false;
                  }
                  if (param_1[8] != '\0') {
                    if (param_1[9] != param_2[9]) {
                      return false;
                    }
                    if (param_1[9] != '\0') {
                      if (param_1[10] != param_2[10]) {
                        return false;
                      }
                      if (param_1[10] != '\0') {
                        if (param_1[0xb] != param_2[0xb]) {
                          return false;
                        }
                        if (param_1[0xb] != '\0') {
                          if (param_1[0xc] != param_2[0xc]) {
                            return false;
                          }
                          if (param_1[0xc] != '\0') {
                            if (param_1[0xd] != param_2[0xd]) {
                              return false;
                            }
                            if (param_1[0xd] != '\0') {
                              if (param_1[0xe] != param_2[0xe]) {
                                return false;
                              }
                              if (param_1[0xe] != '\0') {
                                if (param_1[0xf] != param_2[0xf]) {
                                  return false;
                                }
                                if (param_1[0xf] != '\0') {
                                  if (param_1[0x10] != param_2[0x10]) {
                                    return false;
                                  }
                                  if (param_1[0x10] != '\0') {
                                    if (param_1[0x11] != param_2[0x11]) {
                                      return false;
                                    }
                                    if (param_1[0x11] != '\0') {
                                      if (param_1[0x12] != param_2[0x12]) {
                                        return false;
                                      }
                                      if (param_1[0x12] != '\0') {
                                        if (param_1[0x13] != param_2[0x13]) {
                                          return false;
                                        }
                                        if (param_1[0x13] != '\0') {
                                          if (param_1[0x14] != param_2[0x14]) {
                                            return false;
                                          }
                                          if (param_1[0x14] != '\0') {
                                            if (param_1[0x15] != param_2[0x15]) {
                                              return false;
                                            }
                                            if (param_1[0x15] != '\0') {
                                              if (param_1[0x16] != param_2[0x16]) {
                                                return false;
                                              }
                                              if (param_1[0x16] != '\0') {
                                                cVar1 = param_1[0x17];
                                                return cVar1 != '\0' && cVar1 == param_2[0x17] ||
                                                       cVar1 == param_2[0x17];
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return true;
}

