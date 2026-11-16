
uint FUN_02556d7c(undefined4 *param_1,byte *param_2,int param_3)

{
  undefined4 uVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  uint uVar7;
  int iVar8;
  ulong uVar9;
  uint *puVar10;
  long lVar11;
  long lVar12;
  undefined *local_90;
  undefined4 local_88;
  undefined4 local_84;
  long local_80;
  undefined2 local_78;
  undefined1 local_76;
  undefined1 local_75;
  undefined4 local_74;
  undefined *local_70;
  char *pcStack_68;
  
  puVar5 = PTR_DAT_04bb43c0;
  local_78 = *(undefined2 *)param_1;
  local_76 = *(undefined1 *)((long)param_1 + 2);
  local_75 = *(undefined1 *)((long)param_1 + 3);
  uVar4 = *param_1;
  uVar3 = *param_1;
  uVar1 = param_1[1];
  lVar11 = *(long *)PTR_DAT_04bb43c0;
  local_74 = uVar1;
  uVar7 = FUN_0277d6c4(&local_78);
  puVar6 = PTR_DAT_04bc0510;
  lVar12 = *(long *)puVar5;
  if (lVar12 != 0) {
    lVar11 = *(long *)(lVar11 + 0x57e58);
    uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar11 + 0x1f8);
    if ((uVar7 < *(uint *)(lVar11 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar11 + 0x1e0) + (long)(int)uVar7 * 8) != 0)) {
      local_90 = PTR_DAT_04bc0510 + 0x10;
      local_80 = 0;
      local_88 = uVar3;
      local_84 = uVar1;
      uVar7 = FUN_0277d6c4(&local_88);
      if (*(long *)puVar5 != 0) {
        lVar11 = *(long *)(lVar12 + 0x57e58);
        uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar11 + 0x1f8);
        if ((uVar7 < *(uint *)(lVar11 + 0x1d8)) &&
           (*(long *)(*(long *)(lVar11 + 0x1e0) + (long)(int)uVar7 * 8) != 0)) {
          lVar11 = *(long *)PTR_DAT_04bc0428;
          uVar7 = FUN_0277d6c4(&local_78);
          uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar11 + 0x1f8);
          if (uVar7 < *(uint *)(lVar11 + 0x1d8)) {
            lVar11 = *(long *)(*(long *)(lVar11 + 0x1e0) + (long)(int)uVar7 * 8);
            if (lVar11 != 0) {
              local_80 = lVar11;
            }
          }
        }
      }
      uVar9 = FUN_01ae5784(&local_90);
      if ((uVar9 & 1) == 0) {
        local_70 = PTR_DAT_04bb2020 + 0x10;
        pcStack_68 = "TodayFortune";
        iVar8 = FUN_0274bce0(param_2,&local_70);
        local_70 = (undefined *)CONCAT44(local_70._4_4_,iVar8);
        if (iVar8 == 5) {
          param_3 = 0;
        }
        else if (iVar8 == 6) {
          uVar7 = nn::os::GetSystemTick();
          uVar2 = (uVar7 ^ uVar7 >> 0x1e) * 0x6c078965 + 1;
          uVar7 = uVar2 ^ uVar2 * 0x800;
          uVar2 = (uVar2 ^ uVar2 >> 0x1e) * 0x6c078965 + 2;
          uVar2 = (uVar2 ^ uVar2 >> 0x1e) * 0x6c078965 + 3;
          uVar2 = (uVar2 ^ uVar2 >> 0x1e) * 0x6c078965 + 4;
          if ((uint)((ulong)(uVar7 >> 8 ^ uVar2 >> 0x13 ^ uVar7 ^ uVar2) * 99 >> 0x20) < 0x1e) {
            param_3 = param_3 + 1;
          }
        }
      }
      if (*(int *)(PTR_DAT_04bc3a80 + 0x38) == -0x24a26848) {
        uVar7 = 1;
      }
      else {
        local_90 = puVar6 + 0x10;
        lVar11 = *(long *)puVar5;
        local_80 = 0;
        local_88 = uVar4;
        local_84 = uVar1;
        uVar7 = FUN_0277d6c4(&local_88);
        if (*(long *)puVar5 != 0) {
          lVar11 = *(long *)(lVar11 + 0x57e58);
          uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar11 + 0x1f8);
          if ((uVar7 < *(uint *)(lVar11 + 0x1d8)) &&
             (*(long *)(*(long *)(lVar11 + 0x1e0) + (long)(int)uVar7 * 8) != 0)) {
            lVar11 = *(long *)PTR_DAT_04bc0428;
            uVar7 = FUN_0277d6c4(&local_78);
            uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar11 + 0x1f8);
            if (uVar7 < *(uint *)(lVar11 + 0x1d8)) {
              lVar11 = *(long *)(*(long *)(lVar11 + 0x1e0) + (long)(int)uVar7 * 8);
              if (lVar11 != 0) {
                local_80 = lVar11;
              }
            }
          }
        }
        uVar7 = FUN_01ae4c0c(&local_90,param_3);
        if ((uVar7 & 1) != 0) {
          *param_1 = local_88;
          param_1[1] = local_84;
          if (DAT_054f5738 == 0) {
            if ((DAT_054f0960 & 1) == 0) {
              iVar8 = __cxa_guard_acquire(&DAT_054f0960);
              puVar10 = (uint *)&DAT_054f0958;
              if (iVar8 != 0) {
                DAT_054f0958 = 0;
                __cxa_guard_release(&DAT_054f0960);
              }
            }
            else {
              puVar10 = (uint *)&DAT_054f0958;
            }
          }
          else {
            puVar10 = (uint *)(DAT_054f5738 + 0x204);
            if ((ulong)*param_2 < 8) {
              puVar10 = puVar10 + (ulong)*param_2 * 2;
            }
          }
          *puVar10 = *puVar10 | 0x40000;
        }
      }
      goto LAB_02556f04;
    }
  }
  uVar7 = 0;
LAB_02556f04:
  return uVar7 & 1;
}

