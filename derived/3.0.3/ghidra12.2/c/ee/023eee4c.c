
/* WARNING: Removing unreachable block (ram,0x023eef00) */

void FUN_023eee4c(long param_1)

{
  uint uVar1;
  ulong uVar2;
  int iVar3;
  long lVar4;
  int *piVar5;
  undefined8 *puVar6;
  undefined4 uVar7;
  undefined8 local_170;
  undefined8 uStack_168;
  long local_160;
  long *local_158;
  uint local_14c;
  undefined8 local_148;
  undefined8 local_140;
  undefined4 local_138;
  undefined1 local_134 [255];
  undefined1 local_35;
  
  puVar6 = &DAT_054e9a58;
  if (*(undefined8 **)(param_1 + 0x4c8) != (undefined8 *)0x0) {
    puVar6 = *(undefined8 **)(param_1 + 0x4c8);
  }
  uVar7 = FUN_016e026c(0,*(long *)(param_1 + 0x68) + 0x278,0,0);
  *(undefined4 *)((long)puVar6 + 0x2ec) = uVar7;
  *(undefined1 *)((long)puVar6 + 0x2e5) = 1;
  puVar6 = *(undefined8 **)(param_1 + 0x60);
  local_160 = 0;
  local_158 = (long *)0x0;
  local_170 = 0;
  uStack_168 = 0;
  if (puVar6 == (undefined8 *)0x0) {
    if ((DAT_052461c0 & 1) == 0) {
      iVar3 = __cxa_guard_acquire(&DAT_052461c0);
      puVar6 = &DAT_05240280;
      if (iVar3 != 0) {
        FUN_016fcf10(&DAT_05240280);
        FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_052461c0);
      }
    }
    else {
      puVar6 = &DAT_05240280;
    }
  }
  if (puVar6[0x227] == 0) {
    local_14c = 0;
  }
  else {
    local_14c = *(uint *)(puVar6 + 0x2d3) >> 1 & 1;
    local_148 = (undefined *)CONCAT44(local_148._4_4_,0x11);
    uVar2 = FUN_03850890(puVar6[0x227],0x11,&local_170,local_14c);
    if (((uVar2 & 1) != 0) && (local_158 != (long *)0x0)) {
      if (*local_158 == 0) {
        local_35 = 0;
        local_138 = 0x100;
        local_140 = local_134;
        local_134[0] = 0;
        local_148 = PTR_DAT_04bb21f8 + 0x10;
        lVar4 = *(long *)(local_158[2] + 8);
        FUN_038d1270(&local_148,"%s.as",lVar4 + *(int *)(lVar4 + 0x24) + (long)*(int *)(lVar4 + 8));
      }
      else {
        iVar3 = *(int *)(*local_158 + 8);
        if (iVar3 < 0x60000000) {
          piVar5 = (int *)(*(long *)(local_158[2] + 8) + (long)iVar3);
          if (*piVar5 < 1) goto LAB_023ef010;
          piVar5 = (int *)(((ulong)(uint)piVar5[1] & 0xfffffff) + *(long *)(local_158[2] + 8) + 4);
        }
        else {
          uVar1 = iVar3 + 0xa0000000;
          if (*(uint *)(local_160 + 0x80) <= uVar1) {
            uVar1 = 0;
          }
          lVar4 = *(long *)(local_160 + 0x88) + (ulong)uVar1 * 0x32;
          piVar5 = (int *)(lVar4 + (ulong)*(byte *)(lVar4 + 0x20));
        }
        if (*piVar5 == 2) {
          local_148 = (undefined *)CONCAT44(local_148._4_4_,2);
          FUN_01509afc(*(long *)(param_1 + 0x68) + 0x278,&local_148);
        }
      }
    }
  }
LAB_023ef010:
  puVar6 = *(undefined8 **)(param_1 + 0x60);
  if (puVar6 == (undefined8 *)0x0) {
    if (((DAT_052461c0 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_052461c0), iVar3 != 0)) {
      FUN_016fcf10(&DAT_05240280);
      FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
      __cxa_guard_release(&DAT_052461c0);
      puVar6 = &DAT_05240280;
      lVar4 = DAT_052413b8;
      goto joined_r0x023ef034;
    }
    puVar6 = &DAT_05240280;
  }
  lVar4 = puVar6[0x227];
joined_r0x023ef034:
  if (lVar4 == 0) {
    uVar2 = FUN_0170a6d0(puVar6,0);
  }
  else {
    local_148._4_4_ = (float)((ulong)local_148 >> 0x20);
    local_148 = (undefined *)CONCAT44(local_148._4_4_,1);
    uVar2 = FUN_0170a6d0(puVar6,*(uint *)(puVar6 + 0x2d3) >> 1 & 1);
  }
  if ((uVar2 & 1) != 0) {
    local_148._4_4_ = (float)(int)*(short *)(param_1 + 0x1906) * 0.25;
    local_148._0_4_ = (float)*(int *)(param_1 + 0x1902) * 0.001;
    uVar2 = (ulong)local_140 >> 0x20;
    local_140 = (undefined1 *)CONCAT44((int)uVar2,(float)*(int *)(param_1 + 0x1908) * 0.001);
    (**(code **)(**(long **)(param_1 + 0x68) + 0x100))(*(long **)(param_1 + 0x68),&local_148);
    if (*(int *)(param_1 + 0x178) == 0) {
      *(undefined8 *)(param_1 + 0x1988) = 0;
      *(undefined8 *)(param_1 + 0x1990) = 0;
      *(undefined8 *)(param_1 + 0x1998) = 0;
      *(undefined8 *)(param_1 + 0x1960) = *(undefined8 *)(param_1 + 0x18e0);
      *(undefined8 *)(param_1 + 0x19a0) = 0;
      *(undefined8 *)(param_1 + 0x19a8) = 0;
      *(undefined8 *)(param_1 + 0x19b0) = 0;
      *(undefined8 *)(param_1 + 0x19b8) = 0;
      *(undefined8 *)(param_1 + 0x19c0) = 0;
      *(undefined8 *)(param_1 + 0x19c8) = 0;
      *(undefined8 *)(param_1 + 0x19d0) = 0;
      *(undefined2 *)(param_1 + 0x19d8) = 0;
      *(undefined8 *)(param_1 + 0x1968) = *(undefined8 *)(param_1 + 0x18e8);
      *(undefined8 *)(param_1 + 0x1970) = *(undefined8 *)(param_1 + 0x18f0);
      *(undefined8 *)(param_1 + 0x1978) = *(undefined8 *)(param_1 + 0x18f8);
      *(int *)(param_1 + 0x1982) = (int)((float)*(int *)(param_1 + 0x1902) * 0.001 * 999.99994);
      iVar3 = (int)((float)(int)*(short *)(param_1 + 0x1906) * 0.25 * 4.0);
      if (0x7ffe < iVar3) {
        iVar3 = 0x7fff;
      }
      if (iVar3 < -0x7fff) {
        iVar3 = -0x8000;
      }
      *(short *)(param_1 + 0x1986) = (short)iVar3;
      *(int *)(param_1 + 0x1988) = (int)((float)*(int *)(param_1 + 0x1908) * 0.001 * 999.99994);
      *(undefined2 *)(param_1 + 0x1980) = *(undefined2 *)(param_1 + 0x1900);
      local_148 = (undefined *)CONCAT44(local_148._4_4_,0x6f);
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
      lVar4 = 0;
      if (*(long *)(param_1 + 0x70) != 0) {
        lVar4 = *(long *)(param_1 + 0x70) + 0x278;
      }
      FUN_03ebb160(lVar4,0x6f);
    }
    else {
      FUN_0231b5b4(param_1,6);
    }
  }
  return;
}

