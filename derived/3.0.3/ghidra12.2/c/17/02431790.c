
/* WARNING: Removing unreachable block (ram,0x024319bc) */

void FUN_02431790(long param_1)

{
  int iVar1;
  char cVar2;
  ushort uVar3;
  int iVar4;
  bool bVar5;
  int iVar6;
  long lVar7;
  undefined4 *puVar8;
  float *pfVar9;
  ulong uVar10;
  ulong uVar11;
  int iVar12;
  undefined8 *puVar13;
  long *plVar14;
  char *pcVar15;
  uint uVar16;
  float fVar17;
  undefined4 uVar18;
  undefined8 local_70;
  char *local_68;
  uint local_5c;
  undefined4 local_58;
  undefined4 local_54;
  
  uVar18 = *(undefined4 *)(param_1 + 0x1908);
  uVar16 = *(uint *)(param_1 + 0x1902);
  lVar7 = FUN_0251e98c(1);
  puVar8 = (undefined4 *)(**(code **)(*(long *)(lVar7 + 0x1380) + 0xf0))(lVar7 + 0x1380);
  local_58 = 0;
  puVar13 = &DAT_054e9a58;
  if (*(undefined8 **)(param_1 + 0x4c8) != (undefined8 *)0x0) {
    puVar13 = *(undefined8 **)(param_1 + 0x4c8);
  }
  local_70 = (undefined *)(puVar13[0x4f] & 0xffffffff);
  local_68 = (char *)CONCAT44(local_68._4_4_,*(undefined4 *)(puVar13 + 0x50));
  local_5c = uVar16;
  local_54 = uVar18;
  FUN_03eb4b60(*puVar8,0x41200000,0x3e4ccccc,&local_70,&local_5c);
  *(undefined4 *)(puVar13 + 0x4f) = (undefined4)local_70;
  *(undefined4 *)(puVar13 + 0x50) = local_68._0_4_;
  uVar3 = *(ushort *)(param_1 + 0x18ef);
  lVar7 = FUN_0251e98c(1);
  pfVar9 = (float *)(**(code **)(*(long *)(lVar7 + 0x13b0) + 0xf0))(lVar7 + 0x13b0);
  fVar17 = *pfVar9;
  if (*(int *)(param_1 + 0x178) == 0) {
    local_5c = 10;
    local_70 = (undefined *)CONCAT44(local_70._4_4_,10);
    if ((*(byte *)(param_1 + 0x18f5) >> 2 & 1) == 0) goto LAB_024318c4;
  }
  else {
LAB_024318c4:
    iVar6 = (uint)uVar3 * 0x10000;
    plVar14 = &DAT_054e9a58;
    if (*(long **)(param_1 + 0x4c8) != (long *)0x0) {
      plVar14 = *(long **)(param_1 + 0x4c8);
    }
    lVar7 = (**(code **)(*plVar14 + 0x148))();
    iVar12 = iVar6 - *(int *)(lVar7 + 4);
    if (0xb60b5e < iVar12 + 0x5b05afU) {
      iVar4 = 0x15555560;
      iVar6 = -0x15555560;
      iVar12 = (int)(fVar17 * 0.6 * (float)iVar12);
      if (iVar12 < 1) {
        iVar4 = -0x5b05b0;
      }
      else {
        iVar6 = 0x5b05b0;
      }
      iVar1 = iVar12;
      if (iVar4 <= iVar12) {
        iVar1 = iVar4;
      }
      if (iVar6 <= iVar12) {
        iVar6 = iVar1;
      }
      iVar6 = iVar6 + *(int *)(lVar7 + 4);
    }
    *(int *)(lVar7 + 4) = iVar6;
  }
  puVar13 = *(undefined8 **)(param_1 + 0x60);
  if (puVar13 == (undefined8 *)0x0) {
    if ((DAT_052461c0 & 1) == 0) {
      iVar6 = __cxa_guard_acquire(&DAT_052461c0);
      puVar13 = &DAT_05240280;
      if (iVar6 != 0) {
        FUN_016fcf10(&DAT_05240280);
        FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_052461c0);
      }
    }
    else {
      puVar13 = &DAT_05240280;
    }
  }
  if (puVar13[0x227] == 0) {
    local_5c = 0;
    puVar13 = *(undefined8 **)(param_1 + 0x60);
  }
  else {
    local_5c = *(uint *)(puVar13 + 0x2d3) >> 1 & 1;
    local_70 = (undefined *)CONCAT44(local_70._4_4_,0x2d);
    uVar10 = FUN_03850890(puVar13[0x227],0x2d,0,local_5c);
    if ((uVar10 & 1) != 0) {
      uVar16 = (uint)*(byte *)(param_1 + 0x1ee8);
      bVar5 = 7 < uVar16;
      *(uint *)(param_1 + 0x17cc) = *(uint *)(param_1 + 0x17cc) & 0xfffffffe;
      if (bVar5) {
        uVar16 = 0xff;
      }
      lVar7 = *(long *)PTR_DAT_04bb4f78 + 0x20 + (ulong)uVar16 * 0x740;
      if (bVar5) {
        lVar7 = *(long *)PTR_DAT_04bb4f78 + 0x20;
      }
      if (*(short *)(param_1 + 0x18e1) != *(short *)PTR_DAT_04bb6298) {
        *(undefined4 *)(lVar7 + 0xc) = 4;
        puVar13 = *(undefined8 **)(param_1 + 0x60);
        goto joined_r0x024319b4;
      }
      *(undefined4 *)(lVar7 + 0xc) = 3;
      FUN_01393458(lVar7 + 0xb0);
    }
    puVar13 = *(undefined8 **)(param_1 + 0x60);
  }
joined_r0x024319b4:
  if (puVar13 == (undefined8 *)0x0) {
    if ((DAT_052461c0 & 1) == 0) {
      iVar6 = __cxa_guard_acquire(&DAT_052461c0);
      puVar13 = &DAT_05240280;
      if (iVar6 != 0) {
        FUN_016fcf10(&DAT_05240280);
        FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_052461c0);
      }
    }
    else {
      puVar13 = &DAT_05240280;
    }
  }
  local_5c = 0;
  local_70 = PTR_DAT_04bb2020 + 0x10;
  local_68 = "CommonPitfallWobbling";
  if (puVar13[0x227] == 0) {
LAB_02431b7c:
    uVar16 = 0;
    puVar13 = *(undefined8 **)(param_1 + 0x60);
  }
  else {
    lVar7 = *(long *)(puVar13[0x227] + 0x88);
    plVar14 = (long *)(lVar7 + 0x60);
    (**(code **)(*plVar14 + 0x18))(plVar14);
    (**(code **)(*plVar14 + 0x18))(plVar14);
    pcVar15 = *(char **)(lVar7 + 0x68);
    (**(code **)(local_70 + 0x18))(&local_70);
    if (pcVar15 != local_68) {
      cVar2 = **(char **)(lVar7 + 0x68);
      if (cVar2 != *local_68) goto LAB_02431b7c;
      if (cVar2 != '\0') {
        pcVar15 = *(char **)(lVar7 + 0x68) + 2;
        uVar10 = 0;
        do {
          uVar11 = uVar10;
          if (uVar11 == 0x80000) goto LAB_02431bb0;
          if (pcVar15[uVar11 - 1] != local_68[uVar11 + 1]) {
            pcVar15 = (char *)0x0;
            goto LAB_02431bb0;
          }
          if (pcVar15[uVar11 - 1] == '\0') goto LAB_02431b74;
          if (pcVar15[uVar11] != local_68[uVar11 + 2]) {
            pcVar15 = (char *)0x0;
            uVar11 = uVar11 | 1;
            goto LAB_02431bb0;
          }
          uVar10 = uVar11 + 2;
        } while (pcVar15[uVar11] != '\0');
        uVar11 = uVar11 + 1;
LAB_02431b74:
        pcVar15 = (char *)0x1;
LAB_02431bb0:
        uVar16 = (uint)(uVar11 < 0x80000) & (uint)pcVar15;
        puVar13 = *(undefined8 **)(param_1 + 0x60);
        goto joined_r0x02431b94;
      }
    }
    uVar16 = 1;
    puVar13 = *(undefined8 **)(param_1 + 0x60);
  }
joined_r0x02431b94:
  if (puVar13 == (undefined8 *)0x0) {
    if ((DAT_052461c0 & 1) == 0) {
      iVar6 = __cxa_guard_acquire(&DAT_052461c0);
      puVar13 = &DAT_05240280;
      if (iVar6 != 0) {
        FUN_016fcf10(&DAT_05240280);
        FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_052461c0);
      }
    }
    else {
      puVar13 = &DAT_05240280;
    }
  }
  if (uVar16 == 0) {
    local_70 = (undefined *)((ulong)local_70._4_4_ << 0x20);
    if ((puVar13[0x227] == 0) || (uVar10 = FUN_03850368(puVar13[0x227],0), (uVar10 & 1) == 0)) {
      puVar13 = *(undefined8 **)(param_1 + 0x60);
      if (puVar13 == (undefined8 *)0x0) {
        if ((DAT_052461c0 & 1) == 0) {
          iVar6 = __cxa_guard_acquire(&DAT_052461c0);
          puVar13 = &DAT_05240280;
          if (iVar6 != 0) {
            FUN_016fcf10(&DAT_05240280);
            FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
            __cxa_guard_release(&DAT_052461c0);
          }
        }
        else {
          puVar13 = &DAT_05240280;
        }
      }
      local_5c = 0;
      local_70 = (undefined *)((ulong)local_70 & 0xffffffff00000000);
      if ((((puVar13[0x227] == 0) ||
           (uVar10 = FUN_03850368(puVar13[0x227],0), uVar16 = local_5c, (uVar10 & 1) != 0)) ||
          (puVar13[0x227] == 0)) ||
         ((uVar10 = FUN_03850368(puVar13[0x227],local_5c), (uVar10 & 1) != 0 ||
          (uVar10 = FUN_0384fca4(puVar13[0x227],uVar16), (uVar10 & 1) != 0)))) {
        if (*(int *)(param_1 + 0x178) == 0) {
          *(undefined8 *)(param_1 + 0x1980) = 0;
          *(undefined8 *)(param_1 + 0x1988) = 0;
          *(undefined8 *)(param_1 + 0x1990) = 0;
          *(undefined8 *)(param_1 + 0x1998) = 0;
          *(undefined8 *)(param_1 + 0x19a0) = 0;
          *(undefined8 *)(param_1 + 0x19a8) = 0;
          *(undefined8 *)(param_1 + 0x19b0) = 0;
          *(undefined8 *)(param_1 + 0x19b8) = 0;
          *(undefined8 *)(param_1 + 0x19c0) = 0;
          *(undefined8 *)(param_1 + 0x19c8) = 0;
          *(undefined8 *)(param_1 + 0x19d0) = 0;
          *(undefined8 *)(param_1 + 0x1960) = *(undefined8 *)(param_1 + 0x18e0);
          *(undefined2 *)(param_1 + 0x19d8) = 0;
          *(undefined8 *)(param_1 + 0x1968) = *(undefined8 *)(param_1 + 0x18e8);
          *(undefined8 *)(param_1 + 0x1970) = *(undefined8 *)(param_1 + 0x18f0);
          *(undefined8 *)(param_1 + 0x1978) = *(undefined8 *)(param_1 + 0x18f8);
          *(undefined4 *)(param_1 + 0x1980) = 0x3f800000;
          local_70 = (undefined *)CONCAT44(local_70._4_4_,0xad);
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
          lVar7 = 0;
          if (*(long *)(param_1 + 0x70) != 0) {
            lVar7 = *(long *)(param_1 + 0x70) + 0x278;
          }
          FUN_03ebb160(lVar7,0xad);
        }
        else {
          puVar13 = *(undefined8 **)(param_1 + 0x60);
          if (puVar13 == (undefined8 *)0x0) {
            if ((DAT_052461c0 & 1) == 0) {
              iVar6 = __cxa_guard_acquire(&DAT_052461c0);
              puVar13 = &DAT_05240280;
              if (iVar6 != 0) {
                FUN_016fcf10(&DAT_05240280);
                FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
                __cxa_guard_release(&DAT_052461c0);
              }
            }
            else {
              puVar13 = &DAT_05240280;
            }
          }
          FUN_01713640(0x3f800000,puVar13);
        }
      }
    }
  }
  else {
    local_5c = 0;
    local_70 = (undefined *)((ulong)local_70._4_4_ << 0x20);
    if (((puVar13[0x227] == 0) ||
        (uVar10 = FUN_03850368(puVar13[0x227],0), uVar16 = local_5c, (uVar10 & 1) != 0)) ||
       ((puVar13[0x227] == 0 ||
        ((uVar10 = FUN_03850368(puVar13[0x227],local_5c), (uVar10 & 1) != 0 ||
         (uVar10 = FUN_0384fca4(puVar13[0x227],uVar16), (uVar10 & 1) != 0)))))) {
      puVar13 = *(undefined8 **)(param_1 + 0x60);
      if (puVar13 == (undefined8 *)0x0) {
        if ((DAT_052461c0 & 1) == 0) {
          iVar6 = __cxa_guard_acquire(&DAT_052461c0);
          puVar13 = &DAT_05240280;
          if (iVar6 != 0) {
            FUN_016fcf10(&DAT_05240280);
            FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
            __cxa_guard_release(&DAT_052461c0);
          }
        }
        else {
          puVar13 = &DAT_05240280;
        }
      }
      FUN_017133a0(puVar13);
    }
  }
  return;
}

