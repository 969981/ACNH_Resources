
void FUN_02e44af0(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  uint uVar5;
  undefined8 *puVar6;
  ulong uVar7;
  undefined8 *puVar8;
  ulong uVar9;
  int iVar10;
  long lVar11;
  int iVar12;
  long lVar13;
  int iVar14;
  long *plVar15;
  ulong uVar16;
  int *piVar17;
  long *plVar18;
  undefined4 local_5b8 [2];
  undefined *local_5b0;
  undefined8 *puStack_5a8;
  undefined4 local_5a0;
  undefined1 local_59c;
  undefined8 local_598;
  undefined8 uStack_590;
  undefined4 local_588;
  undefined *local_580;
  undefined1 *puStack_578;
  undefined4 local_570;
  undefined1 local_56c [63];
  undefined1 local_52d;
  undefined *local_528;
  undefined1 *puStack_520;
  undefined4 local_518;
  undefined1 local_514 [63];
  undefined1 local_4d5;
  undefined8 local_4d0;
  undefined6 uStack_4c8;
  undefined2 local_4c2;
  undefined6 uStack_4c0;
  undefined1 auStack_4ba [2];
  undefined4 local_4b8;
  undefined1 auStack_4b0 [8];
  long local_4a8;
  uint local_4a0;
  uint local_498 [2];
  long local_490;
  int local_288;
  undefined8 local_280;
  undefined8 local_278;
  undefined8 local_270;
  undefined4 local_268;
  undefined8 local_264;
  undefined8 uStack_25c;
  undefined8 local_254;
  undefined4 local_24c;
  undefined4 local_248;
  undefined4 local_240;
  undefined *local_238;
  undefined8 *local_230;
  undefined4 local_228;
  undefined1 local_224;
  undefined8 local_220;
  undefined8 local_218;
  undefined4 local_210;
  undefined *local_208;
  undefined1 *local_200;
  undefined4 local_1f8;
  undefined1 local_1f4 [63];
  undefined1 local_1b5;
  undefined *local_1b0;
  undefined1 *local_1a8;
  undefined4 local_1a0;
  undefined1 local_19c [63];
  undefined1 local_15d;
  undefined8 local_158;
  undefined6 uStack_150;
  undefined2 local_14a;
  undefined6 uStack_148;
  undefined1 auStack_142 [2];
  undefined4 local_140;
  undefined8 local_138;
  undefined8 local_130;
  undefined1 local_128;
  undefined1 local_127;
  undefined1 local_126;
  undefined1 local_125;
  undefined1 local_124;
  undefined1 local_123;
  undefined1 local_122;
  undefined1 local_121;
  undefined1 local_120;
  undefined2 local_11e;
  int local_70;
  
  *(undefined4 *)(param_1 + 0xd0) = 0;
  *(undefined4 *)(param_1 + 0xf0) = 0;
  *(int *)(param_1 + 0xe0) = 0;
  *(int *)(param_1 + 0x100) = 0;
  *(int *)(param_1 + 0x110) = 0;
  *(int *)(param_1 + 0x120) = 0;
  *(undefined4 *)(param_1 + 0x130) = 0;
  if (7 < *(byte *)(param_1 + 0x70)) {
    return;
  }
  FUN_02645730(auStack_4b0);
  lVar13 = local_4a8;
  if (local_4a8 == 0) {
    return;
  }
  if (*(long **)(local_4a8 + 0x28) == (long *)0x0) {
    uVar7 = 0;
  }
  else {
    puVar6 = (undefined8 *)**(long **)(local_4a8 + 0x28);
    uVar7 = 0;
    if (puVar6 != (undefined8 *)0x0) {
      uVar7 = (**(code **)*puVar6)();
    }
  }
  lVar11 = 0;
  plVar15 = (long *)(*(long *)(lVar13 + 0x10) + *(long *)(lVar13 + 8));
  while( true ) {
    uVar5 = *(uint *)((long)plVar15 + lVar11 + 0xaf00);
    plVar18 = plVar15 + (ulong)uVar5 * 0xe;
    if (399 < uVar5) {
      plVar18 = plVar15;
    }
    if ((*plVar18 != 0) && (*(int *)((long)plVar18 + 0x2c) != 0 && (int)plVar18[2] != 0)) break;
    lVar11 = lVar11 + 4;
    if (lVar11 == 0x640) {
      if ((uVar7 & 1) == 0) {
        return;
      }
      if (*(long *)(lVar13 + 0x28) == 0) {
        return;
      }
      puVar6 = *(undefined8 **)(*(long *)(lVar13 + 0x28) + 8);
      if (puVar6 == (undefined8 *)0x0) {
        return;
      }
      (**(code **)*puVar6)();
      return;
    }
  }
  if (((uVar7 & 1) != 0) &&
     ((*(long *)(lVar13 + 0x28) != 0 &&
      (puVar6 = *(undefined8 **)(*(long *)(lVar13 + 0x28) + 8), puVar6 != (undefined8 *)0x0)))) {
    (**(code **)*puVar6)();
  }
  if ((int)local_4a0 < 1) {
    return;
  }
  uVar7 = 0;
  puVar3 = auStack_4ba;
  if (auStack_4ba <= (undefined1 *)((long)&local_4d0 + 2U)) {
    puVar3 = (undefined1 *)((long)&local_4d0 + 2U);
  }
  puVar6 = (undefined8 *)((ulong)&local_280 | 4);
  puVar4 = auStack_142;
  if (auStack_142 <= (undefined1 *)((long)&local_158 + 2U)) {
    puVar4 = (undefined1 *)((long)&local_158 + 2U);
  }
  puVar1 = PTR_DAT_04bb2bc0 + 0x10;
  puVar2 = PTR_DAT_04bb5128 + 0x10;
  do {
    lVar13 = local_4a8;
    if (*(long **)(local_4a8 + 0x28) == (long *)0x0) {
      uVar9 = 0;
    }
    else {
      puVar8 = (undefined8 *)**(long **)(local_4a8 + 0x28);
      uVar9 = 0;
      if (puVar8 != (undefined8 *)0x0) {
        uVar9 = (**(code **)*puVar8)();
      }
    }
    plVar15 = (long *)(*(long *)(lVar13 + 0x10) + *(long *)(lVar13 + 8));
    plVar18 = plVar15;
    if ((uVar7 < 400) &&
       (uVar5 = *(uint *)((long)plVar15 + uVar7 * 4 + 0xaf00),
       plVar18 = plVar15 + (ulong)uVar5 * 0xe, 399 < uVar5)) {
      plVar18 = plVar15;
    }
    if ((((uVar9 & 1) != 0) && (*(long *)(lVar13 + 0x28) != 0)) &&
       (puVar8 = *(undefined8 **)(*(long *)(lVar13 + 0x28) + 8), puVar8 != (undefined8 *)0x0)) {
      (**(code **)*puVar8)();
    }
    if (((*(byte *)((long)plVar18 + 0x6e) & 1) != 0) || ((*(byte *)((long)plVar18 + 0x6e) & 6) == 6)
       ) {
      local_5a0 = 0xb;
      local_598 = 0xffffffff;
      uStack_590 = 0xffffffff00000000;
      local_588 = 0xffffffff;
      local_5b8[0] = 0;
      local_59c = 0;
      local_570 = 0x40;
      local_52d = 0;
      local_56c[0] = 0;
      local_518 = 0x40;
      local_4d5 = 0;
      local_514[0] = 0;
      local_4d0 = 0;
      uStack_4c8 = 0;
      local_4c2 = 0;
      uStack_4c0 = 0;
      local_5b0 = puVar2;
      puStack_5a8 = &local_4d0;
      local_580 = puVar1;
      puStack_578 = local_56c;
      local_528 = puVar1;
      puStack_520 = local_514;
      memset(&local_4d0,0,(ulong)(puVar3 + (-0xe1 - (long)&local_5b0)) & 0xfffffffffffffffc | 2);
      local_4b8 = 2;
      FUN_0082b014(&local_5b0);
      if ((((*(byte *)((long)plVar18 + 0x6e) ^ 0xff) & 6) == 0) &&
         (*(char *)(param_1 + 0x2b4) != '\0')) {
        iVar12 = *(int *)(*(long *)PTR_DAT_04bb8930 + 0x20);
        if (iVar12 != 0) {
          iVar10 = 0;
          iVar14 = 0;
          do {
            lVar13 = (long)iVar14;
            iVar14 = iVar14 + 1;
            if (*(long *)(*(long *)(*(long *)PTR_DAT_04bb8930 + 0x28) + lVar13 * 0x50 + 0x40) != 0)
            {
              iVar10 = iVar10 + 1;
            }
          } while (iVar12 != iVar14);
          if (iVar10 != 0) {
            FUN_01da6990(&local_280);
            uVar5 = *(uint *)(*(long *)PTR_DAT_04bb8930 + 0x20);
            if (uVar5 == 0) {
              uVar9 = 0;
            }
            else {
              lVar13 = *(long *)(*(long *)PTR_DAT_04bb8930 + 0x28);
              uVar9 = 0;
              uVar16 = 0;
              do {
                if ((*(long *)(lVar13 + (long)(int)uVar16 * 0x50 + 0x40) != 0) &&
                   ((*(byte *)(lVar13 + (long)(int)uVar16 * 0x50 + 0x48) >> 2 & 1) == 0))
                goto LAB_02e44eec;
                uVar9 = uVar16 + 1;
                uVar16 = uVar9 & 0xffffffff;
              } while (uVar5 != (uint)uVar9);
              uVar9 = (ulong)uVar5;
            }
LAB_02e44eec:
            FUN_01da6990(local_498,uVar9);
            while (local_288 != local_70) {
              if (local_490 == *plVar18) {
                if (((local_498[0] & 0xff ^ 0xffffffff) & 0x41) != 0) break;
                local_5b8[0] = 1;
                if (((byte)local_498[0] >> 1 & 1) == 0) {
                  if (((byte)local_498[0] >> 5 & 1) == 0) break;
                }
                else if (((byte)local_498[0] >> 2 & 1) != 0) break;
                local_5b8[0] = 2;
                break;
              }
              FUN_01da6c08(local_498);
            }
          }
        }
      }
      local_280 = 0;
      local_248 = 3;
      local_228 = 0xb;
      local_268 = CONCAT31(local_268._1_3_,2);
      *puVar6 = 0;
      puVar6[1] = 0;
      *(undefined4 *)(puVar6 + 2) = 0;
      local_254 = 0;
      local_24c = 0;
      local_240 = 0;
      local_224 = 0;
      local_220 = 0xffffffff;
      local_218 = 0xffffffff00000000;
      local_210 = 0xffffffff;
      local_1f8 = 0x40;
      local_1b5 = 0;
      local_1f4[0] = 0;
      local_264 = 0;
      uStack_25c = 0;
      local_208 = PTR_DAT_04bb2bc0 + 0x10;
      local_1a0 = 0x40;
      local_15d = 0;
      local_19c[0] = 0;
      local_238 = PTR_DAT_04bb5128 + 0x10;
      local_158 = 0;
      uStack_150 = 0;
      local_14a = 0;
      uStack_148 = 0;
      local_230 = &local_158;
      local_200 = local_1f4;
      local_1b0 = local_208;
      local_1a8 = local_19c;
      memset(&local_158,0,(ulong)(puVar4 + (-0xe1 - (long)&local_238)) & 0xfffffffffffffffc | 2);
      local_140 = 2;
      FUN_0082b014(&local_238);
      local_120 = 0;
      local_130 = 0;
      local_128 = 0;
      local_127 = 0;
      local_126 = 0;
      local_125 = 0;
      local_124 = 0;
      local_123 = 0;
      local_122 = 0;
      local_121 = 0;
      local_138 = 0;
      local_11e = *(undefined2 *)PTR_DAT_04bb3170;
      FUN_02e469f8(&local_280,plVar18,local_5b8);
      uVar5 = *(uint *)(param_1 + 0x130);
      if ((int)uVar5 < 400) {
        if (*(uint *)(param_1 + 0xc0) <= uVar5) {
          uVar5 = 0;
        }
        puVar8 = (undefined8 *)(*(long *)(param_1 + 200) + (long)(int)uVar5 * 0x168);
        *(undefined4 *)(puVar8 + 3) = local_268;
        *puVar8 = local_280;
        puVar8[1] = local_278;
        puVar8[2] = local_270;
        *(undefined4 *)((long)puVar8 + 0x34) = local_24c;
        *(undefined8 *)((long)puVar8 + 0x2c) = local_254;
        *(undefined8 *)((long)puVar8 + 0x24) = uStack_25c;
        *(undefined8 *)((long)puVar8 + 0x1c) = local_264;
        plVar15 = puVar8 + 9;
        (**(code **)(*plVar15 + 0x28))(plVar15,&local_238);
        (**(code **)(*plVar15 + 0x30))(plVar15,&local_238);
        *(undefined4 *)(puVar8 + 8) = local_240;
        *(undefined4 *)(puVar8 + 0x28) = local_140;
        *(undefined4 *)(puVar8 + 7) = local_248;
        puVar8[0x29] = local_138;
        puVar8[0x2a] = local_130;
        *(undefined1 *)(puVar8 + 0x2b) = local_128;
        *(undefined1 *)((long)puVar8 + 0x159) = local_127;
        *(undefined1 *)((long)puVar8 + 0x15a) = local_126;
        *(undefined1 *)((long)puVar8 + 0x15b) = local_125;
        *(undefined1 *)((long)puVar8 + 0x15c) = local_124;
        *(undefined1 *)((long)puVar8 + 0x15d) = local_123;
        *(undefined1 *)((long)puVar8 + 0x15e) = local_122;
        *(undefined1 *)((long)puVar8 + 0x15f) = local_121;
        *(undefined1 *)(puVar8 + 0x2c) = local_120;
        *(undefined2 *)((long)puVar8 + 0x162) = local_11e;
        uVar5 = *(uint *)(param_1 + 0x130);
        lVar13 = *(long *)(param_1 + 200);
        if (*(uint *)(param_1 + 0xc0) <= uVar5) {
          uVar5 = 0;
        }
        lVar11 = lVar13 + (long)(int)uVar5 * 0x168;
        if (*(int *)(param_1 + 0xd0) < *(int *)(param_1 + 0xd4)) {
          *(long *)(*(long *)(param_1 + 0xd8) + (long)*(int *)(param_1 + 0xd0) * 8) = lVar11;
          *(int *)(param_1 + 0xd0) = *(int *)(param_1 + 0xd0) + 1;
        }
        local_498[0] = *(uint *)(lVar13 + (long)(int)uVar5 * 0x168 + 0x38);
        switch(local_498[0]) {
        case 0:
          if (*(int *)(param_1 + 0xf0) < *(int *)(param_1 + 0xf4)) {
            *(long *)(*(long *)(param_1 + 0xf8) + (long)*(int *)(param_1 + 0xf0) * 8) = lVar11;
            *(int *)(param_1 + 0xf0) = *(int *)(param_1 + 0xf0) + 1;
          }
          if (*(int *)(lVar13 + (long)(int)uVar5 * 0x168 + 0x40) != 0) {
            iVar12 = *(int *)(param_1 + 0xe0);
            plVar15 = (long *)(param_1 + 0xe8);
            piVar17 = (int *)(param_1 + 0xe0);
            if (iVar12 < *(int *)(param_1 + 0xe4)) goto LAB_02e44ce8;
          }
          break;
        case 1:
          iVar12 = *(int *)(param_1 + 0x100);
          plVar15 = (long *)(param_1 + 0x108);
          piVar17 = (int *)(param_1 + 0x100);
          if (iVar12 < *(int *)(param_1 + 0x104)) {
LAB_02e44ce8:
            *(long *)(*plVar15 + (long)iVar12 * 8) = lVar11;
            *piVar17 = *piVar17 + 1;
          }
          break;
        case 2:
          iVar12 = *(int *)(param_1 + 0x110);
          plVar15 = (long *)(param_1 + 0x118);
          piVar17 = (int *)(param_1 + 0x110);
          if (iVar12 < *(int *)(param_1 + 0x114)) goto LAB_02e44ce8;
          break;
        case 3:
          iVar12 = *(int *)(param_1 + 0x120);
          plVar15 = (long *)(param_1 + 0x128);
          piVar17 = (int *)(param_1 + 0x120);
          if (iVar12 < *(int *)(param_1 + 0x124)) goto LAB_02e44ce8;
        }
        *(int *)(param_1 + 0x130) = *(int *)(param_1 + 0x130) + 1;
      }
    }
    uVar7 = uVar7 + 1;
    if (uVar7 == local_4a0) {
      return;
    }
  } while( true );
}

