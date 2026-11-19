
void FUN_03c53c60(undefined4 *param_1,long *param_2)

{
  undefined *puVar1;
  undefined4 uVar2;
  char cVar3;
  ulong uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  char *pcVar9;
  undefined *local_50;
  char *local_48;
  
  *(undefined8 *)(param_1 + 1) = 0;
  if ((DAT_05aedaa0 == (long *)0x0) ||
     (uVar4 = (**(code **)(*DAT_05aedaa0 + 0x10))(DAT_05aedaa0,param_2,param_1), (uVar4 & 1) == 0))
  {
    lVar8 = 0;
    puVar1 = PTR_DAT_04bb2020 + 0x10;
    do {
      local_48 = (char *)(&DAT_05aed960)[lVar8 * 4];
      local_50 = puVar1;
      (**(code **)(*param_2 + 0x18))(param_2);
      (**(code **)(*param_2 + 0x18))(param_2);
      pcVar9 = (char *)param_2[1];
      (**(code **)(local_50 + 0x18))(&local_50);
      if (pcVar9 == local_48) {
LAB_03c53d9c:
        uVar5 = (&DAT_05aed968)[lVar8 * 8];
        uVar2 = (&DAT_05aed970)[lVar8 * 8];
        uVar6 = (&DAT_05aed974)[lVar8 * 4];
        param_1[1] = (&DAT_05aed96c)[lVar8 * 8];
        param_1[2] = uVar2;
        *(undefined8 *)(param_1 + 3) = uVar6;
        goto LAB_03c53db4;
      }
      cVar3 = *(char *)param_2[1];
      if (cVar3 == *local_48) {
        if (cVar3 == '\0') goto LAB_03c53d9c;
        lVar7 = 0x7fffe;
        pcVar9 = (char *)param_2[1];
        while( true ) {
          if (pcVar9[1] != local_48[1]) break;
          if (pcVar9[1] == '\0') goto LAB_03c53d9c;
          if (pcVar9[2] != local_48[2]) break;
          if (pcVar9[2] == '\0') goto LAB_03c53d9c;
          if ((lVar7 == 0) || (cVar3 = pcVar9[3], cVar3 != local_48[3])) break;
          lVar7 = lVar7 + -3;
          local_48 = local_48 + 3;
          pcVar9 = pcVar9 + 3;
          if (cVar3 == '\0') goto LAB_03c53d9c;
        }
      }
      lVar8 = lVar8 + 1;
    } while (lVar8 != 10);
  }
  else {
    uVar5 = *param_1;
LAB_03c53db4:
    *param_1 = uVar5;
  }
  return;
}

