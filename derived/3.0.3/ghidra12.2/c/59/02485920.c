
/* WARNING: Removing unreachable block (ram,0x02485c88) */
/* WARNING: Type propagation algorithm not settling */

void FUN_02485920(long param_1)

{
  int iVar1;
  byte bVar2;
  ushort uVar3;
  char cVar4;
  int iVar5;
  undefined *puVar6;
  long lVar7;
  undefined4 *puVar8;
  long *plVar9;
  float *pfVar10;
  ulong uVar11;
  undefined8 *puVar12;
  int iVar13;
  int iVar14;
  float fVar15;
  float local_5c;
  undefined4 local_58;
  float local_54;
  undefined8 local_50;
  undefined8 local_48;
  
  if (*(int *)(param_1 + 0x178) != 0) {
    iVar13 = *(int *)(param_1 + 0x18e5);
    iVar14 = *(int *)(param_1 + 0x18eb);
    lVar7 = FUN_0251e98c(1);
    puVar8 = (undefined4 *)(**(code **)(*(long *)(lVar7 + 0x1380) + 0xf0))(lVar7 + 0x1380);
    local_58 = 0;
    puVar12 = &DAT_054e9a58;
    if (*(undefined8 **)(param_1 + 0x4c8) != (undefined8 *)0x0) {
      puVar12 = *(undefined8 **)(param_1 + 0x4c8);
    }
    local_50 = (undefined *)(puVar12[0x4f] & 0xffffffff);
    local_48 = (char *)CONCAT44(local_48._4_4_,*(undefined4 *)(puVar12 + 0x50));
    local_5c = (float)iVar13 * 0.001;
    local_54 = (float)iVar14 * 0.001;
    FUN_03eb4b60(*puVar8,0x41200000,0x3e4ccccc,&local_50,&local_5c);
    *(undefined4 *)(puVar12 + 0x4f) = (undefined4)local_50;
    *(undefined4 *)(puVar12 + 0x50) = (undefined4)local_48;
  }
  if ((*(uint *)(param_1 + 0x17d4) >> 4 & 1) == 0) {
    if (*(uint *)(param_1 + 0x1c04) < (uint)*(ushort *)(param_1 + 0x1905)) {
      return;
    }
    *(uint *)(param_1 + 0x17d4) = *(uint *)(param_1 + 0x17d4) | 0x10;
    local_5c = (float)(uint)*(byte *)(param_1 + 0x1901);
    if (3 < (uint)local_5c) {
      local_5c = 0.0;
    }
    puVar12 = *(undefined8 **)(param_1 + 0x60);
    if (puVar12 == (undefined8 *)0x0) {
      if (((DAT_052461c0 & 1) == 0) && (iVar13 = __cxa_guard_acquire(&DAT_052461c0), iVar13 != 0)) {
        FUN_016fcf10(&DAT_05240280);
        FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_052461c0);
        puVar12 = &DAT_05240280;
      }
      else {
        puVar12 = &DAT_05240280;
      }
    }
    puVar6 = PTR_DAT_04bb2020;
    local_50 = PTR_DAT_04bb2020 + 0x10;
    local_48 = "ChangeStickAnimType";
    if (((puVar12[0x227] != 0) && (lVar7 = *(long *)(puVar12[0x227] + 0x78), lVar7 != 0)) &&
       (plVar9 = *(long **)(lVar7 + 0x48), plVar9 != (long *)0x0)) {
      (**(code **)(*plVar9 + 0x28))(plVar9,&local_50,local_5c);
    }
    puVar12 = *(undefined8 **)(param_1 + 0x60);
    if (puVar12 == (undefined8 *)0x0) {
      if ((DAT_052461c0 & 1) == 0) {
        iVar13 = __cxa_guard_acquire(&DAT_052461c0);
        puVar12 = &DAT_05240280;
        if (iVar13 != 0) {
          FUN_016fcf10(&DAT_05240280);
          FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
          __cxa_guard_release(&DAT_052461c0);
        }
      }
      else {
        puVar12 = &DAT_05240280;
      }
    }
    local_50 = puVar6 + 0x10;
    local_48 = "PlayerChangeStickChange";
    FUN_017081d0(puVar12,&local_50,6,0,0);
    return;
  }
  bVar2 = *(byte *)(param_1 + 0x1901);
  if (3 < bVar2) {
    bVar2 = 0;
  }
  if (bVar2 != 3) {
    uVar3 = *(ushort *)(param_1 + 0x1903);
    lVar7 = FUN_0251e98c(1);
    pfVar10 = (float *)(**(code **)(*(long *)(lVar7 + 0x13b0) + 0xf0))(lVar7 + 0x13b0);
    fVar15 = *pfVar10;
    if (*(int *)(param_1 + 0x178) == 0) {
      local_5c = 1.4013e-44;
      local_50 = (undefined *)CONCAT44(local_50._4_4_,10);
      if ((*(byte *)(param_1 + 0x18f5) >> 2 & 1) != 0) goto LAB_02485c00;
    }
    iVar13 = (uint)uVar3 * 0x10000;
    plVar9 = &DAT_054e9a58;
    if (*(long **)(param_1 + 0x4c8) != (long *)0x0) {
      plVar9 = *(long **)(param_1 + 0x4c8);
    }
    lVar7 = (**(code **)(*plVar9 + 0x148))();
    iVar14 = iVar13 - *(int *)(lVar7 + 4);
    if (0xb60b5e < iVar14 + 0x5b05afU) {
      iVar5 = 0x15555560;
      iVar13 = -0x15555560;
      iVar14 = (int)(fVar15 * (float)iVar14);
      if (iVar14 < 1) {
        iVar5 = -0x5b05b0;
      }
      else {
        iVar13 = 0x5b05b0;
      }
      iVar1 = iVar14;
      if (iVar5 <= iVar14) {
        iVar1 = iVar5;
      }
      if (iVar13 <= iVar14) {
        iVar13 = iVar1;
      }
      iVar13 = iVar13 + *(int *)(lVar7 + 4);
    }
    *(int *)(lVar7 + 4) = iVar13;
  }
LAB_02485c00:
  puVar12 = *(undefined8 **)(param_1 + 0x60);
  if (puVar12 == (undefined8 *)0x0) {
    if ((DAT_052461c0 & 1) == 0) {
      iVar13 = __cxa_guard_acquire(&DAT_052461c0);
      if (iVar13 != 0) {
        FUN_016fcf10(&DAT_05240280);
        FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_052461c0);
      }
      puVar12 = &DAT_05240280;
      lVar7 = DAT_052413b8;
    }
    else {
      puVar12 = &DAT_05240280;
      lVar7 = DAT_052413b8;
    }
  }
  else {
    lVar7 = puVar12[0x227];
  }
  if (lVar7 == 0) {
    local_5c = 0.0;
    puVar12 = *(undefined8 **)(param_1 + 0x60);
  }
  else {
    local_50._4_4_ = (undefined4)((ulong)local_50 >> 0x20);
    local_5c = (float)(*(uint *)((long)puVar12 + 0x1698) >> 1 & 1);
    local_50 = (undefined *)CONCAT44(local_50._4_4_,0x26);
    uVar11 = FUN_03850890(lVar7,0x26,0,local_5c);
    if ((uVar11 & 1) == 0) {
      puVar12 = *(undefined8 **)(param_1 + 0x60);
    }
    else {
      *(uint *)(param_1 + 0x17cc) = *(uint *)(param_1 + 0x17cc) & 0xfffffffe;
      bVar2 = *(byte *)(param_1 + 0x1ee8);
      cVar4 = *(char *)(param_1 + 0x1900);
      if (7 < bVar2) {
        bVar2 = 0xff;
      }
      local_50 = (undefined *)CONCAT71(local_50._1_7_,bVar2);
      FUN_0266b170(&local_50,(int)cVar4);
      local_5c = (float)CONCAT31(local_5c._1_3_,bVar2);
      FUN_0266a1c0(&local_5c,(uint)(int)cVar4 >> 7 & 1 ^ 1);
      FUN_023203ac(param_1,0,0);
      local_50 = (undefined *)((ulong)local_50 & 0xffffff0000000000);
      local_48 = (char *)CONCAT17(local_48._7_1_,6);
      local_48 = (char *)CONCAT26(local_48._6_2_,6);
      FUN_02321e44(&local_5c,param_1,&local_50);
      puVar12 = *(undefined8 **)(param_1 + 0x60);
    }
  }
  if (puVar12 == (undefined8 *)0x0) {
    if (((DAT_052461c0 & 1) == 0) && (iVar13 = __cxa_guard_acquire(&DAT_052461c0), iVar13 != 0)) {
      FUN_016fcf10(&DAT_05240280);
      FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
      __cxa_guard_release(&DAT_052461c0);
      puVar12 = &DAT_05240280;
      lVar7 = DAT_052413b8;
    }
    else {
      puVar12 = &DAT_05240280;
      lVar7 = DAT_052413b8;
    }
  }
  else {
    lVar7 = *(long *)((long)puVar12 + 0x1138);
  }
  if (lVar7 == 0) {
    uVar11 = FUN_0170a6d0(puVar12,0);
  }
  else {
    local_50._4_4_ = (undefined4)((ulong)local_50 >> 0x20);
    local_50 = (undefined *)CONCAT44(local_50._4_4_,1);
    uVar11 = FUN_0170a6d0(puVar12,*(uint *)(puVar12 + 0x2d3) >> 1 & 1);
  }
  if ((uVar11 & 1) != 0) {
    if (*(int *)(param_1 + 0x178) == 0) {
      local_48 = (char *)((ulong)local_48 & 0xffffff0000000000);
      local_50 = (undefined *)0x1000000000006;
      FUN_02374564(param_1,&local_50);
    }
    else {
      *(uint *)(param_1 + 0x17cc) = *(uint *)(param_1 + 0x17cc) | 8;
      FUN_023164ec(param_1,6);
    }
  }
  return;
}

