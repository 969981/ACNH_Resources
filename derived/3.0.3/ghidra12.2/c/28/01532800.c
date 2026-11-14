
void FUN_01532800(long *param_1,long param_2)

{
  void *__dest;
  undefined *puVar1;
  undefined8 *puVar2;
  long lVar3;
  int iVar4;
  undefined4 uVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  short sVar8;
  void *__src;
  char *__src_00;
  undefined *puVar9;
  uint uVar10;
  long lVar11;
  long lVar12;
  undefined *local_138;
  char *pcStack_130;
  undefined *local_128;
  char *local_120;
  undefined **local_118;
  undefined *local_110;
  undefined8 local_108;
  undefined1 local_85;
  undefined *local_80;
  short local_78;
  undefined1 uStack_76;
  undefined1 uStack_75;
  undefined4 uStack_74;
  long local_70;
  short local_68;
  undefined1 local_66;
  undefined1 local_65;
  undefined4 local_64;
  undefined1 local_44 [4];
  
  puVar1 = PTR_DAT_04bb43c0;
  sVar8 = *(short *)(param_2 + 0x129c);
  uVar5 = *(undefined4 *)(param_2 + 0x12a0);
  uVar6 = *(undefined1 *)(param_2 + 0x129e);
  uVar7 = *(undefined1 *)(param_2 + 0x129f);
  lVar12 = *(long *)PTR_DAT_04bb43c0;
  local_68 = sVar8;
  local_66 = uVar6;
  local_65 = uVar7;
  local_64 = uVar5;
  uVar10 = FUN_0277d6c4(&local_68);
  lVar11 = *(long *)puVar1;
  if (lVar11 != 0) {
    lVar12 = *(long *)(lVar12 + 0x57e58);
    uVar10 = (uVar10 & 0xffff) - (uint)*(ushort *)(lVar12 + 0x1f8);
    if ((uVar10 < *(uint *)(lVar12 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar12 + 0x1e0) + (long)(int)uVar10 * 8) != 0 && sVar8 != -2)) {
      local_80 = PTR_DAT_04bc0510 + 0x10;
      local_70 = 0;
      local_78 = sVar8;
      uStack_76 = uVar6;
      uStack_75 = uVar7;
      uStack_74 = uVar5;
      uVar10 = FUN_0277d6c4(&local_78);
      if (*(long *)puVar1 != 0) {
        lVar11 = *(long *)(lVar11 + 0x57e58);
        uVar10 = (uVar10 & 0xffff) - (uint)*(ushort *)(lVar11 + 0x1f8);
        if ((uVar10 < *(uint *)(lVar11 + 0x1d8)) &&
           (*(long *)(*(long *)(lVar11 + 0x1e0) + (long)(int)uVar10 * 8) != 0)) {
          lVar11 = *(long *)PTR_DAT_04bc0428;
          uVar10 = FUN_0277d6c4(&local_68);
          uVar10 = (uVar10 & 0xffff) - (uint)*(ushort *)(lVar11 + 0x1f8);
          if ((uVar10 < *(uint *)(lVar11 + 0x1d8)) &&
             (lVar11 = *(long *)(*(long *)(lVar11 + 0x1e0) + (long)(int)uVar10 * 8), lVar11 != 0)) {
            local_70 = lVar11;
          }
        }
      }
      FUN_01ade5d0(&local_128,&local_80);
      local_108 = CONCAT44(local_108._4_4_,0x80);
      puVar1 = (undefined *)((long)&local_108 + 4);
      local_85 = 0;
      local_118 = &PTR_LAB_048fcff0;
      local_110 = puVar1;
      (**(code **)(local_128 + 0x18))(&local_128);
      __src_00 = local_120;
      if (puVar1 != local_120) {
        (**(code **)(local_128 + 0x18))(&local_128);
        lVar11 = 0;
        do {
          if (local_120[lVar11] == '\0') goto LAB_01532ba0;
          if (local_120[lVar11 + 1] == '\0') {
            lVar11 = lVar11 + 1;
            goto LAB_01532ba0;
          }
          if (local_120[lVar11 + 2] == '\0') {
            lVar11 = lVar11 + 2;
            goto LAB_01532ba0;
          }
          lVar11 = lVar11 + 3;
        } while (lVar11 != 0x80001);
        lVar11 = 0;
LAB_01532ba0:
        iVar4 = (int)lVar11;
        if ((int)local_108 <= (int)lVar11) {
          iVar4 = (int)local_108 + -1;
        }
        memcpy(puVar1,__src_00,(long)iVar4);
        puVar1[iVar4] = 0;
      }
      puVar9 = local_110;
      puVar1 = PTR_DAT_04bb2d88;
      puVar2 = (undefined8 *)((long)param_1 + 0x14);
      *(undefined4 *)(param_1 + 2) = 0x80;
      *(undefined1 *)((long)param_1 + 0x93) = 0;
      param_1[1] = (long)puVar2;
      local_118 = (undefined **)(puVar1 + 0x10);
      if (puVar2 != &DAT_0407ebb1) {
        *(undefined1 *)puVar2 = 0;
      }
      local_138 = PTR_DAT_04bb2020;
      *param_1 = (long)local_118;
      local_44[0] = 0;
      local_138 = local_138 + 0x10;
      local_120 = "FtrTorso";
      pcStack_130 = "FtrShoptorso";
      local_110[(long)(int)local_108 + -1] = 0;
      local_128 = local_138;
      (**(code **)(puVar1 + 0x28))(&local_118);
      lVar11 = 0;
      do {
        if (local_110[lVar11] == '\0') goto LAB_01532c8c;
        if (local_110[lVar11 + 1] == '\0') {
          lVar11 = lVar11 + 1;
          goto LAB_01532c8c;
        }
        if (local_110[lVar11 + 2] == '\0') {
          lVar11 = lVar11 + 2;
          goto LAB_01532c8c;
        }
        lVar11 = lVar11 + 3;
      } while (lVar11 != 0x80001);
      lVar11 = 0;
LAB_01532c8c:
      FUN_038d0770(puVar2,0,0x80,puVar9,lVar11,&local_128,&local_138,local_44);
      return;
    }
  }
  local_80 = (undefined *)0xfffe;
  FUN_0277d4ac(&local_80);
  lVar11 = *(long *)puVar1;
  local_108 = 0;
  local_118 = (undefined **)(PTR_DAT_04bc0510 + 0x10);
  local_110 = local_80;
  uVar10 = FUN_0277d6c4(&local_110);
  if (*(long *)puVar1 != 0) {
    lVar11 = *(long *)(lVar11 + 0x57e58);
    uVar10 = (uVar10 & 0xffff) - (uint)*(ushort *)(lVar11 + 0x1f8);
    if ((uVar10 < *(uint *)(lVar11 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar11 + 0x1e0) + (long)(int)uVar10 * 8) != 0)) {
      lVar11 = *(long *)PTR_DAT_04bc0428;
      uVar10 = FUN_0277d6c4(&local_80);
      uVar10 = (uVar10 & 0xffff) - (uint)*(ushort *)(lVar11 + 0x1f8);
      if ((uVar10 < *(uint *)(lVar11 + 0x1d8)) &&
         (lVar11 = *(long *)(*(long *)(lVar11 + 0x1e0) + (long)(int)uVar10 * 8), lVar11 != 0)) {
        local_108 = lVar11;
      }
    }
  }
  FUN_01adf970(&local_80,&local_118);
  __dest = (void *)((long)param_1 + 0x14);
  *(undefined4 *)(param_1 + 2) = 0x80;
  puVar1 = PTR_DAT_04bb2e90;
  *(undefined1 *)((long)param_1 + 0x93) = 0;
  *param_1 = (long)(puVar1 + 0x10);
  param_1[1] = (long)__dest;
  (**(code **)(local_80 + 0x18))(&local_80);
  __src = (void *)CONCAT44(uStack_74,CONCAT13(uStack_75,CONCAT12(uStack_76,local_78)));
  if (__dest != __src) {
    (**(code **)(local_80 + 0x18))(&local_80);
    lVar12 = CONCAT44(uStack_74,CONCAT13(uStack_75,CONCAT12(uStack_76,local_78)));
    lVar11 = 0;
    do {
      if (*(char *)(lVar12 + lVar11) == '\0') goto LAB_01532b3c;
      lVar3 = lVar12 + lVar11;
      if (*(char *)(lVar3 + 1) == '\0') {
        lVar11 = lVar11 + 1;
        goto LAB_01532b3c;
      }
      if (*(char *)(lVar3 + 2) == '\0') {
        lVar11 = lVar11 + 2;
        goto LAB_01532b3c;
      }
      lVar11 = lVar11 + 3;
    } while (lVar11 != 0x80001);
    lVar11 = 0;
LAB_01532b3c:
    iVar4 = (int)lVar11;
    if ((int)param_1[2] <= (int)lVar11) {
      iVar4 = (int)param_1[2] + -1;
    }
    memcpy(__dest,__src,(long)iVar4);
    *(undefined1 *)((long)__dest + (long)iVar4) = 0;
  }
  *param_1 = (long)&DAT_048fc708;
  return;
}

