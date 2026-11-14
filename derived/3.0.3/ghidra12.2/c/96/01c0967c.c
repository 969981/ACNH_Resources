
uint FUN_01c0967c(uint param_1)

{
  int iVar1;
  undefined *puVar2;
  uint local_14;
  
  if ((param_1 - 0x30 & 0xffff) < 10) {
    local_14 = (param_1 & 0xffff) + 0x27;
    goto switchD_01c098a0_caseD_387;
  }
  if ((param_1 + 0xf0 & 0xffff) < 10) {
    iVar1 = -0xfeb9;
  }
  else if ((param_1 - 0x3041 & 0xffff) < 0x56) {
    iVar1 = -0x3040;
  }
  else if ((param_1 - 0x30a1 & 0xffff) < 0x56) {
    iVar1 = -0x30a0;
  }
  else {
    if ((param_1 - 0x61 & 0xffff) < 0x1a) {
      local_14 = param_1 & 0xffff;
      goto switchD_01c098a0_caseD_387;
    }
    if ((param_1 - 0x41 & 0xffff) < 0x1a) {
      local_14 = (param_1 & 0xffff) + 0x20;
      goto switchD_01c098a0_caseD_387;
    }
    if ((param_1 + 0xbf & 0xffff) < 0x1a) {
      iVar1 = -0xfee0;
    }
    else {
      if (0x19 < (param_1 + 0xdf & 0xffff)) {
        if (((param_1 & 0xffff) == 0xf7) || ((param_1 & 0xffe0) != 0xe0)) {
          if ((0x3f < (param_1 - 0x410 & 0xffff)) &&
             ((((0xcf < (param_1 - 0x180 & 0xffff) && ((param_1 & 0xff80) != 0x100)) &&
               ((param_1 & 0xffff) == 0xd7 || (param_1 & 0xffe0) != 0xc0)) &&
              (((param_1 & 0xffff) != 0x451 && ((param_1 & 0xffff) != 0x401)))))) {
            if ((param_1 - 0x3b1 & 0xffff) < 0x19) {
              local_14 = (param_1 & 0xffff) - 0x305;
            }
            else if ((param_1 - 0x391 & 0xffff) < 0x19) {
              local_14 = (param_1 & 0xffff) - 0x2e5;
            }
            else if ((((param_1 >> 8 & 0xff) == 0x11) || ((param_1 - 0x3131 & 0xffff) < 0x5e)) ||
                    (((param_1 - 0x4e00 >> 9 & 0x7f) < 0x29 ||
                     ((param_1 + 0x5400 >> 2 & 0x3fff) < 0xae9)))) {
              local_14 = 0;
              FUN_029b73b0(*(long *)PTR_DAT_04bb26a8 + 0xb4570,&local_14);
            }
            else {
              param_1 = param_1 & 0xffff;
              local_14 = 0x10d;
              if (param_1 < 0x386) {
                if (param_1 < 0xa0) {
                  switch(param_1) {
                  case 0:
                    puVar2 = &UNK_04178522;
                    break;
                  default:
                    goto switchD_01c098a0_caseD_387;
                  case 10:
                    puVar2 = &UNK_0417851e;
                    break;
                  case 0x20:
                    puVar2 = &UNK_04178506;
                    break;
                  case 0x21:
                    puVar2 = &UNK_041784f6;
                    break;
                  case 0x2c:
                    puVar2 = &UNK_04178516;
                    break;
                  case 0x2e:
                    puVar2 = &UNK_0417851a;
                    break;
                  case 0x3f:
                    puVar2 = &UNK_041784ee;
                  }
                }
                else if (param_1 < 0xff) {
                  if (param_1 == 0xa0) {
                    puVar2 = &UNK_0417850e;
                  }
                  else if (param_1 == 0xb7) {
                    puVar2 = &UNK_041784e2;
                  }
                  else {
                    if (param_1 != 0xdf) goto switchD_01c098a0_caseD_387;
                    puVar2 = &UNK_0417857e;
                  }
                }
                else if (param_1 < 0x153) {
                  if (param_1 == 0xff) {
                    puVar2 = &UNK_04178576;
                  }
                  else {
                    if (param_1 != 0x152) goto switchD_01c098a0_caseD_387;
                    puVar2 = &UNK_04178586;
                  }
                }
                else if (param_1 == 0x153) {
                  puVar2 = &UNK_04178582;
                }
                else {
                  if (param_1 != 0x178) goto switchD_01c098a0_caseD_387;
                  puVar2 = &UNK_0417857a;
                }
              }
              else if (param_1 < 0x200b) {
                switch(param_1) {
                case 0x386:
                  puVar2 = &UNK_04178526;
                  break;
                default:
                  goto switchD_01c098a0_caseD_387;
                case 0x388:
                  puVar2 = &UNK_0417852a;
                  break;
                case 0x389:
                  puVar2 = &UNK_0417852e;
                  break;
                case 0x38a:
                  puVar2 = &UNK_04178532;
                  break;
                case 0x38c:
                  puVar2 = &UNK_04178536;
                  break;
                case 0x38e:
                  puVar2 = &UNK_0417853a;
                  break;
                case 0x38f:
                  puVar2 = &UNK_0417853e;
                  break;
                case 0x390:
                  puVar2 = &UNK_0417856e;
                  break;
                case 0x3aa:
                  puVar2 = &UNK_04178542;
                  break;
                case 0x3ab:
                  puVar2 = &UNK_04178546;
                  break;
                case 0x3ac:
                  puVar2 = &UNK_0417854a;
                  break;
                case 0x3ad:
                  puVar2 = &UNK_0417854e;
                  break;
                case 0x3ae:
                  puVar2 = &UNK_04178552;
                  break;
                case 0x3af:
                  puVar2 = &UNK_04178556;
                  break;
                case 0x3b0:
                  puVar2 = &UNK_04178572;
                  break;
                case 0x3ca:
                  puVar2 = &UNK_04178566;
                  break;
                case 0x3cb:
                  puVar2 = &UNK_0417856a;
                  break;
                case 0x3cc:
                  puVar2 = &UNK_0417855a;
                  break;
                case 0x3cd:
                  puVar2 = &UNK_0417855e;
                  break;
                case 0x3ce:
                  puVar2 = &UNK_04178562;
                }
              }
              else if (param_1 < 0x30fc) {
                if (param_1 < 0x3001) {
                  if (param_1 == 0x200b) {
                    puVar2 = &UNK_04178512;
                  }
                  else if (param_1 == 0x2026) {
                    puVar2 = &UNK_041784ea;
                  }
                  else {
                    if (param_1 != 0x3000) goto switchD_01c098a0_caseD_387;
                    puVar2 = &UNK_0417850a;
                  }
                }
                else if (param_1 == 0x3001) {
                  puVar2 = &UNK_041784fe;
                }
                else if (param_1 == 0x3002) {
                  puVar2 = &UNK_04178502;
                }
                else {
                  if (param_1 != 0x30fb) goto switchD_01c098a0_caseD_387;
                  puVar2 = &UNK_041784e6;
                }
              }
              else if (param_1 < 0xff0d) {
                if (param_1 == 0x30fc) {
                  puVar2 = &UNK_041784d2;
                }
                else if (param_1 == 0xe221) {
                  puVar2 = &UNK_041784da;
                }
                else {
                  if (param_1 != 0xff01) goto switchD_01c098a0_caseD_387;
                  puVar2 = &UNK_041784fa;
                }
              }
              else if (param_1 == 0xff0d) {
                puVar2 = &UNK_041784de;
              }
              else if (param_1 == 0xff1f) {
                puVar2 = &UNK_041784f2;
              }
              else {
                if (param_1 != 0xff5e) goto switchD_01c098a0_caseD_387;
                puVar2 = &UNK_041784d6;
              }
              local_14 = (uint)*(ushort *)(puVar2 + 2);
            }
            goto switchD_01c098a0_caseD_387;
          }
        }
        return (param_1 & 0xffff) + 0x10e;
      }
      iVar1 = -0xfec0;
    }
  }
  local_14 = iVar1 + (param_1 & 0xffff);
switchD_01c098a0_caseD_387:
  if (0x10c < local_14) {
    local_14 = 0x10d;
  }
  return local_14;
}

