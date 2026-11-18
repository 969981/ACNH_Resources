
int FUN_03466f70(long *param_1)

{
  undefined *puVar1;
  undefined **ppuVar2;
  long lVar3;
  char cVar4;
  long lVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  char *pcVar10;
  undefined *local_80;
  char *local_78;
  undefined **local_70;
  char *local_68;
  int local_60;
  char local_5c [7];
  undefined1 local_55;
  
  (**(code **)(*param_1 + 0x18))();
  lVar5 = 0;
  do {
    if (*(char *)(param_1[1] + lVar5) == '\0') {
LAB_03466fe0:
      if ((int)lVar5 == 5) {
LAB_03466fe8:
        local_55 = 0;
        local_60 = 8;
        local_5c[0] = '\0';
        local_70 = &PTR_LAB_04908da0;
        local_68 = local_5c;
        (**(code **)(*param_1 + 0x18))(param_1);
        if (local_5c != (char *)param_1[1]) {
          iVar6 = 3;
          if (local_60 < 4) {
            iVar6 = local_60 + -1;
          }
          memcpy(local_5c,(char *)param_1[1],(long)iVar6);
          local_5c[iVar6] = '\0';
        }
        puVar1 = PTR_DAT_04bb2020 + 0x10;
        iVar6 = 0x3f;
        do {
          local_78 = "";
          if (iVar6 - 0x3fU < 0x23) {
            local_78 = (&PTR_DAT_04b2b3b0)[iVar6 - 0x3fU];
          }
          local_80 = puVar1;
          (*(code *)local_70[3])(&local_70);
          (*(code *)local_70[3])(&local_70);
          pcVar10 = local_68;
          (**(code **)(local_80 + 0x18))(&local_80);
          if (pcVar10 == local_78) {
            return iVar6;
          }
          if (*local_68 == *local_78) {
            if (*local_68 == '\0') {
              return iVar6;
            }
            lVar5 = 0x7fffe;
            pcVar10 = local_68;
            while( true ) {
              if (pcVar10[1] != local_78[1]) break;
              if (pcVar10[1] == '\0') {
                return iVar6;
              }
              if (pcVar10[2] != local_78[2]) break;
              if (pcVar10[2] == '\0') {
                return iVar6;
              }
              if ((lVar5 == 0) || (cVar4 = pcVar10[3], cVar4 != local_78[3])) break;
              lVar5 = lVar5 + -3;
              local_78 = local_78 + 3;
              pcVar10 = pcVar10 + 3;
              if (cVar4 == '\0') {
                return iVar6;
              }
            }
          }
          iVar8 = 0x62;
          if (iVar6 < 0x62) {
            iVar8 = iVar6 + 1;
          }
          iVar6 = iVar8;
          if (iVar8 == 0x62) {
            return 0xffff;
          }
        } while( true );
      }
      break;
    }
    lVar3 = param_1[1] + lVar5;
    if (*(char *)(lVar3 + 1) == '\0') {
      lVar5 = lVar5 + 1;
      goto LAB_03466fe0;
    }
    if (*(char *)(lVar3 + 2) == '\0') {
      if ((int)lVar5 == 3) goto LAB_03466fe8;
      break;
    }
    lVar5 = lVar5 + 3;
  } while (lVar5 != 0x80001);
  ppuVar2 = (undefined **)(PTR_DAT_04bb2020 + 0x10);
  uVar7 = 0;
  while( true ) {
    local_68 = "";
    local_80 = (undefined *)CONCAT44(local_80._4_4_,uVar7);
    if (uVar7 < 0x3f) {
      local_68 = (char *)(&DAT_04b2b5d0)[uVar7];
    }
    local_70 = ppuVar2;
    (**(code **)(*param_1 + 0x18))(param_1);
    (**(code **)(*param_1 + 0x18))(param_1);
    pcVar10 = (char *)param_1[1];
    (*(code *)local_70[3])(&local_70);
    if (pcVar10 == local_68) break;
    cVar4 = *(char *)param_1[1];
    if (cVar4 == *local_68) {
      if (cVar4 == '\0') break;
      lVar5 = 0x7fffe;
      pcVar10 = (char *)param_1[1];
      while( true ) {
        if (pcVar10[1] != local_68[1]) break;
        if (pcVar10[1] == '\0') goto LAB_0346727c;
        if (pcVar10[2] != local_68[2]) break;
        if (pcVar10[2] == '\0') goto LAB_0346727c;
        if ((lVar5 == 0) || (cVar4 = pcVar10[3], cVar4 != local_68[3])) break;
        lVar5 = lVar5 + -3;
        local_68 = local_68 + 3;
        pcVar10 = pcVar10 + 3;
        if (cVar4 == '\0') goto LAB_0346727c;
      }
    }
    uVar9 = 0x3f;
    if ((int)uVar7 < 0x3f) {
      uVar9 = uVar7 + 1;
    }
    uVar7 = uVar9;
    if (uVar9 == 0x3f) {
      return 0xffff;
    }
  }
LAB_0346727c:
  return (int)local_80;
}

