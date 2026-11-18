
void FUN_036d5320(undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,int *param_4,
                 uint param_5,long param_6)

{
  uint uVar1;
  undefined1 *__src;
  int iVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined1 *puVar5;
  uint uVar6;
  int iVar7;
  ulong uVar8;
  undefined8 *puVar9;
  long lVar10;
  int iVar11;
  char cVar12;
  uint *puVar13;
  int *piVar14;
  undefined1 *puVar15;
  uint *puVar16;
  undefined4 uVar17;
  undefined *local_140;
  undefined4 local_138;
  undefined4 uStack_134;
  undefined8 local_130;
  undefined8 local_128;
  undefined4 local_120;
  ulong local_11c;
  undefined8 local_114;
  undefined8 local_10c;
  undefined *local_100;
  undefined1 *local_f8;
  int local_f0;
  undefined1 local_ec [127];
  undefined1 local_6d;
  undefined4 local_68;
  undefined2 local_64;
  undefined8 local_60;
  undefined *local_58;
  uint local_50;
  uint *local_48;
  
  if (*param_4 != 0) {
    return;
  }
  uVar8 = FUN_02b8ec50(0x23);
  if ((uVar8 & 1) == 0) {
    local_58 = PTR_DAT_04bcac40 + 0x10;
    if ((int)DAT_05ab4098 < 1) {
      if (DAT_05ab3f88 == 0) {
        return;
      }
      puVar16 = *(uint **)(DAT_05ab3f88 + 8);
      if (puVar16 == (uint *)0x0) {
        return;
      }
      if ((param_5 < DAT_05ab3fa0) && (*(char *)(DAT_05ab3fa8 + (int)param_5) == '\0')) {
        return;
      }
      if (*puVar16 <= param_5) {
        return;
      }
      if (puVar16[1] == 0) {
        return;
      }
      if ((ushort)puVar16[2] == 0) {
        return;
      }
      iVar7 = 0xc;
      if (*(char *)((long)puVar16 + 10) != '\0') {
        iVar7 = 0x1c;
      }
      puVar16 = (uint *)((ulong)(puVar16[1] * param_5 + (uint)(ushort)puVar16[2] * 8 + iVar7) +
                        (long)puVar16);
    }
    else {
      if (DAT_05ab4098 <= param_5) {
        return;
      }
      uVar6 = param_5;
      if (DAT_05ab4088 <= param_5) {
        uVar6 = 0;
      }
      puVar16 = *(uint **)(DAT_05ab4090 + (ulong)uVar6 * 8);
    }
    if (puVar16 != (uint *)0x0) {
      local_120 = 0;
      local_11c = 0x3f800000;
      local_130 = 0xffffffff00000000;
      local_128 = 0;
      local_f8 = local_ec;
      local_f0 = 0x80;
      local_6d = 0;
      local_ec[0] = 0;
      local_100 = PTR_DAT_04bb2d88 + 0x10;
      local_60 = 0;
      local_64 = 0;
      local_114 = 0;
      local_10c = 0;
      local_68 = 7;
      local_50 = param_5;
      local_48 = puVar16;
      uVar6 = FUN_036ccca0(&local_58);
      if (uVar6 < 2) {
        puVar9 = (undefined8 *)(&PTR_s_StructureDynamicCollisionActor_04b45318)[uVar6];
      }
      else {
        puVar9 = &DAT_0407ebb1;
      }
      uVar6 = FUN_006bd550(puVar9,0);
      iVar7 = 0;
      uVar17 = 0xffffffff;
      iVar11 = 0xeb;
      do {
        uVar1 = iVar7 + iVar11 >> 1;
        if (*(uint *)(PTR_DAT_04bb3858 +
                     (-(ulong)(uVar1 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar1 << 3)) == uVar6) {
          uVar17 = *(undefined4 *)
                    (PTR_DAT_04bb3858 +
                    ((long)((ulong)(uint)(iVar7 + iVar11) << 0x20) >> 0x21) * 8 + 4);
          break;
        }
        iVar2 = uVar1 - 1;
        if (*(uint *)(PTR_DAT_04bb3858 +
                     (-(ulong)(uVar1 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar1 << 3)) < uVar6) {
          iVar7 = uVar1 + 1;
          iVar2 = iVar11;
        }
        iVar11 = iVar2;
      } while (iVar7 <= iVar2);
      local_130 = CONCAT44(uVar17,(undefined4)local_130);
      local_138 = *(undefined4 *)(param_6 + 8);
      uStack_134 = *(undefined4 *)(param_6 + 0xc);
      local_140 = PTR_DAT_04bb2010 + 0x10;
      uVar17 = FUN_036d5c20(param_5,&local_140);
      puVar5 = local_f8;
      puVar4 = PTR_DAT_04bcac50;
      puVar3 = PTR_DAT_04bcac48;
      local_128 = CONCAT44(param_2,uVar17);
      local_11c = local_11c & 0xffffffff;
      uVar6 = *puVar16;
      if (uVar6 != 0) {
        cVar12 = *PTR_DAT_04bcac48;
        do {
          if (cVar12 == '\0') {
            cVar12 = '\x01';
            *(undefined8 *)puVar4 = 0xffffffffffffffff;
            *(undefined8 *)(puVar4 + 8) = 0xffffffffffffffff;
            *puVar3 = 1;
            uVar6 = *puVar16;
          }
          else {
            uVar1 = *(uint *)(puVar4 + 8);
            if (-1 < (int)uVar1) {
              puVar15 = (undefined1 *)((ulong)uVar1 + (long)puVar16);
              goto LAB_036d5628;
            }
            if (uVar1 != 0xffffffff) break;
          }
          puVar13 = (uint *)(ulong)uVar6;
          puVar15 = (undefined1 *)0x0;
          if ((puVar13 == (uint *)0x0) || (puVar16 == puVar13)) goto LAB_036d5628;
          lVar10 = 0xc;
          if (*(char *)((long)puVar16 + (10 - (long)puVar13)) != '\0') {
            lVar10 = 0x1c;
          }
          lVar10 = (long)puVar16 + (lVar10 - (long)puVar13);
          puVar15 = (undefined1 *)0x0;
          if (lVar10 == 0) goto LAB_036d5628;
          uVar8 = (ulong)*(ushort *)((long)puVar16 + (8 - (long)puVar13));
          *(undefined4 *)(puVar4 + 8) = 0xfffffffe;
          if (uVar8 == 0) break;
          piVar14 = (int *)(lVar10 + 4);
          while (piVar14[-1] != 0x39b5a93d) {
            piVar14 = piVar14 + 2;
            uVar8 = uVar8 - 1;
            if (uVar8 == 0) goto LAB_036d5624;
          }
          iVar7 = 0;
          if (*piVar14 != -1) {
            iVar7 = *piVar14;
          }
          *(int *)(puVar4 + 8) = iVar7;
          uVar6 = *puVar16;
          if (uVar6 == 0) break;
        } while( true );
      }
LAB_036d5624:
      puVar15 = (undefined1 *)0x0;
LAB_036d5628:
      __src = *(undefined1 **)PTR_PTR_04bcac58;
      if (puVar15 != (undefined1 *)0x0) {
        __src = puVar15;
      }
      local_120 = param_3;
      if (local_f8 != __src) {
        lVar10 = 0;
        do {
          if (__src[lVar10] == '\0') goto LAB_036d5690;
          if (__src[lVar10 + 1] == '\0') {
            lVar10 = lVar10 + 1;
            goto LAB_036d5690;
          }
          if (__src[lVar10 + 2] == '\0') {
            lVar10 = lVar10 + 2;
            goto LAB_036d5690;
          }
          lVar10 = lVar10 + 3;
        } while (lVar10 != 0x80001);
        lVar10 = 0;
LAB_036d5690:
        iVar7 = (int)lVar10;
        if (local_f0 <= (int)lVar10) {
          iVar7 = local_f0 + -1;
        }
        memcpy(local_f8,__src,(long)iVar7);
        puVar5[iVar7] = 0;
      }
      local_114 = CONCAT44(local_114._4_4_,1);
      iVar7 = FUN_007402e0(*(undefined8 *)PTR_DAT_04bb27c0,&local_130,local_130 & 0xffffffff,0);
      *param_4 = iVar7;
    }
  }
  return;
}

