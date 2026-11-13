
void FUN_00d04a14(undefined4 param_1,undefined4 param_2,undefined4 param_3,long param_4,
                 undefined8 param_5,undefined4 *param_6)

{
  uint uVar1;
  undefined *puVar2;
  uint uVar3;
  int iVar4;
  long *plVar5;
  ulong uVar6;
  undefined8 uVar7;
  long lVar8;
  long *plVar9;
  undefined8 *puVar10;
  uint uVar11;
  undefined4 local_5c;
  int local_58;
  undefined4 local_54;
  undefined4 uStack_50;
  undefined4 local_4c;
  undefined8 local_48;
  
  local_54 = param_1;
  uStack_50 = param_2;
  local_4c = param_3;
  uVar3 = FUN_020a4f40(*(undefined8 *)PTR_DAT_04bb3968,param_5,PTR_DAT_04bb3238,1);
  puVar2 = PTR_DAT_04bb27c0;
  if (uVar3 == 0) {
    return;
  }
  lVar8 = *(long *)PTR_DAT_04bb27c0;
  if (lVar8 == 0) {
    return;
  }
  plVar9 = *(long **)(*(long *)(*(long *)(lVar8 + 0x1c0) + 8) + (ulong)(uVar3 >> 0x14) * 8);
  if (((plVar9 == (long *)0x0) || ((*(uint *)(plVar9 + 0x49) >> 1 & 1) != 0)) ||
     (*(uint *)(plVar9 + 0x46) != uVar3)) {
    plVar9 = (long *)0x0;
  }
  if (*(int *)(lVar8 + 0x288) == 1 || *(int *)(lVar8 + 0x288) == -1) {
    plVar5 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar8 = *(long *)puVar2;
    iVar4 = (**(code **)(*plVar5 + 0x60))();
    if (iVar4 < 0x11) {
      uVar11 = 1;
      goto joined_r0x00d04afc;
    }
    if (*(uint *)(lVar8 + 0x5e8) < 5) {
      uVar11 = 0x1aU >> (ulong)(*(uint *)(lVar8 + 0x5e8) & 0x1f) & 1;
      goto joined_r0x00d04afc;
    }
  }
  uVar11 = 0;
joined_r0x00d04afc:
  if (plVar9 != (long *)0x0) {
    lVar8 = plVar9[0x2a];
    if (((*PTR_DAT_04bb37d8 & 1) == 0) &&
       (iVar4 = __cxa_guard_acquire(PTR_DAT_04bb37d8), iVar4 != 0)) {
      *(undefined **)PTR_DAT_04bb37d0 = PTR_DAT_04bb3750 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb37d8);
    }
    uVar6 = (**(code **)(*plVar9 + 0x20))(plVar9,PTR_DAT_04bb37d0);
    uVar1 = 0;
    if ((int)lVar8 == 1) {
      uVar1 = uVar11;
    }
    if (((uVar6 & 1) != 0) && (uVar1 != 0)) {
      local_58 = 0;
      FUN_00d03980(&local_58,param_4 + 0x178);
      if (local_58 == 1) {
        uVar7 = FUN_01e57b44(plVar9[0x76]);
        uVar6 = FUN_0277d7b4(uVar7,plVar9[0x77] + 0xae84);
        if ((uVar6 & 1) == 0) {
          FUN_01e57c78(plVar9[0x76],PTR_DAT_04bb37e0,0,1);
        }
        puVar10 = (undefined8 *)plVar9[0x77];
        if (((*PTR_DAT_04bb7f40 & 1) == 0) &&
           (iVar4 = __cxa_guard_acquire(PTR_DAT_04bb7f40), iVar4 != 0)) {
          *(undefined **)PTR_DAT_04bb7f38 = PTR_DAT_04bb6d20 + 0x10;
          __cxa_guard_release(PTR_DAT_04bb7f40);
        }
        if ((puVar10 != (undefined8 *)0x0) &&
           (uVar6 = (**(code **)*puVar10)(puVar10,PTR_DAT_04bb7f38), (uVar6 & 1) != 0)) {
          FUN_01febe60(puVar10);
        }
      }
      if (((int)plVar9[0xea] == 2) && (lVar8 = plVar9[0x76], lVar8 != 0)) {
        *(uint *)(lVar8 + 0x580) = uVar3;
        *(undefined ***)(lVar8 + 0x578) = &PTR_LAB_0494b178;
        local_48 = 0;
        FUN_01e5a930(0x40000000,lVar8,0xc,PTR_DAT_04bb2150,(long)&local_48 + 4,&local_48,
                     PTR_DAT_04bc1600,6);
        *(undefined4 *)(lVar8 + 0x3ac) = 0;
      }
      local_5c = *param_6;
      FUN_01e39778(plVar9,&local_54,&local_5c,0);
    }
  }
  return;
}

