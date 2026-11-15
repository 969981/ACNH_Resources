
undefined8 FUN_01e5fa8c(uint *param_1,long *param_2)

{
  undefined *puVar1;
  uint uVar2;
  char *pcVar3;
  
  (**(code **)(*param_2 + 0x18))(param_2);
  puVar1 = PTR_s_cDefault_04bc1618;
  pcVar3 = (char *)param_2[1];
  if (pcVar3 == PTR_s_cDefault_04bc1618) {
    uVar2 = 0;
  }
  else if (((((*pcVar3 != 'c') || (pcVar3[1] != 'D')) || (pcVar3[2] != 'e')) ||
           (((pcVar3[3] != 'f' || (pcVar3[4] != 'a')) ||
            ((pcVar3[5] != 'u' || ((pcVar3[6] != 'l' || (pcVar3[7] != 't')))))))) ||
          (uVar2 = (uint)(byte)pcVar3[8], pcVar3[8] != 0)) {
    (**(code **)(*param_2 + 0x18))(param_2);
    pcVar3 = (char *)param_2[1];
    if ((pcVar3 == puVar1 + 0xb) ||
       ((((((*pcVar3 == 'c' && (pcVar3[1] == 'N')) && (pcVar3[2] == 'e')) &&
          ((pcVar3[3] == 't' && (pcVar3[4] == 'M')))) &&
         ((pcVar3[5] == 'o' && ((pcVar3[6] == 'v' && (pcVar3[7] == 'e')))))) && (pcVar3[8] == '\0'))
       )) {
      uVar2 = 1;
    }
    else {
      (**(code **)(*param_2 + 0x18))(param_2);
      pcVar3 = (char *)param_2[1];
      if ((pcVar3 == puVar1 + 0x16) ||
         ((((*pcVar3 == 'c' && (pcVar3[1] == 'N')) && (pcVar3[2] == 'p')) &&
          (((pcVar3[3] == 'c' && (pcVar3[4] == 'M')) &&
           ((((pcVar3[5] == 'o' && ((pcVar3[6] == 'v' && (pcVar3[7] == 'e')))) && (pcVar3[8] == 'G')
             ) && (((pcVar3[9] == 's' && (pcVar3[10] == 't')) && (pcVar3[0xb] == '\0')))))))))) {
        uVar2 = 2;
      }
      else {
        (**(code **)(*param_2 + 0x18))(param_2);
        pcVar3 = (char *)param_2[1];
        if ((pcVar3 == puVar1 + 0x24) ||
           (((((*pcVar3 == 'c' && (pcVar3[1] == 'A')) &&
              ((pcVar3[2] == 'i' && ((pcVar3[3] == 'r' && (pcVar3[4] == 'p')))))) &&
             (pcVar3[5] == 'l')) &&
            ((((((pcVar3[6] == 'a' && (pcVar3[7] == 'n')) && (pcVar3[8] == 'e')) &&
               ((pcVar3[9] == 'R' && (pcVar3[10] == 'u')))) && (pcVar3[0xb] == 'n')) &&
             (pcVar3[0xc] == '\0')))))) {
          uVar2 = 3;
        }
        else {
          (**(code **)(*param_2 + 0x18))(param_2);
          pcVar3 = (char *)param_2[1];
          if ((pcVar3 != puVar1 + 0x33) &&
             ((((*pcVar3 != 'c' || (pcVar3[1] != 'S')) ||
               ((pcVar3[2] != 'e' ||
                (((pcVar3[3] != 'o' || (pcVar3[4] != 'S')) || (pcVar3[5] != 'w')))))) ||
              (((pcVar3[6] != 'i' || (pcVar3[7] != 'm')) || (pcVar3[8] != '\0')))))) {
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

