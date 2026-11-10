
void FUN_00190890(long *param_1,long *param_2,long param_3,ulong param_4)

{
  byte *pbVar1;
  undefined *puVar2;
  uint uVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  uint *__dest;
  ulong uVar7;
  byte *pbVar8;
  undefined1 *puVar9;
  byte bVar10;
  undefined4 uVar11;
  long lVar12;
  byte *pbVar13;
  uint *puVar14;
  long *plVar15;
  ulong uVar16;
  void *__src;
  long *local_88;
  uint local_80;
  byte *local_78;
  long local_70;
  long *plStack_68;
  
  puVar2 = PTR_DAT_04bcba28;
  local_70 = param_2[1];
  local_80 = 0;
  local_78 = (byte *)(*param_2 + 1);
  bVar10 = *local_78;
  plStack_68 = param_2;
  local_88 = param_1;
  do {
    if (bVar10 != 0x5c) goto LAB_00190958;
LAB_001909d8:
    plVar15 = local_88;
    bVar10 = (&DAT_04109384)[local_78[1]];
    if (bVar10 != 0) {
      local_78 = local_78 + 2;
      pbVar8 = (byte *)local_88[3];
      if (pbVar8 + 1 <= (byte *)local_88[4]) goto LAB_00190930;
      FUN_0018f1a8(local_88,1);
      do {
        pbVar8 = (byte *)plVar15[3];
LAB_00190930:
        do {
          plVar15[3] = (long)(pbVar8 + 1);
          *pbVar8 = bVar10;
          local_80 = local_80 + 1;
          bVar10 = *local_78;
          if (bVar10 == 0x5c) goto LAB_001909d8;
LAB_00190958:
          plVar15 = local_88;
          if (bVar10 == 0x22) {
            local_78 = local_78 + 1;
            puVar9 = (undefined1 *)local_88[3];
            if ((undefined1 *)local_88[4] < puVar9 + 1) {
              FUN_0018f1a8(local_88,1);
              puVar9 = (undefined1 *)plVar15[3];
            }
            uVar3 = local_80;
            plVar15[3] = (long)(puVar9 + 1);
            *puVar9 = 0;
            uVar16 = (ulong)local_80;
            local_80 = local_80 + 1;
            uVar7 = (ulong)local_80;
            if ((int)param_1[6] == 0) {
              __src = (void *)(local_88[3] - uVar7);
              local_88[3] = (long)__src;
              if ((param_4 & 1) == 0) {
                puVar14 = *(uint **)(param_3 + 0x40);
                if (*(uint **)(param_3 + 0x48) < puVar14 + 6) {
                  FUN_00191a28(param_3 + 0x28,1);
                  puVar14 = *(uint **)(param_3 + 0x40);
                }
                uVar6 = *(undefined8 *)(param_3 + 0x18);
                *(uint **)(param_3 + 0x40) = puVar14 + 6;
                puVar14[2] = 0;
                puVar14[3] = 0;
                puVar14[4] = 0;
                puVar14[5] = 0;
                puVar14[0] = 0;
                puVar14[1] = 0;
                if (uVar3 < 0x16) {
                  *(undefined2 *)((long)puVar14 + 0x16) = 0x1c05;
                  *(char *)((long)puVar14 + 0x15) = '\x15' - (char)uVar3;
                  __dest = puVar14;
                }
                else {
                  *puVar14 = uVar3;
                  *(undefined2 *)((long)puVar14 + 0x16) = 0xc05;
                  __dest = (uint *)FUN_00192174(uVar6,uVar7);
                  *(uint **)(puVar14 + 2) = __dest;
                }
                memcpy(__dest,__src,uVar16);
                *(undefined1 *)((long)__dest + uVar16) = 0;
              }
              else {
                uVar7 = FUN_00191ad0(param_3,__src,uVar3,1);
                if ((uVar7 & 1) == 0) {
                  *(undefined4 *)(param_1 + 6) = 0x10;
                  param_1[7] = (long)local_78 - local_70;
                }
              }
            }
            goto LAB_00190bf0;
          }
          if (bVar10 < 0x20) {
            if (bVar10 == 0) {
              uVar11 = 0xb;
            }
            else {
              uVar11 = 10;
            }
            *(undefined4 *)(param_1 + 6) = uVar11;
            param_1[7] = (long)local_78 - local_70;
            goto LAB_00190bf0;
          }
          pbVar1 = local_78 + 1;
          bVar10 = *local_78;
          pbVar8 = (byte *)local_88[3];
          pbVar13 = (byte *)local_88[4];
          local_78 = pbVar1;
        } while (pbVar8 + 1 <= pbVar13);
        lVar12 = local_88[2];
        if (lVar12 == 0) {
          if (*local_88 == 0) {
            if (DAT_04c57ea0 == (code *)0x0) {
              puVar5 = malloc(0x18);
            }
            else {
              puVar5 = (undefined8 *)(*DAT_04c57ea0)(0x18);
            }
            *puVar5 = *(undefined8 *)puVar2;
            lVar12 = plVar15[2];
            pbVar8 = (byte *)plVar15[3];
            pbVar13 = (byte *)plVar15[5];
            *plVar15 = (long)(puVar5 + 2);
            plVar15[1] = (long)(puVar5 + 2);
          }
          else {
            pbVar13 = (byte *)local_88[5];
            lVar12 = 0;
          }
        }
        else {
          pbVar13 = pbVar13 + (((ulong)(pbVar13 + (1 - lVar12)) >> 1) - lVar12);
        }
        if (pbVar13 <= pbVar8 + (1 - lVar12)) {
          pbVar13 = pbVar8 + (1 - lVar12);
        }
        FUN_0018f24c(plVar15,pbVar13);
      } while( true );
    }
    lVar12 = (long)local_78 - local_70;
    if (local_78[1] != 0x75) {
      uVar11 = 10;
      local_78 = local_78 + 1;
LAB_00190c50:
      *(undefined4 *)(param_1 + 6) = uVar11;
      param_1[7] = lVar12;
LAB_00190bf0:
      *plStack_68 = (long)local_78;
      plStack_68[1] = local_70;
      return;
    }
    local_78 = local_78 + 2;
    uVar7 = FUN_00191ccc(param_1,&local_78,lVar12);
    if ((int)param_1[6] != 0) goto LAB_00190bf0;
    uVar16 = uVar7 & 0xffffffff;
    if (((uint)(uVar7 >> 10) & 0x3fffff) == 0x36) {
      pbVar8 = local_78;
      if ((*local_78 == 0x5c) && (pbVar8 = local_78 + 1, local_78[1] == 0x75)) {
        local_78 = local_78 + 2;
        iVar4 = FUN_00191ccc(param_1,&local_78,lVar12);
        if ((int)param_1[6] != 0) goto LAB_00190bf0;
        pbVar8 = local_78;
        if (0xfffffbff < iVar4 - 0xe000U) {
          uVar16 = (ulong)((iVar4 - 0xdc00U | (int)uVar7 * 0x400 + 0xfca00000U) + 0x10000);
          goto LAB_00190a58;
        }
      }
      local_78 = pbVar8;
      uVar11 = 9;
      goto LAB_00190c50;
    }
LAB_00190a58:
    FUN_00191e98(&local_88,uVar16);
    bVar10 = *local_78;
  } while( true );
}

