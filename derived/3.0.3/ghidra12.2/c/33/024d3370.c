
/* WARNING: Removing unreachable block (ram,0x024d3610) */

void FUN_024d3370(long param_1)

{
  int iVar1;
  long *plVar2;
  int iVar3;
  undefined *puVar4;
  uint uVar5;
  int iVar6;
  long lVar7;
  undefined8 *puVar8;
  ulong uVar9;
  int iVar10;
  long lVar11;
  float fVar12;
  undefined4 uVar13;
  undefined8 local_58;
  undefined4 local_4c;
  undefined8 local_48;
  float local_40;
  undefined4 uStack_3c;
  long local_38;
  
  if ((*(uint *)(param_1 + 0x1810) & 0xfffffff7) == 1) {
    uVar5 = *(uint *)(param_1 + 0x17cc) & 0xffffffef | 0x100;
  }
  else {
    lVar7 = *(long *)(param_1 + 0x68);
    *(int *)(param_1 + 0x18e5) = (int)(*(float *)(lVar7 + 0x278) * 999.99994);
    iVar6 = (int)(*(float *)(lVar7 + 0x27c) * 4.0);
    if (0x7ffe < iVar6) {
      iVar6 = 0x7fff;
    }
    if (iVar6 < -0x7fff) {
      iVar6 = -0x8000;
    }
    *(short *)(param_1 + 0x18e9) = (short)iVar6;
    fVar12 = *(float *)(lVar7 + 0x280);
    *(undefined4 *)(param_1 + 0x1830) = 0;
    *(undefined4 *)(param_1 + 0x1828) = 0;
    *(int *)(param_1 + 0x18eb) = (int)(fVar12 * 999.99994);
    uVar5 = *(uint *)(param_1 + 0x17cc) & 0xfffffeef;
  }
  *(uint *)(param_1 + 0x17cc) = uVar5;
  if (*(uint *)(param_1 + 0x1810) - 2 < 3) {
    puVar8 = &DAT_054e9a58;
    if (*(undefined8 **)(param_1 + 0x4c8) != (undefined8 *)0x0) {
      puVar8 = *(undefined8 **)(param_1 + 0x4c8);
    }
    uVar13 = FUN_016e026c(0,*(long *)(param_1 + 0x68) + 0x278,0,0);
    *(undefined4 *)((long)puVar8 + 0x2ec) = uVar13;
    *(undefined1 *)((long)puVar8 + 0x2e5) = 1;
  }
  if (*(int *)(param_1 + 0x178) == 1) {
    puVar8 = &DAT_054e9a58;
    if (*(undefined8 **)(param_1 + 0x4c8) != (undefined8 *)0x0) {
      puVar8 = *(undefined8 **)(param_1 + 0x4c8);
    }
    local_48 = (undefined *)
               CONCAT44((float)(int)*(short *)(param_1 + 0x18e9) * 0.25,
                        (float)*(int *)(param_1 + 0x18e5) * 0.001);
    local_40 = (float)*(int *)(param_1 + 0x18eb) * 0.001;
    FUN_03eb4b60(0x3e4ccccd,0x41200000,0x3e4ccccc,puVar8 + 0x4f,&local_48);
    if (*(int *)(param_1 + 0x178) == 0) {
      local_58 = CONCAT44(local_58._4_4_,10);
      local_48 = (undefined *)CONCAT44(local_48._4_4_,10);
      if ((*(byte *)(param_1 + 0x18f5) >> 2 & 1) != 0) goto LAB_024d35c4;
    }
    iVar6 = (uint)*(ushort *)(param_1 + 0x18ef) * 0x10000;
    plVar2 = &DAT_054e9a58;
    if (*(long **)(param_1 + 0x4c8) != (long *)0x0) {
      plVar2 = *(long **)(param_1 + 0x4c8);
    }
    lVar7 = (**(code **)(*plVar2 + 0x148))();
    iVar3 = iVar6 - *(int *)(lVar7 + 4);
    if (0xb60b5e < iVar3 + 0x5b05afU) {
      iVar10 = (int)((float)iVar3 * 0.1666667);
      iVar3 = 0x10000000;
      if (iVar10 < 1) {
        iVar3 = -0x5b05b0;
      }
      iVar6 = -0x10000000;
      if (0 < iVar10) {
        iVar6 = 0x5b05b0;
      }
      iVar1 = iVar10;
      if (iVar3 <= iVar10) {
        iVar1 = iVar3;
      }
      if (iVar6 <= iVar10) {
        iVar6 = iVar1;
      }
      iVar6 = iVar6 + *(int *)(lVar7 + 4);
    }
    *(int *)(lVar7 + 4) = iVar6;
  }
LAB_024d35c4:
  puVar8 = *(undefined8 **)(param_1 + 0x60);
  if (puVar8 == (undefined8 *)0x0) {
    if (((DAT_052461c0 & 1) != 0) || (iVar6 = __cxa_guard_acquire(&DAT_052461c0), iVar6 == 0)) {
      puVar8 = &DAT_05240280;
      goto LAB_024d35e4;
    }
    FUN_016fcf10(&DAT_05240280);
    FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
    __cxa_guard_release(&DAT_052461c0);
    puVar8 = &DAT_05240280;
    if (DAT_052413b8 == 0) {
      uVar5 = 0;
      goto LAB_024d3614;
    }
  }
  else {
LAB_024d35e4:
    uVar5 = 0;
    if (puVar8[0x227] == 0) goto LAB_024d3614;
  }
  local_48 = (undefined *)CONCAT44(local_48._4_4_,1);
  uVar5 = *(uint *)(puVar8 + 0x2d3) >> 1 & 1;
LAB_024d3614:
  local_48 = (undefined *)CONCAT44(local_48._4_4_,uVar5);
  uVar9 = FUN_0073da08(puVar8,uVar5);
  if (((uVar9 & 1) != 0) && (*(int *)(param_1 + 0x178) == 0)) {
    puVar8 = *(undefined8 **)(param_1 + 0x60);
    if (puVar8 == (undefined8 *)0x0) {
      if (((DAT_052461c0 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_052461c0), iVar6 != 0)) {
        FUN_016fcf10(&DAT_05240280);
        FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_052461c0);
        puVar8 = &DAT_05240280;
      }
      else {
        puVar8 = &DAT_05240280;
      }
    }
    uVar9 = FUN_0073d6e0(puVar8,0);
    if (((uVar9 & 1) == 0) &&
       ((*(char *)(param_1 + 0x17ac) != '\0' ||
        (local_48 = (undefined *)((ulong)local_48 & 0xffffffff00000000),
        (*(uint *)(param_1 + 0xec8) & 1) == 0)))) {
      local_58 = 0xfffe;
      FUN_0277d4ac(&local_58);
      puVar4 = PTR_DAT_04bb43c0;
      local_58 = *(undefined8 *)(param_1 + 0x1900);
      lVar11 = *(long *)PTR_DAT_04bb43c0;
      uVar5 = FUN_0277d6c4(&local_58);
      lVar7 = *(long *)puVar4;
      if (lVar7 != 0) {
        lVar11 = *(long *)(lVar11 + 0x57e58);
        uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar11 + 0x1f8);
        if ((uVar5 < *(uint *)(lVar11 + 0x1d8)) &&
           (*(long *)(*(long *)(lVar11 + 0x1e0) + (long)(int)uVar5 * 8) != 0)) {
          local_38 = 0;
          local_48 = PTR_DAT_04bc0510 + 0x10;
          local_40 = (float)local_58;
          uStack_3c = local_58._4_4_;
          uVar5 = FUN_0277d6c4(&local_40);
          if (*(long *)puVar4 != 0) {
            lVar7 = *(long *)(lVar7 + 0x57e58);
            uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar7 + 0x1f8);
            if ((uVar5 < *(uint *)(lVar7 + 0x1d8)) &&
               (*(long *)(*(long *)(lVar7 + 0x1e0) + (long)(int)uVar5 * 8) != 0)) {
              lVar7 = *(long *)PTR_DAT_04bc0428;
              uVar5 = FUN_0277d6c4(&local_58);
              uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar7 + 0x1f8);
              if ((uVar5 < *(uint *)(lVar7 + 0x1d8)) &&
                 (lVar7 = *(long *)(*(long *)(lVar7 + 0x1e0) + (long)(int)uVar5 * 8), lVar7 != 0)) {
                local_38 = lVar7;
              }
            }
          }
          local_4c = FUN_01ad78cc(&local_48);
        }
      }
      if (**(char **)(PTR_PTR_04bb2238 + 8) == '\0') {
        uVar9 = FUN_02546f34(param_1 + 0x1ee8,*(undefined4 *)(param_1 + 0x230));
        if ((uVar9 & 1) == 0) {
          local_40 = 0.0;
          local_48 = (undefined *)CONCAT35(local_48._5_3_,0x100000006);
          FUN_02374e74(param_1,&local_48);
        }
      }
      else {
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
        *(undefined8 *)(param_1 + 0x1960) = *(undefined8 *)(param_1 + 0x18e0);
        *(undefined8 *)(param_1 + 0x19d0) = 0;
        *(undefined2 *)(param_1 + 0x19d8) = 0;
        *(undefined8 *)(param_1 + 0x1968) = *(undefined8 *)(param_1 + 0x18e8);
        *(undefined8 *)(param_1 + 0x1970) = *(undefined8 *)(param_1 + 0x18f0);
        *(undefined8 *)(param_1 + 0x1978) = *(undefined8 *)(param_1 + 0x18f8);
        local_48 = (undefined *)0xfffe;
        FUN_0277d4ac(&local_48);
        *(undefined8 *)(param_1 + 0x1980) = *(undefined8 *)(param_1 + 0x1900);
        local_58 = CONCAT44(local_58._4_4_,0x124);
        lVar11 = *(long *)(param_1 + 0x70);
        uVar5 = 0;
        lVar7 = 0;
        if (lVar11 != 0) {
          uVar5 = 0;
          if (*(uint *)(lVar11 + 0x280) < 0x149) {
            uVar5 = *(uint *)(lVar11 + 0x280);
          }
          lVar7 = lVar11 + 0x278;
        }
        if (uVar5 != 0x124) {
          local_48 = (undefined *)CONCAT44(local_48._4_4_,0x124);
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
          *(undefined8 *)(param_1 + 0x1870) = *(undefined8 *)(param_1 + 0x1970);
          *(undefined8 *)(param_1 + 0x1878) = *(undefined8 *)(param_1 + 0x1978);
          FUN_03ebb160(lVar7,0x124);
        }
      }
    }
  }
  return;
}

