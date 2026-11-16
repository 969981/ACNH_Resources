
bool FUN_0280a3b0(byte *param_1,uint *param_2,uint param_3)

{
  byte bVar1;
  ulong uVar2;
  ulong uVar3;
  uint uVar6;
  uint uVar5;
  uint uVar4;
  
  bVar1 = *param_1;
  if (bVar1 != 3) {
    uVar2 = 0;
    do {
      uVar3 = uVar2;
      if (param_1[uVar3 + 1] == 3) goto LAB_0280a404;
      if (uVar3 == 0xfe) {
        return true;
      }
      uVar2 = uVar3 + 2;
    } while (param_1[uVar3 + 2] != 3);
    uVar3 = uVar3 + 1;
LAB_0280a404:
    if (0xfe < uVar3) {
      return true;
    }
  }
  if (7 < *param_2) {
    return false;
  }
  uVar4 = (uint)bVar1;
  uVar5 = (uint)bVar1;
  uVar6 = (uint)bVar1;
  switch(*param_2) {
  case 0:
    if (DAT_0559c96c != uVar6) {
      uVar2 = 0;
      do {
        uVar3 = uVar2;
        if (DAT_0559c96c == param_1[uVar3 + 1]) goto LAB_0280a484;
        if (uVar3 == 0xfe) {
          return true;
        }
        uVar2 = uVar3 + 2;
      } while (DAT_0559c96c != param_1[uVar3 + 2]);
      uVar3 = uVar3 + 1;
LAB_0280a484:
      if (0xfe < uVar3) {
        return true;
      }
    }
    if (DAT_0559c970 != uVar6) {
      uVar2 = 0;
      do {
        uVar3 = uVar2;
        if (DAT_0559c970 == param_1[uVar3 + 1]) goto LAB_0280a4e4;
        if (uVar3 == 0xfe) {
          return true;
        }
        uVar2 = uVar3 + 2;
      } while (DAT_0559c970 != param_1[uVar3 + 2]);
      uVar3 = uVar3 + 1;
LAB_0280a4e4:
      if (0xfe < uVar3) {
        return true;
      }
    }
    if (DAT_0559c974 != uVar6) {
      uVar2 = 0;
      do {
        uVar3 = uVar2;
        if (DAT_0559c974 == param_1[uVar3 + 1]) goto LAB_0280a53c;
        if (uVar3 == 0xfe) {
          return true;
        }
        uVar2 = uVar3 + 2;
      } while (DAT_0559c974 != param_1[uVar3 + 2]);
      uVar3 = uVar3 + 1;
LAB_0280a53c:
      if (0xfe < uVar3) {
        return true;
      }
    }
    if (DAT_0559c978 == uVar6) {
      if ((param_3 & 1) == 0) {
        return false;
      }
    }
    else {
      uVar2 = 0;
      do {
        uVar3 = uVar2;
        if (DAT_0559c978 == param_1[uVar3 + 1]) goto LAB_0280adec;
        if (uVar3 == 0xfe) {
          return true;
        }
        uVar2 = uVar3 + 2;
      } while (DAT_0559c978 != param_1[uVar3 + 2]);
      uVar3 = uVar3 + 1;
LAB_0280adec:
      if (0xfe < uVar3) {
        return 0xfe < uVar3;
      }
      if ((param_3 & 1) == 0) {
        return 0xfe < uVar3;
      }
    }
    if (DAT_0559c97c == uVar4) {
      return false;
    }
    uVar2 = 0;
    do {
      uVar3 = uVar2;
      if (DAT_0559c97c == param_1[uVar3 + 1]) goto LAB_0280b2b4;
      if (uVar3 == 0xfe) goto LAB_0280b2b0;
      uVar2 = uVar3 + 2;
    } while (DAT_0559c97c != param_1[uVar3 + 2]);
    break;
  case 1:
    if (DAT_0559c980 != bVar1) {
      uVar2 = 0;
      do {
        uVar3 = uVar2;
        if (DAT_0559c980 == param_1[uVar3 + 1]) goto LAB_0280a5b4;
        if (uVar3 == 0xfe) {
          return true;
        }
        uVar2 = uVar3 + 2;
      } while (DAT_0559c980 != param_1[uVar3 + 2]);
      uVar3 = uVar3 + 1;
LAB_0280a5b4:
      if (0xfe < uVar3) {
        return true;
      }
    }
    if (DAT_0559c984 != uVar6) {
      uVar2 = 0;
      do {
        uVar3 = uVar2;
        if (DAT_0559c984 == param_1[uVar3 + 1]) goto LAB_0280a614;
        if (uVar3 == 0xfe) {
          return true;
        }
        uVar2 = uVar3 + 2;
      } while (DAT_0559c984 != param_1[uVar3 + 2]);
      uVar3 = uVar3 + 1;
LAB_0280a614:
      if (0xfe < uVar3) {
        return true;
      }
    }
    if (DAT_0559c988 != uVar6) {
      uVar2 = 0;
      do {
        uVar3 = uVar2;
        if (DAT_0559c988 == param_1[uVar3 + 1]) goto LAB_0280a66c;
        if (uVar3 == 0xfe) {
          return true;
        }
        uVar2 = uVar3 + 2;
      } while (DAT_0559c988 != param_1[uVar3 + 2]);
      uVar3 = uVar3 + 1;
LAB_0280a66c:
      if (0xfe < uVar3) {
        return true;
      }
    }
    if (DAT_0559c98c == uVar6) {
      if ((param_3 & 1) == 0) {
        return false;
      }
    }
    else {
      uVar2 = 0;
      do {
        uVar3 = uVar2;
        if (DAT_0559c98c == param_1[uVar3 + 1]) goto LAB_0280ae88;
        if (uVar3 == 0xfe) {
          return true;
        }
        uVar2 = uVar3 + 2;
      } while (DAT_0559c98c != param_1[uVar3 + 2]);
      uVar3 = uVar3 + 1;
LAB_0280ae88:
      if (0xfe < uVar3) {
        return 0xfe < uVar3;
      }
      if ((param_3 & 1) == 0) {
        return 0xfe < uVar3;
      }
    }
    if (DAT_0559c990 == uVar6) {
      return false;
    }
    uVar2 = 0;
    do {
      uVar3 = uVar2;
      if (DAT_0559c990 == param_1[uVar3 + 1]) goto LAB_0280b2b4;
      if (uVar3 == 0xfe) goto LAB_0280b2b0;
      uVar2 = uVar3 + 2;
    } while (DAT_0559c990 != param_1[uVar3 + 2]);
    break;
  case 2:
    if (DAT_0559c994 != uVar6) {
      uVar2 = 0;
      do {
        uVar3 = uVar2;
        if (DAT_0559c994 == param_1[uVar3 + 1]) goto LAB_0280a6e4;
        if (uVar3 == 0xfe) {
          return true;
        }
        uVar2 = uVar3 + 2;
      } while (DAT_0559c994 != param_1[uVar3 + 2]);
      uVar3 = uVar3 + 1;
LAB_0280a6e4:
      if (0xfe < uVar3) {
        return true;
      }
    }
    if (DAT_0559c998 != uVar6) {
      uVar2 = 0;
      do {
        uVar3 = uVar2;
        if (DAT_0559c998 == param_1[uVar3 + 1]) goto LAB_0280a744;
        if (uVar3 == 0xfe) {
          return true;
        }
        uVar2 = uVar3 + 2;
      } while (DAT_0559c998 != param_1[uVar3 + 2]);
      uVar3 = uVar3 + 1;
LAB_0280a744:
      if (0xfe < uVar3) {
        return true;
      }
    }
    if (DAT_0559c99c != uVar6) {
      uVar2 = 0;
      do {
        uVar3 = uVar2;
        if (DAT_0559c99c == param_1[uVar3 + 1]) goto LAB_0280a79c;
        if (uVar3 == 0xfe) {
          return true;
        }
        uVar2 = uVar3 + 2;
      } while (DAT_0559c99c != param_1[uVar3 + 2]);
      uVar3 = uVar3 + 1;
LAB_0280a79c:
      if (0xfe < uVar3) {
        return true;
      }
    }
    if (DAT_0559c9a0 == uVar6) {
      if ((param_3 & 1) == 0) {
        return false;
      }
    }
    else {
      uVar2 = 0;
      do {
        uVar3 = uVar2;
        if (DAT_0559c9a0 == param_1[uVar3 + 1]) goto LAB_0280af24;
        if (uVar3 == 0xfe) {
          return true;
        }
        uVar2 = uVar3 + 2;
      } while (DAT_0559c9a0 != param_1[uVar3 + 2]);
      uVar3 = uVar3 + 1;
LAB_0280af24:
      if (0xfe < uVar3) {
        return 0xfe < uVar3;
      }
      if ((param_3 & 1) == 0) {
        return 0xfe < uVar3;
      }
    }
    if (DAT_0559c9a4 == bVar1) {
      return false;
    }
    uVar2 = 0;
    do {
      uVar3 = uVar2;
      if (DAT_0559c9a4 == param_1[uVar3 + 1]) goto LAB_0280b2b4;
      if (uVar3 == 0xfe) goto LAB_0280b2b0;
      uVar2 = uVar3 + 2;
    } while (DAT_0559c9a4 != param_1[uVar3 + 2]);
    break;
  case 3:
    if (DAT_0559c9a8 != uVar4) {
      uVar2 = 0;
      do {
        uVar3 = uVar2;
        if (DAT_0559c9a8 == param_1[uVar3 + 1]) goto LAB_0280a814;
        if (uVar3 == 0xfe) {
          return true;
        }
        uVar2 = uVar3 + 2;
      } while (DAT_0559c9a8 != param_1[uVar3 + 2]);
      uVar3 = uVar3 + 1;
LAB_0280a814:
      if (0xfe < uVar3) {
        return true;
      }
    }
    if (DAT_0559c9ac != uVar6) {
      uVar2 = 0;
      do {
        uVar3 = uVar2;
        if (DAT_0559c9ac == param_1[uVar3 + 1]) goto LAB_0280a874;
        if (uVar3 == 0xfe) {
          return true;
        }
        uVar2 = uVar3 + 2;
      } while (DAT_0559c9ac != param_1[uVar3 + 2]);
      uVar3 = uVar3 + 1;
LAB_0280a874:
      if (0xfe < uVar3) {
        return true;
      }
    }
    if (DAT_0559c9b0 != uVar6) {
      uVar2 = 0;
      do {
        uVar3 = uVar2;
        if (DAT_0559c9b0 == param_1[uVar3 + 1]) goto LAB_0280a8cc;
        if (uVar3 == 0xfe) {
          return true;
        }
        uVar2 = uVar3 + 2;
      } while (DAT_0559c9b0 != param_1[uVar3 + 2]);
      uVar3 = uVar3 + 1;
LAB_0280a8cc:
      if (0xfe < uVar3) {
        return true;
      }
    }
    if (DAT_0559c9b4 == uVar6) {
      if ((param_3 & 1) == 0) {
        return false;
      }
    }
    else {
      uVar2 = 0;
      do {
        uVar3 = uVar2;
        if (DAT_0559c9b4 == param_1[uVar3 + 1]) goto LAB_0280afc0;
        if (uVar3 == 0xfe) {
          return true;
        }
        uVar2 = uVar3 + 2;
      } while (DAT_0559c9b4 != param_1[uVar3 + 2]);
      uVar3 = uVar3 + 1;
LAB_0280afc0:
      if (0xfe < uVar3) {
        return 0xfe < uVar3;
      }
      if ((param_3 & 1) == 0) {
        return 0xfe < uVar3;
      }
    }
    if (DAT_0559c9b8 == uVar6) {
      return false;
    }
    uVar2 = 0;
    do {
      uVar3 = uVar2;
      if (DAT_0559c9b8 == param_1[uVar3 + 1]) goto LAB_0280b2b4;
      if (uVar3 == 0xfe) goto LAB_0280b2b0;
      uVar2 = uVar3 + 2;
    } while (DAT_0559c9b8 != param_1[uVar3 + 2]);
    break;
  case 4:
    if (DAT_0559c91c != uVar5) {
      uVar2 = 0;
      do {
        uVar3 = uVar2;
        if (DAT_0559c91c == param_1[uVar3 + 1]) goto LAB_0280a944;
        if (uVar3 == 0xfe) {
          return true;
        }
        uVar2 = uVar3 + 2;
      } while (DAT_0559c91c != param_1[uVar3 + 2]);
      uVar3 = uVar3 + 1;
LAB_0280a944:
      if (0xfe < uVar3) {
        return true;
      }
    }
    if (DAT_0559c920 != uVar5) {
      uVar2 = 0;
      do {
        uVar3 = uVar2;
        if (DAT_0559c920 == param_1[uVar3 + 1]) goto LAB_0280a9a4;
        if (uVar3 == 0xfe) {
          return true;
        }
        uVar2 = uVar3 + 2;
      } while (DAT_0559c920 != param_1[uVar3 + 2]);
      uVar3 = uVar3 + 1;
LAB_0280a9a4:
      if (0xfe < uVar3) {
        return true;
      }
    }
    if (DAT_0559c924 != uVar5) {
      uVar2 = 0;
      do {
        uVar3 = uVar2;
        if (DAT_0559c924 == param_1[uVar3 + 1]) goto LAB_0280a9fc;
        if (uVar3 == 0xfe) {
          return true;
        }
        uVar2 = uVar3 + 2;
      } while (DAT_0559c924 != param_1[uVar3 + 2]);
      uVar3 = uVar3 + 1;
LAB_0280a9fc:
      if (0xfe < uVar3) {
        return true;
      }
    }
    if (DAT_0559c928 == uVar5) {
      if ((param_3 & 1) == 0) {
        return false;
      }
    }
    else {
      uVar2 = 0;
      do {
        uVar3 = uVar2;
        if (DAT_0559c928 == param_1[uVar3 + 1]) goto LAB_0280b05c;
        if (uVar3 == 0xfe) {
          return true;
        }
        uVar2 = uVar3 + 2;
      } while (DAT_0559c928 != param_1[uVar3 + 2]);
      uVar3 = uVar3 + 1;
LAB_0280b05c:
      if (0xfe < uVar3) {
        return 0xfe < uVar3;
      }
      if ((param_3 & 1) == 0) {
        return 0xfe < uVar3;
      }
    }
    if (DAT_0559c92c == uVar4) {
      return false;
    }
    uVar2 = 0;
    do {
      uVar3 = uVar2;
      if (DAT_0559c92c == param_1[uVar3 + 1]) goto LAB_0280b2b4;
      if (uVar3 == 0xfe) goto LAB_0280b2b0;
      uVar2 = uVar3 + 2;
    } while (DAT_0559c92c != param_1[uVar3 + 2]);
    break;
  case 5:
    if (DAT_0559c930 != uVar4) {
      uVar2 = 0;
      do {
        uVar3 = uVar2;
        if (DAT_0559c930 == param_1[uVar3 + 1]) goto LAB_0280aa74;
        if (uVar3 == 0xfe) {
          return true;
        }
        uVar2 = uVar3 + 2;
      } while (DAT_0559c930 != param_1[uVar3 + 2]);
      uVar3 = uVar3 + 1;
LAB_0280aa74:
      if (0xfe < uVar3) {
        return true;
      }
    }
    if (DAT_0559c934 != uVar5) {
      uVar2 = 0;
      do {
        uVar3 = uVar2;
        if (DAT_0559c934 == param_1[uVar3 + 1]) goto LAB_0280aad4;
        if (uVar3 == 0xfe) {
          return true;
        }
        uVar2 = uVar3 + 2;
      } while (DAT_0559c934 != param_1[uVar3 + 2]);
      uVar3 = uVar3 + 1;
LAB_0280aad4:
      if (0xfe < uVar3) {
        return true;
      }
    }
    if (DAT_0559c938 != uVar5) {
      uVar2 = 0;
      do {
        uVar3 = uVar2;
        if (DAT_0559c938 == param_1[uVar3 + 1]) goto LAB_0280ab2c;
        if (uVar3 == 0xfe) {
          return true;
        }
        uVar2 = uVar3 + 2;
      } while (DAT_0559c938 != param_1[uVar3 + 2]);
      uVar3 = uVar3 + 1;
LAB_0280ab2c:
      if (0xfe < uVar3) {
        return true;
      }
    }
    if (DAT_0559c93c == uVar5) {
      if ((param_3 & 1) == 0) {
        return false;
      }
    }
    else {
      uVar2 = 0;
      do {
        uVar3 = uVar2;
        if (DAT_0559c93c == param_1[uVar3 + 1]) goto LAB_0280b0f8;
        if (uVar3 == 0xfe) {
          return true;
        }
        uVar2 = uVar3 + 2;
      } while (DAT_0559c93c != param_1[uVar3 + 2]);
      uVar3 = uVar3 + 1;
LAB_0280b0f8:
      if (0xfe < uVar3) {
        return 0xfe < uVar3;
      }
      if ((param_3 & 1) == 0) {
        return 0xfe < uVar3;
      }
    }
    if (DAT_0559c940 == uVar5) {
      return false;
    }
    uVar2 = 0;
    do {
      uVar3 = uVar2;
      if (DAT_0559c940 == param_1[uVar3 + 1]) goto LAB_0280b2b4;
      if (uVar3 == 0xfe) goto LAB_0280b2b0;
      uVar2 = uVar3 + 2;
    } while (DAT_0559c940 != param_1[uVar3 + 2]);
    break;
  case 6:
    if (DAT_0559c944 != uVar5) {
      uVar2 = 0;
      do {
        uVar3 = uVar2;
        if (DAT_0559c944 == param_1[uVar3 + 1]) goto LAB_0280aba4;
        if (uVar3 == 0xfe) {
          return true;
        }
        uVar2 = uVar3 + 2;
      } while (DAT_0559c944 != param_1[uVar3 + 2]);
      uVar3 = uVar3 + 1;
LAB_0280aba4:
      if (0xfe < uVar3) {
        return true;
      }
    }
    if (DAT_0559c948 != uVar5) {
      uVar2 = 0;
      do {
        uVar3 = uVar2;
        if (DAT_0559c948 == param_1[uVar3 + 1]) goto LAB_0280ac04;
        if (uVar3 == 0xfe) {
          return true;
        }
        uVar2 = uVar3 + 2;
      } while (DAT_0559c948 != param_1[uVar3 + 2]);
      uVar3 = uVar3 + 1;
LAB_0280ac04:
      if (0xfe < uVar3) {
        return true;
      }
    }
    if (DAT_0559c94c != uVar5) {
      uVar2 = 0;
      do {
        uVar3 = uVar2;
        if (DAT_0559c94c == param_1[uVar3 + 1]) goto LAB_0280ac5c;
        if (uVar3 == 0xfe) {
          return true;
        }
        uVar2 = uVar3 + 2;
      } while (DAT_0559c94c != param_1[uVar3 + 2]);
      uVar3 = uVar3 + 1;
LAB_0280ac5c:
      if (0xfe < uVar3) {
        return true;
      }
    }
    if (DAT_0559c950 == uVar5) {
      if ((param_3 & 1) == 0) {
        return false;
      }
    }
    else {
      uVar2 = 0;
      do {
        uVar3 = uVar2;
        if (DAT_0559c950 == param_1[uVar3 + 1]) goto LAB_0280b194;
        if (uVar3 == 0xfe) {
          return true;
        }
        uVar2 = uVar3 + 2;
      } while (DAT_0559c950 != param_1[uVar3 + 2]);
      uVar3 = uVar3 + 1;
LAB_0280b194:
      if (0xfe < uVar3) {
        return 0xfe < uVar3;
      }
      if ((param_3 & 1) == 0) {
        return 0xfe < uVar3;
      }
    }
    if (DAT_0559c954 == uVar4) {
      return false;
    }
    uVar2 = 0;
    do {
      uVar3 = uVar2;
      if (DAT_0559c954 == param_1[uVar3 + 1]) goto LAB_0280b2b4;
      if (uVar3 == 0xfe) goto LAB_0280b2b0;
      uVar2 = uVar3 + 2;
    } while (DAT_0559c954 != param_1[uVar3 + 2]);
    break;
  case 7:
    if (DAT_0559c958 != bVar1) {
      uVar2 = 0;
      do {
        uVar3 = uVar2;
        if (DAT_0559c958 == param_1[uVar3 + 1]) goto LAB_0280acd4;
        if (uVar3 == 0xfe) {
          return true;
        }
        uVar2 = uVar3 + 2;
      } while (DAT_0559c958 != param_1[uVar3 + 2]);
      uVar3 = uVar3 + 1;
LAB_0280acd4:
      if (0xfe < uVar3) {
        return true;
      }
    }
    if (DAT_0559c95c != uVar5) {
      uVar2 = 0;
      do {
        uVar3 = uVar2;
        if (DAT_0559c95c == param_1[uVar3 + 1]) goto LAB_0280ad34;
        if (uVar3 == 0xfe) {
          return true;
        }
        uVar2 = uVar3 + 2;
      } while (DAT_0559c95c != param_1[uVar3 + 2]);
      uVar3 = uVar3 + 1;
LAB_0280ad34:
      if (0xfe < uVar3) {
        return true;
      }
    }
    if (DAT_0559c960 != uVar5) {
      uVar2 = 0;
      do {
        uVar3 = uVar2;
        if (DAT_0559c960 == param_1[uVar3 + 1]) goto LAB_0280ad8c;
        if (uVar3 == 0xfe) {
          return true;
        }
        uVar2 = uVar3 + 2;
      } while (DAT_0559c960 != param_1[uVar3 + 2]);
      uVar3 = uVar3 + 1;
LAB_0280ad8c:
      if (0xfe < uVar3) {
        return true;
      }
    }
    if (DAT_0559c964 == uVar5) {
      if ((param_3 & 1) == 0) {
        return false;
      }
    }
    else {
      uVar2 = 0;
      do {
        uVar3 = uVar2;
        if (DAT_0559c964 == param_1[uVar3 + 1]) goto LAB_0280b230;
        if (uVar3 == 0xfe) {
          return true;
        }
        uVar2 = uVar3 + 2;
      } while (DAT_0559c964 != param_1[uVar3 + 2]);
      uVar3 = uVar3 + 1;
LAB_0280b230:
      if (0xfe < uVar3) {
        return 0xfe < uVar3;
      }
      if ((param_3 & 1) == 0) {
        return 0xfe < uVar3;
      }
    }
    if (DAT_0559c968 == uVar5) {
      return false;
    }
    uVar2 = 0;
    do {
      uVar3 = uVar2;
      if (DAT_0559c968 == param_1[uVar3 + 1]) goto LAB_0280b2b4;
      if (uVar3 == 0xfe) goto LAB_0280b2b0;
      uVar2 = uVar3 + 2;
    } while (DAT_0559c968 != param_1[uVar3 + 2]);
  }
  uVar3 = uVar3 | 1;
LAB_0280b2b4:
  return 0xfe < uVar3;
LAB_0280b2b0:
  uVar3 = uVar3 + 1;
  goto LAB_0280b2b4;
}

