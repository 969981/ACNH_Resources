
int FUN_00157f38(long *param_1,int param_2,undefined1 *param_3)

{
  undefined4 *puVar1;
  uint uVar2;
  bool bVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  ulong uVar9;
  undefined8 uVar10;
  long *plVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  undefined1 auStack_130 [128];
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined6 uStack_90;
  undefined2 local_8a;
  undefined6 uStack_88;
  undefined1 local_80 [16];
  int local_6c [3];
  
  lVar12 = *param_1;
  *param_3 = 0;
  local_6c[0] = 0;
  if (*(char *)((long)param_1 + (long)param_2 + 0x41a) == '\0') {
    local_80 = FUN_00147178();
    uVar5 = FUN_00157b2c(lVar12,local_80,1);
    if ((int)uVar5 < 0) {
      FUN_0014d5f8(lVar12,"Connection time-out");
      iVar8 = 0x1c;
    }
    else {
      lVar13 = 0;
      iVar8 = 0;
      bVar4 = true;
      do {
        bVar3 = bVar4;
        iVar7 = *(int *)((long)param_1 + lVar13 * 4 + 0x260);
        if (iVar7 != -1) {
          uVar2 = (uint)lVar13 ^ 1;
          puVar1 = (undefined4 *)((long)param_1 + lVar13 * 4 + 0x260);
          uVar6 = FUN_00159114(0xffffffff,0xffffffff,iVar7,0);
          if (uVar6 == 2) {
LAB_001580b4:
            uVar9 = FUN_001583cc(*puVar1,local_6c);
            if ((uVar9 & 1) != 0) {
              *(undefined4 *)((long)param_1 + (long)param_2 * 4 + 600) = *puVar1;
              *puVar1 = 0xffffffff;
              param_1[0xe] = param_1[lVar13 + 0xf];
              if (*(int *)((long)param_1 + (ulong)uVar2 * 4 + 0x260) != -1) {
                FUN_00158430(param_1);
                *(undefined4 *)((long)param_1 + (ulong)uVar2 * 4 + 0x260) = 0xffffffff;
              }
              iVar8 = FUN_0014fb94(param_1,param_2);
              if (iVar8 != 0) {
                return iVar8;
              }
              *(undefined1 *)((long)param_1 + (long)param_2 + 0x41a) = 1;
              *param_3 = 1;
              if (param_2 == 0) {
                FUN_00146c9c(lVar12,4);
              }
              FUN_00157c90(param_1,*(undefined4 *)((long)param_1 + (long)param_2 * 4 + 600));
              FUN_0014fc8c(param_1);
              return 0;
            }
            FUN_0014d430(lVar12,"Connection failed\n");
          }
          else if (uVar6 == 0) {
            local_6c[0] = 0;
            iVar7 = FUN_001471a8(local_80._0_8_,local_80._8_8_,param_1[0x84],param_1[0x85]);
            if (param_1[0x87] <= (long)iVar7) {
              FUN_0014d430(lVar12,"After %ldms connect time, move on!\n");
              local_6c[0] = 0x6e;
            }
            if ((bVar3) && (param_1[0x10] == 0)) {
              iVar7 = FUN_001471a8(local_80._0_8_,local_80._8_8_,param_1[0x84],param_1[0x85]);
              if (*(long *)(lVar12 + 0x7c0) <= (long)iVar7) {
                FUN_001582ec(param_1,param_2,1);
              }
            }
          }
          else {
            if ((*(byte *)((long)param_1 + 0x41f) >> 3 & 1) != 0) goto LAB_001580b4;
            if ((uVar6 >> 2 & 1) != 0) {
              FUN_001583cc(*puVar1,local_6c);
            }
          }
          if (local_6c[0] != 0) {
            *(int *)(lVar12 + 0x11e0) = local_6c[0];
            nnsocketSetLastErrno();
            lVar14 = param_1[lVar13 + 0xf];
            if (lVar14 != 0) {
              uStack_88 = 0;
              local_98 = 0;
              uStack_90 = 0;
              local_8a = 0;
              local_b0 = 0;
              local_a8 = 0;
              uStack_a0 = 0;
              memset(auStack_130,0,0x80);
              FUN_0014a1dc(lVar14,&local_b0,0x2e);
              lVar14 = param_1[0x32];
              uVar10 = FUN_0014df28(local_6c[0],auStack_130,0x80);
              FUN_0014d430(lVar12,"connect to %s port %ld failed: %s\n",&local_b0,lVar14,uVar10);
              param_1[0x87] = (ulong)(uVar5 >> (*(long *)(param_1[lVar13 + 0xf] + 0x28) != 0));
              iVar7 = FUN_001582ec(param_1,param_2,lVar13);
              if ((iVar7 != 7) || (*(int *)((long)param_1 + (ulong)uVar2 * 4 + 0x260) == -1)) {
                iVar8 = iVar7;
              }
            }
          }
        }
        lVar13 = 1;
        bVar4 = false;
      } while (bVar3);
      if (iVar8 != 0) {
        memset(auStack_130,0,0x80);
        if (param_1[0x10] == 0) {
          iVar8 = FUN_001582ec(param_1,param_2,1);
          if (iVar8 == 0) {
            return 0;
          }
        }
        uVar5 = *(uint *)((long)param_1 + 0x41c);
        if ((uVar5 >> 6 & 1) == 0) {
          if ((uVar5 >> 5 & 1) == 0) {
            if ((uVar5 >> 2 & 1) == 0) {
              plVar11 = param_1 + 0x1a;
            }
            else {
              plVar11 = param_1 + 0x20;
            }
          }
          else {
            plVar11 = param_1 + 0x2c;
          }
        }
        else {
          plVar11 = param_1 + 0x24;
        }
        lVar14 = *plVar11;
        lVar13 = param_1[0x32];
        uVar10 = FUN_0014df28(local_6c[0],auStack_130,0x80);
        FUN_0014d5f8(lVar12,"Failed to connect to %s port %ld: %s",lVar14,lVar13,uVar10);
      }
    }
  }
  else {
    iVar8 = 0;
    *param_3 = 1;
  }
  return iVar8;
}

