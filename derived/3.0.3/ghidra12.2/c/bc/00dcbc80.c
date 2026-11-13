
undefined8 FUN_00dcbc80(uint *param_1,long *param_2)

{
  undefined *puVar1;
  uint uVar2;
  char *pcVar3;
  
  (**(code **)(*param_2 + 0x18))(param_2);
  puVar1 = PTR_s_cPlayer_04bb8a20;
  pcVar3 = (char *)param_2[1];
  if (pcVar3 == PTR_s_cPlayer_04bb8a20) {
    uVar2 = 0;
  }
  else if ((((((*pcVar3 != 'c') || (pcVar3[1] != 'P')) || (pcVar3[2] != 'l')) ||
            ((pcVar3[3] != 'a' || (pcVar3[4] != 'y')))) || (pcVar3[5] != 'e')) ||
          ((pcVar3[6] != 'r' || (uVar2 = (uint)(byte)pcVar3[7], pcVar3[7] != 0)))) {
    (**(code **)(*param_2 + 0x18))(param_2);
    pcVar3 = (char *)param_2[1];
    if ((pcVar3 == puVar1 + 10) ||
       ((((*pcVar3 == 'c' && (pcVar3[1] == 'N')) && (pcVar3[2] == 'p')) &&
        ((pcVar3[3] == 'c' && (pcVar3[4] == '\0')))))) {
      uVar2 = 1;
    }
    else {
      (**(code **)(*param_2 + 0x18))(param_2);
      pcVar3 = (char *)param_2[1];
      if ((pcVar3 != puVar1 + 0x11) &&
         ((((*pcVar3 != 'c' || (pcVar3[1] != 'S')) ||
           ((pcVar3[2] != 'e' || (((pcVar3[3] != 't' || (pcVar3[4] != 't')) || (pcVar3[5] != 'l'))))
           )) || (((pcVar3[6] != 'e' || (pcVar3[7] != 'r')) ||
                  ((pcVar3[8] != 'Q' ||
                   (((pcVar3[9] != 'u' || (pcVar3[10] != 'e')) ||
                    ((pcVar3[0xb] != 's' || ((pcVar3[0xc] != 't' || (pcVar3[0xd] != '\0'))))))))))))
         )) {
        return 0;
      }
      uVar2 = 2;
    }
  }
  *param_1 = uVar2;
  return 1;
}

