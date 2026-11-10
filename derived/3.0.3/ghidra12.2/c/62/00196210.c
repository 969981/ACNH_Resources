
void FUN_00196210(long param_1,void *param_2,ulong param_3)

{
  uint uVar1;
  char cVar2;
  byte bVar3;
  uint uVar4;
  char *pcVar5;
  byte *pbVar6;
  long lVar7;
  uint uVar8;
  long lVar9;
  int iVar10;
  ulong __n;
  byte bVar11;
  ulong uVar12;
  
  lVar7 = *(long *)(param_1 + 0x18);
  if (*(ulong *)(param_1 + 0x28) < param_3 + lVar7 * 8 + (ulong)(7 - *(int *)(param_1 + 0x20))) {
    *(undefined1 *)(param_1 + 8) = 1;
  }
  else {
    if (*(int *)(param_1 + 0x20) == 7) {
      lVar9 = *(long *)(param_1 + 0x10);
      __n = param_3 >> 3;
      if (*(ulong *)(lVar9 + 0x18) < lVar7 + __n) {
                    /* WARNING: Subroutine does not return */
        FUN_0018786c("C:/home/ws/Master/Pack/7923402a/OnlineCore/src/Core/Buffer.cpp",0xe8,
                     0xe0000019,0);
      }
      memcpy(param_2,(void *)(*(long *)(lVar9 + 0x10) + *(long *)(lVar9 + 0x28) + lVar7),__n);
      *(ulong *)(param_1 + 0x18) = *(long *)(param_1 + 0x18) + __n;
    }
    else if (param_3 < 8) {
      __n = 0;
    }
    else {
      __n = 0;
      uVar12 = 8;
      do {
        while( true ) {
          iVar10 = *(int *)(param_1 + 0x20);
          uVar1 = 7 - iVar10;
          if ((ulong)uVar1 + lVar7 * 8 + 8 <= *(ulong *)(param_1 + 0x28)) break;
          *(undefined1 *)(param_1 + 8) = 1;
          uVar12 = uVar12 + 8;
          __n = __n + 1;
          if (param_3 < uVar12) goto LAB_00196380;
        }
        pcVar5 = (char *)FUN_001939b4(*(undefined8 *)(param_1 + 0x10));
        cVar2 = *pcVar5;
        pbVar6 = (byte *)FUN_001939b4(*(undefined8 *)(param_1 + 0x10),*(long *)(param_1 + 0x18) + 1)
        ;
        *(byte *)((long)param_2 + __n) =
             *pbVar6 >> (ulong)(iVar10 + 1U & 0x1f) | cVar2 << (ulong)(uVar1 & 0x1f);
        lVar7 = *(long *)(param_1 + 0x18) + 1;
        *(long *)(param_1 + 0x18) = lVar7;
        uVar12 = uVar12 + 8;
        __n = __n + 1;
      } while (uVar12 <= param_3);
    }
LAB_00196380:
    uVar1 = (uint)param_3 & 7;
    if ((param_3 & 7) != 0) {
      uVar8 = *(uint *)(param_1 + 0x20);
      if (*(ulong *)(param_1 + 0x28) < (ulong)(7 - uVar8) + *(long *)(param_1 + 0x18) * 8 + 1) {
        *(undefined1 *)(param_1 + 8) = 1;
        bVar11 = 0;
      }
      else {
        uVar4 = uVar8 & 0x1f;
        pbVar6 = (byte *)FUN_001939b4(*(undefined8 *)(param_1 + 0x10));
        bVar11 = *pbVar6;
        if (*(int *)(param_1 + 0x20) == 0) {
          *(long *)(param_1 + 0x18) = *(long *)(param_1 + 0x18) + 1;
          uVar8 = 7;
          *(undefined4 *)(param_1 + 0x20) = 7;
        }
        else {
          uVar8 = *(int *)(param_1 + 0x20) - 1;
          *(uint *)(param_1 + 0x20) = uVar8;
        }
        if ((1 << (ulong)uVar4 & (bVar11 ^ 0xff)) == 0) {
          bVar11 = 0x80;
        }
        else {
          bVar11 = 0;
        }
      }
      if (uVar1 != 1) {
        if (*(ulong *)(param_1 + 0x28) < (ulong)(7 - uVar8) + *(long *)(param_1 + 0x18) * 8 + 1) {
          *(undefined1 *)(param_1 + 8) = 1;
        }
        else {
          uVar4 = uVar8 & 0x1f;
          pbVar6 = (byte *)FUN_001939b4(*(undefined8 *)(param_1 + 0x10));
          bVar3 = *pbVar6;
          if (*(int *)(param_1 + 0x20) == 0) {
            *(long *)(param_1 + 0x18) = *(long *)(param_1 + 0x18) + 1;
            uVar8 = 7;
            *(undefined4 *)(param_1 + 0x20) = 7;
          }
          else {
            uVar8 = *(int *)(param_1 + 0x20) - 1;
            *(uint *)(param_1 + 0x20) = uVar8;
          }
          if ((1 << (ulong)uVar4 & (bVar3 ^ 0xff)) == 0) {
            bVar11 = bVar11 | 0x40;
          }
        }
        if (uVar1 != 2) {
          if (*(ulong *)(param_1 + 0x28) < (ulong)(7 - uVar8) + *(long *)(param_1 + 0x18) * 8 + 1) {
            *(undefined1 *)(param_1 + 8) = 1;
          }
          else {
            uVar4 = uVar8 & 0x1f;
            pbVar6 = (byte *)FUN_001939b4(*(undefined8 *)(param_1 + 0x10));
            bVar3 = *pbVar6;
            if (*(int *)(param_1 + 0x20) == 0) {
              *(long *)(param_1 + 0x18) = *(long *)(param_1 + 0x18) + 1;
              uVar8 = 7;
              *(undefined4 *)(param_1 + 0x20) = 7;
            }
            else {
              uVar8 = *(int *)(param_1 + 0x20) - 1;
              *(uint *)(param_1 + 0x20) = uVar8;
            }
            if ((1 << (ulong)uVar4 & (bVar3 ^ 0xff)) == 0) {
              bVar11 = bVar11 | 0x20;
            }
          }
          if (uVar1 != 3) {
            if (*(ulong *)(param_1 + 0x28) < (ulong)(7 - uVar8) + *(long *)(param_1 + 0x18) * 8 + 1)
            {
              *(undefined1 *)(param_1 + 8) = 1;
            }
            else {
              uVar4 = uVar8 & 0x1f;
              pbVar6 = (byte *)FUN_001939b4(*(undefined8 *)(param_1 + 0x10));
              bVar3 = *pbVar6;
              if (*(int *)(param_1 + 0x20) == 0) {
                *(long *)(param_1 + 0x18) = *(long *)(param_1 + 0x18) + 1;
                uVar8 = 7;
                *(undefined4 *)(param_1 + 0x20) = 7;
              }
              else {
                uVar8 = *(int *)(param_1 + 0x20) - 1;
                *(uint *)(param_1 + 0x20) = uVar8;
              }
              if ((1 << (ulong)uVar4 & (bVar3 ^ 0xff)) == 0) {
                bVar11 = bVar11 | 0x10;
              }
            }
            if (uVar1 != 4) {
              if (*(ulong *)(param_1 + 0x28) <
                  (ulong)(7 - uVar8) + *(long *)(param_1 + 0x18) * 8 + 1) {
                *(undefined1 *)(param_1 + 8) = 1;
              }
              else {
                uVar4 = uVar8 & 0x1f;
                pbVar6 = (byte *)FUN_001939b4(*(undefined8 *)(param_1 + 0x10));
                bVar3 = *pbVar6;
                if (*(int *)(param_1 + 0x20) == 0) {
                  *(long *)(param_1 + 0x18) = *(long *)(param_1 + 0x18) + 1;
                  uVar8 = 7;
                  *(undefined4 *)(param_1 + 0x20) = 7;
                }
                else {
                  uVar8 = *(int *)(param_1 + 0x20) - 1;
                  *(uint *)(param_1 + 0x20) = uVar8;
                }
                if ((1 << (ulong)uVar4 & (bVar3 ^ 0xff)) == 0) {
                  bVar11 = bVar11 | 8;
                }
              }
              if (uVar1 != 5) {
                if (*(ulong *)(param_1 + 0x28) <
                    (ulong)(7 - uVar8) + *(long *)(param_1 + 0x18) * 8 + 1) {
                  *(undefined1 *)(param_1 + 8) = 1;
                }
                else {
                  uVar4 = uVar8 & 0x1f;
                  pbVar6 = (byte *)FUN_001939b4(*(undefined8 *)(param_1 + 0x10));
                  bVar3 = *pbVar6;
                  if (*(int *)(param_1 + 0x20) == 0) {
                    *(long *)(param_1 + 0x18) = *(long *)(param_1 + 0x18) + 1;
                    uVar8 = 7;
                    *(undefined4 *)(param_1 + 0x20) = 7;
                  }
                  else {
                    uVar8 = *(int *)(param_1 + 0x20) - 1;
                    *(uint *)(param_1 + 0x20) = uVar8;
                  }
                  if ((1 << (ulong)uVar4 & (bVar3 ^ 0xff)) == 0) {
                    bVar11 = bVar11 | 4;
                  }
                }
                if (uVar1 != 6) {
                  if (*(ulong *)(param_1 + 0x28) <
                      (ulong)(7 - uVar8) + *(long *)(param_1 + 0x18) * 8 + 1) {
                    *(undefined1 *)(param_1 + 8) = 1;
                  }
                  else {
                    pbVar6 = (byte *)FUN_001939b4(*(undefined8 *)(param_1 + 0x10));
                    bVar3 = *pbVar6;
                    iVar10 = *(int *)(param_1 + 0x20);
                    if (iVar10 == 0) {
                      *(long *)(param_1 + 0x18) = *(long *)(param_1 + 0x18) + 1;
                      iVar10 = 8;
                    }
                    *(int *)(param_1 + 0x20) = iVar10 + -1;
                    if ((1 << (ulong)(uVar8 & 0x1f) & (bVar3 ^ 0xff)) == 0) {
                      bVar11 = bVar11 | 2;
                    }
                  }
                }
              }
            }
          }
        }
      }
      *(byte *)((long)param_2 + __n) = bVar11;
      return;
    }
  }
  return;
}

