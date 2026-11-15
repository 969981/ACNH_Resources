
/* WARNING: Removing unreachable block (ram,0x024e07b0) */
/* WARNING: Removing unreachable block (ram,0x024e08f0) */

void FUN_024e0718(long param_1)

{
  byte *pbVar1;
  long lVar2;
  byte bVar3;
  undefined1 uVar4;
  char cVar5;
  int iVar6;
  ulong uVar7;
  undefined8 *puVar8;
  undefined *local_80;
  char *local_78;
  undefined *local_70;
  uint local_68;
  uint uStack_64;
  undefined4 local_60;
  undefined8 local_5c;
  undefined4 local_54;
  undefined2 local_50;
  uint local_44;
  
  pbVar1 = (byte *)(param_1 + 0x1900);
  uVar7 = FUN_024e02d0(param_1,pbVar1,&local_80);
  if (((uVar7 & 1) != 0) || (6 < *(uint *)(param_1 + 0x1c04))) {
    puVar8 = *(undefined8 **)(param_1 + 0x60);
    if (puVar8 == (undefined8 *)0x0) {
      if ((DAT_052461c0 & 1) == 0) {
        iVar6 = __cxa_guard_acquire(&DAT_052461c0);
        puVar8 = &DAT_05240280;
        if (iVar6 != 0) {
          FUN_016fcf10(&DAT_05240280);
          FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
          __cxa_guard_release(&DAT_052461c0);
        }
      }
      else {
        puVar8 = &DAT_05240280;
      }
    }
    if (puVar8[0x227] == 0) {
      local_44 = 0;
    }
    else {
      local_44 = *(uint *)(puVar8 + 0x2d3) >> 1 & 1;
      local_80 = (undefined *)CONCAT44(local_80._4_4_,0x3d);
      uVar7 = FUN_03850890(puVar8[0x227],0x3d,0,local_44);
      if ((uVar7 & 1) != 0) {
        local_60 = 0;
        local_54 = 0xffffff;
        local_50 = 0;
        local_80 = PTR_DAT_04bb2010 + 0x10;
        local_68 = *pbVar1 & 0xfe;
        uStack_64 = *(byte *)(param_1 + 0x1901) & 0xfe;
        local_78 = (char *)((ulong)CONCAT14(*(byte *)(param_1 + 0x1901),(uint)*pbVar1) &
                           0xfe000000fe);
        local_5c = 0x800000006;
        local_70 = local_80;
        FUN_011e8d00(&local_80,1);
      }
    }
    if (*(int *)(param_1 + 0x178) == 0) {
      puVar8 = *(undefined8 **)(param_1 + 0x60);
      if (puVar8 == (undefined8 *)0x0) {
        if ((DAT_052461c0 & 1) == 0) {
          iVar6 = __cxa_guard_acquire(&DAT_052461c0);
          puVar8 = &DAT_05240280;
          if (iVar6 != 0) {
            FUN_016fcf10(&DAT_05240280);
            FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
            __cxa_guard_release(&DAT_052461c0);
          }
        }
        else {
          puVar8 = &DAT_05240280;
        }
      }
      if (puVar8[0x227] == 0) {
        local_44 = 0;
      }
      else {
        local_44 = *(uint *)(puVar8 + 0x2d3) >> 1 & 1;
        local_80 = (undefined *)CONCAT44(local_80._4_4_,0x4a);
        uVar7 = FUN_03850890(puVar8[0x227],0x4a,0,local_44);
        if ((uVar7 & 1) != 0) {
          bVar3 = *pbVar1;
          uVar4 = *(undefined1 *)(param_1 + 0x1901);
          cVar5 = *(char *)(param_1 + 0x1902);
          lVar2 = *(long *)PTR_DAT_04bb4f78 + 0x20 +
                  (ulong)(uint)*(byte *)(param_1 + 0x1ee8) * 0x740;
          if (7 < *(byte *)(param_1 + 0x1ee8)) {
            lVar2 = *(long *)PTR_DAT_04bb4f78 + 0x20;
          }
          *(undefined4 *)(lVar2 + 0xc) = 2;
          local_44 = FUN_01392d64(lVar2 + 0xb0);
          *(uint *)(lVar2 + 8) = local_44;
          *(int *)(lVar2 + 0xa8) = *(int *)(lVar2 + 0xa8) + 1;
          if (local_44 != 3) {
            if (local_44 == 1) {
              *(undefined8 *)(param_1 + 0x1988) = 0;
              *(undefined8 *)(param_1 + 0x1990) = 0;
              *(undefined8 *)(param_1 + 0x1998) = 0;
              *(undefined8 *)(param_1 + 0x19a0) = 0;
              *(undefined8 *)(param_1 + 0x1960) = *(undefined8 *)(param_1 + 0x18e0);
              *(bool *)(param_1 + 0x1982) = cVar5 != '\0';
              *(undefined8 *)(param_1 + 0x1968) = *(undefined8 *)(param_1 + 0x18e8);
              *(undefined8 *)(param_1 + 0x1970) = *(undefined8 *)(param_1 + 0x18f0);
              *(undefined8 *)(param_1 + 0x19a8) = 0;
              *(undefined8 *)(param_1 + 0x19b0) = 0;
              *(undefined8 *)(param_1 + 0x19b8) = 0;
              *(undefined8 *)(param_1 + 0x19c0) = 0;
              *(undefined8 *)(param_1 + 0x19c8) = 0;
              iVar6 = (int)((float)(int)*(short *)(param_1 + 0x1907) * 0.25 * 4.0);
              *(undefined8 *)(param_1 + 0x1978) = *(undefined8 *)(param_1 + 0x18f8);
              *(undefined8 *)(param_1 + 0x19d0) = 0;
              *(undefined2 *)(param_1 + 0x19d8) = 0;
              *(byte *)(param_1 + 0x1980) = bVar3;
              *(undefined1 *)(param_1 + 0x1981) = uVar4;
              *(undefined4 *)(param_1 + 0x1983) = *(undefined4 *)(param_1 + 0x1903);
              *(undefined4 *)(param_1 + 0x1989) = *(undefined4 *)(param_1 + 0x1909);
              if (0x7ffe < iVar6) {
                iVar6 = 0x7fff;
              }
              if (iVar6 < -0x7fff) {
                iVar6 = -0x8000;
              }
              *(short *)(param_1 + 0x1987) = (short)iVar6;
              local_80 = (undefined *)CONCAT44(local_80._4_4_,0x5f);
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
              lVar2 = 0;
              if (*(long *)(param_1 + 0x70) != 0) {
                lVar2 = *(long *)(param_1 + 0x70) + 0x278;
              }
              FUN_03ebb160(lVar2,0x5f);
              return;
            }
            uVar7 = FUN_02546f34(param_1 + 0x1ee8,*(undefined4 *)(param_1 + 0x230));
            if ((uVar7 & 1) == 0) {
              local_78 = (char *)((ulong)local_78 & 0xffffffff00000000);
              local_80 = (undefined *)CONCAT35(local_80._5_3_,0x100000006);
              FUN_02374e74(param_1,&local_80);
              return;
            }
            return;
          }
        }
      }
    }
    puVar8 = *(undefined8 **)(param_1 + 0x60);
    if (puVar8 == (undefined8 *)0x0) {
      if ((DAT_052461c0 & 1) == 0) {
        iVar6 = __cxa_guard_acquire(&DAT_052461c0);
        puVar8 = &DAT_05240280;
        if (iVar6 != 0) {
          FUN_016fcf10(&DAT_05240280);
          FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
          __cxa_guard_release(&DAT_052461c0);
        }
      }
      else {
        puVar8 = &DAT_05240280;
      }
    }
    local_80 = PTR_DAT_04bb2020 + 0x10;
    local_78 = "CommonTreeShakeReadyWait";
    FUN_017081d0(puVar8,&local_80,6,1,0);
  }
  return;
}

