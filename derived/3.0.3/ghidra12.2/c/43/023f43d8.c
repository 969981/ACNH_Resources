
void FUN_023f43d8(long param_1)

{
  undefined *puVar1;
  byte *pbVar2;
  undefined *puVar3;
  bool bVar4;
  uint uVar5;
  ulong uVar6;
  long lVar7;
  undefined4 *puVar8;
  byte bVar9;
  byte bVar10;
  long lVar11;
  undefined8 local_148;
  undefined4 local_140;
  undefined8 local_138;
  undefined8 local_130;
  undefined8 local_128;
  float local_120;
  undefined4 uStack_11c;
  long local_118;
  undefined1 auStack_d0 [96];
  undefined4 local_70;
  int local_44;
  
  uVar5 = *(uint *)(param_1 + 0x17cc);
  *(uint *)(param_1 + 0x17cc) = uVar5 & 0xfffffffe;
  if ((uVar5 & 1) != 0) {
    uVar5 = (uint)*(byte *)(param_1 + 0x1ee8);
    bVar4 = 7 < uVar5;
    if (bVar4) {
      uVar5 = 0xff;
    }
    lVar7 = *(long *)PTR_DAT_04bb4f78 + 0x20 + (ulong)uVar5 * 0x740;
    if (bVar4) {
      lVar7 = *(long *)PTR_DAT_04bb4f78 + 0x20;
    }
    if (*(short *)(param_1 + 0x18e1) == *(short *)PTR_DAT_04bb6298) {
      *(undefined4 *)(lVar7 + 0x424) = 3;
      FUN_01393458(lVar7 + 0x4c8);
    }
    else {
      *(undefined4 *)(lVar7 + 0x424) = 4;
    }
  }
  local_44 = (uint)*(ushort *)(param_1 + 0x1900) << 0x10;
  local_128 = (undefined *)
              CONCAT44((float)(int)*(short *)(param_1 + 0x1906) * 0.25,
                       (float)*(int *)(param_1 + 0x1902) * 0.001);
  local_120 = (float)*(int *)(param_1 + 0x1908) * 0.001;
  (**(code **)(**(long **)(param_1 + 0x68) + 0x100))(*(long **)(param_1 + 0x68),&local_128);
  (**(code **)(**(long **)(param_1 + 0x68) + 0x160))(*(long **)(param_1 + 0x68),&local_44);
  *(uint *)(param_1 + 0x17d4) = *(uint *)(param_1 + 0x17d4) & 0xffffdfff;
  if (*(int *)(param_1 + 0x178) == 0) {
    lVar7 = *(long *)PTR_DAT_04bb39b0;
    if ((lVar7 != 0) && (*(int *)(lVar7 + 0x15c) != 0)) {
      pbVar2 = PTR_DAT_04bb32e0;
      if (*(int *)(lVar7 + 0x15c) != 0) {
        pbVar2 = (byte *)(lVar7 + 0x158);
      }
      bVar10 = *(byte *)(param_1 + 0x1ee8);
      bVar9 = *pbVar2;
      if (7 < bVar9) {
        bVar9 = 0xff;
      }
      if (7 < bVar10) {
        bVar10 = 0xff;
      }
      if (bVar9 != bVar10) {
        return;
      }
    }
    FUN_016d73fc(&local_138,*(long *)(param_1 + 0x68) + 0x278);
    puVar3 = PTR_DAT_04bb43c0;
    lVar11 = *(long *)PTR_DAT_04bb43c0;
    uVar5 = FUN_0277d6c4(&local_138);
    lVar7 = *(long *)puVar3;
    if (lVar7 != 0) {
      lVar11 = *(long *)(lVar11 + 0x57e58);
      uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar11 + 0x1f8);
      if ((uVar5 < *(uint *)(lVar11 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar11 + 0x1e0) + (long)(int)uVar5 * 8) != 0)) {
        local_118 = 0;
        local_128 = PTR_DAT_04bc0510 + 0x10;
        local_120 = (float)local_138;
        uStack_11c = local_138._4_4_;
        uVar5 = FUN_0277d6c4(&local_120);
        if (*(long *)puVar3 != 0) {
          lVar7 = *(long *)(lVar7 + 0x57e58);
          uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar7 + 0x1f8);
          if ((uVar5 < *(uint *)(lVar7 + 0x1d8)) &&
             (*(long *)(*(long *)(lVar7 + 0x1e0) + (long)(int)uVar5 * 8) != 0)) {
            lVar7 = *(long *)PTR_DAT_04bc0428;
            uVar5 = FUN_0277d6c4(&local_138);
            uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar7 + 0x1f8);
            if ((uVar5 < *(uint *)(lVar7 + 0x1d8)) &&
               (lVar7 = *(long *)(*(long *)(lVar7 + 0x1e0) + (long)(int)uVar5 * 8), lVar7 != 0)) {
              local_118 = lVar7;
            }
          }
        }
        uVar6 = FUN_01aea160(&local_128);
        puVar3 = PTR_DAT_04bb4718;
        if (((uVar6 & 1) != 0) && ((ulong)*(byte *)(param_1 + 0x1ee8) < 8)) {
          local_138 = (undefined *)CONCAT44(local_138._4_4_,1);
          local_128 = (undefined *)CONCAT44(local_128._4_4_,1);
          if (((*(byte *)(*(long *)PTR_DAT_04bb4718 + (ulong)*(byte *)(param_1 + 0x1ee8) * 0x80 +
                         0x302) >> 1 & 1) != 0) &&
             ((*(long *)PTR_DAT_04bb7ff8 == 0 || (*(int *)(*(long *)PTR_DAT_04bb7ff8 + 0x588) == 0))
             )) {
            local_148 = CONCAT44(local_148._4_4_,0x15);
            uVar6 = FUN_0290cbcc(&local_148);
            if (((uVar6 & 1) == 0) && (uVar6 = FUN_023f4840(param_1), (uVar6 & 1) == 0)) {
              *(uint *)(param_1 + 0x17d4) = *(uint *)(param_1 + 0x17d4) | 0x2000;
              FUN_0231f5f8(param_1);
              FUN_0230e2b0(&local_128);
              puVar1 = PTR_DAT_04bb2020 + 0x10;
              local_130 = "Ftr_Toilet";
              local_138 = puVar1;
              FUN_006e43a0(&local_128,&local_138);
              local_130 = &DAT_04066c7f;
              local_138 = puVar1;
              FUN_006e43a0(auStack_d0,&local_138);
              local_70 = 0xc;
              FUN_02328d9c(param_1,&local_128);
              FUN_02162ecc(&local_138);
              if ((((local_138 != (undefined *)0x0) && ((char)local_130 != '\0')) &&
                  (local_130._1_1_ != '\0')) && (local_130._2_1_ != '\0')) {
                local_148 = *(undefined8 *)(*(long *)(param_1 + 0x68) + 0x278);
                local_140 = *(undefined4 *)(*(long *)(param_1 + 0x68) + 0x280);
                if (((ulong)*(byte *)(param_1 + 0x1ee8) < 8) && (*(long *)puVar3 != 0)) {
                  puVar8 = (undefined4 *)
                           (*(long *)puVar3 + (ulong)*(byte *)(param_1 + 0x1ee8) * 4 + 0xde8);
                }
                else {
                  puVar8 = (undefined4 *)PTR_DAT_04bb3238;
                }
                FUN_008ff4fc(local_138,*puVar8,&local_148,0);
              }
            }
          }
        }
      }
    }
  }
  return;
}

