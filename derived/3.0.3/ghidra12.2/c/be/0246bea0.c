
/* WARNING: Removing unreachable block (ram,0x0246bf04) */

void FUN_0246bea0(long param_1)

{
  uint uVar1;
  int iVar2;
  float *pfVar3;
  ulong uVar4;
  undefined4 *puVar5;
  long lVar6;
  ulong uVar7;
  char *pcVar8;
  undefined8 *puVar9;
  long *plVar10;
  float fVar11;
  float local_64;
  float local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  uint local_4c;
  undefined4 local_48;
  undefined4 local_44;
  
  fVar11 = -20.0;
  puVar9 = &DAT_054e9a58;
  if (*(undefined8 **)(param_1 + 0x4c8) != (undefined8 *)0x0) {
    puVar9 = *(undefined8 **)(param_1 + 0x4c8);
  }
  if ((*(long *)PTR_DAT_04bb2200 != 0) &&
     (lVar6 = *(long *)(*(long *)PTR_DAT_04bb2200 + 0x50), lVar6 != 0)) {
    local_64 = 0.0;
    lVar6 = *(long *)(lVar6 + 0x118);
    if (lVar6 != 0) {
      lVar6 = *(long *)(lVar6 + 0x280);
      fVar11 = 0.0;
      if ((lVar6 != 0) && (lVar6 = *(long *)(lVar6 + 8), lVar6 != 0)) {
        pfVar3 = (float *)(**(code **)(*(long *)(lVar6 + 0x488) + 0xf0))(lVar6 + 0x488);
        fVar11 = *pfVar3;
      }
      lVar6 = FUN_0251e98c(1);
      pfVar3 = (float *)(**(code **)(*(long *)(lVar6 + 0x1560) + 0xf0))(lVar6 + 0x1560);
      fVar11 = fVar11 + *pfVar3;
    }
  }
  *(float *)((long)puVar9 + 0x27c) = fVar11;
  if (*(int *)(param_1 + 0x178) == 1) {
    return;
  }
  puVar9 = &DAT_054e9a58;
  if (*(undefined8 **)(param_1 + 0x4c8) != (undefined8 *)0x0) {
    puVar9 = *(undefined8 **)(param_1 + 0x4c8);
  }
  uVar4 = FUN_016ec07c(0,puVar9 + 0x4f,1);
  if ((uVar4 & 1) == 0) {
    FUN_0236a88c(param_1,6,1,0);
    return;
  }
  uVar4 = FUN_02468110(param_1,1);
  if ((uVar4 & 1) != 0) {
    return;
  }
  puVar9 = *(undefined8 **)(param_1 + 0x60);
  local_50 = 0;
  uVar1 = (uint)*(byte *)(param_1 + 0x1900);
  if (3 < uVar1) {
    uVar1 = 0;
  }
  if (puVar9 == (undefined8 *)0x0) {
    if ((DAT_052461c0 & 1) == 0) {
      iVar2 = __cxa_guard_acquire(&DAT_052461c0);
      puVar9 = &DAT_05240280;
      if (iVar2 != 0) {
        FUN_016fcf10(&DAT_05240280);
        FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_052461c0);
      }
    }
    else {
      puVar9 = &DAT_05240280;
    }
  }
  if (puVar9[0x227] != 0) {
    lVar6 = *(long *)(puVar9[0x227] + 0x88);
    plVar10 = (long *)(lVar6 + 0x60);
    (**(code **)(*plVar10 + 0x18))(plVar10);
    (**(code **)(*plVar10 + 0x18))(plVar10);
    pcVar8 = *(char **)(lVar6 + 0x68);
    if (pcVar8 == "PlayerSwimStride_FlapFoot") {
LAB_0246c0a4:
      fVar11 = 0.8;
      goto LAB_0246c0e0;
    }
    if (*pcVar8 == 'P') {
      uVar4 = 0;
      do {
        uVar7 = uVar4;
        if ((uVar7 == 0x80000) || (pcVar8[uVar7 + 1] != "PlayerSwimStride_FlapFoot"[uVar7 + 1]))
        goto LAB_0246c0dc;
        uVar4 = uVar7 + 1;
      } while (pcVar8[uVar7 + 1] != '\0');
      if (uVar7 >> 0x13 == 0) goto LAB_0246c0a4;
    }
  }
LAB_0246c0dc:
  fVar11 = 1.0;
LAB_0246c0e0:
  lVar6 = FUN_0251e98c(1);
  pfVar3 = (float *)(**(code **)(*(long *)(lVar6 + 0x1980) + 0xf0))(lVar6 + 0x1980);
  local_64 = fVar11 * *pfVar3;
  lVar6 = FUN_0251e98c(1);
  pfVar3 = (float *)(**(code **)(*(long *)(lVar6 + 0x19b0) + 0xf0))(lVar6 + 0x19b0);
  local_60 = fVar11 * *pfVar3;
  lVar6 = FUN_0251e98c(1);
  puVar5 = (undefined4 *)(**(code **)(*(long *)(lVar6 + 0x19e0) + 0xf0))(lVar6 + 0x19e0);
  local_5c = *puVar5;
  lVar6 = FUN_0251e98c(1);
  puVar5 = (undefined4 *)(**(code **)(*(long *)(lVar6 + 0x1a10) + 0xf0))(lVar6 + 0x1a10);
  local_58 = *puVar5;
  lVar6 = FUN_0251e98c(1);
  puVar5 = (undefined4 *)(**(code **)(*(long *)(lVar6 + 0x1a40) + 0xf0))(lVar6 + 0x1a40);
  local_54 = *puVar5;
  local_4c = uVar1;
  lVar6 = FUN_0251e98c(1);
  puVar5 = (undefined4 *)(**(code **)(*(long *)(lVar6 + 0x1920) + 0xf0))(lVar6 + 0x1920);
  local_48 = *puVar5;
  lVar6 = FUN_0251e98c(1);
  puVar5 = (undefined4 *)(**(code **)(*(long *)(lVar6 + 0x1950) + 0xf0))(lVar6 + 0x1950);
  local_44 = *puVar5;
  uVar1 = FUN_02465878(param_1,&local_64);
  if (((1 < uVar1) || (uVar4 = FUN_02467c08(param_1,uVar1,0), (uVar4 & 1) == 0)) &&
     (uVar4 = FUN_02467c08(param_1,uVar1,1), (uVar4 & 1) == 0)) {
    FUN_0231e48c(param_1);
    puVar9 = *(undefined8 **)(param_1 + 0x60);
    if (puVar9 == (undefined8 *)0x0) {
      if ((DAT_052461c0 & 1) == 0) {
        iVar2 = __cxa_guard_acquire(&DAT_052461c0);
        puVar9 = &DAT_05240280;
        if (iVar2 != 0) {
          FUN_016fcf10(&DAT_05240280);
          FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
          __cxa_guard_release(&DAT_052461c0);
        }
      }
      else {
        puVar9 = &DAT_05240280;
      }
    }
    if (((puVar9[0x227] == 0) || (uVar4 = FUN_03850368(puVar9[0x227],0), (uVar4 & 1) != 0)) ||
       ((puVar9[0x227] == 0 ||
        ((uVar4 = FUN_03850368(puVar9[0x227],0), (uVar4 & 1) != 0 ||
         (uVar4 = FUN_0384fca4(puVar9[0x227],0), (uVar4 & 1) != 0)))))) {
      if ((*(int *)(param_1 + 0x178) == 0) && (*(int *)(param_1 + 0x1810) == 1)) {
        plVar10 = *(long **)(param_1 + 0x68);
        (**(code **)(*plVar10 + 0x140))(plVar10,plVar10 + 0x4f,1);
        *(undefined8 *)(param_1 + 0x1820) = 0;
        *(uint *)(param_1 + 0x17cc) = *(uint *)(param_1 + 0x17cc) & 0xfff7ffff;
        *(undefined8 *)(param_1 + 0x1844) = 0;
      }
      *(undefined8 *)(param_1 + 0x1980) = 0;
      *(undefined8 *)(param_1 + 0x1988) = 0;
      *(undefined8 *)(param_1 + 0x19d0) = 0;
      *(undefined2 *)(param_1 + 0x19d8) = 0;
      *(undefined8 *)(param_1 + 0x1960) = *(undefined8 *)(param_1 + 0x18e0);
      *(undefined8 *)(param_1 + 0x1968) = *(undefined8 *)(param_1 + 0x18e8);
      *(undefined8 *)(param_1 + 0x1990) = 0;
      *(undefined8 *)(param_1 + 0x1998) = 0;
      *(undefined8 *)(param_1 + 0x1970) = *(undefined8 *)(param_1 + 0x18f0);
      *(undefined8 *)(param_1 + 0x19a0) = 0;
      *(undefined8 *)(param_1 + 0x19a8) = 0;
      *(undefined8 *)(param_1 + 0x19b0) = 0;
      *(undefined8 *)(param_1 + 0x19b8) = 0;
      *(undefined8 *)(param_1 + 0x1978) = *(undefined8 *)(param_1 + 0x18f8);
      *(undefined8 *)(param_1 + 0x19c0) = 0;
      *(undefined8 *)(param_1 + 0x19c8) = 0;
      *(undefined2 *)(param_1 + 0x1980) = 0xc01;
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
      FUN_03ebb160(lVar6,0xf6);
    }
  }
  return;
}

