
undefined8 FUN_00cfc83c(uint *param_1,long *param_2)

{
  undefined *puVar1;
  uint uVar2;
  char *pcVar3;
  
  (**(code **)(*param_2 + 0x18))(param_2);
  puVar1 = PTR_s_cUISelect_04bb7e78;
  pcVar3 = (char *)param_2[1];
  if (pcVar3 == PTR_s_cUISelect_04bb7e78) {
    uVar2 = 0;
  }
  else if (((((*pcVar3 != 'c') || (pcVar3[1] != 'U')) || (pcVar3[2] != 'I')) ||
           ((((pcVar3[3] != 'S' || (pcVar3[4] != 'e')) ||
             ((pcVar3[5] != 'l' || ((pcVar3[6] != 'e' || (pcVar3[7] != 'c')))))) ||
            (pcVar3[8] != 't')))) || (uVar2 = (uint)(byte)pcVar3[9], pcVar3[9] != 0)) {
    (**(code **)(*param_2 + 0x18))(param_2);
    pcVar3 = (char *)param_2[1];
    if ((pcVar3 == puVar1 + 0xb) ||
       ((((((*pcVar3 == 'c' && (pcVar3[1] == 'R')) && (pcVar3[2] == 'a')) &&
          ((pcVar3[3] == 'n' && (pcVar3[4] == 'd')))) &&
         ((pcVar3[5] == 'o' && ((pcVar3[6] == 'm' && (pcVar3[7] == 'S')))))) &&
        ((pcVar3[8] == 'e' &&
         ((((pcVar3[9] == 'l' && (pcVar3[10] == 'e')) && (pcVar3[0xb] == 'c')) &&
          ((pcVar3[0xc] == 't' && (pcVar3[0xd] == '\0')))))))))) {
      uVar2 = 1;
    }
    else {
      (**(code **)(*param_2 + 0x18))(param_2);
      pcVar3 = (char *)param_2[1];
      if ((pcVar3 != puVar1 + 0x1a) &&
         (((((*pcVar3 != 'c' || (pcVar3[1] != 'A')) ||
            ((pcVar3[2] != 'b' || (((pcVar3[3] != 'a' || (pcVar3[4] != 'n')) || (pcVar3[5] != 'd')))
             ))) || (((pcVar3[6] != 'o' || (pcVar3[7] != 'n')) ||
                     ((pcVar3[8] != 'e' ||
                      (((pcVar3[9] != 'd' || (pcVar3[10] != 'H')) ||
                       ((pcVar3[0xb] != 'o' ||
                        (((pcVar3[0xc] != 'u' || (pcVar3[0xd] != 's')) || (pcVar3[0xe] != 'e')))))))
                      ))))) || (pcVar3[0xf] != '\0')))) {
        return 0;
      }
      uVar2 = 2;
    }
  }
  *param_1 = uVar2;
  return 1;
}

