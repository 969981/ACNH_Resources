
byte FUN_01522be0(undefined8 param_1,undefined8 param_2,undefined4 *param_3)

{
  uint uVar1;
  undefined *puVar2;
  byte bVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  undefined4 *puVar7;
  ulong uVar8;
  uint *puVar9;
  long *plVar10;
  long lVar11;
  undefined8 *puVar12;
  long *plVar13;
  undefined4 local_70;
  undefined4 uStack_6c;
  long local_68;
  undefined4 local_60;
  undefined4 local_5c;
  undefined *local_58;
  undefined4 local_50;
  undefined4 local_4c;
  byte local_48;
  
  local_50 = 0;
  lVar11 = *(long *)PTR_DAT_04bb2720;
  if (lVar11 == 0) {
    puVar12 = &DAT_055c04a0;
  }
  else {
    puVar12 = &DAT_055c04a0;
    if (*(long *)(lVar11 + 0x330) != 0) {
      puVar12 = (undefined8 *)
                (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                          (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar11 + 0x338));
      iVar4 = FUN_006bd550(*puVar12,0);
      puVar12 = (undefined8 *)PTR_DAT_04bc3a80;
      if (iVar4 != 0x758f7eaf) {
        puVar12 = &DAT_055c04a0;
      }
    }
  }
  local_4c = *(undefined4 *)(puVar12 + 7);
  local_48 = FUN_017baf44();
  local_48 = local_48 & 1;
  local_58 = PTR_DAT_04bb3140 + 0x10;
  puVar7 = (undefined4 *)FUN_01a5190c(&local_58,*param_3,param_2,0);
  local_60 = *puVar7;
  local_5c = puVar7[1];
  uVar8 = FUN_0277e294(&local_60);
  puVar2 = PTR_DAT_04bb43c0;
  if ((uVar8 & 1) != 0) {
    local_68 = 0;
    local_70 = local_60;
    uStack_6c = local_5c;
    lVar11 = *(long *)PTR_DAT_04bb43c0;
    uVar5 = FUN_0277d6c4(&local_70);
    if (*(long *)puVar2 != 0) {
      lVar11 = *(long *)(lVar11 + 0x57e58);
      uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar11 + 0x1f8);
      if ((uVar5 < *(uint *)(lVar11 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar11 + 0x1e0) + (long)(int)uVar5 * 8) != 0)) {
        lVar11 = *(long *)PTR_DAT_04bc0428;
        uVar5 = FUN_0277d6c4(&local_60);
        uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar11 + 0x1f8);
        if (uVar5 < *(uint *)(lVar11 + 0x1d8)) {
          lVar11 = *(long *)(*(long *)(lVar11 + 0x1e0) + (long)(int)uVar5 * 8);
          if (lVar11 != 0) {
            local_68 = lVar11;
          }
        }
      }
    }
    puVar9 = (uint *)FUN_014fbd50(&local_58,*param_3,param_2);
    puVar2 = PTR_DAT_04bb27c0;
    uVar5 = *puVar9;
    if ((uVar5 != 0) && (lVar11 = *(long *)PTR_DAT_04bb27c0, lVar11 != 0)) {
      plVar13 = *(long **)(*(long *)(*(long *)(lVar11 + 0x1c0) + 8) +
                          ((ulong)(uVar5 >> 0x11) & 0x7ff8));
      if ((plVar13 == (long *)0x0) ||
         (((*(uint *)(plVar13 + 0x49) >> 1 & 1) != 0 || (*(uint *)(plVar13 + 0x46) != uVar5)))) {
        plVar13 = (long *)0x0;
      }
      if ((*(int *)(lVar11 + 0x288) == 1) || (*(int *)(lVar11 + 0x288) == -1)) {
        plVar10 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
        lVar11 = *(long *)puVar2;
        iVar4 = (**(code **)(*plVar10 + 0x60))();
        if (iVar4 < 0x11) {
          uVar5 = 1;
        }
        else {
          if (4 < *(uint *)(lVar11 + 0x5e8)) goto LAB_01522e34;
          uVar5 = 0x1aU >> (ulong)(*(uint *)(lVar11 + 0x5e8) & 0x1f) & 1;
        }
      }
      else {
LAB_01522e34:
        uVar5 = 0;
      }
      if (plVar13 != (long *)0x0) {
        lVar11 = plVar13[0x2a];
        uVar1 = *(uint *)(plVar13 + 0x49);
        if (((*PTR_DAT_04bb5928 & 1) == 0) &&
           (iVar4 = __cxa_guard_acquire(PTR_DAT_04bb5928), iVar4 != 0)) {
          *(undefined **)PTR_DAT_04bb5920 = PTR_DAT_04bb3290 + 0x10;
          __cxa_guard_release(PTR_DAT_04bb5928);
        }
        uVar6 = (**(code **)(*plVar13 + 0x20))(plVar13,PTR_DAT_04bb5920);
        if (((((int)lVar11 == 1) && ((uVar6 & uVar5) != 0)) && ((uVar1 >> 4 & 1) != 0)) &&
           (plVar13[0x151] != 0)) {
          bVar3 = *(char *)(plVar13[0x151] + 0x308) != '\0';
          goto LAB_01522ec8;
        }
      }
    }
    uVar8 = FUN_0154df90(&local_60);
    if ((uVar8 & 1) != 0) {
      bVar3 = FUN_014fd19c(&local_58,param_2,*param_3);
      goto LAB_01522ec8;
    }
  }
  bVar3 = 0;
LAB_01522ec8:
  return bVar3 & 1;
}

