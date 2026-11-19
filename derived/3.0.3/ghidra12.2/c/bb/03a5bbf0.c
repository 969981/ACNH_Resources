
void FUN_03a5bbf0(long param_1,uint param_2,uint param_3,uint param_4)

{
  ulong uVar1;
  MutexType *pMVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  long lVar8;
  long *plVar9;
  undefined8 *puVar10;
  long lVar11;
  long lVar12;
  long *plVar13;
  long lVar14;
  long lVar15;
  ulong uVar16;
  long lVar17;
  undefined8 local_78;
  uint local_70;
  uint uStack_6c;
  undefined8 local_68;
  
  lVar17 = *(long *)(param_1 + 2000);
  uVar3 = param_4;
  if (*(uint *)(param_1 + 0x7c8) <= param_4) {
    uVar3 = 0;
  }
  lVar8 = lVar17 + (long)(int)uVar3 * 0x600;
  lVar12 = *(long *)(lVar8 + 0x450);
  uVar4 = param_2;
  if (*(uint *)(lVar8 + 0x448) <= param_2) {
    uVar4 = 0;
  }
  if ((param_3 & 1) != 0) {
    lVar14 = 0;
    lVar15 = lVar17 + (long)(int)uVar3 * 0x600;
    lVar8 = lVar15 + 0x290;
    do {
      plVar9 = *(long **)(param_1 + 0x7e8 + lVar14);
      if (((plVar9 != (long *)0x0) && (*plVar9 == lVar15)) &&
         (plVar9 = *(long **)(lVar8 + lVar14), plVar9 != (long *)0x0)) {
        (**(code **)(*plVar9 + 0x88))();
        puVar10 = *(undefined8 **)(*(long *)(lVar8 + lVar14) + 0x18);
        *puVar10 = 0;
        *(undefined4 *)(puVar10 + 1) = 0;
        *(undefined8 *)(param_1 + 0x7e8 + lVar14) = 0;
      }
      lVar14 = lVar14 + 8;
    } while (lVar14 != 0x188);
    lVar8 = *(long *)(param_1 + 0x248);
    iVar7 = *(int *)(lVar8 + 0x4f30);
    if (iVar7 != 0) {
      lVar14 = *(long *)(lVar8 + 0x4f38);
      uVar16 = 0;
      do {
        FUN_0391ee00(*(undefined8 *)
                      (lVar14 + (-(uVar16 >> 0x1f) & 0xfffffff800000000 | uVar16 << 3)));
        uVar1 = uVar16 + 1;
        uVar16 = uVar1 & 0xffffffff;
      } while (iVar7 != (int)uVar1);
    }
    *(uint *)(lVar8 + 0x5168) = *(uint *)(lVar8 + 0x5168) | 1;
    *(ushort *)(lVar8 + 0x4f94) = *(ushort *)(lVar8 + 0x4f94) | 1;
  }
  lVar8 = 0;
  do {
    lVar14 = *(long *)(param_1 + 2000);
    uVar5 = param_4;
    if (*(uint *)(param_1 + 0x7c8) <= param_4) {
      uVar5 = 0;
    }
    plVar9 = *(long **)(lVar14 + (long)(int)uVar5 * 0x600 + lVar8 + 0x290);
    if (plVar9 != (long *)0x0) {
      lVar15 = lVar14 + (long)(int)uVar5 * 0x600;
      uVar6 = param_2;
      if (*(uint *)(lVar15 + 0x448) <= param_2) {
        uVar6 = 0;
      }
      lVar15 = *(long *)(*(long *)(lVar15 + 0x450) + (long)(int)uVar6 * 0x1f0 + lVar8 + 0x68);
      plVar9[7] = *(long *)(param_1 + 0x248);
      (**(code **)(*plVar9 + 0x70))(plVar9);
      if (lVar15 != 0) {
        lVar11 = *(long *)(lVar15 + 0x100);
        iVar7 = *(int *)(lVar15 + 0x108);
        plVar9[7] = *(long *)(param_1 + 0x248);
        plVar13 = (long *)plVar9[3];
        if (*plVar13 != lVar11 || (int)plVar13[1] != iVar7) {
          *plVar13 = lVar11;
          *(int *)(plVar13 + 1) = iVar7;
        }
        (**(code **)(*plVar9 + 0x80))(plVar9);
        (**(code **)(*plVar9 + 0x90))(plVar9,lVar15,lVar14 + (long)(int)uVar5 * 0x600 + 0x5d0);
        *(long *)(param_1 + 0x7e8 + lVar8) = lVar15;
      }
      (**(code **)(*plVar9 + 0x78))(plVar9);
    }
    lVar8 = lVar8 + 8;
  } while (lVar8 != 0x188);
  lVar8 = *(long *)(lVar12 + (long)(int)uVar4 * 0x1f0 + 0x108);
  if ((lVar8 != 0) && (lVar12 = *(long *)(*(long *)(param_1 + 0x248) + 0x55c0), lVar12 != 0)) {
    FUN_03964240(&local_68,*(undefined8 *)(lVar8 + 0x100));
    (**(code **)(*(long *)(lVar12 + 0xbf8) + 0x50))(lVar12 + 0xbf8,local_68);
  }
  *(uint *)(lVar17 + (long)(int)uVar3 * 0x600 + 0x4a0) = param_2;
  lVar17 = DAT_05ae9b00;
  if ((param_3 & 1) != 0) {
    lVar8 = *(long *)(param_1 + 0x248);
    pMVar2 = (MutexType *)(DAT_05ae9b00 + 0x138);
    nn::os::LockMutex(pMVar2);
    if (*(long *)(lVar17 + 0x160) != lVar17 + 0x158) {
      lVar14 = (long)*(int *)(lVar17 + 0x16c);
      lVar12 = *(long *)(lVar17 + 0x160) - lVar14;
      do {
        if (*(long *)(lVar12 + 0x70) == lVar8) {
          FUN_039a9000(lVar12);
        }
        lVar12 = *(long *)(lVar12 + lVar14 + 8) - lVar14;
      } while (lVar12 != (lVar17 + 0x158) - lVar14);
    }
    nn::os::UnlockMutex(pMVar2);
  }
  local_78 = *(undefined8 *)(param_1 + 0x248);
  puVar10 = *(undefined8 **)(param_1 + 0x978);
  *(int *)(param_1 + 0x980) = *(int *)(param_1 + 0x980) + 1;
  if (puVar10 != (undefined8 *)0x0) {
    local_70 = param_2;
    uStack_6c = param_4;
    (**(code **)*puVar10)(puVar10,&local_78);
  }
  return;
}

