
undefined8 FUN_00b52a7c(uint *param_1,long *param_2)

{
  undefined *puVar1;
  uint uVar2;
  char *pcVar3;
  
  (**(code **)(*param_2 + 0x18))(param_2);
  puVar1 = PTR_s_cField_04bb6be8;
  pcVar3 = (char *)param_2[1];
  if (pcVar3 == PTR_s_cField_04bb6be8) {
    uVar2 = 0;
  }
  else if (((((*pcVar3 != 'c') || (pcVar3[1] != 'F')) || (pcVar3[2] != 'i')) ||
           ((pcVar3[3] != 'e' || (pcVar3[4] != 'l')))) ||
          ((pcVar3[5] != 'd' || (uVar2 = (uint)(byte)pcVar3[6], pcVar3[6] != 0)))) {
    (**(code **)(*param_2 + 0x18))(param_2);
    pcVar3 = (char *)param_2[1];
    if ((pcVar3 == puVar1 + 9) ||
       ((((*pcVar3 == 'c' && (pcVar3[1] == 'T')) &&
         ((pcVar3[2] == 'a' && (((pcVar3[3] == 'l' && (pcVar3[4] == 'k')) && (pcVar3[5] == 'N'))))))
        && (((pcVar3[6] == 'p' && (pcVar3[7] == 'c')) &&
            ((pcVar3[8] == 'H' &&
             (((pcVar3[9] == 'o' && (pcVar3[10] == 'u')) &&
              ((pcVar3[0xb] == 's' && ((pcVar3[0xc] == 'e' && (pcVar3[0xd] == '\0')))))))))))))) {
      uVar2 = 1;
    }
    else {
      (**(code **)(*param_2 + 0x18))(param_2);
      pcVar3 = (char *)param_2[1];
      if ((pcVar3 != puVar1 + 0x19) &&
         ((((((*pcVar3 != 'c' || (pcVar3[1] != 'T')) || (pcVar3[2] != 'a')) ||
            ((pcVar3[3] != 'l' || (pcVar3[4] != 'k')))) ||
           (((pcVar3[5] != 'P' || ((pcVar3[6] != 'l' || (pcVar3[7] != 'a')))) || (pcVar3[8] != 'y'))
           )) || (((((pcVar3[9] != 'e' || (pcVar3[10] != 'r')) || (pcVar3[0xb] != 'H')) ||
                   ((pcVar3[0xc] != 'o' || (pcVar3[0xd] != 'u')))) ||
                  ((pcVar3[0xe] != 's' || ((pcVar3[0xf] != 'e' || (pcVar3[0x10] != '\0')))))))))) {
        return 0;
      }
      uVar2 = 2;
    }
  }
  *param_1 = uVar2;
  return 1;
}

