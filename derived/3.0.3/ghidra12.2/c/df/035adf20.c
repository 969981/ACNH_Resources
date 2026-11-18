
void FUN_035adf20(long param_1,ushort *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  ushort uVar4;
  ushort uVar5;
  uint uVar6;
  undefined1 uVar7;
  byte bVar8;
  ulong uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar13;
  uint uVar12;
  undefined8 uVar14;
  uint uVar16;
  uint uVar15;
  undefined8 *puVar17;
  long lVar18;
  undefined *local_68;
  uint local_60;
  uint uStack_5c;
  undefined *local_58;
  byte local_50;
  uint local_44;
  
  if ((char)param_2[3] != '\x03') {
    uVar4 = *param_2;
    uVar15 = (uint)uVar4;
    uVar16 = (uint)uVar4;
    uVar5 = param_2[1];
    uVar12 = (uint)uVar5;
    uVar13 = (uint)uVar5;
    if ((DAT_05aa8910 != DAT_05aa8920 || DAT_05aa8914 != DAT_05aa8924) &&
       (((((int)(uint)uVar4 < DAT_05aa8910 || (DAT_05aa8920 < (int)uVar16)) ||
         ((int)(uint)uVar5 < DAT_05aa8914)) || (DAT_05aa8924 < (int)uVar13)))) {
      FUN_035a4360(&DAT_05779f28,uVar15,uVar12,0);
      return;
    }
    if (DAT_05a607e8 != 0) {
      lVar18 = (long)DAT_05a607e8 << 3;
      puVar17 = DAT_05a607f0;
      do {
        local_58 = (undefined *)((ulong)local_58 & 0xffffffff00000000);
        uVar9 = (**(code **)*puVar17)
                          (uVar15,uVar12,*(undefined8 *)(param_1 + 8),
                           *(undefined8 *)(param_1 + 0x10),&local_58);
        if ((uVar9 & 1) != 0) {
          if (*(undefined1 **)*puVar17 != &LAB_035ae410) {
            FUN_035a4360(&DAT_05779f28,uVar15,uVar12,(ulong)local_58 & 0xffffffff);
            return;
          }
          lVar18 = *(long *)(param_1 + 8);
          iVar1 = *(int *)(lVar18 + 0x28);
          if (iVar1 <= (int)uVar16) {
            uVar10 = 0;
            uVar11 = 0;
            if (*(int *)(lVar18 + 8) + iVar1 + -1 < (int)uVar16) goto LAB_035ae400;
            iVar2 = *(int *)(lVar18 + 0x2c);
            if (iVar2 <= (int)uVar13) {
              iVar3 = *(int *)(lVar18 + 0xc);
              uVar10 = 0;
              uVar11 = 0;
              if ((int)uVar13 <= iVar3 + iVar2 + -1) {
                uVar6 = (uVar13 - iVar2) + (uVar16 - iVar1) * iVar3;
                if (uVar6 < *(uint *)(lVar18 + 0x10)) {
                  uVar10 = uVar15;
                  uVar11 = uVar12;
                  if (*(short *)(*(long *)(lVar18 + 0x18) +
                                (-(ulong)(uVar6 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar6 << 3))
                      == -3) {
                    uVar12 = *(uint *)(*(long *)(lVar18 + 0x18) + (long)(int)uVar6 * 8 + 4);
                    uVar11 = uVar13 - (uVar12 >> 0x18);
                    uVar10 = uVar16 - (uVar12 >> 0x10 & 0xff);
                    if (*(uint *)(lVar18 + 0x10) <= (uVar11 - iVar2) + (uVar10 - iVar1) * iVar3) {
                      uVar10 = 0;
                      uVar11 = 0;
                    }
                  }
                }
                else {
                  uVar10 = 0;
                  uVar11 = 0;
                }
              }
              goto LAB_035ae400;
            }
          }
          uVar10 = 0;
          uVar11 = 0;
LAB_035ae400:
          FUN_035a4bec(&DAT_05779f28,uVar10,uVar11);
          return;
        }
        puVar17 = puVar17 + 1;
        lVar18 = lVar18 + -8;
      } while (lVar18 != 0);
      uVar16 = (uint)*param_2;
      uVar13 = (uint)param_2[1];
    }
    local_50 = 0;
    local_58 = PTR_DAT_04bb5ba0 + 0x10;
    local_68 = PTR_DAT_04bb2010 + 0x10;
    local_60 = uVar16;
    uStack_5c = uVar13;
    FUN_00974bc8(*(undefined8 *)(param_1 + 0x10),&local_68,&local_58);
    bVar8 = local_50;
    if ((local_50 >> 4 & 1) == 0) {
      if ((local_50 >> 5 & 1) == 0) {
        if ((local_50 >> 6 & 1) == 0) {
          return;
        }
        FUN_035a71c0(&DAT_05779f28,param_2,0);
        uVar14 = 5;
        *(byte *)((long)param_2 + 5) = *(byte *)((long)param_2 + 5) | 0x2a;
        uVar7 = 2;
      }
      else {
        FUN_035a71c0(&DAT_05779f28,param_2,1);
        uVar7 = 1;
        uVar14 = 7;
        *(byte *)((long)param_2 + 5) = *(byte *)((long)param_2 + 5) | 0x89;
      }
      *(undefined1 *)(param_2 + 0x10) = uVar7;
    }
    else {
      local_44 = 0;
      *(undefined1 *)(param_2 + 0x10) = 0;
      uVar12 = (local_50 & 6 | (local_50 & 1) << 3 | local_50 >> 3 & 1) ^ 0xf;
      *(char *)((long)param_2 + 5) = (char)uVar12;
      if ((local_50 >> 3 & 1) == 0) {
        FUN_035a70c8(&DAT_05779f28,param_2,0);
        uVar12 = *(byte *)((long)param_2 + 5) | 0xffffff91;
        *(char *)((long)param_2 + 5) = (char)uVar12;
        if ((char)param_2[3] != '\x03') {
          local_44 = (uint)(byte)param_2[0x10];
          if (local_44 == 0) {
            FUN_035a79b0(&DAT_05779f28,param_2,0);
            *(byte *)(param_2 + 2) = (byte)param_2[2] & 0x6e;
          }
          else {
            FUN_035a72e0(&DAT_05779f28,param_2,local_44 == 1);
          }
          uVar12 = (uint)*(byte *)((long)param_2 + 5);
        }
      }
      if ((uVar12 >> 1 & 1) != 0) {
        FUN_035a70c8(&DAT_05779f28,param_2,1);
        if ((char)param_2[3] != '\x03') {
          local_44 = (uint)(byte)param_2[0x10];
          if (local_44 == 0) {
            FUN_035a79b0(&DAT_05779f28,param_2,1);
            *(byte *)(param_2 + 2) = (byte)param_2[2] & 0x9d;
          }
          else {
            FUN_035a72e0(&DAT_05779f28,param_2,local_44 == 1);
          }
        }
        uVar12 = (uint)*(byte *)((long)param_2 + 5);
      }
      if ((uVar12 >> 2 & 1) != 0) {
        FUN_035a70c8(&DAT_05779f28,param_2,2);
        uVar12 = *(byte *)((long)param_2 + 5) | 0x54;
        *(char *)((long)param_2 + 5) = (char)uVar12;
        if ((char)param_2[3] != '\x03') {
          local_44 = (uint)(byte)param_2[0x10];
          if (local_44 == 0) {
            FUN_035a79b0(&DAT_05779f28,param_2,2);
            *(byte *)(param_2 + 2) = (byte)param_2[2] & 0xab;
          }
          else {
            FUN_035a72e0(&DAT_05779f28,param_2,local_44 == 1);
          }
          uVar12 = (uint)*(byte *)((long)param_2 + 5);
        }
      }
      if ((uVar12 >> 3 & 1) == 0) {
        return;
      }
      uVar14 = 3;
      FUN_035a70c8(&DAT_05779f28,param_2,3);
    }
    if ((char)param_2[3] != '\x03') {
      local_44 = (uint)(byte)param_2[0x10];
      if (local_44 == 0) {
        FUN_035a79b0(&DAT_05779f28,param_2,uVar14);
        if ((bVar8 >> 4 & 1) != 0) {
          *(byte *)(param_2 + 2) = (byte)param_2[2] & 0x57;
        }
      }
      else {
        FUN_035a72e0(&DAT_05779f28,param_2,local_44 == 1);
      }
    }
  }
  return;
}

