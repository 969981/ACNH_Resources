
long FUN_00385c30(long param_1,char *param_2)

{
  bool bVar1;
  bool bVar2;
  long lVar3;
  
  lVar3 = param_1;
  do {
    lVar3 = *(long *)(lVar3 + 8);
    if (lVar3 == param_1) {
      return 0;
    }
    if (*param_2 == *(char *)(lVar3 + 0x10)) {
      if (*param_2 == '\0') goto LAB_00385d00;
      if (param_2[1] != *(char *)(lVar3 + 0x11)) goto LAB_00385cf0;
      if (param_2[1] == '\0') goto LAB_00385d00;
      if (param_2[2] != *(char *)(lVar3 + 0x12)) goto LAB_00385cf0;
      if (param_2[2] == '\0') goto LAB_00385d00;
      if (param_2[3] != *(char *)(lVar3 + 0x13)) goto LAB_00385cf0;
      if (param_2[3] == '\0') goto LAB_00385d00;
      if (param_2[4] != *(char *)(lVar3 + 0x14)) goto LAB_00385cf0;
      if (param_2[4] == '\0') goto LAB_00385d00;
      if (param_2[5] != *(char *)(lVar3 + 0x15)) goto LAB_00385cf0;
      if (param_2[5] == '\0') {
LAB_00385d00:
        return lVar3 + 0x18;
      }
      if (param_2[6] != *(char *)(lVar3 + 0x16)) goto LAB_00385cf0;
      if (param_2[6] == '\0') goto LAB_00385d00;
      bVar2 = param_2[7] == *(char *)(lVar3 + 0x17);
      bVar1 = bVar2 && param_2[7] != '\0';
    }
    else {
LAB_00385cf0:
      bVar1 = false;
      bVar2 = false;
    }
    if ((bVar1) || (bVar2)) goto LAB_00385d00;
  } while( true );
}

