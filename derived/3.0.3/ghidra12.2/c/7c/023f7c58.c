
/* WARNING: Removing unreachable block (ram,0x023f7cd0) */

void FUN_023f7c58(long param_1)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  int *piVar5;
  undefined8 *puVar6;
  undefined4 uVar7;
  undefined8 local_168;
  undefined8 uStack_160;
  long local_158;
  long *local_150;
  undefined8 local_148;
  undefined1 *puStack_140;
  undefined4 local_138;
  undefined1 local_134 [255];
  undefined1 local_35;
  
  puVar6 = *(undefined8 **)(param_1 + 0x60);
  local_158 = 0;
  local_150 = (long *)0x0;
  local_168 = 0;
  uStack_160 = 0;
  if (puVar6 == (undefined8 *)0x0) {
    if ((DAT_052461c0 & 1) == 0) {
      iVar2 = __cxa_guard_acquire(&DAT_052461c0);
      puVar6 = &DAT_05240280;
      if (iVar2 != 0) {
        FUN_016fcf10(&DAT_05240280);
        FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_052461c0);
      }
    }
    else {
      puVar6 = &DAT_05240280;
    }
  }
  if (puVar6[0x227] != 0) {
    local_148 = (undefined *)CONCAT44(local_148._4_4_,0x11);
    uVar3 = FUN_03850890(puVar6[0x227],0x11,&local_168,*(uint *)(puVar6 + 0x2d3) >> 1 & 1);
    if (((uVar3 & 1) != 0) && (local_150 != (long *)0x0)) {
      if (*local_150 == 0) {
        local_35 = 0;
        local_138 = 0x100;
        puStack_140 = local_134;
        local_134[0] = 0;
        local_148 = PTR_DAT_04bb21f8 + 0x10;
        lVar4 = *(long *)(local_150[2] + 8);
        FUN_038d1270(&local_148,"%s.as",lVar4 + *(int *)(lVar4 + 0x24) + (long)*(int *)(lVar4 + 8));
      }
      else {
        iVar2 = *(int *)(*local_150 + 8);
        if (iVar2 < 0x60000000) {
          piVar5 = (int *)(*(long *)(local_150[2] + 8) + (long)iVar2);
          if (*piVar5 < 1) goto LAB_023f7de4;
          piVar5 = (int *)(((ulong)(uint)piVar5[1] & 0xfffffff) + *(long *)(local_150[2] + 8) + 4);
        }
        else {
          uVar1 = iVar2 + 0xa0000000;
          if (*(uint *)(local_158 + 0x80) <= uVar1) {
            uVar1 = 0;
          }
          lVar4 = *(long *)(local_158 + 0x88) + (ulong)uVar1 * 0x32;
          piVar5 = (int *)(lVar4 + (ulong)*(byte *)(lVar4 + 0x20));
        }
        if (*piVar5 == 8) {
          local_148 = (undefined *)CONCAT44(local_148._4_4_,7);
          FUN_01509afc(*(long *)(param_1 + 0x68) + 0x278,&local_148);
        }
      }
    }
  }
LAB_023f7de4:
  puVar6 = &DAT_054e9a58;
  if (*(undefined8 **)(param_1 + 0x4c8) != (undefined8 *)0x0) {
    puVar6 = *(undefined8 **)(param_1 + 0x4c8);
  }
  uVar7 = FUN_016e026c(0,*(long *)(param_1 + 0x68) + 0x278,0,0);
  *(undefined4 *)((long)puVar6 + 0x2ec) = uVar7;
  *(undefined1 *)((long)puVar6 + 0x2e5) = 1;
  puVar6 = *(undefined8 **)(param_1 + 0x60);
  if (puVar6 == (undefined8 *)0x0) {
    if (((DAT_052461c0 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_052461c0), iVar2 != 0)) {
      FUN_016fcf10(&DAT_05240280);
      FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
      __cxa_guard_release(&DAT_052461c0);
      puVar6 = &DAT_05240280;
      lVar4 = DAT_052413b8;
      goto joined_r0x023f7e40;
    }
    puVar6 = &DAT_05240280;
  }
  lVar4 = puVar6[0x227];
joined_r0x023f7e40:
  if (lVar4 == 0) {
    uVar3 = FUN_0170a6d0(puVar6,0);
  }
  else {
    local_148._4_4_ = (undefined4)((ulong)local_148 >> 0x20);
    local_148 = (undefined *)CONCAT44(local_148._4_4_,1);
    uVar3 = FUN_0170a6d0(puVar6,*(uint *)(puVar6 + 0x2d3) >> 1 & 1);
  }
  if (((uVar3 & 1) != 0) && (*(int *)(param_1 + 0x178) == 0)) {
    local_148._4_4_ = (undefined4)((ulong)local_148 >> 0x20);
    local_148 = (undefined *)CONCAT44(local_148._4_4_,0x66);
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
    lVar4 = 0;
    if (*(long *)(param_1 + 0x70) != 0) {
      lVar4 = *(long *)(param_1 + 0x70) + 0x278;
    }
    FUN_03ebb160(lVar4,0x66);
  }
  return;
}

