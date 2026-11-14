
/* WARNING: Type propagation algorithm not settling */

undefined8 FUN_01c79ed0(long param_1)

{
  undefined8 *puVar1;
  long *plVar2;
  int iVar3;
  uint uVar4;
  long lVar5;
  uint uVar6;
  ulong uVar7;
  uint uVar8;
  uint uVar9;
  ushort *puVar10;
  long *plVar11;
  uint uVar12;
  undefined8 *local_3a0;
  undefined8 uStack_398;
  undefined1 *local_390;
  undefined8 *******pppppppuStack_388;
  undefined8 *******local_380;
  undefined8 *******local_378 [2];
  undefined8 *******local_368 [2];
  undefined8 *******local_358 [2];
  undefined8 ******local_348 [2];
  undefined8 *****local_338 [2];
  undefined8 ****local_328 [2];
  undefined8 ***local_318 [2];
  undefined8 **local_308 [2];
  undefined8 *local_2f8 [2];
  undefined8 local_2e8 [2];
  undefined1 auStack_2d8 [80];
  undefined8 local_288;
  undefined1 *local_280;
  undefined8 *******local_278;
  undefined8 *******local_270;
  undefined8 *******local_268 [2];
  undefined8 *******local_258 [2];
  undefined8 *******local_248 [2];
  undefined8 ******local_238 [2];
  undefined8 *****local_228 [2];
  undefined8 ****local_218 [2];
  undefined8 ***local_208 [2];
  undefined8 **local_1f8 [2];
  undefined8 *local_1e8 [2];
  undefined8 local_1d8 [2];
  undefined1 auStack_1c8 [80];
  undefined8 local_178;
  undefined4 local_a8;
  undefined4 local_a4;
  uint uStack_a0;
  undefined4 local_9c;
  undefined4 uStack_98;
  undefined8 local_94;
  undefined8 local_8c;
  undefined7 uStack_84;
  undefined1 local_7d;
  undefined7 uStack_7c;
  undefined1 uStack_75;
  undefined4 local_74;
  undefined4 uStack_70;
  undefined1 auStack_69 [9];
  
  puVar1 = (undefined8 *)(param_1 + 8);
  if (*(char *)(param_1 + 0x50) == '\0') {
    *(undefined4 *)(param_1 + 0x48) = 0;
    uVar6 = 0;
LAB_01c79f20:
    (*(code *)(&PTR_FUN_04a43380)[uVar6])(&local_3a0,puVar1);
LAB_01c79f38:
    *(undefined8 *)(param_1 + 0x38) = 0;
    *(undefined8 *)(param_1 + 0x40) = 0;
    *(undefined4 *)(param_1 + 0x48) = 2;
    *(undefined8 *)(param_1 + 0x28) = 0;
    *(undefined8 *)(param_1 + 0x30) = 0;
    *(undefined8 *)(param_1 + 0x18) = 0;
    *(undefined8 *)(param_1 + 0x20) = 0;
    *puVar1 = 0;
    *(undefined8 *)(param_1 + 0x10) = 0;
  }
  else {
    uVar6 = *(uint *)(param_1 + 0x48);
    if (uVar6 == 0xffffffff) goto LAB_01c79f38;
    if (uVar6 != 2) goto LAB_01c79f20;
  }
  uVar12 = 0x36170e33;
  memset((void *)(param_1 + 0x60),0,0x130);
  local_3a0 = (undefined8 *)0x0;
  *(undefined1 *)(param_1 + 400) = 1;
  nn::time::StandardNetworkSystemClock::GetCurrentTime((PosixTime *)&local_3a0);
  uStack_7c = 0;
  local_8c = 0;
  uStack_84 = 0;
  local_7d = 0;
  local_94 = 0;
  local_a4 = 0x22;
  *(undefined8 **)(param_1 + 0x60) = local_3a0;
  plVar11 = (long *)(param_1 + 0x10);
  local_9c = 0xa0028;
  uStack_98 = 0xa0002;
  local_74 = CONCAT31(local_74._1_3_,(char)*(undefined4 *)(param_1 + 0xc));
  uVar7 = *(ulong *)(param_1 + 0x18);
  uVar8 = (uint)uVar7;
  uVar6 = uVar12;
  if (3 < uVar8) {
    uVar9 = 4;
    do {
      uVar4 = uVar9 - 4;
      uVar9 = uVar9 + 4;
      iVar3 = *(int *)(*plVar11 + (ulong)uVar4);
      uVar6 = (iVar3 * 0x16a88000 | (uint)(iVar3 * -0x3361d2af) >> 0x11) * 0x1b873593 ^ uVar6;
      uVar6 = (uVar6 >> 0x13 | uVar6 << 0xd) * 5 + 0xe6546b64;
    } while (uVar9 <= uVar8);
  }
  uVar9 = uVar8 & 3;
  if ((uVar7 & 3) != 0) {
    puVar10 = (ushort *)((*plVar11 + (uVar7 & 0xffffffff)) - (uVar7 & 3));
    if (uVar9 == 1) {
      uVar9 = (uint)(byte)*puVar10;
    }
    else if (uVar9 == 2) {
      uVar9 = (uint)*puVar10;
    }
    else if (uVar9 == 3) {
      uVar9 = (uint)(byte)puVar10[1] << 0x10 | (uint)*(byte *)((long)puVar10 + 1) << 8 |
              (uint)(byte)*puVar10;
    }
    else {
      uVar9 = 0;
    }
    uVar6 = (uVar9 * 0x16a88000 | uVar9 * -0x3361d2af >> 0x11) * 0x1b873593 ^ uVar6;
  }
  local_3a0 = (undefined8 *)((ulong)local_3a0 & 0xffffffff00000000);
  uVar6 = (uVar6 ^ uVar8 ^ (uVar6 ^ uVar8) >> 0x10) * -0x7a143595;
  uStack_a0 = (uVar6 ^ uVar6 >> 0xd) * -0x3d4d51cb;
  uStack_a0 = uStack_a0 ^ uStack_a0 >> 0x10;
  if (*(char *)(param_1 + 0x50) == '\0') {
    *(undefined4 *)(param_1 + 0x48) = 0;
    uVar6 = 0;
LAB_01c7a0ec:
    (*(code *)(&PTR_FUN_04a43380)[uVar6])(&local_178,puVar1);
LAB_01c7a104:
    *(undefined8 *)(param_1 + 0x38) = 0;
    *(undefined8 *)(param_1 + 0x40) = 0;
    *(undefined4 *)(param_1 + 0x48) = 2;
    *(undefined8 *)(param_1 + 0x28) = 0;
    *(undefined8 *)(param_1 + 0x30) = 0;
    *(undefined8 *)(param_1 + 0x18) = 0;
    *(undefined8 *)(param_1 + 0x20) = 0;
    *puVar1 = 0;
    *(undefined8 *)(param_1 + 0x10) = 0;
  }
  else {
    uVar6 = *(uint *)(param_1 + 0x48);
    if (uVar6 == 0xffffffff) goto LAB_01c7a104;
    if (uVar6 != 2) goto LAB_01c7a0ec;
  }
  lVar5 = DAT_053512e0;
  plVar2 = plVar11 + ((ulong)local_3a0 & 0xffffffff) * 2;
  if (1 < (uint)local_3a0) {
    plVar2 = plVar11;
  }
  if (*plVar2 == 0) {
    if ((uint)local_3a0 != 1) {
      return 0;
    }
    if (*(char *)(param_1 + 0x30) == '\0') {
      return 0;
    }
    if (*(char *)(DAT_053512e0 + 0x421) == '\0') {
      return 0;
    }
    if (*(char *)(DAT_053512e0 + 0x420) == '\0') {
      return 0;
    }
    if (*(char *)(DAT_053512e0 + 0x3f0) == '\0') {
      memset((void *)(DAT_053512e0 + 0x288),0,0x168);
      *(undefined4 *)(lVar5 + 0x3d0) = 3;
LAB_01c7a4ec:
      uStack_70 = 0;
      *(undefined8 *)(lVar5 + 0x298) = 0;
    }
    else {
      if (*(char *)(DAT_053512e0 + 0x2a0) == '\0') goto LAB_01c7a4ec;
      uStack_70 = (undefined4)*(undefined8 *)(DAT_053512e0 + 0x298);
    }
    if (*(long *)(lVar5 + 0x290) == 0) {
      return 0;
    }
  }
  else {
    uStack_70 = (undefined4)plVar2[1];
  }
  local_178 = &local_a4;
  if (*(uint *)(DAT_05351250 + 0xb0) == 0xffffffff) {
                    /* WARNING: Subroutine does not return */
    FUN_00d72dc0();
  }
  local_3a0 = &local_178;
  uVar7 = (*(code *)(&PTR_LAB_04a43120)[*(uint *)(DAT_05351250 + 0xb0)])
                    (&local_3a0,DAT_05351250 + 0x58);
  if ((uVar7 & 1) == 0) {
    return 0;
  }
  local_368[0] = local_358;
  local_358[0] = local_348;
  local_a8 = 0;
  local_348[0] = local_338;
  pppppppuStack_388 = local_378;
  local_338[0] = local_328;
  local_378[0] = local_368;
  local_328[0] = local_318;
  local_318[0] = local_308;
  local_308[0] = local_2f8;
  local_2f8[0] = local_2e8;
  local_2e8[0] = 0;
  local_3a0 = (undefined8 *)0x0;
  uStack_398 = 0;
  local_390 = (undefined1 *)0x0;
  if (auStack_2d8 != (undefined1 *)0x0) {
    uStack_398 = 0xa00000000;
    local_390 = auStack_2d8;
  }
  local_288 = 0;
  local_280 = (undefined1 *)0x0;
  local_278 = local_268;
  local_268[0] = local_258;
  local_258[0] = local_248;
  local_248[0] = local_238;
  local_238[0] = local_228;
  local_228[0] = local_218;
  local_218[0] = local_208;
  local_208[0] = local_1f8;
  local_1f8[0] = local_1e8;
  local_1e8[0] = local_1d8;
  local_1d8[0] = 0;
  if (auStack_1c8 != (undefined1 *)0x0) {
    local_288 = 0xa00000000;
    local_280 = auStack_1c8;
  }
  local_380 = pppppppuStack_388;
  local_270 = local_278;
  FUN_034079f0(&local_3a0);
  FUN_01c70380(&local_178,&local_3a0);
  uVar7 = *(ulong *)(param_1 + 0x28);
  uVar6 = (uint)uVar7;
  if (3 < uVar6) {
    uVar8 = 4;
    do {
      uVar9 = uVar8 - 4;
      uVar8 = uVar8 + 4;
      iVar3 = *(int *)(*(long *)(param_1 + 0x20) + (ulong)uVar9);
      uVar12 = (iVar3 * 0x16a88000 | (uint)(iVar3 * -0x3361d2af) >> 0x11) * 0x1b873593 ^ uVar12;
      uVar12 = (uVar12 >> 0x13 | uVar12 << 0xd) * 5 + 0xe6546b64;
    } while (uVar8 <= uVar6);
  }
  uVar8 = uVar6 & 3;
  if ((uVar7 & 3) != 0) {
    puVar10 = (ushort *)((*(long *)(param_1 + 0x20) + (uVar7 & 0xffffffff)) - (uVar7 & 3));
    if (uVar8 == 1) {
      uVar8 = (uint)(byte)*puVar10;
    }
    else if (uVar8 == 2) {
      uVar8 = (uint)*puVar10;
    }
    else if (uVar8 == 3) {
      uVar8 = (uint)(byte)puVar10[1] << 0x10 | (uint)*(byte *)((long)puVar10 + 1) << 8 |
              (uint)(byte)*puVar10;
    }
    else {
      uVar8 = 0;
    }
    uVar12 = (uVar8 * 0x16a88000 | uVar8 * -0x3361d2af >> 0x11) * 0x1b873593 ^ uVar12;
  }
  uVar6 = (uVar12 ^ uVar6 ^ (uVar12 ^ uVar6) >> 0x10) * -0x7a143595;
  uVar6 = (uVar6 ^ uVar6 >> 0xd) * -0x3d4d51cb;
  local_178 = (undefined4 *)CONCAT44(uVar6 ^ uVar6 >> 0x10,0x22);
  local_3a0 = (undefined8 *)CONCAT44(local_3a0._4_4_,1);
  if (*(char *)(param_1 + 0x50) == '\0') {
    *(undefined4 *)(param_1 + 0x48) = 0;
    uVar6 = 0;
LAB_01c7a3d4:
    (*(code *)(&PTR_FUN_04a43380)[uVar6])(auStack_69,puVar1);
LAB_01c7a3ec:
    *(undefined8 *)(param_1 + 0x38) = 0;
    *(undefined8 *)(param_1 + 0x40) = 0;
    *(undefined4 *)(param_1 + 0x48) = 2;
    *(undefined8 *)(param_1 + 0x28) = 0;
    *(undefined8 *)(param_1 + 0x30) = 0;
    *(undefined8 *)(param_1 + 0x18) = 0;
    *(undefined8 *)(param_1 + 0x20) = 0;
    *puVar1 = 0;
    *(undefined8 *)(param_1 + 0x10) = 0;
  }
  else {
    uVar6 = *(uint *)(param_1 + 0x48);
    if (uVar6 == 0xffffffff) goto LAB_01c7a3ec;
    if (uVar6 != 2) goto LAB_01c7a3d4;
  }
  lVar5 = DAT_053512e0;
  plVar2 = plVar11 + ((ulong)local_3a0 & 0xffffffff) * 2;
  if (1 < (uint)local_3a0) {
    plVar2 = plVar11;
  }
  if (*plVar2 != 0) {
    local_a8 = (undefined4)plVar2[1];
    goto LAB_01c7a420;
  }
  if ((uint)local_3a0 != 1) {
    return 0;
  }
  if (*(char *)(param_1 + 0x30) == '\0') {
    return 0;
  }
  if (*(char *)(DAT_053512e0 + 0x421) == '\0') {
    return 0;
  }
  if (*(char *)(DAT_053512e0 + 0x420) == '\0') {
    return 0;
  }
  if (*(char *)(DAT_053512e0 + 0x3f0) == '\0') {
    memset((void *)(DAT_053512e0 + 0x288),0,0x168);
    *(undefined4 *)(lVar5 + 0x3d0) = 3;
LAB_01c7a51c:
    local_a8 = 0;
    *(undefined8 *)(lVar5 + 0x298) = 0;
  }
  else {
    if (*(char *)(DAT_053512e0 + 0x2a0) == '\0') goto LAB_01c7a51c;
    local_a8 = (undefined4)*(undefined8 *)(DAT_053512e0 + 0x298);
  }
  if (*(long *)(lVar5 + 0x290) == 0) {
    return 0;
  }
LAB_01c7a420:
  *(undefined1 *)(param_1 + 0x70) = 3;
  *(undefined8 *)(param_1 + 0x89) = local_8c;
  *(undefined8 *)(param_1 + 0x81) = local_94;
  *(ulong *)(param_1 + 0x91) = CONCAT17(local_7d,uStack_84);
  *(ulong *)(param_1 + 0x99) = CONCAT17(uStack_75,uStack_7c);
  *(ulong *)(param_1 + 0xa1) = CONCAT44(uStack_70,local_74);
  *(ulong *)(param_1 + 0x71) = CONCAT44(uStack_a0,local_a4);
  *(ulong *)(param_1 + 0x79) = CONCAT44(uStack_98,local_9c);
  *(undefined8 *)(param_1 + 0x68) = 0x39;
  *(undefined1 *)(param_1 + 0xb8) = 2;
  memcpy((void *)(param_1 + 0xb9),&local_178,0xd4);
  *(undefined8 *)(param_1 + 0xb0) = 0xd5;
  return 1;
}

