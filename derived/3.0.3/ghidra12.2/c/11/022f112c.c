
uint FUN_022f112c(float param_1,undefined1 param_2 [16],float param_3,undefined8 param_4,
                 float *param_5)

{
  uint *puVar1;
  byte *pbVar2;
  undefined4 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined2 uVar6;
  byte bVar7;
  undefined *puVar8;
  int iVar9;
  uint uVar10;
  undefined2 *puVar11;
  long lVar12;
  ulong uVar13;
  undefined8 *puVar14;
  long lVar15;
  float fVar16;
  undefined **local_c0;
  undefined8 uStack_b8;
  byte local_b0;
  undefined1 local_af;
  undefined *local_a8;
  undefined2 local_a0;
  undefined1 local_9e;
  undefined1 local_9d;
  undefined4 local_9c;
  long local_98;
  undefined2 local_90;
  undefined1 local_8e;
  undefined1 local_8d;
  undefined4 local_8c;
  undefined *local_88;
  undefined4 local_80;
  undefined4 local_7c;
  byte local_78;
  undefined **local_70;
  uint local_68;
  uint local_64;
  
  if (DAT_04c487d4 != -1) {
    local_88 = (undefined *)CONCAT44(local_88._4_4_,1);
    puVar1 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)DAT_04c487d4 * 8);
    if (0xff < (uint)(int)DAT_04c487d4) {
      puVar1 = (uint *)PTR_DAT_04bc39f8;
    }
    if ((*puVar1 >> 1 & 1) != 0) {
      lVar12 = **(long **)PTR_DAT_04bb27d0;
      if (1 < *(byte *)(lVar12 + 0x476)) {
        bVar7 = *(byte *)(lVar12 + 0x473);
        if ((long)(char)bVar7 != 0xffffffffffffffff) {
          uVar13 = (long)(char)bVar7 & 0xffffffff;
          pbVar2 = (byte *)(lVar12 + 0x48) + uVar13 * 0x80;
          if (7 < bVar7) {
            pbVar2 = (byte *)(lVar12 + 0x48);
          }
          if ((*pbVar2 >> 3 & 1) != 0) {
            lVar12 = (*(long **)PTR_DAT_04bb27d0)[2] + 0x108;
            lVar15 = lVar12 + uVar13 * 0xc;
            if (0xb < bVar7) {
              lVar15 = lVar12;
            }
            if (*(char *)(lVar15 + 10) == '\0') goto LAB_022f1524;
          }
        }
      }
      local_68 = (int)((float)(int)param_1 / 5.0) - (uint)(param_1 < 0.0);
      local_64 = (int)((float)(int)param_3 / 5.0) - (uint)(param_3 < 0.0);
      local_70 = &PTR_FUN_04986b58;
      if ((local_68 & 1) != 0) {
        local_68 = local_68 - 1;
      }
      if ((local_64 & 1) != 0) {
        local_64 = local_64 - 1;
      }
      param_1 = ((float)(int)local_68 * 5.0 + 5.0) - param_1;
      param_3 = ((float)(int)local_64 * 5.0 + 5.0) - param_3;
      if (param_3 * param_3 + param_1 * param_1 < 25.0) {
        local_80 = 0;
        if (DAT_05aed670 == 0) {
          puVar14 = &DAT_055c04a0;
        }
        else {
          puVar14 = &DAT_055c04a0;
          if (*(long *)(DAT_05aed670 + 0x330) != 0) {
            puVar14 = (undefined8 *)
                      (**(code **)(*DAT_05aed668 + 0x18))
                                (DAT_05aed668,*(undefined4 *)(DAT_05aed670 + 0x338));
            iVar9 = FUN_006bd550(*puVar14,0);
            puVar14 = (undefined8 *)PTR_DAT_04bc3a80;
            if (iVar9 != 0x758f7eaf) {
              puVar14 = &DAT_055c04a0;
            }
          }
        }
        local_7c = *(undefined4 *)(puVar14 + 7);
        local_78 = FUN_017baf44();
        local_78 = local_78 & 1;
        local_88 = PTR_DAT_04bb6268 + 0x10;
        puVar11 = (undefined2 *)FUN_01a5190c(&local_88,0,&local_70,0);
        puVar8 = PTR_DAT_04bb43c0;
        uVar6 = *puVar11;
        uVar4 = *(undefined1 *)(puVar11 + 1);
        uVar5 = *(undefined1 *)((long)puVar11 + 3);
        uVar3 = *(undefined4 *)(puVar11 + 2);
        lVar15 = *(long *)PTR_DAT_04bb43c0;
        local_90 = uVar6;
        local_8e = uVar4;
        local_8d = uVar5;
        local_8c = uVar3;
        uVar10 = FUN_0277d6c4(&local_90);
        lVar12 = *(long *)puVar8;
        if (lVar12 != 0) {
          lVar15 = *(long *)(lVar15 + 0x57e58);
          uVar10 = (uVar10 & 0xffff) - (uint)*(ushort *)(lVar15 + 0x1f8);
          if ((uVar10 < *(uint *)(lVar15 + 0x1d8)) &&
             (*(long *)(*(long *)(lVar15 + 0x1e0) + (long)(int)uVar10 * 8) != 0)) {
            local_a8 = PTR_DAT_04bc0510 + 0x10;
            local_98 = 0;
            local_a0 = uVar6;
            local_9e = uVar4;
            local_9d = uVar5;
            local_9c = uVar3;
            uVar10 = FUN_0277d6c4(&local_a0);
            if (*(long *)puVar8 != 0) {
              lVar12 = *(long *)(lVar12 + 0x57e58);
              uVar10 = (uVar10 & 0xffff) - (uint)*(ushort *)(lVar12 + 0x1f8);
              if ((uVar10 < *(uint *)(lVar12 + 0x1d8)) &&
                 (*(long *)(*(long *)(lVar12 + 0x1e0) + (long)(int)uVar10 * 8) != 0)) {
                lVar12 = *(long *)PTR_DAT_04bc0428;
                uVar10 = FUN_0277d6c4(&local_90);
                uVar10 = (uVar10 & 0xffff) - (uint)*(ushort *)(lVar12 + 0x1f8);
                if (uVar10 < *(uint *)(lVar12 + 0x1d8)) {
                  lVar12 = *(long *)(*(long *)(lVar12 + 0x1e0) + (long)(int)uVar10 * 8);
                  if (lVar12 != 0) {
                    local_98 = lVar12;
                  }
                }
              }
            }
            local_c0 = (undefined **)0xa12;
            FUN_0277d4ac(&local_c0);
            uVar13 = FUN_0277d7b4(&local_a0,&local_c0);
            if (((uVar13 & 1) != 0) && (uVar13 = FUN_0277e024(&local_a0), (uVar13 & 1) != 0)) {
              local_af = 0;
              local_b0 = *PTR_DAT_04bb32e0;
              if (7 < local_b0) {
                local_b0 = 0xff;
              }
              local_c0 = &PTR_LAB_04a7ef60;
              uStack_b8 = 0x11;
              uVar10 = FUN_022f1550(&local_c0,&local_70,param_4);
              if ((param_5 != (float *)0x0) && ((uVar10 & 1) != 0)) {
                *param_5 = (float)(int)local_68 * 5.0 + 5.0;
                lVar12 = *(long *)PTR_DAT_04bb27c8;
                param_5[2] = (float)(int)local_64 * 5.0 + 5.0;
                fVar16 = (float)FUN_0093a950(lVar12 + 0x28,param_5,0);
                param_5[1] = fVar16;
              }
              goto LAB_022f1528;
            }
          }
        }
      }
    }
  }
LAB_022f1524:
  uVar10 = 0;
LAB_022f1528:
  return uVar10 & 1;
}

