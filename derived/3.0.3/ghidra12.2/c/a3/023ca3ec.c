
/* WARNING: Removing unreachable block (ram,0x023ca5b4) */

undefined8 FUN_023ca3ec(long param_1,uint *param_2)

{
  long *plVar1;
  ulong uVar2;
  undefined8 *puVar3;
  uint uVar4;
  int iVar5;
  long lVar6;
  uint uVar7;
  undefined *local_88;
  undefined1 *puStack_80;
  undefined4 local_78;
  undefined1 local_74 [63];
  undefined1 local_35;
  
  if (*(char *)((long)param_2 + 0x1d) != '\0' && *(int *)(param_1 + 0x1810) == 4) {
    return 0;
  }
  plVar1 = *(long **)(param_1 + 0x60);
  if (plVar1 == (long *)0x0) {
    if (((DAT_052461c0 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_052461c0), iVar5 != 0)) {
      FUN_016fcf10(&DAT_05240280);
      FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
      __cxa_guard_release(&DAT_052461c0);
      plVar1 = &DAT_05240280;
    }
    else {
      plVar1 = &DAT_05240280;
    }
  }
  uVar2 = (**(code **)(*plVar1 + 0x100))();
  if ((uVar2 & 1) == 0) {
    if (*(long *)PTR_DAT_04bb4718 == 0) {
      if ((DAT_054f0960 & 1) == 0) {
        iVar5 = __cxa_guard_acquire(&DAT_054f0960);
        puVar3 = &DAT_054f0958;
        if (iVar5 != 0) {
          DAT_054f0958 = 0;
          __cxa_guard_release(&DAT_054f0960);
          puVar3 = &DAT_054f0958;
        }
      }
      else {
        puVar3 = &DAT_054f0958;
      }
    }
    else {
      puVar3 = (undefined8 *)(*(long *)PTR_DAT_04bb4718 + 0x204);
      if ((ulong)*(byte *)(param_1 + 0x1ee8) < 8) {
        puVar3 = puVar3 + *(byte *)(param_1 + 0x1ee8);
      }
    }
    local_88 = (undefined *)CONCAT44(local_88._4_4_,0x2f);
    if ((*(uint *)((long)puVar3 + 4) >> 0xf & 1) == 0) {
      return 0;
    }
  }
  if (*param_2 != 0) {
    local_35 = 0;
    local_78 = 0x40;
    puStack_80 = local_74;
    local_74[0] = 0;
    local_88 = PTR_DAT_04bb2bc0 + 0x10;
    uVar2 = FUN_02537880(&local_88,param_2);
    if ((uVar2 & 1) != 0) {
      puVar3 = *(undefined8 **)(param_1 + 0x60);
      if (puVar3 == (undefined8 *)0x0) {
        if ((DAT_052461c0 & 1) == 0) {
          iVar5 = __cxa_guard_acquire(&DAT_052461c0);
          if (iVar5 != 0) {
            FUN_016fcf10(&DAT_05240280);
            FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
            __cxa_guard_release(&DAT_052461c0);
          }
          puVar3 = &DAT_05240280;
        }
        else {
          puVar3 = &DAT_05240280;
        }
      }
      uVar2 = FUN_0170acf0(puVar3,&local_88,1);
      if ((uVar2 & 1) == 0) {
        return 0;
      }
    }
  }
  if ((param_2[2] == 8) && (uVar2 = FUN_023ce290(param_1), (uVar2 & 1) != 0)) {
    return 0;
  }
  puVar3 = *(undefined8 **)(param_1 + 0x60);
  if (puVar3 == (undefined8 *)0x0) {
    if ((DAT_052461c0 & 1) == 0) {
      iVar5 = __cxa_guard_acquire(&DAT_052461c0);
      if (iVar5 != 0) {
        FUN_016fcf10(&DAT_05240280);
        FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_052461c0);
      }
      puVar3 = &DAT_05240280;
      lVar6 = DAT_052413b8;
    }
    else {
      puVar3 = &DAT_05240280;
      lVar6 = DAT_052413b8;
    }
  }
  else {
    lVar6 = puVar3[0x227];
  }
  if (lVar6 == 0) {
    puVar3 = &DAT_04c931a0;
  }
  else {
    uVar4 = *(uint *)(puVar3 + 0x2d3) >> 1 & 1;
    uVar7 = 0;
    if (*(long *)(lVar6 + 0x78) != 0) {
      uVar7 = *(uint *)(*(long *)(lVar6 + 0x78) + 0x18);
    }
    if (uVar7 <= uVar4) {
      uVar4 = 0;
    }
    if (*(uint *)(lVar6 + 0x80) <= uVar4) {
      uVar4 = 0;
    }
    puVar3 = (undefined8 *)(*(long *)(lVar6 + 0x88) + (long)(int)uVar4 * 0xe8 + 0x60);
  }
  puStack_80 = (undefined1 *)puVar3[1];
  local_88 = PTR_DAT_04bb2020 + 0x10;
  uVar2 = FUN_0171ef80(&local_88,0x17);
  if ((uVar2 & 1) != 0) {
    return 0;
  }
  if (*(char *)((long)param_2 + 0x1e) != '\0') {
    *(uint *)(param_1 + 0x17d4) = *(uint *)(param_1 + 0x17d4) | 0x200;
  }
  if ((*(long *)(param_1 + 0x70) != 0) && (*(int *)(*(long *)(param_1 + 0x70) + 0x280) == 0x1a)) {
    uVar4 = (uint)*(byte *)(param_1 + 0x1900);
    if (0x78 < uVar4) {
      uVar4 = 0;
    }
    local_88 = (undefined *)CONCAT44(local_88._4_4_,uVar4);
    if (((param_2[2] == 6) && (uVar4 == *param_2)) && ((*(byte *)(param_1 + 0x17d2) >> 4 & 1) == 0))
    {
      return 1;
    }
  }
  *(undefined8 *)(param_1 + 0x1980) = 0;
  *(undefined8 *)(param_1 + 0x1988) = 0;
  *(undefined8 *)(param_1 + 0x19d0) = 0;
  *(undefined2 *)(param_1 + 0x19d8) = 0;
  *(undefined8 *)(param_1 + 0x1960) = *(undefined8 *)(param_1 + 0x18e0);
  *(undefined8 *)(param_1 + 0x1968) = *(undefined8 *)(param_1 + 0x18e8);
  *(undefined8 *)(param_1 + 0x1970) = *(undefined8 *)(param_1 + 0x18f0);
  *(undefined8 *)(param_1 + 0x1978) = *(undefined8 *)(param_1 + 0x18f8);
  *(undefined8 *)(param_1 + 0x1990) = 0;
  *(undefined8 *)(param_1 + 0x1998) = 0;
  *(undefined8 *)(param_1 + 0x19a0) = 0;
  *(undefined8 *)(param_1 + 0x19a8) = 0;
  *(undefined8 *)(param_1 + 0x19b0) = 0;
  *(undefined8 *)(param_1 + 0x19b8) = 0;
  *(undefined8 *)(param_1 + 0x19c0) = 0;
  *(undefined8 *)(param_1 + 0x19c8) = 0;
  *(char *)(param_1 + 0x1981) = (char)param_2[1];
  *(char *)(param_1 + 0x1980) = (char)*param_2;
  local_88._0_4_ = param_2[2];
  *(char *)(param_1 + 0x1982) = (char)(uint)local_88;
  *(char *)(param_1 + 0x1983) = (char)param_2[3];
  *(undefined2 *)(param_1 + 0x1984) = *(undefined2 *)((long)param_2 + 0x12);
  *(short *)(param_1 + 0x1986) = (short)param_2[5];
  iVar5 = (int)((float)param_2[6] * 999.99994);
  if (0x7ffe < iVar5) {
    iVar5 = 0x7fff;
  }
  if (iVar5 < -0x7fff) {
    iVar5 = -0x8000;
  }
  *(short *)(param_1 + 0x1988) = (short)iVar5;
  *(undefined1 *)(param_1 + 0x198a) = *(undefined1 *)((long)param_2 + 0x1f);
  *(char *)(param_1 + 0x198b) = (char)param_2[8];
  if ((*(uint *)(param_1 + 0x1810) & 0xfffffff7) == 1) {
    plVar1 = *(long **)(param_1 + 0x68);
    FUN_016e026c(0,plVar1 + 0x4f,0,0);
    (**(code **)(*plVar1 + 0x110))(plVar1);
  }
  local_88 = (undefined *)CONCAT44(local_88._4_4_,0x1a);
  *(undefined8 *)(param_1 + 0x18c0) = *(undefined8 *)(param_1 + 0x19c0);
  *(undefined8 *)(param_1 + 0x18c8) = *(undefined8 *)(param_1 + 0x19c8);
  *(undefined8 *)(param_1 + 0x18d0) = *(undefined8 *)(param_1 + 0x19d0);
  *(undefined2 *)(param_1 + 0x18d8) = *(undefined2 *)(param_1 + 0x19d8);
  *(undefined8 *)(param_1 + 0x18a0) = *(undefined8 *)(param_1 + 0x19a0);
  *(undefined8 *)(param_1 + 0x18a8) = *(undefined8 *)(param_1 + 0x19a8);
  *(undefined8 *)(param_1 + 0x18b0) = *(undefined8 *)(param_1 + 0x19b0);
  *(undefined8 *)(param_1 + 0x18b8) = *(undefined8 *)(param_1 + 0x19b8);
  *(undefined8 *)(param_1 + 0x1880) = *(undefined8 *)(param_1 + 0x1980);
  *(undefined8 *)(param_1 + 0x1888) = *(undefined8 *)(param_1 + 0x1988);
  *(undefined8 *)(param_1 + 0x1890) = *(undefined8 *)(param_1 + 0x1990);
  *(undefined8 *)(param_1 + 0x1898) = *(undefined8 *)(param_1 + 0x1998);
  *(undefined8 *)(param_1 + 0x1860) = *(undefined8 *)(param_1 + 0x1960);
  *(undefined8 *)(param_1 + 0x1868) = *(undefined8 *)(param_1 + 0x1968);
  *(undefined8 *)(param_1 + 0x1878) = *(undefined8 *)(param_1 + 0x1978);
  *(undefined8 *)(param_1 + 0x1870) = *(undefined8 *)(param_1 + 0x1970);
  lVar6 = 0;
  if (*(long *)(param_1 + 0x70) != 0) {
    lVar6 = *(long *)(param_1 + 0x70) + 0x278;
  }
  FUN_03ebb160(lVar6,0x1a);
  return 1;
}

