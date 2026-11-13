
void FUN_0118d498(long param_1,undefined4 *param_2)

{
  uint *puVar1;
  int iVar2;
  long lVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong local_148;
  float local_140;
  undefined4 uStack_13c;
  float local_138;
  undefined8 local_134;
  undefined4 local_12c;
  undefined4 uStack_128;
  undefined8 local_124;
  undefined1 *local_118;
  undefined1 *puStack_110;
  undefined4 local_108;
  undefined1 local_104 [127];
  undefined1 local_85;
  undefined4 local_80;
  undefined2 local_7c;
  undefined8 local_78;
  float local_6c;
  undefined4 local_68;
  float local_64;
  undefined1 auStack_60 [16];
  undefined1 local_34 [4];
  
  lVar9 = *(long *)(param_1 + 8);
  FUN_011b9ab0(auStack_60,param_2[1]);
  uVar8 = FUN_011b9cd0(auStack_60);
  if ((uVar8 & 1) != 0) {
    local_148._0_4_ = FUN_011ba8b0(auStack_60);
    lVar3 = DAT_04c93e08;
    if ((int)local_148 == 0) {
      iVar7 = *(int *)PTR_DAT_04bb3238;
      if (*(int *)(lVar9 + 0xc) == iVar7) {
        lVar10 = 0;
      }
      else if (*(int *)(lVar9 + 0x10) == iVar7) {
        lVar10 = 1;
      }
      else if (*(int *)(lVar9 + 0x14) == iVar7) {
        lVar10 = 2;
      }
      else if (*(int *)(lVar9 + 0x18) == iVar7) {
        lVar10 = 3;
      }
      else if (*(int *)(lVar9 + 0x1c) == iVar7) {
        lVar10 = 4;
      }
      else if (*(int *)(lVar9 + 0x20) == iVar7) {
        lVar10 = 5;
      }
      else if (*(int *)(lVar9 + 0x24) == iVar7) {
        lVar10 = 6;
      }
      else if (*(int *)(lVar9 + 0x28) == iVar7) {
        lVar10 = 7;
      }
      else if (*(int *)(lVar9 + 0x2c) == iVar7) {
        lVar10 = 8;
      }
      else if (*(int *)(lVar9 + 0x30) == iVar7) {
        lVar10 = 9;
      }
      else if (*(int *)(lVar9 + 0x34) == iVar7) {
        lVar10 = 10;
      }
      else if (*(int *)(lVar9 + 0x38) == iVar7) {
        lVar10 = 0xb;
      }
      else if (*(int *)(lVar9 + 0x3c) == iVar7) {
        lVar10 = 0xc;
      }
      else if (*(int *)(lVar9 + 0x40) == iVar7) {
        lVar10 = 0xd;
      }
      else if (*(int *)(lVar9 + 0x44) == iVar7) {
        lVar10 = 0xe;
      }
      else if (*(int *)(lVar9 + 0x48) == iVar7) {
        lVar10 = 0xf;
      }
      else if (*(int *)(lVar9 + 0x4c) == iVar7) {
        lVar10 = 0x10;
      }
      else if (*(int *)(lVar9 + 0x50) == iVar7) {
        lVar10 = 0x11;
      }
      else if (*(int *)(lVar9 + 0x54) == iVar7) {
        lVar10 = 0x12;
      }
      else {
        if (*(int *)(lVar9 + 0x58) != iVar7) {
          return;
        }
        lVar10 = 0x13;
      }
      if (DAT_04c93e08 != 0) {
        local_68 = 0;
        lVar11 = *(long *)PTR_DAT_04bb5c90;
        iVar7 = *(int *)(lVar11 + 0x28);
        iVar4 = FUN_011bb170(auStack_60);
        iVar2 = *(int *)(lVar11 + 0x2c);
        iVar5 = FUN_011bb330(auStack_60);
        local_6c = (float)(iVar4 + iVar7) * 5.0;
        local_64 = (float)(iVar5 + iVar2) * 5.0;
        if ((*(long *)PTR_DAT_04bb27c8 == 0) ||
           (lVar11 = *(long *)(*(long *)PTR_DAT_04bb27c8 + 0x90), lVar11 == 0)) {
          uStack_13c = 0xc3fa0000;
        }
        else {
          if (DAT_04c487d4 == -1) {
            uVar6 = 7;
          }
          else {
            puVar1 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)DAT_04c487d4 * 8);
            if (0xff < (uint)(int)DAT_04c487d4) {
              puVar1 = (uint *)PTR_DAT_04bc39f8;
            }
            uVar6 = 7;
            if ((*puVar1 & 2) != 0) {
              uVar6 = 5;
            }
          }
          local_148 = CONCAT44(local_148._4_4_,uVar6);
          local_34[0] = 0;
          uStack_13c = FUN_00962700(lVar11,&local_6c,&local_148,1,local_34);
        }
        local_134 = 0x3f800000;
        local_148 = 0x3d00000000;
        puStack_110 = local_104;
        local_108 = 0x80;
        local_85 = 0;
        local_104[0] = 0;
        local_78 = 0;
        local_7c = 0;
        local_124 = 0;
        local_118 = &DAT_048fc708;
        local_80 = 7;
        uStack_128 = *param_2;
        local_12c = param_2[1];
        local_140 = local_6c;
        local_138 = local_64;
        local_68 = uStack_13c;
        uVar6 = FUN_011bac10(auStack_60);
        local_124 = CONCAT44(local_124._4_4_,uVar6) & 0xffffffff0000ffff;
        iVar7 = FUN_007402e0(lVar3,&local_148,local_148 & 0xffffffff,0);
        ((int *)(lVar9 + 0xc))[lVar10] = iVar7;
      }
    }
  }
  return;
}

