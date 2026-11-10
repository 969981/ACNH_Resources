
void FUN_00190640(long param_1,long *param_2,long param_3)

{
  char *pcVar1;
  long lVar2;
  undefined8 *puVar3;
  char *pcVar4;
  
  pcVar1 = (char *)*param_2;
  switch(*pcVar1) {
  case '[':
    FUN_00190fc0(param_1,param_2,param_3);
    return;
  case 'f':
    pcVar4 = pcVar1 + 1;
    *param_2 = (long)pcVar4;
    if (pcVar1[1] == 'a') {
      pcVar4 = pcVar1 + 2;
      *param_2 = (long)pcVar4;
      if (pcVar1[2] == 'l') {
        pcVar4 = pcVar1 + 3;
        *param_2 = (long)pcVar4;
        if (pcVar1[3] == 's') {
          pcVar4 = pcVar1 + 4;
          *param_2 = (long)pcVar4;
          if (pcVar1[4] == 'e') {
            *param_2 = (long)(pcVar1 + 5);
            puVar3 = *(undefined8 **)(param_3 + 0x40);
            if (*(undefined8 **)(param_3 + 0x48) < puVar3 + 3) {
              FUN_00191a28(param_3 + 0x28,1);
              puVar3 = *(undefined8 **)(param_3 + 0x40);
            }
            *(undefined8 **)(param_3 + 0x40) = puVar3 + 3;
            puVar3[1] = 0;
            puVar3[2] = 0;
            *puVar3 = 0;
            *(undefined2 *)((long)puVar3 + 0x16) = 9;
            return;
          }
        }
      }
    }
    break;
  case 'n':
    pcVar4 = pcVar1 + 1;
    *param_2 = (long)pcVar4;
    if (pcVar1[1] == 'u') {
      pcVar4 = pcVar1 + 2;
      *param_2 = (long)pcVar4;
      if (pcVar1[2] == 'l') {
        pcVar4 = pcVar1 + 3;
        *param_2 = (long)pcVar4;
        if (pcVar1[3] == 'l') {
          *param_2 = (long)(pcVar1 + 4);
          puVar3 = *(undefined8 **)(param_3 + 0x40);
          if (*(undefined8 **)(param_3 + 0x48) < puVar3 + 3) {
            FUN_00191a28(param_3 + 0x28,1);
            puVar3 = *(undefined8 **)(param_3 + 0x40);
            *(undefined8 **)(param_3 + 0x40) = puVar3 + 3;
            *puVar3 = 0;
            puVar3[1] = 0;
            puVar3[2] = 0;
            return;
          }
          *(undefined8 **)(param_3 + 0x40) = puVar3 + 3;
          *puVar3 = 0;
          puVar3[1] = 0;
          puVar3[2] = 0;
          return;
        }
      }
    }
    break;
  case 't':
    pcVar4 = pcVar1 + 1;
    *param_2 = (long)pcVar4;
    if (pcVar1[1] == 'r') {
      pcVar4 = pcVar1 + 2;
      *param_2 = (long)pcVar4;
      if (pcVar1[2] == 'u') {
        pcVar4 = pcVar1 + 3;
        *param_2 = (long)pcVar4;
        if (pcVar1[3] == 'e') {
          *param_2 = (long)(pcVar1 + 4);
          puVar3 = *(undefined8 **)(param_3 + 0x40);
          if (*(undefined8 **)(param_3 + 0x48) < puVar3 + 3) {
            FUN_00191a28(param_3 + 0x28,1);
            puVar3 = *(undefined8 **)(param_3 + 0x40);
          }
          *(undefined8 **)(param_3 + 0x40) = puVar3 + 3;
          puVar3[1] = 0;
          puVar3[2] = 0;
          *puVar3 = 0;
          *(undefined2 *)((long)puVar3 + 0x16) = 10;
          return;
        }
      }
    }
    break;
  case '{':
    FUN_00190c70(param_1,param_2,param_3);
    return;
  default:
    if (*pcVar1 == '\"') {
      FUN_00190890(param_1,param_2,param_3,0);
      return;
    }
  case '\\':
  case ']':
  case '^':
  case '_':
  case '`':
  case 'a':
  case 'b':
  case 'c':
  case 'd':
  case 'e':
  case 'g':
  case 'h':
  case 'i':
  case 'j':
  case 'k':
  case 'l':
  case 'm':
  case 'o':
  case 'p':
  case 'q':
  case 'r':
  case 's':
  case 'u':
  case 'v':
  case 'w':
  case 'x':
  case 'y':
  case 'z':
    FUN_00191230(param_1,param_2,param_3);
    return;
  }
  lVar2 = param_2[1];
  *(undefined4 *)(param_1 + 0x30) = 3;
  *(long *)(param_1 + 0x38) = (long)pcVar4 - lVar2;
  return;
}

