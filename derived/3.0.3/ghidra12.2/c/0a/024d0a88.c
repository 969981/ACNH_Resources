
bool FUN_024d0a88(long param_1,ulong param_2,undefined4 *param_3)

{
  undefined *puVar1;
  uint uVar2;
  int iVar3;
  ulong uVar4;
  ulong uVar5;
  char *pcVar6;
  undefined8 *puVar7;
  long *plVar8;
  undefined8 *puVar9;
  long lVar10;
  long lVar11;
  undefined4 local_64 [2];
  int local_5c;
  undefined *local_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  long local_48;
  
  puVar1 = PTR_DAT_04bb43c0;
  lVar11 = *(long *)PTR_DAT_04bb43c0;
  uVar2 = FUN_0277d6c4(param_3);
  lVar10 = *(long *)puVar1;
  if (lVar10 == 0) {
    return false;
  }
  lVar11 = *(long *)(lVar11 + 0x57e58);
  uVar2 = (uVar2 & 0xffff) - (uint)*(ushort *)(lVar11 + 0x1f8);
  if (*(uint *)(lVar11 + 0x1d8) <= uVar2) {
    return false;
  }
  if (*(long *)(*(long *)(lVar11 + 0x1e0) + (long)(int)uVar2 * 8) == 0) {
    return false;
  }
  local_48 = 0;
  local_50 = *param_3;
  uStack_4c = param_3[1];
  local_58 = PTR_DAT_04bc0510 + 0x10;
  uVar2 = FUN_0277d6c4(&local_50);
  if (*(long *)puVar1 != 0) {
    lVar10 = *(long *)(lVar10 + 0x57e58);
    uVar2 = (uVar2 & 0xffff) - (uint)*(ushort *)(lVar10 + 0x1f8);
    if ((uVar2 < *(uint *)(lVar10 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar10 + 0x1e0) + (long)(int)uVar2 * 8) != 0)) {
      lVar10 = *(long *)PTR_DAT_04bc0428;
      uVar2 = FUN_0277d6c4(param_3);
      uVar2 = (uVar2 & 0xffff) - (uint)*(ushort *)(lVar10 + 0x1f8);
      if ((uVar2 < *(uint *)(lVar10 + 0x1d8)) &&
         (lVar10 = *(long *)(*(long *)(lVar10 + 0x1e0) + (long)(int)uVar2 * 8), lVar10 != 0)) {
        local_48 = lVar10;
      }
    }
  }
  local_5c = FUN_01ad78cc(&local_58);
  if (local_5c == 0x67) {
    if ((param_2 & 1) != 0) {
      return true;
    }
  }
  else {
    if (local_5c != 0x68) {
      return local_5c == 0x68;
    }
    if ((param_2 & 1) != 0) {
      return true;
    }
  }
  FUN_0252d8f0(local_64,param_1 + 0x1ee8);
  uVar4 = FUN_0277d7b4(param_3,local_64);
  if ((uVar4 & 1) == 0) {
    return false;
  }
  puVar7 = *(undefined8 **)(param_1 + 0x60);
  if (puVar7 == (undefined8 *)0x0) {
    if ((DAT_052461c0 & 1) == 0) {
      iVar3 = __cxa_guard_acquire(&DAT_052461c0);
      puVar7 = &DAT_05240280;
      if (iVar3 != 0) {
        FUN_016fcf10(&DAT_05240280);
        FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_052461c0);
      }
    }
    else {
      puVar7 = &DAT_05240280;
    }
  }
  local_64[0] = 0;
  if (puVar7[0x227] == 0) goto LAB_024d0d54;
  lVar10 = *(long *)(puVar7[0x227] + 0x88);
  plVar8 = (long *)(lVar10 + 0x60);
  (**(code **)(*plVar8 + 0x18))(plVar8);
  (**(code **)(*plVar8 + 0x18))(plVar8);
  pcVar6 = *(char **)(lVar10 + 0x68);
  if (pcVar6 != "PlayerBook") {
    if (*pcVar6 != 'P') goto LAB_024d0d54;
    uVar4 = 0;
    do {
      uVar5 = uVar4;
      if ((uVar5 == 0x80000) || (pcVar6[uVar5 + 1] != "PlayerBook"[uVar5 + 1])) goto LAB_024d0d54;
      uVar4 = uVar5 + 1;
    } while (pcVar6[uVar5 + 1] != '\0');
    if (uVar5 >> 0x13 != 0) goto LAB_024d0d54;
  }
  puVar7 = *(undefined8 **)(param_1 + 0x60);
  if (puVar7 == (undefined8 *)0x0) {
    if (((DAT_052461c0 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_052461c0), iVar3 != 0)) {
      FUN_016fcf10(&DAT_05240280);
      FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
      __cxa_guard_release(&DAT_052461c0);
    }
    puVar7 = *(undefined8 **)(param_1 + 0x60);
    if (puVar7 == (undefined8 *)0x0) {
      if (((DAT_052461c0 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_052461c0), iVar3 != 0)) {
        puVar7 = &DAT_05240280;
        FUN_016fcf10(&DAT_05240280);
        FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_052461c0);
      }
      else {
        puVar7 = &DAT_05240280;
      }
      goto LAB_024d0cc8;
    }
    puVar9 = &DAT_05240280;
  }
  else {
LAB_024d0cc8:
    puVar9 = puVar7;
  }
  if (puVar7[0x227] == 0) {
    uVar2 = 0;
  }
  else {
    local_64[0] = 1;
    uVar2 = *(uint *)(puVar7 + 0x2d3) >> 1 & 1;
  }
  uVar4 = FUN_0073d6e0(puVar9,uVar2);
  if ((uVar4 & 1) != 0) {
    return false;
  }
LAB_024d0d54:
  local_64[0] = 0x13b;
  *(undefined8 *)(param_1 + 0x18c0) = *(undefined8 *)(param_1 + 0x1940);
  *(undefined8 *)(param_1 + 0x18c0) = 0;
  *(undefined8 *)(param_1 + 0x18c8) = *(undefined8 *)(param_1 + 0x1948);
  *(undefined8 *)(param_1 + 0x18c8) = 0;
  *(undefined8 *)(param_1 + 0x18d0) = *(undefined8 *)(param_1 + 0x1950);
  *(undefined8 *)(param_1 + 0x18d0) = 0;
  *(undefined2 *)(param_1 + 0x18d8) = *(undefined2 *)(param_1 + 0x1958);
  *(undefined8 *)(param_1 + 0x18a0) = *(undefined8 *)(param_1 + 0x1920);
  *(undefined8 *)(param_1 + 0x18a0) = 0;
  *(undefined8 *)(param_1 + 0x18a8) = *(undefined8 *)(param_1 + 0x1928);
  *(undefined8 *)(param_1 + 0x18a8) = 0;
  *(undefined8 *)(param_1 + 0x18b0) = *(undefined8 *)(param_1 + 0x1930);
  *(undefined8 *)(param_1 + 0x18b0) = 0;
  *(undefined8 *)(param_1 + 0x18b8) = *(undefined8 *)(param_1 + 0x1938);
  *(undefined8 *)(param_1 + 0x18b8) = 0;
  *(undefined8 *)(param_1 + 0x1880) = *(undefined8 *)(param_1 + 0x1900);
  *(undefined8 *)(param_1 + 0x1880) = 0;
  *(undefined8 *)(param_1 + 0x1888) = *(undefined8 *)(param_1 + 0x1908);
  *(undefined8 *)(param_1 + 0x1888) = 0;
  *(undefined8 *)(param_1 + 0x1890) = *(undefined8 *)(param_1 + 0x1910);
  *(undefined8 *)(param_1 + 0x1890) = 0;
  *(undefined8 *)(param_1 + 0x1898) = *(undefined8 *)(param_1 + 0x1918);
  *(undefined8 *)(param_1 + 0x1898) = 0;
  *(undefined8 *)(param_1 + 0x1860) = *(undefined8 *)(param_1 + 0x18e0);
  *(undefined8 *)(param_1 + 0x1868) = *(undefined8 *)(param_1 + 0x18e8);
  *(undefined8 *)(param_1 + 0x1870) = *(undefined8 *)(param_1 + 0x18f0);
  *(undefined8 *)(param_1 + 0x1878) = *(undefined8 *)(param_1 + 0x18f8);
  lVar10 = 0;
  if (*(long *)(param_1 + 0x70) != 0) {
    lVar10 = *(long *)(param_1 + 0x70) + 0x278;
  }
  FUN_03ebb160(lVar10,0x13b);
  return true;
}

