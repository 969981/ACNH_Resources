
undefined8 FUN_03f3f040(long param_1)

{
  char *pcVar1;
  int *piVar2;
  long *plVar3;
  byte bVar4;
  char cVar5;
  bool bVar6;
  uint uVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  int iVar11;
  ulong uVar12;
  byte bVar13;
  uint uVar14;
  long lVar15;
  ulong uVar16;
  long lVar17;
  undefined *local_198;
  undefined *puStack_190;
  uint local_188;
  ushort local_184;
  ulong local_180;
  undefined *local_178;
  undefined8 local_170;
  undefined local_168 [256];
  uint local_68;
  char local_64 [4];
  
  bVar4 = *(byte *)(param_1 + 9);
  *(undefined4 *)(param_1 + 0x10) = 7;
  local_178 = local_168;
  local_170 = 0x10000000000;
  lVar17 = param_1 + 0x360;
  local_168[0] = 0;
  uVar14 = bVar4 >> 3 & 2;
  if ((bVar4 & 8) != 0) {
    uVar14 = 1;
  }
  local_68 = uVar14;
  (**(code **)(*(long *)(param_1 + 0x360) + 0x18))(lVar17);
  puVar9 = local_178;
  lVar15 = 0;
  do {
    pcVar1 = (char *)((long)*(void **)(param_1 + 0x368) + lVar15);
    lVar15 = lVar15 + 1;
  } while (*pcVar1 != '\0');
  if (-1 < (int)local_170) {
    uVar7 = (int)lVar15 - 1;
    if (local_170._4_4_ <= (int)uVar7) {
      uVar7 = local_170._4_4_ - 1;
    }
    if (0 < (int)uVar7) {
      memcpy(local_178,*(void **)(param_1 + 0x368),(ulong)uVar7);
      puVar9[uVar7] = 0;
      if (-1 < (int)local_170) {
        local_170 = CONCAT44(local_170._4_4_,uVar7);
      }
    }
  }
  puVar9 = PTR_DAT_04bb49b8;
  if ((bVar4 & 0x18) != 0) {
    FUN_03f34470(*(undefined8 *)PTR_DAT_04bb49b8,&local_178);
  }
  puVar8 = PTR_DAT_04bb2020;
  local_180 = 0;
  local_184 = CONCAT11(bVar4 >> 2,bVar4 >> 1) & 0x101;
  local_198 = PTR_DAT_04bb2020 + 0x10;
  puStack_190 = local_178;
  local_188 = uVar14;
  FUN_03f3ed18(param_1,&local_180,&local_198);
  uVar16 = local_180;
  if (local_180 == 0) {
    if ((bVar4 & 0x1e) != 0) {
      if (((bVar4 & 6) != 0) && ((bVar4 & 0x18) != 0)) {
        local_168[0] = 0;
        local_178 = local_168;
        local_170 = 0x10000000000;
        (**(code **)(*(long *)(param_1 + 0x360) + 0x18))(lVar17);
        puVar10 = local_178;
        lVar15 = 0;
        do {
          pcVar1 = (char *)((long)*(void **)(param_1 + 0x368) + lVar15);
          lVar15 = lVar15 + 1;
        } while (*pcVar1 != '\0');
        if (-1 < (int)local_170) {
          uVar7 = (int)lVar15 - 1;
          if (local_170._4_4_ <= (int)uVar7) {
            uVar7 = local_170._4_4_ - 1;
          }
          if (0 < (int)uVar7) {
            memcpy(local_178,*(void **)(param_1 + 0x368),(ulong)uVar7);
            puVar10[uVar7] = 0;
            if (-1 < (int)local_170) {
              local_170 = CONCAT44(local_170._4_4_,uVar7);
            }
          }
        }
        FUN_03f34470(*(undefined8 *)puVar9,&local_178);
        local_198 = puVar8 + 0x10;
        local_180 = 0;
        local_184 = 0;
        puStack_190 = local_178;
        local_188 = uVar14;
        FUN_03f3ed18(param_1,&local_180,&local_198);
        if (local_180 != 0) {
          bVar4 = *(byte *)(param_1 + 9);
          *(byte *)(param_1 + 9) = bVar4 & 0xf9;
          uVar16 = local_180;
          if (local_68 == 1) {
            bVar13 = 8;
          }
          else {
            if (local_68 != 2) goto LAB_03f3f3f4;
            bVar13 = 0x10;
          }
          bVar13 = bVar13 | bVar4 & 0xe1;
          goto LAB_03f3f3f0;
        }
      }
      local_168[0] = 0;
      local_178 = local_168;
      local_170 = 0x10000000000;
      (**(code **)(*(long *)(param_1 + 0x360) + 0x18))(lVar17);
      puVar10 = local_178;
      lVar17 = 0;
      do {
        pcVar1 = (char *)((long)*(void **)(param_1 + 0x368) + lVar17);
        lVar17 = lVar17 + 1;
      } while (*pcVar1 != '\0');
      if (-1 < (int)local_170) {
        uVar14 = (int)lVar17 - 1;
        if (local_170._4_4_ <= (int)uVar14) {
          uVar14 = local_170._4_4_ - 1;
        }
        if (0 < (int)uVar14) {
          memcpy(local_178,*(void **)(param_1 + 0x368),(ulong)uVar14);
          puVar10[uVar14] = 0;
          if (-1 < (int)local_170) {
            local_170 = CONCAT44(local_170._4_4_,uVar14);
          }
        }
      }
      local_198 = puVar8 + 0x10;
      local_180 = 0;
      local_188 = 0;
      local_184 = 0;
      puStack_190 = local_178;
      FUN_03f3ed18(param_1,&local_180,&local_198);
      if (local_180 != 0) {
        bVar13 = *(byte *)(param_1 + 9) & 0xe1;
        uVar16 = local_180;
        goto LAB_03f3f3f0;
      }
    }
    uVar14 = *(uint *)(param_1 + 0xc);
    *(uint *)(param_1 + 0xc) = uVar14 | 0x100;
    if ((uVar14 >> 0x13 & 1) == 0) goto LAB_03f3f4ec;
    piVar2 = (int *)(param_1 + 0x90);
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar6) {
        *piVar2 = *piVar2 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  else {
    if (((*(byte *)(param_1 + 0xc) >> 5 & 1) != 0) && ((*(byte *)(param_1 + 9) & 0x18) != 0)) {
      local_198 = puVar8 + 0x10;
      puStack_190 = local_178;
      lVar17 = *(long *)(param_1 + 0x70);
      plVar3 = (long *)(*(long *)puVar9 + 0x678);
      if (*(long **)(param_1 + 0x348) != (long *)0x0) {
        plVar3 = *(long **)(param_1 + 0x348);
      }
      if (((*PTR_DAT_04bd0bf0 & 1) == 0) &&
         (iVar11 = __cxa_guard_acquire(PTR_DAT_04bd0bf0), iVar11 != 0)) {
        *(undefined **)PTR_DAT_04bd0be8 = PTR_DAT_04bc3650 + 0x10;
        __cxa_guard_release(PTR_DAT_04bd0bf0);
      }
      uVar12 = (**(code **)(*plVar3 + 0x10))(plVar3,PTR_DAT_04bd0be8);
      if ((uVar12 & 1) != 0) {
        if (lVar17 != 0) {
          plVar3[0x10] = lVar17;
        }
        local_64[0] = '\0';
        if ((char)plVar3[0xf] != '\0') {
          (**(code **)(*plVar3 + 0xc0))(plVar3,local_64,&local_198);
          if (local_64[0] != '\0') goto LAB_03f3f3f4;
        }
      }
      bVar13 = *(byte *)(param_1 + 9) & 0xe7;
LAB_03f3f3f0:
      *(byte *)(param_1 + 9) = bVar13;
    }
LAB_03f3f3f4:
    uVar14 = *(uint *)(param_1 + 0xc);
    if ((uVar14 & 1) != 0) {
      lVar17 = *(long *)(param_1 + 0x3f8);
      *(long *)(param_1 + 0x318) = lVar17;
      *(long *)(param_1 + 800) = lVar17;
      if (lVar17 == 0) {
        if ((uVar14 >> 0x13 & 1) == 0) {
          return 0;
        }
        piVar2 = (int *)(param_1 + 0x90);
        do {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar6) {
            *piVar2 = *piVar2 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        *(uint *)(param_1 + 0xc) = *(uint *)(param_1 + 0xc) & 0xfff7ffff;
        return 0;
      }
      goto LAB_03f3f484;
    }
    local_170 = *(undefined8 *)(param_1 + 0x368);
    local_178 = puVar8 + 0x10;
    lVar17 = *(long *)(param_1 + 0x28);
    if (lVar17 == 0) {
      local_198 = (undefined *)(uVar16 & 0xffffffff);
      lVar17 = (**(code **)(**(long **)(*(long *)puVar9 + 0x128) + 0x58))
                         (*(long **)(*(long *)puVar9 + 0x128),&local_198);
      if (lVar17 != 0) goto LAB_03f3f438;
    }
    else {
LAB_03f3f438:
      lVar15 = FUN_03f2b40c(lVar17,(undefined *)(uVar16 & 0xffffffff),&local_178,1,param_1,0);
      *(long *)(param_1 + 0x18) = lVar17;
      if (lVar15 != 0) {
        uVar14 = *(uint *)(param_1 + 0xc);
        *(long *)(param_1 + 0x20) = lVar17;
        *(long *)(param_1 + 0x318) = lVar15;
        *(long *)(param_1 + 800) = lVar15;
        *(long *)(param_1 + 0x3f8) = lVar15;
LAB_03f3f484:
        if (((uVar14 >> 0xf & 1) != 0) &&
           (*(long *)(param_1 + 0xb0) == 0 && *(long *)(param_1 + 0xa8) == 0)) {
          FUN_03f2bc40(*(undefined8 *)(param_1 + 0x20),param_1);
          uVar14 = *(uint *)(param_1 + 0xc);
        }
        if ((uVar14 >> 5 & 1) != 0) {
          FUN_03f3f590(param_1);
        }
        return 1;
      }
    }
    uVar14 = *(uint *)(param_1 + 0xc);
    *(uint *)(param_1 + 0xc) = uVar14 | 0x80;
    if ((uVar14 >> 0x13 & 1) == 0) goto LAB_03f3f4ec;
    piVar2 = (int *)(param_1 + 0x90);
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar6) {
        *piVar2 = *piVar2 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  *(uint *)(param_1 + 0xc) = *(uint *)(param_1 + 0xc) & 0xfff7ffff;
LAB_03f3f4ec:
  *(undefined4 *)(param_1 + 0x10) = 9;
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x2f8));
  return 0;
}

