
undefined8 FUN_008e4050(uint *param_1,long *param_2)

{
  undefined *puVar1;
  uint uVar2;
  char *pcVar3;
  
  (**(code **)(*param_2 + 0x18))(param_2);
  puVar1 = PTR_s_Complete_None_04bb5948;
  pcVar3 = (char *)param_2[1];
  if (pcVar3 == PTR_s_Complete_None_04bb5948) {
    uVar2 = 0;
  }
  else if (((((((*pcVar3 != 'C') || (pcVar3[1] != 'o')) || (pcVar3[2] != 'm')) ||
             ((pcVar3[3] != 'p' || (pcVar3[4] != 'l')))) || (pcVar3[5] != 'e')) ||
           ((pcVar3[6] != 't' || (pcVar3[7] != 'e')))) ||
          (((pcVar3[8] != '_' ||
            (((pcVar3[9] != 'N' || (pcVar3[10] != 'o')) || (pcVar3[0xb] != 'n')))) ||
           ((pcVar3[0xc] != 'e' || (uVar2 = (uint)(byte)pcVar3[0xd], pcVar3[0xd] != 0)))))) {
    (**(code **)(*param_2 + 0x18))(param_2);
    pcVar3 = (char *)param_2[1];
    if ((pcVar3 == puVar1 + 0xe) ||
       ((((*pcVar3 == 'C' && (pcVar3[1] == 'o')) &&
         ((pcVar3[2] == 'm' && (((pcVar3[3] == 'p' && (pcVar3[4] == 'l')) && (pcVar3[5] == 'e'))))))
        && (((pcVar3[6] == 't' && (pcVar3[7] == 'e')) &&
            ((pcVar3[8] == '_' &&
             (((pcVar3[9] == 'R' && (pcVar3[10] == 'a')) &&
              ((pcVar3[0xb] == 'n' &&
               ((((pcVar3[0xc] == 'd' && (pcVar3[0xd] == 'o')) && (pcVar3[0xe] == 'm')) &&
                (pcVar3[0xf] == '\0')))))))))))))) {
      uVar2 = 1;
    }
    else {
      (**(code **)(*param_2 + 0x18))(param_2);
      pcVar3 = (char *)param_2[1];
      if ((pcVar3 == puVar1 + 0x1e) ||
         (((*pcVar3 == 'C' && (pcVar3[1] == 'o')) &&
          (((pcVar3[2] == 'm' && ((pcVar3[3] == 'p' && (pcVar3[4] == 'l')))) &&
           ((pcVar3[5] == 'e' &&
            ((((((pcVar3[6] == 't' && (pcVar3[7] == 'e')) && (pcVar3[8] == '_')) &&
               (((pcVar3[9] == 'S' && (pcVar3[10] == 'm')) &&
                ((pcVar3[0xb] == 'o' && ((pcVar3[0xc] == 'o' && (pcVar3[0xd] == 't')))))))) &&
              (pcVar3[0xe] == 'h')) && (pcVar3[0xf] == '\0')))))))))) {
        uVar2 = 2;
      }
      else {
        (**(code **)(*param_2 + 0x18))(param_2);
        pcVar3 = (char *)param_2[1];
        if ((pcVar3 == puVar1 + 0x2e) ||
           (((((*pcVar3 == 'C' && (pcVar3[1] == 'o')) && (pcVar3[2] == 'm')) &&
             (((pcVar3[3] == 'p' && (pcVar3[4] == 'l')) &&
              ((pcVar3[5] == 'e' && ((pcVar3[6] == 't' && (pcVar3[7] == 'e')))))))) &&
            (((pcVar3[8] == '_' &&
              (((((pcVar3[9] == 'F' && (pcVar3[10] == 'a')) && (pcVar3[0xb] == 's')) &&
                ((pcVar3[0xc] == 't' && (pcVar3[0xd] == 'S')))) &&
               ((pcVar3[0xe] == 'l' && ((pcVar3[0xf] == 'o' && (pcVar3[0x10] == 'w')))))))) &&
             (pcVar3[0x11] == '\0')))))) {
          uVar2 = 3;
        }
        else {
          (**(code **)(*param_2 + 0x18))(param_2);
          pcVar3 = (char *)param_2[1];
          if ((pcVar3 != puVar1 + 0x40) &&
             (((((((*pcVar3 != 'C' || (pcVar3[1] != 'o')) || (pcVar3[2] != 'm')) ||
                 (((pcVar3[3] != 'p' || (pcVar3[4] != 'l')) ||
                  ((pcVar3[5] != 'e' || ((pcVar3[6] != 't' || (pcVar3[7] != 'e')))))))) ||
                ((pcVar3[8] != '_' ||
                 (((pcVar3[9] != 'S' || (pcVar3[10] != 'l')) || (pcVar3[0xb] != 'o')))))) ||
               ((pcVar3[0xc] != 'w' || (pcVar3[0xd] != 'F')))) ||
              (((pcVar3[0xe] != 'a' || ((pcVar3[0xf] != 's' || (pcVar3[0x10] != 't')))) ||
               (pcVar3[0x11] != '\0')))))) {
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

