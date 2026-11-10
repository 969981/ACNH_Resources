
void FUN_00362120(long param_1,undefined8 param_2)

{
  long lVar1;
  char cVar2;
  undefined *puVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  char *pcVar8;
  size_t sVar9;
  undefined8 uVar10;
  long lVar11;
  char *pcVar12;
  char *pcVar13;
  long lVar14;
  char local_200 [12];
  undefined8 local_1f4;
  undefined5 local_1ec;
  undefined3 uStack_1e7;
  undefined5 uStack_1e4;
  char local_174 [256];
  undefined4 local_74;
  undefined4 uStack_70;
  undefined2 local_6c;
  
  local_174[0] = '\0';
  lVar1 = param_1 + 8;
  local_74 = 0;
  uStack_70 = 0x68736762;
  local_6c = 0x2f;
  iVar5 = FUN_00364350(lVar1,&local_74,local_174,1);
  puVar3 = PTR_PTR_04bd0740;
  if (iVar5 != 0) {
    do {
      pcVar8 = strstr(local_174,(char *)&uStack_70);
      if (pcVar8 != (char *)0x0) {
        sVar9 = strlen((char *)&uStack_70);
        lVar11 = 0;
        pcVar8 = pcVar8 + sVar9;
        cVar2 = *pcVar8;
        while (cVar2 != '\0') {
          local_200[lVar11 + 0xc] = cVar2;
          if (pcVar8[lVar11 + 1] == '\0') {
            pcVar8 = pcVar8 + lVar11 + 1;
            pcVar13 = local_200 + lVar11 + 0xd;
            goto LAB_00362290;
          }
          local_200[lVar11 + 0xd] = pcVar8[lVar11 + 1];
          if (pcVar8[lVar11 + 2] == '\0') {
            pcVar8 = pcVar8 + lVar11 + 2;
            pcVar13 = local_200 + lVar11 + 0xe;
            goto LAB_00362290;
          }
          local_200[lVar11 + 0xe] = pcVar8[lVar11 + 2];
          if (((int)lVar11 == 0x7c) || (pcVar8[lVar11 + 3] == '\0')) {
            pcVar8 = pcVar8 + lVar11 + 3;
            pcVar13 = local_200 + lVar11 + 0xf;
            goto LAB_00362290;
          }
          local_200[lVar11 + 0xf] = pcVar8[lVar11 + 3];
          lVar11 = lVar11 + 4;
          cVar2 = pcVar8[lVar11];
        }
        pcVar8 = pcVar8 + lVar11;
        pcVar13 = local_200 + lVar11 + 0xc;
LAB_00362290:
        *pcVar13 = '\0';
        do {
          cVar2 = *pcVar8;
          pcVar8 = pcVar8 + 1;
        } while (cVar2 != '\0');
        pcVar13 = *(char **)puVar3;
        pcVar8 = strstr((char *)&local_1f4,pcVar13);
        if (pcVar8 != (char *)0x0) {
          sVar9 = strlen(pcVar13);
          pcVar8 = pcVar8 + sVar9;
          pcVar13 = strstr(pcVar8,*(char **)PTR_PTR_04bd0748);
          if (pcVar13 != (char *)0x0) {
            local_200[0] = '\0';
            local_200[1] = '\0';
            local_200[2] = '\0';
            local_200[3] = '\0';
            local_200[4] = '\0';
            local_200[5] = '\0';
            local_200[6] = '\0';
            local_200[7] = '\0';
            if ((local_1f4 != 0x7669686372415f5f ||
                CONCAT35(uStack_1e7,local_1ec) != 0x2e72656461685365) ||
                CONCAT53(uStack_1e4,uStack_1e7) != 0x68736e622e7265) {
              pcVar8 = pcVar8 + 1;
            }
            iVar6 = (int)pcVar13;
            iVar5 = (int)pcVar8;
            if ((uint)(iVar6 - iVar5) < 0x7fffffff) {
              if (iVar6 == iVar5) {
                pcVar13 = local_200;
              }
              else {
                iVar5 = iVar5 - iVar6;
                pcVar12 = local_200;
                do {
                  cVar2 = *pcVar8;
                  pcVar13 = pcVar12;
                  if (cVar2 == '\0') break;
                  pcVar8 = pcVar8 + 1;
                  bVar4 = iVar5 != -1;
                  iVar5 = iVar5 + 1;
                  pcVar13 = pcVar12 + 1;
                  *pcVar12 = cVar2;
                  pcVar12 = pcVar13;
                } while (bVar4);
              }
              *pcVar13 = '\0';
            }
            do {
              cVar2 = *pcVar8;
              pcVar8 = pcVar8 + 1;
            } while (cVar2 != '\0');
            iVar5 = FUN_003640a0(lVar1,local_174);
            if (iVar5 < 0) {
              lVar11 = 0;
            }
            else {
              lVar11 = FUN_00364024(lVar1,0,iVar5);
            }
            lVar14 = *(long *)(param_1 + 200);
            if ((local_1f4 == 0x7669686372415f5f &&
                CONCAT35(uStack_1e7,local_1ec) == 0x2e72656461685365) &&
                CONCAT53(uStack_1e4,uStack_1e7) == 0x68736e622e7265) {
              strcpy((char *)&local_1f4,(char *)&uStack_70);
              sVar9 = strlen((char *)&local_1f4);
              strncat((char *)&local_1f4,"__ArchiveShader.bushvt",0x7f - sVar9);
              iVar5 = FUN_003640a0(lVar1,&local_1f4);
              if (iVar5 < 0) {
                uVar10 = 0;
              }
              else {
                uVar10 = FUN_00364024(lVar1,0,iVar5);
              }
              pcVar8 = "__arcsh";
            }
            else {
              uVar10 = 0;
              pcVar8 = local_200;
            }
            uVar7 = FUN_00385b00(param_1 + 0xa0,pcVar8,1);
            thunk_FUN_00385d30(uVar7,param_2,lVar11,uVar10,*(undefined8 *)(param_1 + 0xd0),
                               (lVar11 - lVar14) + *(long *)(param_1 + 0xd8),
                               *(undefined8 *)(param_1 + 0xe0),3);
          }
        }
      }
      iVar5 = FUN_00364350(lVar1,&local_74,local_174,1);
    } while (iVar5 != 0);
  }
  return;
}

