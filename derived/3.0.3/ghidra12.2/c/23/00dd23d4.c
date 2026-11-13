
undefined8 FUN_00dd23d4(uint *param_1,long *param_2)

{
  undefined *puVar1;
  uint uVar2;
  char *pcVar3;
  
  (**(code **)(*param_2 + 0x18))(param_2);
  puVar1 = PTR_s_cHouseMove_04bb8a88;
  pcVar3 = (char *)param_2[1];
  if (pcVar3 == PTR_s_cHouseMove_04bb8a88) {
    uVar2 = 0;
  }
  else if (((((*pcVar3 != 'c') || (pcVar3[1] != 'H')) || (pcVar3[2] != 'o')) ||
           (((pcVar3[3] != 'u' || (pcVar3[4] != 's')) ||
            ((pcVar3[5] != 'e' || ((pcVar3[6] != 'M' || (pcVar3[7] != 'o')))))))) ||
          ((pcVar3[8] != 'v' ||
           ((pcVar3[9] != 'e' || (uVar2 = (uint)(byte)pcVar3[10], pcVar3[10] != 0)))))) {
    (**(code **)(*param_2 + 0x18))(param_2);
    pcVar3 = (char *)param_2[1];
    if ((pcVar3 == puVar1 + 0xd) ||
       ((((((*pcVar3 == 'c' && (pcVar3[1] == 'H')) && (pcVar3[2] == 'o')) &&
          (((pcVar3[3] == 'u' && (pcVar3[4] == 's')) &&
           ((pcVar3[5] == 'e' && ((pcVar3[6] == 'C' && (pcVar3[7] == 'h')))))))) &&
         (pcVar3[8] == 'a')) &&
        ((((pcVar3[9] == 'n' && (pcVar3[10] == 'g')) && (pcVar3[0xb] == 'e')) &&
         (pcVar3[0xc] == '\0')))))) {
      uVar2 = 1;
    }
    else {
      (**(code **)(*param_2 + 0x18))(param_2);
      pcVar3 = (char *)param_2[1];
      if ((pcVar3 == puVar1 + 0x1c) ||
         (((((*pcVar3 == 'c' && (pcVar3[1] == 'B')) &&
            ((pcVar3[2] == 'r' && ((pcVar3[3] == 'i' && (pcVar3[4] == 'd')))))) &&
           (((pcVar3[5] == 'g' && (((pcVar3[6] == 'e' && (pcVar3[7] == 'S')) && (pcVar3[8] == 'l')))
             ) && ((((pcVar3[9] == 'o' && (pcVar3[10] == 'p')) &&
                    ((pcVar3[0xb] == 'e' && ((pcVar3[0xc] == 'B' && (pcVar3[0xd] == 'u')))))) &&
                   (pcVar3[0xe] == 'i')))))) &&
          (((pcVar3[0xf] == 'l' && (pcVar3[0x10] == 'd')) && (pcVar3[0x11] == '\0')))))) {
        uVar2 = 2;
      }
      else {
        (**(code **)(*param_2 + 0x18))(param_2);
        pcVar3 = (char *)param_2[1];
        if ((pcVar3 != puVar1 + 0x30) &&
           ((((*pcVar3 != 'c' || (pcVar3[1] != 'B')) ||
             (((pcVar3[2] != 'r' || ((pcVar3[3] != 'i' || (pcVar3[4] != 'd')))) ||
              (pcVar3[5] != 'g')))) ||
            (((((((pcVar3[6] != 'e' || (pcVar3[7] != 'S')) || (pcVar3[8] != 'l')) ||
                ((pcVar3[9] != 'o' || (pcVar3[10] != 'p')))) || (pcVar3[0xb] != 'e')) ||
              (((pcVar3[0xc] != 'R' || (pcVar3[0xd] != 'e')) ||
               ((pcVar3[0xe] != 'm' ||
                (((pcVar3[0xf] != 'o' || (pcVar3[0x10] != 'v')) || (pcVar3[0x11] != 'e')))))))) ||
             (pcVar3[0x12] != '\0')))))) {
          return 0;
        }
        uVar2 = 3;
      }
    }
  }
  *param_1 = uVar2;
  return 1;
}

