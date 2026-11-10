
ulong FUN_00159360(long param_1,uint param_2,int param_3)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  ulong uVar6;
  ushort *puVar7;
  ushort uVar8;
  ulong uVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  
  if ((param_1 != 0) && (uVar9 = (ulong)param_2, param_2 != 0)) {
    lVar5 = 0;
    do {
      if (*(int *)(param_1 + lVar5) != -1) {
        if (param_3 < 1) {
          iVar3 = 0;
          auVar10 = ZEXT816(0);
        }
        else {
          auVar10 = FUN_00147178();
          iVar3 = param_3;
        }
        iVar4 = 0;
        if (param_3 != 0) {
          iVar4 = iVar3;
        }
        if (param_3 < 0) {
          iVar4 = -1;
        }
        uVar2 = nnsocketPoll(param_1,uVar9,iVar4);
        do {
          if (uVar2 != 0xffffffff) {
            uVar9 = (ulong)uVar2;
            if ((int)uVar2 < 0) {
              uVar9 = 0xffffffff;
            }
            else if (uVar2 != 0) {
              puVar7 = (ushort *)(param_1 + 6);
              if (param_2 < 2) {
                param_2 = 1;
              }
              uVar6 = (ulong)param_2;
              do {
                if ((*(int *)(puVar7 + -3) != -1) && (uVar1 = *puVar7, (uVar1 & 0x18) != 0)) {
                  uVar8 = uVar1 >> 4 & 1;
                  if ((uVar1 & 8) != 0) {
                    uVar8 = 5;
                  }
                  *puVar7 = uVar8 | uVar1;
                }
                puVar7 = puVar7 + 4;
                uVar6 = uVar6 - 1;
              } while (uVar6 != 0);
            }
            return uVar9;
          }
          iVar3 = nnsocketGetLastErrno();
          if (iVar3 != 0) {
            if (iVar3 != 4) {
              return 0xffffffff;
            }
            if (DAT_04c57cb8 != 0) {
              return 0xffffffff;
            }
          }
          if (0 < param_3) {
            auVar11 = FUN_00147178();
            iVar4 = FUN_001471a8(auVar11._0_8_,auVar11._8_8_,auVar10._0_8_,auVar10._8_8_);
            iVar4 = param_3 - iVar4;
            if (iVar4 < 1) {
              return 0;
            }
          }
          iVar3 = 0;
          if (param_3 != 0) {
            iVar3 = iVar4;
          }
          if (param_3 < 0) {
            iVar3 = -1;
          }
          uVar2 = nnsocketPoll(param_1,uVar9,iVar3);
          iVar4 = iVar3;
        } while( true );
      }
      lVar5 = lVar5 + 8;
    } while (uVar9 * 8 != lVar5);
  }
  uVar9 = FUN_0015905c(param_3);
  return uVar9;
}

