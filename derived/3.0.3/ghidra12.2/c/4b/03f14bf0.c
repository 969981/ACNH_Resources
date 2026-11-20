
void FUN_03f14bf0(long *param_1,int *param_2)

{
  uint *puVar1;
  char *pcVar2;
  uint uVar3;
  char cVar4;
  bool bVar5;
  ulong uVar6;
  short *psVar7;
  uint uVar8;
  short *psVar9;
  long lVar10;
  char *pcVar11;
  long lVar12;
  uint uVar13;
  undefined1 auVar14 [16];
  undefined1 local_88 [16];
  undefined8 local_78;
  uint *puStack_70;
  int local_68;
  char local_64;
  
  if (*param_1 == 0) {
    return;
  }
  local_78 = (short *)((ulong)local_78 & 0xffffff0000000000);
  uVar6 = FUN_03b36b40(param_1,&local_78,&DAT_040fe5ab);
  if (((uVar6 & 1) != 0) && (local_78._4_1_ == -0x60)) {
    psVar9 = (short *)*param_1;
    uVar8 = *(uint *)(psVar9 + 4);
    uVar13 = (uVar8 & 0xff00ff00) >> 8 | (uVar8 & 0xff00ff) << 8;
    uVar13 = uVar13 >> 0x10 | uVar13 << 0x10;
    if (*psVar9 != 0x5942) {
      uVar13 = uVar8;
    }
    if (uVar13 != 0) {
      lVar10 = (long)(int)uVar13;
      uVar8 = *(uint *)((long)psVar9 + (long)(int)local_78 * 4 + lVar10 + 4);
      uVar13 = (uVar8 & 0xff00ff00) >> 8 | (uVar8 & 0xff00ff) << 8;
      uVar13 = uVar13 >> 0x10 | uVar13 << 0x10;
      if (*psVar9 != 0x5942) {
        uVar13 = uVar8;
      }
      pcVar11 = (char *)((long)psVar9 + (ulong)uVar13 + lVar10);
      if (pcVar11 != "Layer") {
        uVar6 = 0;
        bVar5 = true;
        do {
          if (pcVar11[uVar6] != "Layer"[uVar6]) break;
          if (pcVar11[uVar6] == '\0') {
            if ((bool)(pcVar11 == "Folder" | bVar5)) goto LAB_03f14d54;
            goto LAB_03f14d04;
          }
          bVar5 = uVar6 < 0x80000;
          uVar6 = uVar6 + 1;
        } while (uVar6 != 0x80001);
        if (pcVar11 != "Folder") {
LAB_03f14d04:
          if (*pcVar11 != 'F') goto LAB_03f14d60;
          lVar12 = 0;
          do {
            if ((lVar12 == 0x80000) ||
               (cVar4 = *(char *)((long)psVar9 + lVar12 + lVar10 + (ulong)uVar13 + 1),
               cVar4 != "Folder"[lVar12 + 1])) goto LAB_03f14d60;
            lVar12 = lVar12 + 1;
          } while (cVar4 != '\0');
        }
      }
LAB_03f14d54:
      *param_2 = *param_2 + 1;
    }
  }
LAB_03f14d60:
  local_78 = (short *)((ulong)local_78 & 0xffffff0000000000);
  uVar6 = FUN_03b36b40(param_1,&local_78,"Underlayer");
  if ((uVar6 & 1) != 0) {
    if (local_78._4_1_ - 0xc0 < 2) {
      psVar9 = (short *)*param_1;
      puVar1 = (uint *)((long)psVar9 + ((ulong)local_78 & 0xffffffff));
    }
    else {
      if (local_78._4_1_ != 0xff) {
        return;
      }
      psVar9 = (short *)*param_1;
      puStack_70 = (uint *)0x0;
      puVar1 = puStack_70;
    }
    if (psVar9 != (short *)0x0) {
      uVar13 = 0;
      local_78 = psVar9;
      puStack_70 = puVar1;
      do {
        if (puVar1 == (uint *)0x0) {
          uVar8 = 0;
        }
        else {
          if ((*puVar1 & 0xfe) != 0xc0) {
            return;
          }
          uVar8 = *puVar1 >> 8;
          if (*psVar9 == 0x5942) {
            uVar8 = uVar8 & 0xff00 | *puVar1 >> 0x18 | (uVar8 & 0xff) << 0x10;
          }
        }
        if (uVar8 <= uVar13) {
          return;
        }
        auVar14 = FUN_03b36a34(&local_78,uVar13);
        psVar7 = auVar14._0_8_;
        local_88 = auVar14;
        if (psVar7 != (short *)0x0) {
          local_68 = 0;
          local_64 = '\0';
          uVar6 = FUN_03b36b40(local_88,&local_68,&DAT_040fe5ab);
          if (((uVar6 & 1) != 0) && (local_64 == -0x60)) {
            uVar3 = *(uint *)(psVar7 + 4);
            uVar8 = (uVar3 & 0xff00ff00) >> 8 | (uVar3 & 0xff00ff) << 8;
            uVar8 = uVar8 >> 0x10 | uVar8 << 0x10;
            if (*psVar7 != 0x5942) {
              uVar8 = uVar3;
            }
            if (uVar8 != 0) {
              lVar10 = (long)(int)uVar8;
              uVar3 = *(uint *)((long)psVar7 + (long)local_68 * 4 + lVar10 + 4);
              uVar8 = (uVar3 & 0xff00ff00) >> 8 | (uVar3 & 0xff00ff) << 8;
              uVar8 = uVar8 >> 0x10 | uVar8 << 0x10;
              if (*psVar7 != 0x5942) {
                uVar8 = uVar3;
              }
              pcVar11 = (char *)((long)psVar7 + (ulong)uVar8 + lVar10);
              if (pcVar11 != "Player") {
                uVar6 = 0;
                bVar5 = true;
                pcVar2 = (char *)((long)psVar7 + lVar10 + (ulong)uVar8);
                do {
                  if (pcVar2[uVar6] != "Player"[uVar6]) break;
                  if (pcVar2[uVar6] == '\0') {
LAB_03f14f64:
                    if ((pcVar11 == "LayerSet") || (bVar5)) goto LAB_03f14df4;
                    goto LAB_03f14f78;
                  }
                  if (pcVar2[uVar6 + 1] != "Player"[uVar6 + 1]) break;
                  if (pcVar2[uVar6 + 1] == '\0') {
LAB_03f14f60:
                    bVar5 = true;
                    goto LAB_03f14f64;
                  }
                  if (pcVar2[uVar6 + 2] != "Player"[uVar6 + 2]) break;
                  if (pcVar2[uVar6 + 2] == '\0') goto LAB_03f14f60;
                  bVar5 = uVar6 < 0x7fffe;
                  uVar6 = uVar6 + 3;
                } while (uVar6 != 0x80001);
                if (pcVar11 != "LayerSet") {
LAB_03f14f78:
                  if (*pcVar11 == 'L') {
                    lVar10 = 0x7fffe;
                    pcVar11 = "LayerSet";
                    do {
                      pcVar11 = pcVar11 + 3;
                      if (pcVar2[1] != pcVar11[-2]) goto LAB_03f14de8;
                      if (pcVar2[1] == '\0') break;
                      if (pcVar2[2] != pcVar11[-1]) goto LAB_03f14de8;
                      if (pcVar2[2] == '\0') break;
                      if ((lVar10 == 0) || (cVar4 = pcVar2[3], cVar4 != *pcVar11))
                      goto LAB_03f14de8;
                      lVar10 = lVar10 + -3;
                      pcVar2 = pcVar2 + 3;
                    } while (cVar4 != '\0');
                  }
                  else {
LAB_03f14de8:
                    FUN_03f14bf0(local_88,param_2);
                  }
                }
              }
            }
          }
        }
LAB_03f14df4:
        uVar13 = uVar13 + 1;
      } while( true );
    }
  }
  return;
}

