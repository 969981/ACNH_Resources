
undefined8 FUN_00e53f0c(uint *param_1,long *param_2)

{
  undefined *puVar1;
  uint uVar2;
  char *pcVar3;
  
  (**(code **)(*param_2 + 0x18))(param_2);
  puVar1 = PTR_DAT_04bb9558;
  pcVar3 = (char *)param_2[1];
  if (pcVar3 == PTR_DAT_04bb9558) {
    uVar2 = 0;
  }
  else if ((((*pcVar3 != 's') || (pcVar3[1] != 'l')) || (pcVar3[2] != 'o')) ||
          (uVar2 = (uint)(byte)pcVar3[3], pcVar3[3] != 0)) {
    (**(code **)(*param_2 + 0x18))(param_2);
    pcVar3 = (char *)param_2[1];
    if ((pcVar3 == puVar1 + 4) ||
       (((*pcVar3 == 'a' && (pcVar3[1] == 'l')) && ((pcVar3[2] == 'p' && (pcVar3[3] == '\0')))))) {
      uVar2 = 1;
    }
    else {
      (**(code **)(*param_2 + 0x18))(param_2);
      pcVar3 = (char *)param_2[1];
      if ((pcVar3 == puVar1 + 8) ||
         (((*pcVar3 == 'b' && (pcVar3[1] == 'p')) && ((pcVar3[2] == 't' && (pcVar3[3] == '\0'))))))
      {
        uVar2 = 2;
      }
      else {
        (**(code **)(*param_2 + 0x18))(param_2);
        pcVar3 = (char *)param_2[1];
        if ((pcVar3 == puVar1 + 0xc) ||
           ((((*pcVar3 == 'f' && (pcVar3[1] == 'o')) && (pcVar3[2] == 'x')) && (pcVar3[3] == '\0')))
           ) {
          uVar2 = 3;
        }
        else {
          (**(code **)(*param_2 + 0x18))(param_2);
          pcVar3 = (char *)param_2[1];
          if ((pcVar3 == puVar1 + 0x10) ||
             (((*pcVar3 == 's' && (pcVar3[1] == 'k')) && ((pcVar3[2] == 'k' && (pcVar3[3] == '\0')))
              ))) {
            uVar2 = 4;
          }
          else {
            (**(code **)(*param_2 + 0x18))(param_2);
            pcVar3 = (char *)param_2[1];
            if ((pcVar3 == puVar1 + 0x14) ||
               (((*pcVar3 == 'c' && (pcVar3[1] == 'm')) &&
                ((pcVar3[2] == 'l' && (pcVar3[3] == '\0')))))) {
              uVar2 = 5;
            }
            else {
              (**(code **)(*param_2 + 0x18))(param_2);
              pcVar3 = (char *)param_2[1];
              if ((pcVar3 != puVar1 + 0x18) &&
                 ((((*pcVar3 != 't' || (pcVar3[1] != 't')) || (pcVar3[2] != 'l')) ||
                  (pcVar3[3] != '\0')))) {
                return 0;
              }
              uVar2 = 6;
            }
          }
        }
      }
    }
  }
  *param_1 = uVar2;
  return 1;
}

