
undefined8 FUN_01e5fde8(uint *param_1,long *param_2)

{
  uint uVar1;
  char *pcVar2;
  
  (**(code **)(*param_2 + 0x18))(param_2);
  pcVar2 = (char *)param_2[1];
  if (pcVar2 == s_cDefault_04a5dc20) {
    uVar1 = 0;
  }
  else if (((((*pcVar2 != 'c') || (pcVar2[1] != 'D')) || (pcVar2[2] != 'e')) ||
           (((pcVar2[3] != 'f' || (pcVar2[4] != 'a')) ||
            ((pcVar2[5] != 'u' || ((pcVar2[6] != 'l' || (pcVar2[7] != 't')))))))) ||
          (uVar1 = (uint)(byte)pcVar2[8], pcVar2[8] != 0)) {
    (**(code **)(*param_2 + 0x18))(param_2);
    pcVar2 = (char *)param_2[1];
    if ((pcVar2 == s_cNpcTurnGst_04a5dc2b) ||
       (((((((*pcVar2 == 'c' && (pcVar2[1] == 'N')) && (pcVar2[2] == 'p')) &&
           ((pcVar2[3] == 'c' && (pcVar2[4] == 'T')))) &&
          ((pcVar2[5] == 'u' && ((pcVar2[6] == 'r' && (pcVar2[7] == 'n')))))) && (pcVar2[8] == 'G'))
        && (((pcVar2[9] == 's' && (pcVar2[10] == 't')) && (pcVar2[0xb] == '\0')))))) {
      uVar1 = 1;
    }
    else {
      (**(code **)(*param_2 + 0x18))(param_2);
      pcVar2 = (char *)param_2[1];
      if ((pcVar2 == s_cNpcAirplane_04a5dc39) ||
         ((((*pcVar2 == 'c' && (pcVar2[1] == 'N')) &&
           (((pcVar2[2] == 'p' && ((pcVar2[3] == 'c' && (pcVar2[4] == 'A')))) && (pcVar2[5] == 'i'))
           )) && ((((pcVar2[6] == 'r' && (pcVar2[7] == 'p')) && (pcVar2[8] == 'l')) &&
                  (((pcVar2[9] == 'a' && (pcVar2[10] == 'n')) &&
                   ((pcVar2[0xb] == 'e' && (pcVar2[0xc] == '\0')))))))))) {
        uVar1 = 2;
      }
      else {
        (**(code **)(*param_2 + 0x18))(param_2);
        pcVar2 = (char *)param_2[1];
        if ((pcVar2 == s_CommonCharaEditTurn_04a5dc48) ||
           (((*pcVar2 == 'C' && (pcVar2[1] == 'o')) &&
            (((((pcVar2[2] == 'm' &&
                ((((pcVar2[3] == 'm' && (pcVar2[4] == 'o')) && (pcVar2[5] == 'n')) &&
                 ((pcVar2[6] == 'C' && (pcVar2[7] == 'h')))))) &&
               ((pcVar2[8] == 'a' &&
                ((((pcVar2[9] == 'r' && (pcVar2[10] == 'a')) &&
                  ((pcVar2[0xb] == 'E' &&
                   (((pcVar2[0xc] == 'd' && (pcVar2[0xd] == 'i')) && (pcVar2[0xe] == 't')))))) &&
                 ((pcVar2[0xf] == 'T' && (pcVar2[0x10] == 'u')))))))) && (pcVar2[0x11] == 'r')) &&
             ((pcVar2[0x12] == 'n' && (pcVar2[0x13] == '\0')))))))) {
          uVar1 = 3;
        }
        else {
          (**(code **)(*param_2 + 0x18))(param_2);
          pcVar2 = (char *)param_2[1];
          if ((pcVar2 == s_cNpcNetTurn_04a5dc5e) ||
             ((((*pcVar2 == 'c' && (pcVar2[1] == 'N')) && (pcVar2[2] == 'p')) &&
              ((((pcVar2[3] == 'c' && (pcVar2[4] == 'N')) &&
                ((pcVar2[5] == 'e' && ((pcVar2[6] == 't' && (pcVar2[7] == 'T')))))) &&
               ((pcVar2[8] == 'u' &&
                (((pcVar2[9] == 'r' && (pcVar2[10] == 'n')) && (pcVar2[0xb] == '\0')))))))))) {
            uVar1 = 4;
          }
          else {
            (**(code **)(*param_2 + 0x18))(param_2);
            pcVar2 = (char *)param_2[1];
            if ((pcVar2 != s_cSeoSwimWait_04a5dc6c) &&
               ((((*pcVar2 != 'c' || (pcVar2[1] != 'S')) ||
                 ((pcVar2[2] != 'e' || ((pcVar2[3] != 'o' || (pcVar2[4] != 'S')))))) ||
                (((pcVar2[5] != 'w' ||
                  (((((pcVar2[6] != 'i' || (pcVar2[7] != 'm')) || (pcVar2[8] != 'W')) ||
                    ((pcVar2[9] != 'a' || (pcVar2[10] != 'i')))) || (pcVar2[0xb] != 't')))) ||
                 (pcVar2[0xc] != '\0')))))) {
              return 0;
            }
            uVar1 = 5;
          }
        }
      }
    }
  }
  *param_1 = uVar1;
  return 1;
}

