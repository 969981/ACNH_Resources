
void FUN_021252f0(long param_1,long *param_2,undefined4 *param_3)

{
  uint uVar1;
  uint *puVar2;
  undefined *__dest;
  long *plVar3;
  uint uVar4;
  undefined1 *puVar5;
  undefined *puVar6;
  bool bVar7;
  int iVar8;
  undefined1 *__src;
  uint uVar9;
  undefined8 *puVar10;
  ulong uVar11;
  undefined4 uVar12;
  long *plVar13;
  long lVar14;
  uint uVar15;
  undefined **local_2b0;
  undefined *local_2a8;
  undefined1 *local_2a0;
  int local_298;
  undefined1 local_294 [31];
  undefined1 local_275;
  undefined4 local_270;
  undefined4 local_26c;
  undefined1 local_268;
  long local_264;
  long local_25c;
  undefined8 local_254;
  undefined **local_248;
  undefined *local_240;
  undefined8 local_238;
  undefined4 local_230;
  undefined4 uStack_22c;
  undefined4 local_228;
  undefined8 local_224;
  ulong local_21c;
  undefined4 local_214;
  undefined4 uStack_210;
  undefined4 local_20c;
  undefined8 local_208;
  undefined8 uStack_200;
  undefined4 local_1f8;
  undefined4 uStack_1f4;
  undefined4 local_1f0;
  undefined8 local_1ec;
  undefined8 local_1e4;
  undefined4 local_1dc;
  undefined4 uStack_1d8;
  undefined4 local_1d4;
  undefined8 local_1d0;
  undefined8 uStack_1c8;
  undefined4 local_1c0;
  undefined4 local_1bc;
  undefined4 local_1b8;
  undefined8 local_1b4;
  undefined8 local_1ac;
  undefined4 local_1a4;
  undefined4 local_1a0;
  undefined4 local_19c;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined4 local_188;
  undefined4 local_184;
  undefined4 local_180;
  undefined8 local_17c;
  undefined8 local_174;
  undefined4 local_16c;
  undefined4 local_168;
  undefined4 local_164;
  undefined1 auStack_160 [220];
  undefined4 local_84;
  undefined1 local_70;
  
  puVar2 = (uint *)(param_1 + 0x1e8);
  if (*(int *)(param_1 + 0x1e8) != 0) {
    plVar13 = *(long **)(param_1 + 0x1f0);
    uVar15 = 0;
    __dest = (undefined *)((long)&local_238 + 4);
    plVar3 = plVar13 + *(int *)(param_1 + 0x1e8);
    do {
      lVar14 = *plVar13;
      local_248 = (undefined **)CONCAT44(local_248._4_4_,*(int *)(lVar14 + 0x130));
      if (*(int *)(lVar14 + 0x130) == 1) {
        local_21c = local_21c & 0xffffffffffffff;
        uVar11 = (ulong)local_238 >> 0x20;
        local_238 = CONCAT44((uint)uVar11 & 0xffffff00,0x20);
        local_248 = &PTR_LAB_048f9700;
        local_240 = __dest;
        (**(code **)(*(long *)(lVar14 + 0xf8) + 0x18))((long *)(lVar14 + 0xf8));
        if (__dest != *(undefined **)(lVar14 + 0x100)) {
          iVar8 = 3;
          if ((int)local_238 < 4) {
            iVar8 = (int)local_238 + -1;
          }
          memcpy(__dest,*(undefined **)(lVar14 + 0x100),(long)iVar8);
          __dest[iVar8] = 0;
        }
        (**(code **)(*param_2 + 0x18))(param_2);
        local_2a8 = (undefined *)param_2[1];
        local_2b0 = &PTR_LAB_048f9770;
        (*(code *)local_248[3])(&local_248);
        (*(code *)local_248[3])(&local_248);
        puVar6 = local_240;
        (*(code *)local_2b0[3])(&local_2b0);
        if (puVar6 != local_2a8) {
          uVar11 = 0;
          bVar7 = true;
          do {
            if (local_240[uVar11] != local_2a8[uVar11]) break;
            if (local_240[uVar11] == '\0') {
              if (bVar7) goto LAB_021254c0;
              break;
            }
            if (local_240[uVar11 + 1] != local_2a8[uVar11 + 1]) break;
            if (local_240[uVar11 + 1] == '\0') goto LAB_021254c0;
            if (local_240[uVar11 + 2] != local_2a8[uVar11 + 2]) break;
            if (local_240[uVar11 + 2] == '\0') goto LAB_021254c0;
            bVar7 = uVar11 < 0x7fffe;
            uVar11 = uVar11 + 3;
          } while (uVar11 != 0x80001);
          goto LAB_02125374;
        }
LAB_021254c0:
        if (uVar15 == 0) goto LAB_02125964;
        if (uVar15 != 0xffffffff) {
          if (uVar15 < *puVar2) {
            lVar14 = *(long *)(*(long *)(param_1 + 0x1f0) + (long)(int)uVar15 * 8);
          }
          else {
            lVar14 = 0;
          }
          local_240 = *(undefined **)(lVar14 + 8);
          local_238 = *(undefined8 *)(lVar14 + 0x10);
          local_224 = *(undefined8 *)(lVar14 + 0x24);
          local_248 = &PTR_LAB_04a74eb0;
          local_230 = *(undefined4 *)(lVar14 + 0x18);
          uStack_22c = *(undefined4 *)(lVar14 + 0x1c);
          local_228 = *(undefined4 *)(lVar14 + 0x20);
          local_21c = *(ulong *)(lVar14 + 0x2c);
          local_214 = *(undefined4 *)(lVar14 + 0x34);
          uStack_210 = *(undefined4 *)(lVar14 + 0x38);
          local_20c = *(undefined4 *)(lVar14 + 0x3c);
          local_208 = *(undefined8 *)(lVar14 + 0x40);
          uStack_200 = *(undefined8 *)(lVar14 + 0x48);
          local_1e4 = *(undefined8 *)(lVar14 + 100);
          local_1f8 = *(undefined4 *)(lVar14 + 0x50);
          uStack_1f4 = *(undefined4 *)(lVar14 + 0x54);
          local_1f0 = *(undefined4 *)(lVar14 + 0x58);
          local_1ec = *(undefined8 *)(lVar14 + 0x5c);
          local_1dc = *(undefined4 *)(lVar14 + 0x6c);
          uStack_1d8 = *(undefined4 *)(lVar14 + 0x70);
          local_1d4 = *(undefined4 *)(lVar14 + 0x74);
          local_1d0 = *(undefined8 *)(lVar14 + 0x78);
          uStack_1c8 = *(undefined8 *)(lVar14 + 0x80);
          local_1ac = *(undefined8 *)(lVar14 + 0x9c);
          local_1c0 = *(undefined4 *)(lVar14 + 0x88);
          local_1bc = *(undefined4 *)(lVar14 + 0x8c);
          local_1b8 = *(undefined4 *)(lVar14 + 0x90);
          local_1b4 = *(undefined8 *)(lVar14 + 0x94);
          local_1a4 = *(undefined4 *)(lVar14 + 0xa4);
          local_1a0 = *(undefined4 *)(lVar14 + 0xa8);
          local_19c = *(undefined4 *)(lVar14 + 0xac);
          local_198 = *(undefined8 *)(lVar14 + 0xb0);
          uStack_190 = *(undefined8 *)(lVar14 + 0xb8);
          local_174 = *(undefined8 *)(lVar14 + 0xd4);
          local_188 = *(undefined4 *)(lVar14 + 0xc0);
          local_184 = *(undefined4 *)(lVar14 + 0xc4);
          local_180 = *(undefined4 *)(lVar14 + 200);
          local_17c = *(undefined8 *)(lVar14 + 0xcc);
          local_16c = *(undefined4 *)(lVar14 + 0xdc);
          local_168 = *(undefined4 *)(lVar14 + 0xe0);
          local_164 = *(undefined4 *)(lVar14 + 0xe4);
          FUN_02125f20(auStack_160,lVar14 + 0xe8);
          local_70 = *(undefined1 *)(lVar14 + 0x1d8);
          if ((int)uVar15 < (int)*puVar2) {
            lVar14 = (long)(int)uVar15;
            do {
              puVar10 = *(undefined8 **)(*(long *)(param_1 + 0x1f0) + lVar14 * 8);
              (**(code **)*puVar10)(puVar10);
              lVar14 = lVar14 + 1;
              *puVar10 = *(undefined8 *)(param_1 + 0x1f8);
              *(undefined8 **)(param_1 + 0x1f8) = puVar10;
            } while (lVar14 < (int)(uVar15 + 1));
          }
          if ((-1 < (int)uVar15) && (uVar9 = *puVar2, (int)uVar15 < (int)uVar9)) {
            uVar1 = uVar15 + 1;
            uVar4 = uVar9 - uVar1;
            if (uVar4 != 0 && (int)uVar1 <= (int)uVar9) {
              memmove((void *)(*(long *)(param_1 + 0x1f0) + (ulong)uVar15 * 8),
                      (void *)(*(long *)(param_1 + 0x1f0) + (ulong)uVar1 * 8),
                      -(ulong)(uVar4 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar4 << 3);
              uVar9 = *(uint *)(param_1 + 0x1e8);
            }
            *puVar2 = uVar9 - 1;
          }
          goto LAB_02125960;
        }
        break;
      }
      uVar15 = uVar15 + 1;
LAB_02125374:
      plVar13 = plVar13 + 1;
    } while (plVar13 != plVar3);
  }
  if (*(int *)(param_1 + 0x1ec) <= *(int *)(param_1 + 0x1e8)) {
    if (*(int *)(param_1 + 0x1530) < *(int *)(param_1 + 0x1534)) {
      uVar12 = *(undefined4 *)(*(long *)(*(long *)(param_1 + 0x1f0) + 0x48) + 0x1c4);
      puVar10 = *(undefined8 **)(param_1 + 0x1540);
      if (puVar10 != (undefined8 *)0x0) {
        *(undefined8 *)(param_1 + 0x1540) = *puVar10;
      }
      *(undefined4 *)puVar10 = uVar12;
      if (*(int *)(param_1 + 0x1530) < *(int *)(param_1 + 0x1534)) {
        *(undefined8 **)(*(long *)(param_1 + 0x1538) + (long)*(int *)(param_1 + 0x1530) * 8) =
             puVar10;
        *(int *)(param_1 + 0x1530) = *(int *)(param_1 + 0x1530) + 1;
      }
    }
    if (9 < (int)*puVar2) {
      puVar10 = *(undefined8 **)(*(long *)(param_1 + 0x1f0) + 0x48);
      (**(code **)*puVar10)(puVar10);
      *puVar10 = *(undefined8 *)(param_1 + 0x1f8);
      *(undefined8 **)(param_1 + 0x1f8) = puVar10;
      uVar15 = *(int *)(param_1 + 0x1e8) - 10;
      if (9 < *(int *)(param_1 + 0x1e8)) {
        if (uVar15 == 0) {
          uVar15 = 9;
        }
        else {
          memmove((void *)(*(long *)(param_1 + 0x1f0) + 0x48),
                  (void *)(*(long *)(param_1 + 0x1f0) + 0x50),(ulong)uVar15 << 3);
          uVar15 = *(int *)(param_1 + 0x1e8) - 1;
        }
        *puVar2 = uVar15;
      }
    }
  }
  FUN_021262ac(&local_248);
  local_275 = 0;
  local_298 = 0x20;
  local_294[0] = 0;
  local_2a0 = local_294;
  local_26c = 0;
  local_2a8 = PTR_DAT_04bb2028 + 0x10;
  local_268 = 0;
  local_264 = 0;
  local_25c = 0;
  local_254 = 0;
  local_2b0 = (undefined **)CONCAT44(local_2b0._4_4_,DAT_04c9a0c8);
  (**(code **)(*param_2 + 0x18))(param_2);
  puVar5 = local_2a0;
  __src = (undefined1 *)param_2[1];
  if (local_2a0 != __src) {
    lVar14 = 0;
    do {
      if (__src[lVar14] == '\0') goto LAB_0212581c;
      if (__src[lVar14 + 1] == '\0') {
        lVar14 = lVar14 + 1;
        goto LAB_0212581c;
      }
      if (__src[lVar14 + 2] == '\0') {
        lVar14 = lVar14 + 2;
        goto LAB_0212581c;
      }
      lVar14 = lVar14 + 3;
    } while (lVar14 != 0x80001);
    lVar14 = 0;
LAB_0212581c:
    iVar8 = (int)lVar14;
    if (local_298 <= (int)lVar14) {
      iVar8 = local_298 + -1;
    }
    memcpy(local_2a0,__src,(long)iVar8);
    puVar5[iVar8] = 0;
  }
  local_270 = (undefined4)param_2[7];
  local_26c = *(undefined4 *)((long)param_2 + 0x3c);
  local_264 = param_2[8];
  local_25c = param_2[9];
  if (*(int *)(param_1 + 0x1604) == 1) {
    uVar12 = 0;
    if (DAT_05aed670 != 0) {
      if (*(long *)(DAT_05aed670 + 0x330) == 0) {
        uVar12 = 0;
      }
      else {
        puVar10 = (undefined8 *)
                  (**(code **)(*DAT_05aed668 + 0x18))
                            (DAT_05aed668,*(undefined4 *)(DAT_05aed670 + 0x338));
        iVar8 = FUN_006bd550(*puVar10,0);
        uVar12 = 0;
        if ((iVar8 == 0x758f7eaf) && (uVar12 = 0, DAT_05aed670 != 0)) {
          uVar12 = 0;
          if (*(long *)(DAT_05aed670 + 0x330) != 0) {
            uVar12 = *(undefined4 *)(*(long *)(DAT_05aed670 + 0x330) + 0x248);
          }
        }
      }
    }
  }
  else {
    uVar12 = 7;
  }
  local_254 = CONCAT44(uVar12,(undefined4)local_254);
  FUN_0211db50(&local_248,&local_2b0);
  if (*(int *)(param_1 + 0x1530) == 0) {
    uVar12 = 0xffffffff;
  }
  else {
    puVar10 = (undefined8 *)**(undefined8 **)(param_1 + 0x1538);
    uVar12 = *(undefined4 *)puVar10;
    if (0 < *(int *)(param_1 + 0x1530)) {
      *puVar10 = *(undefined8 *)(param_1 + 0x1540);
      *(undefined8 **)(param_1 + 0x1540) = puVar10;
      uVar15 = *(int *)(param_1 + 0x1530) - 1;
      if (0 < *(int *)(param_1 + 0x1530)) {
        if (uVar15 == 0) {
          iVar8 = 0;
        }
        else {
          memmove(*(void **)(param_1 + 0x1538),(void *)((long)*(void **)(param_1 + 0x1538) + 8),
                  (ulong)uVar15 << 3);
          iVar8 = *(int *)(param_1 + 0x1530) + -1;
        }
        *(int *)(param_1 + 0x1530) = iVar8;
      }
    }
  }
  local_84 = uVar12;
LAB_02125960:
  FUN_021259a0(puVar2,&local_248);
LAB_02125964:
  *(undefined4 *)(**(long **)(param_1 + 0x1f0) + 0x1cc) = *param_3;
  return;
}

