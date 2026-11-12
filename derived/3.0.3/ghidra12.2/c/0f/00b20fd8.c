
undefined8 FUN_00b20fd8(uint *param_1,long *param_2)

{
  undefined *puVar1;
  uint uVar2;
  char *pcVar3;
  
  (**(code **)(*param_2 + 0x18))(param_2);
  puVar1 = PTR_s_cNone_04bb6978;
  pcVar3 = (char *)param_2[1];
  if (pcVar3 == PTR_s_cNone_04bb6978) {
    uVar2 = 0;
  }
  else if (((((*pcVar3 != 'c') || (pcVar3[1] != 'N')) || (pcVar3[2] != 'o')) ||
           ((pcVar3[3] != 'n' || (pcVar3[4] != 'e')))) ||
          (uVar2 = (uint)(byte)pcVar3[5], pcVar3[5] != 0)) {
    (**(code **)(*param_2 + 0x18))(param_2);
    pcVar3 = (char *)param_2[1];
    if ((pcVar3 == puVar1 + 7) ||
       (((*pcVar3 == 'c' && (pcVar3[1] == 'O')) && ((pcVar3[2] == 'n' && (pcVar3[3] == '\0')))))) {
      uVar2 = 1;
    }
    else {
      (**(code **)(*param_2 + 0x18))(param_2);
      pcVar3 = (char *)param_2[1];
      if ((pcVar3 == puVar1 + 0xc) ||
         ((((*pcVar3 == 'c' && (pcVar3[1] == 'O')) && (pcVar3[2] == 'n')) &&
          (((pcVar3[3] == 'K' && (pcVar3[4] == 'e')) &&
           ((((pcVar3[5] == 'e' && ((pcVar3[6] == 'p' && (pcVar3[7] == 'T')))) && (pcVar3[8] == 'a')
             ) && ((((pcVar3[9] == 'l' && (pcVar3[10] == 'k')) && (pcVar3[0xb] == 'F')) &&
                   (((pcVar3[0xc] == 'l' && (pcVar3[0xd] == 'o')) &&
                    ((pcVar3[0xe] == 'w' && (pcVar3[0xf] == '\0')))))))))))))) {
        uVar2 = 2;
      }
      else {
        (**(code **)(*param_2 + 0x18))(param_2);
        pcVar3 = (char *)param_2[1];
        if ((pcVar3 == puVar1 + 0x1d) ||
           (((*pcVar3 == 'c' && (pcVar3[1] == 'O')) &&
            (((pcVar3[2] == 'n' &&
              ((((pcVar3[3] == 'F' && (pcVar3[4] == 'i')) && (pcVar3[5] == 'r')) &&
               ((pcVar3[6] == 's' && (pcVar3[7] == 't')))))) && (pcVar3[8] == '\0')))))) {
          uVar2 = 3;
        }
        else {
          (**(code **)(*param_2 + 0x18))(param_2);
          pcVar3 = (char *)param_2[1];
          if ((pcVar3 != puVar1 + 0x27) &&
             (((*pcVar3 != 'c' || (pcVar3[1] != 'O')) ||
              ((pcVar3[2] != 'f' || ((pcVar3[3] != 'f' || (pcVar3[4] != '\0')))))))) {
            return 0;
          }
          uVar2 = 4;
        }
      }
    }
  }
  *param_1 = uVar2;
  return 1;
}

