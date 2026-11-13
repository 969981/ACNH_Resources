
void FUN_012dde80(long param_1)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  uint uVar4;
  undefined4 uVar5;
  long lVar6;
  undefined1 *__src;
  long *plVar7;
  int iVar8;
  long lVar9;
  float fVar10;
  float fVar11;
  undefined **local_148;
  undefined **local_140;
  float local_138;
  undefined8 local_134;
  undefined4 local_12c;
  undefined8 local_128;
  undefined4 local_120;
  undefined *local_118;
  undefined1 *local_110;
  int local_108;
  undefined1 local_104 [127];
  undefined1 local_85;
  undefined4 local_80;
  undefined2 local_7c;
  undefined8 local_78;
  undefined *local_70;
  undefined8 local_68;
  undefined *local_60;
  undefined8 local_58;
  
  if ((*(uint *)(param_1 + 8) & 1) != 0) {
    lVar6 = *(long *)(param_1 + 0xb0);
    if (((*(uint *)(param_1 + 8) ^ 0xffffffff) & 0x15) == 0) {
      uVar4 = *(uint *)(lVar6 + 8);
      if ((uVar4 >> 1 & 1) != 0) {
        return;
      }
    }
    else {
      uVar4 = *(uint *)(lVar6 + 8);
    }
    if ((uVar4 & 1) != 0) {
      FUN_01311890();
      lVar6 = *(long *)(param_1 + 0xb0);
    }
    if ((*(byte *)(lVar6 + 8) >> 1 & 1) != 0) {
      uVar4 = *(uint *)(param_1 + 8);
      if ((uVar4 >> 1 & 1) == 0) {
        FUN_0125dd30(*(long *)PTR_DAT_04bb27a8 + 0x1518,
                     *(undefined8 *)(*(long *)(param_1 + 0xa0) + 0xb8),0x6622bd46);
        uVar4 = *(uint *)(param_1 + 8) | 2;
        *(uint *)(param_1 + 8) = uVar4;
      }
      puVar2 = PTR_DAT_04bb3238;
      if ((uVar4 >> 2 & 1) == 0) {
        local_60 = (undefined *)CONCAT71(local_60._1_7_,1);
        local_140 = &local_60;
        local_148 = &PTR_FUN_0498d4a0;
        uVar4 = 0;
        lVar6 = *(long *)PTR_DAT_04bb27a8;
        iVar8 = *(int *)PTR_DAT_04bb3238;
        do {
          if (*(int *)(lVar6 + 0x1520 + ((long)((ulong)uVar4 << 0x20) >> 0x1e)) != iVar8) {
            (*(code *)*local_148)(&local_148);
            iVar8 = *(int *)puVar2;
          }
          uVar4 = uVar4 + 1;
        } while (uVar4 != 0x48);
        uVar4 = *(uint *)(param_1 + 8);
        if ((char)local_60 != '\0') {
          uVar4 = uVar4 | 4;
          *(uint *)(param_1 + 8) = uVar4;
        }
      }
      if ((uVar4 >> 3 & 1) == 0) {
        ppuVar1 = (undefined **)(PTR_DAT_04bb2020 + 0x10);
        local_140 = (undefined **)0x40716be;
        local_148 = ppuVar1;
        uVar4 = FUN_0273f0a0(&local_148);
        local_60 = PTR_DAT_04bbb980 + 0x10;
        lVar6 = *(long *)PTR_DAT_04bb5c90;
        uVar4 = (uVar4 & 1) - (uint)*(ushort *)(lVar6 + 0x298);
        if (uVar4 < *(uint *)(lVar6 + 0x278)) {
          local_58 = *(undefined8 *)(*(long *)(lVar6 + 0x280) + (long)(int)uVar4 * 8);
        }
        else {
          local_58 = 0;
        }
        local_70 = PTR_DAT_04bb2010 + 0x10;
        local_68 = 0;
        local_140 = (undefined **)FUN_011a1820(&local_60);
        local_148 = ppuVar1;
        FUN_00979900(&local_148,param_1 + 0xc0,&local_70);
        local_148 = (undefined **)0x3c00000000;
        local_134 = 0x3f800000;
        local_85 = 0;
        local_108 = 0x80;
        local_110 = local_104;
        fVar11 = (float)local_68._4_4_;
        local_104[0] = 0;
        fVar10 = (float)(int)local_68;
        local_80 = 7;
        local_78 = 0;
        local_7c = 0;
        local_118 = PTR_DAT_04bb2d88 + 0x10;
        local_128 = 0;
        local_120 = 0;
        local_12c = 1;
        local_140 = (undefined **)(ulong)(uint)(fVar10 * 5.0);
        local_138 = fVar11 * 5.0;
        __src = (undefined1 *)FUN_011a1820(&local_60);
        puVar3 = local_110;
        if (local_110 != __src) {
          lVar6 = 0;
          do {
            if (__src[lVar6] == '\0') goto LAB_012de120;
            if (__src[lVar6 + 1] == '\0') {
              lVar6 = lVar6 + 1;
              goto LAB_012de120;
            }
            if (__src[lVar6 + 2] == '\0') {
              lVar6 = lVar6 + 2;
              goto LAB_012de120;
            }
            lVar6 = lVar6 + 3;
          } while (lVar6 != 0x80001);
          lVar6 = 0;
LAB_012de120:
          iVar8 = (int)lVar6;
          if (local_108 <= (int)lVar6) {
            iVar8 = local_108 + -1;
          }
          memcpy(local_110,__src,(long)iVar8);
          puVar3[iVar8] = 0;
        }
        uVar5 = FUN_007402e0(*(undefined8 *)PTR_DAT_04bb27c0,&local_148,
                             (ulong)local_148 & 0xffffffff,0);
        *(undefined4 *)(param_1 + 0xd0) = uVar5;
        *(float *)(param_1 + 0xd4) = fVar10 * 5.0;
        uVar4 = *(uint *)(param_1 + 8) | 8;
        *(undefined4 *)(param_1 + 0xd8) = 0;
        *(float *)(param_1 + 0xdc) = fVar11 * 5.0;
        *(uint *)(param_1 + 8) = uVar4;
      }
      if ((uVar4 >> 4 & 1) == 0) {
        lVar6 = *(long *)PTR_DAT_04bb27c0;
        if (lVar6 != 0) {
          uVar4 = *(uint *)(param_1 + 0xd0);
          if ((((uVar4 == 0) ||
               (lVar9 = *(long *)(*(long *)(*(long *)(lVar6 + 0x1c0) + 8) +
                                 ((ulong)(uVar4 >> 0x11) & 0x7ff8)), lVar9 == 0)) ||
              ((*(uint *)(lVar9 + 0x248) >> 1 & 1) != 0)) || (*(uint *)(lVar9 + 0x230) != uVar4)) {
            lVar9 = 0;
          }
          if (*(int *)(lVar6 + 0x288) == 1 || *(int *)(lVar6 + 0x288) == -1) {
            plVar7 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
            (**(code **)(*plVar7 + 0x60))();
          }
          if (lVar9 != 0) {
            return;
          }
          uVar4 = *(uint *)(param_1 + 8);
        }
        *(uint *)(param_1 + 8) = uVar4 | 0x10;
      }
    }
  }
  return;
}

