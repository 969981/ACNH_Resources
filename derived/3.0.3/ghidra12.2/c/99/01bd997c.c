
undefined4 FUN_01bd997c(long *param_1)

{
  undefined *puVar1;
  char cVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined4 uVar5;
  char *pcVar6;
  undefined *local_50;
  char *local_48;
  
  (**(code **)(*param_1 + 0x18))();
  (**(code **)(*param_1 + 0x18))(param_1);
  puVar4 = PTR_DAT_04bb6a58;
  pcVar6 = (char *)param_1[1];
  if ((pcVar6 == PTR_DAT_04bb6a58) || ((*pcVar6 == 'B' && (pcVar6[1] == 'O')))) {
    (**(code **)(*param_1 + 0x18))(param_1);
    (**(code **)(*param_1 + 0x18))(param_1);
    pcVar6 = (char *)param_1[1];
    if ((pcVar6 == puVar4 + 4) || ((*pcVar6 == 'H' && (pcVar6[1] == 'A')))) {
      (**(code **)(*param_1 + 0x18))(param_1);
      (**(code **)(*param_1 + 0x18))(param_1);
      pcVar6 = (char *)param_1[1];
      if ((pcVar6 == puVar4 + 8) || ((*pcVar6 == 'K' && (pcVar6[1] == 'O')))) {
        (**(code **)(*param_1 + 0x18))(param_1);
        (**(code **)(*param_1 + 0x18))(param_1);
        puVar3 = PTR_DAT_04bb2020;
        pcVar6 = (char *)param_1[1];
        if ((pcVar6 == puVar4 + 0xc) || ((*pcVar6 == 'Z' && (pcVar6[1] == 'K')))) {
          local_48 = puVar4 + 0x10;
          puVar1 = PTR_DAT_04bb2020 + 0x10;
          local_50 = puVar1;
          (**(code **)(*param_1 + 0x18))(param_1);
          (**(code **)(*param_1 + 0x18))(param_1);
          pcVar6 = (char *)param_1[1];
          FUN_006bd3a4(&local_50);
          if (pcVar6 != local_48) {
            cVar2 = *(char *)param_1[1];
            if ((cVar2 != *local_48) ||
               ((cVar2 != '\0' && (((char *)param_1[1])[1] != local_48[1])))) {
              return 4;
            }
          }
          local_48 = puVar4 + 0x14;
          local_50 = puVar1;
          (**(code **)(*param_1 + 0x18))(param_1);
          (**(code **)(*param_1 + 0x18))(param_1);
          pcVar6 = (char *)param_1[1];
          (**(code **)(local_50 + 0x18))(&local_50);
          if (pcVar6 != local_48) {
            cVar2 = *(char *)param_1[1];
            if ((cVar2 != *local_48) ||
               ((cVar2 != '\0' && (((char *)param_1[1])[1] != local_48[1])))) {
              return 5;
            }
          }
          local_48 = puVar4 + 0x18;
          local_50 = puVar3 + 0x10;
          (**(code **)(*param_1 + 0x18))(param_1);
          (**(code **)(*param_1 + 0x18))(param_1);
          pcVar6 = (char *)param_1[1];
          (**(code **)(local_50 + 0x18))(&local_50);
          if (pcVar6 != local_48) {
            cVar2 = *(char *)param_1[1];
            if ((cVar2 != *local_48) ||
               ((cVar2 != '\0' && (((char *)param_1[1])[1] != local_48[1])))) {
              return 6;
            }
          }
          local_48 = puVar4 + 0x1c;
          local_50 = puVar3 + 0x10;
          (**(code **)(*param_1 + 0x18))(param_1);
          (**(code **)(*param_1 + 0x18))(param_1);
          pcVar6 = (char *)param_1[1];
          (**(code **)(local_50 + 0x18))(&local_50);
          if (pcVar6 != local_48) {
            cVar2 = *(char *)param_1[1];
            if ((cVar2 != *local_48) ||
               ((cVar2 != '\0' && (((char *)param_1[1])[1] != local_48[1])))) {
              return 7;
            }
          }
          return 0xffffffff;
        }
        uVar5 = 3;
      }
      else {
        uVar5 = 2;
      }
    }
    else {
      uVar5 = 1;
    }
  }
  else {
    uVar5 = 0;
  }
  return uVar5;
}

