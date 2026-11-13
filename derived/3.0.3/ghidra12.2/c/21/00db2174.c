
undefined8 FUN_00db2174(uint *param_1,long *param_2)

{
  undefined *puVar1;
  uint uVar2;
  char *pcVar3;
  
  (**(code **)(*param_2 + 0x18))(param_2);
  puVar1 = PTR_s_cLand_04bb8868;
  pcVar3 = (char *)param_2[1];
  if (pcVar3 == PTR_s_cLand_04bb8868) {
    uVar2 = 0;
  }
  else if (((((*pcVar3 != 'c') || (pcVar3[1] != 'L')) || (pcVar3[2] != 'a')) ||
           ((pcVar3[3] != 'n' || (pcVar3[4] != 'd')))) ||
          (uVar2 = (uint)(byte)pcVar3[5], pcVar3[5] != 0)) {
    (**(code **)(*param_2 + 0x18))(param_2);
    pcVar3 = (char *)param_2[1];
    if ((pcVar3 == puVar1 + 8) ||
       ((((((*pcVar3 == 'c' && (pcVar3[1] == 'V')) &&
           ((pcVar3[2] == 'i' && (((pcVar3[3] == 'l' && (pcVar3[4] == 'l')) && (pcVar3[5] == 'a'))))
           )) && ((pcVar3[6] == 'g' && (pcVar3[7] == 'e')))) && (pcVar3[8] == 'r')) &&
        (pcVar3[9] == '\0')))) {
      uVar2 = 1;
    }
    else {
      (**(code **)(*param_2 + 0x18))(param_2);
      pcVar3 = (char *)param_2[1];
      if ((pcVar3 == puVar1 + 0x14) ||
         ((((*pcVar3 == 'c' && (pcVar3[1] == 'E')) &&
           ((pcVar3[2] == 'x' && (((pcVar3[3] == 't' && (pcVar3[4] == 'e')) && (pcVar3[5] == 'n'))))
           )) && (((pcVar3[6] == 's' && (pcVar3[7] == 'i')) &&
                  ((pcVar3[8] == 'o' && ((pcVar3[9] == 'n' && (pcVar3[10] == '\0')))))))))) {
        uVar2 = 2;
      }
      else {
        (**(code **)(*param_2 + 0x18))(param_2);
        pcVar3 = (char *)param_2[1];
        if ((pcVar3 != puVar1 + 0x21) &&
           ((((((*pcVar3 != 'c' || (pcVar3[1] != 'W')) || (pcVar3[2] != 'h')) ||
              ((pcVar3[3] != 'e' || (pcVar3[4] != 'r')))) || (pcVar3[5] != 'e')) ||
            (((((pcVar3[6] != 'a' || (pcVar3[7] != 'r')) ||
               ((pcVar3[8] != 'e' ||
                (((pcVar3[9] != 'n' || (pcVar3[10] != 'I')) || (pcVar3[0xb] != 's')))))) ||
              ((pcVar3[0xc] != 'l' || (pcVar3[0xd] != 'a')))) ||
             ((pcVar3[0xe] != 'n' ||
              (((pcVar3[0xf] != 'd' || (pcVar3[0x10] != 's')) || (pcVar3[0x11] != '\0')))))))))) {
          return 0;
        }
        uVar2 = 3;
      }
    }
  }
  *param_1 = uVar2;
  return 1;
}

