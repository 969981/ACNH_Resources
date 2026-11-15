
/* WARNING: Removing unreachable block (ram,0x0236c76c) */
/* WARNING: Removing unreachable block (ram,0x0236c570) */
/* WARNING: Removing unreachable block (ram,0x0236c2a8) */
/* WARNING: Removing unreachable block (ram,0x0236c3f0) */
/* WARNING: Removing unreachable block (ram,0x0236c618) */
/* WARNING: Removing unreachable block (ram,0x0236c98c) */
/* WARNING: Type propagation algorithm not settling */

undefined8 FUN_0236c210(long param_1,byte param_2)

{
  undefined *puVar1;
  uint uVar2;
  bool bVar3;
  int iVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  uint uVar8;
  undefined8 *puVar9;
  long *plVar10;
  char *pcVar11;
  undefined8 local_78;
  char *pcStack_70;
  uint local_68;
  undefined4 local_64;
  undefined8 local_60;
  undefined4 local_58;
  undefined1 local_54;
  float local_50;
  undefined1 local_4c;
  byte local_4b;
  undefined1 local_4a;
  undefined8 local_48;
  
  if ((*(uint *)(param_1 + 0x17cc) >> 0xd & 1) == 0) {
    return 0;
  }
  if ((*(uint *)(param_1 + 0x17cc) >> 0xe & 1) != 0) {
    return 2;
  }
  puVar9 = *(undefined8 **)(param_1 + 0x60);
  if (puVar9 == (undefined8 *)0x0) {
    if ((DAT_052461c0 & 1) == 0) {
      iVar4 = __cxa_guard_acquire(&DAT_052461c0);
      puVar9 = &DAT_05240280;
      if (iVar4 != 0) {
        FUN_016fcf10(&DAT_05240280);
        FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_052461c0);
      }
    }
    else {
      puVar9 = &DAT_05240280;
    }
  }
  lVar6 = puVar9[0x227];
  if (lVar6 == 0) {
    local_68 = 0;
LAB_0236c398:
    puVar9 = *(undefined8 **)(param_1 + 0x60);
    if (puVar9 == (undefined8 *)0x0) {
      if ((DAT_052461c0 & 1) == 0) {
        iVar4 = __cxa_guard_acquire(&DAT_052461c0);
        puVar9 = &DAT_05240280;
        if (iVar4 != 0) {
          FUN_016fcf10(&DAT_05240280);
          FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
          __cxa_guard_release(&DAT_052461c0);
        }
      }
      else {
        puVar9 = &DAT_05240280;
      }
    }
    lVar6 = puVar9[0x227];
    if (lVar6 == 0) {
      local_68 = 0;
LAB_0236c524:
      puVar9 = *(undefined8 **)(param_1 + 0x60);
      if (puVar9 == (undefined8 *)0x0) {
        if ((DAT_052461c0 & 1) == 0) {
          iVar4 = __cxa_guard_acquire(&DAT_052461c0);
          puVar9 = &DAT_05240280;
          if (iVar4 != 0) {
            FUN_016fcf10(&DAT_05240280);
            FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
            __cxa_guard_release(&DAT_052461c0);
          }
        }
        else {
          puVar9 = &DAT_05240280;
        }
      }
      lVar6 = puVar9[0x227];
      if (lVar6 == 0) {
        local_68 = 0;
LAB_0236c714:
        puVar9 = *(undefined8 **)(param_1 + 0x60);
        if (puVar9 == (undefined8 *)0x0) {
          if ((DAT_052461c0 & 1) == 0) {
            iVar4 = __cxa_guard_acquire(&DAT_052461c0);
            puVar9 = &DAT_05240280;
            if (iVar4 != 0) {
              FUN_016fcf10(&DAT_05240280);
              FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
              __cxa_guard_release(&DAT_052461c0);
            }
          }
          else {
            puVar9 = &DAT_05240280;
          }
        }
        lVar6 = puVar9[0x227];
        if (lVar6 == 0) {
          return 0;
        }
        local_68 = *(uint *)(puVar9 + 0x2d3) >> 1 & 1;
        uVar8 = 0;
        if (*(long *)(lVar6 + 0x78) != 0) {
          uVar8 = *(uint *)(*(long *)(lVar6 + 0x78) + 0x18);
        }
        uVar2 = local_68;
        if (uVar8 <= local_68) {
          uVar2 = 0;
        }
        if (*(uint *)(lVar6 + 0x80) <= uVar2) {
          uVar2 = 0;
        }
        lVar6 = *(long *)(lVar6 + 0x88) + (long)(int)uVar2 * 0xe8;
        plVar10 = (long *)(lVar6 + 0x60);
        (**(code **)(*plVar10 + 0x18))(plVar10);
        (**(code **)(*plVar10 + 0x18))(plVar10);
        pcVar11 = *(char **)(lVar6 + 0x68);
        (**(code **)(DAT_054989c0 + 0x18))(&DAT_054989c0);
        if (pcVar11 != DAT_054989c8) {
          pcVar11 = *(char **)(lVar6 + 0x68);
          if (*pcVar11 != *DAT_054989c8) {
            return 0;
          }
          if (*pcVar11 != '\0') {
            uVar5 = 0;
            do {
              uVar7 = uVar5;
              if (uVar7 == 0x80000) {
                return 0;
              }
              if (pcVar11[uVar7 + 1] != DAT_054989c8[uVar7 + 1]) {
                return 0;
              }
              if (pcVar11[uVar7 + 1] == '\0') goto LAB_0236c84c;
              if (pcVar11[uVar7 + 2] != DAT_054989c8[uVar7 + 2]) {
                return 0;
              }
              uVar5 = uVar7 + 2;
            } while (pcVar11[uVar7 + 2] != '\0');
            uVar7 = uVar7 + 1;
LAB_0236c84c:
            if (uVar7 >> 0x13 != 0) {
              return 0;
            }
          }
        }
        local_48 = 0xfffe;
        FUN_0277d4ac(&local_48);
        local_4a = 0;
        local_4c = 0;
        local_60 = 0;
        local_58 = 0;
        local_48 = *(undefined8 *)(param_1 + 0x1f0d);
        local_54 = *(char *)(param_1 + 0x1f2c) != '\0';
        puVar1 = PTR_DAT_04bb2020 + 0x10;
        local_68 = (uint)local_48;
        local_64 = (undefined4)((ulong)local_48 >> 0x20);
        pcStack_70 = "Show";
        local_50 = (float)(int)*(short *)(param_1 + 0x1f29) * 0.001;
        local_78 = puVar1;
        local_4b = param_2 & 1;
        FUN_023c49a8(param_1,&local_68,param_1 + 0x9dc,param_1 + 0x9d8,&local_78);
        lVar6 = FUN_016e3954(param_1);
        pcStack_70 = "PutawayAnimKeep";
        if (((*(long *)(lVar6 + 0x1138) == 0) ||
            (lVar6 = *(long *)(*(long *)(lVar6 + 0x1138) + 0x78), lVar6 == 0)) ||
           (plVar10 = *(long **)(lVar6 + 0x48), plVar10 == (long *)0x0)) {
          bVar3 = true;
          local_78 = puVar1;
        }
        else {
          local_78 = puVar1;
          iVar4 = (**(code **)(*plVar10 + 0xf8))(plVar10,&local_78);
          bVar3 = iVar4 == 0;
        }
        lVar6 = FUN_016debb0(param_1);
        uVar8 = 0;
        if (*(long *)(lVar6 + 0x1138) != 0) {
          local_78 = (undefined *)CONCAT44(local_78._4_4_,1);
          uVar8 = *(uint *)(lVar6 + 0x1698) >> 1 & 1;
        }
        if (bVar3) {
          uVar5 = FUN_0170a684(lVar6,uVar8);
        }
        else {
          local_78 = (undefined *)CONCAT44(local_78._4_4_,uVar8);
          uVar5 = FUN_0073da08(lVar6,uVar8);
        }
        if ((uVar5 & 1) == 0) {
          return 1;
        }
        *(uint *)(param_1 + 0x17cc) = *(uint *)(param_1 + 0x17cc) | 0x4000;
        if (*(char *)(param_1 + 0x1f2f) == '\0') {
          return 2;
        }
        FUN_0231ade8(param_1,6);
        return 2;
      }
      local_68 = *(uint *)(puVar9 + 0x2d3) >> 1 & 1;
      uVar8 = 0;
      if (*(long *)(lVar6 + 0x78) != 0) {
        uVar8 = *(uint *)(*(long *)(lVar6 + 0x78) + 0x18);
      }
      uVar2 = local_68;
      if (uVar8 <= local_68) {
        uVar2 = 0;
      }
      if (*(uint *)(lVar6 + 0x80) <= uVar2) {
        uVar2 = 0;
      }
      lVar6 = *(long *)(lVar6 + 0x88) + (long)(int)uVar2 * 0xe8;
      plVar10 = (long *)(lVar6 + 0x60);
      (**(code **)(*plVar10 + 0x18))(plVar10);
      (**(code **)(*plVar10 + 0x18))(plVar10);
      pcVar11 = *(char **)(lVar6 + 0x68);
      (**(code **)(DAT_054989f0 + 0x18))(&DAT_054989f0);
      if (pcVar11 != DAT_054989f8) {
        pcVar11 = *(char **)(lVar6 + 0x68);
        if (*pcVar11 != *DAT_054989f8) goto LAB_0236c714;
        if (*pcVar11 != '\0') {
          uVar5 = 0;
          do {
            uVar7 = uVar5;
            if ((uVar7 == 0x80000) || (pcVar11[uVar7 + 1] != DAT_054989f8[uVar7 + 1]))
            goto LAB_0236c714;
            if (pcVar11[uVar7 + 1] == '\0') goto LAB_0236c6f8;
            if (pcVar11[uVar7 + 2] != DAT_054989f8[uVar7 + 2]) goto LAB_0236c714;
            uVar5 = uVar7 + 2;
          } while (pcVar11[uVar7 + 2] != '\0');
          uVar7 = uVar7 + 1;
LAB_0236c6f8:
          if (uVar7 >> 0x13 != 0) goto LAB_0236c714;
        }
      }
      goto LAB_0236c700;
    }
    local_68 = *(uint *)(puVar9 + 0x2d3) >> 1 & 1;
    uVar8 = 0;
    if (*(long *)(lVar6 + 0x78) != 0) {
      uVar8 = *(uint *)(*(long *)(lVar6 + 0x78) + 0x18);
    }
    uVar2 = local_68;
    if (uVar8 <= local_68) {
      uVar2 = 0;
    }
    if (*(uint *)(lVar6 + 0x80) <= uVar2) {
      uVar2 = 0;
    }
    lVar6 = *(long *)(lVar6 + 0x88) + (long)(int)uVar2 * 0xe8;
    plVar10 = (long *)(lVar6 + 0x60);
    (**(code **)(*plVar10 + 0x18))(plVar10);
    (**(code **)(*plVar10 + 0x18))(plVar10);
    pcVar11 = *(char **)(lVar6 + 0x68);
    (**(code **)(DAT_054989e0 + 0x18))(&DAT_054989e0);
    if (pcVar11 != DAT_054989e8) {
      pcVar11 = *(char **)(lVar6 + 0x68);
      if (*pcVar11 != *DAT_054989e8) goto LAB_0236c524;
      if (*pcVar11 != '\0') {
        uVar5 = 0;
        do {
          uVar7 = uVar5;
          if ((uVar7 == 0x80000) || (pcVar11[uVar7 + 1] != DAT_054989e8[uVar7 + 1]))
          goto LAB_0236c524;
          if (pcVar11[uVar7 + 1] == '\0') goto LAB_0236c4d0;
          if (pcVar11[uVar7 + 2] != DAT_054989e8[uVar7 + 2]) goto LAB_0236c524;
          uVar5 = uVar7 + 2;
        } while (pcVar11[uVar7 + 2] != '\0');
        uVar7 = uVar7 + 1;
LAB_0236c4d0:
        if (uVar7 >> 0x13 != 0) goto LAB_0236c524;
      }
    }
  }
  else {
    local_68 = *(uint *)(puVar9 + 0x2d3) >> 1 & 1;
    uVar8 = 0;
    if (*(long *)(lVar6 + 0x78) != 0) {
      uVar8 = *(uint *)(*(long *)(lVar6 + 0x78) + 0x18);
    }
    uVar2 = local_68;
    if (uVar8 <= local_68) {
      uVar2 = 0;
    }
    if (*(uint *)(lVar6 + 0x80) <= uVar2) {
      uVar2 = 0;
    }
    lVar6 = *(long *)(lVar6 + 0x88) + (long)(int)uVar2 * 0xe8;
    plVar10 = (long *)(lVar6 + 0x60);
    (**(code **)(*plVar10 + 0x18))(plVar10);
    (**(code **)(*plVar10 + 0x18))(plVar10);
    pcVar11 = *(char **)(lVar6 + 0x68);
    (**(code **)(DAT_054989d0 + 0x18))(&DAT_054989d0);
    if (pcVar11 != DAT_054989d8) {
      pcVar11 = *(char **)(lVar6 + 0x68);
      if (*pcVar11 != *DAT_054989d8) goto LAB_0236c398;
      if (*pcVar11 != '\0') {
        uVar5 = 0;
        do {
          uVar7 = uVar5;
          if ((uVar7 == 0x80000) || (pcVar11[uVar7 + 1] != DAT_054989d8[uVar7 + 1]))
          goto LAB_0236c398;
          if (pcVar11[uVar7 + 1] == '\0') goto LAB_0236c390;
          if (pcVar11[uVar7 + 2] != DAT_054989d8[uVar7 + 2]) goto LAB_0236c398;
          uVar5 = uVar7 + 2;
        } while (pcVar11[uVar7 + 2] != '\0');
        uVar7 = uVar7 + 1;
LAB_0236c390:
        if (0x7ffff < uVar7) goto LAB_0236c398;
      }
    }
  }
  puVar9 = *(undefined8 **)(param_1 + 0x60);
  if (puVar9 == (undefined8 *)0x0) {
    if ((DAT_052461c0 & 1) == 0) {
      iVar4 = __cxa_guard_acquire(&DAT_052461c0);
      puVar9 = &DAT_05240280;
      if (iVar4 != 0) {
        FUN_016fcf10(&DAT_05240280);
        FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_052461c0);
      }
    }
    else {
      puVar9 = &DAT_05240280;
    }
  }
  local_68 = 0;
  if (puVar9[0x227] != 0) {
    local_68 = *(uint *)(puVar9 + 0x2d3) >> 1 & 1;
  }
  uVar5 = FUN_0073da08(puVar9,local_68);
  if ((uVar5 & 1) == 0) {
    return 1;
  }
  puVar9 = *(undefined8 **)(param_1 + 0x60);
  if (puVar9 == (undefined8 *)0x0) {
    if ((DAT_052461c0 & 1) == 0) {
      iVar4 = __cxa_guard_acquire(&DAT_052461c0);
      puVar9 = &DAT_05240280;
      if (iVar4 != 0) {
        FUN_016fcf10(&DAT_05240280);
        FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_052461c0);
      }
    }
    else {
      puVar9 = &DAT_05240280;
    }
  }
  local_78 = (undefined *)((ulong)local_78._4_4_ << 0x20);
  local_68 = 0x2b;
  if (puVar9[0x227] != 0) {
    FUN_03850a90(puVar9[0x227],0x2b,0,0);
  }
  *(uint *)((long)puVar9 + 0x15f4) = *(uint *)((long)puVar9 + 0x15f4) | 0x20;
LAB_0236c700:
  *(uint *)(param_1 + 0x17cc) = *(uint *)(param_1 + 0x17cc) | 0x4000;
  return 2;
}

