
int FUN_01df8c90(void)

{
  long *plVar1;
  int iVar2;
  uint uVar3;
  byte *pbVar4;
  ushort uVar5;
  byte bVar6;
  undefined *puVar7;
  char cVar8;
  ulong uVar9;
  ulong uVar10;
  long *plVar11;
  long lVar12;
  byte *pbVar13;
  uint uVar14;
  long local_70;
  ulong uStack_68;
  byte local_5c [12];
  
  bVar6 = *(byte *)(*DAT_0537d558 + 0x473);
  if ((long)(char)bVar6 != 0xffffffffffffffff) {
    pbVar13 = (byte *)(*DAT_0537d558 + 0x48);
    pbVar4 = pbVar13 + ((long)(char)bVar6 & 0xffffffffU) * 0x80;
    if (7 < bVar6) {
      pbVar4 = pbVar13;
    }
    if ((((*pbVar4 >> 3 & 1) != 0) && (lVar12 = *(long *)(DAT_05358908 + 0xf88), lVar12 != 0)) &&
       (plVar11 = *(long **)(DAT_05ae6a60 + 0x68), plVar11 != (long *)0x0)) {
      FUN_02507c6c(local_5c,7,1,0,0);
      puVar7 = PTR_DAT_04bb5038;
      if (local_5c[0] < 8) {
        uVar14 = 0xffffffff;
        do {
          plVar1 = (long *)(lVar12 + 0x18 + (ulong)local_5c[0] * 0x20);
          if (*plVar1 != 0) {
            uStack_68 = (ulong)*(byte *)(plVar1 + 1);
            local_70 = *plVar1;
            uVar9 = (**(code **)(*plVar11 + 0x100))(plVar11,&local_70);
            if ((uVar9 & 1) != 0) {
              local_70 = *plVar1;
              uStack_68 = (ulong)*(byte *)(plVar1 + 1);
              cVar8 = (**(code **)(*plVar11 + 0x108))(plVar11,&local_70);
              if (cVar8 != -1) {
                uVar5 = *(ushort *)
                         (*(long *)(*(long *)(*(long *)(DAT_05ae6a60 + 0x58) + 0x10) +
                                   (long)*(int *)(*(long *)(DAT_05ae6a60 + 0x58) + 0x28) * 8) +
                          (long)cVar8 * 2 + 0x228);
                uVar3 = (uint)uVar5;
                if ((int)(uint)uVar5 <= (int)uVar14 || uVar5 == 0) {
                  uVar3 = uVar14;
                }
                uVar14 = uVar3;
              }
            }
          }
          bVar6 = local_5c[0];
          uVar9 = (ulong)local_5c[0];
          if ((7 < local_5c[0]) || (uVar9 + 1 == 8)) break;
          pbVar13 = puVar7 + uVar9 + 1;
          uVar10 = FUN_02507924(local_5c,pbVar13);
          if ((uVar10 & 1) == 0) {
            if (uVar9 + 2 == 8) break;
            pbVar13 = puVar7 + uVar9 + 2;
            uVar10 = FUN_02507924(local_5c,pbVar13);
            if ((uVar10 & 1) == 0) {
              if (uVar9 + 3 == 8) break;
              pbVar13 = puVar7 + uVar9 + 3;
              uVar10 = FUN_02507924(local_5c,pbVar13);
              if ((uVar10 & 1) == 0) {
                if (uVar9 + 4 == 8) break;
                pbVar13 = puVar7 + uVar9 + 4;
                uVar10 = FUN_02507924(local_5c,pbVar13);
                if ((uVar10 & 1) == 0) {
                  if (uVar9 + 5 == 8) break;
                  pbVar13 = puVar7 + uVar9 + 5;
                  uVar10 = FUN_02507924(local_5c,pbVar13);
                  if ((uVar10 & 1) == 0) {
                    if (uVar9 + 6 == 8) break;
                    pbVar13 = puVar7 + uVar9 + 6;
                    uVar10 = FUN_02507924(local_5c,pbVar13);
                    if ((uVar10 & 1) == 0) {
                      if (uVar9 + 7 == 8) break;
                      pbVar13 = puVar7 + uVar9 + 7;
                      uVar10 = FUN_02507924(local_5c,pbVar13);
                      if ((uVar10 & 1) == 0) {
                        if (bVar6 == 0) break;
                        pbVar13 = puVar7 + uVar9 + 8;
                        FUN_02507924(local_5c,pbVar13);
                      }
                    }
                  }
                }
              }
            }
          }
          local_5c[0] = *pbVar13;
        } while (local_5c[0] < 8);
        iVar2 = (int)uVar14 >> 1;
        if ((int)uVar14 < 1) {
          iVar2 = -1;
        }
        return iVar2;
      }
    }
  }
  return -1;
}

