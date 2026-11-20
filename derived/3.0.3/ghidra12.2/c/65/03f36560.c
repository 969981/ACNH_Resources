
undefined8 FUN_03f36560(long param_1,ulong *param_2,int *param_3)

{
  char *pcVar1;
  uint uVar2;
  long *plVar3;
  ulong uVar4;
  long **__src;
  undefined8 uVar5;
  long **pplVar6;
  uint uVar7;
  long *plVar8;
  long lVar9;
  int iVar10;
  long *local_130;
  long **pplStack_128;
  undefined8 local_120;
  long *plStack_118;
  undefined8 local_110;
  int *piStack_108;
  undefined1 local_100;
  int local_f8;
  undefined1 local_f4;
  long **local_f0;
  undefined8 local_e8;
  long *local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  uint local_b8;
  
  plVar8 = *(long **)(param_3 + 6);
  if (plVar8 == (long *)0x0) {
    if ((*(byte *)(param_1 + 0xc) & 1) == 0) {
      plVar8 = *(long **)(param_1 + 0x5e0);
    }
    else {
      local_e0 = (long *)((ulong)local_e0 & 0xffffffffffffff00);
      local_f0 = &local_e0;
      local_e8 = (long *)0x8000000000;
      (**(code **)(*(long *)(param_3 + 2) + 0x18))(param_3 + 2);
      pplVar6 = local_f0;
      __src = *(long ***)(param_3 + 4);
      if (local_f0 != __src) {
        lVar9 = 0;
        do {
          pcVar1 = (char *)((long)__src + lVar9);
          lVar9 = lVar9 + 1;
        } while (*pcVar1 != '\0');
        uVar7 = (int)lVar9 - 1;
        if (local_e8._4_4_ <= (int)uVar7) {
          uVar7 = local_e8._4_4_ - 1;
        }
        if ((int)uVar7 < 1) {
          uVar7 = 0;
        }
        else {
          memcpy(local_f0,__src,(ulong)uVar7);
          pplVar6 = (long **)((long)pplVar6 + (ulong)uVar7);
        }
        *(undefined1 *)pplVar6 = 0;
        local_e8 = (long *)CONCAT44(local_e8._4_4_,uVar7);
      }
      FUN_03f362c0(param_1,&local_f0);
      local_f8 = 0;
      local_f4 = 0;
      plVar8 = (long *)(PTR_DAT_04bb2020 + 0x10);
      pplStack_128 = local_f0;
      local_130 = plVar8;
      FUN_03f3cad0(param_1 + 0x820,&local_f8,&local_130);
      local_100 = 1;
      local_130 = *(long **)(param_1 + 0x5e0);
      local_120 = local_f0;
      local_110 = *(undefined8 *)(param_3 + 4);
      pplStack_128 = (long **)plVar8;
      plStack_118 = plVar8;
      piStack_108 = &local_f8;
      plVar3 = (long *)(**(code **)(**(long **)(param_1 + 0x128) + 0x68))
                                 (*(long **)(param_1 + 0x128),&local_130);
      plVar8 = local_130;
      if (plVar3 != (long *)0x0) {
        plVar8 = plVar3;
      }
    }
  }
  local_c8 = 0;
  uStack_c0 = 0;
  local_d0 = 0;
  pplVar6 = (long **)(PTR_DAT_04bb60d8 + 0x10);
  local_e0 = (long *)0x0;
  uStack_d8 = 0;
  local_b8 = 0;
  local_e8 = (long *)0x0;
  if ((char)plVar8[0xf] != '\0') {
    local_f0 = pplVar6;
    (**(code **)(*plVar8 + 0x20))(plVar8);
    local_b8 = 0;
    plVar3 = (long *)(**(code **)(*plVar8 + 0x68))(plVar8,&local_f0,param_3 + 2,0);
    local_e8 = plVar3;
    if (plVar3 != (long *)0x0) {
      local_f8 = 0;
      local_e0 = plVar8;
      if ((char)plVar3[0xf] != '\0') {
        lVar9 = *(long *)(param_1 + 0x260);
        uVar7 = *(uint *)(param_1 + 0x268);
        uVar4 = (**(code **)(*plVar3 + 0x48))(plVar3,&local_f0);
        if ((lVar9 != 0) && ((uVar4 & 1) != 0)) {
          if (local_b8 == 0) {
            (**(code **)(*plVar3 + 0x90))(plVar3,&local_f8,&local_f0,lVar9,uVar7);
          }
          else {
            iVar10 = 0;
            do {
              local_130 = (long *)((ulong)local_130 & 0xffffffff00000000);
              uVar2 = uVar7;
              if ((int)local_b8 <= (int)uVar7) {
                uVar2 = local_b8;
              }
              uVar4 = (**(code **)(*plVar3 + 0x90))(plVar3,&local_130,&local_f0,lVar9,uVar2);
              if ((uVar4 & 1) == 0) break;
              iVar10 = (uint)local_130 + iVar10;
              if ((uint)local_130 < uVar2) break;
              lVar9 = lVar9 + ((ulong)local_130 & 0xffffffff);
              uVar7 = uVar7 - uVar2;
            } while (uVar7 != 0);
            local_f8 = iVar10;
          }
        }
      }
      if (*param_3 == 1) {
        plVar8 = (long *)FUN_038cd970(*(undefined4 *)(*(long *)(param_1 + 0x260) + 4));
      }
      else if (*param_3 == 2) {
        lVar9 = FUN_03c2fb70(&local_130,*(undefined8 *)(param_1 + 0x260),local_f8,0);
        plVar8 = (long *)0x0;
        if (local_120._4_4_ != 1) {
          plVar8 = local_130;
        }
        if (lVar9 != 0) {
          plVar8 = (long *)0xfffffffffffffffe;
        }
        if (((long *)0xfffffffffffffffd < plVar8) || ((int)plVar8 == -1)) goto LAB_03f3681c;
      }
      else {
        plVar8 = (long *)0x0;
      }
      *param_2 = (ulong)((int)plVar8 + 0x1fU & 0xffffffe0);
      uVar5 = 1;
      goto LAB_03f36848;
    }
  }
LAB_03f3681c:
  uVar5 = 0;
LAB_03f36848:
  plVar8 = local_e0;
  if ((local_e0 != (long *)0x0) && ((char)local_e0[0xf] != '\0')) {
    local_f0 = pplVar6;
    uVar4 = (**(code **)(*local_e0 + 0x48))(local_e0,&local_f0);
    if ((uVar4 & 1) != 0) {
      (**(code **)(*plVar8 + 0x70))(plVar8,&local_f0);
    }
  }
  return uVar5;
}

