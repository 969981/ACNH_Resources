
undefined8 FUN_038779a0(long *param_1,undefined8 *param_2)

{
  byte *pbVar1;
  uint uVar2;
  byte bVar3;
  undefined2 *__src;
  ushort *puVar4;
  int iVar5;
  long *plVar6;
  long lVar7;
  undefined2 *__src_00;
  ulong uVar8;
  long lVar9;
  short *psVar10;
  ushort uVar11;
  ushort *puVar12;
  long lVar13;
  undefined2 *__dest;
  undefined *local_118;
  undefined2 *local_110;
  int local_108;
  undefined2 local_104 [20];
  undefined2 local_dc;
  int local_d8 [4];
  undefined *local_c8;
  undefined8 *puStack_c0;
  undefined4 local_b8;
  undefined8 local_b4;
  undefined8 local_ac;
  undefined8 local_a4;
  undefined8 local_9c;
  undefined8 local_94;
  undefined8 local_8c;
  undefined8 local_84;
  undefined8 local_7c;
  undefined8 local_74;
  undefined8 local_6c;
  undefined8 local_64;
  undefined1 local_5c;
  undefined1 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  
  if ((((*(long *)PTR_DAT_04bc1510 != 0) && (plVar6 = (long *)FUN_002ba790(), plVar6 != (long *)0x0)
       ) && (lVar7 = (**(code **)(*plVar6 + 0x38))(plVar6,*param_2), lVar7 != 0)) &&
     (*(int *)(lVar7 + 0x4c) == 5)) {
    local_b4 = 0;
    local_b8 = 0x50;
    local_94 = 0;
    local_8c = 0;
    puStack_c0 = &local_ac;
    local_84 = 0;
    local_c8 = PTR_DAT_04bcb818 + 0x10;
    local_7c = 0;
    local_74 = 0;
    local_6c = 0;
    local_64 = 0;
    local_58 = 0xff;
    local_ac = 0;
    local_a4 = 0;
    local_9c = 0;
    local_5c = 0;
    local_50 = 0;
    uStack_48 = 0;
    FUN_00273da4(local_d8,lVar7,*(undefined1 *)(param_2 + 1),&local_c8);
    if (local_d8[0] == 0) {
      *(undefined2 *)param_1[1] = 0;
      iVar5 = FUN_00227d94(&local_c8);
      if (iVar5 == 1) {
        lVar7 = FUN_00227acc(&local_c8);
        (**(code **)(*param_1 + 0x18))(param_1);
        uVar8 = (ulong)*(uint *)(param_1 + 2);
        if (*(uint *)(param_1 + 2) != 0) {
          lVar9 = 0;
          puVar4 = (ushort *)param_1[1];
          while (puVar12 = puVar4, lVar9 != 0x7fffffff) {
            pbVar1 = (byte *)(lVar7 + lVar9);
            bVar3 = *pbVar1;
            uVar11 = (ushort)bVar3;
            if (bVar3 == 0) break;
            if ((char)bVar3 < '\0') {
              uVar11 = (ushort)bVar3;
              if ((uVar11 & 0xe0) == 0xc0) {
                if (pbVar1[1] == 0) break;
                lVar13 = 2;
                uVar11 = pbVar1[1] & 0x3f | (uVar11 & 0x1f) << 6;
              }
              else {
                if ((((uVar11 & 0xf0) != 0xe0) || (pbVar1[1] == 0)) || (pbVar1[2] == 0)) break;
                lVar13 = 3;
                uVar11 = (ushort)bVar3 << 0xc | (pbVar1[1] & 0x3f) << 6 | pbVar1[2] & 0x3f;
              }
            }
            else {
              lVar13 = 1;
            }
            lVar9 = lVar13 + lVar9;
            uVar8 = uVar8 - 1;
            *puVar12 = uVar11;
            puVar4 = puVar12 + 1;
            if (uVar8 == 0) break;
          }
          *puVar12 = 0;
        }
      }
      else {
        __src_00 = (undefined2 *)FUN_00227acc(&local_c8);
        local_dc = 0;
        local_108 = 0x15;
        local_110 = local_104;
        if (local_104 == __src_00) {
          lVar7 = 0x14;
        }
        else {
          uVar8 = 0;
          psVar10 = __src_00 + 1;
          do {
            if (psVar10[-1] == 0) {
LAB_03877bec:
              if (0x14 < (int)uVar8) {
                uVar8 = 0x14;
              }
              goto LAB_03877bf8;
            }
            if (*psVar10 == 0) {
              uVar8 = uVar8 + 1;
              goto LAB_03877bec;
            }
            if (psVar10[1] == 0) {
              uVar8 = uVar8 + 2;
              goto LAB_03877bec;
            }
            uVar8 = uVar8 + 3;
            psVar10 = psVar10 + 3;
          } while (uVar8 != 0x80001);
          uVar8 = 0;
LAB_03877bf8:
          uVar8 = -(uVar8 >> 0x1f & 1) & 0xfffffffe00000000 | (uVar8 & 0xffffffff) << 1;
          memcpy(local_104,__src_00,uVar8);
          *(undefined2 *)((long)local_104 + uVar8) = 0;
          lVar7 = (long)local_108 + -1;
          __src_00 = local_110;
        }
        __src = local_110;
        __dest = (undefined2 *)param_1[1];
        local_118 = &DAT_04a5a568;
        __src_00[lVar7] = 0;
        if (__dest != local_110) {
          (*(code *)PTR_FUN_04a5a580)(&local_118);
          lVar7 = 0;
          do {
            if (local_110[lVar7] == 0) goto LAB_03877c90;
            if (local_110[lVar7 + 1] == 0) {
              lVar7 = lVar7 + 1;
              goto LAB_03877c90;
            }
            if (local_110[lVar7 + 2] == 0) {
              lVar7 = lVar7 + 2;
              goto LAB_03877c90;
            }
            lVar7 = lVar7 + 3;
          } while (lVar7 != 0x80001);
          lVar7 = 0;
LAB_03877c90:
          uVar2 = (uint)lVar7;
          if ((int)param_1[2] <= (int)(uint)lVar7) {
            uVar2 = (int)param_1[2] - 1;
          }
          uVar8 = -(ulong)(uVar2 >> 0x1f) & 0xfffffffe00000000 | (ulong)uVar2 << 1;
          memcpy(__dest,__src,uVar8);
          *(undefined2 *)((long)__dest + uVar8) = 0;
        }
      }
      (**(code **)(*param_1 + 0x18))(param_1);
      return 1;
    }
  }
  return 0;
}

