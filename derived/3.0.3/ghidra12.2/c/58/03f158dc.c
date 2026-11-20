
undefined8 FUN_03f158dc(uint *param_1,long *param_2)

{
  undefined *puVar1;
  uint uVar2;
  char *pcVar3;
  
  (**(code **)(*param_2 + 0x18))(param_2);
  puVar1 = PTR_s_Immediate_04bdefd8;
  pcVar3 = (char *)param_2[1];
  if (pcVar3 == PTR_s_Immediate_04bdefd8) {
    uVar2 = 0;
  }
  else if (((((*pcVar3 != 'I') || (pcVar3[1] != 'm')) || (pcVar3[2] != 'm')) ||
           (((pcVar3[3] != 'e' || (pcVar3[4] != 'd')) ||
            ((pcVar3[5] != 'i' || ((pcVar3[6] != 'a' || (pcVar3[7] != 't')))))))) ||
          ((pcVar3[8] != 'e' || (uVar2 = (uint)(byte)pcVar3[9], pcVar3[9] != 0)))) {
    (**(code **)(*param_2 + 0x18))(param_2);
    pcVar3 = (char *)param_2[1];
    if ((pcVar3 == puVar1 + 0xb) ||
       ((((((*pcVar3 == 'N' && (pcVar3[1] == 'e')) && (pcVar3[2] == 'x')) &&
          ((pcVar3[3] == 't' && (pcVar3[4] == 'M')))) &&
         ((pcVar3[5] == 'e' && ((pcVar3[6] == 't' && (pcVar3[7] == 'e')))))) &&
        ((pcVar3[8] == 'r' && (pcVar3[9] == '\0')))))) {
      uVar2 = 1;
    }
    else {
      (**(code **)(*param_2 + 0x18))(param_2);
      pcVar3 = (char *)param_2[1];
      if ((pcVar3 == puVar1 + 0x16) ||
         ((((*pcVar3 == 'N' && (pcVar3[1] == 'e')) && (pcVar3[2] == 'x')) &&
          (((pcVar3[3] == 't' && (pcVar3[4] == 'B')) &&
           (((pcVar3[5] == 'e' && ((pcVar3[6] == 'a' && (pcVar3[7] == 't')))) && (pcVar3[8] == '\0')
            ))))))) {
        uVar2 = 2;
      }
      else {
        (**(code **)(*param_2 + 0x18))(param_2);
        pcVar3 = (char *)param_2[1];
        if ((pcVar3 == puVar1 + 0x20) ||
           ((((((*pcVar3 == 'N' && (pcVar3[1] == 'e')) && (pcVar3[2] == 'x')) &&
              (((pcVar3[3] == 't' && (pcVar3[4] == 'M')) &&
               ((pcVar3[5] == 'e' && ((pcVar3[6] == 'a' && (pcVar3[7] == 's')))))))) &&
             (pcVar3[8] == 'u')) &&
            (((pcVar3[9] == 'r' && (pcVar3[10] == 'e')) && (pcVar3[0xb] == '\0')))))) {
          uVar2 = 3;
        }
        else {
          (**(code **)(*param_2 + 0x18))(param_2);
          pcVar3 = (char *)param_2[1];
          if ((pcVar3 != puVar1 + 0x2d) &&
             ((((*pcVar3 != 'N' || (pcVar3[1] != 'e')) ||
               ((pcVar3[2] != 'x' || ((pcVar3[3] != 't' || (pcVar3[4] != 'M')))))) ||
              ((pcVar3[5] != 'a' ||
               ((((pcVar3[6] != 'r' || (pcVar3[7] != 'k')) || (pcVar3[8] != 'e')) ||
                ((pcVar3[9] != 'r' || (pcVar3[10] != '\0')))))))))) {
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

