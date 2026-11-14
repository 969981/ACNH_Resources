
/* WARNING: Removing unreachable block (ram,0x0187f4c8) */

void FUN_0187efb8(float param_1,long param_2,uint *param_3)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  float *pfVar4;
  long *plVar5;
  float *pfVar6;
  float fVar7;
  float fVar8;
  undefined *local_70;
  int local_68;
  int iStack_64;
  undefined1 auStack_60 [8];
  long *local_58;
  float local_4c;
  float local_48;
  float local_44;
  undefined4 local_34;
  
  pfVar6 = (float *)(PTR_DAT_04bb2d00 + ((ulong)(*param_3 >> 0x14) & 0xff0));
  fVar7 = (float)(*param_3 & 0xffffff) * 5.9604645e-08;
  local_70 = (undefined *)
             ((ulong)CONCAT31((int3)((uint)local_70._0_4_ >> 8),*(undefined1 *)(param_2 + 0x494)) ^
             1);
  lVar3 = *(long *)(param_2 + 0x300);
  local_48 = *(float *)(lVar3 + 0x27c) + 0.0;
  local_4c = (*pfVar6 + fVar7 * pfVar6[1]) * param_1 + *(float *)(lVar3 + 0x278);
  local_44 = (pfVar6[2] + fVar7 * pfVar6[3]) * param_1 + *(float *)(lVar3 + 0x280);
  uVar2 = FUN_01a1e110(&local_4c,lVar3 + 0x278,PTR_FUN_04bbe990,&local_70);
  if ((uVar2 & 0x3c) == 0) {
    if (((DAT_052aa8e0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_052aa8e0), iVar1 != 0)) {
      DAT_052aa8d8 = 0x40a00000;
      __cxa_guard_release(&DAT_052aa8e0);
    }
    if (((DAT_052aa8f0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_052aa8f0), iVar1 != 0)) {
      DAT_052aa8e8 = 0x40a00000;
      __cxa_guard_release(&DAT_052aa8f0);
    }
    local_34 = 0;
    FUN_006f0400(local_4c - *(float *)(*(long *)(param_2 + 0x300) + 0x278),
                 local_44 - *(float *)(*(long *)(param_2 + 0x300) + 0x280));
    uVar2 = FUN_0187e394(DAT_052aa8d8,DAT_052aa8e8,param_2,&local_4c,&local_34);
    if ((uVar2 & 1) == 0) {
      lVar3 = *(long *)(param_2 + 0x300);
      local_4c = local_4c + (*(float *)(lVar3 + 0x278) - local_4c) * 0.2;
      local_48 = local_48 + (*(float *)(lVar3 + 0x27c) - local_48) * 0.2;
      local_44 = local_44 + (*(float *)(lVar3 + 0x280) - local_44) * 0.2;
      uVar2 = FUN_0187e394(DAT_052aa8d8,DAT_052aa8e8,param_2,&local_4c,&local_34);
      if ((uVar2 & 1) == 0) {
        lVar3 = *(long *)(param_2 + 0x300);
        local_4c = local_4c + (*(float *)(lVar3 + 0x278) - local_4c) * 0.2;
        local_48 = local_48 + (*(float *)(lVar3 + 0x27c) - local_48) * 0.2;
        local_44 = local_44 + (*(float *)(lVar3 + 0x280) - local_44) * 0.2;
        uVar2 = FUN_0187e394(DAT_052aa8d8,DAT_052aa8e8,param_2,&local_4c,&local_34);
        if ((uVar2 & 1) == 0) {
          lVar3 = *(long *)(param_2 + 0x300);
          local_4c = local_4c + (*(float *)(lVar3 + 0x278) - local_4c) * 0.2;
          local_48 = local_48 + (*(float *)(lVar3 + 0x27c) - local_48) * 0.2;
          local_44 = local_44 + (*(float *)(lVar3 + 0x280) - local_44) * 0.2;
          uVar2 = FUN_0187e394(DAT_052aa8d8,DAT_052aa8e8,param_2,&local_4c,&local_34);
          if ((uVar2 & 1) == 0) {
            lVar3 = *(long *)(param_2 + 0x300);
            local_4c = local_4c + (*(float *)(lVar3 + 0x278) - local_4c) * 0.2;
            local_48 = local_48 + (*(float *)(lVar3 + 0x27c) - local_48) * 0.2;
            local_44 = local_44 + (*(float *)(lVar3 + 0x280) - local_44) * 0.2;
            uVar2 = FUN_0187e394(DAT_052aa8d8,DAT_052aa8e8,param_2,&local_4c,&local_34);
            if ((uVar2 & 1) == 0) {
              lVar3 = *(long *)(param_2 + 0x300);
              local_4c = local_4c + (*(float *)(lVar3 + 0x278) - local_4c) * 0.2;
              local_48 = local_48 + (*(float *)(lVar3 + 0x27c) - local_48) * 0.2;
              local_44 = local_44 + (*(float *)(lVar3 + 0x280) - local_44) * 0.2;
              uVar2 = FUN_0187e394(DAT_052aa8d8,DAT_052aa8e8,param_2,&local_4c,&local_34);
              if ((uVar2 & 1) == 0) {
                lVar3 = *(long *)(param_2 + 0x300);
                local_4c = local_4c + (*(float *)(lVar3 + 0x278) - local_4c) * 0.2;
                local_48 = local_48 + (*(float *)(lVar3 + 0x27c) - local_48) * 0.2;
                local_44 = local_44 + (*(float *)(lVar3 + 0x280) - local_44) * 0.2;
                uVar2 = FUN_0187e394(DAT_052aa8d8,DAT_052aa8e8,param_2,&local_4c,&local_34);
                if ((uVar2 & 1) == 0) {
                  lVar3 = *(long *)(param_2 + 0x300);
                  local_4c = local_4c + (*(float *)(lVar3 + 0x278) - local_4c) * 0.2;
                  local_48 = local_48 + (*(float *)(lVar3 + 0x27c) - local_48) * 0.2;
                  local_44 = local_44 + (*(float *)(lVar3 + 0x280) - local_44) * 0.2;
                  uVar2 = FUN_0187e394(DAT_052aa8d8,DAT_052aa8e8,param_2,&local_4c,&local_34);
                  if ((uVar2 & 1) == 0) {
                    lVar3 = *(long *)(param_2 + 0x300);
                    local_4c = local_4c + (*(float *)(lVar3 + 0x278) - local_4c) * 0.2;
                    local_48 = local_48 + (*(float *)(lVar3 + 0x27c) - local_48) * 0.2;
                    local_44 = local_44 + (*(float *)(lVar3 + 0x280) - local_44) * 0.2;
                    uVar2 = FUN_0187e394(DAT_052aa8d8,DAT_052aa8e8,param_2,&local_4c,&local_34);
                    if ((uVar2 & 1) == 0) {
                      lVar3 = *(long *)(param_2 + 0x300);
                      local_4c = local_4c + (*(float *)(lVar3 + 0x278) - local_4c) * 0.2;
                      local_48 = local_48 + (*(float *)(lVar3 + 0x27c) - local_48) * 0.2;
                      local_44 = local_44 + (*(float *)(lVar3 + 0x280) - local_44) * 0.2;
                      uVar2 = FUN_0187e394(DAT_052aa8d8,DAT_052aa8e8,param_2,&local_4c,&local_34);
                      if ((uVar2 & 1) == 0) {
                        lVar3 = *(long *)(param_2 + 0x300);
                        local_4c = local_4c + (*(float *)(lVar3 + 0x278) - local_4c) * 0.2;
                        local_48 = local_48 + (*(float *)(lVar3 + 0x27c) - local_48) * 0.2;
                        local_44 = local_44 + (*(float *)(lVar3 + 0x280) - local_44) * 0.2;
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    local_58 = (long *)0x0;
    if ((*(long *)PTR_DAT_04bb2200 != 0) &&
       (lVar3 = *(long *)(*(long *)PTR_DAT_04bb2200 + 0x50), lVar3 != 0)) {
      local_70 = (undefined *)((ulong)local_70 & 0xffffffff00000000);
      plVar5 = *(long **)(lVar3 + 0x118);
      if ((plVar5 != (long *)0x0) &&
         (((char)plVar5[7] != '\0' &&
          (uVar2 = (**(code **)(*plVar5 + 0xc0))(plVar5), (uVar2 & 1) != 0)))) {
        local_58 = plVar5;
      }
    }
    pfVar6 = &local_44;
    local_70 = PTR_DAT_04bb2010 + 0x10;
    local_68 = (int)((float)(int)local_4c / 5.0) - (uint)(local_4c < 0.0);
    iStack_64 = (int)((float)(int)local_44 / 5.0) - (uint)(local_44 < 0.0);
    FUN_015af3fc(&local_58,auStack_60,&local_70,0);
    iVar1 = FUN_015aff78(&local_58,auStack_60,0);
    if (0 < iVar1) {
      local_4c = (float)(int)((int)((float)(int)local_4c / 10.0) - (uint)(local_4c < 0.0)) * 10.0 +
                 5.0;
      local_44 = (float)(int)((int)((float)(int)local_44 / 10.0) - (uint)(local_44 < 0.0)) * 10.0 +
                 5.0;
    }
    pfVar4 = &local_4c;
  }
  else {
    lVar3 = *(long *)(param_2 + 0x300);
    pfVar4 = (float *)(lVar3 + 0x278);
    local_48 = *(float *)(lVar3 + 0x27c);
    pfVar6 = (float *)(lVar3 + 0x280);
  }
  fVar7 = *pfVar4;
  fVar8 = *pfVar6;
  *(float *)(param_2 + 0x32c) = local_48;
  *(float *)(param_2 + 0x328) = fVar7;
  *(float *)(param_2 + 0x330) = fVar8;
  return;
}

