
bool FUN_022ca9c0(undefined8 param_1,float *param_2,byte *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  byte bVar3;
  undefined *puVar4;
  bool bVar5;
  char *pcVar6;
  uint uVar7;
  long lVar8;
  ulong uVar9;
  uint *puVar10;
  uint uVar11;
  undefined *local_e0;
  uint local_d8;
  uint local_d4;
  char local_d0 [4];
  undefined4 local_cc;
  undefined *local_c8;
  uint local_c0;
  uint local_bc;
  byte local_b8;
  undefined1 local_b7;
  undefined4 local_b4;
  undefined4 uStack_b0;
  undefined8 local_ac;
  undefined8 local_a4;
  undefined8 local_9c;
  undefined8 local_94;
  undefined4 local_8c;
  undefined *local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined1 local_6c;
  undefined4 local_64;
  
  puVar4 = PTR_DAT_04bb37e0;
  if (7 < *param_3) {
    return false;
  }
  if ((*(byte *)(**(long **)PTR_DAT_04bb27d0 + 0x476) < 2) && ((int)DAT_0547b48c <= DAT_0547b490)) {
    puVar1 = PTR_DAT_04bc2e90 + 0x10;
    puVar2 = PTR_DAT_04bb2010 + 0x10;
    uVar11 = DAT_0547b48c;
    do {
      local_b4 = *(undefined4 *)puVar4;
      uStack_b0 = *(undefined4 *)(puVar4 + 4);
      local_bc = 0;
      local_b7 = 0;
      local_b8 = *PTR_DAT_04bb32e0;
      local_ac = 0xfffe;
      if (7 < local_b8) {
        local_b8 = 0xff;
      }
      local_c8 = puVar1;
      local_c0 = uVar11;
      FUN_0277d4ac(&local_ac);
      local_a4 = 0xfffe;
      FUN_0277d4ac(&local_a4);
      local_9c = 0;
      local_94 = 0;
      local_78 = 0x2400000000;
      uVar7 = (uint)*param_3;
      bVar5 = 7 < uVar7;
      local_8c = 0;
      uStack_80 = 0;
      if (bVar5) {
        uVar7 = 0xff;
      }
      local_70 = 0;
      if (bVar5) {
        uVar7 = 0xffffffff;
      }
      local_6c = 0;
      local_e0 = (undefined *)CONCAT44(local_e0._4_4_,local_c0);
      lVar8 = *(long *)(*(long *)PTR_DAT_04bbc218 + 0x18);
      if (*(uint *)(*(long *)PTR_DAT_04bbc218 + 0x10) <= local_c0) {
        local_c0 = 0;
      }
      puVar10 = *(uint **)(lVar8 + (long)(int)local_c0 * 0x18 + 0x10);
      local_88 = puVar2;
      if ((0 < (int)*puVar10) && (uVar7 < *(uint *)(lVar8 + (long)(int)local_c0 * 0x18 + 8))) {
        uVar9 = 0;
        lVar8 = 0x2c;
        do {
          if (((uVar9 < puVar10[(long)(int)uVar7 * 4]) &&
              (*(long *)(puVar10 + (long)(int)uVar7 * 4 + 2) != 0)) &&
             (*(int *)(*(long *)(puVar10 + (long)(int)uVar7 * 4 + 2) + lVar8) == 0)) {
            if (-1 < (int)uVar9) {
              if (uVar11 == 0) {
                return false;
              }
              local_bc = 0;
              local_b7 = 0;
              local_b4 = *(undefined4 *)puVar4;
              uStack_b0 = *(undefined4 *)(puVar4 + 4);
              local_b8 = *PTR_DAT_04bb32e0;
              local_ac = 0xfffe;
              local_c8 = PTR_DAT_04bc2e90 + 0x10;
              if (7 < local_b8) {
                local_b8 = 0xff;
              }
              local_c0 = uVar11;
              FUN_0277d4ac(&local_ac);
              local_a4 = 0xfffe;
              FUN_0277d4ac(&local_a4);
              local_9c = 0;
              local_94 = 0;
              local_8c = 0;
              local_88 = PTR_DAT_04bb2010 + 0x10;
              local_70 = 0;
              local_6c = 0;
              uStack_80 = 0;
              local_78 = 0x2400000000;
              bVar3 = *param_3;
              local_bc = (uint)bVar3;
              if (7 < local_bc) {
                local_bc = 0xffffffff;
              }
              if (bVar3 < 8) {
                local_b8 = bVar3;
              }
              local_cc = 0;
              local_b7 = 1;
              lVar8 = *(long *)PTR_DAT_04bb27c8;
              if (((lVar8 != 0) && (*(long *)(lVar8 + 0xa8) != 0)) &&
                 (*(char *)(lVar8 + 0x11c8) == '\0')) {
                FUN_0093a950(lVar8 + 0x28,param_2,&local_cc);
              }
              local_d0[0] = '\0';
              local_d8 = (int)((float)(int)*param_2 / 5.0) - (uint)(*param_2 < 0.0);
              local_d4 = (int)((float)(int)param_2[2] / 5.0) - (uint)(param_2[2] < 0.0);
              local_e0 = PTR_DAT_04bbbad8 + 0x10;
              if ((local_d8 & 1) != 0) {
                local_d8 = local_d8 - 1;
              }
              if ((local_d4 & 1) != 0) {
                local_d4 = local_d4 - 1;
              }
              local_64 = local_cc;
              lVar8 = FUN_009807cc(*(long *)PTR_DAT_04bb46c8 + 8,local_cc);
              if (((lVar8 == 0) ||
                  (pcVar6 = (char *)FUN_009823a0(lVar8,0xd,0x58da05ed,
                                                 *(undefined8 *)PTR_DAT_04bb5d10),
                  pcVar6 == (char *)0x0)) || (*pcVar6 == '\0')) {
                uVar9 = FUN_022b6400(&local_c8,param_1,&local_e0,param_2,uVar11,local_d0,0);
                if ((uVar9 & 1) == 0) {
                  return false;
                }
              }
              else {
                uVar9 = FUN_022b6400(&local_c8,param_1,&local_e0,param_2,uVar11,local_d0,1);
                if ((uVar9 & 1) == 0) {
                  return false;
                }
              }
              FUN_01392d64(&local_c8);
              FUN_01393458(&local_c8);
              return local_d0[0] != '\0';
            }
            break;
          }
          uVar9 = uVar9 + 1;
          lVar8 = lVar8 + 0x518;
        } while (*puVar10 != uVar9);
      }
      bVar5 = (int)uVar11 < DAT_0547b490;
      uVar11 = uVar11 + 1;
    } while (bVar5);
  }
  return false;
}

