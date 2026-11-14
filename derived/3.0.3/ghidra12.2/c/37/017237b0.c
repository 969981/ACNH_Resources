
undefined8 FUN_017237b0(uint *param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  uint uVar4;
  char *pcVar5;
  long lVar6;
  
  (**(code **)(*param_2 + 0x18))(param_2);
  puVar3 = PTR_DAT_04bbe1b0;
  pcVar5 = (char *)param_2[1];
  if (pcVar5 == PTR_DAT_04bbe1b0) {
    uVar4 = 0;
  }
  else if ((((((((*pcVar5 != -0x1c) || (pcVar5[1] != -0x48)) || (pcVar5[2] != -0x75)) ||
              (((pcVar5[3] != -0x1b || (pcVar5[4] != -0x73)) ||
               ((pcVar5[5] != -0x76 || ((pcVar5[6] != -0x18 || (pcVar5[7] != -0x46)))))))) ||
             (pcVar5[8] != -0x55)) ||
            ((((((pcVar5[9] != -0x1b || (pcVar5[10] != -0x7a)) || (pcVar5[0xb] != -0x73)) ||
               ((pcVar5[0xc] != -0x19 || (pcVar5[0xd] != -0x6c)))) || (pcVar5[0xe] != -0x61)) ||
             ((pcVar5[0xf] != -0x1c || (pcVar5[0x10] != -0x48)))))) ||
           ((pcVar5[0x11] != -0x73 ||
            (((pcVar5[0x12] != -0x1b || (pcVar5[0x13] != -0x71)) || (pcVar5[0x14] != -0x51)))))) ||
          (uVar4 = (uint)(byte)pcVar5[0x15], pcVar5[0x15] != 0)) {
    (**(code **)(*param_2 + 0x18))(param_2);
    pcVar5 = (char *)param_2[1];
    if ((pcVar5 == puVar3 + 0x16) ||
       ((((*pcVar5 == -0x1c && (pcVar5[1] == -0x48)) &&
         ((pcVar5[2] == -0x75 && ((pcVar5[3] == -0x1b && (pcVar5[4] == -0x73)))))) &&
        ((((pcVar5[5] == -0x76 &&
           (((pcVar5[6] == -0x18 && (pcVar5[7] == -0x46)) && (pcVar5[8] == -0x55)))) &&
          (((pcVar5[9] == -0x1b && (pcVar5[10] == -0x7a)) &&
           (((pcVar5[0xb] == -0x73 && ((pcVar5[0xc] == -0x19 && (pcVar5[0xd] == -0x6c)))) &&
            (pcVar5[0xe] == -0x61)))))) &&
         (((((((pcVar5[0xf] == -0x1b && (pcVar5[0x10] == -0x71)) && (pcVar5[0x11] == -0x51)) &&
             ((pcVar5[0x12] == '(' && (pcVar5[0x13] == -0x1b)))) &&
            ((pcVar5[0x14] == -0x46 && ((pcVar5[0x15] == -0x59 && (pcVar5[0x16] == -0x1d)))))) &&
           (pcVar5[0x17] == -0x7e)) &&
          ((((pcVar5[0x18] == -0x76 && (pcVar5[0x19] == -0x19)) && (pcVar5[0x1a] == -0x4d)) &&
           (((pcVar5[0x1b] == -0x45 && (pcVar5[0x1c] == ')')) && (pcVar5[0x1d] == '\0')))))))))))) {
      uVar4 = 1;
    }
    else {
      (**(code **)(*param_2 + 0x18))(param_2);
      pcVar5 = (char *)param_2[1];
      if ((pcVar5 == puVar3 + 0x34) ||
         ((((*pcVar5 == -0x1c && (pcVar5[1] == -0x48)) &&
           (((pcVar5[2] == -0x75 &&
             (((pcVar5[3] == -0x1b && (pcVar5[4] == -0x73)) && (pcVar5[5] == -0x76)))) &&
            (((pcVar5[6] == -0x18 && (pcVar5[7] == -0x46)) &&
             ((pcVar5[8] == -0x55 &&
              ((((pcVar5[9] == -0x1b && (pcVar5[10] == -0x7a)) &&
                ((pcVar5[0xb] == -0x73 &&
                 ((((pcVar5[0xc] == -0x19 && (pcVar5[0xd] == -0x6c)) && (pcVar5[0xe] == -0x61)) &&
                  ((pcVar5[0xf] == -0x1b && (pcVar5[0x10] == -0x71)))))))) &&
               (pcVar5[0x11] == -0x51)))))))))) &&
          ((((pcVar5[0x12] == '(' && (pcVar5[0x13] == -0x1b)) &&
            ((pcVar5[0x14] == -0x51 &&
             (((pcVar5[0x15] == -99 && (pcVar5[0x16] == -0x1d)) && (pcVar5[0x17] == -0x7e)))))) &&
           ((((pcVar5[0x18] == -0x75 && (pcVar5[0x19] == -0x19)) && (pcVar5[0x1a] == -0x4d)) &&
            (((pcVar5[0x1b] == -0x45 && (pcVar5[0x1c] == ')')) && (pcVar5[0x1d] == '\0')))))))))) {
        uVar4 = 2;
      }
      else {
        (**(code **)(*param_2 + 0x18))(param_2);
        pcVar5 = (char *)param_2[1];
        if ((pcVar5 == puVar3 + 0x52) ||
           (((((((*pcVar5 == -0x1c && (pcVar5[1] == -0x48)) && (pcVar5[2] == -0x75)) &&
               ((pcVar5[3] == -0x1b && (pcVar5[4] == -0x73)))) &&
              ((((pcVar5[5] == -0x76 && ((pcVar5[6] == -0x18 && (pcVar5[7] == -0x46)))) &&
                (pcVar5[8] == -0x55)) &&
               ((((((pcVar5[9] == -0x1b && (pcVar5[10] == -0x7a)) && (pcVar5[0xb] == -0x73)) &&
                  ((pcVar5[0xc] == -0x19 && (pcVar5[0xd] == -0x6c)))) && (pcVar5[0xe] == -0x61)) &&
                ((pcVar5[0xf] == -0x1b && (pcVar5[0x10] == -0x71)))))))) &&
             (((pcVar5[0x11] == -0x51 &&
               (((pcVar5[0x12] == '(' && (pcVar5[0x13] == -0x1a)) && (pcVar5[0x14] == -0x4d)))) &&
              (((pcVar5[0x15] == -0x4d && (pcVar5[0x16] == -0x1d)) && (pcVar5[0x17] == -0x7f))))))
            && (((pcVar5[0x18] == -0x72 && (pcVar5[0x19] == -0x19)) &&
                ((pcVar5[0x1a] == -0x4d &&
                 (((pcVar5[0x1b] == -0x45 && (pcVar5[0x1c] == ')')) && (pcVar5[0x1d] == '\0'))))))))
           )) {
          uVar4 = 3;
        }
        else {
          (**(code **)(*param_2 + 0x18))(param_2);
          pcVar5 = (char *)param_2[1];
          if ((pcVar5 == puVar3 + 0x70) ||
             (((((*pcVar5 == -0x1c && (pcVar5[1] == -0x48)) &&
                (((pcVar5[2] == -0x75 && ((pcVar5[3] == -0x1b && (pcVar5[4] == -0x73)))) &&
                 (pcVar5[5] == -0x76)))) &&
               ((((pcVar5[6] == -0x18 && (pcVar5[7] == -0x46)) && (pcVar5[8] == -0x55)) &&
                ((pcVar5[9] == -0x1b && (pcVar5[10] == -0x7a)))))) &&
              (((((pcVar5[0xb] == -0x73 && ((pcVar5[0xc] == -0x19 && (pcVar5[0xd] == -0x6c)))) &&
                 ((pcVar5[0xe] == -0x61 &&
                  ((((pcVar5[0xf] == -0x1b && (pcVar5[0x10] == -0x71)) && (pcVar5[0x11] == -0x51))
                   && (((pcVar5[0x12] == '(' && (pcVar5[0x13] == -0x19)) &&
                       ((pcVar5[0x14] == -0x55 &&
                        ((pcVar5[0x15] == -0x75 && (pcVar5[0x16] == -0x1d)))))))))))) &&
                (pcVar5[0x17] == -0x7f)) &&
               (((((pcVar5[0x18] == -0x5f && (pcVar5[0x19] == -0x19)) && (pcVar5[0x1a] == -0x4d)) &&
                 ((pcVar5[0x1b] == -0x45 && (pcVar5[0x1c] == ')')))) && (pcVar5[0x1d] == '\0')))))))
             ) {
            uVar4 = 4;
          }
          else {
            (**(code **)(*param_2 + 0x18))(param_2);
            pcVar5 = (char *)param_2[1];
            if (pcVar5 == puVar3 + 0x8e) {
              uVar4 = 5;
            }
            else {
              if (*pcVar5 == -0x1c) {
                uVar4 = 5;
                lVar6 = 0;
                do {
                  if (puVar3[lVar6 + 0x8f] != pcVar5[lVar6 + 1]) break;
                  if (lVar6 == 0x22) goto LAB_01724010;
                  lVar1 = lVar6 + 0x90;
                  lVar2 = lVar6 + 2;
                  lVar6 = lVar6 + 2;
                } while (puVar3[lVar1] == pcVar5[lVar2]);
              }
              (**(code **)(*param_2 + 0x18))(param_2);
              pcVar5 = (char *)param_2[1];
              if (pcVar5 == puVar3 + 0xb2) {
                uVar4 = 6;
              }
              else {
                if (*pcVar5 != -0x1c) {
                  return 0;
                }
                lVar6 = 0;
                do {
                  if (puVar3[lVar6 + 0xb3] != pcVar5[lVar6 + 1]) {
                    return 0;
                  }
                  if (puVar3[lVar6 + 0xb4] != pcVar5[lVar6 + 2]) {
                    return 0;
                  }
                  lVar6 = lVar6 + 2;
                  uVar4 = 6;
                } while (lVar6 != 0x26);
              }
            }
          }
        }
      }
    }
  }
LAB_01724010:
  *param_1 = uVar4;
  return 1;
}

