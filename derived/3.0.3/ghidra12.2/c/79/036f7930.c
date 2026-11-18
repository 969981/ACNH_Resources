
bool FUN_036f7930(long param_1,int param_2,int param_3,int *param_4)

{
  short *psVar1;
  long lVar2;
  uint uVar3;
  bool bVar4;
  ulong uVar5;
  char cVar6;
  int iVar7;
  short sVar8;
  ulong uVar9;
  uint *puVar10;
  uint *puVar11;
  int *piVar12;
  
  uVar5 = 0;
  bVar4 = true;
  cVar6 = DAT_05ab9860;
  do {
    if ((int)*(uint *)(param_1 + 0xb20) < 1) {
      if ((((*(long *)(param_1 + 0xa10) != 0) &&
           (puVar10 = *(uint **)(*(long *)(param_1 + 0xa10) + 8), puVar10 != (uint *)0x0)) &&
          ((*(uint *)(param_1 + 0xa28) <= uVar5 ||
           (*(char *)(*(long *)(param_1 + 0xa30) + uVar5) != '\0')))) &&
         (((uVar5 < *puVar10 && (puVar10[1] != 0)) && ((ushort)puVar10[2] != 0)))) {
        iVar7 = 0xc;
        if (*(char *)((long)puVar10 + 10) != '\0') {
          iVar7 = 0x1c;
        }
        puVar10 = (uint *)((ulong)(puVar10[1] * (int)uVar5 + (uint)(ushort)puVar10[2] * 8 + iVar7) +
                          (long)puVar10);
        goto joined_r0x036f7ae4;
      }
    }
    else if (uVar5 < *(uint *)(param_1 + 0xb20)) {
      uVar9 = uVar5 & 0xffffffff;
      if (*(uint *)(param_1 + 0xb10) <= uVar5) {
        uVar9 = 0;
      }
      puVar10 = *(uint **)(*(long *)(param_1 + 0xb18) + uVar9 * 8);
joined_r0x036f7ae4:
      if (puVar10 != (uint *)0x0) {
        puVar11 = (uint *)(ulong)*puVar10;
        if (*puVar10 != 0) {
          do {
            if (cVar6 != '\0') {
              if ((long)DAT_05ab9864 < 0) {
                if (DAT_05ab9864._4_4_ == 0xffffffff) {
                  puVar11 = (uint *)(ulong)*puVar10;
                  if (*puVar10 != 0) goto LAB_036f7a18;
                  puVar11 = (uint *)0x0;
                }
                else {
LAB_036f7aec:
                  puVar11 = (uint *)0x0;
                }
              }
              else {
                puVar11 = (uint *)0x0;
                if ((ushort *)((ulong)DAT_05ab9864._4_4_ + (long)puVar10) != (ushort *)0x0) {
                  puVar11 = (uint *)(ulong)*(ushort *)((ulong)DAT_05ab9864._4_4_ + (long)puVar10);
                }
              }
              goto LAB_036f7af0;
            }
            cVar6 = '\x01';
            DAT_05ab9864 = 0xffffffffffffffff;
            DAT_05ab986c = 0xffffffffffffffff;
            DAT_05ab9860 = '\x01';
            DAT_05ab9874 = 0xffffffffffffffff;
            puVar11 = (uint *)(ulong)*puVar10;
            if (*puVar10 == 0) goto LAB_036f7af0;
LAB_036f7a18:
            if (puVar10 == puVar11) goto LAB_036f7aec;
            lVar2 = 0xc;
            if (*(char *)((long)puVar10 + (10 - (long)puVar11)) != '\0') {
              lVar2 = 0x1c;
            }
            lVar2 = (long)puVar10 + (lVar2 - (long)puVar11);
            if (lVar2 == 0) goto LAB_036f7aec;
            uVar9 = (ulong)*(ushort *)((long)puVar10 + (8 - (long)puVar11));
            DAT_05ab9864 = CONCAT44(0xfffffffe,(int)DAT_05ab9864);
            puVar11 = (uint *)0x0;
            if (uVar9 == 0) goto LAB_036f7af0;
            piVar12 = (int *)(lVar2 + 4);
            while (piVar12[-1] != -0x6cb8e6bc) {
              piVar12 = piVar12 + 2;
              uVar9 = uVar9 - 1;
              if (uVar9 == 0) {
                puVar11 = (uint *)0x0;
                goto LAB_036f7af0;
              }
            }
            iVar7 = 0;
            if (*piVar12 != -1) {
              iVar7 = *piVar12;
            }
            DAT_05ab9864 = CONCAT44(iVar7,(int)DAT_05ab9864);
          } while (*puVar10 != 0);
          puVar11 = (uint *)0x0;
        }
LAB_036f7af0:
        if (param_2 == (short)puVar11) {
          uVar3 = *puVar10;
          if (uVar3 != 0) {
            while( true ) {
              if (cVar6 == '\0') {
                DAT_05ab9864 = 0xffffffffffffffff;
                DAT_05ab986c = 0xffffffffffffffff;
                cVar6 = '\x01';
                DAT_05ab9874 = 0xffffffffffffffff;
                uVar3 = *puVar10;
                DAT_05ab9860 = '\x01';
              }
              else {
                if (-1 < (int)DAT_05ab9864) {
                  psVar1 = (short *)((DAT_05ab9864 & 0xffffffff) + (long)puVar10);
                  sVar8 = 0;
                  if (psVar1 != (short *)0x0) {
                    sVar8 = *psVar1;
                  }
                  goto LAB_036f7bac;
                }
                if ((int)DAT_05ab9864 != -1) break;
              }
              puVar11 = (uint *)(ulong)uVar3;
              if ((puVar11 == (uint *)0x0) || (puVar10 == puVar11)) break;
              lVar2 = 0xc;
              if (*(char *)((long)puVar10 + (10 - (long)puVar11)) != '\0') {
                lVar2 = 0x1c;
              }
              lVar2 = (long)puVar10 + (lVar2 - (long)puVar11);
              if (lVar2 == 0) break;
              uVar9 = (ulong)*(ushort *)((long)puVar10 + (8 - (long)puVar11));
              DAT_05ab9864._4_4_ = (uint)(DAT_05ab9864 >> 0x20);
              DAT_05ab9864 = CONCAT44(DAT_05ab9864._4_4_,0xfffffffe);
              if (uVar9 == 0) break;
              piVar12 = (int *)(lVar2 + 4);
              while (piVar12[-1] != 0x3198c2ac) {
                piVar12 = piVar12 + 2;
                uVar9 = uVar9 - 1;
                if (uVar9 == 0) goto LAB_036f7ba8;
              }
              iVar7 = 0;
              if (*piVar12 != -1) {
                iVar7 = *piVar12;
              }
              DAT_05ab9864 = CONCAT44(DAT_05ab9864._4_4_,iVar7);
              uVar3 = *puVar10;
              if (uVar3 == 0) break;
            }
          }
LAB_036f7ba8:
          sVar8 = 0;
LAB_036f7bac:
          if (param_3 == sVar8) {
            *param_4 = (int)uVar5;
            return bVar4;
          }
        }
      }
    }
    bVar4 = uVar5 < 0x3b;
    uVar5 = uVar5 + 1;
    if (uVar5 == 0x3c) {
      return bVar4;
    }
  } while( true );
}

